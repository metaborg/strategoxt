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
Symbol sym_UndefineDynRule_2;
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
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
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
ATerm term_a_69;
ATerm term_z_68;
ATerm term_y_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_b_68;
ATerm term_l_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_i_67;
ATerm term_z_66;
ATerm term_t_66;
ATerm term_s_66;
ATerm term_r_66;
ATerm term_p_66;
ATerm term_o_66;
ATerm term_n_66;
ATerm term_m_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_z_65;
ATerm term_w_65;
ATerm term_v_65;
ATerm term_s_65;
ATerm term_r_65;
ATerm term_q_65;
ATerm term_g_65;
ATerm term_f_65;
ATerm term_e_65;
ATerm term_d_65;
ATerm term_y_64;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_i_64;
ATerm term_h_64;
ATerm term_d_64;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_f_62;
ATerm term_b_62;
ATerm term_r_61;
ATerm term_p_61;
ATerm term_m_61;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_t_60;
ATerm term_r_60;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_q_58;
ATerm term_w_56;
ATerm term_u_56;
ATerm term_q_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_c_56;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_b_50;
ATerm term_w_49;
ATerm term_r_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_n_46;
ATerm term_l_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_e_45;
ATerm term_b_45;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_z_42;
ATerm term_q_42;
ATerm term_l_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_b_39;
ATerm term_v_38;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_k_31;
ATerm term_b_31;
ATerm term_e_30;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_l_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_m_28;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_b_24;
ATerm term_h_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Op_2, term_r_22, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_20);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Op_2, term_k_25, (ATerm) ATempty);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Call_2, term_b_26, (ATerm) ATempty);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_27);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Call_2, term_s_27, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Call_2, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_RootApp_1, term_r_20);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_o_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_35);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_35);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_37);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Closure", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Var_1, term_h_42);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_42);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Build_1, term_p_24);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_42);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_45);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_46);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_46);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_49);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_51);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_56);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_56);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_t_60);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_m_61);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_b_62);
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_o_63);
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(sym__2, term_d_64, term_h_64);
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_64);
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(sym__2, term_m_64, term_r_63);
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_f_65);
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_d_64);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_v_65);
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(sym__2, term_v_64, term_w_64);
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(sym__2, term_m_66, term_r_63);
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_66));
  term_r_66 = (ATerm) ATmakeAppl(sym__2, term_p_66, term_r_63);
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(sym__2, term_v_65, term_r_63);
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(sym__3, term_v_64, term_w_64, (ATerm) ATempty);
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_m_66);
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(sym__2, term_b_62, term_r_63);
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm m_110 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm v_10 (ATerm c_143 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm c_143 (ATerm), ATerm t);
static ATerm h_18 (ATerm i_11, ATerm l_11, ATerm t);
static ATerm i_18 (ATerm x_12, ATerm i_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm w_141 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm x_10 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t);
static ATerm u_29 (ATerm i_29, ATerm t);
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
static ATerm y_10 (ATerm v_67, ATerm w_67, ATerm x_67, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm z_10 (ATerm b_143 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm d_143 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm b_11 (ATerm y_81, ATerm x_81, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm n_58 (ATerm w_57, ATerm t);
static ATerm o_58 (ATerm z_57, ATerm t);
static ATerm c_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm k_61 (ATerm o_60, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm k_11 (ATerm j_143 (ATerm), ATerm l_85, ATerm i_85, ATerm j_85, ATerm v_85, ATerm z_85, ATerm a_86, ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm j_143 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm q_111 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm g_143 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm n_11 (ATerm u_83, ATerm t_83, ATerm t);
ATerm repeat_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm i_118 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm n_101 (ATerm e_100, ATerm f_100, ATerm i_100, ATerm j_100, ATerm k_100, ATerm n_100, ATerm o_100, ATerm t);
static ATerm g_11 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_116 (ATerm), ATerm t);
static ATerm o_11 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm t);
static ATerm d_12 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm u_11 (ATerm j_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t);
static ATerm v_11 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
static ATerm w_11 (ATerm e_121 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
ATerm genzip_4_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm b_12 (ATerm i_673, ATerm n_673, ATerm v_66, ATerm t);
ATerm while_not_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm m_120 (ATerm b_119, ATerm h_119, ATerm i_119, ATerm t);
static ATerm x_15 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm free_vars_3_0 (ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm g_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm n_110 (ATerm), ATerm t);
static ATerm f_12 (ATerm p_60, ATerm q_60, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm g_12 (ATerm h_130 (ATerm), ATerm o_44, ATerm m_44, ATerm t);
static ATerm j_16 (ATerm t);
static ATerm l_16 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm h_12 (ATerm j_60, ATerm k_60, ATerm t);
ATerm end_scope_1_0 (ATerm e_130 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_130 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm b_125 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_117 (ATerm), ATerm t);
static ATerm g_127 (ATerm y_126, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_12 (ATerm j_35, ATerm v_34, ATerm t);
ATerm foldr_3_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
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
ATerm normalize_spec_0_0 (ATerm t);
static ATerm l_12 (ATerm e_40, ATerm f_40, ATerm t);
static ATerm m_12 (ATerm i_24, ATerm j_24, ATerm t);
static ATerm o_12 (ATerm p_116 (ATerm), ATerm y_182, ATerm o_24, ATerm t);
static ATerm n_12 (ATerm e_24, ATerm f_24, ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
ATerm output_1_0 (ATerm y_135 (ATerm), ATerm t);
static ATerm p_132 (ATerm j_132, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_12 (ATerm k_24, ATerm t);
static ATerm q_12 (ATerm x_38, ATerm y_38, ATerm t);
static ATerm r_12 (ATerm g_40, ATerm h_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_134 (ATerm a_133, ATerm t);
static ATerm c_134 (ATerm e_133, ATerm f_133, ATerm g_133, ATerm t);
static ATerm d_134 (ATerm o_133, ATerm p_133, ATerm q_133, ATerm t);
static ATerm s_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_135 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_13 (ATerm j_55, ATerm k_55, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm z_12 (ATerm e_60, ATerm f_60, ATerm d_60, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm j_18 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_12 (ATerm a_43, ATerm b_43, ATerm t);
ATerm foldr_2_0 (ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_132 (ATerm), ATerm t);
static ATerm p_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_18 (ATerm t);
ATerm need_help_1_0 (ATerm p_135 (ATerm), ATerm t);
static ATerm c_13 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm t);
ATerm lookup_table_0_1 (ATerm q_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_64, ATerm f_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_12 (ATerm b_64, ATerm c_64, ATerm t);
static ATerm w_12 (ATerm g_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_116 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_13 (ATerm z_63, ATerm a_64, ATerm t);
static ATerm y_12 (ATerm x_61, ATerm y_61, ATerm t);
static ATerm b_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_137 (ATerm), ATerm t);
static ATerm s_19 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm b_20 (ATerm t);
ATerm parse_options_1_0 (ATerm r_137 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm t);
static ATerm e_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm p_20 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_1, b_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_1 = ATgetArgument(t, 0);
          t = a_1;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_0 = ATgetFirst((ATermList) t);
              x_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_0, (ATerm) ATmakeAppl(sym_LChoices_1, x_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_1 = ATgetArgument(t, 0);
              t = a_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_0 = ATgetFirst((ATermList) t);
                  x_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_0, (ATerm) ATmakeAppl(sym_Choices_1, x_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_1 = ATgetArgument(t, 0);
                  t = a_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_0 = ATgetFirst((ATermList) t);
                      x_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_0, (ATerm) ATmakeAppl(sym_Seqs_1, x_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_r_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      a_1 = ATgetArgument(t, 0);
                      b_1 = ATgetArgument(t, 1);
                      y_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, y_0), a_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          a_1 = ATgetArgument(t, 0);
                          b_1 = ATgetArgument(t, 1);
                          y_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_0)), a_1), (ATerm) ATmakeAppl(sym_Build_1, b_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              a_1 = ATgetArgument(t, 0);
                              b_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_1, (ATerm) ATmakeAppl(sym_Match_1, b_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  a_1 = ATgetArgument(t, 0);
                                  b_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_1), b_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      a_1 = ATgetArgument(t, 0);
                                      b_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_1), a_1);
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
ATerm topdown_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(m_110, t);
    return(t);
  }
  t = m_110(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm v_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_5);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm u_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = u_20;
      {
        ATerm x_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_20);
          }
        else
          {
            t = x_20;
            {
              ATerm c_21 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_5 = ATgetArgument(t, 0);
                      y_5 = ATgetArgument(t, 1);
                      z_5 = ATgetArgument(t, 2);
                      a_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_5;
                  t = map_1_0(s_0, t);
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = c_21;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm k_6 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_6 = ATgetArgument(t, 0);
          {
            ATerm g_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_21);
      t = k_6;
    }
  else
    {
      t = e_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_6;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_6);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm o_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_6);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        ATerm x_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_21);
          }
        else
          {
            t = x_21;
            {
              ATerm a_22 = t;
              int b_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_6 = NULL,s_6 = NULL,v_6 = NULL,x_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_6 = ATgetArgument(t, 0);
                      s_6 = ATgetArgument(t, 1);
                      v_6 = ATgetArgument(t, 2);
                      x_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_6;
                  t = map_1_0(z_0, t);
                  LocalPopChoice(b_22);
                }
              else
                {
                  t = a_22;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm g_7 = NULL;
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_7 = ATgetArgument(t, 0);
          {
            ATerm o_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_22);
      t = g_7;
    }
  else
    {
      t = d_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_7;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL,h_0 = NULL,q_0 = NULL,d_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            w_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_7);
        h_0 = t;
        t = w_7;
        t = ContextVar_0_0(t);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, q_0);
        d_3 = t;
        t = SSLsetAnnotations(d_3, h_0);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, j_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm u_8 (ATerm i_4, ATerm j_4, ATerm l_4, ATerm m_4, ATerm n_4, ATerm s_4, ATerm u_4, ATerm t)
  {
    ATerm b_5 = NULL,e_5 = NULL,f_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, n_4, term_s_22);
    {
      ATerm u_22 = t;
      if((PushChoice() == 0))
        {
          ATerm s_5 = NULL;
          if(match_cons(t, sym__2))
            {
              s_5 = ATgetArgument(t, 0);
              if((s_5 != ATgetArgument(t, 1)))
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
          t = u_22;
        }
    }
    t = new_0_0(t);
    b_5 = t;
    t = m_4;
    t = dummify_0_0(t);
    f_5 = t;
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_5;
          if((m_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, b_5);
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          t = f_5;
        }
    }
    e_5 = t;
    t = f_5;
    t = free_vars_3_0(j_0, r_0, tboundin_3_0, t);
    t = map_1_0(t_0, t);
    o_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, s_4);
    t = free_vars_3_0(u_0, w_0, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_5, o_5);
    t = diff_0_0(t);
    p_5 = t;
    t = new_0_0(t);
    q_5 = t;
    t = i_4;
    t = p_0(t);
    r_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, r_5, (ATerm) ATmakeAppl(sym_Op_2, term_c_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(CheckATermList(p_5), (ATerm) ATmakeAppl(sym_Str_1, q_5)))), f_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_4, j_4, l_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_5), m_4), n_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_4)))), e_5), (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(CheckATermList(p_5), (ATerm) ATmakeAppl(sym_Str_1, q_5))))), s_4))));
    return(t);
  }
  ATerm b_8 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,o_8 = NULL,q_8 = NULL,r_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      i_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
      l_8 = ATgetArgument(t, 2);
      m_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = m_8;
  if(match_cons(t, sym_Rule_3))
    {
      o_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
      r_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_8;
  if(match_cons(t, sym_Op_2))
    {
      b_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      t = f_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_8;
          if(match_string(t, "Undefined"))
            {
              ATerm i_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
                  t = h_8;
                  t = new_0_0(t);
                  e_2 = t;
                  t = o_8;
                  t = dummify_0_0(t);
                  c_2 = t;
                  {
                    ATerm t_23 = t;
                    int v_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_2;
                        if((o_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
                        LocalPopChoice(v_23);
                      }
                    else
                      {
                        t = t_23;
                        t = c_2;
                      }
                  }
                  f_2 = t;
                  t = i_8;
                  t = p_0(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_2, (ATerm) ATmakeAppl(sym_Op_2, term_c_23, (ATerm) ATinsert(ATinsert(ATempty, term_s_22), c_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_8, k_8, l_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_2), o_8), term_s_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_8)))), f_2), term_s_22)), (ATerm) ATmakeAppl(sym_Seq_2, r_8, term_q_20)))));
                  LocalPopChoice(n_23);
                }
              else
                {
                  t = i_23;
                  t = u_8(i_8, k_8, l_8, o_8, q_8, r_8, h_8, t);
                }
            }
          else
            {
              t = u_8(i_8, k_8, l_8, o_8, q_8, r_8, h_8, t);
            }
        }
      else
        {
          t = b_8;
          t = u_8(i_8, k_8, l_8, o_8, q_8, r_8, h_8, t);
        }
    }
  else
    {
      t = u_8(i_8, k_8, l_8, o_8, q_8, r_8, h_8, t);
    }
  return(t);
}
static ATerm v_10 (ATerm c_143 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = new_0_0(t);
  z_8 = t;
  t = u_81;
  t = dummify_0_0(t);
  y_8 = t;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_8;
        if((u_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = y_8;
      }
  }
  a_9 = t;
  t = r_81;
  t = c_143(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, b_9, y_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, r_81, p_81, q_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_8), u_81), term_s_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_81)))), a_9), term_p_24)), (ATerm) ATmakeAppl(sym_Seq_2, s_81, term_q_20))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      g_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
      l_9 = ATgetArgument(t, 2);
      {
        ATerm q_24 = ATgetArgument(t, 3);
        if(match_cons(q_24, sym_Rule_3))
          {
            m_9 = ATgetArgument(q_24, 0);
            {
              ATerm r_24 = ATgetArgument(q_24, 1);
              if(match_cons(r_24, sym_Op_2))
                {
                  ATerm s_24 = ATgetArgument(r_24, 0);
                  if((ATgetSymbol((ATermAppl) s_24) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm t_24 = ATgetArgument(r_24, 1);
                    if(((ATgetType(t_24) != AT_LIST) || !(ATisEmpty(t_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            n_9 = ATgetArgument(q_24, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_10(c_143, g_9, h_9, l_9, m_9, n_9, t);
  return(t);
}
static ATerm h_18 (ATerm i_11, ATerm l_11, ATerm t)
{
  t = i_11;
  {
    ATerm d_25 = t;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,y_11 = NULL,e_12 = NULL,i_12 = NULL,f_3 = NULL;
        i_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_11 = ATgetFirst((ATermList) t);
            e_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_12);
        s_11 = t;
        t = e_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_12), y_11);
        f_3 = t;
        t = SSLsetAnnotations(f_3, s_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_20, i_11);
  return(t);
}
static ATerm i_18 (ATerm x_12, ATerm i_13, ATerm t)
{
  t = x_12;
  {
    ATerm e_25 = t;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,g_3 = NULL;
        r_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_13 = ATgetFirst((ATermList) t);
            q_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_13);
        o_13 = t;
        t = q_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_13), p_13);
        g_3 = t;
        t = SSLsetAnnotations(g_3, o_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_25, x_12);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,p_2 = NULL;
  l_14 = t;
  t = SSL_explode_term(l_14);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(((ATgetType(p_25) == AT_LIST) && !(ATisEmpty(p_25))))
          {
            m_14 = ATgetFirst((ATermList) p_25);
            {
              ATerm q_25 = (ATerm) ATgetNext((ATermList) p_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_14);
  if(match_cons(t, sym__2))
    {
      ATerm r_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_25 = ATgetArgument(t, 1);
        if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
          {
            ATerm t_25 = ATgetFirst((ATermList) s_25);
            ATerm u_25 = (ATerm) ATgetNext((ATermList) s_25);
            if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
              {
                p_2 = ATgetFirst((ATermList) u_25);
                {
                  ATerm v_25 = (ATerm) ATgetNext((ATermList) u_25);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, p_2), m_14));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, f_15), e_15));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, i_15), h_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_25, (ATerm) ATinsert(ATinsert(ATempty, u_15), t_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm z_15 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_25, (ATerm) ATinsert(ATinsert(ATempty, f_16), z_15));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,b_14 = NULL,c_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      {
        ATerm j_14 = NULL;
        t = c_14;
        t = foldr_2_0(d_1, e_1, t);
        j_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, b_14, j_14);
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
                ATerm u_2 = NULL;
                t = b_14;
                {
                  ATerm e_26 = t;
                  int f_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_g_26;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_h_26;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_k_26;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_m_26;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_n_26;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(f_26);
                    }
                  else
                    {
                      t = e_26;
                      {
                        ATerm w_2 = NULL;
                        t = SSL_explode_string(b_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm p_26 = ATgetFirst((ATermList) t);
                            if(((ATgetType(p_26) != AT_INT) || (ATgetInt((ATermInt) p_26) != 39)))
                              _fail(t);
                            {
                              ATerm s_26 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
                                {
                                  w_2 = ATgetFirst((ATermList) s_26);
                                  {
                                    ATerm t_26 = (ATerm) ATgetNext((ATermList) s_26);
                                    if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
                                      {
                                        ATerm u_26 = ATgetFirst((ATermList) t_26);
                                        if(((ATgetType(u_26) != AT_INT) || (ATgetInt((ATermInt) u_26) != 39)))
                                          _fail(t);
                                        {
                                          ATerm w_26 = (ATerm) ATgetNext((ATermList) t_26);
                                          if(((ATgetType(w_26) != AT_LIST) || !(ATisEmpty(w_26))))
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
              ATerm x_26 = t;
              int d_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      b_14 = ATgetArgument(t, 0);
                      {
                        ATerm j_27 = ATgetArgument(t, 1);
                      }
                      w_13 = ATgetArgument(t, 2);
                      s_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_27);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_14, w_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_13), (ATerm) ATempty));
                }
              else
                {
                  t = x_26;
                  {
                    ATerm n_27 = t;
                    int o_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            b_14 = ATgetArgument(t, 0);
                            {
                              ATerm p_27 = ATgetArgument(t, 1);
                            }
                            w_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_27);
                        t = (ATerm) ATmakeAppl(sym_Con_3, b_14, w_13, term_m_28);
                      }
                    else
                      {
                        t = n_27;
                        if(match_cons(t, sym_Con1_2))
                          {
                            b_14 = ATgetArgument(t, 0);
                            c_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, b_14, c_14, term_m_28);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                b_14 = ATgetArgument(t, 0);
                                c_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = c_14;
                                    return(t);
                                  }
                                  t = b_14;
                                  t = foldr_2_0(f_1, g_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    b_14 = ATgetArgument(t, 0);
                                    t = b_14;
                                    t = foldr_2_0(h_1, i_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        b_14 = ATgetArgument(t, 0);
                                        t = b_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            t_13 = ATgetFirst((ATermList) t);
                                            u_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = u_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm s_28 = t;
                                                int t_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = h_18(b_14, x_13, t);
                                                    LocalPopChoice(t_28);
                                                  }
                                                else
                                                  {
                                                    t = s_28;
                                                    t = t_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = h_18(b_14, x_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = h_18(b_14, x_13, t);
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
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = c_14;
                                                                        return(t);
                                                                      }
                                                                      t = b_14;
                                                                      t = foldr_2_0(j_1, k_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        b_14 = ATgetArgument(t, 0);
                                                                        t = b_14;
                                                                        t = foldr_2_0(l_1, m_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            b_14 = ATgetArgument(t, 0);
                                                                            c_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_f_25, (ATerm) ATinsert(CheckATermList(c_14), b_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                b_14 = ATgetArgument(t, 0);
                                                                                t = b_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    t_13 = ATgetFirst((ATermList) t);
                                                                                    u_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = u_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm e_29 = t;
                                                                                        int f_29 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = i_18(b_14, x_13, t);
                                                                                            LocalPopChoice(f_29);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_29;
                                                                                            t = t_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_18(b_14, x_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_18(b_14, x_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_g_29;
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
                                                                                            v_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_l_29, (ATerm) ATinsert(ATinsert(ATempty, v_13), b_14));
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
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, b_14, c_14, term_r_20);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    b_14 = ATgetArgument(t, 0);
                                                                                                    c_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, b_14, c_14, term_r_20);
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
                                                                                                                                                ATerm q_29 = ATgetArgument(t, 0);
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  l_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      m_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
      {
        ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,y_18 = NULL;
        t = l_18;
        t = new_0_0(t);
        r_18 = t;
        t = new_0_0(t);
        s_18 = t;
        t = new_0_0(t);
        t_18 = t;
        t = new_0_0(t);
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_18), t_18), s_18), r_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, r_18), (ATerm) ATmakeAppl(sym_Var_1, t_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, m_18, (ATerm)ATmakeAppl(sym_Var_1, r_18), (ATerm) ATmakeAppl(sym_Var_1, s_18)), (ATerm) ATmakeAppl(sym_BAM_3, k_18, (ATerm)ATmakeAppl(sym_Var_1, t_18), (ATerm) ATmakeAppl(sym_Var_1, y_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_t_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_18)), (ATerm) ATmakeAppl(sym_Var_1, s_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_18 = ATgetArgument(t, 0);
          {
            ATerm z_18 = NULL,a_19 = NULL,c_19 = NULL,d_19 = NULL;
            t = l_18;
            t = new_0_0(t);
            c_19 = t;
            t = m_18;
            {
              static ATerm n_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((z_18 != NULL) && (z_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      z_18 = ATgetArgument(t, 0);
                    if(((a_19 != NULL) && (a_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      a_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, c_19);
                return(t);
              }
              t = oncetd_1_0(n_1, t);
            }
            d_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_19)), not_null(z_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_19)), (ATerm) ATmakeAppl(sym_Build_1, d_19))));
          }
        }
      else
        {
          ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,l_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              m_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_18;
          t = new_0_0(t);
          h_19 = t;
          t = new_0_0(t);
          i_19 = t;
          t = m_18;
          {
            static ATerm o_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((f_19 != NULL) && (f_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    f_19 = ATgetArgument(t, 0);
                  if(((g_19 != NULL) && (g_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    g_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_19);
              return(t);
            }
            t = oncetd_1_0(o_1, t);
          }
          l_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_19))))), (ATerm)ATmakeAppl(sym_Var_1, h_19), (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_19)), not_null(f_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      o_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
        t = n_19;
        t = new_0_0(t);
        w_19 = t;
        t = o_19;
        {
          static ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
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
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_19), u_19);
            return(t);
          }
          t = pat_td_1_0(p_1, t);
        }
        x_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_30, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_19))))));
        LocalPopChoice(c_30);
      }
    else
      {
        t = a_30;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_19 = NULL,a_20 = NULL,d_20 = NULL;
              t = n_19;
              t = new_0_0(t);
              a_20 = t;
              t = o_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_20);
                  return(t);
                }
                t = pat_td_1_0(q_1, t);
              }
              d_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_20)), not_null(z_19))));
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,o_20 = NULL;
                t = n_19;
                t = new_0_0(t);
                j_20 = t;
                t = o_19;
                {
                  static ATerm r_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_20 != NULL) && (i_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_20 = ATgetArgument(t, 0);
                        if(((h_20 != NULL) && (h_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, j_20);
                    return(t);
                  }
                  t = pat_td_1_0(r_1, t);
                }
                o_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_20)), not_null(i_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm o_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_141(t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = o_30;
      {
        ATerm y_25 = NULL,z_25 = NULL,j_26 = NULL,l_26 = NULL;
        z_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            j_26 = ATgetArgument(t, 0);
            l_26 = ATgetArgument(t, 1);
            {
              ATerm c_3 = NULL,m_3 = NULL,l_3 = NULL;
              t = SSLgetAnnotations(z_25);
              c_3 = t;
              t = l_26;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(w_141, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              m_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, j_26, m_3);
              l_3 = t;
              t = SSLsetAnnotations(l_3, c_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                j_26 = ATgetArgument(t, 0);
                l_26 = ATgetArgument(t, 1);
                {
                  ATerm v_30 = t;
                  int w_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_3 = NULL,h_4 = NULL,p_3 = NULL;
                      t = SSLgetAnnotations(z_25);
                      z_3 = t;
                      t = l_26;
                      t = pat_td_1_0(w_141, t);
                      h_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, j_26, h_4);
                      p_3 = t;
                      t = SSLsetAnnotations(p_3, z_3);
                      LocalPopChoice(w_30);
                    }
                  else
                    {
                      t = v_30;
                      {
                        ATerm z_4 = NULL,h_5 = NULL,r_3 = NULL;
                        t = SSLgetAnnotations(z_25);
                        z_4 = t;
                        t = j_26;
                        t = pat_td_1_0(w_141, t);
                        h_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, h_5, l_26);
                        r_3 = t;
                        t = SSLsetAnnotations(r_3, z_4);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    j_26 = ATgetArgument(t, 0);
                    l_26 = ATgetArgument(t, 1);
                    y_25 = ATgetArgument(t, 2);
                    {
                      ATerm t_6 = NULL,z_6 = NULL,u_3 = NULL;
                      t = SSLgetAnnotations(z_25);
                      t_6 = t;
                      t = y_25;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(w_141, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      z_6 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, j_26, l_26, z_6);
                      u_3 = t;
                      t = SSLsetAnnotations(u_3, t_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        j_26 = ATgetArgument(t, 0);
                        l_26 = ATgetArgument(t, 1);
                        y_25 = ATgetArgument(t, 2);
                        {
                          ATerm z_7 = NULL,e_8 = NULL,w_3 = NULL;
                          t = SSLgetAnnotations(z_25);
                          z_7 = t;
                          t = y_25;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(w_141, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          e_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, j_26, l_26, e_8);
                          w_3 = t;
                          t = SSLsetAnnotations(w_3, z_7);
                        }
                      }
                    else
                      {
                        ATerm i_9 = NULL,o_9 = NULL,y_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            j_26 = ATgetArgument(t, 0);
                            l_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_25);
                        i_9 = t;
                        t = l_26;
                        t = pat_td_1_0(w_141, t);
                        o_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, j_26, o_9);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, i_9);
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
  ATerm z_26 = NULL,a_27 = NULL;
  z_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL,c_27 = NULL,e_27 = NULL,f_27 = NULL;
        t = z_26;
        t = new_0_0(t);
        e_27 = t;
        t = a_27;
        {
          static ATerm v_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((b_27 != NULL) && (b_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_27 = ATgetArgument(t, 0);
                if(((c_27 != NULL) && (c_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, e_27);
            return(t);
          }
          t = pat_td_1_0(v_1, t);
        }
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_31, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_27)), not_null(b_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_27)))), (ATerm) ATmakeAppl(sym_Build_1, f_27)));
        LocalPopChoice(z_30);
      }
    else
      {
        t = x_30;
        {
          ATerm e_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_27 = NULL,k_27 = NULL,l_27 = NULL;
              t = z_26;
              t = new_0_0(t);
              k_27 = t;
              t = a_27;
              {
                static ATerm w_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_27);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              l_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_27)))), (ATerm) ATmakeAppl(sym_Build_1, l_27)));
              LocalPopChoice(g_31);
            }
          else
            {
              t = e_31;
              {
                ATerm m_27 = NULL,r_27 = NULL,t_27 = NULL,u_27 = NULL;
                t = z_26;
                t = new_0_0(t);
                t_27 = t;
                t = a_27;
                {
                  static ATerm x_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_27 = ATgetArgument(t, 0);
                        if(((r_27 != NULL) && (r_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_27);
                    return(t);
                  }
                  t = pat_td_1_0(x_1, t);
                }
                u_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_27), not_null(r_27), (ATerm) ATmakeAppl(sym_Var_1, t_27))), (ATerm) ATmakeAppl(sym_Build_1, u_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm h_31 = t;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL,g_28 = NULL,l_28 = NULL,m_7 = NULL;
      l_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_28);
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_28);
      m_7 = t;
      t = SSLsetAnnotations(m_7, f_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_31;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_28 = ATgetFirst((ATermList) t);
      p_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,w_28 = NULL,x_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      if(match_cons(l_31, sym__2))
        {
          q_28 = ATgetArgument(l_31, 0);
          r_28 = ATgetArgument(l_31, 1);
        }
      else
        _fail(t);
      {
        ATerm n_31 = ATgetArgument(t, 1);
        if(match_cons(n_31, sym__2))
          {
            w_28 = ATgetArgument(n_31, 0);
            x_28 = ATgetArgument(n_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_28), q_28), (ATerm) ATinsert(CheckATermList(x_28), r_28));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_28 = ATgetFirst((ATermList) t);
      z_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_28, z_28);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(match_cons(s_31, sym__2))
        {
          a_29 = ATgetArgument(s_31, 0);
          b_29 = ATgetArgument(s_31, 1);
        }
      else
        _fail(t);
      {
        ATerm u_31 = ATgetArgument(t, 1);
        if(match_cons(u_31, sym__2))
          {
            c_29 = ATgetArgument(u_31, 0);
            d_29 = ATgetArgument(u_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_29), a_29), (ATerm) ATinsert(CheckATermList(d_29), b_29));
  return(t);
}
static ATerm x_10 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,q_7 = NULL;
  t = k_72;
  t = fetch_1_0(y_1, t);
  t = k_72;
  t = genzip_4_0(z_1, a_2, b_2, LiftPrimArg_0_0, t);
  e_28 = t;
  if(match_cons(t, sym__2))
    {
      a_28 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  z_27 = t;
  t = a_28;
  t = concat_0_0(t);
  c_28 = t;
  t = b_28;
  t = genzip_4_0(d_2, h_2, i_2, _id, t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
  q_7 = t;
  t = SSLsetAnnotations(q_7, z_27);
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      {
        ATerm v_31 = ATgetArgument(t, 1);
        if(match_cons(v_31, sym__2))
          {
            x_27 = ATgetArgument(v_31, 0);
            y_27 = ATgetArgument(v_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, w_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_27), (ATerm) ATmakeAppl(sym_CallT_3, i_72, j_72, y_27)));
  return(t);
}
static ATerm u_29 (ATerm i_29, ATerm t)
{
  ATerm k_29 = NULL;
  t = i_29;
  {
    ATerm w_31 = t;
    if((PushChoice() == 0))
      {
        ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,v_8 = NULL;
        p_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            o_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_29);
        n_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, o_29);
        v_8 = t;
        t = SSLsetAnnotations(v_8, n_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_31;
      }
  }
  t = new_0_0(t);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, k_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_29)))), (ATerm) ATmakeAppl(sym_Var_1, k_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  r_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_29 = ATgetArgument(t, 0);
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_29(r_29, t);
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Var_1, s_29)));
          }
      }
    }
  else
    {
      t = u_29(r_29, t);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_32 = t;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL,o_10 = NULL,p_10 = NULL,k_10 = NULL;
      p_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_10);
      l_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_10);
      k_10 = t;
      t = SSLsetAnnotations(k_10, l_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_32;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_10 = ATgetFirst((ATermList) t);
      r_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm s_10 = NULL,u_10 = NULL,w_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_32 = ATgetArgument(t, 0);
      if(match_cons(b_32, sym__2))
        {
          s_10 = ATgetArgument(b_32, 0);
          u_10 = ATgetArgument(b_32, 1);
        }
      else
        _fail(t);
      {
        ATerm d_32 = ATgetArgument(t, 1);
        if(match_cons(d_32, sym__2))
          {
            w_10 = ATgetArgument(d_32, 0);
            a_11 = ATgetArgument(d_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_10), s_10), (ATerm) ATinsert(CheckATermList(a_11), u_10));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_11 = ATgetFirst((ATermList) t);
      e_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_11, e_11);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm f_11 = NULL,h_11 = NULL,j_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      if(match_cons(e_32, sym__2))
        {
          f_11 = ATgetArgument(e_32, 0);
          h_11 = ATgetArgument(e_32, 1);
        }
      else
        _fail(t);
      {
        ATerm f_32 = ATgetArgument(t, 1);
        if(match_cons(f_32, sym__2))
          {
            j_11 = ATgetArgument(f_32, 0);
            m_11 = ATgetArgument(f_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_11), f_11), (ATerm) ATinsert(CheckATermList(m_11), h_11));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm h_32 = t;
  if((PushChoice() == 0))
    {
      ATerm n_13 = NULL,y_13 = NULL,z_13 = NULL,n_10 = NULL;
      z_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_13);
      n_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_13);
      n_10 = t;
      t = SSLsetAnnotations(n_10, n_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_32;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_14 = NULL,d_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_14 = ATgetFirst((ATermList) t);
      d_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_14, d_14);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_32 = ATgetArgument(t, 0);
      if(match_cons(i_32, sym__2))
        {
          e_14 = ATgetArgument(i_32, 0);
          f_14 = ATgetArgument(i_32, 1);
        }
      else
        _fail(t);
      {
        ATerm j_32 = ATgetArgument(t, 1);
        if(match_cons(j_32, sym__2))
          {
            g_14 = ATgetArgument(j_32, 0);
            r_14 = ATgetArgument(j_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_14), e_14), (ATerm) ATinsert(CheckATermList(r_14), f_14));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm s_14 = NULL,u_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_14 = ATgetFirst((ATermList) t);
      u_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_14, u_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm v_14 = NULL,y_14 = NULL,d_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_32 = ATgetArgument(t, 0);
      if(match_cons(k_32, sym__2))
        {
          v_14 = ATgetArgument(k_32, 0);
          y_14 = ATgetArgument(k_32, 1);
        }
      else
        _fail(t);
      {
        ATerm l_32 = ATgetArgument(t, 1);
        if(match_cons(l_32, sym__2))
          {
            d_15 = ATgetArgument(l_32, 0);
            v_15 = ATgetArgument(l_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_15), v_14), (ATerm) ATinsert(CheckATermList(v_15), y_14));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,k_35 = NULL;
  e_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
      d_35 = ATgetArgument(t, 2);
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,m_10 = NULL;
        t = d_35;
        t = fetch_1_0(j_2, t);
        t = d_35;
        t = genzip_4_0(k_2, l_2, m_2, LiftPrimArg_0_0, t);
        j_10 = t;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_10);
        d_10 = t;
        t = e_10;
        t = concat_0_0(t);
        h_10 = t;
        t = g_10;
        t = genzip_4_0(n_2, o_2, q_2, _id, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
        m_10 = t;
        t = SSLsetAnnotations(m_10, d_10);
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            {
              ATerm m_32 = ATgetArgument(t, 1);
              if(match_cons(m_32, sym__2))
                {
                  b_10 = ATgetArgument(m_32, 0);
                  c_10 = ATgetArgument(m_32, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_10), (ATerm) ATmakeAppl(sym_PrimT_3, f_35, k_35, c_10)));
      }
    }
  else
    {
      ATerm u_12 = NULL,a_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,t_10 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          f_35 = ATgetArgument(t, 0);
          k_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_35;
      t = fetch_1_0(r_2, t);
      t = k_35;
      t = genzip_4_0(s_2, t_2, v_2, LiftPrimArg_0_0, t);
      m_13 = t;
      if(match_cons(t, sym__2))
        {
          g_13 = ATgetArgument(t, 0);
          h_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_13);
      f_13 = t;
      t = g_13;
      t = concat_0_0(t);
      k_13 = t;
      t = h_13;
      t = genzip_4_0(x_2, y_2, z_2, _id, t);
      l_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_13, l_13);
      t_10 = t;
      t = SSLsetAnnotations(t_10, f_13);
      if(match_cons(t, sym__2))
        {
          u_12 = ATgetArgument(t, 0);
          {
            ATerm n_32 = ATgetArgument(t, 1);
            if(match_cons(n_32, sym__2))
              {
                a_13 = ATgetArgument(n_32, 0);
                e_13 = ATgetArgument(n_32, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, u_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_13), (ATerm) ATmakeAppl(sym_PrimT_3, f_35, (ATerm)ATempty, e_13)));
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,p_36 = NULL,s_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
      p_36 = ATgetArgument(t, 2);
      {
        ATerm k_16 = NULL,y_20 = NULL;
        t = SSLgetAnnotations(s_36);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, k_36, l_36, p_36);
        y_20 = t;
        t = SSLsetAnnotations(y_20, k_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = s_36;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_32;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      h_38 = ATgetArgument(t, 0);
      i_38 = ATgetArgument(t, 1);
      f_38 = ATgetArgument(t, 2);
      {
        ATerm u_17 = NULL,a_21 = NULL;
        t = SSLgetAnnotations(g_38);
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, h_38, i_38, f_38);
        a_21 = t;
        t = SSLsetAnnotations(a_21, u_17);
      }
    }
  else
    {
      ATerm j_19 = NULL,b_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          h_38 = ATgetArgument(t, 0);
          i_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_38);
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, h_38, i_38);
      b_21 = t;
      t = SSLsetAnnotations(b_21, j_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm q_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_32;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_38;
  if(match_cons(t, sym_StratRule_3))
    {
      r_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
      t_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_38), (ATerm) ATmakeAppl(sym_Where_1, t_38)), r_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          r_38 = ATgetArgument(t, 0);
          s_38 = ATgetArgument(t, 1);
          t_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_38;
      t = pureterm_0_0(t);
      t = s_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, s_38)), (ATerm) ATmakeAppl(sym_Where_1, t_38)), (ATerm) ATmakeAppl(sym_Match_1, r_38)));
    }
  return(t);
}
static ATerm y_10 (ATerm v_67, ATerm w_67, ATerm x_67, ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  t = new_0_0(t);
  r_39 = t;
  t = v_67;
  {
    static ATerm e_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_32 = ATgetArgument(t, 0);
          if(match_cons(r_32, sym_Var_1))
            {
              if(((q_39 != NULL) && (q_39 != ATgetArgument(r_32, 0))))
                _fail(ATgetArgument(r_32, 0));
              else
                q_39 = ATgetArgument(r_32, 0);
            }
          else
            _fail(t);
          if(((k_39 != NULL) && (k_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_39 = ATgetArgument(t, 1);
          {
            ATerm s_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_39);
      return(t);
    }
    t = oncetd_1_0(e_3, t);
  }
  s_39 = t;
  t = w_67;
  {
    static ATerm h_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_32 = ATgetArgument(t, 0);
          if(match_cons(u_32, sym_Var_1))
            {
              if(((q_39 != NULL) && (q_39 != ATgetArgument(u_32, 0))))
                _fail(ATgetArgument(u_32, 0));
              else
                q_39 = ATgetArgument(u_32, 0);
            }
          else
            _fail(t);
          if(((p_39 != NULL) && (p_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_39 = ATgetArgument(t, 1);
          {
            ATerm v_32 = ATgetArgument(t, 2);
            if(match_cons(v_32, sym_CallT_3))
              {
                if(((j_39 != NULL) && (j_39 != ATgetArgument(v_32, 0))))
                  _fail(ATgetArgument(v_32, 0));
                else
                  j_39 = ATgetArgument(v_32, 0);
                {
                  ATerm w_32 = ATgetArgument(v_32, 1);
                  if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
                    _fail(t);
                }
                {
                  ATerm x_32 = ATgetArgument(v_32, 2);
                  if(((ATgetType(x_32) != AT_LIST) || !(ATisEmpty(x_32))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, r_39);
      return(t);
    }
    t = oncetd_1_0(h_3, t);
  }
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_39, t_39, (ATerm) ATmakeAppl(sym_Seq_2, x_67, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_39), not_null(p_39), term_r_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_39)), (ATerm) ATmakeAppl(sym_Var_1, r_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
          a_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              b_41 = ATgetArgument(t, 0);
              t = b_41;
              if(match_cons(t, sym_Rule_3))
                {
                  x_40 = ATgetArgument(t, 0);
                  y_40 = ATgetArgument(t, 1);
                  z_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_41;
              t = y_10(x_40, y_40, z_40, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm f_20 = NULL,m_20 = NULL,k_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  b_41 = ATgetArgument(t, 0);
                  c_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_41);
              f_20 = t;
              t = c_41;
              t = desugarRule_0_0(t);
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, b_41, m_20);
              k_21 = t;
              t = SSLsetAnnotations(k_21, f_20);
            }
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm c_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(e_33);
    }
  else
    {
      t = c_33;
    }
  t = repeat_2_0(j_3, _id, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,g_42 = NULL;
            c_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                d_42 = ATgetArgument(t, 0);
                e_42 = ATgetArgument(t, 1);
                g_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = c_42;
            t = x_10(d_42, e_42, g_42, t);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            {
              ATerm j_33 = t;
              int k_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = Bapp_0_0(t);
                        LocalPopChoice(m_33);
                      }
                    else
                      {
                        t = l_33;
                        {
                          ATerm n_33 = t;
                          int o_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_33 = t;
                              int q_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      m_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = m_42;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      n_42 = ATgetArgument(t, 0);
                                      t = n_42;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          n_42 = ATgetArgument(t, 0);
                                          o_42 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, n_42, o_42);
                                    }
                                  LocalPopChoice(q_33);
                                }
                              else
                                {
                                  t = p_33;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(o_33);
                            }
                          else
                            {
                              t = n_33;
                              {
                                ATerm r_33 = t;
                                int s_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(s_33);
                                  }
                                else
                                  {
                                    t = r_33;
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
  t = topdown_1_0(i_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm m_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_46 = ATgetArgument(t, 0);
      t = m_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_46 = ATgetArgument(t, 0);
          {
            ATerm t_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_46;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_46), (ATerm) ATempty);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm w_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_46 = ATgetArgument(t, 0);
      t = w_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_46 = ATgetArgument(t, 0);
          {
            ATerm v_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_46;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, w_46);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm e_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_47);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm j_47 = NULL,k_47 = NULL,p_47 = NULL,q_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_47 = ATgetArgument(t, 0);
                      k_47 = ATgetArgument(t, 1);
                      p_47 = ATgetArgument(t, 2);
                      q_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_47;
                  t = map_1_0(s_3, t);
                  LocalPopChoice(b_34);
                }
              else
                {
                  t = a_34;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_47 = NULL;
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_47 = ATgetArgument(t, 0);
          {
            ATerm e_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_34);
      t = x_47;
    }
  else
    {
      t = c_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_47;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_48);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm g_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_48);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm f_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = f_34;
      {
        ATerm k_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_34);
          }
        else
          {
            t = k_34;
            {
              ATerm q_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_48 = NULL,j_48 = NULL,n_48 = NULL,o_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_48 = ATgetArgument(t, 0);
                      j_48 = ATgetArgument(t, 1);
                      n_48 = ATgetArgument(t, 2);
                      o_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_48;
                  t = map_1_0(a_4, t);
                  LocalPopChoice(r_34);
                }
              else
                {
                  t = q_34;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_48 = NULL;
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_48 = ATgetArgument(t, 0);
          {
            ATerm u_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_34);
      t = z_48;
    }
  else
    {
      t = s_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_48;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_49 = NULL;
  c_49 = t;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_49 = NULL,t_20 = NULL,v_20 = NULL,y_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            q_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_49);
        t_20 = t;
        t = q_49;
        t = ContextVar_0_0(t);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, v_20);
        y_21 = t;
        t = SSLsetAnnotations(y_21, t_20);
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, c_49);
  return(t);
}
static ATerm z_10 (ATerm b_143 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,w_43 = NULL,f_44 = NULL,c_45 = NULL,n_45 = NULL,s_45 = NULL,y_45 = NULL,z_45 = NULL,d_46 = NULL,e_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_81, term_s_22);
  {
    ATerm y_34 = t;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL;
        if(match_cons(t, sym__2))
          {
            f_46 = ATgetArgument(t, 0);
            if((f_46 != ATgetArgument(t, 1)))
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
        t = y_34;
      }
  }
  t = term_z_34;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, y_80);
  t = q_12(e_46, y_80, t);
  k_43 = t;
  t = term_a_35;
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_35, y_80);
  t = q_12(d_46, y_80, t);
  l_43 = t;
  t = new_0_0(t);
  m_43 = t;
  t = v_80;
  t = map_1_0(k_3, t);
  n_43 = t;
  t = w_80;
  t = map_1_0(n_3, t);
  o_43 = t;
  t = new_0_0(t);
  p_43 = t;
  t = f_81;
  t = dummify_0_0(t);
  f_44 = t;
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_44;
        if((f_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = f_44;
      }
  }
  w_43 = t;
  t = f_44;
  t = free_vars_3_0(o_3, q_3, tboundin_3_0, t);
  t = map_1_0(t_3, t);
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
  t = free_vars_3_0(v_3, x_3, tboundin_3_0, t);
  t = filter_1_0(b_4, t);
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_45, n_45);
  t = diff_0_0(t);
  s_45 = t;
  t = new_0_0(t);
  y_45 = t;
  t = y_80;
  t = b_143(t);
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_45, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(CheckATermList(s_45), (ATerm) ATmakeAppl(sym_Str_1, y_45)))), f_44)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, l_43, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(CheckATermList(s_45), (ATerm) ATmakeAppl(sym_Str_1, y_45)))), f_81)), j_81, (ATerm) ATmakeAppl(sym_Seq_2, term_p_35, k_81)))), (ATerm) ATmakeAppl(sym_RDefT_4, k_43, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_43), f_81), (ATerm)ATmakeAppl(sym_Var_1, m_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), w_43), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_43), n_43, o_43), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_35), (ATerm) ATmakeAppl(sym_Var_1, p_43)))))), (ATerm) ATmakeAppl(sym_Var_1, m_43)))))), (ATerm) ATmakeAppl(sym_RDefT_4, y_80, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_43), f_81), j_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), w_43), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATinsert(CheckATermList(s_45), (ATerm) ATmakeAppl(sym_Str_1, y_45)))), term_g_35))), k_81)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm q_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
      n_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          o_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
          q_21 = ATgetArgument(t, 2);
          r_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = r_21;
      if(match_cons(t, sym_Rule_3))
        {
          s_21 = ATgetArgument(t, 0);
          t_21 = ATgetArgument(t, 1);
          u_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_21;
      t = z_10(d_4, o_21, p_21, q_21, s_21, t_21, u_21, t);
      LocalPopChoice(s_35);
    }
  else
    {
      t = q_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_4, t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_22))));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_22))));
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_22 = ATgetFirst((ATermList) t);
      j_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_22, j_22);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(match_cons(x_35, sym__2))
        {
          k_22 = ATgetArgument(x_35, 0);
          l_22 = ATgetArgument(x_35, 1);
        }
      else
        _fail(t);
      {
        ATerm z_35 = ATgetArgument(t, 1);
        if(match_cons(z_35, sym__2))
          {
            m_22 = ATgetArgument(z_35, 0);
            n_22 = ATgetArgument(z_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_22), k_22), (ATerm) ATinsert(CheckATermList(n_22), l_22));
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,d_24 = NULL,h_24 = NULL,l_24 = NULL;
      m_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          p_23 = ATgetArgument(t, 0);
          q_23 = ATgetArgument(t, 1);
          r_23 = ATgetArgument(t, 2);
          s_23 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = s_23;
      if(match_cons(t, sym_Rule_3))
        {
          d_24 = ATgetArgument(t, 0);
          h_24 = ATgetArgument(t, 1);
          l_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_23;
      t = z_10(p_4, p_23, q_23, r_23, d_24, h_24, l_24, t);
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(q_4, t);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_24))));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_24))));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_24 = ATgetFirst((ATermList) t);
      x_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(match_cons(g_36, sym__2))
        {
          y_24 = ATgetArgument(g_36, 0);
          z_24 = ATgetArgument(g_36, 1);
        }
      else
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(match_cons(h_36, sym__2))
          {
            a_25 = ATgetArgument(h_36, 0);
            c_25 = ATgetArgument(h_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_25), y_24), (ATerm) ATinsert(CheckATermList(c_25), z_24));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm a_54 = NULL;
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_54))));
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_54 = ATgetFirst((ATermList) t);
      c_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_54, c_54);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,j_54 = NULL,n_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      if(match_cons(n_36, sym__2))
        {
          g_54 = ATgetArgument(n_36, 0);
          h_54 = ATgetArgument(n_36, 1);
        }
      else
        _fail(t);
      {
        ATerm o_36 = ATgetArgument(t, 1);
        if(match_cons(o_36, sym__2))
          {
            j_54 = ATgetArgument(o_36, 0);
            n_54 = ATgetArgument(o_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_54), g_54), (ATerm) ATinsert(CheckATermList(n_54), h_54));
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, s_54))));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_54 = ATgetFirst((ATermList) t);
      u_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_54, u_54);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_54 = NULL,e_55 = NULL,l_55 = NULL,m_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_36 = ATgetArgument(t, 0);
      if(match_cons(u_36, sym__2))
        {
          z_54 = ATgetArgument(u_36, 0);
          e_55 = ATgetArgument(u_36, 1);
        }
      else
        _fail(t);
      {
        ATerm v_36 = ATgetArgument(t, 1);
        if(match_cons(v_36, sym__2))
          {
            l_55 = ATgetArgument(v_36, 0);
            m_55 = ATgetArgument(v_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_55), z_54), (ATerm) ATinsert(CheckATermList(m_55), e_55));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  v_53 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      w_53 = ATgetArgument(t, 0);
      {
        ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,l_21 = NULL,m_21 = NULL,c_22 = NULL;
        t = w_53;
        t = map_1_0(c_4, t);
        t = genzip_4_0(f_4, g_4, k_4, _id, t);
        m_21 = t;
        if(match_cons(t, sym__2))
          {
            i_21 = ATgetArgument(t, 0);
            j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_21);
        h_21 = t;
        t = j_21;
        t = concat_0_0(t);
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, l_21);
        c_22 = t;
        t = SSLsetAnnotations(c_22, h_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          w_53 = ATgetArgument(t, 0);
          {
            ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,k_23 = NULL,l_23 = NULL,f_22 = NULL;
            t = w_53;
            t = map_1_0(o_4, t);
            t = genzip_4_0(r_4, t_4, v_4, _id, t);
            l_23 = t;
            if(match_cons(t, sym__2))
              {
                y_22 = ATgetArgument(t, 0);
                z_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_23);
            x_22 = t;
            t = z_22;
            t = concat_0_0(t);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_22, k_23);
            f_22 = t;
            t = SSLsetAnnotations(f_22, x_22);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              w_53 = ATgetArgument(t, 0);
              t = w_53;
              t = map_1_0(w_4, t);
              t = genzip_4_0(y_4, a_5, c_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_53;
              t = map_1_0(d_5, t);
              t = genzip_4_0(i_5, j_5, k_5, _id, t);
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm d_143 (ATerm), ATerm t)
{
  static ATerm i_56 (ATerm t)
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm x_36 = t;
      int z_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_143(t);
          LocalPopChoice(z_36);
        }
      else
        {
          t = x_36;
          {
            ATerm y_55 = NULL,z_55 = NULL,h_56 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                y_55 = ATgetArgument(t, 0);
                z_55 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, y_55, z_55);
            {
              static ATerm t_5 (ATerm t)
              {
                t = y_55;
                t = DeclareContextVars_0_0(t);
                t = z_55;
                t = i_56(t);
                if(((h_56 != NULL) && (h_56 != t)))
                  _fail(t);
                else
                  h_56 = t;
                return(t);
              }
              t = scope_2_0(m_5, t_5, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, y_55, not_null(h_56));
          }
        }
      return(t);
    }
    t = oncetd_1_0(l_5, t);
    return(t);
  }
  t = i_56(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm b_11 (ATerm y_81, ATerm x_81, ATerm t)
{
  ATerm j_56 = NULL,s_56 = NULL,t_56 = NULL;
  static ATerm w_5 (ATerm t)
  {
    t = y_81;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = y_81;
    {
      static ATerm b_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((s_56 != NULL) && (s_56 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              s_56 = ATgetArgument(t, 0);
            if(((j_56 != NULL) && (j_56 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              j_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, s_56);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(b_6, t);
    }
    if(((t_56 != NULL) && (t_56 != t)))
      _fail(t);
    else
      t_56 = t;
    return(t);
  }
  t = scope_2_0(u_5, w_5, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_56)), not_null(t_56)), x_81);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm b_57 = NULL,e_57 = NULL,l_57 = NULL,m_57 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      l_57 = ATgetArgument(t, 0);
      m_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_57 = ATgetFirst((ATermList) t);
      e_57 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_c_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, e_57, m_57)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_57))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_57;
    }
  return(t);
}
static ATerm n_58 (ATerm w_57, ATerm t)
{
  t = SSL_is_string(w_57);
  return(t);
}
static ATerm o_58 (ATerm z_57, ATerm t)
{
  ATerm e_58 = NULL,g_58 = NULL,h_58 = NULL;
  t = term_d_37;
  g_58 = t;
  t = (ATerm) ATinsert(ATempty, term_e_37);
  h_58 = t;
  t = SSL_printnl(g_58, h_58);
  t = z_57;
  t = debug_1_0(c_6, t);
  t = term_f_37;
  e_58 = t;
  t = SSL_exit(e_58);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  j_58 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      i_58 = ATgetArgument(t, 0);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_58(j_58, t);
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = i_58;
          }
      }
    }
  else
    {
      ATerm j_37 = t;
      int k_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_58(j_58, t);
          LocalPopChoice(k_37);
        }
      else
        {
          t = j_37;
          t = o_58(j_58, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      a_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
      t = a_59;
      if(match_cons(t, sym_DynRuleId_1))
        {
          b_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_59;
      if(match_cons(t, sym_RDecT_3))
        {
          c_59 = ATgetArgument(t, 0);
          f_59 = ATgetArgument(t, 1);
          g_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, c_59, f_59, g_59, (ATerm) ATmakeAppl(sym_Rule_3, h_59, term_s_22, term_r_20));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          a_59 = ATgetArgument(t, 0);
          h_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_59;
      if(match_cons(t, sym_DynRuleId_1))
        {
          b_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_59;
      if(match_cons(t, sym_RDecT_3))
        {
          c_59 = ATgetArgument(t, 0);
          f_59 = ATgetArgument(t, 1);
          g_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, c_59, f_59, g_59, h_59);
    }
  return(t);
}
static ATerm k_61 (ATerm o_60, ATerm t)
{
  ATerm s_60 = NULL,u_60 = NULL,v_60 = NULL,a_61 = NULL;
  t = o_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      v_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_60;
  t = filter_1_0(d_6, t);
  a_61 = t;
  t = o_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_60;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, a_61), (ATerm) ATmakeAppl(sym_DynamicRules_1, u_60));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(match_cons(l_37, sym_DynRuleId_1))
        {
          ATerm m_37 = ATgetArgument(l_37, 0);
          if(match_cons(m_37, sym_RDecT_3))
            {
              b_61 = ATgetArgument(m_37, 0);
              c_61 = ATgetArgument(m_37, 1);
              d_61 = ATgetArgument(m_37, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      e_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, b_61, c_61, d_61, e_61);
  return(t);
}
static ATerm e_6 (ATerm t)
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
  ATerm f_61 = NULL,i_61 = NULL;
  i_61 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      f_61 = ATgetArgument(t, 0);
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_25 = NULL;
            t = f_61;
            {
              ATerm r_37 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(e_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_37;
                }
            }
            t = f_61;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            l_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, l_25);
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            t = k_61(i_61, t);
          }
      }
    }
  else
    {
      t = k_61(i_61, t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_61 = NULL;
      n_61 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm u_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_61;
      LocalPopChoice(t_37);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = s_37;
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_61 = NULL;
            o_61 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm x_37 = ATgetArgument(t, 0);
                ATerm y_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_61;
            LocalPopChoice(w_37);
            {
              ATerm u_61 = NULL,w_61 = NULL,e_62 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  u_61 = ATgetArgument(t, 0);
                  w_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_61;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              e_62 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, e_62, w_61);
            }
          }
        else
          {
            t = v_37;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(f_6, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = Cons_2_0(h_6, i_6, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,e_63 = NULL,t_22 = NULL;
  e_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_63);
  z_62 = t;
  t = a_63;
  t = topdown_1_0(j_6, t);
  t = listtd_1_0(l_6, t);
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_63);
  t_22 = t;
  t = SSLsetAnnotations(t_22, z_62);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = repeat_2_0(m_6, _id, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_63 = ATgetFirst((ATermList) t);
      l_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_11(k_63, l_63, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm j_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,u_62 = NULL,w_62 = NULL,x_62 = NULL,b_23 = NULL,a_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  x_62 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_62);
  j_62 = t;
  t = m_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_62 = ATgetFirst((ATermList) t);
      p_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_62);
  n_62 = t;
  t = p_62;
  t = Cons_2_0(_id, g_6, t);
  u_62 = t;
  t = (ATerm) ATinsert(CheckATermList(u_62), o_62);
  a_23 = t;
  t = SSLsetAnnotations(a_23, n_62);
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_62);
  b_23 = t;
  t = SSLsetAnnotations(b_23, j_62);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm u_64 = NULL;
  u_64 = t;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        t = term_w_36;
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_36, u_64);
        t = f_12(i_26, u_64, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_38) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = u_64;
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        {
          ATerm v_26 = NULL;
          t = term_w_36;
          v_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_36, u_64);
          t = f_12(v_26, u_64, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm e_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_38) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = u_64;
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm q_66 = NULL,c_67 = NULL,d_67 = NULL;
  q_66 = t;
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm l_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_38);
        t = q_66;
        {
          ATerm m_38 = t;
          if((PushChoice() == 0))
            {
              ATerm v_27 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,g_23 = NULL;
              j_28 = t;
              if(match_cons(t, sym_Var_1))
                {
                  h_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_28);
              v_27 = t;
              t = h_28;
              {
                ATerm n_38 = t;
                int p_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(p_38);
                  }
                else
                  {
                    t = n_38;
                    {
                      ATerm u_28 = NULL,h_29 = NULL,m_29 = NULL,f_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          u_28 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(h_28);
                      h_29 = t;
                      t = u_28;
                      t = ContextVar_0_0(t);
                      m_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, m_29);
                      f_23 = t;
                      t = SSLsetAnnotations(f_23, h_29);
                    }
                  }
              }
              i_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, i_28);
              g_23 = t;
              t = SSLsetAnnotations(g_23, v_27);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_38;
            }
        }
        t = term_m_25;
      }
    else
      {
        t = j_38;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_m_25;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                c_67 = ATgetArgument(t, 0);
                {
                  ATerm g_67 = NULL;
                  t = c_67;
                  t = free_vars_3_0(q_6, u_6, tboundin_3_0, t);
                  t = map_1_0(y_6, t);
                  g_67 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_38, g_67);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    c_67 = ATgetArgument(t, 0);
                    d_67 = ATgetArgument(t, 1);
                    {
                      ATerm y_69 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_67, d_67);
                      t = free_vars_3_0(a_7, b_7, tboundin_3_0, t);
                      t = map_1_0(d_7, t);
                      y_69 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_v_38, y_69);
                    }
                  }
                else
                  {
                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm w_38 = ATgetArgument(t, 0);
                        ATerm z_38 = ATgetArgument(t, 1);
                        ATerm a_39 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_d_37;
                    w_29 = t;
                    t = (ATerm) ATinsert(ATempty, term_b_39);
                    x_29 = t;
                    t = SSL_printnl(w_29, x_29);
                    t = term_f_37;
                    v_29 = t;
                    t = SSL_exit(v_29);
                    t = (ATerm) ATinsert(ATempty, term_b_39);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm h_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_67);
  return(t);
}
static ATerm u_6 (ATerm t)
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
              ATerm g_39 = t;
              int h_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_67 = NULL,u_67 = NULL,k_68 = NULL,l_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_67 = ATgetArgument(t, 0);
                      u_67 = ATgetArgument(t, 1);
                      k_68 = ATgetArgument(t, 2);
                      l_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_68;
                  t = map_1_0(w_6, t);
                  LocalPopChoice(h_39);
                }
              else
                {
                  t = g_39;
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
  ATerm v_68 = NULL;
  ATerm i_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_68 = ATgetArgument(t, 0);
          {
            ATerm m_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_39);
      t = v_68;
    }
  else
    {
      t = i_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_68;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm v_69 = NULL;
  v_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_69);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm z_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_69);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm n_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_39);
    }
  else
    {
      t = n_39;
      {
        ATerm v_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_39);
          }
        else
          {
            t = v_39;
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_70 = ATgetArgument(t, 0);
                      c_70 = ATgetArgument(t, 1);
                      d_70 = ATgetArgument(t, 2);
                      e_70 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_70;
                  t = map_1_0(c_7, t);
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm z_70 = NULL;
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_70 = ATgetArgument(t, 0);
          {
            ATerm d_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_40);
      t = z_70;
    }
  else
    {
      t = b_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_70;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm c_71 = NULL;
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_71);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(p_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm s_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_74 = ATgetArgument(t, 0);
      t = s_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_74 = ATgetArgument(t, 0);
          {
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_74;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_74), (ATerm) ATempty);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm z_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_74 = ATgetArgument(t, 0);
      t = z_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_74 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_74;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, z_74);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm i_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_75);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      {
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_40);
          }
        else
          {
            t = m_40;
            {
              ATerm p_40 = t;
              int q_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_75 = ATgetArgument(t, 0);
                      l_75 = ATgetArgument(t, 1);
                      m_75 = ATgetArgument(t, 2);
                      n_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_75;
                  t = map_1_0(k_7, t);
                  LocalPopChoice(q_40);
                }
              else
                {
                  t = p_40;
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
  ATerm u_75 = NULL;
  ATerm r_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_75 = ATgetArgument(t, 0);
          {
            ATerm u_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_40);
      t = u_75;
    }
  else
    {
      t = r_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_75;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,a_76 = NULL;
  a_76 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      y_75 = ATgetArgument(t, 0);
      t = y_75;
    }
  else
    {
      t = a_76;
    }
  x_75 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_75);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm f_76 = NULL;
  f_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_76);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm i_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_76);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
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
              ATerm h_41 = t;
              int i_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_76 = ATgetArgument(t, 0);
                      l_76 = ATgetArgument(t, 1);
                      m_76 = ATgetArgument(t, 2);
                      n_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_76;
                  t = map_1_0(r_7, t);
                  LocalPopChoice(i_41);
                }
              else
                {
                  t = h_41;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm n_77 = NULL;
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_77 = ATgetArgument(t, 0);
          {
            ATerm l_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_41);
      t = n_77;
    }
  else
    {
      t = j_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_77;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm c_79 = NULL;
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_79);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm n_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_79);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_41);
    }
  else
    {
      t = m_41;
      {
        ATerm o_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_41);
          }
        else
          {
            t = o_41;
            {
              ATerm q_41 = t;
              int r_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL,v_79 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_79 = ATgetArgument(t, 0);
                      q_79 = ATgetArgument(t, 1);
                      r_79 = ATgetArgument(t, 2);
                      v_79 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_79;
                  t = map_1_0(v_7, t);
                  LocalPopChoice(r_41);
                }
              else
                {
                  t = q_41;
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
  ATerm q_82 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_82 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = q_82;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_82;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm c_83 = NULL;
  c_83 = t;
  {
    ATerm v_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_83 = NULL,z_29 = NULL,b_30 = NULL,j_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            i_83 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_83);
        z_29 = t;
        t = i_83;
        t = ContextVar_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_30);
        j_23 = t;
        t = SSLsetAnnotations(j_23, z_29);
        LocalPopChoice(x_41);
      }
    else
      {
        t = v_41;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, c_83);
  return(t);
}
static ATerm k_11 (ATerm j_143 (ATerm), ATerm l_85, ATerm i_85, ATerm j_85, ATerm v_85, ATerm z_85, ATerm a_86, ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
  t = term_z_34;
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, l_85);
  t = q_12(o_74, l_85, t);
  o_73 = t;
  t = term_a_35;
  n_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_35, l_85);
  t = q_12(n_74, l_85, t);
  p_73 = t;
  t = new_0_0(t);
  y_73 = t;
  t = i_85;
  t = map_1_0(e_7, t);
  z_73 = t;
  t = j_85;
  t = map_1_0(f_7, t);
  a_74 = t;
  t = v_85;
  t = free_vars_3_0(h_7, i_7, tboundin_3_0, t);
  b_74 = t;
  t = map_1_0(l_7, t);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_85, m_74);
  t = conc_0_0(t);
  n_73 = t;
  t = b_74;
  t = map_1_0(n_7, t);
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_74, l_74);
  t = conc_0_0(t);
  c_74 = t;
  t = new_0_0(t);
  d_74 = t;
  t = v_85;
  t = dummify_0_0(t);
  f_74 = t;
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_74;
        if((v_85 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, d_74);
        LocalPopChoice(z_41);
      }
    else
      {
        t = y_41;
        t = f_74;
      }
  }
  e_74 = t;
  t = f_74;
  t = free_vars_3_0(o_7, p_7, tboundin_3_0, t);
  t = map_1_0(s_7, t);
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_85, a_86);
  t = free_vars_3_0(t_7, u_7, tboundin_3_0, t);
  t = filter_1_0(x_7, t);
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_74, h_74);
  t = diff_0_0(t);
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_74, (ATerm) ATmakeAppl(sym_Op_2, term_a_42, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, i_74)), (ATerm) ATmakeAppl(sym_Str_1, y_73))));
  t = j_143(t);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, j_74), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, o_73, i_85, j_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_74), v_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_73), z_73, c_74))), term_i_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_l_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_74), (ATerm) ATmakeAppl(sym_Str_1, l_85))), term_q_42), term_i_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, l_85, i_85, j_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_74), v_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_73), z_73, c_74))), term_i_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_l_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_74), (ATerm) ATmakeAppl(sym_Str_1, l_85))), term_i_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, p_73, i_85, n_73, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_42, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, i_74)), (ATerm) ATmakeAppl(sym_Str_1, y_73))), z_85, a_86))));
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm j_143 (ATerm), ATerm t)
{
  ATerm s_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,e_84 = NULL,f_84 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm r_42 = ATgetArgument(t, 0);
      if(match_cons(r_42, sym_DynRuleId_1))
        {
          ATerm t_42 = ATgetArgument(r_42, 0);
          if(match_cons(t_42, sym_RDecT_3))
            {
              s_83 = ATgetArgument(t_42, 0);
              y_83 = ATgetArgument(t_42, 1);
              z_83 = ATgetArgument(t_42, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm s_42 = ATgetArgument(t, 1);
        if(match_cons(s_42, sym_Rule_3))
          {
            a_84 = ATgetArgument(s_42, 0);
            e_84 = ATgetArgument(s_42, 1);
            f_84 = ATgetArgument(s_42, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_11(j_143, s_83, y_83, z_83, a_84, e_84, f_84, t);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL;
  c_87 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      d_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
      t = d_87;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          e_87 = ATgetArgument(t, 0);
          b_87 = ATgetArgument(t, 1);
          {
            static ATerm y_7 (ATerm t)
            {
              ATerm o_87 = NULL,p_87 = NULL;
              o_87 = t;
              t = SSL_explode_term(o_87);
              if(match_cons(t, sym__2))
                {
                  ATerm w_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm x_42 = ATgetArgument(t, 1);
                    if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
                      {
                        p_87 = ATgetFirst((ATermList) x_42);
                        {
                          ATerm y_42 = (ATerm) ATgetNext((ATermList) x_42);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_87), b_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_87))));
              return(t);
            }
            t = e_87;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((f_87 != NULL) && (f_87 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_87 = ATgetArgument(t, 0);
                g_87 = ATgetArgument(t, 1);
                h_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_87, g_87, h_87)), (ATerm) ATmakeAppl(sym_Rule_3, i_87, term_d_43, term_r_20));
            t = SplitDynamicRule_1_0(y_7, t);
          }
        }
      else
        {
          static ATerm a_8 (ATerm t)
          {
            ATerm v_87 = NULL,w_87 = NULL;
            v_87 = t;
            t = SSL_explode_term(v_87);
            if(match_cons(t, sym__2))
              {
                ATerm e_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_43) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_43 = ATgetArgument(t, 1);
                  if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
                    {
                      w_87 = ATgetFirst((ATermList) f_43);
                      {
                        ATerm g_43 = (ATerm) ATgetNext((ATermList) f_43);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, w_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_87))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              e_87 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_87;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((f_87 != NULL) && (f_87 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_87 = ATgetArgument(t, 0);
              g_87 = ATgetArgument(t, 1);
              h_87 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_87, g_87, h_87)), (ATerm) ATmakeAppl(sym_Rule_3, i_87, term_d_43, term_r_20));
          t = SplitDynamicRule_1_0(a_8, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          d_87 = ATgetArgument(t, 0);
          i_87 = ATgetArgument(t, 1);
          t = d_87;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              e_87 = ATgetArgument(t, 0);
              b_87 = ATgetArgument(t, 1);
              {
                static ATerm c_8 (ATerm t)
                {
                  ATerm d_88 = NULL,f_88 = NULL,d_30 = NULL;
                  d_88 = t;
                  t = SSL_explode_term(d_88);
                  if(match_cons(t, sym__2))
                    {
                      ATerm h_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) h_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm i_43 = ATgetArgument(t, 1);
                        if(((ATgetType(i_43) == AT_LIST) && !(ATisEmpty(i_43))))
                          {
                            f_88 = ATgetFirst((ATermList) i_43);
                            {
                              ATerm q_43 = (ATerm) ATgetNext((ATermList) i_43);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(d_88);
                  if(match_cons(t, sym__2))
                    {
                      ATerm r_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) r_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm s_43 = ATgetArgument(t, 1);
                        if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
                          {
                            ATerm t_43 = ATgetFirst((ATermList) s_43);
                            ATerm z_43 = (ATerm) ATgetNext((ATermList) s_43);
                            if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
                              {
                                d_30 = ATgetFirst((ATermList) z_43);
                                {
                                  ATerm a_44 = (ATerm) ATgetNext((ATermList) z_43);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_30), f_88), b_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_87))));
                  return(t);
                }
                t = e_87;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((f_87 != NULL) && (f_87 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      f_87 = ATgetArgument(t, 0);
                    g_87 = ATgetArgument(t, 1);
                    h_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_87, g_87, h_87)), i_87);
                t = SplitDynamicRule_1_0(c_8, t);
              }
            }
          else
            {
              static ATerm d_8 (ATerm t)
              {
                ATerm m_88 = NULL,n_88 = NULL,f_30 = NULL;
                m_88 = t;
                t = SSL_explode_term(m_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_44 = ATgetArgument(t, 1);
                      if(((ATgetType(e_44) == AT_LIST) && !(ATisEmpty(e_44))))
                        {
                          n_88 = ATgetFirst((ATermList) e_44);
                          {
                            ATerm g_44 = (ATerm) ATgetNext((ATermList) e_44);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(m_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm j_44 = ATgetArgument(t, 1);
                      if(((ATgetType(j_44) == AT_LIST) && !(ATisEmpty(j_44))))
                        {
                          ATerm l_44 = ATgetFirst((ATermList) j_44);
                          ATerm n_44 = (ATerm) ATgetNext((ATermList) j_44);
                          if(((ATgetType(n_44) == AT_LIST) && !(ATisEmpty(n_44))))
                            {
                              f_30 = ATgetFirst((ATermList) n_44);
                              {
                                ATerm p_44 = (ATerm) ATgetNext((ATermList) n_44);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_30), n_88), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_87))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  e_87 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_87;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((f_87 != NULL) && (f_87 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    f_87 = ATgetArgument(t, 0);
                  g_87 = ATgetArgument(t, 1);
                  h_87 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_87, g_87, h_87)), i_87);
              t = SplitDynamicRule_1_0(d_8, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              d_87 = ATgetArgument(t, 0);
              i_87 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_87;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              e_87 = ATgetArgument(t, 0);
              b_87 = ATgetArgument(t, 1);
              {
                static ATerm g_8 (ATerm t)
                {
                  ATerm b_89 = NULL,c_89 = NULL,i_30 = NULL;
                  b_89 = t;
                  t = SSL_explode_term(b_89);
                  if(match_cons(t, sym__2))
                    {
                      ATerm q_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) q_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm r_44 = ATgetArgument(t, 1);
                        if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
                          {
                            c_89 = ATgetFirst((ATermList) r_44);
                            {
                              ATerm t_44 = (ATerm) ATgetNext((ATermList) r_44);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(b_89);
                  if(match_cons(t, sym__2))
                    {
                      ATerm v_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) v_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm w_44 = ATgetArgument(t, 1);
                        if(((ATgetType(w_44) == AT_LIST) && !(ATisEmpty(w_44))))
                          {
                            ATerm x_44 = ATgetFirst((ATermList) w_44);
                            ATerm y_44 = (ATerm) ATgetNext((ATermList) w_44);
                            if(((ATgetType(y_44) == AT_LIST) && !(ATisEmpty(y_44))))
                              {
                                i_30 = ATgetFirst((ATermList) y_44);
                                {
                                  ATerm z_44 = (ATerm) ATgetNext((ATermList) y_44);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_45, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_30), c_89), b_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_87))));
                  return(t);
                }
                t = e_87;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((f_87 != NULL) && (f_87 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      f_87 = ATgetArgument(t, 0);
                    g_87 = ATgetArgument(t, 1);
                    h_87 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_87, g_87, h_87)), i_87);
                t = SplitDynamicRule_1_0(g_8, t);
              }
            }
          else
            {
              static ATerm j_8 (ATerm t)
              {
                ATerm g_89 = NULL,h_89 = NULL,t_30 = NULL;
                g_89 = t;
                t = SSL_explode_term(g_89);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_45) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm g_45 = ATgetArgument(t, 1);
                      if(((ATgetType(g_45) == AT_LIST) && !(ATisEmpty(g_45))))
                        {
                          h_89 = ATgetFirst((ATermList) g_45);
                          {
                            ATerm h_45 = (ATerm) ATgetNext((ATermList) g_45);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(g_89);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_45) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm k_45 = ATgetArgument(t, 1);
                      if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
                        {
                          ATerm m_45 = ATgetFirst((ATermList) k_45);
                          ATerm o_45 = (ATerm) ATgetNext((ATermList) k_45);
                          if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
                            {
                              t_30 = ATgetFirst((ATermList) o_45);
                              {
                                ATerm p_45 = (ATerm) ATgetNext((ATermList) o_45);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_45, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_30), h_89), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_87))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  e_87 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_87;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((f_87 != NULL) && (f_87 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    f_87 = ATgetArgument(t, 0);
                  {
                    ATerm q_45 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm r_45 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = c_87;
              t = SplitDynamicRule_1_0(j_8, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_111 (ATerm), ATerm t)
{
  static ATerm i_89 (ATerm t)
  {
    ATerm u_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_111(t);
        LocalPopChoice(w_45);
      }
    else
      {
        t = u_45;
        t = SRTS_one(i_89, t);
      }
    return(t);
  }
  t = i_89(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm g_143 (ATerm), ATerm t)
{
  static ATerm s_89 (ATerm t)
  {
    static ATerm n_8 (ATerm t)
    {
      ATerm x_45 = t;
      int a_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_143(t);
          LocalPopChoice(a_46);
        }
      else
        {
          t = x_45;
          {
            ATerm l_89 = NULL,m_89 = NULL,p_89 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                l_89 = ATgetArgument(t, 0);
                m_89 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, l_89, m_89);
            {
              static ATerm s_8 (ATerm t)
              {
                t = l_89;
                t = DeclareContextVars_0_0(t);
                t = m_89;
                t = s_89(t);
                if(((p_89 != NULL) && (p_89 != t)))
                  _fail(t);
                else
                  p_89 = t;
                return(t);
              }
              t = scope_2_0(p_8, s_8, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, l_89, not_null(p_89));
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_8, t);
    return(t);
  }
  t = s_89(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm v_89 = NULL,z_89 = NULL,b_90 = NULL,c_90 = NULL;
  c_90 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      b_90 = ATgetArgument(t, 0);
      {
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_90;
            v_89 = t;
            t = c_90;
            LocalPopChoice(c_46);
          }
        else
          {
            t = b_46;
            t = c_90;
            v_89 = t;
            t = c_90;
          }
      }
    }
  else
    {
      t = c_90;
      v_89 = t;
      t = c_90;
    }
  t = term_h_46;
  z_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_89, term_h_46);
  t = g_12(w_8, v_89, z_89, t);
  t = c_90;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm d_90 = NULL,g_90 = NULL,j_90 = NULL,k_90 = NULL;
  k_90 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      j_90 = ATgetArgument(t, 0);
      {
        ATerm i_46 = t;
        int j_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_90;
            d_90 = t;
            t = k_90;
            LocalPopChoice(j_46);
          }
        else
          {
            t = i_46;
            t = k_90;
            d_90 = t;
            t = k_90;
          }
      }
    }
  else
    {
      t = k_90;
      d_90 = t;
      t = k_90;
    }
  t = term_n_46;
  g_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_90, term_n_46);
  t = g_12(c_9, d_90, g_90, t);
  t = k_90;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm o_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(t_8, t);
      LocalPopChoice(q_46);
    }
  else
    {
      t = o_46;
      t = map_1_0(x_8, t);
    }
  return(t);
}
static ATerm d_9 (ATerm t)
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
static ATerm e_9 (ATerm t)
{
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_46);
    }
  else
    {
      t = r_46;
      {
        ATerm t_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_46);
          }
        else
          {
            t = t_46;
            {
              ATerm v_46 = t;
              int x_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_31 = ATgetArgument(t, 0);
                      p_31 = ATgetArgument(t, 1);
                      q_31 = ATgetArgument(t, 2);
                      r_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_31;
                  t = map_1_0(f_9, t);
                  LocalPopChoice(x_46);
                }
              else
                {
                  t = v_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm g_32 = NULL;
  ATerm y_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_32 = ATgetArgument(t, 0);
          {
            ATerm a_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_46);
      t = g_32;
    }
  else
    {
      t = y_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_32;
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm t_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_32 = ATgetArgument(t, 0);
      t = t_32;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm b_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_32;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm d_33 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_33 = ATgetArgument(t, 0);
      t = d_33;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_33 = ATgetArgument(t, 0);
          {
            ATerm c_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_33;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm u_33 = NULL;
  if(match_cons(t, sym__2))
    {
      u_33 = ATgetArgument(t, 0);
      if((u_33 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm j_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_34);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm d_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_47);
    }
  else
    {
      t = d_47;
      {
        ATerm g_47 = t;
        int h_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_47);
          }
        else
          {
            t = g_47;
            {
              ATerm i_47 = t;
              int m_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_34 = ATgetArgument(t, 0);
                      n_34 = ATgetArgument(t, 1);
                      o_34 = ATgetArgument(t, 2);
                      p_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_34;
                  t = map_1_0(s_9, t);
                  LocalPopChoice(m_47);
                }
              else
                {
                  t = i_47;
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
  ATerm h_35 = NULL;
  ATerm n_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_35 = ATgetArgument(t, 0);
          {
            ATerm s_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_47);
      t = h_35;
    }
  else
    {
      t = n_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_35;
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm y_35 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_35 = ATgetArgument(t, 0);
      t = y_35;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_35 = ATgetArgument(t, 0);
          {
            ATerm t_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_35;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm m_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_36 = ATgetArgument(t, 0);
      t = m_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_36 = ATgetArgument(t, 0);
          {
            ATerm u_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_36;
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      if((r_36 != ATgetArgument(t, 1)))
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
  ATerm y_94 = NULL;
  y_94 = t;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL,d_31 = NULL;
        t = y_94;
        t = free_vars_3_0(d_9, e_9, tboundin_3_0, t);
        c_31 = t;
        t = y_94;
        {
          ATerm y_47 = t;
          int z_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_32 = NULL;
              ATerm a_48 = t;
              int b_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm d_48 = ATgetArgument(t, 0);
                      ATerm e_48 = ATgetArgument(t, 1);
                      o_32 = ATgetArgument(t, 2);
                      {
                        ATerm h_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_48);
                  t = o_32;
                  t = map_1_0(j_9, t);
                }
              else
                {
                  t = a_48;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm l_48 = ATgetArgument(t, 0);
                      ATerm m_48 = ATgetArgument(t, 1);
                      o_32 = ATgetArgument(t, 2);
                      {
                        ATerm p_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = o_32;
                  t = map_1_0(k_9, t);
                }
              LocalPopChoice(z_47);
            }
          else
            {
              t = y_47;
              t = (ATerm) ATempty;
            }
        }
        d_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
        t = u_11(p_9, c_31, d_31, t);
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        {
          ATerm g_34 = NULL,h_34 = NULL;
          t = y_94;
          t = free_vars_3_0(q_9, r_9, tboundin_3_0, t);
          g_34 = t;
          t = y_94;
          {
            ATerm q_48 = t;
            int r_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_35 = NULL;
                ATerm v_48 = t;
                int w_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm x_48 = ATgetArgument(t, 0);
                        ATerm y_48 = ATgetArgument(t, 1);
                        r_35 = ATgetArgument(t, 2);
                        {
                          ATerm a_49 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_48);
                    t = r_35;
                    t = map_1_0(t_9, t);
                  }
                else
                  {
                    t = v_48;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm b_49 = ATgetArgument(t, 0);
                        ATerm d_49 = ATgetArgument(t, 1);
                        r_35 = ATgetArgument(t, 2);
                        {
                          ATerm e_49 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = r_35;
                    t = map_1_0(u_9, t);
                  }
                LocalPopChoice(r_48);
              }
            else
              {
                t = q_48;
                t = (ATerm) ATempty;
              }
          }
          h_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_34, h_34);
          t = u_11(v_9, g_34, h_34, t);
        }
      }
  }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_95 = ATgetFirst((ATermList) t);
      t_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_95, t_95);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_49 = ATgetArgument(t, 0);
      if(match_cons(h_49, sym__2))
        {
          u_95 = ATgetArgument(h_49, 0);
          v_95 = ATgetArgument(h_49, 1);
        }
      else
        _fail(t);
      {
        ATerm i_49 = ATgetArgument(t, 1);
        if(match_cons(i_49, sym__2))
          {
            w_95 = ATgetArgument(i_49, 0);
            x_95 = ATgetArgument(i_49, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_95), u_95), (ATerm) ATinsert(CheckATermList(x_95), v_95));
  return(t);
}
static ATerm n_11 (ATerm u_83, ATerm t_83, ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,i_95 = NULL;
  static ATerm x_9 (ATerm t)
  {
    t = u_83;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = u_83;
    {
      static ATerm y_9 (ATerm t)
      {
        ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,q_95 = NULL,r_95 = NULL,o_23 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            k_95 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_95;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(z_9, f_10, c_11, _id, t);
        r_95 = t;
        if(match_cons(t, sym__2))
          {
            m_95 = ATgetArgument(t, 0);
            n_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_95);
        l_95 = t;
        t = n_95;
        t = concat_0_0(t);
        q_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_95, q_95);
        o_23 = t;
        t = SSLsetAnnotations(o_23, l_95);
        if(match_cons(t, sym__2))
          {
            if(((f_95 != NULL) && (f_95 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              f_95 = ATgetArgument(t, 0);
            if(((e_95 != NULL) && (e_95 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              e_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, f_95);
        return(t);
      }
      t = split_dynamic_rule_1_0(y_9, t);
    }
    if(((i_95 != NULL) && (i_95 != t)))
      _fail(t);
    else
      i_95 = t;
    return(t);
  }
  t = scope_2_0(w_9, x_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_95)), not_null(i_95)), t_83);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  static ATerm z_95 (ATerm t)
  {
    ATerm j_49 = t;
    int k_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109(t);
        t = z_95(t);
        LocalPopChoice(k_49);
      }
    else
      {
        t = j_49;
        t = n_109(t);
      }
    return(t);
  }
  t = z_95(t);
  return(t);
}
ATerm listtd_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  static ATerm y_96 (ATerm t)
  {
    ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL;
    t = i_118(t);
    q_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_96;
      }
    else
      {
        ATerm y_36 = NULL,b_37 = NULL,u_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_96 = ATgetFirst((ATermList) t);
            s_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_96);
        y_36 = t;
        t = s_96;
        t = y_96(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(b_37), r_96);
        u_23 = t;
        t = SSLsetAnnotations(u_23, y_36);
      }
    return(t);
  }
  t = y_96(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,k_97 = NULL,l_97 = NULL,q_97 = NULL,t_97 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      q_97 = ATgetArgument(t, 0);
      t_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_97 = ATgetFirst((ATermList) t);
      l_97 = (ATerm) ATgetNext((ATermList) t);
      t = g_97;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          k_97 = ATgetArgument(t, 0);
          f_97 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, k_97, f_97), (ATerm) ATmakeAppl(sym_DynRuleScope_2, l_97, t_97))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, k_97)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              k_97 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, l_97, t_97)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, k_97)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_97;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL,q_98 = NULL;
  t = term_d_37;
  n_98 = t;
  t = (ATerm) ATinsert(ATempty, term_p_49);
  q_98 = t;
  t = SSL_printnl(n_98, q_98);
  t = term_f_37;
  m_98 = t;
  t = SSL_exit(m_98);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
  t = term_d_37;
  t_98 = t;
  t = (ATerm) ATinsert(ATempty, term_r_49);
  u_98 = t;
  t = SSL_printnl(t_98, u_98);
  t = term_f_37;
  s_98 = t;
  t = SSL_exit(s_98);
  return(t);
}
static ATerm n_101 (ATerm e_100, ATerm f_100, ATerm i_100, ATerm j_100, ATerm k_100, ATerm n_100, ATerm o_100, ATerm t)
{
  t = o_100;
  {
    ATerm t_49 = t;
    if((PushChoice() == 0))
      {
        t = k_100;
        if(match_cons(t, sym_Op_2))
          {
            ATerm u_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_49) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_49 = ATgetArgument(t, 1);
              if(((ATgetType(v_49) != AT_LIST) || !(ATisEmpty(v_49))))
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
        t = t_49;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_100, f_100, i_100)), (ATerm) ATmakeAppl(sym_Rule_3, j_100, k_100, n_100));
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL;
  c_101 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      d_101 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
      f_101 = ATgetArgument(t, 2);
      g_101 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_101;
  if(match_cons(t, sym_Rule_3))
    {
      h_101 = ATgetArgument(t, 0);
      i_101 = ATgetArgument(t, 1);
      j_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_101;
  if(match_cons(t, sym_Op_2))
    {
      a_101 = ATgetArgument(t, 0);
      b_101 = ATgetArgument(t, 1);
      t = b_101;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_101;
          if(match_string(t, "Undefined"))
            {
              ATerm x_49 = t;
              int y_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_101;
                  {
                    ATerm z_49 = t;
                    int a_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_101;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(a_50);
                      }
                    else
                      {
                        t = z_49;
                        {
                          ATerm o_38 = NULL,u_38 = NULL;
                          t = term_d_37;
                          o_38 = t;
                          t = (ATerm) ATinsert(ATempty, term_b_50);
                          u_38 = t;
                          t = SSL_printnl(o_38, u_38);
                          t = c_101;
                          t = debug_1_0(g_11, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_101, e_101, f_101)), h_101);
                  LocalPopChoice(y_49);
                }
              else
                {
                  t = x_49;
                  t = n_101(d_101, e_101, f_101, h_101, i_101, j_101, c_101, t);
                }
            }
          else
            {
              t = n_101(d_101, e_101, f_101, h_101, i_101, j_101, c_101, t);
            }
        }
      else
        {
          t = a_101;
          t = n_101(d_101, e_101, f_101, h_101, i_101, j_101, c_101, t);
        }
    }
  else
    {
      t = n_101(d_101, e_101, f_101, h_101, i_101, j_101, c_101, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL,q_101 = NULL,r_101 = NULL;
  o_101 = t;
  t = n_116(t);
  p_101 = t;
  t = term_d_37;
  q_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_101), p_101);
  r_101 = t;
  t = SSL_printnl(q_101, r_101);
  t = o_101;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,a_102 = NULL,b_102 = NULL;
  b_102 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm c_50 = ATgetArgument(t, 0);
      if(match_cons(c_50, sym_DynRuleId_1))
        {
          ATerm e_50 = ATgetArgument(c_50, 0);
          if(match_cons(e_50, sym_RDecT_3))
            {
              u_101 = ATgetArgument(e_50, 0);
              v_101 = ATgetArgument(e_50, 1);
              w_101 = ATgetArgument(e_50, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm d_50 = ATgetArgument(t, 1);
        if(match_cons(d_50, sym_Rule_3))
          {
            x_101 = ATgetArgument(d_50, 0);
            {
              ATerm f_50 = ATgetArgument(d_50, 1);
              if(match_cons(f_50, sym_Op_2))
                {
                  ATerm g_50 = ATgetArgument(f_50, 0);
                  if((ATgetSymbol((ATermAppl) g_50) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm h_50 = ATgetArgument(f_50, 1);
                    if(((ATgetType(h_50) != AT_LIST) || !(ATisEmpty(h_50))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            a_102 = ATgetArgument(d_50, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm i_50 = t;
    int j_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_102;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(j_50);
      }
    else
      {
        t = i_50;
        {
          ATerm c_102 = NULL,d_102 = NULL;
          t = term_d_37;
          c_102 = t;
          t = (ATerm) ATinsert(ATempty, term_b_50);
          d_102 = t;
          t = SSL_printnl(c_102, d_102);
          t = b_102;
          t = debug_1_0(o_11, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, u_101, v_101, w_101)), x_101);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_102 = NULL;
      g_102 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm m_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_102;
      LocalPopChoice(l_50);
      {
        ATerm h_102 = NULL,i_102 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            h_102 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_102;
        t = map_1_0(q_11, t);
        i_102 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, i_102);
      }
    }
  else
    {
      t = k_50;
      {
        ATerm n_50 = t;
        int o_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_102 = NULL;
            l_102 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm q_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_102;
            LocalPopChoice(o_50);
            {
              ATerm m_102 = NULL,n_102 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  m_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_102;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              n_102 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, n_102);
            }
          }
        else
          {
            t = n_50;
            {
              ATerm r_50 = t;
              int s_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_102 = NULL;
                  o_102 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm t_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_102;
                  LocalPopChoice(s_50);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = r_50;
                  {
                    ATerm u_50 = t;
                    int v_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_102 = NULL;
                        q_102 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm w_50 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = q_102;
                        LocalPopChoice(v_50);
                        t = UpgradeExtendOverrideDynamicRules_0_0(t);
                      }
                    else
                      {
                        t = u_50;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(y_50);
    }
  else
    {
      t = x_50;
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(p_11, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = Cons_2_0(t_11, x_11, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm p_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,w_23 = NULL;
  v_103 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_103);
  p_103 = t;
  t = t_103;
  t = topdown_1_0(z_11, t);
  t = listtd_1_0(a_12, t);
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_103);
  w_23 = t;
  t = SSLsetAnnotations(w_23, p_103);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_51 = t;
      int c_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(c_51);
        }
      else
        {
          t = b_51;
          {
            ATerm y_103 = NULL,z_103 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                y_103 = ATgetArgument(t, 0);
                z_103 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_51, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, z_103), (ATerm) ATmakeAppl(sym_Str_1, y_103)));
          }
        }
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = repeat_2_0(c_12, _id, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_104 = ATgetFirst((ATermList) t);
      h_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_11(g_104, h_104, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm y_102 = NULL,z_102 = NULL,g_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,y_23 = NULL,x_23 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  n_103 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_103);
  y_102 = t;
  t = z_102;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_103 = ATgetFirst((ATermList) t);
      k_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_102);
  g_103 = t;
  t = k_103;
  t = Cons_2_0(_id, r_11, t);
  l_103 = t;
  t = (ATerm) ATinsert(CheckATermList(l_103), j_103);
  x_23 = t;
  t = SSLsetAnnotations(x_23, g_103);
  m_103 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_103);
  y_23 = t;
  t = SSLsetAnnotations(y_23, y_102);
  return(t);
}
ATerm tboundin_3_0 (ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL,t_109 = NULL;
  s_109 = t;
  if(match_cons(t, sym_Scope_2))
    {
      t_109 = ATgetArgument(t, 0);
      p_109 = ATgetArgument(t, 1);
      {
        ATerm o_39 = NULL,w_39 = NULL,x_39 = NULL,c_24 = NULL;
        t = SSLgetAnnotations(s_109);
        o_39 = t;
        t = t_109;
        t = t_142(t);
        w_39 = t;
        t = p_109;
        t = r_142(t);
        x_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_39, x_39);
        c_24 = t;
        t = SSLsetAnnotations(c_24, o_39);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          t_109 = ATgetArgument(t, 0);
          p_109 = ATgetArgument(t, 1);
          q_109 = ATgetArgument(t, 2);
          {
            ATerm o_40 = NULL,s_40 = NULL,d_41 = NULL,e_41 = NULL,g_24 = NULL;
            t = SSLgetAnnotations(s_109);
            o_40 = t;
            t = t_109;
            t = t_142(t);
            s_40 = t;
            t = p_109;
            t = t_142(t);
            d_41 = t;
            t = q_109;
            t = t_142(t);
            e_41 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, s_40, d_41, e_41);
            g_24 = t;
            t = SSLsetAnnotations(g_24, o_40);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_109 = ATgetArgument(t, 0);
              p_109 = ATgetArgument(t, 1);
              q_109 = ATgetArgument(t, 2);
              r_109 = ATgetArgument(t, 3);
              {
                ATerm w_41 = NULL,k_42 = NULL,p_42 = NULL,u_42 = NULL,v_42 = NULL,m_24 = NULL;
                t = SSLgetAnnotations(s_109);
                w_41 = t;
                t = t_109;
                t = t_142(t);
                k_42 = t;
                t = p_109;
                t = t_142(t);
                p_42 = t;
                t = q_109;
                t = t_142(t);
                u_42 = t;
                t = r_109;
                t = r_142(t);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_42, p_42, u_42, v_42);
                m_24 = t;
                t = SSLsetAnnotations(m_24, w_41);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  t_109 = ATgetArgument(t, 0);
                  p_109 = ATgetArgument(t, 1);
                  q_109 = ATgetArgument(t, 2);
                  r_109 = ATgetArgument(t, 3);
                  {
                    ATerm j_43 = NULL,u_43 = NULL,v_43 = NULL,x_43 = NULL,y_43 = NULL,b_25 = NULL;
                    t = SSLgetAnnotations(s_109);
                    j_43 = t;
                    t = t_109;
                    t = t_142(t);
                    u_43 = t;
                    t = p_109;
                    t = t_142(t);
                    v_43 = t;
                    t = q_109;
                    t = t_142(t);
                    x_43 = t;
                    t = r_109;
                    t = r_142(t);
                    y_43 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_43, v_43, x_43, y_43);
                    b_25 = t;
                    t = SSLsetAnnotations(b_25, j_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      t_109 = ATgetArgument(t, 0);
                      {
                        ATerm i_44 = NULL,k_44 = NULL,g_25 = NULL;
                        t = SSLgetAnnotations(s_109);
                        i_44 = t;
                        t = t_109;
                        t = r_142(t);
                        k_44 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, k_44);
                        g_25 = t;
                        t = SSLsetAnnotations(g_25, i_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          t_109 = ATgetArgument(t, 0);
                          {
                            ATerm s_44 = NULL,u_44 = NULL,h_25 = NULL;
                            t = SSLgetAnnotations(s_109);
                            s_44 = t;
                            t = t_109;
                            t = r_142(t);
                            u_44 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_44);
                            h_25 = t;
                            t = SSLsetAnnotations(h_25, s_44);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              t_109 = ATgetArgument(t, 0);
                              {
                                ATerm a_45 = NULL,d_45 = NULL,i_25 = NULL;
                                t = SSLgetAnnotations(s_109);
                                a_45 = t;
                                t = t_109;
                                t = r_142(t);
                                d_45 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, d_45);
                                i_25 = t;
                                t = SSLsetAnnotations(i_25, a_45);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  t_109 = ATgetArgument(t, 0);
                                  {
                                    ATerm j_45 = NULL,l_45 = NULL,j_25 = NULL;
                                    t = SSLgetAnnotations(s_109);
                                    j_45 = t;
                                    t = t_109;
                                    t = r_142(t);
                                    l_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, l_45);
                                    j_25 = t;
                                    t = SSLsetAnnotations(j_25, j_45);
                                  }
                                }
                              else
                                {
                                  ATerm t_45 = NULL,v_45 = NULL,o_25 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      t_109 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_109);
                                  t_45 = t;
                                  t = t_109;
                                  t = r_142(t);
                                  v_45 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_45);
                                  o_25 = t;
                                  t = SSLsetAnnotations(o_25, t_45);
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
static ATerm d_12 (ATerm t)
{
  ATerm w_110 = NULL;
  ATerm f_51 = t;
  int g_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_110 = ATgetArgument(t, 0);
          {
            ATerm h_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_51);
      t = w_110;
    }
  else
    {
      t = f_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_110;
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm c_111 = NULL;
  ATerm i_51 = t;
  int j_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_111 = ATgetArgument(t, 0);
          {
            ATerm k_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_51);
      t = c_111;
    }
  else
    {
      t = i_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_111;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm r_110 = NULL;
  ATerm l_51 = t;
  int m_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm n_51 = ATgetArgument(t, 0);
          ATerm o_51 = ATgetArgument(t, 1);
          r_110 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(m_51);
      t = r_110;
      t = map_1_0(d_12, t);
    }
  else
    {
      t = l_51;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm p_51 = ATgetArgument(t, 0);
          ATerm q_51 = ATgetArgument(t, 1);
          r_110 = ATgetArgument(t, 2);
          {
            ATerm r_51 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_110;
      t = map_1_0(j_12, t);
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm v_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_111);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm s_51 = t;
  int t_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_51);
    }
  else
    {
      t = s_51;
      {
        ATerm u_51 = t;
        int v_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_51);
          }
        else
          {
            t = u_51;
            {
              ATerm w_51 = t;
              int x_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_111 = ATgetArgument(t, 0);
                      y_111 = ATgetArgument(t, 1);
                      z_111 = ATgetArgument(t, 2);
                      a_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_111;
                  t = map_1_0(i_14, t);
                  LocalPopChoice(x_51);
                }
              else
                {
                  t = w_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm j_112 = NULL;
  ATerm z_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_112 = ATgetArgument(t, 0);
          {
            ATerm b_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_52);
      t = j_112;
    }
  else
    {
      t = z_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_112;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm n_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_112);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm c_52 = t;
  int d_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_52);
    }
  else
    {
      t = c_52;
      {
        ATerm e_52 = t;
        int f_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_52);
          }
        else
          {
            t = e_52;
            {
              ATerm g_52 = t;
              int h_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_112 = ATgetArgument(t, 0);
                      q_112 = ATgetArgument(t, 1);
                      r_112 = ATgetArgument(t, 2);
                      s_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_112;
                  t = map_1_0(o_14, t);
                  LocalPopChoice(h_52);
                }
              else
                {
                  t = g_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm z_112 = NULL;
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_112 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_52);
      t = z_112;
    }
  else
    {
      t = i_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_112;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm d_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_113);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_52);
    }
  else
    {
      t = l_52;
      {
        ATerm n_52 = t;
        int o_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_52);
          }
        else
          {
            t = n_52;
            {
              ATerm p_52 = t;
              int q_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_113 = ATgetArgument(t, 0);
                      g_113 = ATgetArgument(t, 1);
                      h_113 = ATgetArgument(t, 2);
                      i_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_113;
                  t = map_1_0(t_14, t);
                  LocalPopChoice(q_52);
                }
              else
                {
                  t = p_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm p_113 = NULL;
  ATerm r_52 = t;
  int s_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_113 = ATgetArgument(t, 0);
          {
            ATerm t_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_52);
      t = p_113;
    }
  else
    {
      t = r_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_113;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm t_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_113);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm u_52 = t;
  int v_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_52);
    }
  else
    {
      t = u_52;
      {
        ATerm w_52 = t;
        int x_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_52);
          }
        else
          {
            t = w_52;
            {
              ATerm y_52 = t;
              int a_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_113 = ATgetArgument(t, 0);
                      w_113 = ATgetArgument(t, 1);
                      x_113 = ATgetArgument(t, 2);
                      y_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_113;
                  t = map_1_0(z_14, t);
                  LocalPopChoice(a_53);
                }
              else
                {
                  t = y_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm f_114 = NULL;
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_114 = ATgetArgument(t, 0);
          {
            ATerm e_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_53);
      t = f_114;
    }
  else
    {
      t = c_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_114;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm j_114 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_114);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_53);
    }
  else
    {
      t = f_53;
      {
        ATerm h_53 = t;
        int i_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_53);
          }
        else
          {
            t = h_53;
            {
              ATerm j_53 = t;
              int k_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_114 = NULL,m_114 = NULL,n_114 = NULL,o_114 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_114 = ATgetArgument(t, 0);
                      m_114 = ATgetArgument(t, 1);
                      n_114 = ATgetArgument(t, 2);
                      o_114 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_114;
                  t = map_1_0(c_15, t);
                  LocalPopChoice(k_53);
                }
              else
                {
                  t = j_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm v_114 = NULL;
  ATerm l_53 = t;
  int m_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_114 = ATgetArgument(t, 0);
          {
            ATerm n_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_53);
      t = v_114;
    }
  else
    {
      t = l_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_114;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_111 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      t_111 = ATgetArgument(t, 0);
      t = t_111;
      t = free_vars_3_0(j_13, h_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          t_111 = ATgetArgument(t, 0);
          t = t_111;
          t = free_vars_3_0(k_14, n_14, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              t_111 = ATgetArgument(t, 0);
              t = t_111;
              t = free_vars_3_0(p_14, q_14, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  t_111 = ATgetArgument(t, 0);
                  t = t_111;
                  t = free_vars_3_0(w_14, x_14, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      t_111 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_111;
                  t = free_vars_3_0(a_15, b_15, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm j_115 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_115);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm o_53 = t;
  int p_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_53);
    }
  else
    {
      t = o_53;
      {
        ATerm q_53 = t;
        int r_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_53);
          }
        else
          {
            t = q_53;
            {
              ATerm t_53 = t;
              int u_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_115 = ATgetArgument(t, 0);
                      m_115 = ATgetArgument(t, 1);
                      n_115 = ATgetArgument(t, 2);
                      o_115 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_115;
                  t = map_1_0(k_15, t);
                  LocalPopChoice(u_53);
                }
              else
                {
                  t = t_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm v_115 = NULL;
  ATerm x_53 = t;
  int z_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_115 = ATgetArgument(t, 0);
          {
            ATerm d_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_53);
      t = v_115;
    }
  else
    {
      t = x_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_115;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_115 = NULL,g_115 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_115 = ATgetArgument(t, 0);
      t = g_115;
      if(match_cons(t, sym_Rule_3))
        {
          c_115 = ATgetArgument(t, 0);
          {
            ATerm e_54 = ATgetArgument(t, 1);
          }
          {
            ATerm f_54 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_115;
      t = free_vars_3_0(g_15, j_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_115 = ATgetArgument(t, 0);
          {
            ATerm i_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_115;
    }
  return(t);
}
static ATerm u_11 (ATerm j_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  static ATerm q_116 (ATerm t)
  {
    ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL;
    j_116 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_116 = ATgetFirst((ATermList) t);
            l_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_54 = t;
          int l_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_116;
              {
                static ATerm l_15 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = v_11(j_121, l_15, k_116, l_116, t);
              }
              t = q_116(t);
              LocalPopChoice(l_54);
            }
          else
            {
              t = k_54;
              {
                ATerm k_46 = NULL,p_46 = NULL,a_26 = NULL;
                t = SSLgetAnnotations(j_116);
                k_46 = t;
                t = l_116;
                t = q_116(t);
                p_46 = t;
                t = (ATerm) ATinsert(CheckATermList(p_46), k_116);
                a_26 = t;
                t = SSLsetAnnotations(a_26, k_46);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = q_116(t);
  return(t);
}
static ATerm v_11 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  t = n_121(t);
  {
    static ATerm m_15 (ATerm t)
    {
      ATerm u_116 = NULL;
      u_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, u_116);
      t = m_121(t);
      return(t);
    }
    t = fetch_1_0(m_15, t);
  }
  t = p_30;
  return(t);
}
static ATerm w_11 (ATerm e_121 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm r_117 (ATerm t)
  {
    ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
    k_117 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_117;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_117 = ATgetFirst((ATermList) t);
            m_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_54 = t;
          int o_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_117;
              {
                static ATerm n_15 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = v_11(e_121, n_15, l_117, m_117, t);
              }
              t = r_117(t);
              LocalPopChoice(o_54);
            }
          else
            {
              t = m_54;
              {
                ATerm l_47 = NULL,o_47 = NULL,c_26 = NULL;
                t = SSLgetAnnotations(k_117);
                l_47 = t;
                t = m_117;
                t = r_117(t);
                o_47 = t;
                t = (ATerm) ATinsert(CheckATermList(o_47), l_117);
                c_26 = t;
                t = SSLsetAnnotations(c_26, l_47);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = r_117(t);
  return(t);
}
ATerm genzip_4_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t)
{
  static ATerm z_117 (ATerm t)
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_119(t);
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        {
          ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL,o_26 = NULL;
          t = d_119(t);
          y_117 = t;
          if(match_cons(t, sym__2))
            {
              u_117 = ATgetArgument(t, 0);
              v_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_117);
          t_117 = t;
          t = u_117;
          t = f_119(t);
          w_117 = t;
          t = v_117;
          t = z_117(t);
          x_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_117, x_117);
          o_26 = t;
          t = SSLsetAnnotations(o_26, t_117);
          t = e_119(t);
        }
      }
    return(t);
  }
  t = z_117(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_54 = ATgetArgument(t, 0);
      if(((ATgetType(r_54) != AT_LIST) || !(ATisEmpty(r_54))))
        _fail(t);
      {
        ATerm w_54 = ATgetArgument(t, 1);
        if(((ATgetType(w_54) != AT_LIST) || !(ATisEmpty(w_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,k_118 = NULL,l_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_54 = ATgetArgument(t, 0);
      if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
        {
          g_118 = ATgetFirst((ATermList) x_54);
          h_118 = (ATerm) ATgetNext((ATermList) x_54);
        }
      else
        _fail(t);
      {
        ATerm b_55 = ATgetArgument(t, 1);
        if(((ATgetType(b_55) == AT_LIST) && !(ATisEmpty(b_55))))
          {
            k_118 = ATgetFirst((ATermList) b_55);
            l_118 = (ATerm) ATgetNext((ATermList) b_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_118, k_118), (ATerm) ATmakeAppl(sym__2, h_118, l_118));
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL;
  if(match_cons(t, sym__2))
    {
      m_118 = ATgetArgument(t, 0);
      n_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_118), m_118);
  return(t);
}
static ATerm b_12 (ATerm i_673, ATerm n_673, ATerm v_66, ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL;
  t = SSL_explode_term(n_673);
  if(match_cons(t, sym__2))
    {
      b_118 = ATgetArgument(t, 0);
      d_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_673);
  if(match_cons(t, sym__2))
    {
      if((b_118 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_118, d_118);
  t = genzip_4_0(o_15, p_15, q_15, _id, t);
  e_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_118, v_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t)
{
  static ATerm p_118 (ATerm t)
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_110(t);
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = e_110(t);
        t = p_118(t);
      }
    return(t);
  }
  t = p_118(t);
  return(t);
}
ATerm for_3_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t)
{
  t = g_110(t);
  t = while_not_2_0(h_110, i_110, t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm w_118 = NULL;
  w_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_118);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL,q_26 = NULL;
  a_119 = t;
  if(match_cons(t, sym__2))
    {
      y_118 = ATgetArgument(t, 0);
      z_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_119);
  x_118 = t;
  t = z_118;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_118, z_118);
  q_26 = t;
  t = SSLsetAnnotations(q_26, x_118);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL;
  y_119 = t;
  if(match_cons(t, sym__2))
    {
      z_119 = ATgetArgument(t, 0);
      a_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_120;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_120 = ATgetFirst((ATermList) t);
      c_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_55 = t;
        int g_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_120(z_119, a_120, y_119, t);
            LocalPopChoice(g_55);
          }
        else
          {
            t = f_55;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_119), b_120), c_120);
          }
      }
    }
  else
    {
      t = m_120(z_119, a_120, y_119, t);
    }
  return(t);
}
static ATerm m_120 (ATerm b_119, ATerm h_119, ATerm i_119, ATerm t)
{
  ATerm j_119 = NULL,m_119 = NULL,r_26 = NULL,p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL;
  t = SSLgetAnnotations(i_119);
  j_119 = t;
  t = h_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_119 = ATgetFirst((ATermList) t);
      s_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_119;
  if(match_cons(t, sym__2))
    {
      q_119 = ATgetArgument(t, 0);
      r_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_119;
        if((q_119 != t))
          {
            _fail(t);
          }
        t = s_119;
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        t = h_119;
        t = b_12(q_119, r_119, s_119, t);
      }
  }
  m_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_119, m_119);
  r_26 = t;
  t = SSLsetAnnotations(r_26, j_119);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm l_120 = NULL;
  if(match_cons(t, sym__2))
    {
      l_120 = ATgetArgument(t, 0);
      if((l_120 != ATgetArgument(t, 1)))
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
  ATerm n_55 = t;
  int o_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_15, s_15, w_15, t);
      LocalPopChoice(o_55);
    }
  else
    {
      t = n_55;
      {
        ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL;
        g_120 = t;
        if(match_cons(t, sym__2))
          {
            h_120 = ATgetArgument(t, 0);
            i_120 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_120;
        t = w_11(x_15, h_120, i_120, t);
      }
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      t_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(d_16, s_48, t_48, t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm u_48 = NULL;
  if(match_cons(t, sym__2))
    {
      u_48 = ATgetArgument(t, 0);
      if((u_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  if(match_cons(t, sym__2))
    {
      l_49 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(h_16, l_49, m_49, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      if((s_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm g_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm a_121 (ATerm t)
  {
    ATerm p_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_140(t);
        LocalPopChoice(r_55);
      }
    else
      {
        t = p_55;
        {
          ATerm s_55 = t;
          int t_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_120 = NULL,p_120 = NULL,f_48 = NULL,k_48 = NULL;
              o_120 = t;
              t = f_140(t);
              p_120 = t;
              t = o_120;
              {
                static ATerm y_15 (ATerm t)
                {
                  ATerm r_120 = NULL;
                  t = a_121(t);
                  r_120 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_120, p_120);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_140(y_15, a_121, a_16, t);
              }
              k_48 = t;
              t = SSL_explode_term(k_48);
              if(match_cons(t, sym__2))
                {
                  ATerm v_55 = ATgetArgument(t, 0);
                  f_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_48;
              t = foldr_3_0(b_16, c_16, _id, t);
              LocalPopChoice(t_55);
            }
          else
            {
              t = s_55;
              {
                ATerm f_49 = NULL,g_49 = NULL;
                g_49 = t;
                t = SSL_explode_term(g_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_55 = ATgetArgument(t, 0);
                    f_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_49;
                t = foldr_3_0(e_16, g_16, a_121, t);
              }
            }
        }
      }
    return(t);
  }
  t = a_121(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm n_110 (ATerm), ATerm t)
{
  static ATerm i_16 (ATerm t)
  {
    t = bottomup_1_0(n_110, t);
    return(t);
  }
  t = SRTS_all(i_16, t);
  t = n_110(t);
  return(t);
}
static ATerm f_12 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm b_121 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
  t = y_12(p_60, q_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_121 = ATgetFirst((ATermList) t);
      {
        ATerm x_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_121;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm v_121 = NULL,w_121 = NULL;
  v_121 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL;
        t = term_c_56;
        p_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_56, v_121);
        t = f_12(p_50, v_121, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_56) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, w_121, (ATerm) ATempty);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        {
          ATerm y_51 = NULL;
          t = term_c_56;
          y_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_56, v_121);
          t = f_12(y_51, v_121, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm e_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_56) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, w_121, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  static ATerm z_121 (ATerm t)
  {
    ATerm f_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        LocalPopChoice(g_56);
      }
    else
      {
        t = f_56;
        t = SRTS_all(z_121, t);
      }
    return(t);
  }
  t = z_121(t);
  return(t);
}
static ATerm g_12 (ATerm h_130 (ATerm), ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL;
  d_122 = t;
  t = h_130(t);
  a_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_122, o_44, m_44);
  t = z_12(a_122, o_44, m_44, t);
  {
    ATerm k_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_122 = NULL;
        t = term_m_56;
        i_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_122, term_m_56);
        t = y_12(a_122, i_122, t);
        LocalPopChoice(l_56);
      }
    else
      {
        t = k_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_122 = ATgetFirst((ATermList) t);
      c_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_122, term_m_56, (ATerm) ATinsert(CheckATermList(c_122), (ATerm) ATinsert(CheckATermList(b_122), o_44)));
  t = lookup_table_0_1(a_122, t);
  h_122 = t;
  t = term_m_56;
  e_122 = t;
  t = (ATerm) ATinsert(CheckATermList(c_122), (ATerm) ATinsert(CheckATermList(b_122), o_44));
  f_122 = t;
  t = h_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(e_122, f_122, g_122, t);
  t = d_122;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_c_56;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_c_56;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm m_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      o_122 = ATgetArgument(t, 0);
      p_122 = ATgetArgument(t, 1);
      m_122 = ATgetArgument(t, 2);
      {
        ATerm t_122 = NULL,u_122 = NULL;
        t = p_122;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_122);
        t_122 = t;
        t = term_q_56;
        u_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_122), term_q_56);
        t = g_12(j_16, t_122, u_122, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, o_122, (ATerm)ATempty, m_122);
      }
    }
  else
    {
      ATerm x_122 = NULL,y_122 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          o_122 = ATgetArgument(t, 0);
          p_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_122;
      if(match_cons(t, sym_ConstType_1))
        {
          q_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_122);
      x_122 = t;
      t = term_w_56;
      y_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_122), term_w_56);
      t = g_12(l_16, x_122, y_122, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_122, (ATerm) ATmakeAppl(sym_ConstType_1, q_122));
    }
  return(t);
}
static ATerm h_12 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL;
  d_123 = t;
  {
    ATerm x_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        t = y_12(j_60, k_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_57 = ATgetFirst((ATermList) t);
            c_123 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_57);
        {
          ATerm e_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, c_123);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_123 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_13(k_60, c_123, e_123, t);
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, c_123);
        }
      }
    else
      {
        t = x_56;
        {
          ATerm g_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_123 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_12(k_60, g_123, t);
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        }
      }
  }
  t = d_123;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL,n_123 = NULL,o_123 = NULL;
  l_123 = t;
  t = e_130(t);
  k_123 = t;
  {
    ATerm d_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_123 = NULL;
        t = term_m_56;
        p_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_123, term_m_56);
        t = y_12(k_123, p_123, t);
        LocalPopChoice(f_57);
      }
    else
      {
        t = d_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_123 = ATgetFirst((ATermList) t);
      i_123 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_123, term_m_56, i_123);
  t = lookup_table_0_1(k_123, t);
  o_123 = t;
  t = term_m_56;
  m_123 = t;
  t = o_123;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(m_123, i_123, n_123, t);
  t = j_123;
  {
    static ATerm m_16 (ATerm t)
    {
      ATerm q_123 = NULL;
      q_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_123, q_123);
      t = h_12(k_123, q_123, t);
      return(t);
    }
    t = map_1_0(m_16, t);
  }
  t = l_123;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t)
{
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_109(t);
      t = j_109(t);
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
      t = j_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_130 (ATerm), ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL,c_124 = NULL,d_124 = NULL;
  t_123 = t;
  t = d_130(t);
  s_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_123, term_m_56);
  {
    ATerm i_57 = t;
    int j_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_124 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_57 = ATgetArgument(t, 0);
            ATerm n_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_56;
        h_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_123, term_m_56);
        t = y_12(s_123, h_124, t);
        LocalPopChoice(j_57);
      }
    else
      {
        t = i_57;
        t = (ATerm) ATempty;
      }
  }
  u_123 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_123, term_m_56, (ATerm) ATinsert(CheckATermList(u_123), (ATerm) ATempty));
  t = lookup_table_0_1(s_123, t);
  d_124 = t;
  t = term_m_56;
  v_123 = t;
  t = (ATerm) ATinsert(CheckATermList(u_123), (ATerm) ATempty);
  w_123 = t;
  t = d_124;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(v_123, w_123, c_124, t);
  t = t_123;
  return(t);
}
ATerm scope_2_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm t)
{
  static ATerm n_16 (ATerm t)
  {
    t = end_scope_1_0(f_130, t);
    return(t);
  }
  t = begin_scope_1_0(f_130, t);
  t = restore_always_2_0(g_130, n_16, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_c_56;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL,i_27 = NULL;
  p_124 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_124);
  m_124 = t;
  t = n_124;
  t = map_1_0(q_16, t);
  o_124 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_124);
  i_27 = t;
  t = SSLsetAnnotations(i_27, m_124);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL;
  e_125 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      d_125 = ATgetArgument(t, 0);
      {
        ATerm o_57 = t;
        int p_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_52 = NULL,b_53 = NULL,y_26 = NULL;
            t = SSLgetAnnotations(e_125);
            z_52 = t;
            t = d_125;
            t = map_1_0(r_16, t);
            b_53 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, b_53);
            y_26 = t;
            t = SSLsetAnnotations(y_26, z_52);
            LocalPopChoice(p_57);
          }
        else
          {
            t = o_57;
            t = e_125;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          d_125 = ATgetArgument(t, 0);
          {
            ATerm q_57 = t;
            int r_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_53 = NULL,y_53 = NULL,h_27 = NULL;
                t = SSLgetAnnotations(e_125);
                s_53 = t;
                t = d_125;
                t = map_1_0(s_16, t);
                y_53 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, y_53);
                h_27 = t;
                t = SSLsetAnnotations(h_27, s_53);
                LocalPopChoice(r_57);
              }
            else
              {
                t = q_57;
                t = e_125;
              }
          }
        }
      else
        {
          t = e_125;
        }
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm s_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(t_57);
    }
  else
    {
      t = s_57;
    }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm v_57 = t;
  int x_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(x_57);
    }
  else
    {
      t = v_57;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(o_16, p_16, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_125 = NULL,m_125 = NULL,n_125 = NULL;
  l_125 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_125;
    }
  else
    {
      static ATerm t_16 (ATerm t)
      {
        t = not_null(n_125);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_125 = ATgetFirst((ATermList) t);
          if(((n_125 != NULL) && (n_125 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_125;
      t = at_end_1_0(t_16, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL;
  c_126 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_126;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_126 = ATgetFirst((ATermList) t);
          e_126 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_57 = t;
        int a_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_54 = NULL,y_54 = NULL,a_55 = NULL,k_28 = NULL;
            t = SSLgetAnnotations(c_126);
            v_54 = t;
            t = d_126;
            t = b_125(t);
            y_54 = t;
            t = e_126;
            t = filter_1_0(b_125, t);
            a_55 = t;
            t = (ATerm) ATinsert(CheckATermList(a_55), y_54);
            k_28 = t;
            t = SSLsetAnnotations(k_28, v_54);
            LocalPopChoice(a_58);
          }
        else
          {
            t = y_57;
            t = e_126;
            t = filter_1_0(b_125, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  static ATerm u_126 (ATerm t)
  {
    ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL;
    t_126 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_126 = ATgetFirst((ATermList) t);
        s_126 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_55 = NULL,u_55 = NULL,n_28 = NULL;
          t = SSLgetAnnotations(t_126);
          q_55 = t;
          t = s_126;
          t = u_126(t);
          u_55 = t;
          t = (ATerm) ATinsert(CheckATermList(u_55), r_126);
          n_28 = t;
          t = SSLsetAnnotations(n_28, q_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_126;
        t = p_117(t);
      }
    return(t);
  }
  t = u_126(t);
  return(t);
}
static ATerm g_127 (ATerm y_126, ATerm t)
{
  ATerm z_126 = NULL;
  t = SSL_explode_term(y_126);
  if(match_cons(t, sym__2))
    {
      ATerm b_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_126;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL;
  d_127 = t;
  if(match_cons(t, sym__2))
    {
      b_127 = ATgetArgument(t, 0);
      c_127 = ATgetArgument(t, 1);
      {
        ATerm c_58 = t;
        int f_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_16 (ATerm t)
            {
              t = c_127;
              return(t);
            }
            t = b_127;
            t = at_end_1_0(u_16, t);
            LocalPopChoice(f_58);
          }
        else
          {
            t = c_58;
            t = g_127(d_127, t);
          }
      }
    }
  else
    {
      t = g_127(d_127, t);
    }
  return(t);
}
static ATerm k_12 (ATerm j_35, ATerm v_34, ATerm t)
{
  ATerm h_127 = NULL,i_127 = NULL;
  static ATerm v_16 (ATerm t)
  {
    ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL,m_127 = NULL;
    m_127 = t;
    t = SSL_explode_term(m_127);
    if(match_cons(t, sym__2))
      {
        if(((h_127 != NULL) && (h_127 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_127 = ATgetArgument(t, 0);
        {
          ATerm k_58 = ATgetArgument(t, 1);
          if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
            {
              j_127 = ATgetFirst((ATermList) k_58);
              {
                ATerm l_58 = (ATerm) ATgetNext((ATermList) k_58);
                if(((ATgetType(l_58) != AT_LIST) || !(ATisEmpty(l_58))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, j_127, not_null(i_127));
    t = conc_0_0(t);
    k_127 = t;
    t = (ATerm) ATinsert(ATempty, k_127);
    l_127 = t;
    t = SSL_mkterm(h_127, l_127);
    return(t);
  }
  t = SSL_explode_term(j_35);
  if(match_cons(t, sym__2))
    {
      if(((h_127 != NULL) && (h_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_127 = ATgetArgument(t, 0);
      {
        ATerm m_58 = ATgetArgument(t, 1);
        if(((ATgetType(m_58) == AT_LIST) && !(ATisEmpty(m_58))))
          {
            if(((i_127 != NULL) && (i_127 != ATgetFirst((ATermList) m_58))))
              _fail(ATgetFirst((ATermList) m_58));
            else
              i_127 = ATgetFirst((ATermList) m_58);
            {
              ATerm p_58 = (ATerm) ATgetNext((ATermList) m_58);
              if(((ATgetType(p_58) != AT_LIST) || !(ATisEmpty(p_58))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_34;
  t = fetch_1_0(v_16, t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t)
{
  ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL;
  o_127 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_127;
      t = z_123(t);
    }
  else
    {
      ATerm t_127 = NULL,u_127 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_127 = ATgetFirst((ATermList) t);
          q_127 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_127;
      t = b_124(t);
      t_127 = t;
      t = q_127;
      t = foldr_3_0(z_123, a_124, b_124, t);
      u_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_127, u_127);
      t = a_124(t);
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_58), term_s_58), term_q_58);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL;
  if(match_cons(t, sym__2))
    {
      b_128 = ATgetArgument(t, 0);
      c_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(b_128, c_128, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm d_128 = NULL,e_128 = NULL;
  e_128 = t;
  if(match_cons(t, sym_Signature_1))
    {
      d_128 = ATgetArgument(t, 0);
      {
        ATerm u_58 = t;
        int v_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_128 = NULL;
            t = d_128;
            t = filter_1_0(z_16, t);
            t = concat_0_0(t);
            l_128 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, l_128);
            LocalPopChoice(v_58);
          }
        else
          {
            t = u_58;
            t = e_128;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          d_128 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, d_128);
        }
      else
        {
          t = e_128;
        }
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm m_128 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      m_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_128;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL,v_28 = NULL;
  a_128 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_128);
  x_127 = t;
  t = y_127;
  t = foldr_3_0(w_16, x_16, y_16, t);
  z_127 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_127);
  v_28 = t;
  t = SSLsetAnnotations(v_28, x_127);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm x_58 = t;
  int y_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(y_58);
    }
  else
    {
      t = x_58;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm g_129 = NULL,h_129 = NULL,i_129 = NULL,j_129 = NULL,k_129 = NULL;
  k_129 = t;
  if(match_cons(t, sym_LRule_1))
    {
      j_129 = ATgetArgument(t, 0);
      t = j_129;
      if(match_cons(t, sym_Rule_3))
        {
          g_129 = ATgetArgument(t, 0);
          h_129 = ATgetArgument(t, 1);
          i_129 = ATgetArgument(t, 2);
          {
            ATerm z_58 = t;
            int i_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_129 = NULL;
                t = g_129;
                t = free_vars_3_0(c_17, d_17, tboundin_3_0, t);
                o_129 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, o_129, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_129, h_129, i_129)));
                LocalPopChoice(i_59);
              }
            else
              {
                t = z_58;
                t = k_129;
              }
          }
        }
      else
        {
          t = k_129;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          j_129 = ATgetArgument(t, 0);
          {
            ATerm j_59 = t;
            int k_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_130 = NULL;
                t = j_129;
                t = free_vars_3_0(f_17, g_17, tboundin_3_0, t);
                n_130 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, n_130, j_129);
                LocalPopChoice(k_59);
              }
            else
              {
                t = j_59;
                t = k_129;
              }
          }
        }
      else
        {
          t = k_129;
        }
    }
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm p_129 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_129);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm l_59 = t;
  int m_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_59);
    }
  else
    {
      t = l_59;
      {
        ATerm n_59 = t;
        int o_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_59);
          }
        else
          {
            t = n_59;
            {
              ATerm p_59 = t;
              int q_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_129 = NULL,s_129 = NULL,t_129 = NULL,u_129 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_129 = ATgetArgument(t, 0);
                      s_129 = ATgetArgument(t, 1);
                      t_129 = ATgetArgument(t, 2);
                      u_129 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_129;
                  t = map_1_0(e_17, t);
                  LocalPopChoice(q_59);
                }
              else
                {
                  t = p_59;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm b_130 = NULL;
  ATerm r_59 = t;
  int t_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_130 = ATgetArgument(t, 0);
          {
            ATerm u_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_59);
      t = b_130;
    }
  else
    {
      t = r_59;
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
static ATerm f_17 (ATerm t)
{
  ATerm o_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_130);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm v_59 = t;
  int w_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_59);
    }
  else
    {
      t = v_59;
      {
        ATerm x_59 = t;
        int y_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_59);
          }
        else
          {
            t = x_59;
            {
              ATerm a_60 = t;
              int b_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_130 = ATgetArgument(t, 0);
                      r_130 = ATgetArgument(t, 1);
                      s_130 = ATgetArgument(t, 2);
                      t_130 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_130;
                  t = map_1_0(h_17, t);
                  LocalPopChoice(b_60);
                }
              else
                {
                  t = a_60;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm a_131 = NULL;
  ATerm c_60 = t;
  int g_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_131 = ATgetArgument(t, 0);
          {
            ATerm h_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_60);
      t = a_131;
    }
  else
    {
      t = c_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_131;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm i_60 = t;
  int l_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(l_60);
    }
  else
    {
      t = i_60;
    }
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm k_131 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      k_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, k_131)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL,c_129 = NULL,d_129 = NULL,n_30 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(a_17, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(b_17, t);
  {
    ATerm m_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_131 = NULL,g_131 = NULL,h_131 = NULL;
        f_131 = t;
        t = term_r_60;
        g_131 = t;
        t = term_t_60;
        h_131 = t;
        t = term_x_60;
        t = y_12(g_131, h_131, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = f_131;
        LocalPopChoice(n_60);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = m_60;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(i_17, t);
  d_129 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_129);
  a_129 = t;
  t = b_129;
  t = fetch_1_0(j_17, t);
  c_129 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_129);
  n_30 = t;
  t = SSLsetAnnotations(n_30, a_129);
  return(t);
}
static ATerm l_12 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm l_131 = NULL;
  t = SSL_fputc(e_40, f_40);
  l_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_131);
  return(t);
}
static ATerm m_12 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm m_131 = NULL;
  t = SSL_write_term_to_stream_text(i_24, j_24);
  m_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_131);
  return(t);
}
static ATerm o_12 (ATerm p_116 (ATerm), ATerm y_182, ATerm o_24, ATerm t)
{
  ATerm n_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_182, term_y_60);
  t = s_12(t);
  n_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_131, o_24);
  t = p_116(t);
  t = fclose_0_0(t);
  t = o_24;
  return(t);
}
static ATerm n_12 (ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm o_131 = NULL;
  t = SSL_write_term_to_stream_baf(e_24, f_24);
  o_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_131);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm v_131 = NULL,w_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_61 = ATgetArgument(t, 0);
      if(match_cons(g_61, sym_Stream_1))
        {
          v_131 = ATgetArgument(g_61, 0);
        }
      else
        _fail(t);
      w_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(v_131, w_131, t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL,b_132 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_61 = ATgetArgument(t, 0);
      if(match_cons(h_61, sym_Stream_1))
        {
          a_132 = ATgetArgument(h_61, 0);
        }
      else
        _fail(t);
      b_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_12(a_132, b_132, t);
  x_131 = t;
  t = term_m_26;
  y_131 = t;
  t = x_131;
  if(match_cons(t, sym_Stream_1))
    {
      z_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, x_131);
  t = l_12(y_131, z_131, t);
  return(t);
}
ATerm output_1_0 (ATerm y_135 (ATerm), ATerm t)
{
  ATerm p_131 = NULL,q_131 = NULL;
  t = y_135(t);
  q_131 = t;
  {
    ATerm j_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_131 = NULL,s_131 = NULL;
        t = term_r_60;
        r_131 = t;
        t = term_m_61;
        s_131 = t;
        t = term_p_61;
        t = y_12(r_131, s_131, t);
        LocalPopChoice(l_61);
      }
    else
      {
        t = j_61;
        t = term_r_61;
      }
  }
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_131, q_131);
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_131 = NULL,u_131 = NULL;
        t = term_r_60;
        t_131 = t;
        t = term_b_62;
        u_131 = t;
        t = term_f_62;
        t = y_12(t_131, u_131, t);
        t = (ATerm) ATmakeAppl(sym__2, p_131, q_131);
        LocalPopChoice(a_62);
        if(match_cons(t, sym__2))
          {
            ATerm h_62 = ATgetArgument(t, 0);
            ATerm i_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_12(k_17, p_131, q_131, t);
      }
    else
      {
        t = z_61;
        if(match_cons(t, sym__2))
          {
            ATerm k_62 = ATgetArgument(t, 0);
            ATerm l_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_12(l_17, p_131, q_131, t);
      }
  }
  return(t);
}
static ATerm p_132 (ATerm j_132, ATerm t)
{
  t = SSL_fclose(j_132);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL;
  n_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_132 = ATgetArgument(t, 0);
      {
        ATerm q_62 = t;
        int r_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_132);
            LocalPopChoice(r_62);
          }
        else
          {
            t = q_62;
            t = p_132(n_132, t);
          }
      }
    }
  else
    {
      t = p_132(n_132, t);
    }
  return(t);
}
static ATerm p_12 (ATerm k_24, ATerm t)
{
  t = SSL_read_term_from_stream(k_24);
  return(t);
}
static ATerm q_12 (ATerm x_38, ATerm y_38, ATerm t)
{
  t = SSL_strcat(x_38, y_38);
  return(t);
}
static ATerm r_12 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm q_132 = NULL;
  t = SSL_fopen(g_40, h_40);
  q_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_132);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_132 = NULL;
  t = SSL_stdin_stream();
  r_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_132);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_132 = NULL;
  t = SSL_stdout_stream();
  s_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_132);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_132 = NULL;
  t = SSL_stderr_stream();
  t_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_132);
  return(t);
}
static ATerm b_134 (ATerm a_133, ATerm t)
{
  ATerm b_133 = NULL;
  t = SSL_explode_term(a_133);
  if(match_cons(t, sym__2))
    {
      ATerm s_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_62 = ATgetArgument(t, 1);
        if(((ATgetType(t_62) == AT_LIST) && !(ATisEmpty(t_62))))
          {
            b_133 = ATgetFirst((ATermList) t_62);
            {
              ATerm v_62 = (ATerm) ATgetNext((ATermList) t_62);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_133;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_133;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_133;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_133;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_134 (ATerm e_133, ATerm f_133, ATerm g_133, ATerm t)
{
  ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL,m_133 = NULL,s_30 = NULL;
  t = SSLgetAnnotations(g_133);
  j_133 = t;
  t = e_133;
  if(match_cons(t, sym_Path_1))
    {
      m_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_133, f_133);
  s_30 = t;
  t = SSLsetAnnotations(s_30, j_133);
  if(match_cons(t, sym__2))
    {
      h_133 = ATgetArgument(t, 0);
      i_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(h_133, i_133, t);
  return(t);
}
static ATerm d_134 (ATerm o_133, ATerm p_133, ATerm q_133, ATerm t)
{
  ATerm r_133 = NULL,s_133 = NULL,t_133 = NULL,w_133 = NULL,u_30 = NULL;
  t = SSLgetAnnotations(q_133);
  t_133 = t;
  t = SSL_is_string(o_133);
  w_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_133, p_133);
  u_30 = t;
  t = SSLsetAnnotations(u_30, t_133);
  if(match_cons(t, sym__2))
    {
      r_133 = ATgetArgument(t, 0);
      s_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(r_133, s_133, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm y_133 = NULL,z_133 = NULL,a_134 = NULL;
  y_133 = t;
  if(match_cons(t, sym__2))
    {
      z_133 = ATgetArgument(t, 0);
      a_134 = ATgetArgument(t, 1);
      {
        ATerm y_62 = t;
        int c_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_134(y_133, t);
            LocalPopChoice(c_63);
          }
        else
          {
            t = y_62;
            {
              ATerm d_63 = t;
              int f_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_134(z_133, a_134, y_133, t);
                  LocalPopChoice(f_63);
                }
              else
                {
                  t = d_63;
                  t = d_134(z_133, a_134, y_133, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_134(y_133, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_134 = NULL,g_134 = NULL,h_134 = NULL,m_134 = NULL;
  m_134 = t;
  {
    ATerm g_63 = t;
    int h_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_134, term_i_63);
        t = s_12(t);
        LocalPopChoice(h_63);
      }
    else
      {
        t = g_63;
        {
          ATerm o_56 = NULL,p_56 = NULL;
          t = term_j_63;
          p_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_63, m_134);
          t = q_12(p_56, m_134, t);
          o_56 = t;
          t = SSL_perror(o_56);
          _fail(t);
        }
      }
  }
  g_134 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_12(h_134, t);
  f_134 = t;
  t = g_134;
  t = fclose_0_0(t);
  t = f_134;
  return(t);
}
ATerm input_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm m_63 = t;
  int n_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_134 = NULL,q_134 = NULL;
      t = term_r_60;
      p_134 = t;
      t = term_o_63;
      q_134 = t;
      t = term_p_63;
      t = y_12(p_134, q_134, t);
      LocalPopChoice(n_63);
    }
  else
    {
      t = m_63;
      t = term_q_63;
    }
  t = ReadFromFile_0_0(t);
  t = z_135(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_134 = NULL,s_134 = NULL,t_134 = NULL,u_134 = NULL,v_134 = NULL;
  r_134 = t;
  t = term_r_63;
  t = whoami_0_0(t);
  s_134 = t;
  t = term_d_37;
  u_134 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_63), s_134), term_s_63);
  v_134 = t;
  t = SSL_printnl(u_134, v_134);
  t = term_f_37;
  t_134 = t;
  t = SSL_exit(t_134);
  t = r_134;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm x_134 = NULL;
  x_134 = t;
  if(match_string(t, "-k"))
    {
      t = x_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_134;
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL;
  y_134 = t;
  t = SSL_string_to_int(y_134);
  z_134 = t;
  t = term_u_63;
  a_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_63, z_134);
  t = b_13(a_135, z_134, t);
  t = y_134;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_v_63;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_17, n_17, o_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm c_135 = NULL;
  c_135 = t;
  if(match_string(t, "-S"))
    {
      t = c_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_135;
    }
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm d_135 = NULL,e_135 = NULL;
  t = term_d_64;
  d_135 = t;
  t = term_h_64;
  e_135 = t;
  t = term_i_64;
  t = b_13(d_135, e_135, t);
  t = term_j_64;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_k_64;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,h_135 = NULL;
  f_135 = t;
  t = SSL_string_to_int(f_135);
  g_135 = t;
  t = term_d_64;
  h_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_64, g_135);
  t = b_13(h_135, g_135, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_135);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_l_64;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm i_135 = NULL,j_135 = NULL;
  t = term_m_64;
  i_135 = t;
  t = term_r_63;
  j_135 = t;
  t = term_n_64;
  t = b_13(i_135, j_135, t);
  t = term_o_64;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = term_p_64;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_64 = t;
  int r_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_17, q_17, r_17, t);
      LocalPopChoice(r_64);
    }
  else
    {
      t = q_64;
      {
        ATerm s_64 = t;
        int t_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_17, t_17, v_17, t);
            LocalPopChoice(t_64);
          }
        else
          {
            t = s_64;
            t = Option_3_0(w_17, x_17, y_17, t);
          }
      }
    }
  return(t);
}
static ATerm b_13 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm k_135 = NULL,l_135 = NULL;
  t = term_r_60;
  k_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_60, j_55, k_55);
  t = lookup_table_0_1(k_135, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(j_55, k_55, l_135, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_60, j_55, k_55);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_135 = NULL,v_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_135 = NULL,x_135 = NULL,a_136 = NULL;
      t = term_r_63;
      t = e_0(t);
      w_135 = t;
      t = term_v_64;
      x_135 = t;
      t = term_w_64;
      a_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_64, term_w_64, w_135);
      t = z_12(x_135, a_136, w_135, t);
      _fail(t);
    }
  else
    {
      ATerm d_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_135 = ATgetFirst((ATermList) t);
          v_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_135;
      t = c_0(t);
      t = term_r_63;
      t = d_0(t);
      d_136 = t;
      t = (ATerm) ATinsert(CheckATermList(v_135), d_136);
    }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm f_136 = NULL;
  f_136 = t;
  if(match_string(t, "-o"))
    {
      t = f_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_136;
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm g_136 = NULL,h_136 = NULL;
  g_136 = t;
  t = term_m_61;
  h_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_61, g_136);
  t = b_13(h_136, g_136, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_136);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_x_64;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_17, a_18, b_18, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm j_136 = NULL;
  j_136 = t;
  if(match_string(t, "-i"))
    {
      t = j_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_136;
    }
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm k_136 = NULL,l_136 = NULL;
  k_136 = t;
  t = term_o_63;
  l_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_63, k_136);
  t = b_13(l_136, k_136, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_136);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_y_64;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_18, d_18, e_18, t);
  return(t);
}
static ATerm z_12 (ATerm e_60, ATerm f_60, ATerm d_60, ATerm t)
{
  ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL,r_136 = NULL;
  n_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
  {
    ATerm z_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_65 = ATgetArgument(t, 0);
            ATerm c_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
        t = y_12(e_60, f_60, t);
        LocalPopChoice(a_65);
      }
    else
      {
        t = z_64;
        t = (ATerm) ATempty;
      }
  }
  o_136 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_60, f_60, (ATerm) ATinsert(CheckATermList(o_136), d_60));
  t = lookup_table_0_1(e_60, t);
  r_136 = t;
  t = (ATerm) ATinsert(CheckATermList(o_136), d_60);
  p_136 = t;
  t = r_136;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(f_60, p_136, q_136, t);
  t = n_136;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL,b_137 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL;
      t = term_r_63;
      t = n_0(t);
      c_137 = t;
      t = term_v_64;
      d_137 = t;
      t = term_w_64;
      e_137 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_64, term_w_64, c_137);
      t = z_12(d_137, e_137, c_137, t);
      _fail(t);
    }
  else
    {
      ATerm i_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_136 = ATgetFirst((ATermList) t);
          z_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_137 = ATgetFirst((ATermList) t);
          b_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_136;
      t = k_0(t);
      t = a_137;
      t = l_0(t);
      i_137 = t;
      t = (ATerm) ATinsert(CheckATermList(b_137), i_137);
    }
  return(t);
}
static ATerm f_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL;
  k_137 = t;
  if(match_string(t, "old"))
    {
      t = k_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = k_137;
    }
  t = term_t_60;
  l_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_60, k_137);
  t = b_13(l_137, k_137, t);
  t = term_r_63;
  return(t);
}
static ATerm j_18 (ATerm t)
{
  t = term_d_65;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_18, g_18, j_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_137 = NULL,o_137 = NULL,p_137 = NULL,q_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_63;
  t = whoami_0_0(t);
  n_137 = t;
  t = term_d_37;
  p_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_65), n_137);
  q_137 = t;
  t = SSL_printnl(p_137, q_137);
  t = term_f_37;
  o_137 = t;
  t = SSL_exit(o_137);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_137 = NULL,u_137 = NULL;
  t = term_r_60;
  t_137 = t;
  t = term_f_65;
  u_137 = t;
  t = term_g_65;
  t = y_12(t_137, u_137, t);
  return(t);
}
static ATerm t_12 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm h_65 = t;
  int i_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_43, b_43);
      LocalPopChoice(i_65);
    }
  else
    {
      t = h_65;
      t = SSL_addr(a_43, b_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm t)
{
  ATerm w_137 = NULL,x_137 = NULL,y_137 = NULL;
  w_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_137;
      t = x_123(t);
    }
  else
    {
      ATerm b_138 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_137 = ATgetFirst((ATermList) t);
          y_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_137;
      t = foldr_2_0(x_123, y_123, t);
      b_138 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_137, b_138);
      t = y_123(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_18 (ATerm t)
{
  t = term_h_64;
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  if(match_cons(t, sym__2))
    {
      y_56 = ATgetArgument(t, 0);
      z_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(y_56, z_56, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_138 = NULL,r_56 = NULL,v_56 = NULL;
  t = times_0_0(t);
  v_56 = t;
  t = SSL_explode_term(v_56);
  if(match_cons(t, sym__2))
    {
      ATerm j_65 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_56;
  t = foldr_2_0(n_18, o_18, t);
  e_138 = t;
  t = SSL_TicksToSeconds(e_138);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_138 = NULL,q_138 = NULL,r_138 = NULL;
  p_138 = t;
  if(match_cons(t, sym__2))
    {
      q_138 = ATgetArgument(t, 0);
      r_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_138;
        if((q_138 != t))
          {
            _fail(t);
          }
        t = p_138;
        LocalPopChoice(l_65);
      }
    else
      {
        t = k_65;
        t = (ATerm) ATmakeAppl(sym__2, q_138, r_138);
        {
          ATerm m_65 = t;
          int n_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_138, r_138);
              LocalPopChoice(n_65);
            }
          else
            {
              t = m_65;
              t = SSL_gtr(q_138, r_138);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_138, r_138);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_132 (ATerm), ATerm t)
{
  ATerm v_138 = NULL;
  v_138 = t;
  {
    ATerm o_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_138 = NULL,y_138 = NULL,z_138 = NULL;
        t = term_r_60;
        y_138 = t;
        t = term_d_64;
        z_138 = t;
        t = term_q_65;
        t = y_12(y_138, z_138, t);
        x_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_138, term_f_37);
        t = geq_0_0(t);
        t = v_138;
        t = z_132(t);
        LocalPopChoice(p_65);
      }
    else
      {
        t = o_65;
        t = v_138;
      }
  }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm b_139 = NULL,c_139 = NULL,e_139 = NULL,f_139 = NULL;
  t = run_time_0_0(t);
  b_139 = t;
  t = term_r_63;
  t = whoami_0_0(t);
  c_139 = t;
  t = term_d_37;
  e_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_65), b_139), term_r_65), c_139);
  f_139 = t;
  t = SSL_printnl(e_139, f_139);
  t = (ATerm) ATmakeAppl(sym__2, term_d_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_65), b_139), term_r_65), c_139));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_139 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_64;
  g_139 = t;
  t = SSL_exit(g_139);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm q_139 = NULL,r_139 = NULL;
  r_139 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_139;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_139 = ATgetArgument(t, 0);
          {
            ATerm u_57 = NULL,y_30 = NULL;
            t = SSLgetAnnotations(r_139);
            u_57 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_139);
            y_30 = t;
            t = SSLsetAnnotations(y_30, u_57);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_139;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm t_65 = t;
  int u_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_139 = NULL,k_139 = NULL;
      t = term_r_60;
      j_139 = t;
      t = term_v_65;
      k_139 = t;
      t = term_w_65;
      t = y_12(j_139, k_139, t);
      LocalPopChoice(u_65);
    }
  else
    {
      t = t_65;
      t = fetch_1_0(q_18, t);
    }
  t = p_135(t);
  return(t);
}
static ATerm c_13 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm t)
{
  ATerm t_139 = NULL;
  t = SSL_hashtable_put(y_63, w_63, x_63);
  t_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_139);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_61, ATerm t)
{
  ATerm c_140 = NULL;
  t = table_hashtable_0_0(t);
  c_140 = t;
  {
    ATerm x_65 = t;
    int y_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_58 = NULL;
        t = c_140;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_13(q_61, d_58, t);
        LocalPopChoice(y_65);
      }
    else
      {
        t = x_65;
        {
          ATerm r_58 = NULL;
          t = q_61;
          t = table_create_0_0(t);
          t = c_140;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_13(q_61, r_58, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_64, ATerm f_64, ATerm t)
{
  ATerm j_140 = NULL;
  t = SSL_hashtable_create(e_64, f_64);
  j_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_140);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_140 = NULL,l_140 = NULL,m_140 = NULL,o_140 = NULL,p_140 = NULL;
  k_140 = t;
  t = term_z_65;
  o_140 = t;
  t = term_a_66;
  p_140 = t;
  t = k_140;
  t = new_hashtable_0_2(o_140, p_140, t);
  l_140 = t;
  t = k_140;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(k_140, l_140, m_140, t);
  t = k_140;
  return(t);
}
static ATerm v_12 (ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm q_140 = NULL;
  t = SSL_hashtable_remove(c_64, b_64);
  q_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_140);
  return(t);
}
static ATerm w_12 (ATerm g_64, ATerm t)
{
  ATerm r_140 = NULL;
  t = SSL_hashtable_destroy(g_64);
  r_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_140);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_140 = NULL;
  t = SSL_table_hashtable();
  s_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_140);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_140 = NULL,u_140 = NULL,v_140 = NULL,w_140 = NULL;
  t_140 = t;
  t = table_hashtable_0_0(t);
  u_140 = t;
  t = lookup_table_0_1(t_140, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(w_140, t);
  t = u_140;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_12(t_140, v_140, t);
  t = t_140;
  return(t);
}
ATerm map_1_0 (ATerm y_116 (ATerm), ATerm t)
{
  static ATerm l_141 (ATerm t)
  {
    ATerm i_141 = NULL,j_141 = NULL,k_141 = NULL;
    i_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_141;
      }
    else
      {
        ATerm w_58 = NULL,d_59 = NULL,e_59 = NULL,a_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_141 = ATgetFirst((ATermList) t);
            k_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_141);
        w_58 = t;
        t = j_141;
        t = y_116(t);
        d_59 = t;
        t = k_141;
        t = l_141(t);
        e_59 = t;
        t = (ATerm) ATinsert(CheckATermList(e_59), d_59);
        a_31 = t;
        t = SSLsetAnnotations(a_31, w_58);
      }
    return(t);
  }
  t = l_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_141 = NULL,p_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_141 = ATgetFirst((ATermList) t);
      p_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_141 = NULL,u_141 = NULL;
        static ATerm u_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_141)), not_null(u_141));
          return(t);
        }
        t = p_141;
        t = i_0(t);
        if(((t_141 != NULL) && (t_141 != t)))
          _fail(t);
        else
          t_141 = t;
        t = o_141;
        t = g_0(t);
        if(((u_141 != NULL) && (u_141 != t)))
          _fail(t);
        else
          u_141 = t;
        t = p_141;
        t = reverse_acc_2_0(g_0, u_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_63;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm c_142 = NULL,d_142 = NULL,e_142 = NULL,f_31 = NULL;
  e_142 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_142);
  c_142 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_142);
  f_31 = t;
  t = SSLsetAnnotations(f_31, c_142);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm g_142 = NULL;
  g_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_142), term_b_66);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_141 = NULL,z_141 = NULL;
  ATerm c_66 = t;
  int d_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_142 = NULL,b_142 = NULL;
      t = term_r_60;
      a_142 = t;
      t = term_f_65;
      b_142 = t;
      t = term_g_65;
      t = y_12(a_142, b_142, t);
      LocalPopChoice(d_66);
    }
  else
    {
      t = c_66;
      t = fetch_1_0(v_18, t);
    }
  t = term_e_66;
  t = echo_0_0(t);
  t = term_v_64;
  y_141 = t;
  t = term_w_64;
  z_141 = t;
  t = term_f_66;
  t = y_12(y_141, z_141, t);
  t = reverse_acc_2_0(_id, w_18, t);
  t = map_1_0(x_18, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  static ATerm n_143 (ATerm t)
  {
    ATerm k_143 = NULL,l_143 = NULL,m_143 = NULL;
    k_143 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_143 = ATgetFirst((ATermList) t);
        m_143 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_66 = t;
      int h_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_59 = NULL,z_59 = NULL,i_31 = NULL;
          t = SSLgetAnnotations(k_143);
          s_59 = t;
          t = l_143;
          t = i_117(t);
          z_59 = t;
          t = (ATerm) ATinsert(CheckATermList(m_143), z_59);
          i_31 = t;
          t = SSLsetAnnotations(i_31, s_59);
          LocalPopChoice(h_66);
        }
      else
        {
          t = g_66;
          {
            ATerm w_60 = NULL,z_60 = NULL,j_31 = NULL;
            t = SSLgetAnnotations(k_143);
            w_60 = t;
            t = m_143;
            t = n_143(t);
            z_60 = t;
            t = (ATerm) ATinsert(CheckATermList(z_60), l_143);
            j_31 = t;
            t = SSLsetAnnotations(j_31, w_60);
          }
        }
    }
    return(t);
  }
  t = n_143(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_143 = NULL,s_143 = NULL,t_143 = NULL;
  r_143 = t;
  {
    ATerm i_66 = t;
    int j_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_143;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_66 = ATgetFirst((ATermList) t);
                ATerm l_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_143;
          }
        LocalPopChoice(j_66);
      }
    else
      {
        t = i_66;
        t = (ATerm) ATinsert(ATempty, r_143);
      }
  }
  s_143 = t;
  t = term_r_61;
  t_143 = t;
  t = SSL_printnl(t_143, s_143);
  t = r_143;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL;
  t = term_r_60;
  x_143 = t;
  t = term_f_65;
  y_143 = t;
  t = term_g_65;
  t = y_12(x_143, y_143, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_13 (ATerm z_63, ATerm a_64, ATerm t)
{
  t = SSL_hashtable_get(a_64, z_63);
  return(t);
}
static ATerm y_12 (ATerm x_61, ATerm y_61, ATerm t)
{
  ATerm z_143 = NULL;
  t = lookup_table_0_1(x_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_13(y_61, z_143, t);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm b_144 = NULL,c_144 = NULL;
  t = term_m_66;
  b_144 = t;
  t = term_r_63;
  c_144 = t;
  t = term_n_66;
  t = b_13(b_144, c_144, t);
  return(t);
}
static ATerm k_19 (ATerm t)
{
  t = term_o_66;
  return(t);
}
static ATerm m_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL,h_144 = NULL;
  t = term_m_66;
  f_144 = t;
  t = term_r_63;
  h_144 = t;
  t = term_n_66;
  t = b_13(f_144, h_144, t);
  t = term_p_66;
  d_144 = t;
  t = term_r_63;
  e_144 = t;
  t = term_r_66;
  t = b_13(d_144, e_144, t);
  t = term_s_66;
  return(t);
}
static ATerm q_19 (ATerm t)
{
  t = term_t_66;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_66 = t;
  int w_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_19, e_19, k_19, t);
      LocalPopChoice(w_66);
    }
  else
    {
      t = u_66;
      t = Option_3_0(m_19, p_19, q_19, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t)
{
  ATerm i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL,m_144 = NULL,n_144 = NULL,t_31 = NULL;
  n_144 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_144 = ATgetFirst((ATermList) t);
      k_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_144);
  i_144 = t;
  t = j_144;
  t = o_95(t);
  l_144 = t;
  t = k_144;
  t = p_95(t);
  m_144 = t;
  t = (ATerm) ATinsert(CheckATermList(m_144), l_144);
  t_31 = t;
  t = SSLsetAnnotations(t_31, i_144);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_137 (ATerm), ATerm t)
{
  ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL,v_144 = NULL,x_144 = NULL,y_144 = NULL,x_31 = NULL;
  s_144 = t;
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_66;
        t = s_137(t);
        LocalPopChoice(y_66);
      }
    else
      {
        t = x_66;
      }
  }
  t = s_144;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_144 = ATgetFirst((ATermList) t);
      v_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_144);
  t_144 = t;
  t = term_f_65;
  y_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_65, u_144);
  t = b_13(y_144, u_144, t);
  t = v_144;
  {
    static ATerm j_145 (ATerm t)
    {
      ATerm a_67 = t;
      int b_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_67 = t;
          int f_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_145 = NULL;
              b_145 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_145;
              LocalPopChoice(f_67);
            }
          else
            {
              t = e_67;
              t = s_137(t);
              t = Cons_2_0(_id, j_145, t);
            }
          LocalPopChoice(b_67);
        }
      else
        {
          t = a_67;
          {
            ATerm f_145 = NULL,g_145 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_145 = ATgetFirst((ATermList) t);
                g_145 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_145), (ATerm) ATmakeAppl(sym_Undefined_1, f_145));
          }
        }
      return(t);
    }
    t = j_145(t);
  }
  x_144 = t;
  t = (ATerm) ATinsert(CheckATermList(x_144), (ATerm) ATmakeAppl(sym_Program_1, u_144));
  x_31 = t;
  t = SSLsetAnnotations(x_31, t_144);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  ATerm x_145 = NULL;
  x_145 = t;
  if(match_string(t, "--help"))
    {
      t = x_145;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_145;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_145;
        }
    }
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm y_145 = NULL,z_145 = NULL;
  t = term_v_65;
  y_145 = t;
  t = term_r_63;
  z_145 = t;
  t = term_i_67;
  t = b_13(y_145, z_145, t);
  t = term_j_67;
  return(t);
}
static ATerm y_19 (ATerm t)
{
  t = term_k_67;
  return(t);
}
static ATerm b_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_137 (ATerm), ATerm t)
{
  ATerm o_145 = NULL,p_145 = NULL,q_145 = NULL,s_145 = NULL,t_145 = NULL,u_145 = NULL,v_145 = NULL,w_145 = NULL;
  q_145 = t;
  t = term_v_64;
  s_145 = t;
  t = term_l_67;
  t = lookup_table_0_1(s_145, t);
  w_145 = t;
  t = term_w_64;
  t_145 = t;
  t = (ATerm) ATempty;
  u_145 = t;
  t = w_145;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(t_145, u_145, v_145, t);
  t = q_145;
  {
    static ATerm r_19 (ATerm t)
    {
      ATerm m_67 = t;
      int n_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_137(t);
          LocalPopChoice(n_67);
        }
      else
        {
          t = m_67;
          {
            ATerm p_67 = t;
            int q_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_19, t_19, y_19, t);
                LocalPopChoice(q_67);
              }
            else
              {
                t = p_67;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_19, t);
  }
  {
    ATerm r_67 = t;
    int s_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_146 = NULL;
        k_146 = t;
        {
          ATerm t_67 = t;
          int y_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_61 = NULL;
              t = k_146;
              {
                ATerm z_67 = t;
                int a_68 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_61 = NULL,v_61 = NULL;
                    t = term_r_60;
                    t_61 = t;
                    t = term_v_65;
                    v_61 = t;
                    t = term_w_65;
                    t = y_12(t_61, v_61, t);
                    LocalPopChoice(a_68);
                  }
                else
                  {
                    t = z_67;
                    t = fetch_1_0(b_20, t);
                  }
              }
              t = k_146;
              t = default_system_usage_0_0(t);
              t = term_h_64;
              s_61 = t;
              t = SSL_exit(s_61);
              LocalPopChoice(y_67);
            }
          else
            {
              t = t_67;
              {
                ATerm c_62 = NULL,d_62 = NULL,g_62 = NULL;
                t = term_r_60;
                d_62 = t;
                t = term_m_66;
                g_62 = t;
                t = term_b_68;
                t = y_12(d_62, g_62, t);
                t = k_146;
                t = default_system_about_0_0(t);
                t = term_h_64;
                c_62 = t;
                t = SSL_exit(c_62);
              }
            }
        }
        LocalPopChoice(s_67);
      }
    else
      {
        t = r_67;
        {
          ATerm c_68 = t;
          int d_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL;
              static ATerm c_20 (ATerm t)
              {
                ATerm o_146 = NULL,p_146 = NULL,q_146 = NULL,c_32 = NULL;
                q_146 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_146 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_146);
                o_146 = t;
                t = p_146;
                if(((o_145 != NULL) && (o_145 != t)))
                  _fail(t);
                else
                  o_145 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_146);
                c_32 = t;
                t = SSLsetAnnotations(c_32, o_146);
                return(t);
              }
              t = fetch_1_0(c_20, t);
              t = term_d_37;
              m_146 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_145)), term_e_68);
              n_146 = t;
              t = SSL_printnl(m_146, n_146);
              t = (ATerm) ATmakeAppl(sym__2, term_d_37, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_145)), term_e_68));
              t = default_system_usage_0_0(t);
              t = term_f_37;
              l_146 = t;
              t = SSL_exit(l_146);
              LocalPopChoice(d_68);
            }
          else
            {
              t = c_68;
            }
        }
      }
  }
  p_145 = t;
  t = term_v_64;
  t = table_destroy_0_0(t);
  t = p_145;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm t)
{
  ATerm v_146 = NULL,w_146 = NULL,x_146 = NULL,y_146 = NULL,z_146 = NULL;
  t = parse_options_1_0(r_135, t);
  v_146 = t;
  t = term_f_68;
  t = table_create_0_0(t);
  t = term_f_68;
  w_146 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_68, term_g_68, v_146);
  t = lookup_table_0_1(w_146, t);
  z_146 = t;
  t = term_g_68;
  x_146 = t;
  t = z_146;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(x_146, v_146, y_146, t);
  t = v_146;
  t = t_135(t);
  {
    ATerm h_68 = t;
    int i_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_135, t);
        LocalPopChoice(i_68);
      }
    else
      {
        t = h_68;
        {
          ATerm j_68 = t;
          int m_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_68);
            }
          else
            {
              t = j_68;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_20 (ATerm t)
{
  ATerm n_68 = t;
  int o_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
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
            t = input_option_0_0(t);
            LocalPopChoice(q_68);
          }
        else
          {
            t = p_68;
            {
              ATerm r_68 = t;
              int s_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(s_68);
                }
              else
                {
                  t = r_68;
                  {
                    ATerm t_68 = t;
                    int u_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(k_20, l_20, n_20, t);
                        LocalPopChoice(u_68);
                      }
                    else
                      {
                        t = t_68;
                        {
                          ATerm w_68 = t;
                          int x_68 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(x_68);
                            }
                          else
                            {
                              t = w_68;
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
static ATerm g_20 (ATerm t)
{
  t = input_1_0(p_20, t);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm b_147 = NULL,c_147 = NULL;
  t = term_b_62;
  b_147 = t;
  t = term_r_63;
  c_147 = t;
  t = term_y_68;
  t = b_13(b_147, c_147, t);
  t = term_z_68;
  return(t);
}
static ATerm n_20 (ATerm t)
{
  t = term_a_69;
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_20, default_usage_0_0, _id, g_20, t);
  return(t);
}

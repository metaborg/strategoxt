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
ATerm term_z_68;
ATerm term_y_68;
ATerm term_w_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_v_67;
ATerm term_j_67;
ATerm term_i_67;
ATerm term_h_67;
ATerm term_e_67;
ATerm term_w_66;
ATerm term_q_66;
ATerm term_p_66;
ATerm term_o_66;
ATerm term_n_66;
ATerm term_m_66;
ATerm term_l_66;
ATerm term_k_66;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_z_65;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_q_65;
ATerm term_p_65;
ATerm term_o_65;
ATerm term_e_65;
ATerm term_d_65;
ATerm term_c_65;
ATerm term_b_65;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_u_64;
ATerm term_s_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_f_64;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_x_61;
ATerm term_v_61;
ATerm term_o_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_v_60;
ATerm term_q_60;
ATerm term_o_60;
ATerm term_k_60;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_q_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_a_56;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_z_49;
ATerm term_u_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_f_46;
ATerm term_b_46;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_y_38;
ATerm term_o_38;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_v_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_j_31;
ATerm term_a_31;
ATerm term_c_30;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_l_28;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_z_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Op_2, term_q_22, (ATerm) ATempty);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_23);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_20);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Op_2, term_k_25, (ATerm) ATempty);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Call_2, term_a_26, (ATerm) ATempty);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_27);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Call_2, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Call_2, term_j_25, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_RootApp_1, term_q_20);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_n_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_35);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_36);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_36);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_36);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_36);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_36);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_42);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_Var_1, term_i_42);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_42);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Build_1, term_o_24);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_43);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_44);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_46);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_46);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_49);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_51);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_56);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_56);
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_o_60);
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_k_61);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_v_61);
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_m_63);
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(sym__2, term_u_63, term_v_63);
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_63);
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(sym__2, term_k_64, term_p_63);
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_d_65);
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_u_63);
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_t_65);
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym__2, term_s_64, term_u_64);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(sym__2, term_k_66, term_p_63);
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(sym__2, term_n_66, term_p_63);
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(sym__2, term_t_65, term_p_63);
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(sym__3, term_s_64, term_u_64, (ATerm) ATempty);
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(sym__2, term_k_60, term_k_66);
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(sym__2, term_v_61, term_p_63);
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_110 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm v_10 (ATerm m_143 (ATerm), ATerm t_81, ATerm r_81, ATerm s_81, ATerm w_81, ATerm u_81, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm m_143 (ATerm), ATerm t);
static ATerm g_18 (ATerm i_11, ATerm k_11, ATerm t);
static ATerm h_18 (ATerm w_12, ATerm h_13, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm g_142 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm x_10 (ATerm k_72, ATerm l_72, ATerm m_72, ATerm t);
static ATerm t_29 (ATerm h_29, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm y_10 (ATerm x_67, ATerm y_67, ATerm z_67, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm z_10 (ATerm l_143 (ATerm), ATerm a_81, ATerm x_80, ATerm y_80, ATerm h_81, ATerm l_81, ATerm m_81, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm n_143 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm b_11 (ATerm a_82, ATerm z_81, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm m_58 (ATerm v_57, ATerm t);
static ATerm n_58 (ATerm y_57, ATerm t);
static ATerm c_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm j_61 (ATerm n_60, ATerm t);
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
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm v_143 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm a_112 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm s_143 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm m_11 (ATerm c_84, ATerm b_84, ATerm t);
ATerm repeat_2_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm s_118 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm k_101 (ATerm d_100, ATerm e_100, ATerm f_100, ATerm g_100, ATerm j_100, ATerm k_100, ATerm l_100, ATerm t);
static ATerm c_11 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm x_116 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_11 (ATerm t_121 (ATerm), ATerm o_30, ATerm n_30, ATerm t);
static ATerm u_11 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm s_30, ATerm r_30, ATerm t);
static ATerm v_11 (ATerm o_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t);
ATerm genzip_4_0 (ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm a_12 (ATerm t_673, ATerm y_673, ATerm x_66, ATerm t);
ATerm while_not_2_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm l_120 (ATerm a_119, ATerm b_119, ATerm c_119, ATerm t);
static ATerm w_15 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
ATerm free_vars_3_0 (ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm q_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm x_110 (ATerm), ATerm t);
static ATerm e_12 (ATerm r_60, ATerm s_60, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm o_112 (ATerm), ATerm t);
static ATerm f_12 (ATerm r_130 (ATerm), ATerm q_44, ATerm o_44, ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm g_12 (ATerm l_60, ATerm m_60, ATerm t);
ATerm end_scope_1_0 (ATerm o_130 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_130 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_117 (ATerm), ATerm t);
static ATerm f_127 (ATerm x_126, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_12 (ATerm i_35, ATerm q_34, ATerm t);
ATerm foldr_3_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm k_12 (ATerm g_40, ATerm h_40, ATerm t);
static ATerm l_12 (ATerm k_24, ATerm l_24, ATerm t);
static ATerm n_12 (ATerm z_116 (ATerm), ATerm j_183, ATerm q_24, ATerm t);
static ATerm m_12 (ATerm g_24, ATerm h_24, ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
ATerm output_1_0 (ATerm i_136 (ATerm), ATerm t);
static ATerm o_132 (ATerm i_132, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_12 (ATerm m_24, ATerm t);
static ATerm p_12 (ATerm z_38, ATerm a_39, ATerm t);
static ATerm q_12 (ATerm i_40, ATerm j_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_134 (ATerm y_132, ATerm t);
static ATerm b_134 (ATerm c_133, ATerm d_133, ATerm e_133, ATerm t);
static ATerm c_134 (ATerm n_133, ATerm o_133, ATerm p_133, ATerm t);
static ATerm r_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm j_136 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_13 (ATerm l_55, ATerm m_55, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm y_12 (ATerm g_60, ATerm h_60, ATerm f_60, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_12 (ATerm c_43, ATerm d_43, ATerm t);
ATerm foldr_2_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_133 (ATerm), ATerm t);
static ATerm o_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm need_help_1_0 (ATerm z_135 (ATerm), ATerm t);
static ATerm b_13 (ATerm y_63, ATerm z_63, ATerm a_64, ATerm t);
ATerm lookup_table_0_1 (ATerm s_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_64, ATerm h_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_12 (ATerm d_64, ATerm e_64, ATerm t);
static ATerm v_12 (ATerm i_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_13 (ATerm b_64, ATerm c_64, ATerm t);
static ATerm x_12 (ATerm z_61, ATerm a_62, ATerm t);
static ATerm a_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm p_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_138 (ATerm), ATerm t);
static ATerm r_19 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm parse_options_1_0 (ATerm b_138 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm t);
static ATerm d_20 (ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm o_20 (ATerm t);
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
              t = term_p_20;
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
                  t = term_p_20;
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
                      t = term_q_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      a_1 = ATgetArgument(t, 0);
                      b_1 = ATgetArgument(t, 1);
                      y_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_1, (ATerm) ATmakeAppl(sym_Op_2, term_r_20, (ATerm) ATinsert(ATinsert(ATempty, y_0), a_1)));
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
ATerm topdown_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(w_110, t);
    return(t);
  }
  t = w_110(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
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
        ATerm x_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = x_20;
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
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
                  t = map_1_0(t_0, t);
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm k_6 = NULL;
  ATerm d_21 = t;
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
      t = d_21;
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
static ATerm u_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_6);
  return(t);
}
static ATerm w_0 (ATerm t)
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
static ATerm z_0 (ATerm t)
{
  ATerm j_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = j_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm z_21 = t;
              int c_22 = stack_ptr;
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
                  t = map_1_0(c_1, t);
                  LocalPopChoice(c_22);
                }
              else
                {
                  t = z_21;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
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
            ATerm h_22 = ATgetArgument(t, 1);
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
static ATerm d_1 (ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_7 = NULL,h_0 = NULL,q_0 = NULL,k_0 = NULL;
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
        k_0 = t;
        t = SSLsetAnnotations(k_0, h_0);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, j_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm u_8 (ATerm i_4, ATerm j_4, ATerm l_4, ATerm m_4, ATerm n_4, ATerm s_4, ATerm u_4, ATerm t)
  {
    ATerm b_5 = NULL,e_5 = NULL,f_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, n_4, term_r_22);
    {
      ATerm s_22 = t;
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
          t = s_22;
        }
    }
    t = new_0_0(t);
    b_5 = t;
    t = m_4;
    t = dummify_0_0(t);
    f_5 = t;
    {
      ATerm t_22 = t;
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
          t = t_22;
          t = f_5;
        }
    }
    e_5 = t;
    t = f_5;
    t = free_vars_3_0(p_0, r_0, tboundin_3_0, t);
    t = map_1_0(u_0, t);
    o_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, s_4);
    t = free_vars_3_0(w_0, z_0, tboundin_3_0, t);
    t = filter_1_0(d_1, t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_5, o_5);
    t = diff_0_0(t);
    p_5 = t;
    t = new_0_0(t);
    q_5 = t;
    t = i_4;
    t = o_0(t);
    r_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, r_5, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(CheckATermList(p_5), (ATerm) ATmakeAppl(sym_Str_1, q_5)))), f_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_4, j_4, l_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_5), m_4), n_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_4)))), e_5), (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(CheckATermList(p_5), (ATerm) ATmakeAppl(sym_Str_1, q_5))))), s_4))));
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
              ATerm g_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
                  t = h_8;
                  t = new_0_0(t);
                  f_2 = t;
                  t = o_8;
                  t = dummify_0_0(t);
                  d_2 = t;
                  {
                    ATerm n_23 = t;
                    int t_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = d_2;
                        if((o_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, f_2);
                        LocalPopChoice(t_23);
                      }
                    else
                      {
                        t = n_23;
                        t = d_2;
                      }
                  }
                  g_2 = t;
                  t = i_8;
                  t = o_0(t);
                  h_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, h_2, (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, term_r_22), d_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_8, k_8, l_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_2), o_8), term_r_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_8)))), g_2), term_r_22)), (ATerm) ATmakeAppl(sym_Seq_2, r_8, term_p_20)))));
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = g_23;
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
static ATerm v_10 (ATerm m_143 (ATerm), ATerm t_81, ATerm r_81, ATerm s_81, ATerm w_81, ATerm u_81, ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = new_0_0(t);
  z_8 = t;
  t = w_81;
  t = dummify_0_0(t);
  y_8 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_8;
        if((w_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = y_8;
      }
  }
  a_9 = t;
  t = t_81;
  t = m_143(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, b_9, y_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, t_81, r_81, s_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_8), w_81), term_r_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_81)))), a_9), term_o_24)), (ATerm) ATmakeAppl(sym_Seq_2, u_81, term_p_20))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm m_143 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      g_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
      l_9 = ATgetArgument(t, 2);
      {
        ATerm p_24 = ATgetArgument(t, 3);
        if(match_cons(p_24, sym_Rule_3))
          {
            m_9 = ATgetArgument(p_24, 0);
            {
              ATerm r_24 = ATgetArgument(p_24, 1);
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
            n_9 = ATgetArgument(p_24, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_10(m_143, g_9, h_9, l_9, m_9, n_9, t);
  return(t);
}
static ATerm g_18 (ATerm i_11, ATerm k_11, ATerm t)
{
  t = i_11;
  {
    ATerm d_25 = t;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,x_11 = NULL,d_12 = NULL,h_12 = NULL,e_3 = NULL;
        h_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_11 = ATgetFirst((ATermList) t);
            d_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_12);
        r_11 = t;
        t = d_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_12), x_11);
        e_3 = t;
        t = SSLsetAnnotations(e_3, r_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_20, i_11);
  return(t);
}
static ATerm h_18 (ATerm w_12, ATerm h_13, ATerm t)
{
  t = w_12;
  {
    ATerm e_25 = t;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,f_3 = NULL;
        q_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            p_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_13);
        n_13 = t;
        t = p_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
        f_3 = t;
        t = SSLsetAnnotations(f_3, n_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_25, w_12);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,q_2 = NULL;
  k_14 = t;
  t = SSL_explode_term(k_14);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_25 = ATgetArgument(t, 1);
        if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
          {
            l_14 = ATgetFirst((ATermList) o_25);
            {
              ATerm p_25 = (ATerm) ATgetNext((ATermList) o_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(k_14);
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_25 = ATgetArgument(t, 1);
        if(((ATgetType(r_25) == AT_LIST) && !(ATisEmpty(r_25))))
          {
            ATerm s_25 = ATgetFirst((ATermList) r_25);
            ATerm t_25 = (ATerm) ATgetNext((ATermList) r_25);
            if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
              {
                q_2 = ATgetFirst((ATermList) t_25);
                {
                  ATerm u_25 = (ATerm) ATgetNext((ATermList) t_25);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_25, (ATerm) ATinsert(ATinsert(ATempty, q_2), l_14));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_25, (ATerm) ATinsert(ATinsert(ATempty, e_15), d_15));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_25, (ATerm) ATinsert(ATinsert(ATempty, h_15), g_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, t_15), s_15));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm y_15 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, e_16), y_15));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,a_14 = NULL,b_14 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
      {
        ATerm i_14 = NULL;
        t = b_14;
        t = foldr_2_0(e_1, f_1, t);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_14, i_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          a_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, a_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              a_14 = ATgetArgument(t, 0);
              {
                ATerm v_2 = NULL;
                t = a_14;
                {
                  ATerm d_26 = t;
                  int e_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_f_26;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_g_26;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_h_26;
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
                      LocalPopChoice(e_26);
                    }
                  else
                    {
                      t = d_26;
                      {
                        ATerm x_2 = NULL;
                        t = SSL_explode_string(a_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm q_26 = ATgetFirst((ATermList) t);
                            if(((ATgetType(q_26) != AT_INT) || (ATgetInt((ATermInt) q_26) != 39)))
                              _fail(t);
                            {
                              ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
                                {
                                  x_2 = ATgetFirst((ATermList) r_26);
                                  {
                                    ATerm s_26 = (ATerm) ATgetNext((ATermList) r_26);
                                    if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
                                      {
                                        ATerm t_26 = ATgetFirst((ATermList) s_26);
                                        if(((ATgetType(t_26) != AT_INT) || (ATgetInt((ATermInt) t_26) != 39)))
                                          _fail(t);
                                        {
                                          ATerm u_26 = (ATerm) ATgetNext((ATermList) s_26);
                                          if(((ATgetType(u_26) != AT_LIST) || !(ATisEmpty(u_26))))
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
                        t = x_2;
                      }
                    }
                }
                v_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, v_2);
              }
            }
          else
            {
              ATerm v_26 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      a_14 = ATgetArgument(t, 0);
                      {
                        ATerm i_27 = ATgetArgument(t, 1);
                      }
                      v_13 = ATgetArgument(t, 2);
                      r_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_27);
                  t = (ATerm) ATmakeAppl(sym_Con_3, a_14, v_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_13), (ATerm) ATempty));
                }
              else
                {
                  t = v_26;
                  {
                    ATerm m_27 = t;
                    int n_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            a_14 = ATgetArgument(t, 0);
                            {
                              ATerm o_27 = ATgetArgument(t, 1);
                            }
                            v_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(n_27);
                        t = (ATerm) ATmakeAppl(sym_Con_3, a_14, v_13, term_l_28);
                      }
                    else
                      {
                        t = m_27;
                        if(match_cons(t, sym_Con1_2))
                          {
                            a_14 = ATgetArgument(t, 0);
                            b_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, a_14, b_14, term_l_28);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                a_14 = ATgetArgument(t, 0);
                                b_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm g_1 (ATerm t)
                                  {
                                    t = b_14;
                                    return(t);
                                  }
                                  t = a_14;
                                  t = foldr_2_0(g_1, h_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    a_14 = ATgetArgument(t, 0);
                                    t = a_14;
                                    t = foldr_2_0(i_1, j_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        a_14 = ATgetArgument(t, 0);
                                        t = a_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            s_13 = ATgetFirst((ATermList) t);
                                            t_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = t_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm r_28 = t;
                                                int t_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_18(a_14, w_13, t);
                                                    LocalPopChoice(t_28);
                                                  }
                                                else
                                                  {
                                                    t = r_28;
                                                    t = s_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_18(a_14, w_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_18(a_14, w_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            a_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, a_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                a_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    a_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        a_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            a_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                a_14 = ATgetArgument(t, 0);
                                                                b_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_14), b_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    a_14 = ATgetArgument(t, 0);
                                                                    b_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm k_1 (ATerm t)
                                                                      {
                                                                        t = b_14;
                                                                        return(t);
                                                                      }
                                                                      t = a_14;
                                                                      t = foldr_2_0(k_1, l_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        a_14 = ATgetArgument(t, 0);
                                                                        t = a_14;
                                                                        t = foldr_2_0(m_1, n_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            a_14 = ATgetArgument(t, 0);
                                                                            b_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_j_25, (ATerm) ATinsert(CheckATermList(b_14), a_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                a_14 = ATgetArgument(t, 0);
                                                                                t = a_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    s_13 = ATgetFirst((ATermList) t);
                                                                                    t_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = t_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm d_29 = t;
                                                                                        int e_29 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_18(a_14, w_13, t);
                                                                                            LocalPopChoice(e_29);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_29;
                                                                                            t = s_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_18(a_14, w_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_18(a_14, w_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_f_29;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        a_14 = ATgetArgument(t, 0);
                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                        t = b_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_i_29, (ATerm) ATinsert(ATinsert(ATempty, u_13), a_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            a_14 = ATgetArgument(t, 0);
                                                                                            t = a_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                a_14 = ATgetArgument(t, 0);
                                                                                                b_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, a_14, b_14, term_q_20);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    a_14 = ATgetArgument(t, 0);
                                                                                                    b_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, a_14, b_14, term_q_20);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        a_14 = ATgetArgument(t, 0);
                                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_14, (ATerm)ATempty, b_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            a_14 = ATgetArgument(t, 0);
                                                                                                            b_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, b_14, a_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                a_14 = ATgetArgument(t, 0);
                                                                                                                b_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, a_14, b_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    a_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, a_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        a_14 = ATgetArgument(t, 0);
                                                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                                                        v_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, a_14, b_14, (ATerm)ATempty, v_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            a_14 = ATgetArgument(t, 0);
                                                                                                                            b_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_14, (ATerm)ATempty, (ATerm)ATempty, b_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                a_14 = ATgetArgument(t, 0);
                                                                                                                                b_14 = ATgetArgument(t, 1);
                                                                                                                                v_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_14, b_14, (ATerm)ATempty, v_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    a_14 = ATgetArgument(t, 0);
                                                                                                                                    b_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_14, (ATerm)ATempty, (ATerm)ATempty, b_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        a_14 = ATgetArgument(t, 0);
                                                                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                                                                        v_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_14, b_14, (ATerm)ATempty, v_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            a_14 = ATgetArgument(t, 0);
                                                                                                                                            b_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_14, (ATerm)ATempty, (ATerm)ATempty, b_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm l_29 = ATgetArgument(t, 0);
                                                                                                                                                b_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, b_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      l_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
      {
        ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,x_18 = NULL;
        t = k_18;
        t = new_0_0(t);
        q_18 = t;
        t = new_0_0(t);
        r_18 = t;
        t = new_0_0(t);
        s_18 = t;
        t = new_0_0(t);
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_18), s_18), r_18), q_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_18), (ATerm) ATmakeAppl(sym_Var_1, s_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, l_18, (ATerm)ATmakeAppl(sym_Var_1, q_18), (ATerm) ATmakeAppl(sym_Var_1, r_18)), (ATerm) ATmakeAppl(sym_BAM_3, j_18, (ATerm)ATmakeAppl(sym_Var_1, s_18), (ATerm) ATmakeAppl(sym_Var_1, x_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_s_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_18)), (ATerm) ATmakeAppl(sym_Var_1, r_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          l_18 = ATgetArgument(t, 0);
          {
            ATerm y_18 = NULL,z_18 = NULL,b_19 = NULL,c_19 = NULL;
            t = k_18;
            t = new_0_0(t);
            b_19 = t;
            t = l_18;
            {
              static ATerm o_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((y_18 != NULL) && (y_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      y_18 = ATgetArgument(t, 0);
                    if(((z_18 != NULL) && (z_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, b_19);
                return(t);
              }
              t = oncetd_1_0(o_1, t);
            }
            c_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_18)), not_null(y_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_19)), (ATerm) ATmakeAppl(sym_Build_1, c_19))));
          }
        }
      else
        {
          ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,k_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              l_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_18;
          t = new_0_0(t);
          g_19 = t;
          t = new_0_0(t);
          h_19 = t;
          t = l_18;
          {
            static ATerm p_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_19 != NULL) && (e_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_19 = ATgetArgument(t, 0);
                  if(((f_19 != NULL) && (f_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_19);
              return(t);
            }
            t = oncetd_1_0(p_1, t);
          }
          k_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_19))))), (ATerm)ATmakeAppl(sym_Var_1, g_19), (ATerm) ATmakeAppl(sym_Op_2, term_r_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_19)), not_null(e_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
        t = m_19;
        t = new_0_0(t);
        v_19 = t;
        t = n_19;
        {
          static ATerm q_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_19 = ATgetArgument(t, 0);
                if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_19), t_19);
            return(t);
          }
          t = pat_td_1_0(q_1, t);
        }
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_30, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_19))))));
        LocalPopChoice(a_30);
      }
    else
      {
        t = y_29;
        {
          ATerm e_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_19 = NULL,z_19 = NULL,c_20 = NULL;
              t = m_19;
              t = new_0_0(t);
              z_19 = t;
              t = n_19;
              {
                static ATerm r_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_19);
                  return(t);
                }
                t = pat_td_1_0(r_1, t);
              }
              c_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_19)), not_null(y_19))));
              LocalPopChoice(h_30);
            }
          else
            {
              t = e_30;
              {
                ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,n_20 = NULL;
                t = m_19;
                t = new_0_0(t);
                i_20 = t;
                t = n_19;
                {
                  static ATerm s_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((h_20 != NULL) && (h_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          h_20 = ATgetArgument(t, 0);
                        if(((g_20 != NULL) && (g_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_20);
                    return(t);
                  }
                  t = pat_td_1_0(s_1, t);
                }
                n_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_20)), not_null(h_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm g_142 (ATerm), ATerm t)
{
  ATerm i_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_142(t);
      LocalPopChoice(q_30);
    }
  else
    {
      t = i_30;
      {
        ATerm x_25 = NULL,y_25 = NULL,i_26 = NULL,k_26 = NULL;
        y_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_26 = ATgetArgument(t, 0);
            k_26 = ATgetArgument(t, 1);
            {
              ATerm i_3 = NULL,n_3 = NULL,j_3 = NULL;
              t = SSLgetAnnotations(y_25);
              i_3 = t;
              t = k_26;
              {
                static ATerm t_1 (ATerm t)
                {
                  t = pat_td_1_0(g_142, t);
                  return(t);
                }
                t = fetch_1_0(t_1, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, i_26, n_3);
              j_3 = t;
              t = SSLsetAnnotations(j_3, i_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                i_26 = ATgetArgument(t, 0);
                k_26 = ATgetArgument(t, 1);
                {
                  ATerm t_30 = t;
                  int u_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_4 = NULL,k_4 = NULL,l_3 = NULL;
                      t = SSLgetAnnotations(y_25);
                      b_4 = t;
                      t = k_26;
                      t = pat_td_1_0(g_142, t);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_26, k_4);
                      l_3 = t;
                      t = SSLsetAnnotations(l_3, b_4);
                      LocalPopChoice(u_30);
                    }
                  else
                    {
                      t = t_30;
                      {
                        ATerm c_5 = NULL,i_5 = NULL,p_3 = NULL;
                        t = SSLgetAnnotations(y_25);
                        c_5 = t;
                        t = i_26;
                        t = pat_td_1_0(g_142, t);
                        i_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, i_5, k_26);
                        p_3 = t;
                        t = SSLsetAnnotations(p_3, c_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    i_26 = ATgetArgument(t, 0);
                    k_26 = ATgetArgument(t, 1);
                    x_25 = ATgetArgument(t, 2);
                    {
                      ATerm u_6 = NULL,l_7 = NULL,r_3 = NULL;
                      t = SSLgetAnnotations(y_25);
                      u_6 = t;
                      t = x_25;
                      {
                        static ATerm u_1 (ATerm t)
                        {
                          t = pat_td_1_0(g_142, t);
                          return(t);
                        }
                        t = fetch_1_0(u_1, t);
                      }
                      l_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_26, k_26, l_7);
                      r_3 = t;
                      t = SSLsetAnnotations(r_3, u_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        i_26 = ATgetArgument(t, 0);
                        k_26 = ATgetArgument(t, 1);
                        x_25 = ATgetArgument(t, 2);
                        {
                          ATerm a_8 = NULL,g_8 = NULL,u_3 = NULL;
                          t = SSLgetAnnotations(y_25);
                          a_8 = t;
                          t = x_25;
                          {
                            static ATerm v_1 (ATerm t)
                            {
                              t = pat_td_1_0(g_142, t);
                              return(t);
                            }
                            t = fetch_1_0(v_1, t);
                          }
                          g_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, i_26, k_26, g_8);
                          u_3 = t;
                          t = SSLsetAnnotations(u_3, a_8);
                        }
                      }
                    else
                      {
                        ATerm j_9 = NULL,p_9 = NULL,w_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            i_26 = ATgetArgument(t, 0);
                            k_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(y_25);
                        j_9 = t;
                        t = k_26;
                        t = pat_td_1_0(g_142, t);
                        p_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, i_26, p_9);
                        w_3 = t;
                        t = SSLsetAnnotations(w_3, j_9);
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
  ATerm y_26 = NULL,z_26 = NULL;
  y_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      z_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL;
        t = y_26;
        t = new_0_0(t);
        d_27 = t;
        t = z_26;
        {
          static ATerm w_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((a_27 != NULL) && (a_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_27 = ATgetArgument(t, 0);
                if(((b_27 != NULL) && (b_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  b_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, d_27);
            return(t);
          }
          t = pat_td_1_0(w_1, t);
        }
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_31, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_27)), not_null(a_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_27)))), (ATerm) ATmakeAppl(sym_Build_1, e_27)));
        LocalPopChoice(z_30);
      }
    else
      {
        t = x_30;
        {
          ATerm b_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_27 = NULL,j_27 = NULL,k_27 = NULL;
              t = y_26;
              t = new_0_0(t);
              j_27 = t;
              t = z_26;
              {
                static ATerm x_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((f_27 != NULL) && (f_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        f_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
                  return(t);
                }
                t = pat_td_1_0(x_1, t);
              }
              k_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_27)))), (ATerm) ATmakeAppl(sym_Build_1, k_27)));
              LocalPopChoice(e_31);
            }
          else
            {
              t = b_31;
              {
                ATerm l_27 = NULL,q_27 = NULL,s_27 = NULL,t_27 = NULL;
                t = y_26;
                t = new_0_0(t);
                s_27 = t;
                t = z_26;
                {
                  static ATerm y_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_27 = ATgetArgument(t, 0);
                        if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_27);
                    return(t);
                  }
                  t = pat_td_1_0(y_1, t);
                }
                t_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_27), not_null(q_27), (ATerm) ATmakeAppl(sym_Var_1, s_27))), (ATerm) ATmakeAppl(sym_Build_1, t_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm i_31 = t;
  if((PushChoice() == 0))
    {
      ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,k_7 = NULL;
      i_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_28);
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_28);
      k_7 = t;
      t = SSLsetAnnotations(k_7, g_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_31;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,v_28 = NULL,w_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      if(match_cons(l_31, sym__2))
        {
          p_28 = ATgetArgument(l_31, 0);
          q_28 = ATgetArgument(l_31, 1);
        }
      else
        _fail(t);
      {
        ATerm n_31 = ATgetArgument(t, 1);
        if(match_cons(n_31, sym__2))
          {
            v_28 = ATgetArgument(n_31, 0);
            w_28 = ATgetArgument(n_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_28), p_28), (ATerm) ATinsert(CheckATermList(w_28), q_28));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_28 = ATgetFirst((ATermList) t);
      y_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_28, y_28);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(match_cons(s_31, sym__2))
        {
          z_28 = ATgetArgument(s_31, 0);
          a_29 = ATgetArgument(s_31, 1);
        }
      else
        _fail(t);
      {
        ATerm t_31 = ATgetArgument(t, 1);
        if(match_cons(t_31, sym__2))
          {
            b_29 = ATgetArgument(t_31, 0);
            c_29 = ATgetArgument(t_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_29), z_28), (ATerm) ATinsert(CheckATermList(c_29), a_29));
  return(t);
}
static ATerm x_10 (ATerm k_72, ATerm l_72, ATerm m_72, ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,f_28 = NULL,m_7 = NULL;
  t = m_72;
  t = fetch_1_0(z_1, t);
  t = m_72;
  t = genzip_4_0(a_2, b_2, c_2, LiftPrimArg_0_0, t);
  f_28 = t;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_28);
  y_27 = t;
  t = z_27;
  t = concat_0_0(t);
  b_28 = t;
  t = a_28;
  t = genzip_4_0(e_2, i_2, j_2, _id, t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
  m_7 = t;
  t = SSLsetAnnotations(m_7, y_27);
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      {
        ATerm u_31 = ATgetArgument(t, 1);
        if(match_cons(u_31, sym__2))
          {
            w_27 = ATgetArgument(u_31, 0);
            x_27 = ATgetArgument(u_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_27), (ATerm) ATmakeAppl(sym_CallT_3, k_72, l_72, x_27)));
  return(t);
}
static ATerm t_29 (ATerm h_29, ATerm t)
{
  ATerm j_29 = NULL;
  t = h_29;
  {
    ATerm w_31 = t;
    if((PushChoice() == 0))
      {
        ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,s_8 = NULL;
        o_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_29);
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_29);
        s_8 = t;
        t = SSLsetAnnotations(s_8, m_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_31;
      }
  }
  t = new_0_0(t);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_29)))), (ATerm) ATmakeAppl(sym_Var_1, j_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_29 = ATgetArgument(t, 0);
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_29(q_29, t);
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATmakeAppl(sym_Var_1, r_29)));
          }
      }
    }
  else
    {
      t = t_29(q_29, t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm a_32 = t;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,f_10 = NULL;
      q_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_10);
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_10);
      f_10 = t;
      t = SSLsetAnnotations(f_10, o_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_32;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_10 = ATgetFirst((ATermList) t);
      s_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_10, s_10);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_10 = NULL,w_10 = NULL,a_11 = NULL,d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_32 = ATgetArgument(t, 0);
      if(match_cons(b_32, sym__2))
        {
          u_10 = ATgetArgument(b_32, 0);
          w_10 = ATgetArgument(b_32, 1);
        }
      else
        _fail(t);
      {
        ATerm c_32 = ATgetArgument(t, 1);
        if(match_cons(c_32, sym__2))
          {
            a_11 = ATgetArgument(c_32, 0);
            d_11 = ATgetArgument(c_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_11), u_10), (ATerm) ATinsert(CheckATermList(d_11), w_10));
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_11 = ATgetFirst((ATermList) t);
      f_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_11, f_11);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm h_11 = NULL,j_11 = NULL,l_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_32 = ATgetArgument(t, 0);
      if(match_cons(d_32, sym__2))
        {
          h_11 = ATgetArgument(d_32, 0);
          j_11 = ATgetArgument(d_32, 1);
        }
      else
        _fail(t);
      {
        ATerm e_32 = ATgetArgument(t, 1);
        if(match_cons(e_32, sym__2))
          {
            l_11 = ATgetArgument(e_32, 0);
            n_11 = ATgetArgument(e_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_11), h_11), (ATerm) ATinsert(CheckATermList(n_11), j_11));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm f_32 = t;
  if((PushChoice() == 0))
    {
      ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,m_10 = NULL;
      z_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_13);
      x_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_13);
      m_10 = t;
      t = SSLsetAnnotations(m_10, x_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_32;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm u_2 (ATerm t)
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
static ATerm w_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,q_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if(match_cons(h_32, sym__2))
        {
          e_14 = ATgetArgument(h_32, 0);
          f_14 = ATgetArgument(h_32, 1);
        }
      else
        _fail(t);
      {
        ATerm i_32 = ATgetArgument(t, 1);
        if(match_cons(i_32, sym__2))
          {
            q_14 = ATgetArgument(i_32, 0);
            r_14 = ATgetArgument(i_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_14), e_14), (ATerm) ATinsert(CheckATermList(r_14), f_14));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_14 = ATgetFirst((ATermList) t);
      u_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm x_14 = NULL,c_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(match_cons(j_32, sym__2))
        {
          x_14 = ATgetArgument(j_32, 0);
          c_15 = ATgetArgument(j_32, 1);
        }
      else
        _fail(t);
      {
        ATerm k_32 = ATgetArgument(t, 1);
        if(match_cons(k_32, sym__2))
          {
            u_15 = ATgetArgument(k_32, 0);
            v_15 = ATgetArgument(k_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_15), x_14), (ATerm) ATinsert(CheckATermList(v_15), c_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,j_35 = NULL;
  d_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_35 = ATgetArgument(t, 0);
      j_35 = ATgetArgument(t, 1);
      c_35 = ATgetArgument(t, 2);
      {
        ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,l_10 = NULL,k_10 = NULL;
        t = c_35;
        t = fetch_1_0(k_2, t);
        t = c_35;
        t = genzip_4_0(l_2, m_2, n_2, LiftPrimArg_0_0, t);
        l_10 = t;
        if(match_cons(t, sym__2))
          {
            g_10 = ATgetArgument(t, 0);
            h_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_10);
        e_10 = t;
        t = g_10;
        t = concat_0_0(t);
        i_10 = t;
        t = h_10;
        t = genzip_4_0(o_2, p_2, r_2, _id, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, j_10);
        k_10 = t;
        t = SSLsetAnnotations(k_10, e_10);
        if(match_cons(t, sym__2))
          {
            b_10 = ATgetArgument(t, 0);
            {
              ATerm l_32 = ATgetArgument(t, 1);
              if(match_cons(l_32, sym__2))
                {
                  c_10 = ATgetArgument(l_32, 0);
                  d_10 = ATgetArgument(l_32, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_10), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, j_35, d_10)));
      }
    }
  else
    {
      ATerm z_12 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_10 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          e_35 = ATgetArgument(t, 0);
          j_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_35;
      t = fetch_1_0(s_2, t);
      t = j_35;
      t = genzip_4_0(t_2, u_2, w_2, LiftPrimArg_0_0, t);
      m_13 = t;
      if(match_cons(t, sym__2))
        {
          g_13 = ATgetArgument(t, 0);
          j_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_13);
      f_13 = t;
      t = g_13;
      t = concat_0_0(t);
      k_13 = t;
      t = j_13;
      t = genzip_4_0(y_2, z_2, a_3, _id, t);
      l_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_13, l_13);
      n_10 = t;
      t = SSLsetAnnotations(n_10, f_13);
      if(match_cons(t, sym__2))
        {
          z_12 = ATgetArgument(t, 0);
          {
            ATerm m_32 = ATgetArgument(t, 1);
            if(match_cons(m_32, sym__2))
              {
                d_13 = ATgetArgument(m_32, 0);
                e_13 = ATgetArgument(m_32, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_13), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, (ATerm)ATempty, e_13)));
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,o_36 = NULL,r_36 = NULL;
  r_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      j_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
      o_36 = ATgetArgument(t, 2);
      {
        ATerm k_16 = NULL,w_20 = NULL;
        t = SSLgetAnnotations(r_36);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, j_36, k_36, o_36);
        w_20 = t;
        t = SSLsetAnnotations(w_20, k_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = r_36;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm n_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_32;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      e_38 = ATgetArgument(t, 2);
      {
        ATerm y_17 = NULL,y_20 = NULL;
        t = SSLgetAnnotations(f_38);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_38, h_38, e_38);
        y_20 = t;
        t = SSLsetAnnotations(y_20, y_17);
      }
    }
  else
    {
      ATerm j_19 = NULL,z_20 = NULL;
      if(match_cons(t, sym_App_2))
        {
          g_38 = ATgetArgument(t, 0);
          h_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_38);
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, g_38, h_38);
      z_20 = t;
      t = SSLsetAnnotations(z_20, j_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm p_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(c_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_32;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      p_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_38;
  if(match_cons(t, sym_StratRule_3))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
      s_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_38), (ATerm) ATmakeAppl(sym_Where_1, s_38)), q_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          q_38 = ATgetArgument(t, 0);
          r_38 = ATgetArgument(t, 1);
          s_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_38;
      t = pureterm_0_0(t);
      t = r_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, r_38)), (ATerm) ATmakeAppl(sym_Where_1, s_38)), (ATerm) ATmakeAppl(sym_Match_1, q_38)));
    }
  return(t);
}
static ATerm y_10 (ATerm x_67, ATerm y_67, ATerm z_67, ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = new_0_0(t);
  q_39 = t;
  t = x_67;
  {
    static ATerm d_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm q_32 = ATgetArgument(t, 0);
          if(match_cons(q_32, sym_Var_1))
            {
              if(((p_39 != NULL) && (p_39 != ATgetArgument(q_32, 0))))
                _fail(ATgetArgument(q_32, 0));
              else
                p_39 = ATgetArgument(q_32, 0);
            }
          else
            _fail(t);
          if(((j_39 != NULL) && (j_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_39 = ATgetArgument(t, 1);
          {
            ATerm r_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_39);
      return(t);
    }
    t = oncetd_1_0(d_3, t);
  }
  r_39 = t;
  t = y_67;
  {
    static ATerm g_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm s_32 = ATgetArgument(t, 0);
          if(match_cons(s_32, sym_Var_1))
            {
              if(((p_39 != NULL) && (p_39 != ATgetArgument(s_32, 0))))
                _fail(ATgetArgument(s_32, 0));
              else
                p_39 = ATgetArgument(s_32, 0);
            }
          else
            _fail(t);
          if(((o_39 != NULL) && (o_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_39 = ATgetArgument(t, 1);
          {
            ATerm t_32 = ATgetArgument(t, 2);
            if(match_cons(t_32, sym_CallT_3))
              {
                if(((i_39 != NULL) && (i_39 != ATgetArgument(t_32, 0))))
                  _fail(ATgetArgument(t_32, 0));
                else
                  i_39 = ATgetArgument(t_32, 0);
                {
                  ATerm v_32 = ATgetArgument(t_32, 1);
                  if(((ATgetType(v_32) != AT_LIST) || !(ATisEmpty(v_32))))
                    _fail(t);
                }
                {
                  ATerm w_32 = ATgetArgument(t_32, 2);
                  if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_39);
      return(t);
    }
    t = oncetd_1_0(g_3, t);
  }
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, r_39, s_39, (ATerm) ATmakeAppl(sym_Seq_2, z_67, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(i_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_39), not_null(o_39), term_q_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_39)), (ATerm) ATmakeAppl(sym_Var_1, q_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
          z_40 = t;
          if(match_cons(t, sym_SRule_1))
            {
              a_41 = ATgetArgument(t, 0);
              t = a_41;
              if(match_cons(t, sym_Rule_3))
                {
                  w_40 = ATgetArgument(t, 0);
                  x_40 = ATgetArgument(t, 1);
                  y_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_40;
              t = y_10(w_40, x_40, y_40, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm j_20 = NULL,m_20 = NULL,e_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  a_41 = ATgetArgument(t, 0);
                  b_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_40);
              j_20 = t;
              t = b_41;
              t = desugarRule_0_0(t);
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_41, m_20);
              e_21 = t;
              t = SSLsetAnnotations(e_21, j_20);
            }
          LocalPopChoice(a_33);
        }
      else
        {
          t = z_32;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
    }
  t = repeat_2_0(k_3, _id, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,f_42 = NULL;
            b_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                c_42 = ATgetArgument(t, 0);
                d_42 = ATgetArgument(t, 1);
                f_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_42;
            t = x_10(c_42, d_42, f_42, t);
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
                  t = HL_0_0(t);
                  LocalPopChoice(i_33);
                }
              else
                {
                  t = h_33;
                  {
                    ATerm k_33 = t;
                    int l_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(l_33);
                      }
                    else
                      {
                        t = k_33;
                        {
                          ATerm m_33 = t;
                          int n_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_33 = t;
                              int p_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      l_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_42;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      m_42 = ATgetArgument(t, 0);
                                      t = m_42;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          m_42 = ATgetArgument(t, 0);
                                          n_42 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, m_42, n_42);
                                    }
                                  LocalPopChoice(p_33);
                                }
                              else
                                {
                                  t = o_33;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(n_33);
                            }
                          else
                            {
                              t = m_33;
                              {
                                ATerm q_33 = t;
                                int r_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(r_33);
                                  }
                                else
                                  {
                                    t = q_33;
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
static ATerm m_3 (ATerm t)
{
  ATerm l_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_46 = ATgetArgument(t, 0);
      t = l_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_46 = ATgetArgument(t, 0);
          {
            ATerm s_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_46;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_46), (ATerm) ATempty);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm v_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_46 = ATgetArgument(t, 0);
      t = v_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_46 = ATgetArgument(t, 0);
          {
            ATerm t_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_46;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, v_46);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm d_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_47);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
            {
              ATerm z_33 = t;
              int a_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_47 = NULL,j_47 = NULL,o_47 = NULL,p_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_47 = ATgetArgument(t, 0);
                      j_47 = ATgetArgument(t, 1);
                      o_47 = ATgetArgument(t, 2);
                      p_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_47;
                  t = map_1_0(t_3, t);
                  LocalPopChoice(a_34);
                }
              else
                {
                  t = z_33;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm w_47 = NULL;
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_47 = ATgetArgument(t, 0);
          {
            ATerm d_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_34);
      t = w_47;
    }
  else
    {
      t = b_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_47;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_48);
  return(t);
}
static ATerm x_3 (ATerm t)
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
static ATerm y_3 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm i_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_34);
          }
        else
          {
            t = i_34;
            {
              ATerm l_34 = t;
              int p_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_48 = NULL,i_48 = NULL,m_48 = NULL,n_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_48 = ATgetArgument(t, 0);
                      i_48 = ATgetArgument(t, 1);
                      m_48 = ATgetArgument(t, 2);
                      n_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_48;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(p_34);
                }
              else
                {
                  t = l_34;
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
  ATerm y_48 = NULL;
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_48 = ATgetArgument(t, 0);
          {
            ATerm u_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_34);
      t = y_48;
    }
  else
    {
      t = s_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_48;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm b_49 = NULL;
  b_49 = t;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_49 = NULL,t_20 = NULL,v_20 = NULL,v_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            p_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_49);
        t_20 = t;
        t = p_49;
        t = ContextVar_0_0(t);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, v_20);
        v_21 = t;
        t = SSLsetAnnotations(v_21, t_20);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_49);
  return(t);
}
static ATerm z_10 (ATerm l_143 (ATerm), ATerm a_81, ATerm x_80, ATerm y_80, ATerm h_81, ATerm l_81, ATerm m_81, ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,v_43 = NULL,e_44 = NULL,b_45 = NULL,m_45 = NULL,r_45 = NULL,x_45 = NULL,y_45 = NULL,c_46 = NULL,d_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_81, term_r_22);
  {
    ATerm x_34 = t;
    if((PushChoice() == 0))
      {
        ATerm e_46 = NULL;
        if(match_cons(t, sym__2))
          {
            e_46 = ATgetArgument(t, 0);
            if((e_46 != ATgetArgument(t, 1)))
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
        t = x_34;
      }
  }
  t = term_y_34;
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_34, a_81);
  t = p_12(d_46, a_81, t);
  j_43 = t;
  t = term_z_34;
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, a_81);
  t = p_12(c_46, a_81, t);
  k_43 = t;
  t = new_0_0(t);
  l_43 = t;
  t = x_80;
  t = map_1_0(m_3, t);
  m_43 = t;
  t = y_80;
  t = map_1_0(o_3, t);
  n_43 = t;
  t = new_0_0(t);
  o_43 = t;
  t = h_81;
  t = dummify_0_0(t);
  e_44 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_44;
        if((h_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, o_43);
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        t = e_44;
      }
  }
  v_43 = t;
  t = e_44;
  t = free_vars_3_0(q_3, s_3, tboundin_3_0, t);
  t = map_1_0(v_3, t);
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, m_81);
  t = free_vars_3_0(x_3, y_3, tboundin_3_0, t);
  t = filter_1_0(a_4, t);
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_45, m_45);
  t = diff_0_0(t);
  r_45 = t;
  t = new_0_0(t);
  x_45 = t;
  t = a_81;
  t = l_143(t);
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, y_45, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATmakeAppl(sym_Str_1, x_45)))), e_44)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, k_43, x_80, y_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATmakeAppl(sym_Str_1, x_45)))), h_81)), l_81, (ATerm) ATmakeAppl(sym_Seq_2, term_o_35, m_81)))), (ATerm) ATmakeAppl(sym_RDefT_4, j_43, x_80, y_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_43), h_81), (ATerm)ATmakeAppl(sym_Var_1, l_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_81)))), v_43), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_43), m_43, n_43), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_l_35), (ATerm) ATmakeAppl(sym_Var_1, o_43)))))), (ATerm) ATmakeAppl(sym_Var_1, l_43)))))), (ATerm) ATmakeAppl(sym_RDefT_4, a_81, x_80, y_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_43), h_81), l_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_81)))), v_43), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATmakeAppl(sym_Str_1, x_45)))), term_f_35))), m_81)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
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
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_4, t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_22))));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_22))));
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
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
static ATerm h_4 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(match_cons(w_35, sym__2))
        {
          k_22 = ATgetArgument(w_35, 0);
          l_22 = ATgetArgument(w_35, 1);
        }
      else
        _fail(t);
      {
        ATerm x_35 = ATgetArgument(t, 1);
        if(match_cons(x_35, sym__2))
          {
            m_22 = ATgetArgument(x_35, 0);
            n_22 = ATgetArgument(x_35, 1);
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
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,c_24 = NULL,d_24 = NULL,f_24 = NULL,j_24 = NULL;
      o_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          p_23 = ATgetArgument(t, 0);
          q_23 = ATgetArgument(t, 1);
          r_23 = ATgetArgument(t, 2);
          c_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = c_24;
      if(match_cons(t, sym_Rule_3))
        {
          d_24 = ATgetArgument(t, 0);
          f_24 = ATgetArgument(t, 1);
          j_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_23;
      t = z_10(p_4, p_23, q_23, r_23, d_24, f_24, j_24, t);
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(q_4, t);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_24))));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_24))));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_24, y_24);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(match_cons(f_36, sym__2))
        {
          z_24 = ATgetArgument(f_36, 0);
          a_25 = ATgetArgument(f_36, 1);
        }
      else
        _fail(t);
      {
        ATerm g_36 = ATgetArgument(t, 1);
        if(match_cons(g_36, sym__2))
          {
            b_25 = ATgetArgument(g_36, 0);
            c_25 = ATgetArgument(g_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_25), z_24), (ATerm) ATinsert(CheckATermList(c_25), a_25));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm z_53 = NULL;
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_53))));
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_54 = ATgetFirst((ATermList) t);
      b_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_54, b_54);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,i_54 = NULL,m_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      if(match_cons(l_36, sym__2))
        {
          f_54 = ATgetArgument(l_36, 0);
          g_54 = ATgetArgument(l_36, 1);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(match_cons(n_36, sym__2))
          {
            i_54 = ATgetArgument(n_36, 0);
            m_54 = ATgetArgument(n_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_54), f_54), (ATerm) ATinsert(CheckATermList(m_54), g_54));
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm r_54 = NULL;
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_54))));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_54 = ATgetFirst((ATermList) t);
      t_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm y_54 = NULL,d_55 = NULL,i_55 = NULL,j_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(match_cons(s_36, sym__2))
        {
          y_54 = ATgetArgument(s_36, 0);
          d_55 = ATgetArgument(s_36, 1);
        }
      else
        _fail(t);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(match_cons(u_36, sym__2))
          {
            i_55 = ATgetArgument(u_36, 0);
            j_55 = ATgetArgument(u_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_55), y_54), (ATerm) ATinsert(CheckATermList(j_55), d_55));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  u_53 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      v_53 = ATgetArgument(t, 0);
      {
        ATerm h_21 = NULL,i_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,a_22 = NULL;
        t = v_53;
        t = map_1_0(c_4, t);
        t = genzip_4_0(f_4, g_4, h_4, _id, t);
        m_21 = t;
        if(match_cons(t, sym__2))
          {
            i_21 = ATgetArgument(t, 0);
            k_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_21);
        h_21 = t;
        t = k_21;
        t = concat_0_0(t);
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, l_21);
        a_22 = t;
        t = SSLsetAnnotations(a_22, h_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          v_53 = ATgetArgument(t, 0);
          {
            ATerm x_22 = NULL,y_22 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,b_22 = NULL;
            t = v_53;
            t = map_1_0(o_4, t);
            t = genzip_4_0(r_4, t_4, v_4, _id, t);
            l_23 = t;
            if(match_cons(t, sym__2))
              {
                y_22 = ATgetArgument(t, 0);
                j_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_23);
            x_22 = t;
            t = j_23;
            t = concat_0_0(t);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_22, k_23);
            b_22 = t;
            t = SSLsetAnnotations(b_22, x_22);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              v_53 = ATgetArgument(t, 0);
              t = v_53;
              t = map_1_0(w_4, t);
              t = genzip_4_0(y_4, z_4, a_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  v_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_53;
              t = map_1_0(d_5, t);
              t = genzip_4_0(h_5, j_5, k_5, _id, t);
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm n_143 (ATerm), ATerm t)
{
  static ATerm h_56 (ATerm t)
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm w_36 = t;
      int x_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_143(t);
          LocalPopChoice(x_36);
        }
      else
        {
          t = w_36;
          {
            ATerm x_55 = NULL,y_55 = NULL,g_56 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                x_55 = ATgetArgument(t, 0);
                y_55 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_55, y_55);
            {
              static ATerm t_5 (ATerm t)
              {
                t = x_55;
                t = DeclareContextVars_0_0(t);
                t = y_55;
                t = h_56(t);
                if(((g_56 != NULL) && (g_56 != t)))
                  _fail(t);
                else
                  g_56 = t;
                return(t);
              }
              t = scope_2_0(m_5, t_5, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_55, not_null(g_56));
          }
        }
      return(t);
    }
    t = oncetd_1_0(l_5, t);
    return(t);
  }
  t = h_56(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm b_11 (ATerm a_82, ATerm z_81, ATerm t)
{
  ATerm i_56 = NULL,r_56 = NULL,s_56 = NULL;
  static ATerm w_5 (ATerm t)
  {
    t = a_82;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = a_82;
    {
      static ATerm b_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((r_56 != NULL) && (r_56 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              r_56 = ATgetArgument(t, 0);
            if(((i_56 != NULL) && (i_56 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              i_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, r_56);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(b_6, t);
    }
    if(((s_56 != NULL) && (s_56 != t)))
      _fail(t);
    else
      s_56 = t;
    return(t);
  }
  t = scope_2_0(u_5, w_5, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_56)), not_null(s_56)), z_81);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm a_57 = NULL,c_57 = NULL,k_57 = NULL,l_57 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      k_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_57 = ATgetFirst((ATermList) t);
      c_57 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_a_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, c_57, l_57)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_57))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_57;
    }
  return(t);
}
static ATerm m_58 (ATerm v_57, ATerm t)
{
  t = SSL_is_string(v_57);
  return(t);
}
static ATerm n_58 (ATerm y_57, ATerm t)
{
  ATerm d_58 = NULL,f_58 = NULL,g_58 = NULL;
  t = term_c_37;
  f_58 = t;
  t = (ATerm) ATinsert(ATempty, term_d_37);
  g_58 = t;
  t = SSL_printnl(f_58, g_58);
  t = y_57;
  t = debug_1_0(c_6, t);
  t = term_e_37;
  d_58 = t;
  t = SSL_exit(d_58);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  i_58 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      h_58 = ATgetArgument(t, 0);
      {
        ATerm g_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_58(i_58, t);
            LocalPopChoice(h_37);
          }
        else
          {
            t = g_37;
            t = h_58;
          }
      }
    }
  else
    {
      ATerm i_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_58(i_58, t);
          LocalPopChoice(j_37);
        }
      else
        {
          t = i_37;
          t = n_58(i_58, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      z_58 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
      t = z_58;
      if(match_cons(t, sym_DynRuleId_1))
        {
          a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_59;
      if(match_cons(t, sym_RDecT_3))
        {
          b_59 = ATgetArgument(t, 0);
          e_59 = ATgetArgument(t, 1);
          f_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, b_59, e_59, f_59, (ATerm) ATmakeAppl(sym_Rule_3, g_59, term_r_22, term_q_20));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          z_58 = ATgetArgument(t, 0);
          g_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_58;
      if(match_cons(t, sym_DynRuleId_1))
        {
          a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_59;
      if(match_cons(t, sym_RDecT_3))
        {
          b_59 = ATgetArgument(t, 0);
          e_59 = ATgetArgument(t, 1);
          f_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, b_59, e_59, f_59, g_59);
    }
  return(t);
}
static ATerm j_61 (ATerm n_60, ATerm t)
{
  ATerm p_60 = NULL,t_60 = NULL,u_60 = NULL,z_60 = NULL;
  t = n_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      u_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_60;
  t = filter_1_0(d_6, t);
  z_60 = t;
  t = n_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      p_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_60;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  t_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, z_60), (ATerm) ATmakeAppl(sym_DynamicRules_1, t_60));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if(match_cons(k_37, sym_DynRuleId_1))
        {
          ATerm l_37 = ATgetArgument(k_37, 0);
          if(match_cons(l_37, sym_RDecT_3))
            {
              a_61 = ATgetArgument(l_37, 0);
              b_61 = ATgetArgument(l_37, 1);
              c_61 = ATgetArgument(l_37, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      d_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, a_61, b_61, c_61, d_61);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm m_37 = ATgetArgument(t, 0);
      ATerm n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm e_61 = NULL,h_61 = NULL;
  h_61 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      e_61 = ATgetArgument(t, 0);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_25 = NULL;
            t = e_61;
            {
              ATerm q_37 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(e_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_37;
                }
            }
            t = e_61;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            l_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, l_25);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = j_61(h_61, t);
          }
      }
    }
  else
    {
      t = j_61(h_61, t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_61 = NULL;
      m_61 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm t_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_61;
      LocalPopChoice(s_37);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = r_37;
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_61 = NULL;
            n_61 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm w_37 = ATgetArgument(t, 0);
                ATerm x_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_61;
            LocalPopChoice(v_37);
            {
              ATerm w_61 = NULL,y_61 = NULL,d_62 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  w_61 = ATgetArgument(t, 0);
                  y_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_61;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              d_62 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, d_62, y_61);
            }
          }
        else
          {
            t = u_37;
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
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,d_63 = NULL,u_22 = NULL;
  d_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_63);
  y_62 = t;
  t = z_62;
  t = topdown_1_0(j_6, t);
  t = listtd_1_0(l_6, t);
  a_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_63);
  u_22 = t;
  t = SSLsetAnnotations(u_22, y_62);
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
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
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
  ATerm j_63 = NULL,k_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_63 = ATgetFirst((ATermList) t);
      k_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_11(j_63, k_63, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm i_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,t_62 = NULL,v_62 = NULL,w_62 = NULL,z_22 = NULL,v_22 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  w_62 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  i_62 = t;
  t = l_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_62 = ATgetFirst((ATermList) t);
      o_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_62);
  m_62 = t;
  t = o_62;
  t = Cons_2_0(_id, g_6, t);
  t_62 = t;
  t = (ATerm) ATinsert(CheckATermList(t_62), n_62);
  v_22 = t;
  t = SSLsetAnnotations(v_22, m_62);
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_62);
  z_22 = t;
  t = SSLsetAnnotations(z_22, i_62);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm t_64 = NULL;
  t_64 = t;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_26 = NULL;
        t = term_v_36;
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_36, t_64);
        t = e_12(j_26, t_64, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = t_64;
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          ATerm x_26 = NULL;
          t = term_v_36;
          x_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_36, t_64);
          t = e_12(x_26, t_64, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_38) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = t_64;
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm s_66 = NULL,b_67 = NULL,c_67 = NULL;
  s_66 = t;
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm k_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_38);
        t = s_66;
        {
          ATerm l_38 = t;
          if((PushChoice() == 0))
            {
              ATerm d_28 = NULL,e_28 = NULL,j_28 = NULL,k_28 = NULL,e_23 = NULL;
              k_28 = t;
              if(match_cons(t, sym_Var_1))
                {
                  e_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_28);
              d_28 = t;
              t = e_28;
              {
                ATerm m_38 = t;
                int n_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(n_38);
                  }
                else
                  {
                    t = m_38;
                    {
                      ATerm u_28 = NULL,k_29 = NULL,p_29 = NULL,d_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          u_28 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(e_28);
                      k_29 = t;
                      t = u_28;
                      t = ContextVar_0_0(t);
                      p_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, p_29);
                      d_23 = t;
                      t = SSLsetAnnotations(d_23, k_29);
                    }
                  }
              }
              j_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, j_28);
              e_23 = t;
              t = SSLsetAnnotations(e_23, d_28);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_38;
            }
        }
        t = term_m_25;
      }
    else
      {
        t = i_38;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_m_25;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                b_67 = ATgetArgument(t, 0);
                {
                  ATerm f_67 = NULL;
                  t = b_67;
                  t = free_vars_3_0(q_6, t_6, tboundin_3_0, t);
                  t = map_1_0(y_6, t);
                  f_67 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_38, f_67);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    b_67 = ATgetArgument(t, 0);
                    c_67 = ATgetArgument(t, 1);
                    {
                      ATerm x_69 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
                      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
                      t = map_1_0(c_7, t);
                      x_69 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_o_38, x_69);
                    }
                  }
                else
                  {
                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm v_38 = ATgetArgument(t, 0);
                        ATerm w_38 = ATgetArgument(t, 1);
                        ATerm x_38 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_c_37;
                    w_29 = t;
                    t = (ATerm) ATinsert(ATempty, term_y_38);
                    x_29 = t;
                    t = SSL_printnl(w_29, x_29);
                    t = term_e_37;
                    v_29 = t;
                    t = SSL_exit(v_29);
                    t = (ATerm) ATinsert(ATempty, term_y_38);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm g_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_67);
  return(t);
}
static ATerm t_6 (ATerm t)
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
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
            {
              ATerm f_39 = t;
              int g_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_67 = NULL,w_67 = NULL,j_68 = NULL,k_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_67 = ATgetArgument(t, 0);
                      w_67 = ATgetArgument(t, 1);
                      j_68 = ATgetArgument(t, 2);
                      k_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_68;
                  t = map_1_0(w_6, t);
                  LocalPopChoice(g_39);
                }
              else
                {
                  t = f_39;
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
  ATerm u_68 = NULL;
  ATerm h_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_68 = ATgetArgument(t, 0);
          {
            ATerm l_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_39);
      t = u_68;
    }
  else
    {
      t = h_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_68;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm x_68 = NULL;
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_68);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm y_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_69);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            {
              ATerm x_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_70 = ATgetArgument(t, 0);
                      b_70 = ATgetArgument(t, 1);
                      c_70 = ATgetArgument(t, 2);
                      d_70 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_70;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = x_39;
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
  ATerm k_70 = NULL;
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_70 = ATgetArgument(t, 0);
          {
            ATerm c_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_40);
      t = k_70;
    }
  else
    {
      t = a_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_70;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm b_71 = NULL;
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_71);
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
static ATerm d_7 (ATerm t)
{
  ATerm y_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_74 = ATgetArgument(t, 0);
      t = y_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_74 = ATgetArgument(t, 0);
          {
            ATerm d_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_74;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_74), (ATerm) ATempty);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm j_75 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_75 = ATgetArgument(t, 0);
      t = j_75;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_75 = ATgetArgument(t, 0);
          {
            ATerm e_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_75;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, j_75);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm n_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_75);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_40);
    }
  else
    {
      t = f_40;
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            {
              ATerm n_40 = t;
              int p_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_75 = ATgetArgument(t, 0);
                      q_75 = ATgetArgument(t, 1);
                      r_75 = ATgetArgument(t, 2);
                      s_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_75;
                  t = map_1_0(i_7, t);
                  LocalPopChoice(p_40);
                }
              else
                {
                  t = n_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm z_75 = NULL;
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_75 = ATgetArgument(t, 0);
          {
            ATerm s_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_40);
      t = z_75;
    }
  else
    {
      t = q_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_75;
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm d_76 = NULL,f_76 = NULL,g_76 = NULL;
  g_76 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      f_76 = ATgetArgument(t, 0);
      t = f_76;
    }
  else
    {
      t = g_76;
    }
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_76);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm k_76 = NULL;
  k_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_76);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm n_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_76);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm v_40 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_41);
          }
        else
          {
            t = v_40;
            {
              ATerm g_41 = t;
              int h_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_76 = NULL,q_76 = NULL,k_77 = NULL,l_77 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_76 = ATgetArgument(t, 0);
                      q_76 = ATgetArgument(t, 1);
                      k_77 = ATgetArgument(t, 2);
                      l_77 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_77;
                  t = map_1_0(r_7, t);
                  LocalPopChoice(h_41);
                }
              else
                {
                  t = g_41;
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
  ATerm e_79 = NULL;
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_79 = ATgetArgument(t, 0);
          {
            ATerm k_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_41);
      t = e_79;
    }
  else
    {
      t = i_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_79;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm r_79 = NULL;
  r_79 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_79);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm s_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_79);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm n_41 = t;
        int o_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_41);
          }
        else
          {
            t = n_41;
            {
              ATerm p_41 = t;
              int q_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_79 = NULL,y_79 = NULL,d_81 = NULL,f_81 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_79 = ATgetArgument(t, 0);
                      y_79 = ATgetArgument(t, 1);
                      d_81 = ATgetArgument(t, 2);
                      f_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_81;
                  t = map_1_0(v_7, t);
                  LocalPopChoice(q_41);
                }
              else
                {
                  t = p_41;
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
  ATerm e_83 = NULL;
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_83 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_41);
      t = e_83;
    }
  else
    {
      t = r_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_83;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm h_83 = NULL;
  h_83 = t;
  {
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_83 = NULL,z_29 = NULL,b_30 = NULL,h_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            n_83 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_83);
        z_29 = t;
        t = n_83;
        t = ContextVar_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_30);
        h_23 = t;
        t = SSLsetAnnotations(h_23, z_29);
        LocalPopChoice(v_41);
      }
    else
      {
        t = u_41;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, h_83);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,u_74 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(match_cons(x_41, sym_DynRuleId_1))
        {
          ATerm z_41 = ATgetArgument(x_41, 0);
          if(match_cons(z_41, sym_RDecT_3))
            {
              q_73 = ATgetArgument(z_41, 0);
              n_73 = ATgetArgument(z_41, 1);
              o_73 = ATgetArgument(z_41, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_41 = ATgetArgument(t, 1);
        if(match_cons(y_41, sym_Rule_3))
          {
            f_74 = ATgetArgument(y_41, 0);
            j_74 = ATgetArgument(y_41, 1);
            k_74 = ATgetArgument(y_41, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_y_34;
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_34, q_73);
  t = p_12(u_74, q_73, t);
  p_73 = t;
  t = term_z_34;
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, q_73);
  t = p_12(s_74, q_73, t);
  r_73 = t;
  t = new_0_0(t);
  a_74 = t;
  t = new_0_0(t);
  g_74 = t;
  t = n_73;
  t = map_1_0(d_7, t);
  b_74 = t;
  t = o_73;
  t = map_1_0(e_7, t);
  c_74 = t;
  t = f_74;
  t = free_vars_3_0(f_7, h_7, tboundin_3_0, t);
  d_74 = t;
  t = map_1_0(n_7, t);
  r_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_74))), r_74), o_73);
  t = concat_0_0(t);
  m_73 = t;
  t = d_74;
  t = map_1_0(o_7, t);
  q_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_74))), q_74), c_74);
  t = concat_0_0(t);
  e_74 = t;
  t = f_74;
  t = dummify_0_0(t);
  i_74 = t;
  {
    ATerm a_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_74;
        if((f_74 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, g_74);
        LocalPopChoice(e_42);
      }
    else
      {
        t = a_42;
        t = i_74;
      }
  }
  h_74 = t;
  t = i_74;
  t = free_vars_3_0(p_7, q_7, tboundin_3_0, t);
  t = map_1_0(s_7, t);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_74, k_74);
  t = free_vars_3_0(t_7, u_7, tboundin_3_0, t);
  t = filter_1_0(x_7, t);
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_74, m_74);
  t = diff_0_0(t);
  n_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_74, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(n_74), (ATerm) ATmakeAppl(sym_Str_1, a_74))));
  t = v_143(t);
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, o_74), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, p_73, n_73, o_73, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_74), f_74), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_73), b_74, e_74))), term_j_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_74), (ATerm) ATmakeAppl(sym_Str_1, q_73))), term_q_42), term_j_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, q_73, n_73, o_73, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_74), f_74), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_73), b_74, e_74))), term_j_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_74), (ATerm) ATmakeAppl(sym_Str_1, q_73))), term_j_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, r_73, n_73, m_73, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(n_74), (ATerm) ATmakeAppl(sym_Str_1, a_74))), j_74, (ATerm) ATmakeAppl(sym_BA_2, k_74, (ATerm) ATmakeAppl(sym_Var_1, g_74))))));
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm p_84 = NULL,p_85 = NULL,x_85 = NULL,z_85 = NULL,a_86 = NULL,d_86 = NULL,o_86 = NULL,p_86 = NULL;
  p_85 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      x_85 = ATgetArgument(t, 0);
      p_86 = ATgetArgument(t, 1);
      t = x_85;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          z_85 = ATgetArgument(t, 0);
          p_84 = ATgetArgument(t, 1);
          {
            static ATerm y_7 (ATerm t)
            {
              ATerm n_87 = NULL,o_87 = NULL;
              n_87 = t;
              t = SSL_explode_term(n_87);
              if(match_cons(t, sym__2))
                {
                  ATerm r_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_42 = ATgetArgument(t, 1);
                    if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
                      {
                        o_87 = ATgetFirst((ATermList) s_42);
                        {
                          ATerm w_42 = (ATerm) ATgetNext((ATermList) s_42);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_87), p_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_86))));
              return(t);
            }
            t = z_85;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_86 = ATgetArgument(t, 0);
                d_86 = ATgetArgument(t, 1);
                o_86 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_86, d_86, o_86)), (ATerm) ATmakeAppl(sym_Rule_3, p_86, term_z_42, term_q_20));
            t = SplitDynamicRule_1_0(y_7, t);
          }
        }
      else
        {
          static ATerm z_7 (ATerm t)
          {
            ATerm u_87 = NULL,v_87 = NULL;
            u_87 = t;
            t = SSL_explode_term(u_87);
            if(match_cons(t, sym__2))
              {
                ATerm a_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_43) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm b_43 = ATgetArgument(t, 1);
                  if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
                    {
                      v_87 = ATgetFirst((ATermList) b_43);
                      {
                        ATerm e_43 = (ATerm) ATgetNext((ATermList) b_43);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_86))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              z_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_85;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_86 = ATgetArgument(t, 0);
              d_86 = ATgetArgument(t, 1);
              o_86 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_86, d_86, o_86)), (ATerm) ATmakeAppl(sym_Rule_3, p_86, term_z_42, term_q_20));
          t = SplitDynamicRule_1_0(z_7, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          x_85 = ATgetArgument(t, 0);
          p_86 = ATgetArgument(t, 1);
          t = x_85;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              z_85 = ATgetArgument(t, 0);
              p_84 = ATgetArgument(t, 1);
              {
                static ATerm c_8 (ATerm t)
                {
                  ATerm d_88 = NULL,e_88 = NULL,d_30 = NULL;
                  d_88 = t;
                  t = SSL_explode_term(d_88);
                  if(match_cons(t, sym__2))
                    {
                      ATerm f_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) f_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm g_43 = ATgetArgument(t, 1);
                        if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
                          {
                            e_88 = ATgetFirst((ATermList) g_43);
                            {
                              ATerm h_43 = (ATerm) ATgetNext((ATermList) g_43);
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
                      ATerm i_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) i_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm q_43 = ATgetArgument(t, 1);
                        if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
                          {
                            ATerm r_43 = ATgetFirst((ATermList) q_43);
                            ATerm s_43 = (ATerm) ATgetNext((ATermList) q_43);
                            if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
                              {
                                d_30 = ATgetFirst((ATermList) s_43);
                                {
                                  ATerm t_43 = (ATerm) ATgetNext((ATermList) s_43);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_30), e_88), p_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_86))));
                  return(t);
                }
                t = z_85;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      a_86 = ATgetArgument(t, 0);
                    d_86 = ATgetArgument(t, 1);
                    o_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_86, d_86, o_86)), p_86);
                t = SplitDynamicRule_1_0(c_8, t);
              }
            }
          else
            {
              static ATerm d_8 (ATerm t)
              {
                ATerm o_88 = NULL,r_88 = NULL,g_30 = NULL;
                o_88 = t;
                t = SSL_explode_term(o_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm c_44 = ATgetArgument(t, 1);
                      if(((ATgetType(c_44) == AT_LIST) && !(ATisEmpty(c_44))))
                        {
                          r_88 = ATgetFirst((ATermList) c_44);
                          {
                            ATerm d_44 = (ATerm) ATgetNext((ATermList) c_44);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(o_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm g_44 = ATgetArgument(t, 1);
                      if(((ATgetType(g_44) == AT_LIST) && !(ATisEmpty(g_44))))
                        {
                          ATerm h_44 = ATgetFirst((ATermList) g_44);
                          ATerm j_44 = (ATerm) ATgetNext((ATermList) g_44);
                          if(((ATgetType(j_44) == AT_LIST) && !(ATisEmpty(j_44))))
                            {
                              g_30 = ATgetFirst((ATermList) j_44);
                              {
                                ATerm l_44 = (ATerm) ATgetNext((ATermList) j_44);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_30), r_88), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_86))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  z_85 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_85;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_86 = ATgetArgument(t, 0);
                  d_86 = ATgetArgument(t, 1);
                  o_86 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_86, d_86, o_86)), p_86);
              t = SplitDynamicRule_1_0(d_8, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              x_85 = ATgetArgument(t, 0);
              p_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_85;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              z_85 = ATgetArgument(t, 0);
              p_84 = ATgetArgument(t, 1);
              {
                static ATerm e_8 (ATerm t)
                {
                  ATerm a_89 = NULL,b_89 = NULL,p_30 = NULL;
                  a_89 = t;
                  t = SSL_explode_term(a_89);
                  if(match_cons(t, sym__2))
                    {
                      ATerm m_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) m_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm n_44 = ATgetArgument(t, 1);
                        if(((ATgetType(n_44) == AT_LIST) && !(ATisEmpty(n_44))))
                          {
                            b_89 = ATgetFirst((ATermList) n_44);
                            {
                              ATerm p_44 = (ATerm) ATgetNext((ATermList) n_44);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(a_89);
                  if(match_cons(t, sym__2))
                    {
                      ATerm r_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) r_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm t_44 = ATgetArgument(t, 1);
                        if(((ATgetType(t_44) == AT_LIST) && !(ATisEmpty(t_44))))
                          {
                            ATerm v_44 = ATgetFirst((ATermList) t_44);
                            ATerm w_44 = (ATerm) ATgetNext((ATermList) t_44);
                            if(((ATgetType(w_44) == AT_LIST) && !(ATisEmpty(w_44))))
                              {
                                p_30 = ATgetFirst((ATermList) w_44);
                                {
                                  ATerm x_44 = (ATerm) ATgetNext((ATermList) w_44);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_30), b_89), p_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_86))));
                  return(t);
                }
                t = z_85;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      a_86 = ATgetArgument(t, 0);
                    d_86 = ATgetArgument(t, 1);
                    o_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_86, d_86, o_86)), p_86);
                t = SplitDynamicRule_1_0(e_8, t);
              }
            }
          else
            {
              static ATerm j_8 (ATerm t)
              {
                ATerm f_89 = NULL,g_89 = NULL,v_30 = NULL;
                f_89 = t;
                t = SSL_explode_term(f_89);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_45) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_45 = ATgetArgument(t, 1);
                      if(((ATgetType(e_45) == AT_LIST) && !(ATisEmpty(e_45))))
                        {
                          g_89 = ATgetFirst((ATermList) e_45);
                          {
                            ATerm f_45 = (ATerm) ATgetNext((ATermList) e_45);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(f_89);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_45) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm h_45 = ATgetArgument(t, 1);
                      if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
                        {
                          ATerm i_45 = ATgetFirst((ATermList) h_45);
                          ATerm k_45 = (ATerm) ATgetNext((ATermList) h_45);
                          if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
                            {
                              v_30 = ATgetFirst((ATermList) k_45);
                              {
                                ATerm n_45 = (ATerm) ATgetNext((ATermList) k_45);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_30), g_89), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_86))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  z_85 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_85;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    a_86 = ATgetArgument(t, 0);
                  {
                    ATerm o_45 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm p_45 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = p_85;
              t = SplitDynamicRule_1_0(j_8, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  static ATerm h_89 (ATerm t)
  {
    ATerm q_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_112(t);
        LocalPopChoice(s_45);
      }
    else
      {
        t = q_45;
        t = SRTS_one(h_89, t);
      }
    return(t);
  }
  t = h_89(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm s_143 (ATerm), ATerm t)
{
  static ATerm p_89 (ATerm t)
  {
    static ATerm n_8 (ATerm t)
    {
      ATerm u_45 = t;
      int w_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_143(t);
          LocalPopChoice(w_45);
        }
      else
        {
          t = u_45;
          {
            ATerm k_89 = NULL,l_89 = NULL,o_89 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                k_89 = ATgetArgument(t, 0);
                l_89 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, k_89, l_89);
            {
              static ATerm t_8 (ATerm t)
              {
                t = k_89;
                t = DeclareContextVars_0_0(t);
                t = l_89;
                t = p_89(t);
                if(((o_89 != NULL) && (o_89 != t)))
                  _fail(t);
                else
                  o_89 = t;
                return(t);
              }
              t = scope_2_0(p_8, t_8, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, k_89, not_null(o_89));
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_8, t);
    return(t);
  }
  t = p_89(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm u_89 = NULL,w_89 = NULL,x_89 = NULL,a_90 = NULL;
  a_90 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      x_89 = ATgetArgument(t, 0);
      {
        ATerm z_45 = t;
        int a_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_89;
            u_89 = t;
            t = a_90;
            LocalPopChoice(a_46);
          }
        else
          {
            t = z_45;
            t = a_90;
            u_89 = t;
            t = a_90;
          }
      }
    }
  else
    {
      t = a_90;
      u_89 = t;
      t = a_90;
    }
  t = term_f_46;
  w_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_89, term_f_46);
  t = f_12(w_8, u_89, w_89, t);
  t = a_90;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm c_90 = NULL,e_90 = NULL,f_90 = NULL,h_90 = NULL;
  h_90 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      f_90 = ATgetArgument(t, 0);
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_90;
            c_90 = t;
            t = h_90;
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            t = h_90;
            c_90 = t;
            t = h_90;
          }
      }
    }
  else
    {
      t = h_90;
      c_90 = t;
      t = h_90;
    }
  t = term_j_46;
  e_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_90, term_j_46);
  t = f_12(c_9, c_90, e_90, t);
  t = h_90;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(v_8, t);
      LocalPopChoice(n_46);
    }
  else
    {
      t = m_46;
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
  ATerm o_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_46);
    }
  else
    {
      t = o_46;
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
              ATerm t_46 = t;
              int u_46 = stack_ptr;
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
                  LocalPopChoice(u_46);
                }
              else
                {
                  t = t_46;
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
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_32 = ATgetArgument(t, 0);
          {
            ATerm y_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_46);
      t = g_32;
    }
  else
    {
      t = w_46;
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
static ATerm i_9 (ATerm t)
{
  ATerm u_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_32 = ATgetArgument(t, 0);
      t = u_32;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_32 = ATgetArgument(t, 0);
          {
            ATerm z_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_32;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm j_33 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_33 = ATgetArgument(t, 0);
      t = j_33;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_33 = ATgetArgument(t, 0);
          {
            ATerm a_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_33;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
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
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      {
        ATerm e_47 = t;
        int f_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_47);
          }
        else
          {
            t = e_47;
            {
              ATerm g_47 = t;
              int h_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,r_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_34 = ATgetArgument(t, 0);
                      n_34 = ATgetArgument(t, 1);
                      o_34 = ATgetArgument(t, 2);
                      r_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_34;
                  t = map_1_0(s_9, t);
                  LocalPopChoice(h_47);
                }
              else
                {
                  t = g_47;
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
  ATerm k_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_35 = ATgetArgument(t, 0);
          {
            ATerm n_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_47);
      t = h_35;
    }
  else
    {
      t = k_47;
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
  ATerm c_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_36 = ATgetArgument(t, 0);
      t = c_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_36 = ATgetArgument(t, 0);
          {
            ATerm q_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_36;
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
            ATerm r_47 = ATgetArgument(t, 1);
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
  ATerm t_36 = NULL;
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      if((t_36 != ATgetArgument(t, 1)))
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
  ATerm x_94 = NULL;
  x_94 = t;
  {
    ATerm s_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL,f_31 = NULL;
        t = x_94;
        t = free_vars_3_0(d_9, e_9, tboundin_3_0, t);
        c_31 = t;
        t = x_94;
        {
          ATerm u_47 = t;
          int v_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_32 = NULL;
              ATerm x_47 = t;
              int z_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm a_48 = ATgetArgument(t, 0);
                      ATerm c_48 = ATgetArgument(t, 1);
                      o_32 = ATgetArgument(t, 2);
                      {
                        ATerm d_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_47);
                  t = o_32;
                  t = map_1_0(i_9, t);
                }
              else
                {
                  t = x_47;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm e_48 = ATgetArgument(t, 0);
                      ATerm g_48 = ATgetArgument(t, 1);
                      o_32 = ATgetArgument(t, 2);
                      {
                        ATerm l_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = o_32;
                  t = map_1_0(k_9, t);
                }
              LocalPopChoice(v_47);
            }
          else
            {
              t = u_47;
              t = (ATerm) ATempty;
            }
        }
        f_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, f_31);
        t = t_11(o_9, c_31, f_31, t);
        LocalPopChoice(t_47);
      }
    else
      {
        t = s_47;
        {
          ATerm g_34 = NULL,h_34 = NULL;
          t = x_94;
          t = free_vars_3_0(q_9, r_9, tboundin_3_0, t);
          g_34 = t;
          t = x_94;
          {
            ATerm o_48 = t;
            int p_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_35 = NULL;
                ATerm q_48 = t;
                int r_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm u_48 = ATgetArgument(t, 0);
                        ATerm v_48 = ATgetArgument(t, 1);
                        r_35 = ATgetArgument(t, 2);
                        {
                          ATerm w_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_48);
                    t = r_35;
                    t = map_1_0(t_9, t);
                  }
                else
                  {
                    t = q_48;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm x_48 = ATgetArgument(t, 0);
                        ATerm z_48 = ATgetArgument(t, 1);
                        r_35 = ATgetArgument(t, 2);
                        {
                          ATerm a_49 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = r_35;
                    t = map_1_0(u_9, t);
                  }
                LocalPopChoice(p_48);
              }
            else
              {
                t = o_48;
                t = (ATerm) ATempty;
              }
          }
          h_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_34, h_34);
          t = t_11(v_9, g_34, h_34, t);
        }
      }
  }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_31;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_95 = ATgetFirst((ATermList) t);
      q_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_95, q_95);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_49 = ATgetArgument(t, 0);
      if(match_cons(c_49, sym__2))
        {
          r_95 = ATgetArgument(c_49, 0);
          s_95 = ATgetArgument(c_49, 1);
        }
      else
        _fail(t);
      {
        ATerm e_49 = ATgetArgument(t, 1);
        if(match_cons(e_49, sym__2))
          {
            t_95 = ATgetArgument(e_49, 0);
            u_95 = ATgetArgument(e_49, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_95), r_95), (ATerm) ATinsert(CheckATermList(u_95), s_95));
  return(t);
}
static ATerm m_11 (ATerm c_84, ATerm b_84, ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL;
  static ATerm x_9 (ATerm t)
  {
    t = c_84;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = c_84;
    {
      static ATerm y_9 (ATerm t)
      {
        ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,m_23 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            j_95 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_95;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(z_9, a_10, t_10, _id, t);
        o_95 = t;
        if(match_cons(t, sym__2))
          {
            l_95 = ATgetArgument(t, 0);
            m_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_95);
        k_95 = t;
        t = m_95;
        t = concat_0_0(t);
        n_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_95, n_95);
        m_23 = t;
        t = SSLsetAnnotations(m_23, k_95);
        if(match_cons(t, sym__2))
          {
            if(((g_95 != NULL) && (g_95 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              g_95 = ATgetArgument(t, 0);
            if(((f_95 != NULL) && (f_95 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              f_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, g_95);
        return(t);
      }
      t = split_dynamic_rule_1_0(y_9, t);
    }
    if(((h_95 != NULL) && (h_95 != t)))
      _fail(t);
    else
      h_95 = t;
    return(t);
  }
  t = scope_2_0(w_9, x_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_95)), not_null(h_95)), b_84);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t)
{
  static ATerm w_95 (ATerm t)
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_109(t);
        t = w_95(t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        t = x_109(t);
      }
    return(t);
  }
  t = w_95(t);
  return(t);
}
ATerm listtd_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  static ATerm s_96 (ATerm t)
  {
    ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
    t = s_118(t);
    p_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_96;
      }
    else
      {
        ATerm y_36 = NULL,b_37 = NULL,s_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_96 = ATgetFirst((ATermList) t);
            r_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_96);
        y_36 = t;
        t = r_96;
        t = s_96(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(b_37), q_96);
        s_23 = t;
        t = SSLsetAnnotations(s_23, y_36);
      }
    return(t);
  }
  t = s_96(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,m_97 = NULL,n_97 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      m_97 = ATgetArgument(t, 0);
      n_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_97 = ATgetFirst((ATermList) t);
      h_97 = (ATerm) ATgetNext((ATermList) t);
      t = f_97;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          g_97 = ATgetArgument(t, 0);
          e_97 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, g_97, e_97), (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_97, n_97))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, g_97)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              g_97 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_97, n_97)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, g_97)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_97;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL,n_98 = NULL;
  t = term_c_37;
  l_98 = t;
  t = (ATerm) ATinsert(ATempty, term_m_49);
  n_98 = t;
  t = SSL_printnl(l_98, n_98);
  t = term_e_37;
  k_98 = t;
  t = SSL_exit(k_98);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm o_98 = NULL,r_98 = NULL,t_98 = NULL;
  t = term_c_37;
  r_98 = t;
  t = (ATerm) ATinsert(ATempty, term_n_49);
  t_98 = t;
  t = SSL_printnl(r_98, t_98);
  t = term_e_37;
  o_98 = t;
  t = SSL_exit(o_98);
  return(t);
}
static ATerm k_101 (ATerm d_100, ATerm e_100, ATerm f_100, ATerm g_100, ATerm j_100, ATerm k_100, ATerm l_100, ATerm t)
{
  t = l_100;
  {
    ATerm o_49 = t;
    if((PushChoice() == 0))
      {
        t = j_100;
        if(match_cons(t, sym_Op_2))
          {
            ATerm q_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_49) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_49 = ATgetArgument(t, 1);
              if(((ATgetType(t_49) != AT_LIST) || !(ATisEmpty(t_49))))
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
        t = o_49;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_100, e_100, f_100)), (ATerm) ATmakeAppl(sym_Rule_3, g_100, j_100, k_100));
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_u_49;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm x_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
  b_101 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      c_101 = ATgetArgument(t, 0);
      d_101 = ATgetArgument(t, 1);
      e_101 = ATgetArgument(t, 2);
      f_101 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_101;
  if(match_cons(t, sym_Rule_3))
    {
      g_101 = ATgetArgument(t, 0);
      h_101 = ATgetArgument(t, 1);
      i_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_101;
  if(match_cons(t, sym_Op_2))
    {
      x_100 = ATgetArgument(t, 0);
      a_101 = ATgetArgument(t, 1);
      t = a_101;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_100;
          if(match_string(t, "Undefined"))
            {
              ATerm v_49 = t;
              int w_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_101;
                  {
                    ATerm x_49 = t;
                    int y_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_101;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(y_49);
                      }
                    else
                      {
                        t = x_49;
                        {
                          ATerm t_38 = NULL,u_38 = NULL;
                          t = term_c_37;
                          t_38 = t;
                          t = (ATerm) ATinsert(ATempty, term_z_49);
                          u_38 = t;
                          t = SSL_printnl(t_38, u_38);
                          t = b_101;
                          t = debug_1_0(c_11, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, c_101, d_101, e_101)), g_101);
                  LocalPopChoice(w_49);
                }
              else
                {
                  t = v_49;
                  t = k_101(c_101, d_101, e_101, g_101, h_101, i_101, b_101, t);
                }
            }
          else
            {
              t = k_101(c_101, d_101, e_101, g_101, h_101, i_101, b_101, t);
            }
        }
      else
        {
          t = x_100;
          t = k_101(c_101, d_101, e_101, g_101, h_101, i_101, b_101, t);
        }
    }
  else
    {
      t = k_101(c_101, d_101, e_101, g_101, h_101, i_101, b_101, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm x_116 (ATerm), ATerm t)
{
  ATerm m_101 = NULL,o_101 = NULL,p_101 = NULL,q_101 = NULL;
  m_101 = t;
  t = x_116(t);
  o_101 = t;
  t = term_c_37;
  p_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_101), o_101);
  q_101 = t;
  t = SSL_printnl(p_101, q_101);
  t = m_101;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_u_49;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL;
  y_101 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm a_50 = ATgetArgument(t, 0);
      if(match_cons(a_50, sym_DynRuleId_1))
        {
          ATerm c_50 = ATgetArgument(a_50, 0);
          if(match_cons(c_50, sym_RDecT_3))
            {
              r_101 = ATgetArgument(c_50, 0);
              s_101 = ATgetArgument(c_50, 1);
              v_101 = ATgetArgument(c_50, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm b_50 = ATgetArgument(t, 1);
        if(match_cons(b_50, sym_Rule_3))
          {
            w_101 = ATgetArgument(b_50, 0);
            {
              ATerm d_50 = ATgetArgument(b_50, 1);
              if(match_cons(d_50, sym_Op_2))
                {
                  ATerm e_50 = ATgetArgument(d_50, 0);
                  if((ATgetSymbol((ATermAppl) e_50) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm f_50 = ATgetArgument(d_50, 1);
                    if(((ATgetType(f_50) != AT_LIST) || !(ATisEmpty(f_50))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            x_101 = ATgetArgument(b_50, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm g_50 = t;
    int h_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_101;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(h_50);
      }
    else
      {
        t = g_50;
        {
          ATerm b_102 = NULL,c_102 = NULL;
          t = term_c_37;
          b_102 = t;
          t = (ATerm) ATinsert(ATempty, term_z_49);
          c_102 = t;
          t = SSL_printnl(b_102, c_102);
          t = y_101;
          t = debug_1_0(g_11, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_101, s_101, v_101)), w_101);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_102 = NULL;
      f_102 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm k_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_102;
      LocalPopChoice(j_50);
      {
        ATerm g_102 = NULL,h_102 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            g_102 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_102;
        t = map_1_0(p_11, t);
        h_102 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, h_102);
      }
    }
  else
    {
      t = i_50;
      {
        ATerm l_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_102 = NULL;
            k_102 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm n_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_102;
            LocalPopChoice(m_50);
            {
              ATerm l_102 = NULL,m_102 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  l_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_102;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              m_102 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, m_102);
            }
          }
        else
          {
            t = l_50;
            {
              ATerm o_50 = t;
              int q_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_102 = NULL;
                  n_102 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm r_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_102;
                  LocalPopChoice(q_50);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = o_50;
                  {
                    ATerm s_50 = t;
                    int t_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_102 = NULL;
                        o_102 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm u_50 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = o_102;
                        LocalPopChoice(t_50);
                        t = UpgradeExtendOverrideDynamicRules_0_0(t);
                      }
                    else
                      {
                        t = s_50;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm v_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(w_50);
    }
  else
    {
      t = v_50;
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(o_11, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = Cons_2_0(s_11, w_11, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL,u_103 = NULL,u_23 = NULL;
  u_103 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_103);
  o_103 = t;
  t = p_103;
  t = topdown_1_0(y_11, t);
  t = listtd_1_0(z_11, t);
  q_103 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_103);
  u_23 = t;
  t = SSLsetAnnotations(u_23, o_103);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_50 = t;
      int a_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(a_51);
        }
      else
        {
          t = z_50;
          {
            ATerm w_103 = NULL,x_103 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                w_103 = ATgetArgument(t, 0);
                x_103 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_51, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_103), (ATerm) ATmakeAppl(sym_Str_1, w_103)));
          }
        }
      LocalPopChoice(y_50);
    }
  else
    {
      t = x_50;
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = repeat_2_0(b_12, _id, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_104 = ATgetFirst((ATermList) t);
      g_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_11(f_104, g_104, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL,z_102 = NULL,a_103 = NULL,h_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,w_23 = NULL,v_23 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  m_103 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_103);
  v_102 = t;
  t = w_102;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_103 = ATgetFirst((ATermList) t);
      h_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_102);
  z_102 = t;
  t = h_103;
  t = Cons_2_0(_id, q_11, t);
  k_103 = t;
  t = (ATerm) ATinsert(CheckATermList(k_103), a_103);
  v_23 = t;
  t = SSLsetAnnotations(v_23, z_102);
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_103);
  w_23 = t;
  t = SSLsetAnnotations(w_23, v_102);
  return(t);
}
ATerm tboundin_3_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL;
  m_109 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_109 = ATgetArgument(t, 0);
      j_109 = ATgetArgument(t, 1);
      {
        ATerm t_39 = NULL,w_39 = NULL,y_39 = NULL,a_24 = NULL;
        t = SSLgetAnnotations(m_109);
        t_39 = t;
        t = n_109;
        t = d_143(t);
        w_39 = t;
        t = j_109;
        t = b_143(t);
        y_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_39, y_39);
        a_24 = t;
        t = SSLsetAnnotations(a_24, t_39);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          n_109 = ATgetArgument(t, 0);
          j_109 = ATgetArgument(t, 1);
          k_109 = ATgetArgument(t, 2);
          {
            ATerm o_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,b_24 = NULL;
            t = SSLgetAnnotations(m_109);
            o_40 = t;
            t = n_109;
            t = d_143(t);
            c_41 = t;
            t = j_109;
            t = d_143(t);
            d_41 = t;
            t = k_109;
            t = d_143(t);
            e_41 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, c_41, d_41, e_41);
            b_24 = t;
            t = SSLsetAnnotations(b_24, o_40);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_109 = ATgetArgument(t, 0);
              j_109 = ATgetArgument(t, 1);
              k_109 = ATgetArgument(t, 2);
              l_109 = ATgetArgument(t, 3);
              {
                ATerm w_41 = NULL,o_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,e_24 = NULL;
                t = SSLgetAnnotations(m_109);
                w_41 = t;
                t = n_109;
                t = d_143(t);
                o_42 = t;
                t = j_109;
                t = d_143(t);
                t_42 = t;
                t = k_109;
                t = d_143(t);
                u_42 = t;
                t = l_109;
                t = b_143(t);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_42, t_42, u_42, v_42);
                e_24 = t;
                t = SSLsetAnnotations(e_24, w_41);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  n_109 = ATgetArgument(t, 0);
                  j_109 = ATgetArgument(t, 1);
                  k_109 = ATgetArgument(t, 2);
                  l_109 = ATgetArgument(t, 3);
                  {
                    ATerm p_43 = NULL,u_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,i_24 = NULL;
                    t = SSLgetAnnotations(m_109);
                    p_43 = t;
                    t = n_109;
                    t = d_143(t);
                    u_43 = t;
                    t = j_109;
                    t = d_143(t);
                    w_43 = t;
                    t = k_109;
                    t = d_143(t);
                    x_43 = t;
                    t = l_109;
                    t = b_143(t);
                    y_43 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_43, w_43, x_43, y_43);
                    i_24 = t;
                    t = SSLsetAnnotations(i_24, p_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      n_109 = ATgetArgument(t, 0);
                      {
                        ATerm i_44 = NULL,k_44 = NULL,v_24 = NULL;
                        t = SSLgetAnnotations(m_109);
                        i_44 = t;
                        t = n_109;
                        t = b_143(t);
                        k_44 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, k_44);
                        v_24 = t;
                        t = SSLsetAnnotations(v_24, i_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          n_109 = ATgetArgument(t, 0);
                          {
                            ATerm s_44 = NULL,u_44 = NULL,f_25 = NULL;
                            t = SSLgetAnnotations(m_109);
                            s_44 = t;
                            t = n_109;
                            t = b_143(t);
                            u_44 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_44);
                            f_25 = t;
                            t = SSLsetAnnotations(f_25, s_44);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              n_109 = ATgetArgument(t, 0);
                              {
                                ATerm a_45 = NULL,d_45 = NULL,g_25 = NULL;
                                t = SSLgetAnnotations(m_109);
                                a_45 = t;
                                t = n_109;
                                t = b_143(t);
                                d_45 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, d_45);
                                g_25 = t;
                                t = SSLsetAnnotations(g_25, a_45);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  n_109 = ATgetArgument(t, 0);
                                  {
                                    ATerm j_45 = NULL,l_45 = NULL,h_25 = NULL;
                                    t = SSLgetAnnotations(m_109);
                                    j_45 = t;
                                    t = n_109;
                                    t = b_143(t);
                                    l_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, l_45);
                                    h_25 = t;
                                    t = SSLsetAnnotations(h_25, j_45);
                                  }
                                }
                              else
                                {
                                  ATerm t_45 = NULL,v_45 = NULL,i_25 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      n_109 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(m_109);
                                  t_45 = t;
                                  t = n_109;
                                  t = b_143(t);
                                  v_45 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_45);
                                  i_25 = t;
                                  t = SSLsetAnnotations(i_25, t_45);
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
static ATerm c_12 (ATerm t)
{
  ATerm t_110 = NULL;
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_110 = ATgetArgument(t, 0);
          {
            ATerm f_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_51);
      t = t_110;
    }
  else
    {
      t = d_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_110;
    }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm b_111 = NULL;
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_111 = ATgetArgument(t, 0);
          {
            ATerm i_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_51);
      t = b_111;
    }
  else
    {
      t = g_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_111;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm i_110 = NULL;
  ATerm j_51 = t;
  int k_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm l_51 = ATgetArgument(t, 0);
          ATerm m_51 = ATgetArgument(t, 1);
          i_110 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(k_51);
      t = i_110;
      t = map_1_0(c_12, t);
    }
  else
    {
      t = j_51;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm n_51 = ATgetArgument(t, 0);
          ATerm o_51 = ATgetArgument(t, 1);
          i_110 = ATgetArgument(t, 2);
          {
            ATerm p_51 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_110;
      t = map_1_0(i_12, t);
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm s_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_111);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_51);
    }
  else
    {
      t = q_51;
      {
        ATerm s_51 = t;
        int t_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_111 = ATgetArgument(t, 0);
                      v_111 = ATgetArgument(t, 1);
                      w_111 = ATgetArgument(t, 2);
                      x_111 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_111;
                  t = map_1_0(g_14, t);
                  LocalPopChoice(v_51);
                }
              else
                {
                  t = u_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm g_112 = NULL;
  ATerm w_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_112 = ATgetArgument(t, 0);
          {
            ATerm y_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_51);
      t = g_112;
    }
  else
    {
      t = w_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_112;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm k_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_112);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm a_52 = t;
  int b_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_52);
    }
  else
    {
      t = a_52;
      {
        ATerm c_52 = t;
        int d_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm m_112 = NULL,n_112 = NULL,q_112 = NULL,r_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_112 = ATgetArgument(t, 0);
                      n_112 = ATgetArgument(t, 1);
                      q_112 = ATgetArgument(t, 2);
                      r_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_112;
                  t = map_1_0(m_14, t);
                  LocalPopChoice(f_52);
                }
              else
                {
                  t = e_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm y_112 = NULL;
  ATerm g_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_112 = ATgetArgument(t, 0);
          {
            ATerm i_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_52);
      t = y_112;
    }
  else
    {
      t = g_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_112;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm c_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_113);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_52);
    }
  else
    {
      t = j_52;
      {
        ATerm l_52 = t;
        int m_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_113 = ATgetArgument(t, 0);
                      f_113 = ATgetArgument(t, 1);
                      g_113 = ATgetArgument(t, 2);
                      h_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_113;
                  t = map_1_0(p_14, t);
                  LocalPopChoice(o_52);
                }
              else
                {
                  t = n_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm o_113 = NULL;
  ATerm p_52 = t;
  int q_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_113 = ATgetArgument(t, 0);
          {
            ATerm r_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_52);
      t = o_113;
    }
  else
    {
      t = p_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_113;
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm s_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_113);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm s_52 = t;
  int t_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_52);
    }
  else
    {
      t = s_52;
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_113 = ATgetArgument(t, 0);
                      v_113 = ATgetArgument(t, 1);
                      w_113 = ATgetArgument(t, 2);
                      x_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_113;
                  t = map_1_0(w_14, t);
                  LocalPopChoice(x_52);
                }
              else
                {
                  t = w_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm e_114 = NULL;
  ATerm y_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_114 = ATgetArgument(t, 0);
          {
            ATerm c_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_53);
      t = e_114;
    }
  else
    {
      t = y_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_114;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm i_114 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_114);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_53);
    }
  else
    {
      t = d_53;
      {
        ATerm f_53 = t;
        int g_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_114 = ATgetArgument(t, 0);
                      l_114 = ATgetArgument(t, 1);
                      m_114 = ATgetArgument(t, 2);
                      n_114 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_114;
                  t = map_1_0(a_15, t);
                  LocalPopChoice(i_53);
                }
              else
                {
                  t = h_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm u_114 = NULL;
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_114 = ATgetArgument(t, 0);
          {
            ATerm l_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_53);
      t = u_114;
    }
  else
    {
      t = j_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_114;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_111 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_111 = ATgetArgument(t, 0);
      t = q_111;
      t = free_vars_3_0(t_12, i_13, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_111 = ATgetArgument(t, 0);
          t = q_111;
          t = free_vars_3_0(h_14, j_14, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_111 = ATgetArgument(t, 0);
              t = q_111;
              t = free_vars_3_0(n_14, o_14, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_111 = ATgetArgument(t, 0);
                  t = q_111;
                  t = free_vars_3_0(s_14, v_14, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_111 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_111;
                  t = free_vars_3_0(y_14, z_14, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm i_115 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_115);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm m_53 = t;
  int n_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_53);
    }
  else
    {
      t = m_53;
      {
        ATerm o_53 = t;
        int p_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_115 = ATgetArgument(t, 0);
                      l_115 = ATgetArgument(t, 1);
                      m_115 = ATgetArgument(t, 2);
                      n_115 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_115;
                  t = map_1_0(i_15, t);
                  LocalPopChoice(r_53);
                }
              else
                {
                  t = q_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm u_115 = NULL;
  ATerm s_53 = t;
  int t_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_115 = ATgetArgument(t, 0);
          {
            ATerm x_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_53);
      t = u_115;
    }
  else
    {
      t = s_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_115;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_115 = NULL,f_115 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_115 = ATgetArgument(t, 0);
      t = f_115;
      if(match_cons(t, sym_Rule_3))
        {
          b_115 = ATgetArgument(t, 0);
          {
            ATerm y_53 = ATgetArgument(t, 1);
          }
          {
            ATerm d_54 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_115;
      t = free_vars_3_0(b_15, f_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_115 = ATgetArgument(t, 0);
          {
            ATerm e_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_115;
    }
  return(t);
}
static ATerm t_11 (ATerm t_121 (ATerm), ATerm o_30, ATerm n_30, ATerm t)
{
  static ATerm n_116 (ATerm t)
  {
    ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL;
    i_116 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_116 = ATgetFirst((ATermList) t);
            k_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_54 = t;
          int j_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_116;
              {
                static ATerm j_15 (ATerm t)
                {
                  t = n_30;
                  return(t);
                }
                t = u_11(t_121, j_15, j_116, k_116, t);
              }
              t = n_116(t);
              LocalPopChoice(j_54);
            }
          else
            {
              t = h_54;
              {
                ATerm k_46 = NULL,p_46 = NULL,z_25 = NULL;
                t = SSLgetAnnotations(i_116);
                k_46 = t;
                t = k_116;
                t = n_116(t);
                p_46 = t;
                t = (ATerm) ATinsert(CheckATermList(p_46), j_116);
                z_25 = t;
                t = SSLsetAnnotations(z_25, k_46);
              }
            }
        }
      }
    return(t);
  }
  t = o_30;
  t = n_116(t);
  return(t);
}
static ATerm u_11 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm s_30, ATerm r_30, ATerm t)
{
  t = x_121(t);
  {
    static ATerm k_15 (ATerm t)
    {
      ATerm r_116 = NULL;
      r_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_30, r_116);
      t = w_121(t);
      return(t);
    }
    t = fetch_1_0(k_15, t);
  }
  t = r_30;
  return(t);
}
static ATerm v_11 (ATerm o_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  static ATerm m_117 (ATerm t)
  {
    ATerm e_117 = NULL,f_117 = NULL,h_117 = NULL;
    e_117 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_117;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_117 = ATgetFirst((ATermList) t);
            h_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_54 = t;
          int l_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_117;
              {
                static ATerm l_15 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = u_11(o_121, l_15, f_117, h_117, t);
              }
              t = m_117(t);
              LocalPopChoice(l_54);
            }
          else
            {
              t = k_54;
              {
                ATerm l_47 = NULL,y_47 = NULL,b_26 = NULL;
                t = SSLgetAnnotations(e_117);
                l_47 = t;
                t = h_117;
                t = m_117(t);
                y_47 = t;
                t = (ATerm) ATinsert(CheckATermList(y_47), f_117);
                b_26 = t;
                t = SSLsetAnnotations(b_26, l_47);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = m_117(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t)
{
  static ATerm w_117 (ATerm t)
  {
    ATerm n_54 = t;
    int o_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_119(t);
        LocalPopChoice(o_54);
      }
    else
      {
        t = n_54;
        {
          ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,u_117 = NULL,v_117 = NULL,l_26 = NULL;
          t = n_119(t);
          v_117 = t;
          if(match_cons(t, sym__2))
            {
              p_117 = ATgetArgument(t, 0);
              q_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_117);
          o_117 = t;
          t = p_117;
          t = p_119(t);
          r_117 = t;
          t = q_117;
          t = w_117(t);
          u_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_117, u_117);
          l_26 = t;
          t = SSLsetAnnotations(l_26, o_117);
          t = o_119(t);
        }
      }
    return(t);
  }
  t = w_117(t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_54 = ATgetArgument(t, 0);
      if(((ATgetType(p_54) != AT_LIST) || !(ATisEmpty(p_54))))
        _fail(t);
      {
        ATerm q_54 = ATgetArgument(t, 1);
        if(((ATgetType(q_54) != AT_LIST) || !(ATisEmpty(q_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm f_118 = NULL,g_118 = NULL,h_118 = NULL,i_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_54 = ATgetArgument(t, 0);
      if(((ATgetType(u_54) == AT_LIST) && !(ATisEmpty(u_54))))
        {
          f_118 = ATgetFirst((ATermList) u_54);
          g_118 = (ATerm) ATgetNext((ATermList) u_54);
        }
      else
        _fail(t);
      {
        ATerm w_54 = ATgetArgument(t, 1);
        if(((ATgetType(w_54) == AT_LIST) && !(ATisEmpty(w_54))))
          {
            h_118 = ATgetFirst((ATermList) w_54);
            i_118 = (ATerm) ATgetNext((ATermList) w_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_118, h_118), (ATerm) ATmakeAppl(sym__2, g_118, i_118));
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL;
  if(match_cons(t, sym__2))
    {
      j_118 = ATgetArgument(t, 0);
      k_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_118), j_118);
  return(t);
}
static ATerm a_12 (ATerm t_673, ATerm y_673, ATerm x_66, ATerm t)
{
  ATerm y_117 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL;
  t = SSL_explode_term(y_673);
  if(match_cons(t, sym__2))
    {
      y_117 = ATgetArgument(t, 0);
      c_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_673);
  if(match_cons(t, sym__2))
    {
      if((y_117 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_118, c_118);
  t = genzip_4_0(m_15, n_15, o_15, _id, t);
  d_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_118, x_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t)
{
  static ATerm m_118 (ATerm t)
  {
    ATerm x_54 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_110(t);
        LocalPopChoice(b_55);
      }
    else
      {
        t = x_54;
        t = o_110(t);
        t = m_118(t);
      }
    return(t);
  }
  t = m_118(t);
  return(t);
}
ATerm for_3_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t)
{
  t = q_110(t);
  t = while_not_2_0(r_110, s_110, t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm v_118 = NULL;
  v_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_118);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,o_26 = NULL;
  z_118 = t;
  if(match_cons(t, sym__2))
    {
      x_118 = ATgetArgument(t, 0);
      y_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_118);
  w_118 = t;
  t = y_118;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_118, y_118);
  o_26 = t;
  t = SSLsetAnnotations(o_26, w_118);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL;
  x_119 = t;
  if(match_cons(t, sym__2))
    {
      y_119 = ATgetArgument(t, 0);
      z_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_120 = ATgetFirst((ATermList) t);
      b_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_55 = t;
        int e_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_120(y_119, z_119, x_119, t);
            LocalPopChoice(e_55);
          }
        else
          {
            t = c_55;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_119), a_120), b_120);
          }
      }
    }
  else
    {
      t = l_120(y_119, z_119, x_119, t);
    }
  return(t);
}
static ATerm l_120 (ATerm a_119, ATerm b_119, ATerm c_119, ATerm t)
{
  ATerm d_119 = NULL,g_119 = NULL,p_26 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL,r_119 = NULL;
  t = SSLgetAnnotations(c_119);
  d_119 = t;
  t = b_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_119 = ATgetFirst((ATermList) t);
      r_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_119;
  if(match_cons(t, sym__2))
    {
      k_119 = ATgetArgument(t, 0);
      l_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_119;
        if((k_119 != t))
          {
            _fail(t);
          }
        t = r_119;
        LocalPopChoice(g_55);
      }
    else
      {
        t = f_55;
        t = b_119;
        t = a_12(k_119, l_119, r_119, t);
      }
  }
  g_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_119, g_119);
  p_26 = t;
  t = SSLsetAnnotations(p_26, d_119);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm k_120 = NULL;
  if(match_cons(t, sym__2))
    {
      k_120 = ATgetArgument(t, 0);
      if((k_120 != ATgetArgument(t, 1)))
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
  ATerm h_55 = t;
  int k_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_15, q_15, r_15, t);
      LocalPopChoice(k_55);
    }
  else
    {
      t = h_55;
      {
        ATerm f_120 = NULL,g_120 = NULL,h_120 = NULL;
        f_120 = t;
        if(match_cons(t, sym__2))
          {
            g_120 = ATgetArgument(t, 0);
            h_120 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_120;
        t = v_11(w_15, g_120, h_120, t);
      }
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      t_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11(c_16, s_48, t_48, t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      if((d_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm l_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__2))
    {
      l_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11(g_16, l_49, r_49, t);
  return(t);
}
static ATerm g_16 (ATerm t)
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
ATerm free_vars_3_0 (ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm q_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm z_120 (ATerm t)
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_140(t);
        LocalPopChoice(o_55);
      }
    else
      {
        t = n_55;
        {
          ATerm p_55 = t;
          int q_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_120 = NULL,o_120 = NULL,j_48 = NULL,k_48 = NULL;
              n_120 = t;
              t = p_140(t);
              o_120 = t;
              t = n_120;
              {
                static ATerm x_15 (ATerm t)
                {
                  ATerm q_120 = NULL;
                  t = z_120(t);
                  q_120 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_120, o_120);
                  t = diff_0_0(t);
                  return(t);
                }
                t = q_140(x_15, z_120, z_15, t);
              }
              k_48 = t;
              t = SSL_explode_term(k_48);
              if(match_cons(t, sym__2))
                {
                  ATerm s_55 = ATgetArgument(t, 0);
                  j_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_48;
              t = foldr_3_0(a_16, b_16, _id, t);
              LocalPopChoice(q_55);
            }
          else
            {
              t = p_55;
              {
                ATerm f_49 = NULL,g_49 = NULL;
                g_49 = t;
                t = SSL_explode_term(g_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_55 = ATgetArgument(t, 0);
                    f_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_49;
                t = foldr_3_0(d_16, f_16, z_120, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_120(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  static ATerm h_16 (ATerm t)
  {
    t = bottomup_1_0(x_110, t);
    return(t);
  }
  t = SRTS_all(h_16, t);
  t = x_110(t);
  return(t);
}
static ATerm e_12 (ATerm r_60, ATerm s_60, ATerm t)
{
  ATerm a_121 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_60, s_60);
  t = x_12(r_60, s_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_121 = ATgetFirst((ATermList) t);
      {
        ATerm v_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_121;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm q_121 = NULL,r_121 = NULL;
  q_121 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL;
        t = term_a_56;
        p_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_56, q_121);
        t = e_12(p_50, q_121, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm b_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_56) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, r_121, (ATerm) ATempty);
        LocalPopChoice(z_55);
      }
    else
      {
        t = w_55;
        {
          ATerm z_51 = NULL;
          t = term_a_56;
          z_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_56, q_121);
          t = e_12(z_51, q_121, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm c_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_56) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, r_121, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  static ATerm y_121 (ATerm t)
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_112(t);
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        t = SRTS_all(y_121, t);
      }
    return(t);
  }
  t = y_121(t);
  return(t);
}
static ATerm f_12 (ATerm r_130 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL;
  c_122 = t;
  t = r_130(t);
  z_121 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_121, q_44, o_44);
  t = y_12(z_121, q_44, o_44, t);
  {
    ATerm f_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_122 = NULL;
        t = term_k_56;
        h_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_121, term_k_56);
        t = x_12(z_121, h_122, t);
        LocalPopChoice(j_56);
      }
    else
      {
        t = f_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_122 = ATgetFirst((ATermList) t);
      b_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_121, term_k_56, (ATerm) ATinsert(CheckATermList(b_122), (ATerm) ATinsert(CheckATermList(a_122), q_44)));
  t = lookup_table_0_1(z_121, t);
  g_122 = t;
  t = term_k_56;
  d_122 = t;
  t = (ATerm) ATinsert(CheckATermList(b_122), (ATerm) ATinsert(CheckATermList(a_122), q_44));
  e_122 = t;
  t = g_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(d_122, e_122, f_122, t);
  t = c_122;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_a_56;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_a_56;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm l_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      n_122 = ATgetArgument(t, 0);
      o_122 = ATgetArgument(t, 1);
      l_122 = ATgetArgument(t, 2);
      {
        ATerm s_122 = NULL,t_122 = NULL;
        t = o_122;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, n_122);
        s_122 = t;
        t = term_m_56;
        t_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_122), term_m_56);
        t = f_12(i_16, s_122, t_122, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, n_122, (ATerm)ATempty, l_122);
      }
    }
  else
    {
      ATerm w_122 = NULL,x_122 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          n_122 = ATgetArgument(t, 0);
          o_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_122;
      if(match_cons(t, sym_ConstType_1))
        {
          p_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, n_122);
      w_122 = t;
      t = term_q_56;
      x_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_122), term_q_56);
      t = f_12(j_16, w_122, x_122, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_122, (ATerm) ATmakeAppl(sym_ConstType_1, p_122));
    }
  return(t);
}
static ATerm g_12 (ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm b_123 = NULL,c_123 = NULL;
  c_123 = t;
  {
    ATerm t_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_60, m_60);
        t = x_12(l_60, m_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_56 = ATgetFirst((ATermList) t);
            b_123 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_56);
        {
          ATerm d_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, l_60, m_60, b_123);
          t = lookup_table_0_1(l_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_123 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_13(m_60, b_123, d_123, t);
          t = (ATerm) ATmakeAppl(sym__3, l_60, m_60, b_123);
        }
      }
    else
      {
        t = t_56;
        {
          ATerm f_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, l_60, m_60);
          t = lookup_table_0_1(l_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_123 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_12(m_60, f_123, t);
          t = (ATerm) ATmakeAppl(sym__2, l_60, m_60);
        }
      }
  }
  t = c_123;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL,n_123 = NULL;
  k_123 = t;
  t = o_130(t);
  j_123 = t;
  {
    ATerm b_57 = t;
    int d_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_123 = NULL;
        t = term_k_56;
        o_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_123, term_k_56);
        t = x_12(j_123, o_123, t);
        LocalPopChoice(d_57);
      }
    else
      {
        t = b_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_123 = ATgetFirst((ATermList) t);
      h_123 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_123, term_k_56, h_123);
  t = lookup_table_0_1(j_123, t);
  n_123 = t;
  t = term_k_56;
  l_123 = t;
  t = n_123;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(l_123, h_123, m_123, t);
  t = i_123;
  {
    static ATerm l_16 (ATerm t)
    {
      ATerm p_123 = NULL;
      p_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_123, p_123);
      t = g_12(j_123, p_123, t);
      return(t);
    }
    t = map_1_0(l_16, t);
  }
  t = k_123;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t)
{
  ATerm e_57 = t;
  int f_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_109(t);
      t = t_109(t);
      LocalPopChoice(f_57);
    }
  else
    {
      t = e_57;
      t = t_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL,x_123 = NULL;
  s_123 = t;
  t = n_130(t);
  r_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_123, term_k_56);
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_124 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_57 = ATgetArgument(t, 0);
            ATerm j_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_56;
        b_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_123, term_k_56);
        t = x_12(r_123, b_124, t);
        LocalPopChoice(h_57);
      }
    else
      {
        t = g_57;
        t = (ATerm) ATempty;
      }
  }
  t_123 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_123, term_k_56, (ATerm) ATinsert(CheckATermList(t_123), (ATerm) ATempty));
  t = lookup_table_0_1(r_123, t);
  x_123 = t;
  t = term_k_56;
  u_123 = t;
  t = (ATerm) ATinsert(CheckATermList(t_123), (ATerm) ATempty);
  v_123 = t;
  t = x_123;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(u_123, v_123, w_123, t);
  t = s_123;
  return(t);
}
ATerm scope_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t)
{
  static ATerm m_16 (ATerm t)
  {
    t = end_scope_1_0(p_130, t);
    return(t);
  }
  t = begin_scope_1_0(p_130, t);
  t = restore_always_2_0(q_130, m_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_a_56;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm g_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL,h_27 = NULL;
  o_124 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_124);
  g_124 = t;
  t = m_124;
  t = map_1_0(p_16, t);
  n_124 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_124);
  h_27 = t;
  t = SSLsetAnnotations(h_27, g_124);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm b_125 = NULL,c_125 = NULL;
  c_125 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      b_125 = ATgetArgument(t, 0);
      {
        ATerm m_57 = t;
        int n_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_52 = NULL,b_53 = NULL,w_26 = NULL;
            t = SSLgetAnnotations(c_125);
            z_52 = t;
            t = b_125;
            t = map_1_0(q_16, t);
            b_53 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, b_53);
            w_26 = t;
            t = SSLsetAnnotations(w_26, z_52);
            LocalPopChoice(n_57);
          }
        else
          {
            t = m_57;
            t = c_125;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          b_125 = ATgetArgument(t, 0);
          {
            ATerm o_57 = t;
            int p_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_53 = NULL,c_54 = NULL,g_27 = NULL;
                t = SSLgetAnnotations(c_125);
                w_53 = t;
                t = b_125;
                t = map_1_0(r_16, t);
                c_54 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, c_54);
                g_27 = t;
                t = SSLsetAnnotations(g_27, w_53);
                LocalPopChoice(p_57);
              }
            else
              {
                t = o_57;
                t = c_125;
              }
          }
        }
      else
        {
          t = c_125;
        }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm q_57 = t;
  int r_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(r_57);
    }
  else
    {
      t = q_57;
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
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(n_16, o_16, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_125 = NULL,k_125 = NULL,m_125 = NULL;
  j_125 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_125;
    }
  else
    {
      static ATerm s_16 (ATerm t)
      {
        t = not_null(m_125);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_125 = ATgetFirst((ATermList) t);
          if(((m_125 != NULL) && (m_125 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_125;
      t = at_end_1_0(s_16, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL;
  b_126 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_126;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_126 = ATgetFirst((ATermList) t);
          d_126 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_57 = t;
        int x_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_54 = NULL,z_54 = NULL,a_55 = NULL,p_27 = NULL;
            t = SSLgetAnnotations(b_126);
            v_54 = t;
            t = c_126;
            t = l_125(t);
            z_54 = t;
            t = d_126;
            t = filter_1_0(l_125, t);
            a_55 = t;
            t = (ATerm) ATinsert(CheckATermList(a_55), z_54);
            p_27 = t;
            t = SSLsetAnnotations(p_27, v_54);
            LocalPopChoice(x_57);
          }
        else
          {
            t = w_57;
            t = d_126;
            t = filter_1_0(l_125, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_117 (ATerm), ATerm t)
{
  static ATerm t_126 (ATerm t)
  {
    ATerm q_126 = NULL,r_126 = NULL,s_126 = NULL;
    s_126 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_126 = ATgetFirst((ATermList) t);
        r_126 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_55 = NULL,u_55 = NULL,m_28 = NULL;
          t = SSLgetAnnotations(s_126);
          r_55 = t;
          t = r_126;
          t = t_126(t);
          u_55 = t;
          t = (ATerm) ATinsert(CheckATermList(u_55), q_126);
          m_28 = t;
          t = SSLsetAnnotations(m_28, r_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_126;
        t = z_117(t);
      }
    return(t);
  }
  t = t_126(t);
  return(t);
}
static ATerm f_127 (ATerm x_126, ATerm t)
{
  ATerm y_126 = NULL;
  t = SSL_explode_term(x_126);
  if(match_cons(t, sym__2))
    {
      ATerm z_57 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_57) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_126;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL;
  c_127 = t;
  if(match_cons(t, sym__2))
    {
      a_127 = ATgetArgument(t, 0);
      b_127 = ATgetArgument(t, 1);
      {
        ATerm a_58 = t;
        int b_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_16 (ATerm t)
            {
              t = b_127;
              return(t);
            }
            t = a_127;
            t = at_end_1_0(t_16, t);
            LocalPopChoice(b_58);
          }
        else
          {
            t = a_58;
            t = f_127(c_127, t);
          }
      }
    }
  else
    {
      t = f_127(c_127, t);
    }
  return(t);
}
static ATerm j_12 (ATerm i_35, ATerm q_34, ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL;
  static ATerm u_16 (ATerm t)
  {
    ATerm i_127 = NULL,j_127 = NULL,k_127 = NULL,l_127 = NULL;
    l_127 = t;
    t = SSL_explode_term(l_127);
    if(match_cons(t, sym__2))
      {
        if(((g_127 != NULL) && (g_127 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_127 = ATgetArgument(t, 0);
        {
          ATerm c_58 = ATgetArgument(t, 1);
          if(((ATgetType(c_58) == AT_LIST) && !(ATisEmpty(c_58))))
            {
              i_127 = ATgetFirst((ATermList) c_58);
              {
                ATerm e_58 = (ATerm) ATgetNext((ATermList) c_58);
                if(((ATgetType(e_58) != AT_LIST) || !(ATisEmpty(e_58))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, i_127, not_null(h_127));
    t = conc_0_0(t);
    j_127 = t;
    t = (ATerm) ATinsert(ATempty, j_127);
    k_127 = t;
    t = SSL_mkterm(g_127, k_127);
    return(t);
  }
  t = SSL_explode_term(i_35);
  if(match_cons(t, sym__2))
    {
      if(((g_127 != NULL) && (g_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_127 = ATgetArgument(t, 0);
      {
        ATerm k_58 = ATgetArgument(t, 1);
        if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
          {
            if(((h_127 != NULL) && (h_127 != ATgetFirst((ATermList) k_58))))
              _fail(ATgetFirst((ATermList) k_58));
            else
              h_127 = ATgetFirst((ATermList) k_58);
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
  t = q_34;
  t = fetch_1_0(u_16, t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm t)
{
  ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL;
  n_127 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_127;
      t = j_124(t);
    }
  else
    {
      ATerm s_127 = NULL,t_127 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_127 = ATgetFirst((ATermList) t);
          p_127 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_127;
      t = l_124(t);
      s_127 = t;
      t = p_127;
      t = foldr_3_0(j_124, k_124, l_124, t);
      t_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_127, t_127);
      t = k_124(t);
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_58), term_p_58), term_o_58);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm a_128 = NULL,b_128 = NULL;
  if(match_cons(t, sym__2))
    {
      a_128 = ATgetArgument(t, 0);
      b_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(a_128, b_128, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm c_128 = NULL,d_128 = NULL;
  d_128 = t;
  if(match_cons(t, sym_Signature_1))
    {
      c_128 = ATgetArgument(t, 0);
      {
        ATerm s_58 = t;
        int t_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_128 = NULL;
            t = c_128;
            t = filter_1_0(y_16, t);
            t = concat_0_0(t);
            f_128 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, f_128);
            LocalPopChoice(t_58);
          }
        else
          {
            t = s_58;
            t = d_128;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          c_128 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, c_128);
        }
      else
        {
          t = d_128;
        }
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm g_128 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      g_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_128;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL,s_28 = NULL;
  z_127 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_127);
  w_127 = t;
  t = x_127;
  t = foldr_3_0(v_16, w_16, x_16, t);
  y_127 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_127);
  s_28 = t;
  t = SSLsetAnnotations(s_28, w_127);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm u_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(v_58);
    }
  else
    {
      t = u_58;
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL,h_129 = NULL,i_129 = NULL,j_129 = NULL;
  j_129 = t;
  if(match_cons(t, sym_LRule_1))
    {
      i_129 = ATgetArgument(t, 0);
      t = i_129;
      if(match_cons(t, sym_Rule_3))
        {
          f_129 = ATgetArgument(t, 0);
          g_129 = ATgetArgument(t, 1);
          h_129 = ATgetArgument(t, 2);
          {
            ATerm x_58 = t;
            int y_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_129 = NULL;
                t = f_129;
                t = free_vars_3_0(b_17, c_17, tboundin_3_0, t);
                n_129 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, n_129, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, f_129, g_129, h_129)));
                LocalPopChoice(y_58);
              }
            else
              {
                t = x_58;
                t = j_129;
              }
          }
        }
      else
        {
          t = j_129;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          i_129 = ATgetArgument(t, 0);
          {
            ATerm c_59 = t;
            int h_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_130 = NULL;
                t = i_129;
                t = free_vars_3_0(e_17, f_17, tboundin_3_0, t);
                g_130 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_130, i_129);
                LocalPopChoice(h_59);
              }
            else
              {
                t = c_59;
                t = j_129;
              }
          }
        }
      else
        {
          t = j_129;
        }
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm o_129 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_129);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm j_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_59);
    }
  else
    {
      t = j_59;
      {
        ATerm l_59 = t;
        int m_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm q_129 = NULL,r_129 = NULL,s_129 = NULL,t_129 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_129 = ATgetArgument(t, 0);
                      r_129 = ATgetArgument(t, 1);
                      s_129 = ATgetArgument(t, 2);
                      t_129 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_129;
                  t = map_1_0(d_17, t);
                  LocalPopChoice(o_59);
                }
              else
                {
                  t = n_59;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm a_130 = NULL;
  ATerm p_59 = t;
  int q_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_130 = ATgetArgument(t, 0);
          {
            ATerm r_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_59);
      t = a_130;
    }
  else
    {
      t = p_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_130;
    }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm h_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_130);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_59);
    }
  else
    {
      t = t_59;
      {
        ATerm v_59 = t;
        int w_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL,m_130 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_130 = ATgetArgument(t, 0);
                      k_130 = ATgetArgument(t, 1);
                      l_130 = ATgetArgument(t, 2);
                      m_130 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_130;
                  t = map_1_0(g_17, t);
                  LocalPopChoice(y_59);
                }
              else
                {
                  t = x_59;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm z_130 = NULL;
  ATerm z_59 = t;
  int a_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_130 = ATgetArgument(t, 0);
          {
            ATerm c_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_60);
      t = z_130;
    }
  else
    {
      t = z_59;
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
static ATerm h_17 (ATerm t)
{
  ATerm d_60 = t;
  int e_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(e_60);
    }
  else
    {
      t = d_60;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm j_131 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      j_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, j_131)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL,c_129 = NULL,f_30 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(z_16, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(a_17, t);
  {
    ATerm i_60 = t;
    int j_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL;
        e_131 = t;
        t = term_k_60;
        f_131 = t;
        t = term_o_60;
        g_131 = t;
        t = term_q_60;
        t = x_12(f_131, g_131, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = e_131;
        LocalPopChoice(j_60);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = i_60;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(h_17, t);
  c_129 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_129);
  z_128 = t;
  t = a_129;
  t = fetch_1_0(i_17, t);
  b_129 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_129);
  f_30 = t;
  t = SSLsetAnnotations(f_30, z_128);
  return(t);
}
static ATerm k_12 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm k_131 = NULL;
  t = SSL_fputc(g_40, h_40);
  k_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_131);
  return(t);
}
static ATerm l_12 (ATerm k_24, ATerm l_24, ATerm t)
{
  ATerm l_131 = NULL;
  t = SSL_write_term_to_stream_text(k_24, l_24);
  l_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_131);
  return(t);
}
static ATerm n_12 (ATerm z_116 (ATerm), ATerm j_183, ATerm q_24, ATerm t)
{
  ATerm m_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_183, term_v_60);
  t = r_12(t);
  m_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_131, q_24);
  t = z_116(t);
  t = fclose_0_0(t);
  t = q_24;
  return(t);
}
static ATerm m_12 (ATerm g_24, ATerm h_24, ATerm t)
{
  ATerm n_131 = NULL;
  t = SSL_write_term_to_stream_baf(g_24, h_24);
  n_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_131);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_60 = ATgetArgument(t, 0);
      if(match_cons(x_60, sym_Stream_1))
        {
          u_131 = ATgetArgument(x_60, 0);
        }
      else
        _fail(t);
      v_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_12(u_131, v_131, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_60 = ATgetArgument(t, 0);
      if(match_cons(y_60, sym_Stream_1))
        {
          z_131 = ATgetArgument(y_60, 0);
        }
      else
        _fail(t);
      a_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(z_131, a_132, t);
  w_131 = t;
  t = term_m_26;
  x_131 = t;
  t = w_131;
  if(match_cons(t, sym_Stream_1))
    {
      y_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, w_131);
  t = k_12(x_131, y_131, t);
  return(t);
}
ATerm output_1_0 (ATerm i_136 (ATerm), ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL;
  t = i_136(t);
  p_131 = t;
  {
    ATerm g_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_131 = NULL,r_131 = NULL;
        t = term_k_60;
        q_131 = t;
        t = term_k_61;
        r_131 = t;
        t = term_l_61;
        t = x_12(q_131, r_131, t);
        LocalPopChoice(i_61);
      }
    else
      {
        t = g_61;
        t = term_o_61;
      }
  }
  o_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_131, p_131);
  {
    ATerm p_61 = t;
    int q_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_131 = NULL,t_131 = NULL;
        t = term_k_60;
        s_131 = t;
        t = term_v_61;
        t_131 = t;
        t = term_x_61;
        t = x_12(s_131, t_131, t);
        t = (ATerm) ATmakeAppl(sym__2, o_131, p_131);
        LocalPopChoice(q_61);
        if(match_cons(t, sym__2))
          {
            ATerm b_62 = ATgetArgument(t, 0);
            ATerm e_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_12(j_17, o_131, p_131, t);
      }
    else
      {
        t = p_61;
        if(match_cons(t, sym__2))
          {
            ATerm h_62 = ATgetArgument(t, 0);
            ATerm j_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_12(k_17, o_131, p_131, t);
      }
  }
  return(t);
}
static ATerm o_132 (ATerm i_132, ATerm t)
{
  t = SSL_fclose(i_132);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_132 = NULL,m_132 = NULL;
  m_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_132 = ATgetArgument(t, 0);
      {
        ATerm k_62 = t;
        int p_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_132);
            LocalPopChoice(p_62);
          }
        else
          {
            t = k_62;
            t = o_132(m_132, t);
          }
      }
    }
  else
    {
      t = o_132(m_132, t);
    }
  return(t);
}
static ATerm o_12 (ATerm m_24, ATerm t)
{
  t = SSL_read_term_from_stream(m_24);
  return(t);
}
static ATerm p_12 (ATerm z_38, ATerm a_39, ATerm t)
{
  t = SSL_strcat(z_38, a_39);
  return(t);
}
static ATerm q_12 (ATerm i_40, ATerm j_40, ATerm t)
{
  ATerm p_132 = NULL;
  t = SSL_fopen(i_40, j_40);
  p_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_132);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_132 = NULL;
  t = SSL_stdin_stream();
  q_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_132);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_132 = NULL;
  t = SSL_stdout_stream();
  r_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_132);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_132 = NULL;
  t = SSL_stderr_stream();
  s_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_132);
  return(t);
}
static ATerm a_134 (ATerm y_132, ATerm t)
{
  ATerm z_132 = NULL;
  t = SSL_explode_term(y_132);
  if(match_cons(t, sym__2))
    {
      ATerm q_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_62 = ATgetArgument(t, 1);
        if(((ATgetType(r_62) == AT_LIST) && !(ATisEmpty(r_62))))
          {
            z_132 = ATgetFirst((ATermList) r_62);
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
  t = z_132;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_132;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_132;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_132;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_134 (ATerm c_133, ATerm d_133, ATerm e_133, ATerm t)
{
  ATerm f_133 = NULL,g_133 = NULL,h_133 = NULL,l_133 = NULL,j_30 = NULL;
  t = SSLgetAnnotations(e_133);
  h_133 = t;
  t = c_133;
  if(match_cons(t, sym_Path_1))
    {
      l_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_133, d_133);
  j_30 = t;
  t = SSLsetAnnotations(j_30, h_133);
  if(match_cons(t, sym__2))
    {
      f_133 = ATgetArgument(t, 0);
      g_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12(f_133, g_133, t);
  return(t);
}
static ATerm c_134 (ATerm n_133, ATerm o_133, ATerm p_133, ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL,v_133 = NULL,k_30 = NULL;
  t = SSLgetAnnotations(p_133);
  s_133 = t;
  t = SSL_is_string(n_133);
  v_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_133, o_133);
  k_30 = t;
  t = SSLsetAnnotations(k_30, s_133);
  if(match_cons(t, sym__2))
    {
      q_133 = ATgetArgument(t, 0);
      r_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12(q_133, r_133, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm x_133 = NULL,y_133 = NULL,z_133 = NULL;
  x_133 = t;
  if(match_cons(t, sym__2))
    {
      y_133 = ATgetArgument(t, 0);
      z_133 = ATgetArgument(t, 1);
      {
        ATerm u_62 = t;
        int x_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_134(x_133, t);
            LocalPopChoice(x_62);
          }
        else
          {
            t = u_62;
            {
              ATerm b_63 = t;
              int c_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_134(y_133, z_133, x_133, t);
                  LocalPopChoice(c_63);
                }
              else
                {
                  t = b_63;
                  t = c_134(y_133, z_133, x_133, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_134(x_133, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_134 = NULL,f_134 = NULL,g_134 = NULL,l_134 = NULL;
  l_134 = t;
  {
    ATerm e_63 = t;
    int f_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_134, term_g_63);
        t = r_12(t);
        LocalPopChoice(f_63);
      }
    else
      {
        t = e_63;
        {
          ATerm o_56 = NULL,p_56 = NULL;
          t = term_h_63;
          p_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_63, l_134);
          t = p_12(p_56, l_134, t);
          o_56 = t;
          t = SSL_perror(o_56);
          _fail(t);
        }
      }
  }
  f_134 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_12(g_134, t);
  e_134 = t;
  t = f_134;
  t = fclose_0_0(t);
  t = e_134;
  return(t);
}
ATerm input_1_0 (ATerm j_136 (ATerm), ATerm t)
{
  ATerm i_63 = t;
  int l_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_134 = NULL,p_134 = NULL;
      t = term_k_60;
      o_134 = t;
      t = term_m_63;
      p_134 = t;
      t = term_n_63;
      t = x_12(o_134, p_134, t);
      LocalPopChoice(l_63);
    }
  else
    {
      t = i_63;
      t = term_o_63;
    }
  t = ReadFromFile_0_0(t);
  t = j_136(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_134 = NULL,r_134 = NULL,s_134 = NULL,t_134 = NULL,u_134 = NULL;
  q_134 = t;
  t = term_p_63;
  t = whoami_0_0(t);
  r_134 = t;
  t = term_c_37;
  t_134 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_63), r_134), term_q_63);
  u_134 = t;
  t = SSL_printnl(t_134, u_134);
  t = term_e_37;
  s_134 = t;
  t = SSL_exit(s_134);
  t = q_134;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm w_134 = NULL;
  w_134 = t;
  if(match_string(t, "-k"))
    {
      t = w_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_134;
    }
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm x_134 = NULL,y_134 = NULL,z_134 = NULL;
  x_134 = t;
  t = SSL_string_to_int(x_134);
  y_134 = t;
  t = term_s_63;
  z_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_63, y_134);
  t = a_13(z_134, y_134, t);
  t = x_134;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_t_63;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_17, m_17, n_17, t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm b_135 = NULL;
  b_135 = t;
  if(match_string(t, "-S"))
    {
      t = b_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_135;
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm c_135 = NULL,d_135 = NULL;
  t = term_u_63;
  c_135 = t;
  t = term_v_63;
  d_135 = t;
  t = term_w_63;
  t = a_13(c_135, d_135, t);
  t = term_x_63;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_f_64;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm e_135 = NULL,f_135 = NULL,g_135 = NULL;
  e_135 = t;
  t = SSL_string_to_int(e_135);
  f_135 = t;
  t = term_u_63;
  g_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_63, f_135);
  t = a_13(g_135, f_135, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_135);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_j_64;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm h_135 = NULL,i_135 = NULL;
  t = term_k_64;
  h_135 = t;
  t = term_p_63;
  i_135 = t;
  t = term_l_64;
  t = a_13(h_135, i_135, t);
  t = term_m_64;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_n_64;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_64 = t;
  int p_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_17, p_17, q_17, t);
      LocalPopChoice(p_64);
    }
  else
    {
      t = o_64;
      {
        ATerm q_64 = t;
        int r_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_17, s_17, t_17, t);
            LocalPopChoice(r_64);
          }
        else
          {
            t = q_64;
            t = Option_3_0(u_17, v_17, w_17, t);
          }
      }
    }
  return(t);
}
static ATerm a_13 (ATerm l_55, ATerm m_55, ATerm t)
{
  ATerm j_135 = NULL,k_135 = NULL;
  t = term_k_60;
  j_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_60, l_55, m_55);
  t = lookup_table_0_1(j_135, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(l_55, m_55, k_135, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_60, l_55, m_55);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_135 = NULL,p_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_135 = NULL,r_135 = NULL,s_135 = NULL;
      t = term_p_63;
      t = e_0(t);
      q_135 = t;
      t = term_s_64;
      r_135 = t;
      t = term_u_64;
      s_135 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_64, term_u_64, q_135);
      t = y_12(r_135, s_135, q_135, t);
      _fail(t);
    }
  else
    {
      ATerm v_135 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_135 = ATgetFirst((ATermList) t);
          p_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_135;
      t = c_0(t);
      t = term_p_63;
      t = d_0(t);
      v_135 = t;
      t = (ATerm) ATinsert(CheckATermList(p_135), v_135);
    }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm x_135 = NULL;
  x_135 = t;
  if(match_string(t, "-o"))
    {
      t = x_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_135;
    }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm y_135 = NULL,a_136 = NULL;
  y_135 = t;
  t = term_k_61;
  a_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_61, y_135);
  t = a_13(a_136, y_135, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_135);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_v_64;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_17, z_17, a_18, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm g_136 = NULL;
  g_136 = t;
  if(match_string(t, "-i"))
    {
      t = g_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_136;
    }
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm h_136 = NULL,k_136 = NULL;
  h_136 = t;
  t = term_m_63;
  k_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_63, h_136);
  t = a_13(k_136, h_136, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_136);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  t = term_w_64;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_18, c_18, d_18, t);
  return(t);
}
static ATerm y_12 (ATerm g_60, ATerm h_60, ATerm f_60, ATerm t)
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL;
  m_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_60, h_60);
  {
    ATerm x_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_64 = ATgetArgument(t, 0);
            ATerm a_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_60, h_60);
        t = x_12(g_60, h_60, t);
        LocalPopChoice(y_64);
      }
    else
      {
        t = x_64;
        t = (ATerm) ATempty;
      }
  }
  n_136 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_60, h_60, (ATerm) ATinsert(CheckATermList(n_136), f_60));
  t = lookup_table_0_1(g_60, t);
  q_136 = t;
  t = (ATerm) ATinsert(CheckATermList(n_136), f_60);
  o_136 = t;
  t = q_136;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(h_60, o_136, p_136, t);
  t = m_136;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_136 = NULL,y_136 = NULL,z_136 = NULL,a_137 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_137 = NULL,c_137 = NULL,d_137 = NULL;
      t = term_p_63;
      t = n_0(t);
      b_137 = t;
      t = term_s_64;
      c_137 = t;
      t = term_u_64;
      d_137 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_64, term_u_64, b_137);
      t = y_12(c_137, d_137, b_137, t);
      _fail(t);
    }
  else
    {
      ATerm h_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_136 = ATgetFirst((ATermList) t);
          y_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_136 = ATgetFirst((ATermList) t);
          a_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_136;
      t = j_0(t);
      t = z_136;
      t = l_0(t);
      h_137 = t;
      t = (ATerm) ATinsert(CheckATermList(a_137), h_137);
    }
  return(t);
}
static ATerm e_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm j_137 = NULL,k_137 = NULL;
  j_137 = t;
  if(match_string(t, "old"))
    {
      t = j_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = j_137;
    }
  t = term_o_60;
  k_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_60, j_137);
  t = a_13(k_137, j_137, t);
  t = term_p_63;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = term_b_65;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_18, f_18, i_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_137 = NULL,n_137 = NULL,o_137 = NULL,p_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_63;
  t = whoami_0_0(t);
  m_137 = t;
  t = term_c_37;
  o_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_65), m_137);
  p_137 = t;
  t = SSL_printnl(o_137, p_137);
  t = term_e_37;
  n_137 = t;
  t = SSL_exit(n_137);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_137 = NULL,r_137 = NULL;
  t = term_k_60;
  q_137 = t;
  t = term_d_65;
  r_137 = t;
  t = term_e_65;
  t = x_12(q_137, r_137, t);
  return(t);
}
static ATerm s_12 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm f_65 = t;
  int g_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      LocalPopChoice(g_65);
    }
  else
    {
      t = f_65;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm t)
{
  ATerm t_137 = NULL,u_137 = NULL,v_137 = NULL;
  t_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_137;
      t = h_124(t);
    }
  else
    {
      ATerm y_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_137 = ATgetFirst((ATermList) t);
          v_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_137;
      t = foldr_2_0(h_124, i_124, t);
      y_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_137, y_137);
      t = i_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  if(match_cons(t, sym__2))
    {
      y_56 = ATgetArgument(t, 0);
      z_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12(y_56, z_56, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_138 = NULL,u_56 = NULL,v_56 = NULL;
  t = times_0_0(t);
  v_56 = t;
  t = SSL_explode_term(v_56);
  if(match_cons(t, sym__2))
    {
      ATerm h_65 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_56;
  t = foldr_2_0(m_18, n_18, t);
  d_138 = t;
  t = SSL_TicksToSeconds(d_138);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL;
  o_138 = t;
  if(match_cons(t, sym__2))
    {
      p_138 = ATgetArgument(t, 0);
      q_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_65 = t;
    int j_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_138;
        if((p_138 != t))
          {
            _fail(t);
          }
        t = o_138;
        LocalPopChoice(j_65);
      }
    else
      {
        t = i_65;
        t = (ATerm) ATmakeAppl(sym__2, p_138, q_138);
        {
          ATerm k_65 = t;
          int l_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_138, q_138);
              LocalPopChoice(l_65);
            }
          else
            {
              t = k_65;
              t = SSL_gtr(p_138, q_138);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_138, q_138);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm u_138 = NULL;
  u_138 = t;
  {
    ATerm m_65 = t;
    int n_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_138 = NULL,x_138 = NULL,y_138 = NULL;
        t = term_k_60;
        x_138 = t;
        t = term_u_63;
        y_138 = t;
        t = term_o_65;
        t = x_12(x_138, y_138, t);
        w_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_138, term_e_37);
        t = geq_0_0(t);
        t = u_138;
        t = j_133(t);
        LocalPopChoice(n_65);
      }
    else
      {
        t = m_65;
        t = u_138;
      }
  }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm a_139 = NULL,b_139 = NULL,d_139 = NULL,e_139 = NULL;
  t = run_time_0_0(t);
  a_139 = t;
  t = term_p_63;
  t = whoami_0_0(t);
  b_139 = t;
  t = term_c_37;
  d_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_65), a_139), term_p_65), b_139);
  e_139 = t;
  t = SSL_printnl(d_139, e_139);
  t = (ATerm) ATmakeAppl(sym__2, term_c_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_65), a_139), term_p_65), b_139));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_139 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_63;
  f_139 = t;
  t = SSL_exit(f_139);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm p_139 = NULL,q_139 = NULL;
  q_139 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_139;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_139 = ATgetArgument(t, 0);
          {
            ATerm u_57 = NULL,w_30 = NULL;
            t = SSLgetAnnotations(q_139);
            u_57 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_139);
            w_30 = t;
            t = SSLsetAnnotations(w_30, u_57);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_139;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm r_65 = t;
  int s_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_139 = NULL,j_139 = NULL;
      t = term_k_60;
      i_139 = t;
      t = term_t_65;
      j_139 = t;
      t = term_u_65;
      t = x_12(i_139, j_139, t);
      LocalPopChoice(s_65);
    }
  else
    {
      t = r_65;
      t = fetch_1_0(p_18, t);
    }
  t = z_135(t);
  return(t);
}
static ATerm b_13 (ATerm y_63, ATerm z_63, ATerm a_64, ATerm t)
{
  ATerm s_139 = NULL;
  t = SSL_hashtable_put(a_64, y_63, z_63);
  s_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_139);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_61, ATerm t)
{
  ATerm b_140 = NULL;
  t = table_hashtable_0_0(t);
  b_140 = t;
  {
    ATerm v_65 = t;
    int w_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_58 = NULL;
        t = b_140;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_13(s_61, j_58, t);
        LocalPopChoice(w_65);
      }
    else
      {
        t = v_65;
        {
          ATerm r_58 = NULL;
          t = s_61;
          t = table_create_0_0(t);
          t = b_140;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_13(s_61, r_58, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_64, ATerm h_64, ATerm t)
{
  ATerm e_140 = NULL;
  t = SSL_hashtable_create(g_64, h_64);
  e_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_140);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_140 = NULL,g_140 = NULL,h_140 = NULL,j_140 = NULL,k_140 = NULL;
  f_140 = t;
  t = term_x_65;
  j_140 = t;
  t = term_y_65;
  k_140 = t;
  t = f_140;
  t = new_hashtable_0_2(j_140, k_140, t);
  g_140 = t;
  t = f_140;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(f_140, g_140, h_140, t);
  t = f_140;
  return(t);
}
static ATerm u_12 (ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm l_140 = NULL;
  t = SSL_hashtable_remove(e_64, d_64);
  l_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_140);
  return(t);
}
static ATerm v_12 (ATerm i_64, ATerm t)
{
  ATerm m_140 = NULL;
  t = SSL_hashtable_destroy(i_64);
  m_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_140);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_140 = NULL;
  t = SSL_table_hashtable();
  n_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_140);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL,v_140 = NULL;
  s_140 = t;
  t = table_hashtable_0_0(t);
  t_140 = t;
  t = lookup_table_0_1(s_140, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_12(v_140, t);
  t = t_140;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_12(s_140, u_140, t);
  t = s_140;
  return(t);
}
ATerm map_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  static ATerm k_141 (ATerm t)
  {
    ATerm h_141 = NULL,i_141 = NULL,j_141 = NULL;
    h_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_141;
      }
    else
      {
        ATerm w_58 = NULL,d_59 = NULL,i_59 = NULL,y_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_141 = ATgetFirst((ATermList) t);
            j_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_141);
        w_58 = t;
        t = i_141;
        t = i_117(t);
        d_59 = t;
        t = j_141;
        t = k_141(t);
        i_59 = t;
        t = (ATerm) ATinsert(CheckATermList(i_59), d_59);
        y_30 = t;
        t = SSLsetAnnotations(y_30, w_58);
      }
    return(t);
  }
  t = k_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_141 = NULL,o_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_141 = ATgetFirst((ATermList) t);
      o_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_141 = NULL,t_141 = NULL;
        static ATerm t_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_141)), not_null(t_141));
          return(t);
        }
        t = o_141;
        t = i_0(t);
        if(((s_141 != NULL) && (s_141 != t)))
          _fail(t);
        else
          s_141 = t;
        t = n_141;
        t = g_0(t);
        if(((t_141 != NULL) && (t_141 != t)))
          _fail(t);
        else
          t_141 = t;
        t = o_141;
        t = reverse_acc_2_0(g_0, t_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_63;
      t = i_0(t);
    }
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm z_141 = NULL,a_142 = NULL,b_142 = NULL,d_31 = NULL;
  b_142 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_142);
  z_141 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_142);
  d_31 = t;
  t = SSLsetAnnotations(d_31, z_141);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm d_142 = NULL;
  d_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_142), term_z_65);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_141 = NULL,w_141 = NULL;
  ATerm a_66 = t;
  int b_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_141 = NULL,y_141 = NULL;
      t = term_k_60;
      x_141 = t;
      t = term_d_65;
      y_141 = t;
      t = term_e_65;
      t = x_12(x_141, y_141, t);
      LocalPopChoice(b_66);
    }
  else
    {
      t = a_66;
      t = fetch_1_0(u_18, t);
    }
  t = term_c_66;
  t = echo_0_0(t);
  t = term_s_64;
  v_141 = t;
  t = term_u_64;
  w_141 = t;
  t = term_d_66;
  t = x_12(v_141, w_141, t);
  t = reverse_acc_2_0(_id, v_18, t);
  t = map_1_0(w_18, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  static ATerm f_143 (ATerm t)
  {
    ATerm z_142 = NULL,a_143 = NULL,e_143 = NULL;
    z_142 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_143 = ATgetFirst((ATermList) t);
        e_143 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_66 = t;
      int f_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_59 = NULL,b_60 = NULL,g_31 = NULL;
          t = SSLgetAnnotations(z_142);
          s_59 = t;
          t = a_143;
          t = s_117(t);
          b_60 = t;
          t = (ATerm) ATinsert(CheckATermList(e_143), b_60);
          g_31 = t;
          t = SSLsetAnnotations(g_31, s_59);
          LocalPopChoice(f_66);
        }
      else
        {
          t = e_66;
          {
            ATerm w_60 = NULL,f_61 = NULL,h_31 = NULL;
            t = SSLgetAnnotations(z_142);
            w_60 = t;
            t = e_143;
            t = f_143(t);
            f_61 = t;
            t = (ATerm) ATinsert(CheckATermList(f_61), a_143);
            h_31 = t;
            t = SSLsetAnnotations(h_31, w_60);
          }
        }
    }
    return(t);
  }
  t = f_143(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_143 = NULL,k_143 = NULL,p_143 = NULL;
  j_143 = t;
  {
    ATerm g_66 = t;
    int h_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_143;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_66 = ATgetFirst((ATermList) t);
                ATerm j_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_143;
          }
        LocalPopChoice(h_66);
      }
    else
      {
        t = g_66;
        t = (ATerm) ATinsert(ATempty, j_143);
      }
  }
  k_143 = t;
  t = term_o_61;
  p_143 = t;
  t = SSL_printnl(p_143, k_143);
  t = j_143;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_143 = NULL,x_143 = NULL;
  t = term_k_60;
  w_143 = t;
  t = term_d_65;
  x_143 = t;
  t = term_e_65;
  t = x_12(w_143, x_143, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_13 (ATerm b_64, ATerm c_64, ATerm t)
{
  t = SSL_hashtable_get(c_64, b_64);
  return(t);
}
static ATerm x_12 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm y_143 = NULL;
  t = lookup_table_0_1(z_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(a_62, y_143, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  ATerm a_144 = NULL,b_144 = NULL;
  t = term_k_66;
  a_144 = t;
  t = term_p_63;
  b_144 = t;
  t = term_l_66;
  t = a_13(a_144, b_144, t);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = term_m_66;
  return(t);
}
static ATerm l_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm c_144 = NULL,d_144 = NULL,e_144 = NULL,f_144 = NULL;
  t = term_k_66;
  e_144 = t;
  t = term_p_63;
  f_144 = t;
  t = term_l_66;
  t = a_13(e_144, f_144, t);
  t = term_n_66;
  c_144 = t;
  t = term_p_63;
  d_144 = t;
  t = term_o_66;
  t = a_13(c_144, d_144, t);
  t = term_p_66;
  return(t);
}
static ATerm p_19 (ATerm t)
{
  t = term_q_66;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_66 = t;
  int t_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_19, d_19, i_19, t);
      LocalPopChoice(t_66);
    }
  else
    {
      t = r_66;
      t = Option_3_0(l_19, o_19, p_19, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL,k_31 = NULL;
  l_144 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_144 = ATgetFirst((ATermList) t);
      i_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_144);
  g_144 = t;
  t = h_144;
  t = y_95(t);
  j_144 = t;
  t = i_144;
  t = z_95(t);
  k_144 = t;
  t = (ATerm) ATinsert(CheckATermList(k_144), j_144);
  k_31 = t;
  t = SSLsetAnnotations(k_31, g_144);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_138 (ATerm), ATerm t)
{
  ATerm q_144 = NULL,s_144 = NULL,t_144 = NULL,u_144 = NULL,w_144 = NULL,x_144 = NULL,v_31 = NULL;
  q_144 = t;
  {
    ATerm u_66 = t;
    int v_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_66;
        t = c_138(t);
        LocalPopChoice(v_66);
      }
    else
      {
        t = u_66;
      }
  }
  t = q_144;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_144 = ATgetFirst((ATermList) t);
      u_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_144);
  s_144 = t;
  t = term_d_65;
  x_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_65, t_144);
  t = a_13(x_144, t_144, t);
  t = u_144;
  {
    static ATerm h_145 (ATerm t)
    {
      ATerm y_66 = t;
      int z_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_67 = t;
          int d_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_145 = NULL;
              a_145 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_145;
              LocalPopChoice(d_67);
            }
          else
            {
              t = a_67;
              t = c_138(t);
              t = Cons_2_0(_id, h_145, t);
            }
          LocalPopChoice(z_66);
        }
      else
        {
          t = y_66;
          {
            ATerm d_145 = NULL,e_145 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_145 = ATgetFirst((ATermList) t);
                e_145 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_145), (ATerm) ATmakeAppl(sym_Undefined_1, d_145));
          }
        }
      return(t);
    }
    t = h_145(t);
  }
  w_144 = t;
  t = (ATerm) ATinsert(CheckATermList(w_144), (ATerm) ATmakeAppl(sym_Program_1, t_144));
  v_31 = t;
  t = SSLsetAnnotations(v_31, s_144);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  ATerm v_145 = NULL;
  v_145 = t;
  if(match_string(t, "--help"))
    {
      t = v_145;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_145;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_145;
        }
    }
  return(t);
}
static ATerm s_19 (ATerm t)
{
  ATerm w_145 = NULL,x_145 = NULL;
  t = term_t_65;
  w_145 = t;
  t = term_p_63;
  x_145 = t;
  t = term_e_67;
  t = a_13(w_145, x_145, t);
  t = term_h_67;
  return(t);
}
static ATerm x_19 (ATerm t)
{
  t = term_i_67;
  return(t);
}
static ATerm a_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_138 (ATerm), ATerm t)
{
  ATerm m_145 = NULL,n_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL,s_145 = NULL,t_145 = NULL,u_145 = NULL;
  p_145 = t;
  t = term_s_64;
  q_145 = t;
  t = term_j_67;
  t = lookup_table_0_1(q_145, t);
  u_145 = t;
  t = term_u_64;
  r_145 = t;
  t = (ATerm) ATempty;
  s_145 = t;
  t = u_145;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(r_145, s_145, t_145, t);
  t = p_145;
  {
    static ATerm q_19 (ATerm t)
    {
      ATerm k_67 = t;
      int l_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_138(t);
          LocalPopChoice(l_67);
        }
      else
        {
          t = k_67;
          {
            ATerm m_67 = t;
            int o_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_19, s_19, x_19, t);
                LocalPopChoice(o_67);
              }
            else
              {
                t = m_67;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_19, t);
  }
  {
    ATerm p_67 = t;
    int q_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_146 = NULL;
        j_146 = t;
        {
          ATerm r_67 = t;
          int s_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_61 = NULL;
              t = j_146;
              {
                ATerm t_67 = t;
                int u_67 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_61 = NULL,u_61 = NULL;
                    t = term_k_60;
                    t_61 = t;
                    t = term_t_65;
                    u_61 = t;
                    t = term_u_65;
                    t = x_12(t_61, u_61, t);
                    LocalPopChoice(u_67);
                  }
                else
                  {
                    t = t_67;
                    t = fetch_1_0(a_20, t);
                  }
              }
              t = j_146;
              t = default_system_usage_0_0(t);
              t = term_v_63;
              r_61 = t;
              t = SSL_exit(r_61);
              LocalPopChoice(s_67);
            }
          else
            {
              t = r_67;
              {
                ATerm c_62 = NULL,f_62 = NULL,g_62 = NULL;
                t = term_k_60;
                f_62 = t;
                t = term_k_66;
                g_62 = t;
                t = term_v_67;
                t = x_12(f_62, g_62, t);
                t = j_146;
                t = default_system_about_0_0(t);
                t = term_v_63;
                c_62 = t;
                t = SSL_exit(c_62);
              }
            }
        }
        LocalPopChoice(q_67);
      }
    else
      {
        t = p_67;
        {
          ATerm a_68 = t;
          int b_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_146 = NULL,l_146 = NULL,m_146 = NULL;
              static ATerm b_20 (ATerm t)
              {
                ATerm n_146 = NULL,o_146 = NULL,p_146 = NULL,x_31 = NULL;
                p_146 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_146 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_146);
                n_146 = t;
                t = o_146;
                if(((m_145 != NULL) && (m_145 != t)))
                  _fail(t);
                else
                  m_145 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_146);
                x_31 = t;
                t = SSLsetAnnotations(x_31, n_146);
                return(t);
              }
              t = fetch_1_0(b_20, t);
              t = term_c_37;
              l_146 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_145)), term_c_68);
              m_146 = t;
              t = SSL_printnl(l_146, m_146);
              t = (ATerm) ATmakeAppl(sym__2, term_c_37, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_145)), term_c_68));
              t = default_system_usage_0_0(t);
              t = term_e_37;
              k_146 = t;
              t = SSL_exit(k_146);
              LocalPopChoice(b_68);
            }
          else
            {
              t = a_68;
            }
        }
      }
  }
  n_145 = t;
  t = term_s_64;
  t = table_destroy_0_0(t);
  t = n_145;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL,w_146 = NULL,x_146 = NULL,y_146 = NULL;
  t = parse_options_1_0(b_136, t);
  u_146 = t;
  t = term_d_68;
  t = table_create_0_0(t);
  t = term_d_68;
  v_146 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_68, term_e_68, u_146);
  t = lookup_table_0_1(v_146, t);
  y_146 = t;
  t = term_e_68;
  w_146 = t;
  t = y_146;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(w_146, u_146, x_146, t);
  t = u_146;
  t = d_136(t);
  {
    ATerm f_68 = t;
    int g_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_136, t);
        LocalPopChoice(g_68);
      }
    else
      {
        t = f_68;
        {
          ATerm h_68 = t;
          int i_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_136(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_68);
            }
          else
            {
              t = h_68;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm l_68 = t;
  int m_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
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
            t = input_option_0_0(t);
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
                  t = output_option_0_0(t);
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
                        t = Option_3_0(f_20, k_20, l_20, t);
                        LocalPopChoice(s_68);
                      }
                    else
                      {
                        t = r_68;
                        {
                          ATerm t_68 = t;
                          int v_68 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(v_68);
                            }
                          else
                            {
                              t = t_68;
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
static ATerm e_20 (ATerm t)
{
  t = input_1_0(o_20, t);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm a_147 = NULL,b_147 = NULL;
  t = term_v_61;
  a_147 = t;
  t = term_p_63;
  b_147 = t;
  t = term_w_68;
  t = a_13(a_147, b_147, t);
  t = term_y_68;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  t = term_z_68;
  return(t);
}
static ATerm o_20 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_20, default_usage_0_0, _id, e_20, t);
  return(t);
}

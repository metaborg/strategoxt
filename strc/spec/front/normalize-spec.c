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
ATerm term_s_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_y_75;
ATerm term_u_75;
ATerm term_t_75;
ATerm term_q_75;
ATerm term_d_75;
ATerm term_c_75;
ATerm term_a_75;
ATerm term_z_74;
ATerm term_r_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_i_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_k_73;
ATerm term_a_73;
ATerm term_z_72;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_s_72;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_d_72;
ATerm term_c_72;
ATerm term_b_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_x_71;
ATerm term_w_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_t_71;
ATerm term_s_71;
ATerm term_r_71;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_t_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_m_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_j_70;
ATerm term_t_68;
ATerm term_s_68;
ATerm term_r_68;
ATerm term_f_67;
ATerm term_c_67;
ATerm term_a_67;
ATerm term_y_66;
ATerm term_x_66;
ATerm term_o_66;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_s_55;
ATerm term_l_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_g_50;
ATerm term_e_50;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_c_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_w_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_k_43;
ATerm term_g_43;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_c_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_o_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_e_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_l_34;
ATerm term_h_34;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_b_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_s_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_b_29;
ATerm term_z_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_p_24;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Op_2, term_b_27, (ATerm) ATempty);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_27);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_24);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Op_2, term_w_30, (ATerm) ATempty);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_30);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Call_2, term_z_31, (ATerm) ATempty);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Call_2, term_e_33, (ATerm) ATempty);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Call_2, term_s_30, (ATerm) ATempty);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_38);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_RootApp_1, term_t_24);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_y_38);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_39);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_39);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_39);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_39);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_40);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_40);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_40);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("callers already generated: ", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("freshly generating the DR callers: ", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_48);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Var_1, term_w_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_48);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Build_1, term_j_29);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_49);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_50);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_51);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_52);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_55);
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_56);
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_66);
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_67);
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_t_68));
  term_t_68 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_k_70);
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_r_70);
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_w_70);
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_r_71);
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(sym__2, term_z_71, term_x_47);
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_47);
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(sym__2, term_e_72, term_u_71);
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_z_72);
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_z_71);
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_p_73);
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(sym__2, term_p_72, term_q_72);
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(sym__2, term_g_74, term_u_71);
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_u_71);
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(sym__2, term_p_73, term_u_71);
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(sym__3, term_p_72, term_q_72, (ATerm) ATempty);
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_g_74);
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(sym__2, term_w_70, term_u_71);
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm e_111 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm d_11 (ATerm f_144 (ATerm), ATerm v_81, ATerm t_81, ATerm u_81, ATerm y_81, ATerm w_81, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm f_144 (ATerm), ATerm t);
static ATerm x_18 (ATerm l_12, ATerm p_12, ATerm t);
static ATerm y_18 (ATerm x_13, ATerm y_13, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm o_142 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm f_11 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t);
static ATerm b_31 (ATerm e_30, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
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
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm g_11 (ATerm z_67, ATerm a_68, ATerm b_68, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm h_11 (ATerm e_144 (ATerm), ATerm c_81, ATerm z_80, ATerm a_81, ATerm j_81, ATerm n_81, ATerm o_81, ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm g_144 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_11 (ATerm c_82, ATerm b_82, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm j_62 (ATerm k_61, ATerm t);
static ATerm k_62 (ATerm m_61, ATerm t);
static ATerm m_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm h_65 (ATerm l_64, ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm o_144 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm i_112 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm l_144 (ATerm), ATerm t);
static ATerm k_10 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm u_11 (ATerm e_84, ATerm d_84, ATerm t);
ATerm repeat_2_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm j_108 (ATerm c_107, ATerm f_107, ATerm g_107, ATerm h_107, ATerm i_107, ATerm j_107, ATerm k_107, ATerm t);
static ATerm l_15 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm f_117 (ATerm), ATerm t);
static ATerm m_15 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm w_15 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm s_143 (ATerm), ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm b_12 (ATerm b_122 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
static ATerm c_12 (ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm u_30, ATerm t_30, ATerm t);
static ATerm d_12 (ATerm w_121 (ATerm), ATerm o_30, ATerm n_30, ATerm t);
ATerm genzip_4_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm i_12 (ATerm l_674, ATerm q_674, ATerm z_66, ATerm t);
ATerm while_not_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm g_131 (ATerm u_129, ATerm v_129, ATerm w_129, ATerm t);
static ATerm u_17 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
ATerm free_vars_3_0 (ATerm w_140 (ATerm), ATerm x_140 (ATerm), ATerm y_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm f_111 (ATerm), ATerm t);
static ATerm m_12 (ATerm t_60, ATerm u_60, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm w_112 (ATerm), ATerm t);
static ATerm n_12 (ATerm z_130 (ATerm), ATerm s_44, ATerm q_44, ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm o_12 (ATerm n_60, ATerm o_60, ATerm t);
ATerm end_scope_1_0 (ATerm w_130 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_130 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t);
static ATerm i_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_125 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_118 (ATerm), ATerm t);
static ATerm w_137 (ATerm o_137, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_12 (ATerm g_35, ATerm p_34, ATerm t);
ATerm foldr_3_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm r_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm s_12 (ATerm i_40, ATerm j_40, ATerm t);
static ATerm t_12 (ATerm m_24, ATerm n_24, ATerm t);
static ATerm v_12 (ATerm h_117 (ATerm), ATerm b_184, ATerm s_24, ATerm t);
static ATerm u_12 (ATerm i_24, ATerm j_24, ATerm t);
static ATerm w_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm output_1_0 (ATerm q_136 (ATerm), ATerm t);
static ATerm r_143 (ATerm i_143, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_12 (ATerm o_24, ATerm t);
static ATerm x_12 (ATerm b_39, ATerm c_39, ATerm t);
static ATerm y_12 (ATerm k_40, ATerm l_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_145 (ATerm c_144, ATerm t);
static ATerm m_145 (ATerm k_144, ATerm n_144, ATerm p_144, ATerm t);
static ATerm n_145 (ATerm x_144, ATerm y_144, ATerm z_144, ATerm t);
static ATerm z_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_136 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_20 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm g_20 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm b_21 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_13 (ATerm n_55, ATerm o_55, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_21 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm v_21 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm g_13 (ATerm i_60, ATerm j_60, ATerm h_60, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_13 (ATerm e_43, ATerm f_43, ATerm t);
ATerm foldr_2_0 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm e_22 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_133 (ATerm), ATerm t);
static ATerm f_22 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_22 (ATerm t);
ATerm need_help_1_0 (ATerm h_136 (ATerm), ATerm t);
static ATerm j_13 (ATerm a_64, ATerm b_64, ATerm c_64, ATerm t);
ATerm lookup_table_0_1 (ATerm u_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_64, ATerm j_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_13 (ATerm f_64, ATerm g_64, ATerm t);
static ATerm d_13 (ATerm k_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_118 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_13 (ATerm d_64, ATerm e_64, ATerm t);
static ATerm f_13 (ATerm b_62, ATerm c_62, ATerm t);
static ATerm t_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm n_23 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_138 (ATerm), ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm z_23 (ATerm t);
ATerm parse_options_1_0 (ATerm j_138 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm k_24 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_0 = NULL,y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_1, c_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_1 = ATgetArgument(t, 0);
          t = b_1;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_0 = ATgetFirst((ATermList) t);
              y_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_0, (ATerm) ATmakeAppl(sym_LChoices_1, y_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_p_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_1 = ATgetArgument(t, 0);
              t = b_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_0 = ATgetFirst((ATermList) t);
                  y_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_0, (ATerm) ATmakeAppl(sym_Choices_1, y_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_p_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_1 = ATgetArgument(t, 0);
                  t = b_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_0 = ATgetFirst((ATermList) t);
                      y_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_0, (ATerm) ATmakeAppl(sym_Seqs_1, y_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_t_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      b_1 = ATgetArgument(t, 0);
                      c_1 = ATgetArgument(t, 1);
                      z_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, c_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_24, (ATerm) ATinsert(ATinsert(ATempty, z_0), b_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          b_1 = ATgetArgument(t, 0);
                          c_1 = ATgetArgument(t, 1);
                          z_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_0)), b_1), (ATerm) ATmakeAppl(sym_Build_1, c_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              b_1 = ATgetArgument(t, 0);
                              c_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_1, (ATerm) ATmakeAppl(sym_Match_1, c_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  b_1 = ATgetArgument(t, 0);
                                  c_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_1), c_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      b_1 = ATgetArgument(t, 0);
                                      c_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_1), b_1);
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
ATerm topdown_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(e_111, t);
    return(t);
  }
  t = e_111(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
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
static ATerm q_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            {
              ATerm k_25 = t;
              int m_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_6 = ATgetArgument(t, 0);
                      b_6 = ATgetArgument(t, 1);
                      c_6 = ATgetArgument(t, 2);
                      d_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_6;
                  t = map_1_0(s_0, t);
                  LocalPopChoice(m_25);
                }
              else
                {
                  t = k_25;
                  {
                    ATerm n_25 = t;
                    int o_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_25);
                      }
                    else
                      {
                        t = n_25;
                        t = dynrule_targs_1_0(t_0, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm l_6 = NULL;
  ATerm p_25 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_6 = ATgetArgument(t, 0);
          {
            ATerm e_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_26);
      t = l_6;
    }
  else
    {
      t = p_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_6;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = map_1_0(v_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm s_6 = NULL;
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_6 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_26);
      t = s_6;
    }
  else
    {
      t = f_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_6;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm v_6 = NULL;
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_6);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm w_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_6);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm n_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_6 = NULL,a_7 = NULL,d_7 = NULL,f_7 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_6 = ATgetArgument(t, 0);
                      a_7 = ATgetArgument(t, 1);
                      d_7 = ATgetArgument(t, 2);
                      f_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_7;
                  t = map_1_0(e_1, t);
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = n_26;
                  {
                    ATerm p_26 = t;
                    int r_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_26);
                      }
                    else
                      {
                        t = p_26;
                        t = dynrule_targs_1_0(f_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_7 = NULL;
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_7 = ATgetArgument(t, 0);
          {
            ATerm u_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_26);
      t = o_7;
    }
  else
    {
      t = s_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_7;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_7 = NULL;
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_7 = ATgetArgument(t, 0);
          {
            ATerm y_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_26);
      t = u_7;
    }
  else
    {
      t = v_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_7;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL,h_0 = NULL,o_0 = NULL,g_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            s_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_8);
        h_0 = t;
        t = s_8;
        t = ContextVar_0_0(t);
        o_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, o_0);
        g_3 = t;
        t = SSLsetAnnotations(g_3, h_0);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, d_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm i_9 (ATerm i_4, ATerm k_4, ATerm l_4, ATerm n_4, ATerm o_4, ATerm q_4, ATerm r_4, ATerm t)
  {
    ATerm c_5 = NULL,e_5 = NULL,f_5 = NULL,j_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,u_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, o_4, term_c_27);
    {
      ATerm d_27 = t;
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
          t = d_27;
        }
    }
    t = new_0_0(t);
    c_5 = t;
    t = n_4;
    t = dummify_0_0(t);
    f_5 = t;
    {
      ATerm i_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_5;
          if((n_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, c_5);
          LocalPopChoice(k_27);
        }
      else
        {
          t = i_27;
          t = f_5;
        }
    }
    e_5 = t;
    t = f_5;
    t = free_vars_3_0(j_0, q_0, tboundin_3_0, t);
    t = map_1_0(x_0, t);
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_4, q_4);
    t = free_vars_3_0(a_1, d_1, tboundin_3_0, t);
    t = filter_1_0(h_1, t);
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_5, m_5);
    t = diff_0_0(t);
    n_5 = t;
    t = new_0_0(t);
    o_5 = t;
    t = i_4;
    t = p_0(t);
    u_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, u_5, (ATerm) ATmakeAppl(sym_Op_2, term_m_27, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Str_1, o_5)))), f_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_4, k_4, l_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, c_5), n_4), o_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_4)))), e_5), (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Str_1, o_5))))), q_4))));
    return(t);
  }
  ATerm t_8 = NULL,u_8 = NULL,w_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL,d_9 = NULL,f_9 = NULL,g_9 = NULL;
  w_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
      a_9 = ATgetArgument(t, 2);
      c_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = c_9;
  if(match_cons(t, sym_Rule_3))
    {
      d_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_9;
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
              ATerm d_28 = t;
              int h_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
                  t = w_8;
                  t = new_0_0(t);
                  f_2 = t;
                  t = d_9;
                  t = dummify_0_0(t);
                  d_2 = t;
                  {
                    ATerm k_28 = t;
                    int p_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = d_2;
                        if((d_9 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, f_2);
                        LocalPopChoice(p_28);
                      }
                    else
                      {
                        t = k_28;
                        t = d_2;
                      }
                  }
                  g_2 = t;
                  t = y_8;
                  t = p_0(t);
                  h_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, h_2, (ATerm) ATmakeAppl(sym_Op_2, term_m_27, (ATerm) ATinsert(ATinsert(ATempty, term_c_27), d_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, y_8, z_8, a_9, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_2), d_9), term_c_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_8)))), g_2), term_c_27)), (ATerm) ATmakeAppl(sym_Seq_2, g_9, term_p_24)))));
                  LocalPopChoice(h_28);
                }
              else
                {
                  t = d_28;
                  t = i_9(y_8, z_8, a_9, d_9, f_9, g_9, w_8, t);
                }
            }
          else
            {
              t = i_9(y_8, z_8, a_9, d_9, f_9, g_9, w_8, t);
            }
        }
      else
        {
          t = t_8;
          t = i_9(y_8, z_8, a_9, d_9, f_9, g_9, w_8, t);
        }
    }
  else
    {
      t = i_9(y_8, z_8, a_9, d_9, f_9, g_9, w_8, t);
    }
  return(t);
}
static ATerm d_11 (ATerm f_144 (ATerm), ATerm v_81, ATerm t_81, ATerm u_81, ATerm y_81, ATerm w_81, ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,o_9 = NULL,p_9 = NULL;
  t = new_0_0(t);
  m_9 = t;
  t = y_81;
  t = dummify_0_0(t);
  l_9 = t;
  {
    ATerm r_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_9;
        if((y_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, m_9);
        LocalPopChoice(t_28);
      }
    else
      {
        t = r_28;
        t = l_9;
      }
  }
  o_9 = t;
  t = v_81;
  t = f_144(t);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, p_9, l_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, v_81, t_81, u_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_9), y_81), term_c_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_81)))), o_9), term_j_29)), (ATerm) ATmakeAppl(sym_Seq_2, w_81, term_p_24))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm f_144 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
      y_9 = ATgetArgument(t, 2);
      {
        ATerm z_29 = ATgetArgument(t, 3);
        if(match_cons(z_29, sym_Rule_3))
          {
            a_10 = ATgetArgument(z_29, 0);
            {
              ATerm b_30 = ATgetArgument(z_29, 1);
              if(match_cons(b_30, sym_Op_2))
                {
                  ATerm d_30 = ATgetArgument(b_30, 0);
                  if((ATgetSymbol((ATermAppl) d_30) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm g_30 = ATgetArgument(b_30, 1);
                    if(((ATgetType(g_30) != AT_LIST) || !(ATisEmpty(g_30))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            c_10 = ATgetArgument(z_29, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_11(f_144, w_9, x_9, y_9, a_10, c_10, t);
  return(t);
}
static ATerm x_18 (ATerm l_12, ATerm p_12, ATerm t)
{
  t = l_12;
  {
    ATerm k_30 = t;
    if((PushChoice() == 0))
      {
        ATerm p_13 = NULL,q_13 = NULL,v_13 = NULL,w_13 = NULL,i_3 = NULL;
        w_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_13 = ATgetFirst((ATermList) t);
            v_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_13);
        p_13 = t;
        t = v_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_13), q_13);
        i_3 = t;
        t = SSLsetAnnotations(i_3, p_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_30;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_24, l_12);
  return(t);
}
static ATerm y_18 (ATerm x_13, ATerm y_13, ATerm t)
{
  t = x_13;
  {
    ATerm l_30 = t;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,j_3 = NULL;
        d_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_14 = ATgetFirst((ATermList) t);
            c_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_14);
        a_14 = t;
        t = c_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(c_14), b_14);
        j_3 = t;
        t = SSLsetAnnotations(j_3, a_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_30;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_30, x_13);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm z_14 = NULL,e_15 = NULL,q_2 = NULL;
  z_14 = t;
  t = SSL_explode_term(z_14);
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_31 = ATgetArgument(t, 1);
        if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
          {
            e_15 = ATgetFirst((ATermList) f_31);
            {
              ATerm h_31 = (ATerm) ATgetNext((ATermList) f_31);
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
      ATerm i_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_31 = ATgetArgument(t, 1);
        if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
          {
            ATerm n_31 = ATgetFirst((ATermList) k_31);
            ATerm p_31 = (ATerm) ATgetNext((ATermList) k_31);
            if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
              {
                q_2 = ATgetFirst((ATermList) p_31);
                {
                  ATerm q_31 = (ATerm) ATgetNext((ATermList) p_31);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_31, (ATerm) ATinsert(ATinsert(ATempty, q_2), e_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_31, (ATerm) ATinsert(ATinsert(ATempty, v_15), u_15));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_31, (ATerm) ATinsert(ATinsert(ATempty, y_15), x_15));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_31, (ATerm) ATinsert(ATinsert(ATempty, s_16), r_16));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_b_32;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_31, (ATerm) ATinsert(ATinsert(ATempty, z_16), y_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm e_14 = NULL,k_14 = NULL,l_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      {
        ATerm x_14 = NULL;
        t = u_14;
        t = foldr_2_0(i_1, j_1, t);
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, t_14, x_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          t_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, t_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              t_14 = ATgetArgument(t, 0);
              {
                ATerm v_2 = NULL;
                t = t_14;
                {
                  ATerm e_32 = t;
                  int f_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_g_32;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_h_32;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_i_32;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_j_32;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_k_32;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(f_32);
                    }
                  else
                    {
                      t = e_32;
                      {
                        ATerm x_2 = NULL;
                        t = SSL_explode_string(t_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm m_32 = ATgetFirst((ATermList) t);
                            if(((ATgetType(m_32) != AT_INT) || (ATgetInt((ATermInt) m_32) != 39)))
                              _fail(t);
                            {
                              ATerm p_32 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
                                {
                                  x_2 = ATgetFirst((ATermList) p_32);
                                  {
                                    ATerm q_32 = (ATerm) ATgetNext((ATermList) p_32);
                                    if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
                                      {
                                        ATerm r_32 = ATgetFirst((ATermList) q_32);
                                        if(((ATgetType(r_32) != AT_INT) || (ATgetInt((ATermInt) r_32) != 39)))
                                          _fail(t);
                                        {
                                          ATerm t_32 = (ATerm) ATgetNext((ATermList) q_32);
                                          if(((ATgetType(t_32) != AT_LIST) || !(ATisEmpty(t_32))))
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
              ATerm v_32 = t;
              int w_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      t_14 = ATgetArgument(t, 0);
                      {
                        ATerm z_32 = ATgetArgument(t, 1);
                      }
                      r_14 = ATgetArgument(t, 2);
                      e_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_32);
                  t = (ATerm) ATmakeAppl(sym_Con_3, t_14, r_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_14), (ATerm) ATempty));
                }
              else
                {
                  t = v_32;
                  {
                    ATerm a_33 = t;
                    int b_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            t_14 = ATgetArgument(t, 0);
                            {
                              ATerm c_33 = ATgetArgument(t, 1);
                            }
                            r_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_33);
                        t = (ATerm) ATmakeAppl(sym_Con_3, t_14, r_14, term_f_33);
                      }
                    else
                      {
                        t = a_33;
                        if(match_cons(t, sym_Con1_2))
                          {
                            t_14 = ATgetArgument(t, 0);
                            u_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, t_14, u_14, term_f_33);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                t_14 = ATgetArgument(t, 0);
                                u_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm k_1 (ATerm t)
                                  {
                                    t = u_14;
                                    return(t);
                                  }
                                  t = t_14;
                                  t = foldr_2_0(k_1, l_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    t_14 = ATgetArgument(t, 0);
                                    t = t_14;
                                    t = foldr_2_0(m_1, n_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        t_14 = ATgetArgument(t, 0);
                                        t = t_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            k_14 = ATgetFirst((ATermList) t);
                                            l_14 = (ATerm) ATgetNext((ATermList) t);
                                            t = l_14;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm h_33 = t;
                                                int j_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = x_18(t_14, s_14, t);
                                                    LocalPopChoice(j_33);
                                                  }
                                                else
                                                  {
                                                    t = h_33;
                                                    t = k_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_18(t_14, s_14, t);
                                              }
                                          }
                                        else
                                          {
                                            t = x_18(t_14, s_14, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            t_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, t_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                t_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, t_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    t_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, t_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        t_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            t_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                t_14 = ATgetArgument(t, 0);
                                                                u_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_14), u_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    t_14 = ATgetArgument(t, 0);
                                                                    u_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm o_1 (ATerm t)
                                                                      {
                                                                        t = u_14;
                                                                        return(t);
                                                                      }
                                                                      t = t_14;
                                                                      t = foldr_2_0(o_1, p_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        t_14 = ATgetArgument(t, 0);
                                                                        t = t_14;
                                                                        t = foldr_2_0(q_1, r_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            t_14 = ATgetArgument(t, 0);
                                                                            u_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_s_30, (ATerm) ATinsert(CheckATermList(u_14), t_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                t_14 = ATgetArgument(t, 0);
                                                                                t = t_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    k_14 = ATgetFirst((ATermList) t);
                                                                                    l_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = l_14;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm l_33 = t;
                                                                                        int m_33 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = y_18(t_14, s_14, t);
                                                                                            LocalPopChoice(m_33);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_33;
                                                                                            t = k_14;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_18(t_14, s_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_18(t_14, s_14, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_o_33;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        t_14 = ATgetArgument(t, 0);
                                                                                        u_14 = ATgetArgument(t, 1);
                                                                                        t = u_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            q_14 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_r_33, (ATerm) ATinsert(ATinsert(ATempty, q_14), t_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            t_14 = ATgetArgument(t, 0);
                                                                                            t = t_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                t_14 = ATgetArgument(t, 0);
                                                                                                u_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, t_14, u_14, term_t_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    t_14 = ATgetArgument(t, 0);
                                                                                                    u_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, t_14, u_14, term_t_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        t_14 = ATgetArgument(t, 0);
                                                                                                        u_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, t_14, (ATerm)ATempty, u_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            t_14 = ATgetArgument(t, 0);
                                                                                                            u_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, u_14, t_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                t_14 = ATgetArgument(t, 0);
                                                                                                                u_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, t_14, u_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    t_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, t_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        t_14 = ATgetArgument(t, 0);
                                                                                                                        u_14 = ATgetArgument(t, 1);
                                                                                                                        r_14 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_14, u_14, (ATerm)ATempty, r_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            t_14 = ATgetArgument(t, 0);
                                                                                                                            u_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_14, (ATerm)ATempty, (ATerm)ATempty, u_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                t_14 = ATgetArgument(t, 0);
                                                                                                                                u_14 = ATgetArgument(t, 1);
                                                                                                                                r_14 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_14, u_14, (ATerm)ATempty, r_14);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    t_14 = ATgetArgument(t, 0);
                                                                                                                                    u_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_14, (ATerm)ATempty, (ATerm)ATempty, u_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        t_14 = ATgetArgument(t, 0);
                                                                                                                                        u_14 = ATgetArgument(t, 1);
                                                                                                                                        r_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_14, u_14, (ATerm)ATempty, r_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            t_14 = ATgetArgument(t, 0);
                                                                                                                                            u_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_14, (ATerm)ATempty, (ATerm)ATempty, u_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm s_33 = ATgetArgument(t, 0);
                                                                                                                                                u_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, u_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      e_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
      {
        ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
        t = d_19;
        t = new_0_0(t);
        l_19 = t;
        t = new_0_0(t);
        m_19 = t;
        t = new_0_0(t);
        n_19 = t;
        t = new_0_0(t);
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_19), n_19), m_19), l_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, l_19), (ATerm) ATmakeAppl(sym_Var_1, n_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, e_19, (ATerm)ATmakeAppl(sym_Var_1, l_19), (ATerm) ATmakeAppl(sym_Var_1, m_19)), (ATerm) ATmakeAppl(sym_BAM_3, c_19, (ATerm)ATmakeAppl(sym_Var_1, n_19), (ATerm) ATmakeAppl(sym_Var_1, o_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_t_33, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_19)), (ATerm) ATmakeAppl(sym_Var_1, m_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm p_19 = NULL,q_19 = NULL,s_19 = NULL,t_19 = NULL;
            t = d_19;
            t = new_0_0(t);
            s_19 = t;
            t = e_19;
            {
              static ATerm s_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((p_19 != NULL) && (p_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_19 = ATgetArgument(t, 0);
                    if(((q_19 != NULL) && (q_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, s_19);
                return(t);
              }
              t = oncetd_1_0(s_1, t);
            }
            t_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_33, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_19)), not_null(p_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_19)), (ATerm) ATmakeAppl(sym_Build_1, t_19))));
          }
        }
      else
        {
          ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,e_20 = NULL,f_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              e_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_19;
          t = new_0_0(t);
          z_19 = t;
          t = new_0_0(t);
          e_20 = t;
          t = e_19;
          {
            static ATerm t_1 (ATerm t)
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
            t = oncetd_1_0(t_1, t);
          }
          f_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_33, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_20))))), (ATerm)ATmakeAppl(sym_Var_1, z_19), (ATerm) ATmakeAppl(sym_Op_2, term_v_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_19)), not_null(x_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  h_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL,l_20 = NULL,o_20 = NULL,r_20 = NULL;
        t = h_20;
        t = new_0_0(t);
        o_20 = t;
        t = i_20;
        {
          static ATerm u_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_20 != NULL) && (k_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_20 = ATgetArgument(t, 0);
                if(((l_20 != NULL) && (l_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_20), k_20);
            return(t);
          }
          t = pat_td_1_0(u_1, t);
        }
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_33, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_20))))));
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_20 = NULL,u_20 = NULL,a_21 = NULL;
              t = h_20;
              t = new_0_0(t);
              u_20 = t;
              t = i_20;
              {
                static ATerm v_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((t_20 != NULL) && (t_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, u_20);
                  return(t);
                }
                t = pat_td_1_0(v_1, t);
              }
              a_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_20)), not_null(t_20))));
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              {
                ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
                t = h_20;
                t = new_0_0(t);
                e_21 = t;
                t = i_20;
                {
                  static ATerm w_1 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_21);
                    return(t);
                  }
                  t = pat_td_1_0(w_1, t);
                }
                f_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, e_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_21)), not_null(d_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm o_142 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_142(t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,l_27 = NULL;
        f_27 = t;
        if(match_cons(t, sym_Op_2))
          {
            g_27 = ATgetArgument(t, 0);
            l_27 = ATgetArgument(t, 1);
            {
              ATerm d_3 = NULL,l_3 = NULL,o_3 = NULL;
              t = SSLgetAnnotations(f_27);
              d_3 = t;
              t = l_27;
              {
                static ATerm x_1 (ATerm t)
                {
                  t = pat_td_1_0(o_142, t);
                  return(t);
                }
                t = fetch_1_0(x_1, t);
              }
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_27, l_3);
              o_3 = t;
              t = SSLsetAnnotations(o_3, d_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                g_27 = ATgetArgument(t, 0);
                l_27 = ATgetArgument(t, 1);
                {
                  ATerm c_34 = t;
                  int d_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_4 = NULL,j_4 = NULL,r_3 = NULL;
                      t = SSLgetAnnotations(f_27);
                      c_4 = t;
                      t = l_27;
                      t = pat_td_1_0(o_142, t);
                      j_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, g_27, j_4);
                      r_3 = t;
                      t = SSLsetAnnotations(r_3, c_4);
                      LocalPopChoice(d_34);
                    }
                  else
                    {
                      t = c_34;
                      {
                        ATerm b_5 = NULL,k_5 = NULL,t_3 = NULL;
                        t = SSLgetAnnotations(f_27);
                        b_5 = t;
                        t = g_27;
                        t = pat_td_1_0(o_142, t);
                        k_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, k_5, l_27);
                        t_3 = t;
                        t = SSLsetAnnotations(t_3, b_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    g_27 = ATgetArgument(t, 0);
                    l_27 = ATgetArgument(t, 1);
                    e_27 = ATgetArgument(t, 2);
                    {
                      ATerm r_6 = NULL,e_7 = NULL,u_3 = NULL;
                      t = SSLgetAnnotations(f_27);
                      r_6 = t;
                      t = e_27;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(o_142, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      e_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, g_27, l_27, e_7);
                      u_3 = t;
                      t = SSLsetAnnotations(u_3, r_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        g_27 = ATgetArgument(t, 0);
                        l_27 = ATgetArgument(t, 1);
                        e_27 = ATgetArgument(t, 2);
                        {
                          ATerm f_8 = NULL,k_8 = NULL,v_3 = NULL;
                          t = SSLgetAnnotations(f_27);
                          f_8 = t;
                          t = e_27;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(o_142, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          k_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, g_27, l_27, k_8);
                          v_3 = t;
                          t = SSLsetAnnotations(v_3, f_8);
                        }
                      }
                    else
                      {
                        ATerm k_9 = NULL,r_9 = NULL,w_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            g_27 = ATgetArgument(t, 0);
                            l_27 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_27);
                        k_9 = t;
                        t = l_27;
                        t = pat_td_1_0(o_142, t);
                        r_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, g_27, r_9);
                        w_3 = t;
                        t = SSLsetAnnotations(w_3, k_9);
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
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL,y_27 = NULL,a_28 = NULL,b_28 = NULL;
        t = t_27;
        t = new_0_0(t);
        a_28 = t;
        t = u_27;
        {
          static ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((v_27 != NULL) && (v_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_27 = ATgetArgument(t, 0);
                if(((y_27 != NULL) && (y_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_28);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_27)), not_null(v_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_28)))), (ATerm) ATmakeAppl(sym_Build_1, b_28)));
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_28 = NULL,e_28 = NULL,f_28 = NULL;
              t = t_27;
              t = new_0_0(t);
              e_28 = t;
              t = u_27;
              {
                static ATerm b_2 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, e_28);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              f_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_28)))), (ATerm) ATmakeAppl(sym_Build_1, f_28)));
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              {
                ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL,s_28 = NULL;
                t = t_27;
                t = new_0_0(t);
                l_28 = t;
                t = u_27;
                {
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_28 = ATgetArgument(t, 0);
                        if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_28);
                    return(t);
                  }
                  t = pat_td_1_0(c_2, t);
                }
                s_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_28), not_null(j_28), (ATerm) ATmakeAppl(sym_Var_1, l_28))), (ATerm) ATmakeAppl(sym_Build_1, s_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm k_34 = t;
  if((PushChoice() == 0))
    {
      ATerm f_29 = NULL,g_29 = NULL,l_29 = NULL,j_8 = NULL;
      l_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_29);
      f_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_29);
      j_8 = t;
      t = SSLsetAnnotations(j_8, f_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_34;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm j_2 (ATerm t)
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
static ATerm k_2 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      if(match_cons(m_34, sym__2))
        {
          o_29 = ATgetArgument(m_34, 0);
          p_29 = ATgetArgument(m_34, 1);
        }
      else
        _fail(t);
      {
        ATerm o_34 = ATgetArgument(t, 1);
        if(match_cons(o_34, sym__2))
          {
            q_29 = ATgetArgument(o_34, 0);
            r_29 = ATgetArgument(o_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_29), o_29), (ATerm) ATinsert(CheckATermList(r_29), p_29));
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_29 = ATgetFirst((ATermList) t);
      t_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_29, t_29);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if(match_cons(q_34, sym__2))
        {
          u_29 = ATgetArgument(q_34, 0);
          w_29 = ATgetArgument(q_34, 1);
        }
      else
        _fail(t);
      {
        ATerm r_34 = ATgetArgument(t, 1);
        if(match_cons(r_34, sym__2))
          {
            x_29 = ATgetArgument(r_34, 0);
            y_29 = ATgetArgument(r_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_29), u_29), (ATerm) ATinsert(CheckATermList(y_29), w_29));
  return(t);
}
static ATerm f_11 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,d_29 = NULL,e_29 = NULL,n_8 = NULL;
  t = o_72;
  t = fetch_1_0(e_2, t);
  t = o_72;
  t = genzip_4_0(i_2, j_2, k_2, LiftPrimArg_0_0, t);
  e_29 = t;
  if(match_cons(t, sym__2))
    {
      y_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_29);
  x_28 = t;
  t = y_28;
  t = concat_0_0(t);
  a_29 = t;
  t = z_28;
  t = genzip_4_0(l_2, m_2, n_2, _id, t);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_29, d_29);
  n_8 = t;
  t = SSLsetAnnotations(n_8, x_28);
  if(match_cons(t, sym__2))
    {
      u_28 = ATgetArgument(t, 0);
      {
        ATerm s_34 = ATgetArgument(t, 1);
        if(match_cons(s_34, sym__2))
          {
            v_28 = ATgetArgument(s_34, 0);
            w_28 = ATgetArgument(s_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_28), (ATerm) ATmakeAppl(sym_CallT_3, m_72, n_72, w_28)));
  return(t);
}
static ATerm b_31 (ATerm e_30, ATerm t)
{
  ATerm h_30 = NULL;
  t = e_30;
  {
    ATerm t_34 = t;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL,j_30 = NULL,x_30 = NULL,j_9 = NULL;
        x_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            j_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_30);
        i_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, j_30);
        j_9 = t;
        t = SSLsetAnnotations(j_9, i_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_34;
      }
  }
  t = new_0_0(t);
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_30)))), (ATerm) ATmakeAppl(sym_Var_1, h_30)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  y_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_30 = ATgetArgument(t, 0);
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_31(y_30, t);
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATmakeAppl(sym_Var_1, z_30)));
          }
      }
    }
  else
    {
      t = b_31(y_30, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm w_34 = t;
  if((PushChoice() == 0))
    {
      ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,o_11 = NULL;
      w_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_10);
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_10);
      o_11 = t;
      t = SSLsetAnnotations(o_11, u_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_34;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_10 = ATgetFirst((ATermList) t);
      y_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_10, y_10);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_34 = ATgetArgument(t, 0);
      if(match_cons(x_34, sym__2))
        {
          z_10 = ATgetArgument(x_34, 0);
          a_11 = ATgetArgument(x_34, 1);
        }
      else
        _fail(t);
      {
        ATerm a_35 = ATgetArgument(t, 1);
        if(match_cons(a_35, sym__2))
          {
            b_11 = ATgetArgument(a_35, 0);
            c_11 = ATgetArgument(a_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_11), z_10), (ATerm) ATinsert(CheckATermList(c_11), a_11));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_11 = NULL,i_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_11 = ATgetFirst((ATermList) t);
      i_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_11, i_11);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_35 = ATgetArgument(t, 0);
      if(match_cons(c_35, sym__2))
        {
          l_11 = ATgetArgument(c_35, 0);
          m_11 = ATgetArgument(c_35, 1);
        }
      else
        _fail(t);
      {
        ATerm d_35 = ATgetArgument(t, 1);
        if(match_cons(d_35, sym__2))
          {
            n_11 = ATgetArgument(d_35, 0);
            p_11 = ATgetArgument(d_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_11), l_11), (ATerm) ATinsert(CheckATermList(p_11), m_11));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm h_35 = t;
  if((PushChoice() == 0))
    {
      ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,s_11 = NULL;
      u_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_13);
      s_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_13);
      s_11 = t;
      t = SSLsetAnnotations(s_11, s_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_35;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_14 = ATgetFirst((ATermList) t);
      g_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_14, g_14);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(match_cons(j_35, sym__2))
        {
          h_14 = ATgetArgument(j_35, 0);
          i_14 = ATgetArgument(j_35, 1);
        }
      else
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(match_cons(k_35, sym__2))
          {
            j_14 = ATgetArgument(k_35, 0);
            m_14 = ATgetArgument(k_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_14), h_14), (ATerm) ATinsert(CheckATermList(m_14), i_14));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_14 = ATgetFirst((ATermList) t);
      o_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_14, o_14);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm p_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(match_cons(m_35, sym__2))
        {
          p_14 = ATgetArgument(m_35, 0);
          a_15 = ATgetArgument(m_35, 1);
        }
      else
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(match_cons(n_35, sym__2))
          {
            b_15 = ATgetArgument(n_35, 0);
            c_15 = ATgetArgument(n_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_15), p_14), (ATerm) ATinsert(CheckATermList(c_15), a_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm b_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      b_36 = ATgetArgument(t, 2);
      {
        ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,q_11 = NULL;
        t = b_36;
        t = fetch_1_0(o_2, t);
        t = b_36;
        t = genzip_4_0(p_2, r_2, s_2, LiftPrimArg_0_0, t);
        t_10 = t;
        if(match_cons(t, sym__2))
          {
            p_10 = ATgetArgument(t, 0);
            q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_10);
        o_10 = t;
        t = p_10;
        t = concat_0_0(t);
        r_10 = t;
        t = q_10;
        t = genzip_4_0(t_2, u_2, w_2, _id, t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, s_10);
        q_11 = t;
        t = SSLsetAnnotations(q_11, o_10);
        if(match_cons(t, sym__2))
          {
            l_10 = ATgetArgument(t, 0);
            {
              ATerm o_35 = ATgetArgument(t, 1);
              if(match_cons(o_35, sym__2))
                {
                  m_10 = ATgetArgument(o_35, 0);
                  n_10 = ATgetArgument(o_35, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_10), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, i_36, n_10)));
      }
    }
  else
    {
      ATerm k_12 = NULL,q_12 = NULL,b_13 = NULL,h_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,r_13 = NULL,y_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_36 = ATgetArgument(t, 0);
          i_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_36;
      t = fetch_1_0(y_2, t);
      t = i_36;
      t = genzip_4_0(z_2, a_3, b_3, LiftPrimArg_0_0, t);
      r_13 = t;
      if(match_cons(t, sym__2))
        {
          l_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_13);
      h_13 = t;
      t = l_13;
      t = concat_0_0(t);
      n_13 = t;
      t = m_13;
      t = genzip_4_0(c_3, e_3, f_3, _id, t);
      o_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_13, o_13);
      y_11 = t;
      t = SSLsetAnnotations(y_11, h_13);
      if(match_cons(t, sym__2))
        {
          k_12 = ATgetArgument(t, 0);
          {
            ATerm p_35 = ATgetArgument(t, 1);
            if(match_cons(p_35, sym__2))
              {
                q_12 = ATgetArgument(p_35, 0);
                b_13 = ATgetArgument(p_35, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_12), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, (ATerm)ATempty, b_13)));
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm j_37 = NULL,o_37 = NULL,s_37 = NULL,u_37 = NULL;
  u_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      j_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      s_37 = ATgetArgument(t, 2);
      {
        ATerm l_16 = NULL,q_21 = NULL;
        t = SSLgetAnnotations(u_37);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, j_37, o_37, s_37);
        q_21 = t;
        t = SSLsetAnnotations(q_21, l_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = u_37;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_35 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_35;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  if(match_cons(t, sym_Con_3))
    {
      h_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
      f_39 = ATgetArgument(t, 2);
      {
        ATerm k_17 = NULL,v_22 = NULL;
        t = SSLgetAnnotations(g_39);
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, h_39, i_39, f_39);
        v_22 = t;
        t = SSLsetAnnotations(v_22, k_17);
      }
    }
  else
    {
      ATerm a_19 = NULL,w_22 = NULL;
      if(match_cons(t, sym_App_2))
        {
          h_39 = ATgetArgument(t, 0);
          i_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_39);
      a_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, h_39, i_39);
      w_22 = t;
      t = SSLsetAnnotations(w_22, a_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm r_35 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_35;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm s_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      s_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_39;
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
static ATerm g_11 (ATerm z_67, ATerm a_68, ATerm b_68, ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,d_41 = NULL;
  t = new_0_0(t);
  w_40 = t;
  t = z_67;
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm s_35 = ATgetArgument(t, 0);
          if(match_cons(s_35, sym_Var_1))
            {
              if(((v_40 != NULL) && (v_40 != ATgetArgument(s_35, 0))))
                _fail(ATgetArgument(s_35, 0));
              else
                v_40 = ATgetArgument(s_35, 0);
            }
          else
            _fail(t);
          if(((r_40 != NULL) && (r_40 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_40 = ATgetArgument(t, 1);
          {
            ATerm t_35 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, v_40);
      return(t);
    }
    t = oncetd_1_0(m_3, t);
  }
  x_40 = t;
  t = a_68;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_35 = ATgetArgument(t, 0);
          if(match_cons(u_35, sym_Var_1))
            {
              if(((v_40 != NULL) && (v_40 != ATgetArgument(u_35, 0))))
                _fail(ATgetArgument(u_35, 0));
              else
                v_40 = ATgetArgument(u_35, 0);
            }
          else
            _fail(t);
          if(((u_40 != NULL) && (u_40 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_40 = ATgetArgument(t, 1);
          {
            ATerm v_35 = ATgetArgument(t, 2);
            if(match_cons(v_35, sym_CallT_3))
              {
                if(((q_40 != NULL) && (q_40 != ATgetArgument(v_35, 0))))
                  _fail(ATgetArgument(v_35, 0));
                else
                  q_40 = ATgetArgument(v_35, 0);
                {
                  ATerm w_35 = ATgetArgument(v_35, 1);
                  if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
                    _fail(t);
                }
                {
                  ATerm x_35 = ATgetArgument(v_35, 2);
                  if(((ATgetType(x_35) != AT_LIST) || !(ATisEmpty(x_35))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_40);
      return(t);
    }
    t = oncetd_1_0(n_3, t);
  }
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_40), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, x_40, d_41, (ATerm) ATmakeAppl(sym_Seq_2, b_68, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(q_40), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_40), not_null(u_40), term_t_24))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_40)), (ATerm) ATmakeAppl(sym_Var_1, w_40))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_42 = NULL,c_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
          i_42 = t;
          if(match_cons(t, sym_SRule_1))
            {
              j_42 = ATgetArgument(t, 0);
              t = j_42;
              if(match_cons(t, sym_Rule_3))
                {
                  b_42 = ATgetArgument(t, 0);
                  c_42 = ATgetArgument(t, 1);
                  h_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = i_42;
              t = g_11(b_42, c_42, h_42, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm c_20 = NULL,m_20 = NULL,z_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  j_42 = ATgetArgument(t, 0);
                  k_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_42);
              c_20 = t;
              t = k_42;
              t = desugarRule_0_0(t);
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, j_42, m_20);
              z_22 = t;
              t = SSLsetAnnotations(z_22, c_20);
            }
          LocalPopChoice(d_36);
        }
      else
        {
          t = a_36;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
    }
  t = repeat_2_0(q_3, _id, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
      {
        ATerm l_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,w_43 = NULL;
            s_43 = t;
            if(match_cons(t, sym_CallT_3))
              {
                t_43 = ATgetArgument(t, 0);
                u_43 = ATgetArgument(t, 1);
                w_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_43;
            t = f_11(t_43, u_43, w_43, t);
            LocalPopChoice(n_36);
          }
        else
          {
            t = l_36;
            {
              ATerm o_36 = t;
              int p_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(p_36);
                }
              else
                {
                  t = o_36;
                  {
                    ATerm q_36 = t;
                    int r_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(r_36);
                      }
                    else
                      {
                        t = q_36;
                        {
                          ATerm s_36 = t;
                          int t_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_36 = t;
                              int w_36 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_44;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      d_44 = ATgetArgument(t, 0);
                                      t = d_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          d_44 = ATgetArgument(t, 0);
                                          e_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, d_44, e_44);
                                    }
                                  LocalPopChoice(w_36);
                                }
                              else
                                {
                                  t = v_36;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(t_36);
                            }
                          else
                            {
                              t = s_36;
                              {
                                ATerm x_36 = t;
                                int y_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(y_36);
                                  }
                                else
                                  {
                                    t = x_36;
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
  t = topdown_1_0(p_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm e_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_48 = ATgetArgument(t, 0);
      t = e_48;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_48 = ATgetArgument(t, 0);
          {
            ATerm z_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_48;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_48), (ATerm) ATempty);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm o_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_48 = ATgetArgument(t, 0);
      t = o_48;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_48 = ATgetArgument(t, 0);
          {
            ATerm a_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_48;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, o_48);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm b_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_49);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm b_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_37);
    }
  else
    {
      t = b_37;
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            {
              ATerm g_37 = t;
              int h_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_49 = ATgetArgument(t, 0);
                      e_49 = ATgetArgument(t, 1);
                      f_49 = ATgetArgument(t, 2);
                      g_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_49;
                  t = map_1_0(a_4, t);
                  LocalPopChoice(h_37);
                }
              else
                {
                  t = g_37;
                  {
                    ATerm i_37 = t;
                    int k_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_37);
                      }
                    else
                      {
                        t = i_37;
                        t = dynrule_targs_1_0(b_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm u_49 = NULL;
  ATerm l_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_49 = ATgetArgument(t, 0);
          {
            ATerm p_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_37);
      t = u_49;
    }
  else
    {
      t = l_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_49;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = map_1_0(d_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm c_50 = NULL;
  ATerm q_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_50 = ATgetArgument(t, 0);
          {
            ATerm v_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_37);
      t = c_50;
    }
  else
    {
      t = q_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_50;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm j_50 = NULL;
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_50);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_50);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      {
        ATerm y_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_38);
          }
        else
          {
            t = y_37;
            {
              ATerm b_38 = t;
              int d_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,s_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_50 = ATgetArgument(t, 0);
                      n_50 = ATgetArgument(t, 1);
                      o_50 = ATgetArgument(t, 2);
                      s_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_50;
                  t = map_1_0(h_4, t);
                  LocalPopChoice(d_38);
                }
              else
                {
                  t = b_38;
                  {
                    ATerm e_38 = t;
                    int f_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_38);
                      }
                    else
                      {
                        t = e_38;
                        t = dynrule_targs_1_0(m_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm m_51 = NULL;
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_51 = ATgetArgument(t, 0);
          {
            ATerm i_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_38);
      t = m_51;
    }
  else
    {
      t = g_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_51;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = map_1_0(p_4, t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_51 = NULL;
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_51 = ATgetArgument(t, 0);
          {
            ATerm l_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_38);
      t = u_51;
    }
  else
    {
      t = j_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_51;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_52 = NULL,x_20 = NULL,z_20 = NULL,f_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            i_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_51);
        x_20 = t;
        t = i_52;
        t = ContextVar_0_0(t);
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, z_20);
        f_23 = t;
        t = SSLsetAnnotations(f_23, x_20);
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, y_51);
  return(t);
}
static ATerm h_11 (ATerm e_144 (ATerm), ATerm c_81, ATerm z_80, ATerm a_81, ATerm j_81, ATerm n_81, ATerm o_81, ATerm t)
{
  ATerm v_45 = NULL,z_45 = NULL,b_46 = NULL,k_46 = NULL,v_46 = NULL,g_47 = NULL,h_47 = NULL,j_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,q_47 = NULL,s_47 = NULL,v_47 = NULL,a_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_81, term_c_27);
  {
    ATerm o_38 = t;
    if((PushChoice() == 0))
      {
        ATerm b_48 = NULL;
        if(match_cons(t, sym__2))
          {
            b_48 = ATgetArgument(t, 0);
            if((b_48 != ATgetArgument(t, 1)))
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
        t = o_38;
      }
  }
  t = term_p_38;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_38, c_81);
  t = x_12(a_48, c_81, t);
  v_45 = t;
  t = term_q_38;
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_38, c_81);
  t = x_12(v_47, c_81, t);
  z_45 = t;
  t = new_0_0(t);
  b_46 = t;
  t = z_80;
  t = map_1_0(s_3, t);
  k_46 = t;
  t = a_81;
  t = map_1_0(x_3, t);
  v_46 = t;
  t = new_0_0(t);
  g_47 = t;
  t = j_81;
  t = dummify_0_0(t);
  j_47 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_47;
        if((j_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, g_47);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = j_47;
      }
  }
  h_47 = t;
  t = j_47;
  t = free_vars_3_0(y_3, z_3, tboundin_3_0, t);
  t = map_1_0(e_4, t);
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_81, o_81);
  t = free_vars_3_0(f_4, g_4, tboundin_3_0, t);
  t = filter_1_0(s_4, t);
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
  t = diff_0_0(t);
  n_47 = t;
  t = new_0_0(t);
  q_47 = t;
  t = c_81;
  t = e_144(t);
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, s_47, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATinsert(CheckATermList(n_47), (ATerm) ATmakeAppl(sym_Str_1, q_47)))), j_47)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, z_45, z_80, a_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATinsert(CheckATermList(n_47), (ATerm) ATmakeAppl(sym_Str_1, q_47)))), j_81)), n_81, (ATerm) ATmakeAppl(sym_Seq_2, term_z_38, o_81)))), (ATerm) ATmakeAppl(sym_RDefT_4, v_45, z_80, a_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_47), j_81), (ATerm)ATmakeAppl(sym_Var_1, b_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_81)))), h_47), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_38, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_45), k_46, v_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_w_38), (ATerm) ATmakeAppl(sym_Var_1, g_47)))))), (ATerm) ATmakeAppl(sym_Var_1, b_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, c_81, z_80, a_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_47), j_81), n_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_29, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_81)))), h_47), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATinsert(CheckATermList(n_47), (ATerm) ATmakeAppl(sym_Str_1, q_47)))), term_t_38))), o_81)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm a_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
      r_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          s_21 = ATgetArgument(t, 0);
          t_21 = ATgetArgument(t, 1);
          u_21 = ATgetArgument(t, 2);
          w_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_21;
      if(match_cons(t, sym_Rule_3))
        {
          x_21 = ATgetArgument(t, 0);
          y_21 = ATgetArgument(t, 1);
          z_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_21;
      t = h_11(u_4, s_21, t_21, u_21, x_21, y_21, z_21, t);
      LocalPopChoice(d_39);
    }
  else
    {
      t = a_39;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(v_4, t);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_22))));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_22))));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm x_4 (ATerm t)
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
static ATerm y_4 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_39 = ATgetArgument(t, 0);
      if(match_cons(m_39, sym__2))
        {
          k_22 = ATgetArgument(m_39, 0);
          l_22 = ATgetArgument(m_39, 1);
        }
      else
        _fail(t);
      {
        ATerm n_39 = ATgetArgument(t, 1);
        if(match_cons(n_39, sym__2))
          {
            m_22 = ATgetArgument(n_39, 0);
            n_22 = ATgetArgument(n_39, 1);
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
static ATerm z_4 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
      h_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          i_23 = ATgetArgument(t, 0);
          j_23 = ATgetArgument(t, 1);
          k_23 = ATgetArgument(t, 2);
          v_23 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_23;
      if(match_cons(t, sym_Rule_3))
        {
          w_23 = ATgetArgument(t, 0);
          x_23 = ATgetArgument(t, 1);
          y_23 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_23;
      t = h_11(a_5, i_23, j_23, k_23, w_23, x_23, y_23, t);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(d_5, t);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_24))));
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_39, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_24))));
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_25 = ATgetFirst((ATermList) t);
      b_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_25, b_25);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      if(match_cons(a_40, sym__2))
        {
          c_25 = ATgetArgument(a_40, 0);
          d_25 = ATgetArgument(a_40, 1);
        }
      else
        _fail(t);
      {
        ATerm b_40 = ATgetArgument(t, 1);
        if(match_cons(b_40, sym__2))
          {
            e_25 = ATgetArgument(b_40, 0);
            f_25 = ATgetArgument(b_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_25), c_25), (ATerm) ATinsert(CheckATermList(f_25), d_25));
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(p_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm f_57 = NULL;
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_57))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm g_57 = NULL,k_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_57 = ATgetFirst((ATermList) t);
      k_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_57, k_57);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_57 = NULL,n_57 = NULL,r_57 = NULL,u_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_40 = ATgetArgument(t, 0);
      if(match_cons(e_40, sym__2))
        {
          l_57 = ATgetArgument(e_40, 0);
          n_57 = ATgetArgument(e_40, 1);
        }
      else
        _fail(t);
      {
        ATerm f_40 = ATgetArgument(t, 1);
        if(match_cons(f_40, sym__2))
          {
            r_57 = ATgetArgument(f_40, 0);
            u_57 = ATgetArgument(f_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_57), l_57), (ATerm) ATinsert(CheckATermList(u_57), n_57));
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(w_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_57 = NULL;
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, x_57))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm y_57 = NULL,d_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_57 = ATgetFirst((ATermList) t);
      d_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_57, d_58);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm i_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_40 = ATgetArgument(t, 0);
      if(match_cons(m_40, sym__2))
        {
          i_58 = ATgetArgument(m_40, 0);
          n_58 = ATgetArgument(m_40, 1);
        }
      else
        _fail(t);
      {
        ATerm n_40 = ATgetArgument(t, 1);
        if(match_cons(n_40, sym__2))
          {
            o_58 = ATgetArgument(n_40, 0);
            p_58 = ATgetArgument(n_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_58), i_58), (ATerm) ATinsert(CheckATermList(p_58), n_58));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  c_57 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      d_57 = ATgetArgument(t, 0);
      {
        ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,o_21 = NULL,p_21 = NULL,l_23 = NULL;
        t = d_57;
        t = map_1_0(t_4, t);
        t = genzip_4_0(w_4, x_4, y_4, _id, t);
        p_21 = t;
        if(match_cons(t, sym__2))
          {
            l_21 = ATgetArgument(t, 0);
            m_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_21);
        k_21 = t;
        t = m_21;
        t = concat_0_0(t);
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_21, o_21);
        l_23 = t;
        t = SSLsetAnnotations(l_23, k_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          d_57 = ATgetArgument(t, 0);
          {
            ATerm u_22 = NULL,a_23 = NULL,b_23 = NULL,d_23 = NULL,e_23 = NULL,m_23 = NULL;
            t = d_57;
            t = map_1_0(z_4, t);
            t = genzip_4_0(g_5, h_5, i_5, _id, t);
            e_23 = t;
            if(match_cons(t, sym__2))
              {
                a_23 = ATgetArgument(t, 0);
                b_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_23);
            u_22 = t;
            t = b_23;
            t = concat_0_0(t);
            d_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_23, d_23);
            m_23 = t;
            t = SSLsetAnnotations(m_23, u_22);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              d_57 = ATgetArgument(t, 0);
              t = d_57;
              t = map_1_0(l_5, t);
              t = genzip_4_0(q_5, r_5, s_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  d_57 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_57;
              t = map_1_0(t_5, t);
              t = genzip_4_0(x_5, z_5, e_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm g_144 (ATerm), ATerm t)
{
  static ATerm v_59 (ATerm t)
  {
    static ATerm f_6 (ATerm t)
    {
      ATerm p_40 = t;
      int s_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_144(t);
          LocalPopChoice(s_40);
        }
      else
        {
          t = p_40;
          {
            ATerm f_59 = NULL,g_59 = NULL,p_59 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                f_59 = ATgetArgument(t, 0);
                g_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, f_59, g_59);
            {
              static ATerm h_6 (ATerm t)
              {
                t = f_59;
                t = DeclareContextVars_0_0(t);
                t = g_59;
                t = v_59(t);
                if(((p_59 != NULL) && (p_59 != t)))
                  _fail(t);
                else
                  p_59 = t;
                return(t);
              }
              t = scope_2_0(g_6, h_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, f_59, not_null(p_59));
          }
        }
      return(t);
    }
    t = oncetd_1_0(f_6, t);
    return(t);
  }
  t = v_59(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm j_11 (ATerm c_82, ATerm b_82, ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  static ATerm j_6 (ATerm t)
  {
    t = c_82;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = c_82;
    {
      static ATerm k_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((x_59 != NULL) && (x_59 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              x_59 = ATgetArgument(t, 0);
            if(((w_59 != NULL) && (w_59 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              w_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, x_59);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(k_6, t);
    }
    if(((y_59 != NULL) && (y_59 != t)))
      _fail(t);
    else
      y_59 = t;
    return(t);
  }
  t = scope_2_0(i_6, j_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_59)), not_null(y_59)), b_82);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,v_60 = NULL,w_60 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      v_60 = ATgetArgument(t, 0);
      w_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_60 = ATgetFirst((ATermList) t);
      l_60 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_z_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, l_60, w_60)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_60))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_60;
    }
  return(t);
}
static ATerm j_62 (ATerm k_61, ATerm t)
{
  t = SSL_is_string(k_61);
  return(t);
}
static ATerm k_62 (ATerm m_61, ATerm t)
{
  ATerm q_61 = NULL,y_61 = NULL,d_62 = NULL;
  t = term_c_41;
  y_61 = t;
  t = (ATerm) ATinsert(ATempty, term_e_41);
  d_62 = t;
  t = SSL_printnl(y_61, d_62);
  t = m_61;
  t = debug_1_0(m_6, t);
  t = term_f_41;
  q_61 = t;
  t = SSL_exit(q_61);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm e_62 = NULL,h_62 = NULL;
  h_62 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      e_62 = ATgetArgument(t, 0);
      {
        ATerm h_41 = t;
        int i_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_62(h_62, t);
            LocalPopChoice(i_41);
          }
        else
          {
            t = h_41;
            t = e_62;
          }
      }
    }
  else
    {
      ATerm k_41 = t;
      int m_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_62(h_62, t);
          LocalPopChoice(m_41);
        }
      else
        {
          t = k_41;
          t = k_62(h_62, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      w_62 = ATgetArgument(t, 0);
      f_63 = ATgetArgument(t, 1);
      t = w_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          x_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_62;
      if(match_cons(t, sym_RDecT_3))
        {
          c_63 = ATgetArgument(t, 0);
          d_63 = ATgetArgument(t, 1);
          e_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, c_63, d_63, e_63, (ATerm) ATmakeAppl(sym_Rule_3, f_63, term_c_27, term_t_24));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          w_62 = ATgetArgument(t, 0);
          f_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          x_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_62;
      if(match_cons(t, sym_RDecT_3))
        {
          c_63 = ATgetArgument(t, 0);
          d_63 = ATgetArgument(t, 1);
          e_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, c_63, d_63, e_63, f_63);
    }
  return(t);
}
static ATerm h_65 (ATerm l_64, ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL;
  t = l_64;
  if(match_cons(t, sym_GenDynRules_1))
    {
      r_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_64;
  t = filter_1_0(n_6, t);
  s_64 = t;
  t = l_64;
  if(match_cons(t, sym_GenDynRules_1))
    {
      p_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_64;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  q_64 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, s_64), (ATerm) ATmakeAppl(sym_DynamicRules_1, q_64));
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,c_65 = NULL,d_65 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      if(match_cons(n_41, sym_DynRuleId_1))
        {
          ATerm o_41 = ATgetArgument(n_41, 0);
          if(match_cons(o_41, sym_RDecT_3))
            {
              w_64 = ATgetArgument(o_41, 0);
              x_64 = ATgetArgument(o_41, 1);
              c_65 = ATgetArgument(o_41, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      d_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, w_64, x_64, c_65, d_65);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm p_41 = ATgetArgument(t, 0);
      ATerm q_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL;
  f_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      e_65 = ATgetArgument(t, 0);
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_25 = NULL;
            t = e_65;
            {
              ATerm z_41 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(o_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_41;
                }
            }
            t = e_65;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            l_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, l_25);
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            t = h_65(f_65, t);
          }
      }
    }
  else
    {
      t = h_65(f_65, t);
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_65 = NULL;
      l_65 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm f_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_65;
      LocalPopChoice(e_42);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = d_42;
      {
        ATerm g_42 = t;
        int l_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_65 = NULL;
            m_65 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm m_42 = ATgetArgument(t, 0);
                ATerm n_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_65;
            LocalPopChoice(l_42);
            {
              ATerm n_65 = NULL,q_65 = NULL,x_65 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  n_65 = ATgetArgument(t, 0);
                  q_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_65;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              x_65 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, x_65, q_65);
            }
          }
        else
          {
            t = g_42;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(p_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = Cons_2_0(t_6, u_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,p_23 = NULL;
  j_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_67);
  g_67 = t;
  t = h_67;
  t = topdown_1_0(x_6, t);
  t = listtd_1_0(y_6, t);
  i_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_67);
  p_23 = t;
  t = SSLsetAnnotations(p_23, g_67);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(p_42);
    }
  else
    {
      t = o_42;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = repeat_2_0(b_7, _id, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_67 = ATgetFirst((ATermList) t);
      q_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_11(p_67, q_67, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm i_66 = NULL,m_66 = NULL,n_66 = NULL,p_66 = NULL,v_66 = NULL,b_67 = NULL,d_67 = NULL,e_67 = NULL,r_23 = NULL,q_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  e_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_67);
  i_66 = t;
  t = m_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_66 = ATgetFirst((ATermList) t);
      v_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_66);
  n_66 = t;
  t = v_66;
  t = Cons_2_0(_id, q_6, t);
  b_67 = t;
  t = (ATerm) ATinsert(CheckATermList(b_67), p_66);
  q_23 = t;
  t = SSLsetAnnotations(q_23, n_66);
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_67);
  r_23 = t;
  t = SSLsetAnnotations(r_23, i_66);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm z_68 = NULL;
  z_68 = t;
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL;
        t = term_o_40;
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_40, z_68);
        t = m_12(q_26, z_68, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_42) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = z_68;
        LocalPopChoice(r_42);
      }
    else
      {
        t = q_42;
        {
          ATerm x_26 = NULL;
          t = term_o_40;
          x_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_40, z_68);
          t = m_12(x_26, z_68, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_42) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = z_68;
        }
      }
  }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_74 = NULL,w_74 = NULL,x_74 = NULL;
  u_74 = t;
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_42);
        t = u_74;
        {
          ATerm b_43 = t;
          if((PushChoice() == 0))
            {
              ATerm s_27 = NULL,w_27 = NULL,x_27 = NULL,g_28 = NULL,b_24 = NULL;
              g_28 = t;
              if(match_cons(t, sym_Var_1))
                {
                  w_27 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_28);
              s_27 = t;
              t = w_27;
              {
                ATerm c_43 = t;
                int d_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(d_43);
                  }
                else
                  {
                    t = c_43;
                    {
                      ATerm q_28 = NULL,c_29 = NULL,i_29 = NULL,a_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          q_28 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(w_27);
                      c_29 = t;
                      t = q_28;
                      t = ContextVar_0_0(t);
                      i_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, i_29);
                      a_24 = t;
                      t = SSLsetAnnotations(a_24, c_29);
                    }
                  }
              }
              x_27 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, x_27);
              b_24 = t;
              t = SSLsetAnnotations(b_24, s_27);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_43;
            }
        }
        t = term_a_31;
      }
    else
      {
        t = v_42;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_a_31;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                w_74 = ATgetArgument(t, 0);
                {
                  ATerm b_75 = NULL;
                  t = w_74;
                  t = free_vars_3_0(g_7, h_7, tboundin_3_0, t);
                  t = map_1_0(l_7, t);
                  b_75 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_43, b_75);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    w_74 = ATgetArgument(t, 0);
                    x_74 = ATgetArgument(t, 1);
                    {
                      ATerm n_77 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, w_74, x_74);
                      t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
                      t = map_1_0(s_7, t);
                      n_77 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_g_43, n_77);
                    }
                  }
                else
                  {
                    ATerm k_29 = NULL,v_29 = NULL,a_30 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm h_43 = ATgetArgument(t, 0);
                        ATerm i_43 = ATgetArgument(t, 1);
                        ATerm j_43 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_c_41;
                    v_29 = t;
                    t = (ATerm) ATinsert(ATempty, term_k_43);
                    a_30 = t;
                    t = SSL_printnl(v_29, a_30);
                    t = term_f_41;
                    k_29 = t;
                    t = SSL_exit(k_29);
                    t = (ATerm) ATinsert(ATempty, term_k_43);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
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
  ATerm l_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_43);
    }
  else
    {
      t = l_43;
      {
        ATerm n_43 = t;
        int p_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_43);
          }
        else
          {
            t = n_43;
            {
              ATerm q_43 = t;
              int r_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_75 = ATgetArgument(t, 0);
                      v_75 = ATgetArgument(t, 1);
                      w_75 = ATgetArgument(t, 2);
                      x_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_75;
                  t = map_1_0(i_7, t);
                  LocalPopChoice(r_43);
                }
              else
                {
                  t = q_43;
                  {
                    ATerm v_43 = t;
                    int x_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_43);
                      }
                    else
                      {
                        t = v_43;
                        t = dynrule_targs_1_0(j_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm f_76 = NULL;
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_76 = ATgetArgument(t, 0);
          {
            ATerm a_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_43);
      t = f_76;
    }
  else
    {
      t = y_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_76;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = map_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm o_76 = NULL;
  ATerm b_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_76 = ATgetArgument(t, 0);
          {
            ATerm g_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_44);
      t = o_76;
    }
  else
    {
      t = b_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_76;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm r_76 = NULL;
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_76);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm o_77 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_77);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
      {
        ATerm j_44 = t;
        int o_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_44);
          }
        else
          {
            t = j_44;
            {
              ATerm p_44 = t;
              int r_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_77 = NULL,r_77 = NULL,e_79 = NULL,f_79 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_77 = ATgetArgument(t, 0);
                      r_77 = ATgetArgument(t, 1);
                      e_79 = ATgetArgument(t, 2);
                      f_79 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_79;
                  t = map_1_0(p_7, t);
                  LocalPopChoice(r_44);
                }
              else
                {
                  t = p_44;
                  {
                    ATerm t_44 = t;
                    int u_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_44);
                      }
                    else
                      {
                        t = t_44;
                        t = dynrule_targs_1_0(q_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm z_79 = NULL;
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_79 = ATgetArgument(t, 0);
          {
            ATerm x_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_44);
      t = z_79;
    }
  else
    {
      t = v_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_79;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = map_1_0(r_7, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm h_82 = NULL;
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_82 = ATgetArgument(t, 0);
          {
            ATerm a_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_44);
      t = h_82;
    }
  else
    {
      t = y_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_82;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm v_82 = NULL;
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_82);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(c_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm c_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_88);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
            {
              ATerm k_45 = t;
              int l_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_88 = ATgetArgument(t, 0);
                      f_88 = ATgetArgument(t, 1);
                      g_88 = ATgetArgument(t, 2);
                      h_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_88;
                  t = map_1_0(w_7, t);
                  LocalPopChoice(l_45);
                }
              else
                {
                  t = k_45;
                  {
                    ATerm m_45 = t;
                    int n_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_45);
                      }
                    else
                      {
                        t = m_45;
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
  ATerm o_88 = NULL;
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_88 = ATgetArgument(t, 0);
          {
            ATerm q_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_45);
      t = o_88;
    }
  else
    {
      t = o_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_88;
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
  ATerm t_88 = NULL;
  ATerm r_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_88 = ATgetArgument(t, 0);
          {
            ATerm u_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_45);
      t = t_88;
    }
  else
    {
      t = r_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_88;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm w_88 = NULL;
  w_88 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_88);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm x_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_88);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm w_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_46);
    }
  else
    {
      t = w_45;
      {
        ATerm c_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_46);
          }
        else
          {
            t = c_46;
            {
              ATerm e_46 = t;
              int f_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_88 = ATgetArgument(t, 0);
                      a_89 = ATgetArgument(t, 1);
                      b_89 = ATgetArgument(t, 2);
                      c_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_89;
                  t = map_1_0(c_8, t);
                  LocalPopChoice(f_46);
                }
              else
                {
                  t = e_46;
                  {
                    ATerm g_46 = t;
                    int h_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_46);
                      }
                    else
                      {
                        t = g_46;
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
  ATerm j_89 = NULL;
  ATerm j_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_89 = ATgetArgument(t, 0);
          {
            ATerm o_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_46);
      t = j_89;
    }
  else
    {
      t = j_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_89;
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
  ATerm o_89 = NULL;
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_89 = ATgetArgument(t, 0);
          {
            ATerm r_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_46);
      t = o_89;
    }
  else
    {
      t = p_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_89;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm r_89 = NULL;
  r_89 = t;
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_89 = NULL,c_30 = NULL,f_30 = NULL,l_24 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_89 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_89);
        c_30 = t;
        t = x_89;
        t = ContextVar_0_0(t);
        f_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, f_30);
        l_24 = t;
        t = SSLsetAnnotations(l_24, c_30);
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, r_89);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm d_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_90);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm u_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_46);
    }
  else
    {
      t = u_46;
      {
        ATerm y_46 = t;
        int b_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_47);
          }
        else
          {
            t = y_46;
            {
              ATerm c_47 = t;
              int d_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_90 = ATgetArgument(t, 0);
                      g_90 = ATgetArgument(t, 1);
                      h_90 = ATgetArgument(t, 2);
                      i_90 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_90;
                  t = map_1_0(m_8, t);
                  LocalPopChoice(d_47);
                }
              else
                {
                  t = c_47;
                  {
                    ATerm e_47 = t;
                    int f_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_47);
                      }
                    else
                      {
                        t = e_47;
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
static ATerm m_8 (ATerm t)
{
  ATerm p_90 = NULL;
  ATerm i_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_90 = ATgetArgument(t, 0);
          {
            ATerm r_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_47);
      t = p_90;
    }
  else
    {
      t = i_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_90;
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
  ATerm u_90 = NULL;
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_90 = ATgetArgument(t, 0);
          {
            ATerm w_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_47);
      t = u_90;
    }
  else
    {
      t = t_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_90;
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  z_90 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      y_90 = ATgetArgument(t, 0);
      t = y_90;
    }
  else
    {
      t = z_90;
    }
  x_90 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_90);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL;
  if(match_cons(t, sym__2))
    {
      d_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13(d_91, e_91, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL;
  if(match_cons(t, sym__2))
    {
      f_91 = ATgetArgument(t, 0);
      g_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13(f_91, g_91, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm n_91 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_91 = ATgetArgument(t, 0);
      t = n_91;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_91 = ATgetArgument(t, 0);
          {
            ATerm c_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_91;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_91), (ATerm) ATempty);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm t_91 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_91 = ATgetArgument(t, 0);
      t = t_91;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_91 = ATgetArgument(t, 0);
          {
            ATerm d_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_91;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, t_91);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm x_91 = NULL;
  x_91 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_91);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_f_48;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_g_48;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm o_144 (ATerm), ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,r_85 = NULL,v_85 = NULL,e_86 = NULL,g_86 = NULL,h_86 = NULL,p_86 = NULL,t_86 = NULL,u_86 = NULL,w_86 = NULL,x_86 = NULL,e_87 = NULL,f_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm h_48 = ATgetArgument(t, 0);
      if(match_cons(h_48, sym_DynRuleId_1))
        {
          ATerm j_48 = ATgetArgument(h_48, 0);
          if(match_cons(j_48, sym_RDecT_3))
            {
              u_87 = ATgetArgument(j_48, 0);
              h_86 = ATgetArgument(j_48, 1);
              p_86 = ATgetArgument(j_48, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm i_48 = ATgetArgument(t, 1);
        if(match_cons(i_48, sym_Rule_3))
          {
            e_87 = ATgetArgument(i_48, 0);
            e_86 = ATgetArgument(i_48, 1);
            g_86 = ATgetArgument(i_48, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_87;
  t = dummify_0_0(t);
  w_87 = t;
  t = free_vars_3_0(t_7, v_7, tboundin_3_0, t);
  t = map_1_0(z_7, t);
  q_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_86, g_86);
  t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
  t = filter_1_0(h_8, t);
  p_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_84, q_84);
  t = diff_0_0(t);
  v_85 = t;
  {
    ATerm k_48 = t;
    int m_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        LocalPopChoice(m_48);
        {
          ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL;
          t = term_q_38;
          c_90 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_38, u_87);
          t = x_12(c_90, u_87, t);
          f_87 = t;
          t = new_0_0(t);
          r_85 = t;
          t = new_0_0(t);
          x_86 = t;
          t = e_87;
          t = free_vars_3_0(i_8, l_8, tboundin_3_0, t);
          u_86 = t;
          t = map_1_0(q_8, t);
          b_90 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_86))), b_90), p_86);
          t = concat_0_0(t);
          r_84 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_87, h_86, r_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(v_85), (ATerm) ATmakeAppl(sym_Str_1, r_85))), e_86, (ATerm) ATmakeAppl(sym_BA_2, g_86, (ATerm) ATmakeAppl(sym_Var_1, x_86)))));
          x_87 = t;
          t = h_86;
          t = foldr_3_0(r_8, v_8, x_8, t);
          z_89 = t;
          t = p_86;
          t = foldr_3_0(b_9, e_9, h_9, t);
          a_90 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90));
          {
            ATerm n_48 = t;
            int p_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_30 = NULL,r_30 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), w_87);
                m_30 = t;
                t = term_f_48;
                r_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_48, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), w_87));
                t = m_12(r_30, m_30, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm q_48 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_48) != ATmakeSymbol("u_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90));
                LocalPopChoice(p_48);
                t = (ATerm) ATempty;
                y_87 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), w_87);
                t = debug_1_0(n_9, t);
              }
            else
              {
                t = n_48;
                {
                  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL;
                  t = term_p_38;
                  k_91 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_p_38, u_87);
                  t = x_12(k_91, u_87, t);
                  w_86 = t;
                  t = h_86;
                  t = map_1_0(q_9, t);
                  s_87 = t;
                  t = p_86;
                  t = map_1_0(s_9, t);
                  t_86 = t;
                  t = u_86;
                  t = map_1_0(t_9, t);
                  h_91 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_86))), h_91), t_86);
                  t = concat_0_0(t);
                  t_87 = t;
                  t = w_87;
                  {
                    ATerm r_48 = t;
                    int s_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_87;
                        if((e_87 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, x_86);
                        LocalPopChoice(s_48);
                      }
                    else
                      {
                        t = r_48;
                        t = w_87;
                      }
                  }
                  v_87 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, w_86, h_86, p_86, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, x_86), e_87), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_38, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_87), s_87, t_87))), term_y_48), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_a_49, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_87), (ATerm) ATmakeAppl(sym_Str_1, u_87))), term_c_49), term_y_48)))), (ATerm) ATmakeAppl(sym_RDefT_4, u_87, h_86, p_86, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, x_86), e_87), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_u_48, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_87), s_87, t_87))), term_y_48), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_a_49, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_87), (ATerm) ATmakeAppl(sym_Str_1, u_87))), term_y_48))));
                  y_87 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), w_87);
                  i_91 = t;
                  t = term_i_49;
                  j_91 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), w_87), term_i_49);
                  t = n_12(u_9, i_91, j_91, t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_87, (ATerm) ATmakeAppl(sym__2, z_89, a_90)), w_87);
                  t = debug_1_0(v_9, t);
                }
              }
          }
        }
      }
    else
      {
        t = k_48;
        t = (ATerm) ATempty;
        x_87 = t;
        t = (ATerm) ATempty;
        y_87 = t;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, w_87, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(v_85), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_85)))));
  t = o_144(t);
  z_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_87, y_87);
  t = conc_0_0(t);
  a_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, z_87), a_88);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,t_92 = NULL,u_92 = NULL;
  n_92 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      o_92 = ATgetArgument(t, 0);
      u_92 = ATgetArgument(t, 1);
      t = o_92;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          p_92 = ATgetArgument(t, 0);
          m_92 = ATgetArgument(t, 1);
          {
            static ATerm z_9 (ATerm t)
            {
              ATerm e_93 = NULL,h_93 = NULL;
              e_93 = t;
              t = SSL_explode_term(e_93);
              if(match_cons(t, sym__2))
                {
                  ATerm j_49 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_49) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm k_49 = ATgetArgument(t, 1);
                    if(((ATgetType(k_49) == AT_LIST) && !(ATisEmpty(k_49))))
                      {
                        h_93 = ATgetFirst((ATermList) k_49);
                        {
                          ATerm l_49 = (ATerm) ATgetNext((ATermList) k_49);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_49, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_93), m_92), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_92))));
              return(t);
            }
            t = p_92;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((q_92 != NULL) && (q_92 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_92 = ATgetArgument(t, 0);
                r_92 = ATgetArgument(t, 1);
                t_92 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_92, r_92, t_92)), (ATerm) ATmakeAppl(sym_Rule_3, u_92, term_o_49, term_t_24));
            t = SplitDynamicRule_1_0(z_9, t);
          }
        }
      else
        {
          static ATerm b_10 (ATerm t)
          {
            ATerm o_93 = NULL,p_93 = NULL;
            o_93 = t;
            t = SSL_explode_term(o_93);
            if(match_cons(t, sym__2))
              {
                ATerm q_49 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_49) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm s_49 = ATgetArgument(t, 1);
                  if(((ATgetType(s_49) == AT_LIST) && !(ATisEmpty(s_49))))
                    {
                      p_93 = ATgetFirst((ATermList) s_49);
                      {
                        ATerm t_49 = (ATerm) ATgetNext((ATermList) s_49);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_49, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, p_93), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_92))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              p_92 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_92;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((q_92 != NULL) && (q_92 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_92 = ATgetArgument(t, 0);
              r_92 = ATgetArgument(t, 1);
              t_92 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_92, r_92, t_92)), (ATerm) ATmakeAppl(sym_Rule_3, u_92, term_o_49, term_t_24));
          t = SplitDynamicRule_1_0(b_10, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          o_92 = ATgetArgument(t, 0);
          u_92 = ATgetArgument(t, 1);
          t = o_92;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              p_92 = ATgetArgument(t, 0);
              m_92 = ATgetArgument(t, 1);
              {
                static ATerm d_10 (ATerm t)
                {
                  ATerm w_93 = NULL,x_93 = NULL,v_30 = NULL;
                  w_93 = t;
                  t = SSL_explode_term(w_93);
                  if(match_cons(t, sym__2))
                    {
                      ATerm v_49 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) v_49) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm w_49 = ATgetArgument(t, 1);
                        if(((ATgetType(w_49) == AT_LIST) && !(ATisEmpty(w_49))))
                          {
                            x_93 = ATgetFirst((ATermList) w_49);
                            {
                              ATerm x_49 = (ATerm) ATgetNext((ATermList) w_49);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(w_93);
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_49 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) y_49) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm z_49 = ATgetArgument(t, 1);
                        if(((ATgetType(z_49) == AT_LIST) && !(ATisEmpty(z_49))))
                          {
                            ATerm a_50 = ATgetFirst((ATermList) z_49);
                            ATerm b_50 = (ATerm) ATgetNext((ATermList) z_49);
                            if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
                              {
                                v_30 = ATgetFirst((ATermList) b_50);
                                {
                                  ATerm d_50 = (ATerm) ATgetNext((ATermList) b_50);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_50, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_30), x_93), m_92), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_92))));
                  return(t);
                }
                t = p_92;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((q_92 != NULL) && (q_92 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      q_92 = ATgetArgument(t, 0);
                    r_92 = ATgetArgument(t, 1);
                    t_92 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_92, r_92, t_92)), u_92);
                t = SplitDynamicRule_1_0(d_10, t);
              }
            }
          else
            {
              static ATerm e_10 (ATerm t)
              {
                ATerm f_94 = NULL,g_94 = NULL,c_31 = NULL;
                f_94 = t;
                t = SSL_explode_term(f_94);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_50 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_50) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm i_50 = ATgetArgument(t, 1);
                      if(((ATgetType(i_50) == AT_LIST) && !(ATisEmpty(i_50))))
                        {
                          g_94 = ATgetFirst((ATermList) i_50);
                          {
                            ATerm l_50 = (ATerm) ATgetNext((ATermList) i_50);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(f_94);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_50 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_50) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm r_50 = ATgetArgument(t, 1);
                      if(((ATgetType(r_50) == AT_LIST) && !(ATisEmpty(r_50))))
                        {
                          ATerm t_50 = ATgetFirst((ATermList) r_50);
                          ATerm u_50 = (ATerm) ATgetNext((ATermList) r_50);
                          if(((ATgetType(u_50) == AT_LIST) && !(ATisEmpty(u_50))))
                            {
                              c_31 = ATgetFirst((ATermList) u_50);
                              {
                                ATerm v_50 = (ATerm) ATgetNext((ATermList) u_50);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_50, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_31), g_94), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_92))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  p_92 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_92;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((q_92 != NULL) && (q_92 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_92 = ATgetArgument(t, 0);
                  r_92 = ATgetArgument(t, 1);
                  t_92 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_92, r_92, t_92)), u_92);
              t = SplitDynamicRule_1_0(e_10, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              o_92 = ATgetArgument(t, 0);
              u_92 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_92;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              p_92 = ATgetArgument(t, 0);
              m_92 = ATgetArgument(t, 1);
              {
                static ATerm f_10 (ATerm t)
                {
                  ATerm r_94 = NULL,u_94 = NULL,e_31 = NULL;
                  r_94 = t;
                  t = SSL_explode_term(r_94);
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_50 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) w_50) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm y_50 = ATgetArgument(t, 1);
                        if(((ATgetType(y_50) == AT_LIST) && !(ATisEmpty(y_50))))
                          {
                            u_94 = ATgetFirst((ATermList) y_50);
                            {
                              ATerm z_50 = (ATerm) ATgetNext((ATermList) y_50);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(r_94);
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_51 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) a_51) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm c_51 = ATgetArgument(t, 1);
                        if(((ATgetType(c_51) == AT_LIST) && !(ATisEmpty(c_51))))
                          {
                            ATerm d_51 = ATgetFirst((ATermList) c_51);
                            ATerm e_51 = (ATerm) ATgetNext((ATermList) c_51);
                            if(((ATgetType(e_51) == AT_LIST) && !(ATisEmpty(e_51))))
                              {
                                e_31 = ATgetFirst((ATermList) e_51);
                                {
                                  ATerm f_51 = (ATerm) ATgetNext((ATermList) e_51);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_51, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_31), u_94), m_92), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_92))));
                  return(t);
                }
                t = p_92;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((q_92 != NULL) && (q_92 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      q_92 = ATgetArgument(t, 0);
                    r_92 = ATgetArgument(t, 1);
                    t_92 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_92, r_92, t_92)), u_92);
                t = SplitDynamicRule_1_0(f_10, t);
              }
            }
          else
            {
              static ATerm g_10 (ATerm t)
              {
                ATerm z_94 = NULL,a_95 = NULL,g_31 = NULL;
                z_94 = t;
                t = SSL_explode_term(z_94);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_51 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_51) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm j_51 = ATgetArgument(t, 1);
                      if(((ATgetType(j_51) == AT_LIST) && !(ATisEmpty(j_51))))
                        {
                          a_95 = ATgetFirst((ATermList) j_51);
                          {
                            ATerm k_51 = (ATerm) ATgetNext((ATermList) j_51);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(z_94);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_51 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_51) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm n_51 = ATgetArgument(t, 1);
                      if(((ATgetType(n_51) == AT_LIST) && !(ATisEmpty(n_51))))
                        {
                          ATerm o_51 = ATgetFirst((ATermList) n_51);
                          ATerm p_51 = (ATerm) ATgetNext((ATermList) n_51);
                          if(((ATgetType(p_51) == AT_LIST) && !(ATisEmpty(p_51))))
                            {
                              g_31 = ATgetFirst((ATermList) p_51);
                              {
                                ATerm q_51 = (ATerm) ATgetNext((ATermList) p_51);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_51, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_31), a_95), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_92))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  p_92 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_92;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((q_92 != NULL) && (q_92 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_92 = ATgetArgument(t, 0);
                  {
                    ATerm r_51 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm s_51 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = n_92;
              t = SplitDynamicRule_1_0(g_10, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  static ATerm b_95 (ATerm t)
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_112(t);
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
        t = SRTS_one(b_95, t);
      }
    return(t);
  }
  t = b_95(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm l_144 (ATerm), ATerm t)
{
  static ATerm n_95 (ATerm t)
  {
    static ATerm h_10 (ATerm t)
    {
      ATerm x_51 = t;
      int z_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_144(t);
          LocalPopChoice(z_51);
        }
      else
        {
          t = x_51;
          {
            ATerm i_95 = NULL,j_95 = NULL,m_95 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                i_95 = ATgetArgument(t, 0);
                j_95 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, i_95, j_95);
            {
              static ATerm j_10 (ATerm t)
              {
                t = i_95;
                t = DeclareContextVars_0_0(t);
                t = j_95;
                t = n_95(t);
                if(((m_95 != NULL) && (m_95 != t)))
                  _fail(t);
                else
                  m_95 = t;
                return(t);
              }
              t = scope_2_0(i_10, j_10, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, i_95, not_null(m_95));
          }
        }
      return(t);
    }
    t = oncetd_1_0(h_10, t);
    return(t);
  }
  t = n_95(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm q_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  u_95 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      t_95 = ATgetArgument(t, 0);
      {
        ATerm a_52 = t;
        int b_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_95;
            q_95 = t;
            t = u_95;
            LocalPopChoice(b_52);
          }
        else
          {
            t = a_52;
            t = u_95;
            q_95 = t;
            t = u_95;
          }
      }
    }
  else
    {
      t = u_95;
      q_95 = t;
      t = u_95;
    }
  t = term_e_52;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_95, term_e_52);
  t = n_12(k_11, q_95, s_95, t);
  t = u_95;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm v_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  z_95 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      y_95 = ATgetArgument(t, 0);
      {
        ATerm f_52 = t;
        int g_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_95;
            v_95 = t;
            t = z_95;
            LocalPopChoice(g_52);
          }
        else
          {
            t = f_52;
            t = z_95;
            v_95 = t;
            t = z_95;
          }
      }
    }
  else
    {
      t = z_95;
      v_95 = t;
      t = z_95;
    }
  t = term_j_52;
  x_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_95, term_j_52);
  t = n_12(t_11, v_95, x_95, t);
  t = z_95;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm k_52 = t;
  int l_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(k_10, t);
      LocalPopChoice(l_52);
    }
  else
    {
      t = k_52;
      t = map_1_0(r_11, t);
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm r_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_31);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm o_52 = t;
  int p_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_52);
    }
  else
    {
      t = o_52;
      {
        ATerm q_52 = t;
        int u_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_52);
          }
        else
          {
            t = q_52;
            {
              ATerm x_52 = t;
              int y_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_31 = ATgetArgument(t, 0);
                      u_31 = ATgetArgument(t, 1);
                      v_31 = ATgetArgument(t, 2);
                      w_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_31;
                  t = map_1_0(x_11, t);
                  LocalPopChoice(y_52);
                }
              else
                {
                  t = x_52;
                  {
                    ATerm z_52 = t;
                    int d_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_53);
                      }
                    else
                      {
                        t = z_52;
                        t = dynrule_targs_1_0(z_11, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm o_32 = NULL;
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_32 = ATgetArgument(t, 0);
          {
            ATerm g_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_53);
      t = o_32;
    }
  else
    {
      t = e_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_32;
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = map_1_0(a_12, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm x_32 = NULL;
  ATerm h_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_32 = ATgetArgument(t, 0);
          {
            ATerm j_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_53);
      t = x_32;
    }
  else
    {
      t = h_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_32;
    }
  return(t);
}
static ATerm e_12 (ATerm t)
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
            ATerm k_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_33;
    }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm e_34 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_34 = ATgetArgument(t, 0);
      t = e_34;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_34 = ATgetArgument(t, 0);
          {
            ATerm l_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_34;
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      if((n_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm b_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_35);
  return(t);
}
static ATerm j_12 (ATerm t)
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
                  ATerm e_35 = NULL,f_35 = NULL,i_35 = NULL,l_35 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_35 = ATgetArgument(t, 0);
                      f_35 = ATgetArgument(t, 1);
                      i_35 = ATgetArgument(t, 2);
                      l_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_35;
                  t = map_1_0(e_13, t);
                  LocalPopChoice(r_53);
                }
              else
                {
                  t = q_53;
                  {
                    ATerm s_53 = t;
                    int t_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_53);
                      }
                    else
                      {
                        t = s_53;
                        t = dynrule_targs_1_0(z_13, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm c_36 = NULL;
  ATerm u_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_36 = ATgetArgument(t, 0);
          {
            ATerm w_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_53);
      t = c_36;
    }
  else
    {
      t = u_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_36;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = map_1_0(v_14, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm m_36 = NULL;
  ATerm x_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_36 = ATgetArgument(t, 0);
          {
            ATerm z_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_53);
      t = m_36;
    }
  else
    {
      t = x_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_36;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm c_37 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_37 = ATgetArgument(t, 0);
      t = c_37;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_37 = ATgetArgument(t, 0);
          {
            ATerm a_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_37;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm m_37 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_37 = ATgetArgument(t, 0);
      t = m_37;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_37 = ATgetArgument(t, 0);
          {
            ATerm b_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_37;
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm r_37 = NULL;
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      if((r_37 != ATgetArgument(t, 1)))
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
  ATerm j_102 = NULL;
  j_102 = t;
  {
    ATerm c_54 = t;
    int e_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_31 = NULL,l_31 = NULL;
        t = j_102;
        t = free_vars_3_0(v_11, w_11, tboundin_3_0, t);
        j_31 = t;
        t = j_102;
        {
          ATerm f_54 = t;
          int g_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_33 = NULL;
              ATerm h_54 = t;
              int i_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm j_54 = ATgetArgument(t, 0);
                      ATerm k_54 = ATgetArgument(t, 1);
                      g_33 = ATgetArgument(t, 2);
                      {
                        ATerm l_54 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_54);
                  t = g_33;
                  t = map_1_0(e_12, t);
                }
              else
                {
                  t = h_54;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm m_54 = ATgetArgument(t, 0);
                      ATerm n_54 = ATgetArgument(t, 1);
                      g_33 = ATgetArgument(t, 2);
                      {
                        ATerm o_54 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = g_33;
                  t = map_1_0(f_12, t);
                }
              LocalPopChoice(g_54);
            }
          else
            {
              t = f_54;
              t = (ATerm) ATempty;
            }
        }
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_31, l_31);
        t = b_12(g_12, j_31, l_31, t);
        LocalPopChoice(e_54);
      }
    else
      {
        t = c_54;
        {
          ATerm y_34 = NULL,z_34 = NULL;
          t = j_102;
          t = free_vars_3_0(h_12, j_12, tboundin_3_0, t);
          y_34 = t;
          t = j_102;
          {
            ATerm p_54 = t;
            int q_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_36 = NULL;
                ATerm r_54 = t;
                int s_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm t_54 = ATgetArgument(t, 0);
                        ATerm u_54 = ATgetArgument(t, 1);
                        u_36 = ATgetArgument(t, 2);
                        {
                          ATerm v_54 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_54);
                    t = u_36;
                    t = map_1_0(w_14, t);
                  }
                else
                  {
                    t = r_54;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm w_54 = ATgetArgument(t, 0);
                        ATerm x_54 = ATgetArgument(t, 1);
                        u_36 = ATgetArgument(t, 2);
                        {
                          ATerm y_54 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = u_36;
                    t = map_1_0(y_14, t);
                  }
                LocalPopChoice(q_54);
              }
            else
              {
                t = p_54;
                t = (ATerm) ATempty;
              }
          }
          z_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_34, z_34);
          t = b_12(d_15, y_34, z_34, t);
        }
      }
  }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_34;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm f_103 = NULL,g_103 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_103 = ATgetFirst((ATermList) t);
      g_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_103, g_103);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,p_103 = NULL,q_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_54 = ATgetArgument(t, 0);
      if(match_cons(z_54, sym__2))
        {
          i_103 = ATgetArgument(z_54, 0);
          j_103 = ATgetArgument(z_54, 1);
        }
      else
        _fail(t);
      {
        ATerm a_55 = ATgetArgument(t, 1);
        if(match_cons(a_55, sym__2))
          {
            p_103 = ATgetArgument(a_55, 0);
            q_103 = ATgetArgument(a_55, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_103), i_103), (ATerm) ATinsert(CheckATermList(q_103), j_103));
  return(t);
}
static ATerm u_11 (ATerm e_84, ATerm d_84, ATerm t)
{
  ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL;
  static ATerm g_15 (ATerm t)
  {
    t = e_84;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = e_84;
    {
      static ATerm h_15 (ATerm t)
      {
        ATerm w_102 = NULL,x_102 = NULL,y_102 = NULL,a_103 = NULL,b_103 = NULL,e_103 = NULL,q_24 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            w_102 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_102;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(i_15, j_15, k_15, _id, t);
        e_103 = t;
        if(match_cons(t, sym__2))
          {
            y_102 = ATgetArgument(t, 0);
            a_103 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_103);
        x_102 = t;
        t = a_103;
        t = concat_0_0(t);
        b_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_102, b_103);
        q_24 = t;
        t = SSLsetAnnotations(q_24, x_102);
        if(match_cons(t, sym__2))
          {
            if(((r_102 != NULL) && (r_102 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              r_102 = ATgetArgument(t, 0);
            if(((q_102 != NULL) && (q_102 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              q_102 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, r_102);
        return(t);
      }
      t = split_dynamic_rule_1_0(h_15, t);
    }
    if(((s_102 != NULL) && (s_102 != t)))
      _fail(t);
    else
      s_102 = t;
    return(t);
  }
  t = scope_2_0(f_15, g_15, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_102)), not_null(s_102)), d_84);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t)
{
  static ATerm s_103 (ATerm t)
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_110(t);
        t = s_103(t);
        LocalPopChoice(c_55);
      }
    else
      {
        t = b_55;
        t = f_110(t);
      }
    return(t);
  }
  t = s_103(t);
  return(t);
}
ATerm listtd_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  static ATerm o_104 (ATerm t)
  {
    ATerm j_104 = NULL,k_104 = NULL,n_104 = NULL;
    t = a_119(t);
    j_104 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_104;
      }
    else
      {
        ATerm z_37 = NULL,c_38 = NULL,u_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_104 = ATgetFirst((ATermList) t);
            n_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_104);
        z_37 = t;
        t = n_104;
        t = o_104(t);
        c_38 = t;
        t = (ATerm) ATinsert(CheckATermList(c_38), k_104);
        u_24 = t;
        t = SSLsetAnnotations(u_24, z_37);
      }
    return(t);
  }
  t = o_104(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,b_105 = NULL,c_105 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      b_105 = ATgetArgument(t, 0);
      c_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_104 = ATgetFirst((ATermList) t);
      z_104 = (ATerm) ATgetNext((ATermList) t);
      t = x_104;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          y_104 = ATgetArgument(t, 0);
          w_104 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_55, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, y_104, w_104), (ATerm) ATmakeAppl(sym_DynRuleScope_2, z_104, c_105))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, y_104)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              y_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_55, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, z_104, c_105)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, y_104)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_105;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm n_105 = NULL,q_105 = NULL,r_105 = NULL;
  t = term_c_41;
  q_105 = t;
  t = (ATerm) ATinsert(ATempty, term_f_55);
  r_105 = t;
  t = SSL_printnl(q_105, r_105);
  t = term_f_41;
  n_105 = t;
  t = SSL_exit(n_105);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL,w_105 = NULL;
  t = term_c_41;
  t_105 = t;
  t = (ATerm) ATinsert(ATempty, term_g_55);
  w_105 = t;
  t = SSL_printnl(t_105, w_105);
  t = term_f_41;
  s_105 = t;
  t = SSL_exit(s_105);
  return(t);
}
static ATerm j_108 (ATerm c_107, ATerm f_107, ATerm g_107, ATerm h_107, ATerm i_107, ATerm j_107, ATerm k_107, ATerm t)
{
  t = k_107;
  {
    ATerm h_55 = t;
    if((PushChoice() == 0))
      {
        t = i_107;
        if(match_cons(t, sym_Op_2))
          {
            ATerm i_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_55) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_55 = ATgetArgument(t, 1);
              if(((ATgetType(j_55) != AT_LIST) || !(ATisEmpty(j_55))))
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
        t = h_55;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, c_107, f_107, g_107)), (ATerm) ATmakeAppl(sym_Rule_3, h_107, i_107, j_107));
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm v_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,g_108 = NULL,h_108 = NULL;
  z_107 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      a_108 = ATgetArgument(t, 0);
      b_108 = ATgetArgument(t, 1);
      c_108 = ATgetArgument(t, 2);
      d_108 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_108;
  if(match_cons(t, sym_Rule_3))
    {
      e_108 = ATgetArgument(t, 0);
      g_108 = ATgetArgument(t, 1);
      h_108 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_108;
  if(match_cons(t, sym_Op_2))
    {
      v_107 = ATgetArgument(t, 0);
      y_107 = ATgetArgument(t, 1);
      t = y_107;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_107;
          if(match_string(t, "Undefined"))
            {
              ATerm m_55 = t;
              int p_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_107;
                  {
                    ATerm q_55 = t;
                    int r_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_108;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(r_55);
                      }
                    else
                      {
                        t = q_55;
                        {
                          ATerm t_39 = NULL,u_39 = NULL;
                          t = term_c_41;
                          t_39 = t;
                          t = (ATerm) ATinsert(ATempty, term_s_55);
                          u_39 = t;
                          t = SSL_printnl(t_39, u_39);
                          t = z_107;
                          t = debug_1_0(l_15, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_108, b_108, c_108)), e_108);
                  LocalPopChoice(p_55);
                }
              else
                {
                  t = m_55;
                  t = j_108(a_108, b_108, c_108, e_108, g_108, h_108, z_107, t);
                }
            }
          else
            {
              t = j_108(a_108, b_108, c_108, e_108, g_108, h_108, z_107, t);
            }
        }
      else
        {
          t = v_107;
          t = j_108(a_108, b_108, c_108, e_108, g_108, h_108, z_107, t);
        }
    }
  else
    {
      t = j_108(a_108, b_108, c_108, e_108, g_108, h_108, z_107, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm f_117 (ATerm), ATerm t)
{
  ATerm k_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
  k_108 = t;
  t = f_117(t);
  n_108 = t;
  t = term_c_41;
  o_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_108), n_108);
  p_108 = t;
  t = SSL_printnl(o_108, p_108);
  t = k_108;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL;
  v_108 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm t_55 = ATgetArgument(t, 0);
      if(match_cons(t_55, sym_DynRuleId_1))
        {
          ATerm v_55 = ATgetArgument(t_55, 0);
          if(match_cons(v_55, sym_RDecT_3))
            {
              q_108 = ATgetArgument(v_55, 0);
              r_108 = ATgetArgument(v_55, 1);
              s_108 = ATgetArgument(v_55, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_55 = ATgetArgument(t, 1);
        if(match_cons(u_55, sym_Rule_3))
          {
            t_108 = ATgetArgument(u_55, 0);
            {
              ATerm w_55 = ATgetArgument(u_55, 1);
              if(match_cons(w_55, sym_Op_2))
                {
                  ATerm x_55 = ATgetArgument(w_55, 0);
                  if((ATgetSymbol((ATermAppl) x_55) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm y_55 = ATgetArgument(w_55, 1);
                    if(((ATgetType(y_55) != AT_LIST) || !(ATisEmpty(y_55))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            u_108 = ATgetArgument(u_55, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm z_55 = t;
    int a_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_108;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(a_56);
      }
    else
      {
        t = z_55;
        {
          ATerm w_108 = NULL,x_108 = NULL;
          t = term_c_41;
          w_108 = t;
          t = (ATerm) ATinsert(ATempty, term_s_55);
          x_108 = t;
          t = SSL_printnl(w_108, x_108);
          t = v_108;
          t = debug_1_0(m_15, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_108, r_108, s_108)), t_108);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm b_56 = t;
  int c_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_109 = NULL;
      e_109 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm d_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_109;
      LocalPopChoice(c_56);
      {
        ATerm f_109 = NULL,g_109 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            f_109 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_109;
        t = map_1_0(o_15, t);
        g_109 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, g_109);
      }
    }
  else
    {
      t = b_56;
      {
        ATerm e_56 = t;
        int f_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_109 = NULL;
            m_109 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm g_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_109;
            LocalPopChoice(f_56);
            {
              ATerm n_109 = NULL,o_109 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  n_109 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_109;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              o_109 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, o_109);
            }
          }
        else
          {
            t = e_56;
            {
              ATerm h_56 = t;
              int i_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_109 = NULL;
                  r_109 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm j_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_109;
                  LocalPopChoice(i_56);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = h_56;
                  {
                    ATerm k_56 = t;
                    int l_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_109 = NULL;
                        s_109 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm m_56 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = s_109;
                        LocalPopChoice(l_56);
                        t = UpgradeExtendOverrideDynamicRules_0_0(t);
                      }
                    else
                      {
                        t = k_56;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm n_56 = t;
  int o_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(o_56);
    }
  else
    {
      t = n_56;
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(n_15, t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = Cons_2_0(q_15, r_15, t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm g_111 = NULL,j_111 = NULL,l_111 = NULL,m_111 = NULL,w_24 = NULL;
  m_111 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_111);
  g_111 = t;
  t = j_111;
  t = topdown_1_0(s_15, t);
  t = listtd_1_0(t_15, t);
  l_111 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_111);
  w_24 = t;
  t = SSLsetAnnotations(w_24, g_111);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm p_56 = t;
  int q_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_56 = t;
      int t_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(t_56);
        }
      else
        {
          t = s_56;
          {
            ATerm r_111 = NULL,s_111 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                r_111 = ATgetArgument(t, 0);
                s_111 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_56, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_111), (ATerm) ATmakeAppl(sym_Str_1, r_111)));
          }
        }
      LocalPopChoice(q_56);
    }
  else
    {
      t = p_56;
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = repeat_2_0(w_15, _id, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm b_112 = NULL,d_112 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_112 = ATgetFirst((ATermList) t);
      d_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_11(b_112, d_112, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm d_110 = NULL,h_110 = NULL,i_110 = NULL,k_110 = NULL,l_110 = NULL,m_110 = NULL,r_110 = NULL,u_110 = NULL,y_24 = NULL,x_24 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  u_110 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_110);
  d_110 = t;
  t = h_110;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_110 = ATgetFirst((ATermList) t);
      l_110 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_110);
  i_110 = t;
  t = l_110;
  t = Cons_2_0(_id, p_15, t);
  m_110 = t;
  t = (ATerm) ATinsert(CheckATermList(m_110), k_110);
  x_24 = t;
  t = SSLsetAnnotations(x_24, i_110);
  r_110 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_110);
  y_24 = t;
  t = SSLsetAnnotations(y_24, d_110);
  return(t);
}
ATerm tboundin_3_0 (ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL;
  d_118 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_118 = ATgetArgument(t, 0);
      c_118 = ATgetArgument(t, 1);
      {
        ATerm t_40 = NULL,a_41 = NULL,b_41 = NULL,q_25 = NULL;
        t = SSLgetAnnotations(d_118);
        t_40 = t;
        t = e_118;
        t = l_143(t);
        a_41 = t;
        t = c_118;
        t = j_143(t);
        b_41 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_41, b_41);
        q_25 = t;
        t = SSLsetAnnotations(q_25, t_40);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          e_118 = ATgetArgument(t, 0);
          {
            ATerm j_41 = NULL,l_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,a_42 = NULL,s_25 = NULL,r_25 = NULL;
            t = SSLgetAnnotations(d_118);
            j_41 = t;
            t = e_118;
            if(match_cons(t, sym_Rule_3))
              {
                t_41 = ATgetArgument(t, 0);
                u_41 = ATgetArgument(t, 1);
                v_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_118);
            l_41 = t;
            t = t_41;
            t = j_143(t);
            w_41 = t;
            t = u_41;
            t = j_143(t);
            x_41 = t;
            t = v_41;
            t = j_143(t);
            y_41 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_41, x_41, y_41);
            r_25 = t;
            t = SSLsetAnnotations(r_25, l_41);
            a_42 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, a_42);
            s_25 = t;
            t = SSLsetAnnotations(s_25, j_41);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              e_118 = ATgetArgument(t, 0);
              c_118 = ATgetArgument(t, 1);
              y_117 = ATgetArgument(t, 2);
              {
                ATerm u_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,t_25 = NULL;
                t = SSLgetAnnotations(d_118);
                u_42 = t;
                t = e_118;
                t = l_143(t);
                y_42 = t;
                t = c_118;
                t = l_143(t);
                z_42 = t;
                t = y_117;
                t = l_143(t);
                a_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, y_42, z_42, a_43);
                t_25 = t;
                t = SSLsetAnnotations(t_25, u_42);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_118 = ATgetArgument(t, 0);
                  c_118 = ATgetArgument(t, 1);
                  y_117 = ATgetArgument(t, 2);
                  z_117 = ATgetArgument(t, 3);
                  {
                    ATerm o_43 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,u_25 = NULL;
                    t = SSLgetAnnotations(d_118);
                    o_43 = t;
                    t = e_118;
                    t = l_143(t);
                    k_44 = t;
                    t = c_118;
                    t = l_143(t);
                    l_44 = t;
                    t = y_117;
                    t = l_143(t);
                    m_44 = t;
                    t = z_117;
                    t = j_143(t);
                    n_44 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_44, l_44, m_44, n_44);
                    u_25 = t;
                    t = SSLsetAnnotations(u_25, o_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_118 = ATgetArgument(t, 0);
                      c_118 = ATgetArgument(t, 1);
                      y_117 = ATgetArgument(t, 2);
                      z_117 = ATgetArgument(t, 3);
                      {
                        ATerm b_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,v_25 = NULL;
                        t = SSLgetAnnotations(d_118);
                        b_45 = t;
                        t = e_118;
                        t = l_143(t);
                        g_45 = t;
                        t = c_118;
                        t = l_143(t);
                        h_45 = t;
                        t = y_117;
                        t = l_143(t);
                        i_45 = t;
                        t = z_117;
                        t = j_143(t);
                        j_45 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, g_45, h_45, i_45, j_45);
                        v_25 = t;
                        t = SSLsetAnnotations(v_25, b_45);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          e_118 = ATgetArgument(t, 0);
                          c_118 = ATgetArgument(t, 1);
                          {
                            ATerm t_45 = NULL,x_45 = NULL,y_45 = NULL,w_25 = NULL;
                            t = SSLgetAnnotations(d_118);
                            t_45 = t;
                            t = e_118;
                            t = l_143(t);
                            x_45 = t;
                            t = c_118;
                            t = j_143(t);
                            y_45 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_45, y_45);
                            w_25 = t;
                            t = SSLsetAnnotations(w_25, t_45);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_118 = ATgetArgument(t, 0);
                              c_118 = ATgetArgument(t, 1);
                              {
                                ATerm i_46 = NULL,m_46 = NULL,n_46 = NULL,x_25 = NULL;
                                t = SSLgetAnnotations(d_118);
                                i_46 = t;
                                t = e_118;
                                t = l_143(t);
                                m_46 = t;
                                t = c_118;
                                t = j_143(t);
                                n_46 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, m_46, n_46);
                                x_25 = t;
                                t = SSLsetAnnotations(x_25, i_46);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_118 = ATgetArgument(t, 0);
                                  c_118 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_46 = NULL,z_46 = NULL,a_47 = NULL,y_25 = NULL;
                                    t = SSLgetAnnotations(d_118);
                                    w_46 = t;
                                    t = e_118;
                                    t = l_143(t);
                                    z_46 = t;
                                    t = c_118;
                                    t = j_143(t);
                                    a_47 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, z_46, a_47);
                                    y_25 = t;
                                    t = SSLsetAnnotations(y_25, w_46);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      e_118 = ATgetArgument(t, 0);
                                      {
                                        ATerm k_47 = NULL,p_47 = NULL,z_25 = NULL;
                                        t = SSLgetAnnotations(d_118);
                                        k_47 = t;
                                        t = e_118;
                                        t = j_143(t);
                                        p_47 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, p_47);
                                        z_25 = t;
                                        t = SSLsetAnnotations(z_25, k_47);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          e_118 = ATgetArgument(t, 0);
                                          {
                                            ATerm z_47 = NULL,l_48 = NULL,a_26 = NULL;
                                            t = SSLgetAnnotations(d_118);
                                            z_47 = t;
                                            t = e_118;
                                            t = j_143(t);
                                            l_48 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, l_48);
                                            a_26 = t;
                                            t = SSLsetAnnotations(a_26, z_47);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              e_118 = ATgetArgument(t, 0);
                                              {
                                                ATerm v_48 = NULL,x_48 = NULL,b_26 = NULL;
                                                t = SSLgetAnnotations(d_118);
                                                v_48 = t;
                                                t = e_118;
                                                t = j_143(t);
                                                x_48 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_48);
                                                b_26 = t;
                                                t = SSLsetAnnotations(b_26, v_48);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  e_118 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm p_49 = NULL,r_49 = NULL,c_26 = NULL;
                                                    t = SSLgetAnnotations(d_118);
                                                    p_49 = t;
                                                    t = e_118;
                                                    t = j_143(t);
                                                    r_49 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, r_49);
                                                    c_26 = t;
                                                    t = SSLsetAnnotations(c_26, p_49);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm f_50 = NULL,p_50 = NULL,h_26 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      e_118 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(d_118);
                                                  f_50 = t;
                                                  t = e_118;
                                                  t = j_143(t);
                                                  p_50 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, p_50);
                                                  h_26 = t;
                                                  t = SSLsetAnnotations(h_26, f_50);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm s_143 (ATerm), ATerm t)
{
  ATerm e_119 = NULL,f_119 = NULL,i_119 = NULL;
  ATerm x_56 = t;
  int y_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          e_119 = ATgetArgument(t, 0);
          {
            ATerm z_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_56);
      t = e_119;
      if(match_cons(t, sym_DynRuleId_1))
        {
          f_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_119;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_57 = ATgetArgument(t, 0);
          ATerm b_57 = ATgetArgument(t, 1);
          i_119 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_119;
    }
  else
    {
      t = x_56;
      {
        ATerm e_57 = t;
        int h_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                e_119 = ATgetArgument(t, 0);
                {
                  ATerm i_57 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_57);
            t = e_119;
            if(match_cons(t, sym_DynRuleId_1))
              {
                f_119 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = f_119;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_57 = ATgetArgument(t, 0);
                ATerm m_57 = ATgetArgument(t, 1);
                i_119 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_119;
          }
        else
          {
            t = e_57;
            if(match_cons(t, sym_AddDynRule_2))
              {
                e_119 = ATgetArgument(t, 0);
                {
                  ATerm p_57 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = e_119;
            if(match_cons(t, sym_DynRuleId_1))
              {
                f_119 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = f_119;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm s_57 = ATgetArgument(t, 0);
                ATerm t_57 = ATgetArgument(t, 1);
                i_119 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_119;
          }
      }
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm d_120 = NULL;
  ATerm v_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_120 = ATgetArgument(t, 0);
          {
            ATerm z_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_57);
      t = d_120;
    }
  else
    {
      t = v_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_120;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm j_120 = NULL;
  ATerm a_58 = t;
  int b_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_120 = ATgetArgument(t, 0);
          {
            ATerm c_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_58);
      t = j_120;
    }
  else
    {
      t = a_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_120;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm t_119 = NULL;
  ATerm e_58 = t;
  int f_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_58 = ATgetArgument(t, 0);
          ATerm j_58 = ATgetArgument(t, 1);
          t_119 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(f_58);
      t = t_119;
      t = map_1_0(z_15, t);
    }
  else
    {
      t = e_58;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm k_58 = ATgetArgument(t, 0);
          ATerm q_58 = ATgetArgument(t, 1);
          t_119 = ATgetArgument(t, 2);
          {
            ATerm r_58 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = t_119;
      t = map_1_0(a_16, t);
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm f_121 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_121);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm s_58 = t;
  int t_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_58);
    }
  else
    {
      t = s_58;
      {
        ATerm u_58 = t;
        int v_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_58);
          }
        else
          {
            t = u_58;
            {
              ATerm w_58 = t;
              int x_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL,k_121 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_121 = ATgetArgument(t, 0);
                      i_121 = ATgetArgument(t, 1);
                      j_121 = ATgetArgument(t, 2);
                      k_121 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_121;
                  t = map_1_0(d_16, t);
                  LocalPopChoice(x_58);
                }
              else
                {
                  t = w_58;
                  {
                    ATerm y_58 = t;
                    int z_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_58);
                      }
                    else
                      {
                        t = y_58;
                        t = dynrule_targs_1_0(e_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm r_121 = NULL;
  ATerm b_59 = t;
  int c_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_121 = ATgetArgument(t, 0);
          {
            ATerm e_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_59);
      t = r_121;
    }
  else
    {
      t = b_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_121;
    }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = map_1_0(f_16, t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm y_121 = NULL;
  ATerm h_59 = t;
  int i_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_121 = ATgetArgument(t, 0);
          {
            ATerm j_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_59);
      t = y_121;
    }
  else
    {
      t = h_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_121;
    }
  return(t);
}
static ATerm g_16 (ATerm t)
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
static ATerm h_16 (ATerm t)
{
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(n_59);
          }
        else
          {
            t = m_59;
            {
              ATerm o_59 = t;
              int q_59 = stack_ptr;
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
                  t = map_1_0(i_16, t);
                  LocalPopChoice(q_59);
                }
              else
                {
                  t = o_59;
                  {
                    ATerm r_59 = t;
                    int s_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_59);
                      }
                    else
                      {
                        t = r_59;
                        t = dynrule_targs_1_0(j_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm s_122 = NULL;
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_122 = ATgetArgument(t, 0);
          {
            ATerm z_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_59);
      t = s_122;
    }
  else
    {
      t = t_59;
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
static ATerm j_16 (ATerm t)
{
  t = map_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm x_122 = NULL;
  ATerm a_60 = t;
  int d_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_122 = ATgetArgument(t, 0);
          {
            ATerm g_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_60);
      t = x_122;
    }
  else
    {
      t = a_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_122;
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm b_123 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_123);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm m_60 = t;
  int p_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_60);
    }
  else
    {
      t = m_60;
      {
        ATerm s_60 = t;
        int x_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_60);
          }
        else
          {
            t = s_60;
            {
              ATerm y_60 = t;
              int z_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_123 = ATgetArgument(t, 0);
                      e_123 = ATgetArgument(t, 1);
                      f_123 = ATgetArgument(t, 2);
                      g_123 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_123;
                  t = map_1_0(o_16, t);
                  LocalPopChoice(z_60);
                }
              else
                {
                  t = y_60;
                  {
                    ATerm a_61 = t;
                    int b_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_61);
                      }
                    else
                      {
                        t = a_61;
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
  ATerm n_123 = NULL;
  ATerm c_61 = t;
  int d_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_123 = ATgetArgument(t, 0);
          {
            ATerm e_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_61);
      t = n_123;
    }
  else
    {
      t = c_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_123;
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
  ATerm s_123 = NULL;
  ATerm f_61 = t;
  int g_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_123 = ATgetArgument(t, 0);
          {
            ATerm h_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_61);
      t = s_123;
    }
  else
    {
      t = f_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_123;
    }
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm w_123 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_123);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm i_61 = t;
  int j_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_61);
    }
  else
    {
      t = i_61;
      {
        ATerm l_61 = t;
        int n_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_61);
          }
        else
          {
            t = l_61;
            {
              ATerm p_61 = t;
              int r_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_123 = NULL,z_123 = NULL,a_124 = NULL,b_124 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_123 = ATgetArgument(t, 0);
                      z_123 = ATgetArgument(t, 1);
                      a_124 = ATgetArgument(t, 2);
                      b_124 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_124;
                  t = map_1_0(v_16, t);
                  LocalPopChoice(r_61);
                }
              else
                {
                  t = p_61;
                  {
                    ATerm s_61 = t;
                    int t_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_61);
                      }
                    else
                      {
                        t = s_61;
                        t = dynrule_targs_1_0(w_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm i_124 = NULL;
  ATerm v_61 = t;
  int w_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_124 = ATgetArgument(t, 0);
          {
            ATerm z_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_61);
      t = i_124;
    }
  else
    {
      t = v_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_124;
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = map_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm n_124 = NULL;
  ATerm a_62 = t;
  int f_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_124 = ATgetArgument(t, 0);
          {
            ATerm g_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_62);
      t = n_124;
    }
  else
    {
      t = a_62;
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
static ATerm a_17 (ATerm t)
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
static ATerm b_17 (ATerm t)
{
  ATerm i_62 = t;
  int m_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_62);
    }
  else
    {
      t = i_62;
      {
        ATerm n_62 = t;
        int o_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_62);
          }
        else
          {
            t = n_62;
            {
              ATerm p_62 = t;
              int r_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_124 = NULL,z_124 = NULL,a_125 = NULL,b_125 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_124 = ATgetArgument(t, 0);
                      z_124 = ATgetArgument(t, 1);
                      a_125 = ATgetArgument(t, 2);
                      b_125 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_125;
                  t = map_1_0(c_17, t);
                  LocalPopChoice(r_62);
                }
              else
                {
                  t = p_62;
                  {
                    ATerm s_62 = t;
                    int t_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_62);
                      }
                    else
                      {
                        t = s_62;
                        t = dynrule_targs_1_0(d_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm i_125 = NULL;
  ATerm y_62 = t;
  int z_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_125 = ATgetArgument(t, 0);
          {
            ATerm a_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_62);
      t = i_125;
    }
  else
    {
      t = y_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_125;
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = map_1_0(e_17, t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm n_125 = NULL;
  ATerm b_63 = t;
  int g_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_125 = ATgetArgument(t, 0);
          {
            ATerm h_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_63);
      t = n_125;
    }
  else
    {
      t = b_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_125;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm d_121 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      d_121 = ATgetArgument(t, 0);
      t = d_121;
      t = free_vars_3_0(b_16, c_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          d_121 = ATgetArgument(t, 0);
          t = d_121;
          t = free_vars_3_0(g_16, h_16, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              d_121 = ATgetArgument(t, 0);
              t = d_121;
              t = free_vars_3_0(m_16, n_16, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  d_121 = ATgetArgument(t, 0);
                  t = d_121;
                  t = free_vars_3_0(t_16, u_16, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      d_121 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = d_121;
                  t = free_vars_3_0(a_17, b_17, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm d_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_126);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm i_63 = t;
  int j_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_63);
    }
  else
    {
      t = i_63;
      {
        ATerm k_63 = t;
        int l_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_63);
          }
        else
          {
            t = k_63;
            {
              ATerm m_63 = t;
              int n_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_126 = ATgetArgument(t, 0);
                      g_126 = ATgetArgument(t, 1);
                      h_126 = ATgetArgument(t, 2);
                      i_126 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_126;
                  t = map_1_0(h_17, t);
                  LocalPopChoice(n_63);
                }
              else
                {
                  t = m_63;
                  {
                    ATerm o_63 = t;
                    int q_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_63);
                      }
                    else
                      {
                        t = o_63;
                        t = dynrule_targs_1_0(i_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm p_126 = NULL;
  ATerm r_63 = t;
  int s_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_126 = ATgetArgument(t, 0);
          {
            ATerm t_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_63);
      t = p_126;
    }
  else
    {
      t = r_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_126;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = map_1_0(j_17, t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm u_126 = NULL;
  ATerm v_63 = t;
  int w_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_126 = ATgetArgument(t, 0);
          {
            ATerm x_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_63);
      t = u_126;
    }
  else
    {
      t = v_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_126;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_125 = NULL,a_126 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_126 = ATgetArgument(t, 0);
      t = a_126;
      if(match_cons(t, sym_Rule_3))
        {
          w_125 = ATgetArgument(t, 0);
          {
            ATerm y_63 = ATgetArgument(t, 1);
          }
          {
            ATerm z_63 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_125;
      t = free_vars_3_0(f_17, g_17, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_126 = ATgetArgument(t, 0);
          {
            ATerm h_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_126;
    }
  return(t);
}
static ATerm b_12 (ATerm b_122 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  static ATerm n_127 (ATerm t)
  {
    ATerm i_127 = NULL,j_127 = NULL,k_127 = NULL;
    i_127 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_127 = ATgetFirst((ATermList) t);
            k_127 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_64 = t;
          int n_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_127;
              {
                static ATerm l_17 (ATerm t)
                {
                  t = p_30;
                  return(t);
                }
                t = c_12(b_122, l_17, j_127, k_127, t);
              }
              t = n_127(t);
              LocalPopChoice(n_64);
            }
          else
            {
              t = m_64;
              {
                ATerm x_50 = NULL,b_51 = NULL,h_27 = NULL;
                t = SSLgetAnnotations(i_127);
                x_50 = t;
                t = k_127;
                t = n_127(t);
                b_51 = t;
                t = (ATerm) ATinsert(CheckATermList(b_51), j_127);
                h_27 = t;
                t = SSLsetAnnotations(h_27, x_50);
              }
            }
        }
      }
    return(t);
  }
  t = q_30;
  t = n_127(t);
  return(t);
}
static ATerm c_12 (ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm u_30, ATerm t_30, ATerm t)
{
  t = f_122(t);
  {
    static ATerm m_17 (ATerm t)
    {
      ATerm r_127 = NULL;
      r_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_30, r_127);
      t = e_122(t);
      return(t);
    }
    t = fetch_1_0(m_17, t);
  }
  t = t_30;
  return(t);
}
static ATerm d_12 (ATerm w_121 (ATerm), ATerm o_30, ATerm n_30, ATerm t)
{
  static ATerm h_128 (ATerm t)
  {
    ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL;
    c_128 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_128;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_128 = ATgetFirst((ATermList) t);
            e_128 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_64 = t;
          int t_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_128;
              {
                static ATerm n_17 (ATerm t)
                {
                  t = n_30;
                  return(t);
                }
                t = c_12(w_121, n_17, d_128, e_128, t);
              }
              t = h_128(t);
              LocalPopChoice(t_64);
            }
          else
            {
              t = o_64;
              {
                ATerm t_51 = NULL,c_52 = NULL,j_27 = NULL;
                t = SSLgetAnnotations(c_128);
                t_51 = t;
                t = e_128;
                t = h_128(t);
                c_52 = t;
                t = (ATerm) ATinsert(CheckATermList(c_52), d_128);
                j_27 = t;
                t = SSLsetAnnotations(j_27, t_51);
              }
            }
        }
      }
    return(t);
  }
  t = o_30;
  t = h_128(t);
  return(t);
}
ATerm genzip_4_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm t)
{
  static ATerm p_128 (ATerm t)
  {
    ATerm v_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_119(t);
        LocalPopChoice(y_64);
      }
    else
      {
        t = v_64;
        {
          ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL,n_128 = NULL,o_128 = NULL,n_27 = NULL;
          t = v_119(t);
          o_128 = t;
          if(match_cons(t, sym__2))
            {
              k_128 = ATgetArgument(t, 0);
              l_128 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_128);
          j_128 = t;
          t = k_128;
          t = x_119(t);
          m_128 = t;
          t = l_128;
          t = p_128(t);
          n_128 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_128, n_128);
          n_27 = t;
          t = SSLsetAnnotations(n_27, j_128);
          t = w_119(t);
        }
      }
    return(t);
  }
  t = p_128(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_65 = ATgetArgument(t, 0);
      if(((ATgetType(a_65) != AT_LIST) || !(ATisEmpty(a_65))))
        _fail(t);
      {
        ATerm b_65 = ATgetArgument(t, 1);
        if(((ATgetType(b_65) != AT_LIST) || !(ATisEmpty(b_65))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm w_128 = NULL,x_128 = NULL,d_129 = NULL,e_129 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_65 = ATgetArgument(t, 0);
      if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
        {
          w_128 = ATgetFirst((ATermList) g_65);
          x_128 = (ATerm) ATgetNext((ATermList) g_65);
        }
      else
        _fail(t);
      {
        ATerm i_65 = ATgetArgument(t, 1);
        if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
          {
            d_129 = ATgetFirst((ATermList) i_65);
            e_129 = (ATerm) ATgetNext((ATermList) i_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_128, d_129), (ATerm) ATmakeAppl(sym__2, x_128, e_129));
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL;
  if(match_cons(t, sym__2))
    {
      f_129 = ATgetArgument(t, 0);
      g_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_129), f_129);
  return(t);
}
static ATerm i_12 (ATerm l_674, ATerm q_674, ATerm z_66, ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL;
  t = SSL_explode_term(q_674);
  if(match_cons(t, sym__2))
    {
      r_128 = ATgetArgument(t, 0);
      t_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_674);
  if(match_cons(t, sym__2))
    {
      if((r_128 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_128, t_128);
  t = genzip_4_0(o_17, p_17, q_17, _id, t);
  u_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_128, z_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t)
{
  static ATerm i_129 (ATerm t)
  {
    ATerm j_65 = t;
    int k_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_110(t);
        LocalPopChoice(k_65);
      }
    else
      {
        t = j_65;
        t = w_110(t);
        t = i_129(t);
      }
    return(t);
  }
  t = i_129(t);
  return(t);
}
ATerm for_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  t = y_110(t);
  t = while_not_2_0(z_110, a_111, t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm p_129 = NULL;
  p_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_129);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm q_129 = NULL,r_129 = NULL,s_129 = NULL,t_129 = NULL,p_27 = NULL;
  t_129 = t;
  if(match_cons(t, sym__2))
    {
      r_129 = ATgetArgument(t, 0);
      s_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_129);
  q_129 = t;
  t = s_129;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_129, s_129);
  p_27 = t;
  t = SSLsetAnnotations(p_27, q_129);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL,q_130 = NULL;
  m_130 = t;
  if(match_cons(t, sym__2))
    {
      n_130 = ATgetArgument(t, 0);
      o_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_130;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_130 = ATgetFirst((ATermList) t);
      q_130 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_65 = t;
        int t_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_131(n_130, o_130, m_130, t);
            LocalPopChoice(t_65);
          }
        else
          {
            t = o_65;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_130), p_130), q_130);
          }
      }
    }
  else
    {
      t = g_131(n_130, o_130, m_130, t);
    }
  return(t);
}
static ATerm g_131 (ATerm u_129, ATerm v_129, ATerm w_129, ATerm t)
{
  ATerm x_129 = NULL,a_130 = NULL,q_27 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL;
  t = SSLgetAnnotations(w_129);
  x_129 = t;
  t = v_129;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_130 = ATgetFirst((ATermList) t);
      g_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_130;
  if(match_cons(t, sym__2))
    {
      e_130 = ATgetArgument(t, 0);
      f_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_65 = t;
    int v_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_130;
        if((e_130 != t))
          {
            _fail(t);
          }
        t = g_130;
        LocalPopChoice(v_65);
      }
    else
      {
        t = u_65;
        t = v_129;
        t = i_12(e_130, f_130, g_130, t);
      }
  }
  a_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_129, a_130);
  q_27 = t;
  t = SSLsetAnnotations(q_27, x_129);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm f_131 = NULL;
  if(match_cons(t, sym__2))
    {
      f_131 = ATgetArgument(t, 0);
      if((f_131 != ATgetArgument(t, 1)))
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
  ATerm y_65 = t;
  int b_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_17, s_17, t_17, t);
      LocalPopChoice(b_66);
    }
  else
    {
      t = y_65;
      {
        ATerm u_130 = NULL,a_131 = NULL,c_131 = NULL;
        u_130 = t;
        if(match_cons(t, sym__2))
          {
            a_131 = ATgetArgument(t, 0);
            c_131 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_130;
        t = d_12(u_17, a_131, c_131, t);
      }
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  if(match_cons(t, sym__2))
    {
      r_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(z_17, r_52, s_52, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm t_52 = NULL;
  if(match_cons(t, sym__2))
    {
      t_52 = ATgetArgument(t, 0);
      if((t_52 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(c_18, a_53, b_53, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm c_53 = NULL;
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      if((c_53 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm w_140 (ATerm), ATerm x_140 (ATerm), ATerm y_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_131 (ATerm t)
  {
    ATerm c_66 = t;
    int d_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_140(t);
        LocalPopChoice(d_66);
      }
    else
      {
        t = c_66;
        {
          ATerm e_66 = t;
          int f_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_131 = NULL,j_131 = NULL,m_52 = NULL,n_52 = NULL;
              i_131 = t;
              t = x_140(t);
              j_131 = t;
              t = i_131;
              {
                static ATerm v_17 (ATerm t)
                {
                  ATerm l_131 = NULL;
                  t = u_131(t);
                  l_131 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_131, j_131);
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_140(v_17, u_131, w_17, t);
              }
              n_52 = t;
              t = SSL_explode_term(n_52);
              if(match_cons(t, sym__2))
                {
                  ATerm g_66 = ATgetArgument(t, 0);
                  m_52 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_52;
              t = foldr_3_0(x_17, y_17, _id, t);
              LocalPopChoice(f_66);
            }
          else
            {
              t = e_66;
              {
                ATerm v_52 = NULL,w_52 = NULL;
                w_52 = t;
                t = SSL_explode_term(w_52);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_66 = ATgetArgument(t, 0);
                    v_52 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_52;
                t = foldr_3_0(a_18, b_18, u_131, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_131(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  static ATerm d_18 (ATerm t)
  {
    t = bottomup_1_0(f_111, t);
    return(t);
  }
  t = SRTS_all(d_18, t);
  t = f_111(t);
  return(t);
}
static ATerm m_12 (ATerm t_60, ATerm u_60, ATerm t)
{
  ATerm v_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
  t = f_13(t_60, u_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_131 = ATgetFirst((ATermList) t);
      {
        ATerm j_66 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_131;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm j_132 = NULL,k_132 = NULL;
  j_132 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_66 = t;
    int l_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_54 = NULL;
        t = term_o_66;
        d_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_66, j_132);
        t = m_12(d_54, j_132, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm q_66 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_66) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, k_132, (ATerm) ATempty);
        LocalPopChoice(l_66);
      }
    else
      {
        t = k_66;
        {
          ATerm k_55 = NULL;
          t = term_o_66;
          k_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_66, j_132);
          t = m_12(k_55, j_132, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm r_66 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_66) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, k_132, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  static ATerm n_132 (ATerm t)
  {
    ATerm s_66 = t;
    int t_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_112(t);
        LocalPopChoice(t_66);
      }
    else
      {
        t = s_66;
        t = SRTS_all(n_132, t);
      }
    return(t);
  }
  t = n_132(t);
  return(t);
}
static ATerm n_12 (ATerm z_130 (ATerm), ATerm s_44, ATerm q_44, ATerm t)
{
  ATerm o_132 = NULL,p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL,t_132 = NULL,u_132 = NULL,v_132 = NULL;
  r_132 = t;
  t = z_130(t);
  o_132 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_132, s_44, q_44);
  t = g_13(o_132, s_44, q_44, t);
  {
    ATerm u_66 = t;
    int w_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_132 = NULL;
        t = term_x_66;
        w_132 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_132, term_x_66);
        t = f_13(o_132, w_132, t);
        LocalPopChoice(w_66);
      }
    else
      {
        t = u_66;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_132 = ATgetFirst((ATermList) t);
      q_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_132, term_x_66, (ATerm) ATinsert(CheckATermList(q_132), (ATerm) ATinsert(CheckATermList(p_132), s_44)));
  t = lookup_table_0_1(o_132, t);
  v_132 = t;
  t = term_x_66;
  s_132 = t;
  t = (ATerm) ATinsert(CheckATermList(q_132), (ATerm) ATinsert(CheckATermList(p_132), s_44));
  t_132 = t;
  t = v_132;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(s_132, t_132, u_132, t);
  t = r_132;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_o_66;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = term_o_66;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm a_133 = NULL,c_133 = NULL,d_133 = NULL,e_133 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      c_133 = ATgetArgument(t, 0);
      d_133 = ATgetArgument(t, 1);
      a_133 = ATgetArgument(t, 2);
      {
        ATerm h_133 = NULL,i_133 = NULL;
        t = d_133;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_133);
        h_133 = t;
        t = term_a_67;
        i_133 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_133), term_a_67);
        t = n_12(e_18, h_133, i_133, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_133, (ATerm)ATempty, a_133);
      }
    }
  else
    {
      ATerm l_133 = NULL,m_133 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          c_133 = ATgetArgument(t, 0);
          d_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_133;
      if(match_cons(t, sym_ConstType_1))
        {
          e_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_133);
      l_133 = t;
      t = term_f_67;
      m_133 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_133), term_f_67);
      t = n_12(f_18, l_133, m_133, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_133, (ATerm) ATmakeAppl(sym_ConstType_1, e_133));
    }
  return(t);
}
static ATerm o_12 (ATerm n_60, ATerm o_60, ATerm t)
{
  ATerm q_133 = NULL,s_133 = NULL;
  s_133 = t;
  {
    ATerm k_67 = t;
    int l_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
        t = f_13(n_60, o_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_67 = ATgetFirst((ATermList) t);
            q_133 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_67);
        {
          ATerm t_133 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, n_60, o_60, q_133);
          t = lookup_table_0_1(n_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_13(o_60, q_133, t_133, t);
          t = (ATerm) ATmakeAppl(sym__3, n_60, o_60, q_133);
        }
      }
    else
      {
        t = k_67;
        {
          ATerm v_133 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
          t = lookup_table_0_1(n_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_13(o_60, v_133, t);
          t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
        }
      }
  }
  t = s_133;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_130 (ATerm), ATerm t)
{
  ATerm x_133 = NULL,y_133 = NULL,z_133 = NULL,a_134 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL;
  a_134 = t;
  t = w_130(t);
  z_133 = t;
  {
    ATerm n_67 = t;
    int o_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_134 = NULL;
        t = term_x_66;
        e_134 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_133, term_x_66);
        t = f_13(z_133, e_134, t);
        LocalPopChoice(o_67);
      }
    else
      {
        t = n_67;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_133 = ATgetFirst((ATermList) t);
      x_133 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_133, term_x_66, x_133);
  t = lookup_table_0_1(z_133, t);
  d_134 = t;
  t = term_x_66;
  b_134 = t;
  t = d_134;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(b_134, x_133, c_134, t);
  t = y_133;
  {
    static ATerm g_18 (ATerm t)
    {
      ATerm f_134 = NULL;
      f_134 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_133, f_134);
      t = o_12(z_133, f_134, t);
      return(t);
    }
    t = map_1_0(g_18, t);
  }
  t = a_134;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t)
{
  ATerm r_67 = t;
  int s_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_110(t);
      t = b_110(t);
      LocalPopChoice(s_67);
    }
  else
    {
      t = r_67;
      t = b_110(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_130 (ATerm), ATerm t)
{
  ATerm h_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL,l_134 = NULL,m_134 = NULL,n_134 = NULL;
  i_134 = t;
  t = v_130(t);
  h_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_134, term_x_66);
  {
    ATerm t_67 = t;
    int u_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_134 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_67 = ATgetArgument(t, 0);
            ATerm w_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_66;
        r_134 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_134, term_x_66);
        t = f_13(h_134, r_134, t);
        LocalPopChoice(u_67);
      }
    else
      {
        t = t_67;
        t = (ATerm) ATempty;
      }
  }
  j_134 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_134, term_x_66, (ATerm) ATinsert(CheckATermList(j_134), (ATerm) ATempty));
  t = lookup_table_0_1(h_134, t);
  n_134 = t;
  t = term_x_66;
  k_134 = t;
  t = (ATerm) ATinsert(CheckATermList(j_134), (ATerm) ATempty);
  l_134 = t;
  t = n_134;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(k_134, l_134, m_134, t);
  t = i_134;
  return(t);
}
ATerm scope_2_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t)
{
  static ATerm h_18 (ATerm t)
  {
    t = end_scope_1_0(x_130, t);
    return(t);
  }
  t = begin_scope_1_0(x_130, t);
  t = restore_always_2_0(y_130, h_18, t);
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = term_o_66;
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm w_134 = NULL,x_134 = NULL,y_134 = NULL,z_134 = NULL,o_28 = NULL;
  z_134 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_134);
  w_134 = t;
  t = x_134;
  t = map_1_0(k_18, t);
  y_134 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_134);
  o_28 = t;
  t = SSLsetAnnotations(o_28, w_134);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm m_135 = NULL,n_135 = NULL;
  n_135 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      m_135 = ATgetArgument(t, 0);
      {
        ATerm x_67 = t;
        int y_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_56 = NULL,w_56 = NULL,m_28 = NULL;
            t = SSLgetAnnotations(n_135);
            r_56 = t;
            t = m_135;
            t = map_1_0(l_18, t);
            w_56 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, w_56);
            m_28 = t;
            t = SSLsetAnnotations(m_28, r_56);
            LocalPopChoice(y_67);
          }
        else
          {
            t = x_67;
            t = n_135;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          m_135 = ATgetArgument(t, 0);
          {
            ATerm c_68 = t;
            int d_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_57 = NULL,q_57 = NULL,n_28 = NULL;
                t = SSLgetAnnotations(n_135);
                o_57 = t;
                t = m_135;
                t = map_1_0(m_18, t);
                q_57 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, q_57);
                n_28 = t;
                t = SSLsetAnnotations(n_28, o_57);
                LocalPopChoice(d_68);
              }
            else
              {
                t = c_68;
                t = n_135;
              }
          }
        }
      else
        {
          t = n_135;
        }
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm e_68 = t;
  int f_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(f_68);
    }
  else
    {
      t = e_68;
    }
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm g_68 = t;
  int h_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(h_68);
    }
  else
    {
      t = g_68;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(i_18, j_18, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_135 = NULL,v_135 = NULL,w_135 = NULL;
  u_135 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_135;
    }
  else
    {
      static ATerm n_18 (ATerm t)
      {
        t = not_null(w_135);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_135 = ATgetFirst((ATermList) t);
          if(((w_135 != NULL) && (w_135 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_135;
      t = at_end_1_0(n_18, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm t_125 (ATerm), ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL,u_136 = NULL;
  s_136 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_136;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_136 = ATgetFirst((ATermList) t);
          u_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_68 = t;
        int j_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_58 = NULL,l_58 = NULL,m_58 = NULL,m_31 = NULL;
            t = SSLgetAnnotations(s_136);
            h_58 = t;
            t = t_136;
            t = t_125(t);
            l_58 = t;
            t = u_136;
            t = filter_1_0(t_125, t);
            m_58 = t;
            t = (ATerm) ATinsert(CheckATermList(m_58), l_58);
            m_31 = t;
            t = SSLsetAnnotations(m_31, h_58);
            LocalPopChoice(j_68);
          }
        else
          {
            t = i_68;
            t = u_136;
            t = filter_1_0(t_125, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_118 (ATerm), ATerm t)
{
  static ATerm k_137 (ATerm t)
  {
    ATerm h_137 = NULL,i_137 = NULL,j_137 = NULL;
    j_137 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_137 = ATgetFirst((ATermList) t);
        i_137 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_59 = NULL,d_59 = NULL,o_31 = NULL;
          t = SSLgetAnnotations(j_137);
          a_59 = t;
          t = i_137;
          t = k_137(t);
          d_59 = t;
          t = (ATerm) ATinsert(CheckATermList(d_59), h_137);
          o_31 = t;
          t = SSLsetAnnotations(o_31, a_59);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_137;
        t = h_118(t);
      }
    return(t);
  }
  t = k_137(t);
  return(t);
}
static ATerm w_137 (ATerm o_137, ATerm t)
{
  ATerm p_137 = NULL;
  t = SSL_explode_term(o_137);
  if(match_cons(t, sym__2))
    {
      ATerm k_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_137;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_137 = NULL,s_137 = NULL,t_137 = NULL;
  t_137 = t;
  if(match_cons(t, sym__2))
    {
      r_137 = ATgetArgument(t, 0);
      s_137 = ATgetArgument(t, 1);
      {
        ATerm l_68 = t;
        int m_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_18 (ATerm t)
            {
              t = s_137;
              return(t);
            }
            t = r_137;
            t = at_end_1_0(o_18, t);
            LocalPopChoice(m_68);
          }
        else
          {
            t = l_68;
            t = w_137(t_137, t);
          }
      }
    }
  else
    {
      t = w_137(t_137, t);
    }
  return(t);
}
static ATerm r_12 (ATerm g_35, ATerm p_34, ATerm t)
{
  ATerm x_137 = NULL,y_137 = NULL;
  static ATerm p_18 (ATerm t)
  {
    ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL;
    c_138 = t;
    t = SSL_explode_term(c_138);
    if(match_cons(t, sym__2))
      {
        if(((x_137 != NULL) && (x_137 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_137 = ATgetArgument(t, 0);
        {
          ATerm n_68 = ATgetArgument(t, 1);
          if(((ATgetType(n_68) == AT_LIST) && !(ATisEmpty(n_68))))
            {
              z_137 = ATgetFirst((ATermList) n_68);
              {
                ATerm o_68 = (ATerm) ATgetNext((ATermList) n_68);
                if(((ATgetType(o_68) != AT_LIST) || !(ATisEmpty(o_68))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_137, not_null(y_137));
    t = conc_0_0(t);
    a_138 = t;
    t = (ATerm) ATinsert(ATempty, a_138);
    b_138 = t;
    t = SSL_mkterm(x_137, b_138);
    return(t);
  }
  t = SSL_explode_term(g_35);
  if(match_cons(t, sym__2))
    {
      if(((x_137 != NULL) && (x_137 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_137 = ATgetArgument(t, 0);
      {
        ATerm p_68 = ATgetArgument(t, 1);
        if(((ATgetType(p_68) == AT_LIST) && !(ATisEmpty(p_68))))
          {
            if(((y_137 != NULL) && (y_137 != ATgetFirst((ATermList) p_68))))
              _fail(ATgetFirst((ATermList) p_68));
            else
              y_137 = ATgetFirst((ATermList) p_68);
            {
              ATerm q_68 = (ATerm) ATgetNext((ATermList) p_68);
              if(((ATgetType(q_68) != AT_LIST) || !(ATisEmpty(q_68))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_34;
  t = fetch_1_0(p_18, t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL,g_138 = NULL;
  e_138 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_138;
      t = r_124(t);
    }
  else
    {
      ATerm l_138 = NULL,m_138 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_138 = ATgetFirst((ATermList) t);
          g_138 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_138;
      t = t_124(t);
      l_138 = t;
      t = g_138;
      t = foldr_3_0(r_124, s_124, t_124, t);
      m_138 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_138, m_138);
      t = s_124(t);
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_68), term_s_68), term_r_68);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL;
  if(match_cons(t, sym__2))
    {
      t_138 = ATgetArgument(t, 0);
      u_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(t_138, u_138, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm v_138 = NULL,w_138 = NULL;
  w_138 = t;
  if(match_cons(t, sym_Signature_1))
    {
      v_138 = ATgetArgument(t, 0);
      {
        ATerm u_68 = t;
        int v_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_138 = NULL;
            t = v_138;
            t = filter_1_0(t_18, t);
            t = concat_0_0(t);
            y_138 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, y_138);
            LocalPopChoice(v_68);
          }
        else
          {
            t = u_68;
            t = w_138;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          v_138 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, v_138);
        }
      else
        {
          t = w_138;
        }
    }
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm z_138 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      z_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_138;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm p_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL,x_31 = NULL;
  s_138 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_138);
  p_138 = t;
  t = q_138;
  t = foldr_3_0(q_18, r_18, s_18, t);
  r_138 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_138);
  x_31 = t;
  t = SSLsetAnnotations(x_31, p_138);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm w_68 = t;
  int x_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(x_68);
    }
  else
    {
      t = w_68;
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm v_139 = NULL,w_139 = NULL,x_139 = NULL,y_139 = NULL,z_139 = NULL;
  z_139 = t;
  if(match_cons(t, sym_LRule_1))
    {
      y_139 = ATgetArgument(t, 0);
      t = y_139;
      if(match_cons(t, sym_Rule_3))
        {
          v_139 = ATgetArgument(t, 0);
          w_139 = ATgetArgument(t, 1);
          x_139 = ATgetArgument(t, 2);
          {
            ATerm y_68 = t;
            int a_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_140 = NULL;
                t = v_139;
                t = free_vars_3_0(w_18, z_18, tboundin_3_0, t);
                d_140 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, d_140, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, v_139, w_139, x_139)));
                LocalPopChoice(a_69);
              }
            else
              {
                t = y_68;
                t = z_139;
              }
          }
        }
      else
        {
          t = z_139;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          y_139 = ATgetArgument(t, 0);
          {
            ATerm b_69 = t;
            int c_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_141 = NULL;
                t = y_139;
                t = free_vars_3_0(h_19, i_19, tboundin_3_0, t);
                f_141 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, f_141, y_139);
                LocalPopChoice(c_69);
              }
            else
              {
                t = b_69;
                t = z_139;
              }
          }
        }
      else
        {
          t = z_139;
        }
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm e_140 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_140);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm d_69 = t;
  int e_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_69);
    }
  else
    {
      t = d_69;
      {
        ATerm f_69 = t;
        int g_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_69);
          }
        else
          {
            t = f_69;
            {
              ATerm h_69 = t;
              int i_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_140 = NULL,h_140 = NULL,i_140 = NULL,j_140 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_140 = ATgetArgument(t, 0);
                      h_140 = ATgetArgument(t, 1);
                      i_140 = ATgetArgument(t, 2);
                      j_140 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_140;
                  t = map_1_0(b_19, t);
                  LocalPopChoice(i_69);
                }
              else
                {
                  t = h_69;
                  {
                    ATerm j_69 = t;
                    int k_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_69);
                      }
                    else
                      {
                        t = j_69;
                        t = dynrule_targs_1_0(f_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm q_140 = NULL;
  ATerm l_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_140 = ATgetArgument(t, 0);
          {
            ATerm n_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_69);
      t = q_140;
    }
  else
    {
      t = l_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_140;
    }
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = map_1_0(g_19, t);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  ATerm v_140 = NULL;
  ATerm o_69 = t;
  int p_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_140 = ATgetArgument(t, 0);
          {
            ATerm q_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_69);
      t = v_140;
    }
  else
    {
      t = o_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_140;
    }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm g_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_141);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm r_69 = t;
  int s_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_69);
    }
  else
    {
      t = r_69;
      {
        ATerm t_69 = t;
        int u_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_69);
          }
        else
          {
            t = t_69;
            {
              ATerm v_69 = t;
              int w_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_141 = NULL,j_141 = NULL,k_141 = NULL,l_141 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_141 = ATgetArgument(t, 0);
                      j_141 = ATgetArgument(t, 1);
                      k_141 = ATgetArgument(t, 2);
                      l_141 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_141;
                  t = map_1_0(j_19, t);
                  LocalPopChoice(w_69);
                }
              else
                {
                  t = v_69;
                  {
                    ATerm x_69 = t;
                    int y_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_69);
                      }
                    else
                      {
                        t = x_69;
                        t = dynrule_targs_1_0(k_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm s_141 = NULL;
  ATerm z_69 = t;
  int a_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_141 = ATgetArgument(t, 0);
          {
            ATerm b_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_70);
      t = s_141;
    }
  else
    {
      t = z_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_141;
    }
  return(t);
}
static ATerm k_19 (ATerm t)
{
  t = map_1_0(r_19, t);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  ATerm x_141 = NULL;
  ATerm c_70 = t;
  int d_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_141 = ATgetArgument(t, 0);
          {
            ATerm e_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_70);
      t = x_141;
    }
  else
    {
      t = c_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_141;
    }
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm f_70 = t;
  int g_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(g_70);
    }
  else
    {
      t = f_70;
    }
  return(t);
}
static ATerm v_19 (ATerm t)
{
  ATerm h_142 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      h_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, h_142)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL,a_32 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(u_18, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(v_18, t);
  {
    ATerm h_70 = t;
    int i_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_142 = NULL,d_142 = NULL,e_142 = NULL;
        c_142 = t;
        t = term_j_70;
        d_142 = t;
        t = term_k_70;
        e_142 = t;
        t = term_l_70;
        t = f_13(d_142, e_142, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = c_142;
        LocalPopChoice(i_70);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = h_70;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(u_19, t);
  s_139 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_139);
  p_139 = t;
  t = q_139;
  t = fetch_1_0(v_19, t);
  r_139 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_139);
  a_32 = t;
  t = SSLsetAnnotations(a_32, p_139);
  return(t);
}
static ATerm s_12 (ATerm i_40, ATerm j_40, ATerm t)
{
  ATerm i_142 = NULL;
  t = SSL_fputc(i_40, j_40);
  i_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_142);
  return(t);
}
static ATerm t_12 (ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm j_142 = NULL;
  t = SSL_write_term_to_stream_text(m_24, n_24);
  j_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_142);
  return(t);
}
static ATerm v_12 (ATerm h_117 (ATerm), ATerm b_184, ATerm s_24, ATerm t)
{
  ATerm k_142 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_184, term_m_70);
  t = z_12(t);
  k_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_142, s_24);
  t = h_117(t);
  t = fclose_0_0(t);
  t = s_24;
  return(t);
}
static ATerm u_12 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm l_142 = NULL;
  t = SSL_write_term_to_stream_baf(i_24, j_24);
  l_142 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_142);
  return(t);
}
static ATerm w_19 (ATerm t)
{
  ATerm u_142 = NULL,v_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_70 = ATgetArgument(t, 0);
      if(match_cons(n_70, sym_Stream_1))
        {
          u_142 = ATgetArgument(n_70, 0);
        }
      else
        _fail(t);
      v_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12(u_142, v_142, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_70 = ATgetArgument(t, 0);
      if(match_cons(o_70, sym_Stream_1))
        {
          z_142 = ATgetArgument(o_70, 0);
        }
      else
        _fail(t);
      a_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(z_142, a_143, t);
  w_142 = t;
  t = term_j_32;
  x_142 = t;
  t = w_142;
  if(match_cons(t, sym_Stream_1))
    {
      y_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_32, w_142);
  t = s_12(x_142, y_142, t);
  return(t);
}
ATerm output_1_0 (ATerm q_136 (ATerm), ATerm t)
{
  ATerm m_142 = NULL,p_142 = NULL;
  t = q_136(t);
  p_142 = t;
  {
    ATerm p_70 = t;
    int q_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_142 = NULL,r_142 = NULL;
        t = term_j_70;
        q_142 = t;
        t = term_r_70;
        r_142 = t;
        t = term_s_70;
        t = f_13(q_142, r_142, t);
        LocalPopChoice(q_70);
      }
    else
      {
        t = p_70;
        t = term_t_70;
      }
  }
  m_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_142, p_142);
  {
    ATerm u_70 = t;
    int v_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_142 = NULL,t_142 = NULL;
        t = term_j_70;
        s_142 = t;
        t = term_w_70;
        t_142 = t;
        t = term_x_70;
        t = f_13(s_142, t_142, t);
        t = (ATerm) ATmakeAppl(sym__2, m_142, p_142);
        LocalPopChoice(v_70);
        if(match_cons(t, sym__2))
          {
            ATerm y_70 = ATgetArgument(t, 0);
            ATerm z_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_12(w_19, m_142, p_142, t);
      }
    else
      {
        t = u_70;
        if(match_cons(t, sym__2))
          {
            ATerm a_71 = ATgetArgument(t, 0);
            ATerm b_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_12(a_20, m_142, p_142, t);
      }
  }
  return(t);
}
static ATerm r_143 (ATerm i_143, ATerm t)
{
  t = SSL_fclose(i_143);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL;
  p_143 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_143 = ATgetArgument(t, 0);
      {
        ATerm c_71 = t;
        int d_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_143);
            LocalPopChoice(d_71);
          }
        else
          {
            t = c_71;
            t = r_143(p_143, t);
          }
      }
    }
  else
    {
      t = r_143(p_143, t);
    }
  return(t);
}
static ATerm w_12 (ATerm o_24, ATerm t)
{
  t = SSL_read_term_from_stream(o_24);
  return(t);
}
static ATerm x_12 (ATerm b_39, ATerm c_39, ATerm t)
{
  t = SSL_strcat(b_39, c_39);
  return(t);
}
static ATerm y_12 (ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm t_143 = NULL;
  t = SSL_fopen(k_40, l_40);
  t_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_143);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_143 = NULL;
  t = SSL_stdin_stream();
  u_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_143);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_143 = NULL;
  t = SSL_stdout_stream();
  v_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_143);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_143 = NULL;
  t = SSL_stderr_stream();
  w_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_143);
  return(t);
}
static ATerm l_145 (ATerm c_144, ATerm t)
{
  ATerm d_144 = NULL;
  t = SSL_explode_term(c_144);
  if(match_cons(t, sym__2))
    {
      ATerm e_71 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_71) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_71 = ATgetArgument(t, 1);
        if(((ATgetType(f_71) == AT_LIST) && !(ATisEmpty(f_71))))
          {
            d_144 = ATgetFirst((ATermList) f_71);
            {
              ATerm g_71 = (ATerm) ATgetNext((ATermList) f_71);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_144;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_144;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_144;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_144;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_145 (ATerm k_144, ATerm n_144, ATerm p_144, ATerm t)
{
  ATerm q_144 = NULL,r_144 = NULL,s_144 = NULL,v_144 = NULL,c_32 = NULL;
  t = SSLgetAnnotations(p_144);
  s_144 = t;
  t = k_144;
  if(match_cons(t, sym_Path_1))
    {
      v_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_144, n_144);
  c_32 = t;
  t = SSLsetAnnotations(c_32, s_144);
  if(match_cons(t, sym__2))
    {
      q_144 = ATgetArgument(t, 0);
      r_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12(q_144, r_144, t);
  return(t);
}
static ATerm n_145 (ATerm x_144, ATerm y_144, ATerm z_144, ATerm t)
{
  ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL,f_145 = NULL,d_32 = NULL;
  t = SSLgetAnnotations(z_144);
  c_145 = t;
  t = SSL_is_string(x_144);
  f_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_145, y_144);
  d_32 = t;
  t = SSLsetAnnotations(d_32, c_145);
  if(match_cons(t, sym__2))
    {
      a_145 = ATgetArgument(t, 0);
      b_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12(a_145, b_145, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm h_145 = NULL,i_145 = NULL,k_145 = NULL;
  h_145 = t;
  if(match_cons(t, sym__2))
    {
      i_145 = ATgetArgument(t, 0);
      k_145 = ATgetArgument(t, 1);
      {
        ATerm h_71 = t;
        int i_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_145(h_145, t);
            LocalPopChoice(i_71);
          }
        else
          {
            t = h_71;
            {
              ATerm j_71 = t;
              int k_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_145(i_145, k_145, h_145, t);
                  LocalPopChoice(k_71);
                }
              else
                {
                  t = j_71;
                  t = n_145(i_145, k_145, h_145, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_145(h_145, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_145 = NULL,q_145 = NULL,r_145 = NULL,w_145 = NULL;
  w_145 = t;
  {
    ATerm l_71 = t;
    int m_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_145, term_n_71);
        t = z_12(t);
        LocalPopChoice(m_71);
      }
    else
      {
        t = l_71;
        {
          ATerm b_60 = NULL,c_60 = NULL;
          t = term_o_71;
          c_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_71, w_145);
          t = x_12(c_60, w_145, t);
          b_60 = t;
          t = SSL_perror(b_60);
          _fail(t);
        }
      }
  }
  q_145 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(r_145, t);
  p_145 = t;
  t = q_145;
  t = fclose_0_0(t);
  t = p_145;
  return(t);
}
ATerm input_1_0 (ATerm r_136 (ATerm), ATerm t)
{
  ATerm p_71 = t;
  int q_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_145 = NULL,a_146 = NULL;
      t = term_j_70;
      z_145 = t;
      t = term_r_71;
      a_146 = t;
      t = term_s_71;
      t = f_13(z_145, a_146, t);
      LocalPopChoice(q_71);
    }
  else
    {
      t = p_71;
      t = term_t_71;
    }
  t = ReadFromFile_0_0(t);
  t = r_136(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_146 = NULL,c_146 = NULL,d_146 = NULL,e_146 = NULL,f_146 = NULL;
  b_146 = t;
  t = term_u_71;
  t = whoami_0_0(t);
  c_146 = t;
  t = term_c_41;
  e_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_71), c_146), term_v_71);
  f_146 = t;
  t = SSL_printnl(e_146, f_146);
  t = term_f_41;
  d_146 = t;
  t = SSL_exit(d_146);
  t = b_146;
  return(t);
}
static ATerm b_20 (ATerm t)
{
  ATerm i_146 = NULL;
  i_146 = t;
  if(match_string(t, "-k"))
    {
      t = i_146;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_146;
    }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm j_146 = NULL,k_146 = NULL,l_146 = NULL;
  j_146 = t;
  t = SSL_string_to_int(j_146);
  k_146 = t;
  t = term_x_71;
  l_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_71, k_146);
  t = i_13(l_146, k_146, t);
  t = j_146;
  return(t);
}
static ATerm g_20 (ATerm t)
{
  t = term_y_71;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_20, d_20, g_20, t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm n_146 = NULL;
  n_146 = t;
  if(match_string(t, "-S"))
    {
      t = n_146;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_146;
    }
  return(t);
}
static ATerm n_20 (ATerm t)
{
  ATerm o_146 = NULL,p_146 = NULL;
  t = term_z_71;
  o_146 = t;
  t = term_x_47;
  p_146 = t;
  t = term_a_72;
  t = i_13(o_146, p_146, t);
  t = term_b_72;
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_c_72;
  return(t);
}
static ATerm q_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm q_146 = NULL,r_146 = NULL,s_146 = NULL;
  q_146 = t;
  t = SSL_string_to_int(q_146);
  r_146 = t;
  t = term_z_71;
  s_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_71, r_146);
  t = i_13(s_146, r_146, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_146);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  t = term_d_72;
  return(t);
}
static ATerm w_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm t_146 = NULL,v_146 = NULL;
  t = term_e_72;
  t_146 = t;
  t = term_u_71;
  v_146 = t;
  t = term_f_72;
  t = i_13(t_146, v_146, t);
  t = term_g_72;
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_h_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_72 = t;
  int j_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_20, n_20, p_20, t);
      LocalPopChoice(j_72);
    }
  else
    {
      t = i_72;
      {
        ATerm k_72 = t;
        int l_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_20, s_20, v_20, t);
            LocalPopChoice(l_72);
          }
        else
          {
            t = k_72;
            t = Option_3_0(w_20, y_20, b_21, t);
          }
      }
    }
  return(t);
}
static ATerm i_13 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm w_146 = NULL,x_146 = NULL;
  t = term_j_70;
  w_146 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_70, n_55, o_55);
  t = lookup_table_0_1(w_146, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(n_55, o_55, x_146, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_70, n_55, o_55);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_147 = NULL,c_147 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_147 = NULL,e_147 = NULL,f_147 = NULL;
      t = term_u_71;
      t = e_0(t);
      d_147 = t;
      t = term_p_72;
      e_147 = t;
      t = term_q_72;
      f_147 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_72, term_q_72, d_147);
      t = g_13(e_147, f_147, d_147, t);
      _fail(t);
    }
  else
    {
      ATerm i_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_147 = ATgetFirst((ATermList) t);
          c_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_147;
      t = c_0(t);
      t = term_u_71;
      t = d_0(t);
      i_147 = t;
      t = (ATerm) ATinsert(CheckATermList(c_147), i_147);
    }
  return(t);
}
static ATerm g_21 (ATerm t)
{
  ATerm k_147 = NULL;
  k_147 = t;
  if(match_string(t, "-o"))
    {
      t = k_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_147;
    }
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm l_147 = NULL,m_147 = NULL;
  l_147 = t;
  t = term_r_70;
  m_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_70, l_147);
  t = i_13(m_147, l_147, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_147);
  return(t);
}
static ATerm i_21 (ATerm t)
{
  t = term_r_72;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_21, h_21, i_21, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm o_147 = NULL;
  o_147 = t;
  if(match_string(t, "-i"))
    {
      t = o_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_147;
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm p_147 = NULL,q_147 = NULL;
  p_147 = t;
  t = term_r_71;
  q_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_71, p_147);
  t = i_13(q_147, p_147, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_147);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = term_s_72;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_21, n_21, v_21, t);
  return(t);
}
static ATerm g_13 (ATerm i_60, ATerm j_60, ATerm h_60, ATerm t)
{
  ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL,v_147 = NULL,w_147 = NULL;
  s_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_60, j_60);
  {
    ATerm t_72 = t;
    int u_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_72 = ATgetArgument(t, 0);
            ATerm w_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_60, j_60);
        t = f_13(i_60, j_60, t);
        LocalPopChoice(u_72);
      }
    else
      {
        t = t_72;
        t = (ATerm) ATempty;
      }
  }
  t_147 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_60, j_60, (ATerm) ATinsert(CheckATermList(t_147), h_60));
  t = lookup_table_0_1(i_60, t);
  w_147 = t;
  t = (ATerm) ATinsert(CheckATermList(t_147), h_60);
  u_147 = t;
  t = w_147;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(j_60, u_147, v_147, t);
  t = s_147;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_148 = NULL,i_148 = NULL,j_148 = NULL;
      t = term_u_71;
      t = n_0(t);
      h_148 = t;
      t = term_p_72;
      i_148 = t;
      t = term_q_72;
      j_148 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_72, term_q_72, h_148);
      t = g_13(i_148, j_148, h_148, t);
      _fail(t);
    }
  else
    {
      ATerm n_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_148 = ATgetFirst((ATermList) t);
          e_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_148;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_148 = ATgetFirst((ATermList) t);
          g_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_148;
      t = k_0(t);
      t = f_148;
      t = l_0(t);
      n_148 = t;
      t = (ATerm) ATinsert(CheckATermList(g_148), n_148);
    }
  return(t);
}
static ATerm a_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm p_148 = NULL,q_148 = NULL;
  p_148 = t;
  if(match_string(t, "old"))
    {
      t = p_148;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = p_148;
    }
  t = term_k_70;
  q_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_70, p_148);
  t = i_13(q_148, p_148, t);
  t = term_u_71;
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = term_x_72;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_22, b_22, c_22, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_148 = NULL,t_148 = NULL,u_148 = NULL,v_148 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_71;
  t = whoami_0_0(t);
  s_148 = t;
  t = term_c_41;
  u_148 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_72), s_148);
  v_148 = t;
  t = SSL_printnl(u_148, v_148);
  t = term_f_41;
  t_148 = t;
  t = SSL_exit(t_148);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_148 = NULL,x_148 = NULL;
  t = term_j_70;
  w_148 = t;
  t = term_z_72;
  x_148 = t;
  t = term_a_73;
  t = f_13(w_148, x_148, t);
  return(t);
}
static ATerm a_13 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm b_73 = t;
  int c_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_43, f_43);
      LocalPopChoice(c_73);
    }
  else
    {
      t = b_73;
      t = SSL_addr(e_43, f_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t)
{
  ATerm z_148 = NULL,a_149 = NULL,b_149 = NULL;
  z_148 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_148;
      t = p_124(t);
    }
  else
    {
      ATerm e_149 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_149 = ATgetFirst((ATermList) t);
          b_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_149;
      t = foldr_2_0(p_124, q_124, t);
      e_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_149, e_149);
      t = q_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm e_22 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL;
  if(match_cons(t, sym__2))
    {
      q_60 = ATgetArgument(t, 0);
      r_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13(q_60, r_60, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_149 = NULL,e_60 = NULL,f_60 = NULL;
  t = times_0_0(t);
  f_60 = t;
  t = SSL_explode_term(f_60);
  if(match_cons(t, sym__2))
    {
      ATerm d_73 = ATgetArgument(t, 0);
      e_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_60;
  t = foldr_2_0(d_22, e_22, t);
  h_149 = t;
  t = SSL_TicksToSeconds(h_149);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_149 = NULL,t_149 = NULL,u_149 = NULL;
  s_149 = t;
  if(match_cons(t, sym__2))
    {
      t_149 = ATgetArgument(t, 0);
      u_149 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_73 = t;
    int f_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_149;
        if((t_149 != t))
          {
            _fail(t);
          }
        t = s_149;
        LocalPopChoice(f_73);
      }
    else
      {
        t = e_73;
        t = (ATerm) ATmakeAppl(sym__2, t_149, u_149);
        {
          ATerm g_73 = t;
          int h_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_149, u_149);
              LocalPopChoice(h_73);
            }
          else
            {
              t = g_73;
              t = SSL_gtr(t_149, u_149);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_149, u_149);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_133 (ATerm), ATerm t)
{
  ATerm y_149 = NULL;
  y_149 = t;
  {
    ATerm i_73 = t;
    int j_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_150 = NULL,b_150 = NULL,c_150 = NULL;
        t = term_j_70;
        b_150 = t;
        t = term_z_71;
        c_150 = t;
        t = term_k_73;
        t = f_13(b_150, c_150, t);
        a_150 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_150, term_f_41);
        t = geq_0_0(t);
        t = y_149;
        t = r_133(t);
        LocalPopChoice(j_73);
      }
    else
      {
        t = i_73;
        t = y_149;
      }
  }
  return(t);
}
static ATerm f_22 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL,h_150 = NULL,i_150 = NULL;
  t = run_time_0_0(t);
  e_150 = t;
  t = term_u_71;
  t = whoami_0_0(t);
  f_150 = t;
  t = term_c_41;
  h_150 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_73), e_150), term_l_73), f_150);
  i_150 = t;
  t = SSL_printnl(h_150, i_150);
  t = (ATerm) ATmakeAppl(sym__2, term_c_41, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_73), e_150), term_l_73), f_150));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_22, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_150 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_47;
  j_150 = t;
  t = SSL_exit(j_150);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  ATerm t_150 = NULL,u_150 = NULL;
  u_150 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_150;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_150 = ATgetArgument(t, 0);
          {
            ATerm o_61 = NULL,l_32 = NULL;
            t = SSLgetAnnotations(u_150);
            o_61 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_150);
            l_32 = t;
            t = SSLsetAnnotations(l_32, o_61);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_150;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm n_73 = t;
  int o_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_150 = NULL,n_150 = NULL;
      t = term_j_70;
      m_150 = t;
      t = term_p_73;
      n_150 = t;
      t = term_q_73;
      t = f_13(m_150, n_150, t);
      LocalPopChoice(o_73);
    }
  else
    {
      t = n_73;
      t = fetch_1_0(o_22, t);
    }
  t = h_136(t);
  return(t);
}
static ATerm j_13 (ATerm a_64, ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm w_150 = NULL;
  t = SSL_hashtable_put(c_64, a_64, b_64);
  w_150 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_150);
  return(t);
}
ATerm lookup_table_0_1 (ATerm u_61, ATerm t)
{
  ATerm f_151 = NULL;
  t = table_hashtable_0_0(t);
  f_151 = t;
  {
    ATerm r_73 = t;
    int s_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_61 = NULL;
        t = f_151;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_13(u_61, x_61, t);
        LocalPopChoice(s_73);
      }
    else
      {
        t = r_73;
        {
          ATerm l_62 = NULL;
          t = u_61;
          t = table_create_0_0(t);
          t = f_151;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_13(u_61, l_62, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_64, ATerm j_64, ATerm t)
{
  ATerm i_151 = NULL;
  t = SSL_hashtable_create(i_64, j_64);
  i_151 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_151);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_151 = NULL,k_151 = NULL,l_151 = NULL,n_151 = NULL,o_151 = NULL;
  j_151 = t;
  t = term_t_73;
  n_151 = t;
  t = term_u_73;
  o_151 = t;
  t = j_151;
  t = new_hashtable_0_2(n_151, o_151, t);
  k_151 = t;
  t = j_151;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(j_151, k_151, l_151, t);
  t = j_151;
  return(t);
}
static ATerm c_13 (ATerm f_64, ATerm g_64, ATerm t)
{
  ATerm p_151 = NULL;
  t = SSL_hashtable_remove(g_64, f_64);
  p_151 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_151);
  return(t);
}
static ATerm d_13 (ATerm k_64, ATerm t)
{
  ATerm q_151 = NULL;
  t = SSL_hashtable_destroy(k_64);
  q_151 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_151);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_151 = NULL;
  t = SSL_table_hashtable();
  r_151 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_151);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_151 = NULL,t_151 = NULL,u_151 = NULL,v_151 = NULL;
  s_151 = t;
  t = table_hashtable_0_0(t);
  t_151 = t;
  t = lookup_table_0_1(s_151, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_13(v_151, t);
  t = t_151;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(s_151, u_151, t);
  t = s_151;
  return(t);
}
ATerm map_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  static ATerm k_152 (ATerm t)
  {
    ATerm h_152 = NULL,i_152 = NULL,j_152 = NULL;
    h_152 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_152;
      }
    else
      {
        ATerm q_62 = NULL,u_62 = NULL,v_62 = NULL,n_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_152 = ATgetFirst((ATermList) t);
            j_152 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_152);
        q_62 = t;
        t = i_152;
        t = q_117(t);
        u_62 = t;
        t = j_152;
        t = k_152(t);
        v_62 = t;
        t = (ATerm) ATinsert(CheckATermList(v_62), u_62);
        n_32 = t;
        t = SSLsetAnnotations(n_32, q_62);
      }
    return(t);
  }
  t = k_152(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_152 = NULL,o_152 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_152 = ATgetFirst((ATermList) t);
      o_152 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_152 = NULL,t_152 = NULL;
        static ATerm p_22 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_152)), not_null(t_152));
          return(t);
        }
        t = o_152;
        t = i_0(t);
        if(((s_152 != NULL) && (s_152 != t)))
          _fail(t);
        else
          s_152 = t;
        t = n_152;
        t = g_0(t);
        if(((t_152 != NULL) && (t_152 != t)))
          _fail(t);
        else
          t_152 = t;
        t = o_152;
        t = reverse_acc_2_0(g_0, p_22, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_71;
      t = i_0(t);
    }
  return(t);
}
static ATerm q_22 (ATerm t)
{
  ATerm z_152 = NULL,a_153 = NULL,b_153 = NULL,s_32 = NULL;
  b_153 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_153);
  z_152 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_153);
  s_32 = t;
  t = SSLsetAnnotations(s_32, z_152);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm d_153 = NULL;
  d_153 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_153), term_v_73);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_152 = NULL,w_152 = NULL;
  ATerm w_73 = t;
  int x_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_152 = NULL,y_152 = NULL;
      t = term_j_70;
      x_152 = t;
      t = term_z_72;
      y_152 = t;
      t = term_a_73;
      t = f_13(x_152, y_152, t);
      LocalPopChoice(x_73);
    }
  else
    {
      t = w_73;
      t = fetch_1_0(q_22, t);
    }
  t = term_y_73;
  t = echo_0_0(t);
  t = term_p_72;
  v_152 = t;
  t = term_q_72;
  w_152 = t;
  t = term_z_73;
  t = f_13(v_152, w_152, t);
  t = reverse_acc_2_0(_id, r_22, t);
  t = map_1_0(s_22, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_118 (ATerm), ATerm t)
{
  static ATerm a_154 (ATerm t)
  {
    ATerm x_153 = NULL,y_153 = NULL,z_153 = NULL;
    x_153 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_153 = ATgetFirst((ATermList) t);
        z_153 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_74 = t;
      int b_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_63 = NULL,u_63 = NULL,u_32 = NULL;
          t = SSLgetAnnotations(x_153);
          p_63 = t;
          t = y_153;
          t = a_118(t);
          u_63 = t;
          t = (ATerm) ATinsert(CheckATermList(z_153), u_63);
          u_32 = t;
          t = SSLsetAnnotations(u_32, p_63);
          LocalPopChoice(b_74);
        }
      else
        {
          t = a_74;
          {
            ATerm u_64 = NULL,z_64 = NULL,y_32 = NULL;
            t = SSLgetAnnotations(x_153);
            u_64 = t;
            t = z_153;
            t = a_154(t);
            z_64 = t;
            t = (ATerm) ATinsert(CheckATermList(z_64), y_153);
            y_32 = t;
            t = SSLsetAnnotations(y_32, u_64);
          }
        }
    }
    return(t);
  }
  t = a_154(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_154 = NULL,f_154 = NULL,g_154 = NULL;
  e_154 = t;
  {
    ATerm c_74 = t;
    int d_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_154;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_74 = ATgetFirst((ATermList) t);
                ATerm f_74 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_154;
          }
        LocalPopChoice(d_74);
      }
    else
      {
        t = c_74;
        t = (ATerm) ATinsert(ATempty, e_154);
      }
  }
  f_154 = t;
  t = term_t_70;
  g_154 = t;
  t = SSL_printnl(g_154, f_154);
  t = e_154;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_154 = NULL,l_154 = NULL;
  t = term_j_70;
  k_154 = t;
  t = term_z_72;
  l_154 = t;
  t = term_a_73;
  t = f_13(k_154, l_154, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_13 (ATerm d_64, ATerm e_64, ATerm t)
{
  t = SSL_hashtable_get(e_64, d_64);
  return(t);
}
static ATerm f_13 (ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm m_154 = NULL;
  t = lookup_table_0_1(b_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_13(c_62, m_154, t);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm o_154 = NULL,p_154 = NULL;
  t = term_g_74;
  o_154 = t;
  t = term_u_71;
  p_154 = t;
  t = term_h_74;
  t = i_13(o_154, p_154, t);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = term_i_74;
  return(t);
}
static ATerm c_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL;
  t = term_g_74;
  s_154 = t;
  t = term_u_71;
  t_154 = t;
  t = term_h_74;
  t = i_13(s_154, t_154, t);
  t = term_j_74;
  q_154 = t;
  t = term_u_71;
  r_154 = t;
  t = term_k_74;
  t = i_13(q_154, r_154, t);
  t = term_l_74;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  t = term_m_74;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_74 = t;
  int o_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_22, x_22, y_22, t);
      LocalPopChoice(o_74);
    }
  else
    {
      t = n_74;
      t = Option_3_0(c_23, g_23, n_23, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm u_154 = NULL,v_154 = NULL,w_154 = NULL,x_154 = NULL,y_154 = NULL,z_154 = NULL,i_33 = NULL;
  z_154 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_154 = ATgetFirst((ATermList) t);
      w_154 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_154);
  u_154 = t;
  t = v_154;
  t = g_96(t);
  x_154 = t;
  t = w_154;
  t = h_96(t);
  y_154 = t;
  t = (ATerm) ATinsert(CheckATermList(y_154), x_154);
  i_33 = t;
  t = SSLsetAnnotations(i_33, u_154);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_138 (ATerm), ATerm t)
{
  ATerm e_155 = NULL,f_155 = NULL,g_155 = NULL,h_155 = NULL,j_155 = NULL,k_155 = NULL,k_33 = NULL;
  e_155 = t;
  {
    ATerm p_74 = t;
    int q_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_74;
        t = k_138(t);
        LocalPopChoice(q_74);
      }
    else
      {
        t = p_74;
      }
  }
  t = e_155;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_155 = ATgetFirst((ATermList) t);
      h_155 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_155);
  f_155 = t;
  t = term_z_72;
  k_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_72, g_155);
  t = i_13(k_155, g_155, t);
  t = h_155;
  {
    static ATerm u_155 (ATerm t)
    {
      ATerm s_74 = t;
      int t_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_74 = t;
          int y_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_155 = NULL;
              n_155 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_155;
              LocalPopChoice(y_74);
            }
          else
            {
              t = v_74;
              t = k_138(t);
              t = Cons_2_0(_id, u_155, t);
            }
          LocalPopChoice(t_74);
        }
      else
        {
          t = s_74;
          {
            ATerm q_155 = NULL,r_155 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_155 = ATgetFirst((ATermList) t);
                r_155 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_155), (ATerm) ATmakeAppl(sym_Undefined_1, q_155));
          }
        }
      return(t);
    }
    t = u_155(t);
  }
  j_155 = t;
  t = (ATerm) ATinsert(CheckATermList(j_155), (ATerm) ATmakeAppl(sym_Program_1, g_155));
  k_33 = t;
  t = SSLsetAnnotations(k_33, f_155);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm h_156 = NULL;
  h_156 = t;
  if(match_string(t, "--help"))
    {
      t = h_156;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_156;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_156;
        }
    }
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm i_156 = NULL,j_156 = NULL;
  t = term_p_73;
  i_156 = t;
  t = term_u_71;
  j_156 = t;
  t = term_z_74;
  t = i_13(i_156, j_156, t);
  t = term_a_75;
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_c_75;
  return(t);
}
static ATerm z_23 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_138 (ATerm), ATerm t)
{
  ATerm z_155 = NULL,a_156 = NULL,b_156 = NULL,c_156 = NULL,d_156 = NULL,e_156 = NULL,f_156 = NULL,g_156 = NULL;
  b_156 = t;
  t = term_p_72;
  c_156 = t;
  t = term_d_75;
  t = lookup_table_0_1(c_156, t);
  g_156 = t;
  t = term_q_72;
  d_156 = t;
  t = (ATerm) ATempty;
  e_156 = t;
  t = g_156;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(d_156, e_156, f_156, t);
  t = b_156;
  {
    static ATerm o_23 (ATerm t)
    {
      ATerm e_75 = t;
      int f_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_138(t);
          LocalPopChoice(f_75);
        }
      else
        {
          t = e_75;
          {
            ATerm g_75 = t;
            int h_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_23, t_23, u_23, t);
                LocalPopChoice(h_75);
              }
            else
              {
                t = g_75;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_23, t);
  }
  {
    ATerm i_75 = t;
    int j_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_156 = NULL;
        u_156 = t;
        {
          ATerm k_75 = t;
          int l_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_65 = NULL;
              t = u_156;
              {
                ATerm m_75 = t;
                int o_75 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_65 = NULL,s_65 = NULL;
                    t = term_j_70;
                    r_65 = t;
                    t = term_p_73;
                    s_65 = t;
                    t = term_q_73;
                    t = f_13(r_65, s_65, t);
                    LocalPopChoice(o_75);
                  }
                else
                  {
                    t = m_75;
                    t = fetch_1_0(z_23, t);
                  }
              }
              t = u_156;
              t = default_system_usage_0_0(t);
              t = term_x_47;
              p_65 = t;
              t = SSL_exit(p_65);
              LocalPopChoice(l_75);
            }
          else
            {
              t = k_75;
              {
                ATerm w_65 = NULL,z_65 = NULL,a_66 = NULL;
                t = term_j_70;
                z_65 = t;
                t = term_g_74;
                a_66 = t;
                t = term_q_75;
                t = f_13(z_65, a_66, t);
                t = u_156;
                t = default_system_about_0_0(t);
                t = term_x_47;
                w_65 = t;
                t = SSL_exit(w_65);
              }
            }
        }
        LocalPopChoice(j_75);
      }
    else
      {
        t = i_75;
        {
          ATerm r_75 = t;
          int s_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_156 = NULL,w_156 = NULL,x_156 = NULL;
              static ATerm c_24 (ATerm t)
              {
                ATerm y_156 = NULL,z_156 = NULL,a_157 = NULL,q_33 = NULL;
                a_157 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_156 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_157);
                y_156 = t;
                t = z_156;
                if(((z_155 != NULL) && (z_155 != t)))
                  _fail(t);
                else
                  z_155 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_156);
                q_33 = t;
                t = SSLsetAnnotations(q_33, y_156);
                return(t);
              }
              t = fetch_1_0(c_24, t);
              t = term_c_41;
              w_156 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_155)), term_t_75);
              x_156 = t;
              t = SSL_printnl(w_156, x_156);
              t = (ATerm) ATmakeAppl(sym__2, term_c_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_155)), term_t_75));
              t = default_system_usage_0_0(t);
              t = term_f_41;
              v_156 = t;
              t = SSL_exit(v_156);
              LocalPopChoice(s_75);
            }
          else
            {
              t = r_75;
            }
        }
      }
  }
  a_156 = t;
  t = term_p_72;
  t = table_destroy_0_0(t);
  t = a_156;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm t)
{
  ATerm f_157 = NULL,g_157 = NULL,h_157 = NULL,i_157 = NULL,j_157 = NULL;
  t = parse_options_1_0(j_136, t);
  f_157 = t;
  t = term_u_75;
  t = table_create_0_0(t);
  t = term_u_75;
  g_157 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_75, term_y_75, f_157);
  t = lookup_table_0_1(g_157, t);
  j_157 = t;
  t = term_y_75;
  h_157 = t;
  t = j_157;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(h_157, f_157, i_157, t);
  t = f_157;
  t = l_136(t);
  {
    ATerm z_75 = t;
    int a_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_136, t);
        LocalPopChoice(a_76);
      }
    else
      {
        t = z_75;
        {
          ATerm b_76 = t;
          int c_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_136(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_76);
            }
          else
            {
              t = b_76;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_24 (ATerm t)
{
  ATerm d_76 = t;
  int e_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(e_76);
    }
  else
    {
      t = d_76;
      {
        ATerm g_76 = t;
        int h_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(h_76);
          }
        else
          {
            t = g_76;
            {
              ATerm i_76 = t;
              int j_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(j_76);
                }
              else
                {
                  t = i_76;
                  {
                    ATerm k_76 = t;
                    int l_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(f_24, g_24, h_24, t);
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
                              t = verbose_option_0_0(t);
                              LocalPopChoice(n_76);
                            }
                          else
                            {
                              t = m_76;
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
static ATerm e_24 (ATerm t)
{
  t = input_1_0(k_24, t);
  return(t);
}
static ATerm f_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  ATerm l_157 = NULL,m_157 = NULL;
  t = term_w_70;
  l_157 = t;
  t = term_u_71;
  m_157 = t;
  t = term_p_76;
  t = i_13(l_157, m_157, t);
  t = term_q_76;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_s_76;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_24, default_usage_0_0, _id, e_24, t);
  return(t);
}

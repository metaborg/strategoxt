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
ATerm term_y_68;
ATerm term_x_68;
ATerm term_w_68;
ATerm term_a_68;
ATerm term_z_67;
ATerm term_y_67;
ATerm term_m_67;
ATerm term_y_66;
ATerm term_x_66;
ATerm term_w_66;
ATerm term_u_66;
ATerm term_p_66;
ATerm term_k_66;
ATerm term_j_66;
ATerm term_i_66;
ATerm term_h_66;
ATerm term_g_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_r_65;
ATerm term_o_65;
ATerm term_n_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_y_64;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_u_64;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_h_64;
ATerm term_d_64;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_n_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_e_63;
ATerm term_c_63;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_b_61;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_i_60;
ATerm term_g_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_h_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_r_55;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_49;
ATerm term_j_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_p_45;
ATerm term_m_45;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_j_41;
ATerm term_r_38;
ATerm term_k_38;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_j_35;
ATerm term_h_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_z_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_z_30;
ATerm term_t_30;
ATerm term_r_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_b_29;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_m_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_h_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Op_2, term_c_22, (ATerm) ATempty);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_22);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_20);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Op_2, term_r_24, (ATerm) ATempty);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_24);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Call_2, term_t_25, (ATerm) ATempty);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_27);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Call_2, term_g_27, (ATerm) ATempty);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Call_2, term_q_24, (ATerm) ATempty);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_28);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_34);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_RootApp_1, term_j_20);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_35);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_h_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_35);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_36);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Closure", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Snd", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_41);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_n_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_41);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("cl", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Var_1, term_r_41);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym_Match_1, term_s_41);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Var_1, term_y_41);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_42);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_Build_1, term_s_23);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_42);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_43);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_44);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_45);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_46);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_48);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_50);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_56);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_56);
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_b_60);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_s_60);
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_j_61);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_c_63);
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(sym__2, term_n_63, term_p_63);
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_63);
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(sym__2, term_u_63, term_h_63);
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_x_64);
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_n_63);
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_n_65);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(sym__2, term_m_64, term_n_64);
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(sym__2, term_e_66, term_h_63);
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(sym__2, term_h_66, term_h_63);
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(sym__2, term_n_65, term_h_63);
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(sym__3, term_m_64, term_n_64, (ATerm) ATempty);
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(sym__2, term_a_60, term_e_66);
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(sym__2, term_j_61, term_h_63);
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_110 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm r_10 (ATerm z_142 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm z_142 (ATerm), ATerm t);
static ATerm e_18 (ATerm h_11, ATerm n_11, ATerm t);
static ATerm f_18 (ATerm e_13, ATerm f_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm t_141 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm t_10 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t);
static ATerm x_29 (ATerm f_29, ATerm t);
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
static ATerm u_10 (ATerm v_67, ATerm w_67, ATerm x_67, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm v_10 (ATerm y_142 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm a_143 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm x_10 (ATerm y_81, ATerm x_81, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm i_58 (ATerm s_57, ATerm t);
static ATerm j_58 (ATerm y_57, ATerm t);
static ATerm c_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm g_61 (ATerm h_60, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm g_11 (ATerm g_143 (ATerm), ATerm k_85, ATerm h_85, ATerm i_85, ATerm s_85, ATerm w_85, ATerm x_85, ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm g_143 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm n_111 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm d_143 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm j_11 (ATerm u_83, ATerm t_83, ATerm t);
ATerm repeat_2_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm f_118 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm p_99 (ATerm a_98, ATerm c_98, ATerm d_98, ATerm g_98, ATerm h_98, ATerm i_98, ATerm k_98, ATerm t);
static ATerm x_9 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm k_116 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm q_142 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm q_11 (ATerm g_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t);
static ATerm r_11 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
static ATerm s_11 (ATerm b_121 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
ATerm genzip_4_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm x_11 (ATerm f_673, ATerm k_673, ATerm v_66, ATerm t);
ATerm while_not_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm o_118 (ATerm c_117, ATerm d_117, ATerm e_117, ATerm t);
static ATerm m_15 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm free_vars_3_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm k_110 (ATerm), ATerm t);
static ATerm b_12 (ATerm p_60, ATerm q_60, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm b_112 (ATerm), ATerm t);
static ATerm c_12 (ATerm e_130 (ATerm), ATerm o_44, ATerm m_44, ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm d_12 (ATerm j_60, ATerm k_60, ATerm t);
ATerm end_scope_1_0 (ATerm b_130 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_130 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm y_124 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_117 (ATerm), ATerm t);
static ATerm n_125 (ATerm f_125, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_12 (ATerm m_35, ATerm y_34, ATerm t);
ATerm foldr_3_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm t);
static ATerm q_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm h_12 (ATerm e_40, ATerm f_40, ATerm t);
static ATerm i_12 (ATerm i_24, ATerm j_24, ATerm t);
static ATerm k_12 (ATerm m_116 (ATerm), ATerm v_182, ATerm o_24, ATerm t);
static ATerm j_12 (ATerm e_24, ATerm f_24, ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm output_1_0 (ATerm v_135 (ATerm), ATerm t);
static ATerm w_130 (ATerm q_130, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_12 (ATerm k_24, ATerm t);
static ATerm m_12 (ATerm x_38, ATerm y_38, ATerm t);
static ATerm n_12 (ATerm g_40, ATerm h_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_132 (ATerm g_131, ATerm t);
static ATerm i_132 (ATerm k_131, ATerm l_131, ATerm m_131, ATerm t);
static ATerm j_132 (ATerm u_131, ATerm v_131, ATerm w_131, ATerm t);
static ATerm o_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_135 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_12 (ATerm j_55, ATerm k_55, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm v_12 (ATerm e_60, ATerm f_60, ATerm d_60, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_12 (ATerm a_43, ATerm b_43, ATerm t);
ATerm foldr_2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm g_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_132 (ATerm), ATerm t);
static ATerm k_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_18 (ATerm t);
ATerm need_help_1_0 (ATerm m_135 (ATerm), ATerm t);
static ATerm y_12 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm t);
ATerm lookup_table_0_1 (ATerm q_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_64, ATerm f_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_12 (ATerm b_64, ATerm c_64, ATerm t);
static ATerm s_12 (ATerm g_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_12 (ATerm z_63, ATerm a_64, ATerm t);
static ATerm u_12 (ATerm x_61, ATerm y_61, ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm g_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_137 (ATerm), ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm parse_options_1_0 (ATerm o_137 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm b_20 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm g_20 (ATerm t);
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
              t = term_h_20;
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
                  t = term_h_20;
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
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
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
ATerm topdown_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(j_110, t);
    return(t);
  }
  t = j_110(t);
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
static ATerm j_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            {
              ATerm s_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_5 = ATgetArgument(t, 0);
                      v_5 = ATgetArgument(t, 1);
                      w_5 = ATgetArgument(t, 2);
                      x_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_5;
                  t = map_1_0(m_0, t);
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = s_20;
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
  ATerm h_6 = NULL;
  ATerm w_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_6 = ATgetArgument(t, 0);
          {
            ATerm b_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_20);
      t = h_6;
    }
  else
    {
      t = w_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_6;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_6);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_6);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm g_21 = t;
              int u_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_6 = NULL,r_6 = NULL,t_6 = NULL,w_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_6 = ATgetArgument(t, 0);
                      r_6 = ATgetArgument(t, 1);
                      t_6 = ATgetArgument(t, 2);
                      w_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_6;
                  t = map_1_0(b_1, t);
                  LocalPopChoice(u_21);
                }
              else
                {
                  t = g_21;
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
  ATerm d_7 = NULL;
  ATerm w_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = d_7;
    }
  else
    {
      t = w_21;
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
static ATerm c_1 (ATerm t)
{
  ATerm g_7 = NULL;
  g_7 = t;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL,b_0 = NULL,h_0 = NULL,c_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_7);
        b_0 = t;
        t = x_7;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        c_3 = t;
        t = SSLsetAnnotations(c_3, b_0);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  static ATerm r_8 (ATerm f_4, ATerm h_4, ATerm i_4, ATerm j_4, ATerm o_4, ATerm q_4, ATerm s_4, ATerm t)
  {
    ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, o_4, term_d_22);
    {
      ATerm n_22 = t;
      if((PushChoice() == 0))
        {
          ATerm p_5 = NULL;
          if(match_cons(t, sym__2))
            {
              p_5 = ATgetArgument(t, 0);
              if((p_5 != ATgetArgument(t, 1)))
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
          t = n_22;
        }
    }
    t = new_0_0(t);
    a_5 = t;
    t = j_4;
    t = dummify_0_0(t);
    c_5 = t;
    {
      ATerm o_22 = t;
      int p_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_5;
          if((j_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, a_5);
          LocalPopChoice(p_22);
        }
      else
        {
          t = o_22;
          t = c_5;
        }
    }
    b_5 = t;
    t = c_5;
    t = free_vars_3_0(f_0, j_0, tboundin_3_0, t);
    t = map_1_0(s_0, t);
    l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_4, q_4);
    t = free_vars_3_0(w_0, y_0, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    k_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_5, l_5);
    t = diff_0_0(t);
    m_5 = t;
    t = new_0_0(t);
    n_5 = t;
    t = f_4;
    t = v_0(t);
    o_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, o_5, (ATerm) ATmakeAppl(sym_Op_2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(CheckATermList(m_5), (ATerm) ATmakeAppl(sym_Str_1, n_5)))), c_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, f_4, h_4, i_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_5), j_4), o_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_u_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_4)))), b_5), (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(CheckATermList(m_5), (ATerm) ATmakeAppl(sym_Str_1, n_5))))), q_4))));
    return(t);
  }
  ATerm b_8 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,k_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
      i_8 = ATgetArgument(t, 2);
      k_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_8;
  if(match_cons(t, sym_Rule_3))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      o_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_8;
  if(match_cons(t, sym_Op_2))
    {
      b_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      t = d_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_8;
          if(match_string(t, "Undefined"))
            {
              ATerm w_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
                  t = e_8;
                  t = new_0_0(t);
                  e_2 = t;
                  t = m_8;
                  t = dummify_0_0(t);
                  c_2 = t;
                  {
                    ATerm a_23 = t;
                    int b_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_2;
                        if((m_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
                        LocalPopChoice(b_23);
                      }
                    else
                      {
                        t = a_23;
                        t = c_2;
                      }
                  }
                  f_2 = t;
                  t = g_8;
                  t = v_0(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_2, (ATerm) ATmakeAppl(sym_Op_2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, term_d_22), c_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_8, h_8, i_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_2), m_8), term_d_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_u_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_8)))), f_2), term_d_22)), (ATerm) ATmakeAppl(sym_Seq_2, o_8, term_h_20)))));
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = w_22;
                  t = r_8(g_8, h_8, i_8, m_8, n_8, o_8, e_8, t);
                }
            }
          else
            {
              t = r_8(g_8, h_8, i_8, m_8, n_8, o_8, e_8, t);
            }
        }
      else
        {
          t = b_8;
          t = r_8(g_8, h_8, i_8, m_8, n_8, o_8, e_8, t);
        }
    }
  else
    {
      t = r_8(g_8, h_8, i_8, m_8, n_8, o_8, e_8, t);
    }
  return(t);
}
static ATerm r_10 (ATerm z_142 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  t = new_0_0(t);
  w_8 = t;
  t = u_81;
  t = dummify_0_0(t);
  v_8 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_8;
        if((u_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, w_8);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = v_8;
      }
  }
  x_8 = t;
  t = r_81;
  t = z_142(t);
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, y_8, v_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, r_81, p_81, q_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_8), u_81), term_d_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_81)))), x_8), term_s_23)), (ATerm) ATmakeAppl(sym_Seq_2, s_81, term_h_20))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm z_142 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      d_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
      i_9 = ATgetArgument(t, 2);
      {
        ATerm w_23 = ATgetArgument(t, 3);
        if(match_cons(w_23, sym_Rule_3))
          {
            j_9 = ATgetArgument(w_23, 0);
            {
              ATerm x_23 = ATgetArgument(w_23, 1);
              if(match_cons(x_23, sym_Op_2))
                {
                  ATerm y_23 = ATgetArgument(x_23, 0);
                  if((ATgetSymbol((ATermAppl) y_23) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm m_24 = ATgetArgument(x_23, 1);
                    if(((ATgetType(m_24) != AT_LIST) || !(ATisEmpty(m_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            k_9 = ATgetArgument(w_23, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_10(z_142, d_9, h_9, i_9, j_9, k_9, t);
  return(t);
}
static ATerm e_18 (ATerm h_11, ATerm n_11, ATerm t)
{
  t = h_11;
  {
    ATerm n_24 = t;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL,a_12 = NULL,e_12 = NULL,t_12 = NULL,e_3 = NULL;
        t_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_12 = ATgetFirst((ATermList) t);
            e_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_12);
        u_11 = t;
        t = e_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_12), a_12);
        e_3 = t;
        t = SSLsetAnnotations(e_3, u_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_20, h_11);
  return(t);
}
static ATerm f_18 (ATerm e_13, ATerm f_13, ATerm t)
{
  t = e_13;
  {
    ATerm p_24 = t;
    if((PushChoice() == 0))
      {
        ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,f_3 = NULL;
        o_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_13 = ATgetFirst((ATermList) t);
            n_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_13);
        l_13 = t;
        t = n_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_13), m_13);
        f_3 = t;
        t = SSLsetAnnotations(f_3, l_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_24, e_13);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,p_2 = NULL;
  i_14 = t;
  t = SSL_explode_term(i_14);
  if(match_cons(t, sym__2))
    {
      ATerm g_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
          {
            j_14 = ATgetFirst((ATermList) h_25);
            {
              ATerm i_25 = (ATerm) ATgetNext((ATermList) h_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(i_14);
  if(match_cons(t, sym__2))
    {
      ATerm j_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
          {
            ATerm n_25 = ATgetFirst((ATermList) m_25);
            ATerm o_25 = (ATerm) ATgetNext((ATermList) m_25);
            if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
              {
                p_2 = ATgetFirst((ATermList) o_25);
                {
                  ATerm p_25 = (ATerm) ATgetNext((ATermList) o_25);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, p_2), j_14));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, c_15), b_15));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, f_15), e_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm q_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_25, (ATerm) ATinsert(ATinsert(ATempty, t_15), q_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_25, (ATerm) ATinsert(ATinsert(ATempty, c_16), b_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,x_13 = NULL,y_13 = NULL,d_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      y_13 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
      {
        ATerm g_14 = NULL;
        t = d_14;
        t = foldr_2_0(d_1, e_1, t);
        g_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, y_13, g_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          y_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, y_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              y_13 = ATgetArgument(t, 0);
              {
                ATerm u_2 = NULL;
                t = y_13;
                {
                  ATerm w_25 = t;
                  int x_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_y_25;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_a_26;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_c_26;
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
                      LocalPopChoice(x_25);
                    }
                  else
                    {
                      t = w_25;
                      {
                        ATerm w_2 = NULL;
                        t = SSL_explode_string(y_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_26 = ATgetFirst((ATermList) t);
                            if(((ATgetType(g_26) != AT_INT) || (ATgetInt((ATermInt) g_26) != 39)))
                              _fail(t);
                            {
                              ATerm i_26 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
                                {
                                  w_2 = ATgetFirst((ATermList) i_26);
                                  {
                                    ATerm l_26 = (ATerm) ATgetNext((ATermList) i_26);
                                    if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
                                      {
                                        ATerm n_26 = ATgetFirst((ATermList) l_26);
                                        if(((ATgetType(n_26) != AT_INT) || (ATgetInt((ATermInt) n_26) != 39)))
                                          _fail(t);
                                        {
                                          ATerm p_26 = (ATerm) ATgetNext((ATermList) l_26);
                                          if(((ATgetType(p_26) != AT_LIST) || !(ATisEmpty(p_26))))
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
              ATerm q_26 = t;
              int r_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      y_13 = ATgetArgument(t, 0);
                      {
                        ATerm t_26 = ATgetArgument(t, 1);
                      }
                      t_13 = ATgetArgument(t, 2);
                      p_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_26);
                  t = (ATerm) ATmakeAppl(sym_Con_3, y_13, t_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_13), (ATerm) ATempty));
                }
              else
                {
                  t = q_26;
                  {
                    ATerm u_26 = t;
                    int v_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            y_13 = ATgetArgument(t, 0);
                            {
                              ATerm a_27 = ATgetArgument(t, 1);
                            }
                            t_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_26);
                        t = (ATerm) ATmakeAppl(sym_Con_3, y_13, t_13, term_m_27);
                      }
                    else
                      {
                        t = u_26;
                        if(match_cons(t, sym_Con1_2))
                          {
                            y_13 = ATgetArgument(t, 0);
                            d_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, y_13, d_14, term_m_27);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                y_13 = ATgetArgument(t, 0);
                                d_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = d_14;
                                    return(t);
                                  }
                                  t = y_13;
                                  t = foldr_2_0(f_1, g_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    y_13 = ATgetArgument(t, 0);
                                    t = y_13;
                                    t = foldr_2_0(h_1, i_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        y_13 = ATgetArgument(t, 0);
                                        t = y_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            q_13 = ATgetFirst((ATermList) t);
                                            r_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = r_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm p_27 = t;
                                                int s_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = e_18(y_13, x_13, t);
                                                    LocalPopChoice(s_27);
                                                  }
                                                else
                                                  {
                                                    t = p_27;
                                                    t = q_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = e_18(y_13, x_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = e_18(y_13, x_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            y_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, y_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                y_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, y_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    y_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, y_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        y_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, y_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            y_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                y_13 = ATgetArgument(t, 0);
                                                                d_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_13), d_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    y_13 = ATgetArgument(t, 0);
                                                                    d_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = d_14;
                                                                        return(t);
                                                                      }
                                                                      t = y_13;
                                                                      t = foldr_2_0(j_1, k_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        y_13 = ATgetArgument(t, 0);
                                                                        t = y_13;
                                                                        t = foldr_2_0(l_1, m_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            y_13 = ATgetArgument(t, 0);
                                                                            d_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_q_24, (ATerm) ATinsert(CheckATermList(d_14), y_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                y_13 = ATgetArgument(t, 0);
                                                                                t = y_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    q_13 = ATgetFirst((ATermList) t);
                                                                                    r_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = r_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm a_28 = t;
                                                                                        int b_28 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = f_18(y_13, x_13, t);
                                                                                            LocalPopChoice(b_28);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_28;
                                                                                            t = q_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_18(y_13, x_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_18(y_13, x_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_p_28;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        y_13 = ATgetArgument(t, 0);
                                                                                        d_14 = ATgetArgument(t, 1);
                                                                                        t = d_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            s_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_b_29, (ATerm) ATinsert(ATinsert(ATempty, s_13), y_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            y_13 = ATgetArgument(t, 0);
                                                                                            t = y_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                y_13 = ATgetArgument(t, 0);
                                                                                                d_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, y_13, d_14, term_j_20);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    y_13 = ATgetArgument(t, 0);
                                                                                                    d_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, y_13, d_14, term_j_20);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        y_13 = ATgetArgument(t, 0);
                                                                                                        d_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, y_13, (ATerm)ATempty, d_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            y_13 = ATgetArgument(t, 0);
                                                                                                            d_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, d_14, y_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                y_13 = ATgetArgument(t, 0);
                                                                                                                d_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, y_13, d_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    y_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, y_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        y_13 = ATgetArgument(t, 0);
                                                                                                                        d_14 = ATgetArgument(t, 1);
                                                                                                                        t_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_13, d_14, (ATerm)ATempty, t_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            y_13 = ATgetArgument(t, 0);
                                                                                                                            d_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_13, (ATerm)ATempty, (ATerm)ATempty, d_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                y_13 = ATgetArgument(t, 0);
                                                                                                                                d_14 = ATgetArgument(t, 1);
                                                                                                                                t_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, y_13, d_14, (ATerm)ATempty, t_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    y_13 = ATgetArgument(t, 0);
                                                                                                                                    d_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, y_13, (ATerm)ATempty, (ATerm)ATempty, d_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        y_13 = ATgetArgument(t, 0);
                                                                                                                                        d_14 = ATgetArgument(t, 1);
                                                                                                                                        t_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, y_13, d_14, (ATerm)ATempty, t_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            y_13 = ATgetArgument(t, 0);
                                                                                                                                            d_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, y_13, (ATerm)ATempty, (ATerm)ATempty, d_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm c_29 = ATgetArgument(t, 0);
                                                                                                                                                d_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, d_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
        ATerm o_18 = NULL,p_18 = NULL,u_18 = NULL,v_18 = NULL;
        t = i_18;
        t = new_0_0(t);
        o_18 = t;
        t = new_0_0(t);
        p_18 = t;
        t = new_0_0(t);
        u_18 = t;
        t = new_0_0(t);
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_18), u_18), p_18), o_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_18), (ATerm) ATmakeAppl(sym_Var_1, u_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, j_18, (ATerm)ATmakeAppl(sym_Var_1, o_18), (ATerm) ATmakeAppl(sym_Var_1, p_18)), (ATerm) ATmakeAppl(sym_BAM_3, h_18, (ATerm)ATmakeAppl(sym_Var_1, u_18), (ATerm) ATmakeAppl(sym_Var_1, v_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_18)), (ATerm) ATmakeAppl(sym_Var_1, p_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_18 = ATgetArgument(t, 0);
          {
            ATerm w_18 = NULL,x_18 = NULL,z_18 = NULL,a_19 = NULL;
            t = i_18;
            t = new_0_0(t);
            z_18 = t;
            t = j_18;
            {
              static ATerm n_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((w_18 != NULL) && (w_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_18 = ATgetArgument(t, 0);
                    if(((x_18 != NULL) && (x_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      x_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_18);
                return(t);
              }
              t = oncetd_1_0(n_1, t);
            }
            a_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_18)), not_null(w_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_18)), (ATerm) ATmakeAppl(sym_Build_1, a_19))));
          }
        }
      else
        {
          ATerm c_19 = NULL,d_19 = NULL,f_19 = NULL,h_19 = NULL,i_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              j_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_18;
          t = new_0_0(t);
          f_19 = t;
          t = new_0_0(t);
          h_19 = t;
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
              t = (ATerm) ATmakeAppl(sym_Var_1, f_19);
              return(t);
            }
            t = oncetd_1_0(o_1, t);
          }
          i_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_19))))), (ATerm)ATmakeAppl(sym_Var_1, f_19), (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_19)), not_null(c_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm k_19 = NULL,p_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
        t = k_19;
        t = new_0_0(t);
        t_19 = t;
        t = p_19;
        {
          static ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
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
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_19), r_19);
            return(t);
          }
          t = pat_td_1_0(p_1, t);
        }
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_19))))));
        LocalPopChoice(q_29);
      }
    else
      {
        t = i_29;
        {
          ATerm t_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_19 = NULL,z_19 = NULL,c_20 = NULL;
              t = k_19;
              t = new_0_0(t);
              z_19 = t;
              t = p_19;
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_19);
                  return(t);
                }
                t = pat_td_1_0(q_1, t);
              }
              c_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_19)), not_null(w_19))));
              LocalPopChoice(y_29);
            }
          else
            {
              t = t_29;
              {
                ATerm e_20 = NULL,f_20 = NULL,k_20 = NULL,l_20 = NULL;
                t = k_19;
                t = new_0_0(t);
                k_20 = t;
                t = p_19;
                {
                  static ATerm r_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_20 = ATgetArgument(t, 0);
                        if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, k_20);
                    return(t);
                  }
                  t = pat_td_1_0(r_1, t);
                }
                l_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_20)), not_null(f_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm t_141 (ATerm), ATerm t)
{
  ATerm a_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_141(t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = a_30;
      {
        ATerm v_25 = NULL,f_26 = NULL,h_26 = NULL,k_26 = NULL;
        f_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_26 = ATgetArgument(t, 0);
            k_26 = ATgetArgument(t, 1);
            {
              ATerm i_3 = NULL,n_3 = NULL,j_3 = NULL;
              t = SSLgetAnnotations(f_26);
              i_3 = t;
              t = k_26;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(t_141, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, h_26, n_3);
              j_3 = t;
              t = SSLsetAnnotations(j_3, i_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_26 = ATgetArgument(t, 0);
                k_26 = ATgetArgument(t, 1);
                {
                  ATerm e_30 = t;
                  int f_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_4 = NULL,l_4 = NULL,l_3 = NULL;
                      t = SSLgetAnnotations(f_26);
                      d_4 = t;
                      t = k_26;
                      t = pat_td_1_0(t_141, t);
                      l_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_26, l_4);
                      l_3 = t;
                      t = SSLsetAnnotations(l_3, d_4);
                      LocalPopChoice(f_30);
                    }
                  else
                    {
                      t = e_30;
                      {
                        ATerm d_5 = NULL,g_5 = NULL,q_3 = NULL;
                        t = SSLgetAnnotations(f_26);
                        d_5 = t;
                        t = h_26;
                        t = pat_td_1_0(t_141, t);
                        g_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, g_5, k_26);
                        q_3 = t;
                        t = SSLsetAnnotations(q_3, d_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_26 = ATgetArgument(t, 0);
                    k_26 = ATgetArgument(t, 1);
                    v_25 = ATgetArgument(t, 2);
                    {
                      ATerm u_6 = NULL,k_7 = NULL,s_3 = NULL;
                      t = SSLgetAnnotations(f_26);
                      u_6 = t;
                      t = v_25;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(t_141, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      k_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_26, k_26, k_7);
                      s_3 = t;
                      t = SSLsetAnnotations(s_3, u_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_26 = ATgetArgument(t, 0);
                        k_26 = ATgetArgument(t, 1);
                        v_25 = ATgetArgument(t, 2);
                        {
                          ATerm z_7 = NULL,j_8 = NULL,u_3 = NULL;
                          t = SSLgetAnnotations(f_26);
                          z_7 = t;
                          t = v_25;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(t_141, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          j_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, h_26, k_26, j_8);
                          u_3 = t;
                          t = SSLsetAnnotations(u_3, z_7);
                        }
                      }
                    else
                      {
                        ATerm l_9 = NULL,o_9 = NULL,w_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_26 = ATgetArgument(t, 0);
                            k_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_26);
                        l_9 = t;
                        t = k_26;
                        t = pat_td_1_0(t_141, t);
                        o_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_26, o_9);
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
  ATerm w_26 = NULL,x_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL;
        t = w_26;
        t = new_0_0(t);
        b_27 = t;
        t = x_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_30, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_26)), not_null(y_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_27)))), (ATerm) ATmakeAppl(sym_Build_1, c_27)));
        LocalPopChoice(r_30);
      }
    else
      {
        t = h_30;
        {
          ATerm u_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_27 = NULL,h_27 = NULL,i_27 = NULL;
              t = w_26;
              t = new_0_0(t);
              h_27 = t;
              t = x_26;
              {
                static ATerm w_1 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_27);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              i_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_27)))), (ATerm) ATmakeAppl(sym_Build_1, i_27)));
              LocalPopChoice(w_30);
            }
          else
            {
              t = u_30;
              {
                ATerm n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL;
                t = w_26;
                t = new_0_0(t);
                q_27 = t;
                t = x_26;
                {
                  static ATerm x_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
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
                  t = pat_td_1_0(x_1, t);
                }
                r_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_27), not_null(o_27), (ATerm) ATmakeAppl(sym_Var_1, q_27))), (ATerm) ATmakeAppl(sym_Build_1, r_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_30 = t;
  if((PushChoice() == 0))
    {
      ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,m_7 = NULL;
      g_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_28);
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_28);
      m_7 = t;
      t = SSLsetAnnotations(m_7, e_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_30;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm a_2 (ATerm t)
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
static ATerm b_2 (ATerm t)
{
  ATerm n_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if(match_cons(b_31, sym__2))
        {
          n_28 = ATgetArgument(b_31, 0);
          s_28 = ATgetArgument(b_31, 1);
        }
      else
        _fail(t);
      {
        ATerm c_31 = ATgetArgument(t, 1);
        if(match_cons(c_31, sym__2))
          {
            t_28 = ATgetArgument(c_31, 0);
            u_28 = ATgetArgument(c_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_28), n_28), (ATerm) ATinsert(CheckATermList(u_28), s_28));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_28 = ATgetFirst((ATermList) t);
      w_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_28, w_28);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      if(match_cons(e_31, sym__2))
        {
          x_28 = ATgetArgument(e_31, 0);
          y_28 = ATgetArgument(e_31, 1);
        }
      else
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
        if(match_cons(h_31, sym__2))
          {
            z_28 = ATgetArgument(h_31, 0);
            a_29 = ATgetArgument(h_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_28), x_28), (ATerm) ATinsert(CheckATermList(a_29), y_28));
  return(t);
}
static ATerm t_10 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,c_28 = NULL,d_28 = NULL,o_7 = NULL;
  t = k_72;
  t = fetch_1_0(y_1, t);
  t = k_72;
  t = genzip_4_0(z_1, a_2, b_2, LiftPrimArg_0_0, t);
  d_28 = t;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  w_27 = t;
  t = x_27;
  t = concat_0_0(t);
  z_27 = t;
  t = y_27;
  t = genzip_4_0(d_2, h_2, i_2, _id, t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_27, c_28);
  o_7 = t;
  t = SSLsetAnnotations(o_7, w_27);
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      {
        ATerm k_31 = ATgetArgument(t, 1);
        if(match_cons(k_31, sym__2))
          {
            u_27 = ATgetArgument(k_31, 0);
            v_27 = ATgetArgument(k_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_27), (ATerm) ATmakeAppl(sym_CallT_3, i_72, j_72, v_27)));
  return(t);
}
static ATerm x_29 (ATerm f_29, ATerm t)
{
  ATerm j_29 = NULL;
  t = f_29;
  {
    ATerm l_31 = t;
    if((PushChoice() == 0))
      {
        ATerm k_29 = NULL,l_29 = NULL,n_29 = NULL,t_8 = NULL;
        n_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            l_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_29);
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, l_29);
        t_8 = t;
        t = SSLsetAnnotations(t_8, k_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_31;
      }
  }
  t = new_0_0(t);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_29)))), (ATerm) ATmakeAppl(sym_Var_1, j_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_29 = ATgetArgument(t, 0);
      {
        ATerm n_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_29(o_29, t);
            LocalPopChoice(t_31);
          }
        else
          {
            t = n_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Var_1, p_29)));
          }
      }
    }
  else
    {
      t = x_29(o_29, t);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm v_31 = t;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,i_10 = NULL;
      o_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_10);
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_10);
      i_10 = t;
      t = SSLsetAnnotations(i_10, m_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_31;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_10 = ATgetFirst((ATermList) t);
      s_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_10, s_10);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm w_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      if(match_cons(w_31, sym__2))
        {
          w_10 = ATgetArgument(w_31, 0);
          z_10 = ATgetArgument(w_31, 1);
        }
      else
        _fail(t);
      {
        ATerm x_31 = ATgetArgument(t, 1);
        if(match_cons(x_31, sym__2))
          {
            a_11 = ATgetArgument(x_31, 0);
            b_11 = ATgetArgument(x_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_11), w_10), (ATerm) ATinsert(CheckATermList(b_11), z_10));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm d_11 = NULL,f_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_11 = ATgetFirst((ATermList) t);
      f_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_11, f_11);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm i_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if(match_cons(y_31, sym__2))
        {
          i_11 = ATgetArgument(y_31, 0);
          k_11 = ATgetArgument(y_31, 1);
        }
      else
        _fail(t);
      {
        ATerm a_32 = ATgetArgument(t, 1);
        if(match_cons(a_32, sym__2))
          {
            l_11 = ATgetArgument(a_32, 0);
            m_11 = ATgetArgument(a_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_11), i_11), (ATerm) ATinsert(CheckATermList(m_11), k_11));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm b_32 = t;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL,z_13 = NULL,a_14 = NULL,p_10 = NULL;
      a_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_14);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
      p_10 = t;
      t = SSLsetAnnotations(p_10, w_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_32;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_14 = ATgetFirst((ATermList) t);
      c_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_14, c_14);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,q_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if(match_cons(c_32, sym__2))
        {
          n_14 = ATgetArgument(c_32, 0);
          o_14 = ATgetArgument(c_32, 1);
        }
      else
        _fail(t);
      {
        ATerm d_32 = ATgetArgument(t, 1);
        if(match_cons(d_32, sym__2))
          {
            q_14 = ATgetArgument(d_32, 0);
            r_14 = ATgetArgument(d_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_14), n_14), (ATerm) ATinsert(CheckATermList(r_14), o_14));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm u_14 = NULL,z_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_14 = ATgetFirst((ATermList) t);
      z_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_14, z_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,u_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      if(match_cons(e_32, sym__2))
        {
          r_15 = ATgetArgument(e_32, 0);
          s_15 = ATgetArgument(e_32, 1);
        }
      else
        _fail(t);
      {
        ATerm f_32 = ATgetArgument(t, 1);
        if(match_cons(f_32, sym__2))
          {
            u_15 = ATgetArgument(f_32, 0);
            w_15 = ATgetArgument(f_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_15), r_15), (ATerm) ATinsert(CheckATermList(w_15), s_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,f_35 = NULL,g_35 = NULL;
  b_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
      a_35 = ATgetArgument(t, 2);
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL,k_10 = NULL,l_10 = NULL,j_10 = NULL;
        t = a_35;
        t = fetch_1_0(j_2, t);
        t = a_35;
        t = genzip_4_0(k_2, l_2, m_2, LiftPrimArg_0_0, t);
        l_10 = t;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_10);
        d_10 = t;
        t = e_10;
        t = concat_0_0(t);
        h_10 = t;
        t = f_10;
        t = genzip_4_0(n_2, o_2, q_2, _id, t);
        k_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, k_10);
        j_10 = t;
        t = SSLsetAnnotations(j_10, d_10);
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            {
              ATerm h_32 = ATgetArgument(t, 1);
              if(match_cons(h_32, sym__2))
                {
                  b_10 = ATgetArgument(h_32, 0);
                  c_10 = ATgetArgument(h_32, 1);
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
      ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,u_13 = NULL,v_13 = NULL,y_10 = NULL;
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
      v_13 = t;
      if(match_cons(t, sym__2))
        {
          h_13 = ATgetArgument(t, 0);
          i_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_13);
      g_13 = t;
      t = h_13;
      t = concat_0_0(t);
      j_13 = t;
      t = i_13;
      t = genzip_4_0(x_2, y_2, z_2, _id, t);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_13, u_13);
      y_10 = t;
      t = SSLsetAnnotations(y_10, g_13);
      if(match_cons(t, sym__2))
        {
          b_13 = ATgetArgument(t, 0);
          {
            ATerm i_32 = ATgetArgument(t, 1);
            if(match_cons(i_32, sym__2))
              {
                c_13 = ATgetArgument(i_32, 0);
                d_13 = ATgetArgument(i_32, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, b_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_13), (ATerm) ATmakeAppl(sym_PrimT_3, f_35, (ATerm)ATempty, d_13)));
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm h_36 = NULL,l_36 = NULL,o_36 = NULL,p_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      h_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
      o_36 = ATgetArgument(t, 2);
      {
        ATerm r_16 = NULL,v_20 = NULL;
        t = SSLgetAnnotations(p_36);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, h_36, l_36, o_36);
        v_20 = t;
        t = SSLsetAnnotations(v_20, r_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = p_36;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm j_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_32;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      c_38 = ATgetArgument(t, 2);
      {
        ATerm x_17 = NULL,x_20 = NULL;
        t = SSLgetAnnotations(d_38);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_38, f_38, c_38);
        x_20 = t;
        t = SSLsetAnnotations(x_20, x_17);
      }
    }
  else
    {
      ATerm l_19 = NULL,y_20 = NULL;
      if(match_cons(t, sym_App_2))
        {
          e_38 = ATgetArgument(t, 0);
          f_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_38);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, e_38, f_38);
      y_20 = t;
      t = SSLsetAnnotations(y_20, l_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm k_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_32;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_38;
  if(match_cons(t, sym_StratRule_3))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
      s_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_38), (ATerm) ATmakeAppl(sym_Where_1, s_38)), o_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          o_38 = ATgetArgument(t, 0);
          p_38 = ATgetArgument(t, 1);
          s_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_38;
      t = pureterm_0_0(t);
      t = p_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, p_38)), (ATerm) ATmakeAppl(sym_Where_1, s_38)), (ATerm) ATmakeAppl(sym_Match_1, o_38)));
    }
  return(t);
}
static ATerm u_10 (ATerm v_67, ATerm w_67, ATerm x_67, ATerm t)
{
  ATerm h_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = new_0_0(t);
  p_39 = t;
  t = v_67;
  {
    static ATerm d_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_32 = ATgetArgument(t, 0);
          if(match_cons(l_32, sym_Var_1))
            {
              if(((o_39 != NULL) && (o_39 != ATgetArgument(l_32, 0))))
                _fail(ATgetArgument(l_32, 0));
              else
                o_39 = ATgetArgument(l_32, 0);
            }
          else
            _fail(t);
          if(((m_39 != NULL) && (m_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_39 = ATgetArgument(t, 1);
          {
            ATerm m_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_39);
      return(t);
    }
    t = oncetd_1_0(d_3, t);
  }
  q_39 = t;
  t = w_67;
  {
    static ATerm g_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_32 = ATgetArgument(t, 0);
          if(match_cons(n_32, sym_Var_1))
            {
              if(((o_39 != NULL) && (o_39 != ATgetArgument(n_32, 0))))
                _fail(ATgetArgument(n_32, 0));
              else
                o_39 = ATgetArgument(n_32, 0);
            }
          else
            _fail(t);
          if(((n_39 != NULL) && (n_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_39 = ATgetArgument(t, 1);
          {
            ATerm p_32 = ATgetArgument(t, 2);
            if(match_cons(p_32, sym_CallT_3))
              {
                if(((h_39 != NULL) && (h_39 != ATgetArgument(p_32, 0))))
                  _fail(ATgetArgument(p_32, 0));
                else
                  h_39 = ATgetArgument(p_32, 0);
                {
                  ATerm q_32 = ATgetArgument(p_32, 1);
                  if(((ATgetType(q_32) != AT_LIST) || !(ATisEmpty(q_32))))
                    _fail(t);
                }
                {
                  ATerm r_32 = ATgetArgument(p_32, 2);
                  if(((ATgetType(r_32) != AT_LIST) || !(ATisEmpty(r_32))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_39);
      return(t);
    }
    t = oncetd_1_0(g_3, t);
  }
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, q_39, r_39, (ATerm) ATmakeAppl(sym_Seq_2, x_67, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(h_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_39), not_null(n_39), term_j_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_39)), (ATerm) ATmakeAppl(sym_Var_1, p_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,z_40 = NULL,a_41 = NULL;
          w_40 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_40 = ATgetArgument(t, 0);
              t = z_40;
              if(match_cons(t, sym_Rule_3))
                {
                  t_40 = ATgetArgument(t, 0);
                  u_40 = ATgetArgument(t, 1);
                  v_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_40;
              t = u_10(t_40, u_40, v_40, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm i_20 = NULL,n_20 = NULL,s_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  z_40 = ATgetArgument(t, 0);
                  a_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_40);
              i_20 = t;
              t = a_41;
              t = desugarRule_0_0(t);
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_40, n_20);
              s_21 = t;
              t = SSLsetAnnotations(s_21, i_20);
            }
          LocalPopChoice(w_32);
        }
      else
        {
          t = u_32;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
    }
  t = repeat_2_0(k_3, _id, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm t_41 = NULL,u_41 = NULL,w_41 = NULL,x_41 = NULL;
            t_41 = t;
            if(match_cons(t, sym_CallT_3))
              {
                u_41 = ATgetArgument(t, 0);
                w_41 = ATgetArgument(t, 1);
                x_41 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_41;
            t = t_10(u_41, w_41, x_41, t);
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
                  t = HL_0_0(t);
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
                        t = Bapp_0_0(t);
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
                              ATerm j_33 = t;
                              int k_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_42 = NULL,h_42 = NULL,j_42 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      d_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_42;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      h_42 = ATgetArgument(t, 0);
                                      t = h_42;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          h_42 = ATgetArgument(t, 0);
                                          j_42 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, h_42, j_42);
                                    }
                                  LocalPopChoice(k_33);
                                }
                              else
                                {
                                  t = j_33;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(i_33);
                            }
                          else
                            {
                              t = h_33;
                              {
                                ATerm l_33 = t;
                                int m_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(m_33);
                                  }
                                else
                                  {
                                    t = l_33;
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
  ATerm g_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_46 = ATgetArgument(t, 0);
      t = g_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_46 = ATgetArgument(t, 0);
          {
            ATerm o_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_46;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_46), (ATerm) ATempty);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm t_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_46 = ATgetArgument(t, 0);
      t = t_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_46 = ATgetArgument(t, 0);
          {
            ATerm p_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_46;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, t_46);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_46);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            {
              ATerm u_33 = t;
              int v_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_47 = ATgetArgument(t, 0);
                      h_47 = ATgetArgument(t, 1);
                      i_47 = ATgetArgument(t, 2);
                      j_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_47;
                  t = map_1_0(t_3, t);
                  LocalPopChoice(v_33);
                }
              else
                {
                  t = u_33;
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
  ATerm x_47 = NULL;
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_47 = ATgetArgument(t, 0);
          {
            ATerm y_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_33);
      t = x_47;
    }
  else
    {
      t = w_33;
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
static ATerm v_3 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_48);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm b_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_48);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm b_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_34);
          }
        else
          {
            t = b_34;
            {
              ATerm e_34 = t;
              int h_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_48 = NULL,f_48 = NULL,k_48 = NULL,p_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_48 = ATgetArgument(t, 0);
                      f_48 = ATgetArgument(t, 1);
                      k_48 = ATgetArgument(t, 2);
                      p_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_48;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(h_34);
                }
              else
                {
                  t = e_34;
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
  ATerm w_48 = NULL;
  ATerm i_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_48 = ATgetArgument(t, 0);
          {
            ATerm m_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_34);
      t = w_48;
    }
  else
    {
      t = i_34;
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
static ATerm a_4 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  {
    ATerm o_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_49 = NULL,t_20 = NULL,a_21 = NULL,x_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            h_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_48);
        t_20 = t;
        t = h_49;
        t = ContextVar_0_0(t);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, a_21);
        x_21 = t;
        t = SSLsetAnnotations(x_21, t_20);
        LocalPopChoice(r_34);
      }
    else
      {
        t = o_34;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, z_48);
  return(t);
}
static ATerm v_10 (ATerm y_142 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t)
{
  ATerm c_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,j_45 = NULL,l_45 = NULL,n_45 = NULL,o_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,z_45 = NULL,a_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_81, term_d_22);
  {
    ATerm s_34 = t;
    if((PushChoice() == 0))
      {
        ATerm b_46 = NULL;
        if(match_cons(t, sym__2))
          {
            b_46 = ATgetArgument(t, 0);
            if((b_46 != ATgetArgument(t, 1)))
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
        t = s_34;
      }
  }
  t = term_t_34;
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_34, y_80);
  t = m_12(a_46, y_80, t);
  c_45 = t;
  t = term_u_34;
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, y_80);
  t = m_12(z_45, y_80, t);
  e_45 = t;
  t = new_0_0(t);
  f_45 = t;
  t = v_80;
  t = map_1_0(m_3, t);
  g_45 = t;
  t = w_80;
  t = map_1_0(o_3, t);
  j_45 = t;
  t = new_0_0(t);
  l_45 = t;
  t = f_81;
  t = dummify_0_0(t);
  o_45 = t;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_45;
        if((f_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, l_45);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = o_45;
      }
  }
  n_45 = t;
  t = o_45;
  t = free_vars_3_0(p_3, r_3, tboundin_3_0, t);
  t = map_1_0(v_3, t);
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
  t = free_vars_3_0(x_3, y_3, tboundin_3_0, t);
  t = filter_1_0(a_4, t);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
  t = diff_0_0(t);
  v_45 = t;
  t = new_0_0(t);
  w_45 = t;
  t = y_80;
  t = y_142(t);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_45, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(CheckATermList(v_45), (ATerm) ATmakeAppl(sym_Str_1, w_45)))), o_45)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, e_45, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(CheckATermList(v_45), (ATerm) ATmakeAppl(sym_Str_1, w_45)))), f_81)), j_81, (ATerm) ATmakeAppl(sym_Seq_2, term_j_35, k_81)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_45, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_45), f_81), (ATerm)ATmakeAppl(sym_Var_1, f_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), n_45), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_45), g_45, j_45), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_d_35), (ATerm) ATmakeAppl(sym_Var_1, l_45)))))), (ATerm) ATmakeAppl(sym_Var_1, f_45)))))), (ATerm) ATmakeAppl(sym_RDefT_4, y_80, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_45), f_81), j_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), n_45), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(CheckATermList(v_45), (ATerm) ATmakeAppl(sym_Str_1, w_45)))), term_x_34))), k_81)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,t_21 = NULL,v_21 = NULL;
      m_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          n_21 = ATgetArgument(t, 0);
          o_21 = ATgetArgument(t, 1);
          p_21 = ATgetArgument(t, 2);
          q_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = q_21;
      if(match_cons(t, sym_Rule_3))
        {
          r_21 = ATgetArgument(t, 0);
          t_21 = ATgetArgument(t, 1);
          v_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_21;
      t = v_10(c_4, n_21, o_21, p_21, r_21, t_21, v_21, t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_4, t);
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_22))));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_22))));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_22 = ATgetFirst((ATermList) t);
      i_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_22, i_22);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(match_cons(r_35, sym__2))
        {
          j_22 = ATgetArgument(r_35, 0);
          k_22 = ATgetArgument(r_35, 1);
        }
      else
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(match_cons(s_35, sym__2))
          {
            l_22 = ATgetArgument(s_35, 0);
            m_22 = ATgetArgument(s_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_22), j_22), (ATerm) ATinsert(CheckATermList(m_22), k_22));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23 = NULL,o_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,g_24 = NULL,h_24 = NULL,l_24 = NULL;
      n_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          o_23 = ATgetArgument(t, 0);
          z_23 = ATgetArgument(t, 1);
          a_24 = ATgetArgument(t, 2);
          c_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = c_24;
      if(match_cons(t, sym_Rule_3))
        {
          g_24 = ATgetArgument(t, 0);
          h_24 = ATgetArgument(t, 1);
          l_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_23;
      t = v_10(p_4, o_23, z_23, a_24, g_24, h_24, l_24, t);
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(r_4, t);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_24))));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_24))));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm u_4 (ATerm t)
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
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if(match_cons(a_36, sym__2))
        {
          y_24 = ATgetArgument(a_36, 0);
          z_24 = ATgetArgument(a_36, 1);
        }
      else
        _fail(t);
      {
        ATerm c_36 = ATgetArgument(t, 1);
        if(match_cons(c_36, sym__2))
          {
            a_25 = ATgetArgument(c_36, 0);
            b_25 = ATgetArgument(c_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_25), y_24), (ATerm) ATinsert(CheckATermList(b_25), z_24));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm g_54 = NULL;
  g_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_54))));
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_54 = ATgetFirst((ATermList) t);
      m_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(match_cons(f_36, sym__2))
        {
          n_54 = ATgetArgument(f_36, 0);
          o_54 = ATgetArgument(f_36, 1);
        }
      else
        _fail(t);
      {
        ATerm g_36 = ATgetArgument(t, 1);
        if(match_cons(g_36, sym__2))
          {
            p_54 = ATgetArgument(g_36, 0);
            q_54 = ATgetArgument(g_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_54), n_54), (ATerm) ATinsert(CheckATermList(q_54), o_54));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(h_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm z_54 = NULL;
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_54))));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm a_55 = NULL,e_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_55 = ATgetFirst((ATermList) t);
      e_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_55, e_55);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm h_55 = NULL,o_55 = NULL,p_55 = NULL,u_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_36 = ATgetArgument(t, 0);
      if(match_cons(k_36, sym__2))
        {
          h_55 = ATgetArgument(k_36, 0);
          o_55 = ATgetArgument(k_36, 1);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(match_cons(n_36, sym__2))
          {
            p_55 = ATgetArgument(n_36, 0);
            u_55 = ATgetArgument(n_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_55), h_55), (ATerm) ATinsert(CheckATermList(u_55), o_55));
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
        ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,f_22 = NULL;
        t = w_53;
        t = map_1_0(b_4, t);
        t = genzip_4_0(g_4, k_4, m_4, _id, t);
        l_21 = t;
        if(match_cons(t, sym__2))
          {
            i_21 = ATgetArgument(t, 0);
            j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_21);
        h_21 = t;
        t = j_21;
        t = concat_0_0(t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, k_21);
        f_22 = t;
        t = SSLsetAnnotations(f_22, h_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          w_53 = ATgetArgument(t, 0);
          {
            ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,l_23 = NULL,m_23 = NULL,r_22 = NULL;
            t = w_53;
            t = map_1_0(n_4, t);
            t = genzip_4_0(t_4, u_4, v_4, _id, t);
            m_23 = t;
            if(match_cons(t, sym__2))
              {
                h_23 = ATgetArgument(t, 0);
                i_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_23);
            g_23 = t;
            t = i_23;
            t = concat_0_0(t);
            l_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_23, l_23);
            r_22 = t;
            t = SSLsetAnnotations(r_22, g_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              w_53 = ATgetArgument(t, 0);
              t = w_53;
              t = map_1_0(w_4, t);
              t = genzip_4_0(y_4, z_4, e_5, _id, t);
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
              t = map_1_0(f_5, t);
              t = genzip_4_0(i_5, j_5, q_5, _id, t);
            }
        }
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm a_143 (ATerm), ATerm t)
{
  static ATerm o_56 (ATerm t)
  {
    static ATerm r_5 (ATerm t)
    {
      ATerm r_36 = t;
      int s_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_143(t);
          LocalPopChoice(s_36);
        }
      else
        {
          t = r_36;
          {
            ATerm f_56 = NULL,k_56 = NULL,n_56 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                f_56 = ATgetArgument(t, 0);
                k_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, f_56, k_56);
            {
              static ATerm y_5 (ATerm t)
              {
                t = f_56;
                t = DeclareContextVars_0_0(t);
                t = k_56;
                t = o_56(t);
                if(((n_56 != NULL) && (n_56 != t)))
                  _fail(t);
                else
                  n_56 = t;
                return(t);
              }
              t = scope_2_0(t_5, y_5, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, f_56, not_null(n_56));
          }
        }
      return(t);
    }
    t = oncetd_1_0(r_5, t);
    return(t);
  }
  t = o_56(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_q_36;
  return(t);
}
static ATerm x_10 (ATerm y_81, ATerm x_81, ATerm t)
{
  ATerm p_56 = NULL,s_56 = NULL,t_56 = NULL;
  static ATerm a_6 (ATerm t)
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
            if(((p_56 != NULL) && (p_56 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_56 = ATgetArgument(t, 1);
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
  t = scope_2_0(z_5, a_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_56)), not_null(t_56)), x_81);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm y_56 = NULL,b_57 = NULL,g_57 = NULL,h_57 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      g_57 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_56 = ATgetFirst((ATermList) t);
      b_57 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_v_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, b_57, h_57)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_56))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_57;
    }
  return(t);
}
static ATerm i_58 (ATerm s_57, ATerm t)
{
  t = SSL_is_string(s_57);
  return(t);
}
static ATerm j_58 (ATerm y_57, ATerm t)
{
  ATerm z_57 = NULL,b_58 = NULL,c_58 = NULL;
  t = term_w_36;
  b_58 = t;
  t = (ATerm) ATinsert(ATempty, term_x_36);
  c_58 = t;
  t = SSL_printnl(b_58, c_58);
  t = y_57;
  t = debug_1_0(c_6, t);
  t = term_z_36;
  z_57 = t;
  t = SSL_exit(z_57);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm d_58 = NULL,g_58 = NULL;
  g_58 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      d_58 = ATgetArgument(t, 0);
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_58(g_58, t);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            t = d_58;
          }
      }
    }
  else
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_58(g_58, t);
          LocalPopChoice(f_37);
        }
      else
        {
          t = e_37;
          t = j_58(g_58, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      v_58 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
      t = v_58;
      if(match_cons(t, sym_DynRuleId_1))
        {
          w_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_58;
      if(match_cons(t, sym_RDecT_3))
        {
          z_58 = ATgetArgument(t, 0);
          a_59 = ATgetArgument(t, 1);
          b_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_58, a_59, b_59, (ATerm) ATmakeAppl(sym_Rule_3, c_59, term_d_22, term_j_20));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          v_58 = ATgetArgument(t, 0);
          c_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_58;
      if(match_cons(t, sym_DynRuleId_1))
        {
          w_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_58;
      if(match_cons(t, sym_RDecT_3))
        {
          z_58 = ATgetArgument(t, 0);
          a_59 = ATgetArgument(t, 1);
          b_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_58, a_59, b_59, c_59);
    }
  return(t);
}
static ATerm g_61 (ATerm h_60, ATerm t)
{
  ATerm n_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  t = h_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      v_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_60;
  t = filter_1_0(d_6, t);
  w_60 = t;
  t = h_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_60;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, w_60), (ATerm) ATmakeAppl(sym_DynamicRules_1, u_60));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,c_61 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm g_37 = ATgetArgument(t, 0);
      if(match_cons(g_37, sym_DynRuleId_1))
        {
          ATerm h_37 = ATgetArgument(g_37, 0);
          if(match_cons(h_37, sym_RDecT_3))
            {
              x_60 = ATgetArgument(h_37, 0);
              y_60 = ATgetArgument(h_37, 1);
              z_60 = ATgetArgument(h_37, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, x_60, y_60, z_60, c_61);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm i_37 = ATgetArgument(t, 0);
      ATerm j_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  e_61 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      d_61 = ATgetArgument(t, 0);
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = NULL;
            t = d_61;
            {
              ATerm m_37 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(e_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_37;
                }
            }
            t = d_61;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            r_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_25);
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = g_61(e_61, t);
          }
      }
    }
  else
    {
      t = g_61(e_61, t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_61 = NULL;
      l_61 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm p_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_61;
      LocalPopChoice(o_37);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = n_37;
      {
        ATerm q_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_61 = NULL;
            u_61 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm s_37 = ATgetArgument(t, 0);
                ATerm t_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_61;
            LocalPopChoice(r_37);
            {
              ATerm w_61 = NULL,z_61 = NULL,a_62 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  w_61 = ATgetArgument(t, 0);
                  z_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_61;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              a_62 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, a_62, z_61);
            }
          }
        else
          {
            t = q_37;
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
  t = Cons_2_0(i_6, j_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,d_63 = NULL,f_63 = NULL,v_22 = NULL;
  f_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_63);
  z_62 = t;
  t = a_63;
  t = topdown_1_0(m_6, t);
  t = listtd_1_0(n_6, t);
  d_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_63);
  v_22 = t;
  t = SSLsetAnnotations(v_22, z_62);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = repeat_2_0(p_6, _id, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm m_63 = NULL,o_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_63 = ATgetFirst((ATermList) t);
      o_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_10(m_63, o_63, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm h_62 = NULL,k_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_22 = NULL,x_22 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  x_62 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_62);
  h_62 = t;
  t = k_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_62 = ATgetFirst((ATermList) t);
      o_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_62);
  m_62 = t;
  t = o_62;
  t = Cons_2_0(_id, g_6, t);
  v_62 = t;
  t = (ATerm) ATinsert(CheckATermList(v_62), n_62);
  x_22 = t;
  t = SSLsetAnnotations(x_22, m_62);
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_62);
  y_22 = t;
  t = SSLsetAnnotations(y_22, h_62);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm v_64 = NULL;
  v_64 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_26 = NULL;
        t = term_q_36;
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_36, v_64);
        t = b_12(j_26, v_64, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_37) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = v_64;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm e_27 = NULL;
          t = term_q_36;
          e_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_36, v_64);
          t = b_12(e_27, v_64, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm z_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_37) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = v_64;
        }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  f_67 = t;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm g_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_38);
        t = f_67;
        {
          ATerm h_38 = t;
          if((PushChoice() == 0))
            {
              ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,d_23 = NULL;
              k_28 = t;
              if(match_cons(t, sym_Var_1))
                {
                  i_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_28);
              h_28 = t;
              t = i_28;
              {
                ATerm i_38 = t;
                int j_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(j_38);
                  }
                else
                  {
                    t = i_38;
                    {
                      ATerm d_29 = NULL,m_29 = NULL,s_29 = NULL,c_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          d_29 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(i_28);
                      m_29 = t;
                      t = d_29;
                      t = ContextVar_0_0(t);
                      s_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, s_29);
                      c_23 = t;
                      t = SSLsetAnnotations(c_23, m_29);
                    }
                  }
              }
              j_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, j_28);
              d_23 = t;
              t = SSLsetAnnotations(d_23, h_28);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_38;
            }
        }
        t = term_t_24;
      }
    else
      {
        t = a_38;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_t_24;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                g_67 = ATgetArgument(t, 0);
                {
                  ATerm n_67 = NULL;
                  t = g_67;
                  t = free_vars_3_0(s_6, v_6, tboundin_3_0, t);
                  t = map_1_0(y_6, t);
                  n_67 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_38, n_67);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    g_67 = ATgetArgument(t, 0);
                    h_67 = ATgetArgument(t, 1);
                    {
                      ATerm q_68 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, g_67, h_67);
                      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
                      t = map_1_0(c_7, t);
                      q_68 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_k_38, q_68);
                    }
                  }
                else
                  {
                    ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm l_38 = ATgetArgument(t, 0);
                        ATerm m_38 = ATgetArgument(t, 1);
                        ATerm q_38 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_w_36;
                    v_29 = t;
                    t = (ATerm) ATinsert(ATempty, term_r_38);
                    w_29 = t;
                    t = SSL_printnl(v_29, w_29);
                    t = term_z_36;
                    u_29 = t;
                    t = SSL_exit(u_29);
                    t = (ATerm) ATinsert(ATempty, term_r_38);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm o_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_67);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            {
              ATerm b_39 = t;
              int c_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_67 = ATgetArgument(t, 0);
                      r_67 = ATgetArgument(t, 1);
                      s_67 = ATgetArgument(t, 2);
                      t_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_67;
                  t = map_1_0(x_6, t);
                  LocalPopChoice(c_39);
                }
              else
                {
                  t = b_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm k_68 = NULL;
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_68 = ATgetArgument(t, 0);
          {
            ATerm f_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_39);
      t = k_68;
    }
  else
    {
      t = d_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_68;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm n_68 = NULL;
  n_68 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_68);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm r_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_68);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm g_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_39);
    }
  else
    {
      t = g_39;
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            {
              ATerm l_39 = t;
              int s_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,t_69 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_68 = ATgetArgument(t, 0);
                      u_68 = ATgetArgument(t, 1);
                      v_68 = ATgetArgument(t, 2);
                      t_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_68;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(s_39);
                }
              else
                {
                  t = l_39;
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
  ATerm a_70 = NULL;
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_70 = ATgetArgument(t, 0);
          {
            ATerm y_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_39);
      t = a_70;
    }
  else
    {
      t = u_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_70;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm d_70 = NULL;
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_70);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(q_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm p_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_73 = ATgetArgument(t, 0);
      t = p_73;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_73 = ATgetArgument(t, 0);
          {
            ATerm z_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_73;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_73), (ATerm) ATempty);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm d_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_74 = ATgetArgument(t, 0);
      t = d_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_74 = ATgetArgument(t, 0);
          {
            ATerm a_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_74;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, d_74);
  return(t);
}
static ATerm h_7 (ATerm t)
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
static ATerm i_7 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm d_40 = t;
        int i_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_40);
          }
        else
          {
            t = d_40;
            {
              ATerm j_40 = t;
              int k_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_74 = ATgetArgument(t, 0);
                      m_74 = ATgetArgument(t, 1);
                      n_74 = ATgetArgument(t, 2);
                      o_74 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_74;
                  t = map_1_0(j_7, t);
                  LocalPopChoice(k_40);
                }
              else
                {
                  t = j_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm x_74 = NULL;
  ATerm l_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_74 = ATgetArgument(t, 0);
          {
            ATerm n_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_40);
      t = x_74;
    }
  else
    {
      t = l_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_74;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm a_75 = NULL;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_75);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm b_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_75);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm o_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_40);
    }
  else
    {
      t = o_40;
      {
        ATerm r_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_40);
          }
        else
          {
            t = r_40;
            {
              ATerm x_40 = t;
              int y_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_75 = ATgetArgument(t, 0);
                      j_75 = ATgetArgument(t, 1);
                      k_75 = ATgetArgument(t, 2);
                      l_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_75;
                  t = map_1_0(q_7, t);
                  LocalPopChoice(y_40);
                }
              else
                {
                  t = x_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm s_75 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_75 = ATgetArgument(t, 0);
          {
            ATerm d_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_41);
      t = s_75;
    }
  else
    {
      t = b_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_75;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm v_75 = NULL;
  v_75 = t;
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_76 = NULL,z_29 = NULL,b_30 = NULL,j_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            d_76 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_75);
        z_29 = t;
        t = d_76;
        t = ContextVar_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_30);
        j_23 = t;
        t = SSLsetAnnotations(j_23, z_29);
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, v_75);
  return(t);
}
static ATerm g_11 (ATerm g_143 (ATerm), ATerm k_85, ATerm h_85, ATerm i_85, ATerm s_85, ATerm w_85, ATerm x_85, ATerm t)
{
  ATerm e_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,l_73 = NULL,m_73 = NULL;
  t = term_t_34;
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_34, k_85);
  t = m_12(m_73, k_85, t);
  e_71 = t;
  t = term_u_34;
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, k_85);
  t = m_12(l_73, k_85, t);
  k_71 = t;
  t = new_0_0(t);
  l_71 = t;
  t = h_85;
  t = map_1_0(e_7, t);
  m_71 = t;
  t = i_85;
  t = map_1_0(f_7, t);
  n_71 = t;
  t = new_0_0(t);
  d_73 = t;
  t = s_85;
  t = dummify_0_0(t);
  f_73 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_73;
        if((s_85 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, d_73);
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
        t = f_73;
      }
  }
  e_73 = t;
  t = f_73;
  t = free_vars_3_0(h_7, i_7, tboundin_3_0, t);
  t = map_1_0(l_7, t);
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_85, x_85);
  t = free_vars_3_0(n_7, p_7, tboundin_3_0, t);
  t = filter_1_0(r_7, t);
  g_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_73, h_73);
  t = diff_0_0(t);
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_73, (ATerm) ATmakeAppl(sym_Op_2, term_j_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, i_73)), (ATerm) ATmakeAppl(sym_Str_1, l_71))));
  t = g_143(t);
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, j_73), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, e_71, h_85, i_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_73), s_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_r_41), (ATerm) ATmakeAppl(sym_Seq_2, term_v_41, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_71), m_71, n_71), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_73)), term_s_41))))))), term_z_41), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_b_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_73), (ATerm) ATmakeAppl(sym_Str_1, k_85))), term_c_42), term_z_41)))), (ATerm) ATmakeAppl(sym_RDefT_4, k_85, h_85, i_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_73), s_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_r_41), (ATerm) ATmakeAppl(sym_Seq_2, term_v_41, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_71), m_71, n_71), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_73)), term_s_41))))))), term_z_41), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_b_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_73), (ATerm) ATmakeAppl(sym_Str_1, k_85))), term_z_41)))), (ATerm) ATmakeAppl(sym_RDefT_4, k_71, h_85, i_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, s_85), (ATerm) ATmakeAppl(sym_Op_2, term_j_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, i_73)), (ATerm) ATmakeAppl(sym_Str_1, l_71))))), w_85, (ATerm) ATmakeAppl(sym_Seq_2, term_o_41, x_85)))));
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm g_143 (ATerm), ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm e_42 = ATgetArgument(t, 0);
      if(match_cons(e_42, sym_DynRuleId_1))
        {
          ATerm g_42 = ATgetArgument(e_42, 0);
          if(match_cons(g_42, sym_RDecT_3))
            {
              f_76 = ATgetArgument(g_42, 0);
              g_76 = ATgetArgument(g_42, 1);
              h_76 = ATgetArgument(g_42, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_42 = ATgetArgument(t, 1);
        if(match_cons(f_42, sym_Rule_3))
          {
            i_76 = ATgetArgument(f_42, 0);
            j_76 = ATgetArgument(f_42, 1);
            k_76 = ATgetArgument(f_42, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_11(g_143, f_76, g_76, h_76, i_76, j_76, k_76, t);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,r_79 = NULL,v_79 = NULL,w_79 = NULL;
  c_79 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      n_79 = ATgetArgument(t, 0);
      w_79 = ATgetArgument(t, 1);
      t = n_79;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          o_79 = ATgetArgument(t, 0);
          b_79 = ATgetArgument(t, 1);
          {
            static ATerm s_7 (ATerm t)
            {
              ATerm q_82 = NULL,r_82 = NULL;
              q_82 = t;
              t = SSL_explode_term(q_82);
              if(match_cons(t, sym__2))
                {
                  ATerm k_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm l_42 = ATgetArgument(t, 1);
                    if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
                      {
                        r_82 = ATgetFirst((ATermList) l_42);
                        {
                          ATerm m_42 = (ATerm) ATgetNext((ATermList) l_42);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_82), b_79), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_79))));
              return(t);
            }
            t = o_79;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_79 = ATgetArgument(t, 0);
                r_79 = ATgetArgument(t, 1);
                v_79 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, p_79, r_79, v_79)), (ATerm) ATmakeAppl(sym_Rule_3, w_79, term_p_42, term_j_20));
            t = SplitDynamicRule_1_0(s_7, t);
          }
        }
      else
        {
          static ATerm t_7 (ATerm t)
          {
            ATerm f_83 = NULL,g_83 = NULL;
            f_83 = t;
            t = SSL_explode_term(f_83);
            if(match_cons(t, sym__2))
              {
                ATerm q_42 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_42) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm r_42 = ATgetArgument(t, 1);
                  if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
                    {
                      g_83 = ATgetFirst((ATermList) r_42);
                      {
                        ATerm w_42 = (ATerm) ATgetNext((ATermList) r_42);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, g_83), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_79))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              o_79 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_79;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_79 = ATgetArgument(t, 0);
              r_79 = ATgetArgument(t, 1);
              v_79 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, p_79, r_79, v_79)), (ATerm) ATmakeAppl(sym_Rule_3, w_79, term_p_42, term_j_20));
          t = SplitDynamicRule_1_0(t_7, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          n_79 = ATgetArgument(t, 0);
          w_79 = ATgetArgument(t, 1);
          t = n_79;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              o_79 = ATgetArgument(t, 0);
              b_79 = ATgetArgument(t, 1);
              {
                static ATerm u_7 (ATerm t)
                {
                  ATerm a_84 = NULL,e_84 = NULL,d_30 = NULL;
                  a_84 = t;
                  t = SSL_explode_term(a_84);
                  if(match_cons(t, sym__2))
                    {
                      ATerm x_42 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) x_42) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm y_42 = ATgetArgument(t, 1);
                        if(((ATgetType(y_42) == AT_LIST) && !(ATisEmpty(y_42))))
                          {
                            e_84 = ATgetFirst((ATermList) y_42);
                            {
                              ATerm z_42 = (ATerm) ATgetNext((ATermList) y_42);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(a_84);
                  if(match_cons(t, sym__2))
                    {
                      ATerm c_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) c_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm d_43 = ATgetArgument(t, 1);
                        if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
                          {
                            ATerm e_43 = ATgetFirst((ATermList) d_43);
                            ATerm f_43 = (ATerm) ATgetNext((ATermList) d_43);
                            if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
                              {
                                d_30 = ATgetFirst((ATermList) f_43);
                                {
                                  ATerm g_43 = (ATerm) ATgetNext((ATermList) f_43);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_30), e_84), b_79), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_79))));
                  return(t);
                }
                t = o_79;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_79 = ATgetArgument(t, 0);
                    r_79 = ATgetArgument(t, 1);
                    v_79 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, p_79, r_79, v_79)), w_79);
                t = SplitDynamicRule_1_0(u_7, t);
              }
            }
          else
            {
              static ATerm v_7 (ATerm t)
              {
                ATerm r_85 = NULL,b_86 = NULL,i_30 = NULL;
                r_85 = t;
                t = SSL_explode_term(r_85);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_43 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_43) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm l_43 = ATgetArgument(t, 1);
                      if(((ATgetType(l_43) == AT_LIST) && !(ATisEmpty(l_43))))
                        {
                          b_86 = ATgetFirst((ATermList) l_43);
                          {
                            ATerm m_43 = (ATerm) ATgetNext((ATermList) l_43);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(r_85);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_43 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_43) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm s_43 = ATgetArgument(t, 1);
                      if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
                        {
                          ATerm t_43 = ATgetFirst((ATermList) s_43);
                          ATerm u_43 = (ATerm) ATgetNext((ATermList) s_43);
                          if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
                            {
                              i_30 = ATgetFirst((ATermList) u_43);
                              {
                                ATerm v_43 = (ATerm) ATgetNext((ATermList) u_43);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_30), b_86), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_79))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  o_79 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_79;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_79 = ATgetArgument(t, 0);
                  r_79 = ATgetArgument(t, 1);
                  v_79 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, p_79, r_79, v_79)), w_79);
              t = SplitDynamicRule_1_0(v_7, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              n_79 = ATgetArgument(t, 0);
              w_79 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_79;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              o_79 = ATgetArgument(t, 0);
              b_79 = ATgetArgument(t, 1);
              {
                static ATerm w_7 (ATerm t)
                {
                  ATerm a_87 = NULL,b_87 = NULL,s_30 = NULL;
                  a_87 = t;
                  t = SSL_explode_term(a_87);
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) w_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm x_43 = ATgetArgument(t, 1);
                        if(((ATgetType(x_43) == AT_LIST) && !(ATisEmpty(x_43))))
                          {
                            b_87 = ATgetFirst((ATermList) x_43);
                            {
                              ATerm y_43 = (ATerm) ATgetNext((ATermList) x_43);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(a_87);
                  if(match_cons(t, sym__2))
                    {
                      ATerm z_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) z_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm b_44 = ATgetArgument(t, 1);
                        if(((ATgetType(b_44) == AT_LIST) && !(ATisEmpty(b_44))))
                          {
                            ATerm d_44 = ATgetFirst((ATermList) b_44);
                            ATerm e_44 = (ATerm) ATgetNext((ATermList) b_44);
                            if(((ATgetType(e_44) == AT_LIST) && !(ATisEmpty(e_44))))
                              {
                                s_30 = ATgetFirst((ATermList) e_44);
                                {
                                  ATerm f_44 = (ATerm) ATgetNext((ATermList) e_44);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_30), b_87), b_79), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_79))));
                  return(t);
                }
                t = o_79;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_79 = ATgetArgument(t, 0);
                    r_79 = ATgetArgument(t, 1);
                    v_79 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, p_79, r_79, v_79)), w_79);
                t = SplitDynamicRule_1_0(w_7, t);
              }
            }
          else
            {
              static ATerm y_7 (ATerm t)
              {
                ATerm l_87 = NULL,o_87 = NULL,y_30 = NULL;
                l_87 = t;
                t = SSL_explode_term(l_87);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm l_44 = ATgetArgument(t, 1);
                      if(((ATgetType(l_44) == AT_LIST) && !(ATisEmpty(l_44))))
                        {
                          o_87 = ATgetFirst((ATermList) l_44);
                          {
                            ATerm n_44 = (ATerm) ATgetNext((ATermList) l_44);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(l_87);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) p_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm q_44 = ATgetArgument(t, 1);
                      if(((ATgetType(q_44) == AT_LIST) && !(ATisEmpty(q_44))))
                        {
                          ATerm r_44 = ATgetFirst((ATermList) q_44);
                          ATerm t_44 = (ATerm) ATgetNext((ATermList) q_44);
                          if(((ATgetType(t_44) == AT_LIST) && !(ATisEmpty(t_44))))
                            {
                              y_30 = ATgetFirst((ATermList) t_44);
                              {
                                ATerm v_44 = (ATerm) ATgetNext((ATermList) t_44);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_30), o_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_79))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  o_79 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_79;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((p_79 != NULL) && (p_79 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_79 = ATgetArgument(t, 0);
                  {
                    ATerm w_44 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm x_44 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = c_79;
              t = SplitDynamicRule_1_0(y_7, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  static ATerm p_87 (ATerm t)
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_111(t);
        LocalPopChoice(z_44);
      }
    else
      {
        t = y_44;
        t = SRTS_one(p_87, t);
      }
    return(t);
  }
  t = p_87(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm d_143 (ATerm), ATerm t)
{
  static ATerm x_87 (ATerm t)
  {
    static ATerm a_8 (ATerm t)
    {
      ATerm b_45 = t;
      int h_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_143(t);
          LocalPopChoice(h_45);
        }
      else
        {
          t = b_45;
          {
            ATerm s_87 = NULL,t_87 = NULL,w_87 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                s_87 = ATgetArgument(t, 0);
                t_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_87, t_87);
            {
              static ATerm f_8 (ATerm t)
              {
                t = s_87;
                t = DeclareContextVars_0_0(t);
                t = t_87;
                t = x_87(t);
                if(((w_87 != NULL) && (w_87 != t)))
                  _fail(t);
                else
                  w_87 = t;
                return(t);
              }
              t = scope_2_0(c_8, f_8, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_87, not_null(w_87));
          }
        }
      return(t);
    }
    t = oncetd_1_0(a_8, t);
    return(t);
  }
  t = x_87(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm a_88 = NULL,c_88 = NULL,f_88 = NULL,g_88 = NULL;
  g_88 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      f_88 = ATgetArgument(t, 0);
      {
        ATerm i_45 = t;
        int k_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_88;
            a_88 = t;
            t = g_88;
            LocalPopChoice(k_45);
          }
        else
          {
            t = i_45;
            t = g_88;
            a_88 = t;
            t = g_88;
          }
      }
    }
  else
    {
      t = g_88;
      a_88 = t;
      t = g_88;
    }
  t = term_p_45;
  c_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_88, term_p_45);
  t = c_12(p_8, a_88, c_88, t);
  t = g_88;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_q_36;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm h_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL;
  l_88 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      k_88 = ATgetArgument(t, 0);
      {
        ATerm r_45 = t;
        int y_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_88;
            h_88 = t;
            t = l_88;
            LocalPopChoice(y_45);
          }
        else
          {
            t = r_45;
            t = l_88;
            h_88 = t;
            t = l_88;
          }
      }
    }
  else
    {
      t = l_88;
      h_88 = t;
      t = l_88;
    }
  t = term_d_46;
  j_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_88, term_d_46);
  t = c_12(s_8, h_88, j_88, t);
  t = l_88;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm e_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(l_8, t);
      LocalPopChoice(f_46);
    }
  else
    {
      t = e_46;
      t = map_1_0(q_8, t);
    }
  return(t);
}
static ATerm u_8 (ATerm t)
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
static ATerm z_8 (ATerm t)
{
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_46);
    }
  else
    {
      t = h_46;
      {
        ATerm j_46 = t;
        int k_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_46);
          }
        else
          {
            t = j_46;
            {
              ATerm l_46 = t;
              int m_46 = stack_ptr;
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
                  t = map_1_0(a_9, t);
                  LocalPopChoice(m_46);
                }
              else
                {
                  t = l_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm g_32 = NULL;
  ATerm o_46 = t;
  int p_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_32 = ATgetArgument(t, 0);
          {
            ATerm q_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_46);
      t = g_32;
    }
  else
    {
      t = o_46;
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
static ATerm b_9 (ATerm t)
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
            ATerm r_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_32;
    }
  return(t);
}
static ATerm c_9 (ATerm t)
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
            ATerm s_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_33;
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm c_34 = NULL;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      if((c_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
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
static ATerm g_9 (ATerm t)
{
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_46);
    }
  else
    {
      t = u_46;
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
            {
              ATerm y_46 = t;
              int b_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_34 = NULL,n_34 = NULL,p_34 = NULL,q_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_34 = ATgetArgument(t, 0);
                      n_34 = ATgetArgument(t, 1);
                      p_34 = ATgetArgument(t, 2);
                      q_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_34;
                  t = map_1_0(m_9, t);
                  LocalPopChoice(b_47);
                }
              else
                {
                  t = y_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm i_35 = NULL;
  ATerm c_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_35 = ATgetArgument(t, 0);
          {
            ATerm f_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_47);
      t = i_35;
    }
  else
    {
      t = c_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_35;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
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
            ATerm g_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_36;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
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
            ATerm k_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_36;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
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
  ATerm z_92 = NULL;
  z_92 = t;
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL,j_31 = NULL;
        t = z_92;
        t = free_vars_3_0(u_8, z_8, tboundin_3_0, t);
        i_31 = t;
        t = z_92;
        {
          ATerm n_47 = t;
          int o_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_32 = NULL;
              ATerm p_47 = t;
              int q_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm r_47 = ATgetArgument(t, 0);
                      ATerm t_47 = ATgetArgument(t, 1);
                      o_32 = ATgetArgument(t, 2);
                      {
                        ATerm u_47 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_47);
                  t = o_32;
                  t = map_1_0(b_9, t);
                }
              else
                {
                  t = p_47;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm w_47 = ATgetArgument(t, 0);
                      ATerm y_47 = ATgetArgument(t, 1);
                      o_32 = ATgetArgument(t, 2);
                      {
                        ATerm z_47 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = o_32;
                  t = map_1_0(c_9, t);
                }
              LocalPopChoice(o_47);
            }
          else
            {
              t = n_47;
              t = (ATerm) ATempty;
            }
        }
        j_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, j_31);
        t = q_11(e_9, i_31, j_31, t);
        LocalPopChoice(m_47);
      }
    else
      {
        t = l_47;
        {
          ATerm f_34 = NULL,g_34 = NULL;
          t = z_92;
          t = free_vars_3_0(f_9, g_9, tboundin_3_0, t);
          f_34 = t;
          t = z_92;
          {
            ATerm c_48 = t;
            int e_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_35 = NULL;
                ATerm g_48 = t;
                int h_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm i_48 = ATgetArgument(t, 0);
                        ATerm m_48 = ATgetArgument(t, 1);
                        t_35 = ATgetArgument(t, 2);
                        {
                          ATerm n_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_48);
                    t = t_35;
                    t = map_1_0(n_9, t);
                  }
                else
                  {
                    t = g_48;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm o_48 = ATgetArgument(t, 0);
                        ATerm q_48 = ATgetArgument(t, 1);
                        t_35 = ATgetArgument(t, 2);
                        {
                          ATerm r_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = t_35;
                    t = map_1_0(p_9, t);
                  }
                LocalPopChoice(e_48);
              }
            else
              {
                t = c_48;
                t = (ATerm) ATempty;
              }
          }
          g_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_34, g_34);
          t = q_11(q_9, f_34, g_34, t);
        }
      }
  }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_q_36;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_30;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_93 = ATgetFirst((ATermList) t);
      u_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_93, u_93);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm v_93 = NULL,y_93 = NULL,z_93 = NULL,c_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_48 = ATgetArgument(t, 0);
      if(match_cons(s_48, sym__2))
        {
          v_93 = ATgetArgument(s_48, 0);
          y_93 = ATgetArgument(s_48, 1);
        }
      else
        _fail(t);
      {
        ATerm t_48 = ATgetArgument(t, 1);
        if(match_cons(t_48, sym__2))
          {
            z_93 = ATgetArgument(t_48, 0);
            c_94 = ATgetArgument(t_48, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_93), v_93), (ATerm) ATinsert(CheckATermList(c_94), y_93));
  return(t);
}
static ATerm j_11 (ATerm u_83, ATerm t_83, ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  static ATerm s_9 (ATerm t)
  {
    t = u_83;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = u_83;
    {
      static ATerm t_9 (ATerm t)
      {
        ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,p_23 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            l_93 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_93;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(u_9, v_9, w_9, _id, t);
        s_93 = t;
        if(match_cons(t, sym__2))
          {
            n_93 = ATgetArgument(t, 0);
            q_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_93);
        m_93 = t;
        t = q_93;
        t = concat_0_0(t);
        r_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_93, r_93);
        p_23 = t;
        t = SSLsetAnnotations(p_23, m_93);
        if(match_cons(t, sym__2))
          {
            if(((i_93 != NULL) && (i_93 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              i_93 = ATgetArgument(t, 0);
            if(((h_93 != NULL) && (h_93 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, i_93);
        return(t);
      }
      t = split_dynamic_rule_1_0(t_9, t);
    }
    if(((j_93 != NULL) && (j_93 != t)))
      _fail(t);
    else
      j_93 = t;
    return(t);
  }
  t = scope_2_0(r_9, s_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_93)), not_null(j_93)), t_83);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  static ATerm e_94 (ATerm t)
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_109(t);
        t = e_94(t);
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
        t = k_109(t);
      }
    return(t);
  }
  t = e_94(t);
  return(t);
}
ATerm listtd_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  static ATerm s_94 (ATerm t)
  {
    ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
    t = f_118(t);
    p_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_94;
      }
    else
      {
        ATerm y_36 = NULL,b_37 = NULL,r_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_94 = ATgetFirst((ATermList) t);
            r_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_94);
        y_36 = t;
        t = r_94;
        t = s_94(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(b_37), q_94);
        r_23 = t;
        t = SSLsetAnnotations(r_23, y_36);
      }
    return(t);
  }
  t = s_94(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,d_95 = NULL,e_95 = NULL,i_95 = NULL,j_95 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      i_95 = ATgetArgument(t, 0);
      j_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_95 = ATgetFirst((ATermList) t);
      e_95 = (ATerm) ATgetNext((ATermList) t);
      t = a_95;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          d_95 = ATgetArgument(t, 0);
          z_94 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_48, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, d_95, z_94), (ATerm) ATmakeAppl(sym_DynRuleScope_2, e_95, j_95))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, d_95)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              d_95 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_48, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, e_95, j_95)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, d_95)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_95;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL;
  t = term_w_36;
  c_96 = t;
  t = (ATerm) ATinsert(ATempty, term_a_49);
  d_96 = t;
  t = SSL_printnl(c_96, d_96);
  t = term_z_36;
  b_96 = t;
  t = SSL_exit(b_96);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm e_96 = NULL,i_96 = NULL,j_96 = NULL;
  t = term_w_36;
  i_96 = t;
  t = (ATerm) ATinsert(ATempty, term_b_49);
  j_96 = t;
  t = SSL_printnl(i_96, j_96);
  t = term_z_36;
  e_96 = t;
  t = SSL_exit(e_96);
  return(t);
}
static ATerm p_99 (ATerm a_98, ATerm c_98, ATerm d_98, ATerm g_98, ATerm h_98, ATerm i_98, ATerm k_98, ATerm t)
{
  t = k_98;
  {
    ATerm c_49 = t;
    if((PushChoice() == 0))
      {
        t = h_98;
        if(match_cons(t, sym_Op_2))
          {
            ATerm f_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_49) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_49 = ATgetArgument(t, 1);
              if(((ATgetType(g_49) != AT_LIST) || !(ATisEmpty(g_49))))
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
        t = c_49;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_98, c_98, d_98)), (ATerm) ATmakeAppl(sym_Rule_3, g_98, h_98, i_98));
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_j_49;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,l_99 = NULL;
  a_99 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_99 = ATgetArgument(t, 0);
      c_99 = ATgetArgument(t, 1);
      d_99 = ATgetArgument(t, 2);
      g_99 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_99;
  if(match_cons(t, sym_Rule_3))
    {
      h_99 = ATgetArgument(t, 0);
      i_99 = ATgetArgument(t, 1);
      l_99 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_99;
  if(match_cons(t, sym_Op_2))
    {
      y_98 = ATgetArgument(t, 0);
      z_98 = ATgetArgument(t, 1);
      t = z_98;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_98;
          if(match_string(t, "Undefined"))
            {
              ATerm k_49 = t;
              int n_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_99;
                  {
                    ATerm o_49 = t;
                    int p_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_99;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(p_49);
                      }
                    else
                      {
                        t = o_49;
                        {
                          ATerm v_38 = NULL,w_38 = NULL;
                          t = term_w_36;
                          v_38 = t;
                          t = (ATerm) ATinsert(ATempty, term_t_49);
                          w_38 = t;
                          t = SSL_printnl(v_38, w_38);
                          t = a_99;
                          t = debug_1_0(x_9, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, b_99, c_99, d_99)), h_99);
                  LocalPopChoice(n_49);
                }
              else
                {
                  t = k_49;
                  t = p_99(b_99, c_99, d_99, h_99, i_99, l_99, a_99, t);
                }
            }
          else
            {
              t = p_99(b_99, c_99, d_99, h_99, i_99, l_99, a_99, t);
            }
        }
      else
        {
          t = y_98;
          t = p_99(b_99, c_99, d_99, h_99, i_99, l_99, a_99, t);
        }
    }
  else
    {
      t = p_99(b_99, c_99, d_99, h_99, i_99, l_99, a_99, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_116 (ATerm), ATerm t)
{
  ATerm q_99 = NULL,r_99 = NULL,t_99 = NULL,u_99 = NULL;
  q_99 = t;
  t = k_116(t);
  r_99 = t;
  t = term_w_36;
  t_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_99), r_99);
  u_99 = t;
  t = SSL_printnl(t_99, u_99);
  t = q_99;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_j_49;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL;
  c_100 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm u_49 = ATgetArgument(t, 0);
      if(match_cons(u_49, sym_DynRuleId_1))
        {
          ATerm w_49 = ATgetArgument(u_49, 0);
          if(match_cons(w_49, sym_RDecT_3))
            {
              x_99 = ATgetArgument(w_49, 0);
              y_99 = ATgetArgument(w_49, 1);
              z_99 = ATgetArgument(w_49, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm v_49 = ATgetArgument(t, 1);
        if(match_cons(v_49, sym_Rule_3))
          {
            a_100 = ATgetArgument(v_49, 0);
            {
              ATerm x_49 = ATgetArgument(v_49, 1);
              if(match_cons(x_49, sym_Op_2))
                {
                  ATerm y_49 = ATgetArgument(x_49, 0);
                  if((ATgetSymbol((ATermAppl) y_49) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm z_49 = ATgetArgument(x_49, 1);
                    if(((ATgetType(z_49) != AT_LIST) || !(ATisEmpty(z_49))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            b_100 = ATgetArgument(v_49, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm a_50 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_100;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(b_50);
      }
    else
      {
        t = a_50;
        {
          ATerm d_100 = NULL,e_100 = NULL;
          t = term_w_36;
          d_100 = t;
          t = (ATerm) ATinsert(ATempty, term_t_49);
          e_100 = t;
          t = SSL_printnl(d_100, e_100);
          t = c_100;
          t = debug_1_0(y_9, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, x_99, y_99, z_99)), a_100);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_100 = NULL;
      h_100 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm e_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_100;
      LocalPopChoice(d_50);
      {
        ATerm j_100 = NULL,l_100 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            j_100 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_100;
        t = map_1_0(g_10, t);
        l_100 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, l_100);
      }
    }
  else
    {
      t = c_50;
      {
        ATerm f_50 = t;
        int g_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_100 = NULL;
            o_100 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm h_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_100;
            LocalPopChoice(g_50);
            {
              ATerm p_100 = NULL,s_100 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  p_100 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_100;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              s_100 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, s_100);
            }
          }
        else
          {
            t = f_50;
            {
              ATerm i_50 = t;
              int j_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_100 = NULL;
                  t_100 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm k_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_100;
                  LocalPopChoice(j_50);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = i_50;
                  {
                    ATerm l_50 = t;
                    int m_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_100 = NULL;
                        u_100 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm n_50 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = u_100;
                        LocalPopChoice(m_50);
                        t = UpgradeExtendOverrideDynamicRules_0_0(t);
                      }
                    else
                      {
                        t = l_50;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm o_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(p_50);
    }
  else
    {
      t = o_50;
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(z_9, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = Cons_2_0(e_11, o_11, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,o_101 = NULL,p_101 = NULL,t_23 = NULL;
  p_101 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_101);
  l_101 = t;
  t = m_101;
  t = topdown_1_0(p_11, t);
  t = listtd_1_0(t_11, t);
  o_101 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_101);
  t_23 = t;
  t = SSLsetAnnotations(t_23, l_101);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm q_50 = t;
  int r_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_50 = t;
      int t_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(t_50);
        }
      else
        {
          t = s_50;
          {
            ATerm r_101 = NULL,s_101 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                r_101 = ATgetArgument(t, 0);
                s_101 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_50, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, s_101), (ATerm) ATmakeAppl(sym_Str_1, r_101)));
          }
        }
      LocalPopChoice(r_50);
    }
  else
    {
      t = q_50;
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = repeat_2_0(v_11, _id, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_102 = ATgetFirst((ATermList) t);
      i_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_11(h_102, i_102, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,v_23 = NULL,u_23 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  j_101 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_101);
  c_101 = t;
  t = d_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_101 = ATgetFirst((ATermList) t);
      g_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_101);
  e_101 = t;
  t = g_101;
  t = Cons_2_0(_id, c_11, t);
  h_101 = t;
  t = (ATerm) ATinsert(CheckATermList(h_101), f_101);
  u_23 = t;
  t = SSLsetAnnotations(u_23, e_101);
  i_101 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_101);
  v_23 = t;
  t = SSLsetAnnotations(v_23, c_101);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm q_142 (ATerm), ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL;
  t_107 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_107 = ATgetArgument(t, 0);
      q_107 = ATgetArgument(t, 1);
      {
        ATerm t_39 = NULL,w_39 = NULL,x_39 = NULL,b_24 = NULL;
        t = SSLgetAnnotations(t_107);
        t_39 = t;
        t = u_107;
        t = q_142(t);
        w_39 = t;
        t = q_107;
        t = o_142(t);
        x_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_39, x_39);
        b_24 = t;
        t = SSLsetAnnotations(b_24, t_39);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          u_107 = ATgetArgument(t, 0);
          q_107 = ATgetArgument(t, 1);
          r_107 = ATgetArgument(t, 2);
          {
            ATerm p_40 = NULL,g_41 = NULL,k_41 = NULL,l_41 = NULL,d_24 = NULL;
            t = SSLgetAnnotations(t_107);
            p_40 = t;
            t = u_107;
            t = q_142(t);
            g_41 = t;
            t = q_107;
            t = q_142(t);
            k_41 = t;
            t = r_107;
            t = q_142(t);
            l_41 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, g_41, k_41, l_41);
            d_24 = t;
            t = SSLsetAnnotations(d_24, p_40);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_107 = ATgetArgument(t, 0);
              q_107 = ATgetArgument(t, 1);
              r_107 = ATgetArgument(t, 2);
              s_107 = ATgetArgument(t, 3);
              {
                ATerm i_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,s_24 = NULL;
                t = SSLgetAnnotations(t_107);
                i_42 = t;
                t = u_107;
                t = q_142(t);
                s_42 = t;
                t = q_107;
                t = q_142(t);
                t_42 = t;
                t = r_107;
                t = q_142(t);
                u_42 = t;
                t = s_107;
                t = o_142(t);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_42, t_42, u_42, v_42);
                s_24 = t;
                t = SSLsetAnnotations(s_24, i_42);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  u_107 = ATgetArgument(t, 0);
                  q_107 = ATgetArgument(t, 1);
                  r_107 = ATgetArgument(t, 2);
                  s_107 = ATgetArgument(t, 3);
                  {
                    ATerm j_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,c_25 = NULL;
                    t = SSLgetAnnotations(t_107);
                    j_43 = t;
                    t = u_107;
                    t = q_142(t);
                    o_43 = t;
                    t = q_107;
                    t = q_142(t);
                    p_43 = t;
                    t = r_107;
                    t = q_142(t);
                    q_43 = t;
                    t = s_107;
                    t = o_142(t);
                    r_43 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_43, p_43, q_43, r_43);
                    c_25 = t;
                    t = SSLsetAnnotations(c_25, j_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      u_107 = ATgetArgument(t, 0);
                      {
                        ATerm a_44 = NULL,c_44 = NULL,d_25 = NULL;
                        t = SSLgetAnnotations(t_107);
                        a_44 = t;
                        t = u_107;
                        t = o_142(t);
                        c_44 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, c_44);
                        d_25 = t;
                        t = SSLsetAnnotations(d_25, a_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          u_107 = ATgetArgument(t, 0);
                          {
                            ATerm i_44 = NULL,k_44 = NULL,e_25 = NULL;
                            t = SSLgetAnnotations(t_107);
                            i_44 = t;
                            t = u_107;
                            t = o_142(t);
                            k_44 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_44);
                            e_25 = t;
                            t = SSLsetAnnotations(e_25, i_44);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              u_107 = ATgetArgument(t, 0);
                              {
                                ATerm s_44 = NULL,u_44 = NULL,f_25 = NULL;
                                t = SSLgetAnnotations(t_107);
                                s_44 = t;
                                t = u_107;
                                t = o_142(t);
                                u_44 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, u_44);
                                f_25 = t;
                                t = SSLsetAnnotations(f_25, s_44);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  u_107 = ATgetArgument(t, 0);
                                  {
                                    ATerm a_45 = NULL,d_45 = NULL,k_25 = NULL;
                                    t = SSLgetAnnotations(t_107);
                                    a_45 = t;
                                    t = u_107;
                                    t = o_142(t);
                                    d_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, d_45);
                                    k_25 = t;
                                    t = SSLsetAnnotations(k_25, a_45);
                                  }
                                }
                              else
                                {
                                  ATerm q_45 = NULL,s_45 = NULL,l_25 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      u_107 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(t_107);
                                  q_45 = t;
                                  t = u_107;
                                  t = o_142(t);
                                  s_45 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, s_45);
                                  l_25 = t;
                                  t = SSLsetAnnotations(l_25, q_45);
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
static ATerm w_11 (ATerm t)
{
  ATerm p_108 = NULL;
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_108 = ATgetArgument(t, 0);
          {
            ATerm y_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_50);
      t = p_108;
    }
  else
    {
      t = w_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_108;
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm w_108 = NULL;
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_108 = ATgetArgument(t, 0);
          {
            ATerm b_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_51);
      t = w_108;
    }
  else
    {
      t = z_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_108;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm k_108 = NULL;
  ATerm c_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm f_51 = ATgetArgument(t, 0);
          ATerm g_51 = ATgetArgument(t, 1);
          k_108 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(e_51);
      t = k_108;
      t = map_1_0(w_11, t);
    }
  else
    {
      t = c_51;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm h_51 = ATgetArgument(t, 0);
          ATerm i_51 = ATgetArgument(t, 1);
          k_108 = ATgetArgument(t, 2);
          {
            ATerm j_51 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_108;
      t = map_1_0(y_11, t);
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm s_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_109);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm k_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_51);
    }
  else
    {
      t = k_51;
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
                  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_109 = ATgetArgument(t, 0);
                      v_109 = ATgetArgument(t, 1);
                      w_109 = ATgetArgument(t, 2);
                      x_109 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_109;
                  t = map_1_0(q_12, t);
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
static ATerm q_12 (ATerm t)
{
  ATerm m_110 = NULL;
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_110 = ATgetArgument(t, 0);
          {
            ATerm s_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_51);
      t = m_110;
    }
  else
    {
      t = q_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_110;
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm q_110 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_110);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm t_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_51);
    }
  else
    {
      t = t_51;
      {
        ATerm v_51 = t;
        int w_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_51);
          }
        else
          {
            t = v_51;
            {
              ATerm x_51 = t;
              int y_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_110 = ATgetArgument(t, 0);
                      t_110 = ATgetArgument(t, 1);
                      u_110 = ATgetArgument(t, 2);
                      v_110 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_110;
                  t = map_1_0(k_13, t);
                  LocalPopChoice(y_51);
                }
              else
                {
                  t = x_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm c_111 = NULL;
  ATerm z_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_111 = ATgetArgument(t, 0);
          {
            ATerm b_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_52);
      t = c_111;
    }
  else
    {
      t = z_51;
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
static ATerm e_14 (ATerm t)
{
  ATerm g_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_111);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm d_52 = t;
  int e_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_52);
    }
  else
    {
      t = d_52;
      {
        ATerm f_52 = t;
        int g_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_52);
          }
        else
          {
            t = f_52;
            {
              ATerm h_52 = t;
              int i_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_111 = ATgetArgument(t, 0);
                      j_111 = ATgetArgument(t, 1);
                      k_111 = ATgetArgument(t, 2);
                      l_111 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_111;
                  t = map_1_0(h_14, t);
                  LocalPopChoice(i_52);
                }
              else
                {
                  t = h_52;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm u_111 = NULL;
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_111 = ATgetArgument(t, 0);
          {
            ATerm l_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_52);
      t = u_111;
    }
  else
    {
      t = j_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_111;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm y_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_111);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_52);
    }
  else
    {
      t = m_52;
      {
        ATerm o_52 = t;
        int p_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_52);
          }
        else
          {
            t = o_52;
            {
              ATerm q_52 = t;
              int r_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_112 = ATgetArgument(t, 0);
                      d_112 = ATgetArgument(t, 1);
                      e_112 = ATgetArgument(t, 2);
                      f_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_112;
                  t = map_1_0(m_14, t);
                  LocalPopChoice(r_52);
                }
              else
                {
                  t = q_52;
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
  ATerm m_112 = NULL;
  ATerm s_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_112 = ATgetArgument(t, 0);
          {
            ATerm v_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_52);
      t = m_112;
    }
  else
    {
      t = s_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_112;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm q_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_112);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(a_53);
          }
        else
          {
            t = y_52;
            {
              ATerm b_53 = t;
              int c_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_112 = ATgetArgument(t, 0);
                      t_112 = ATgetArgument(t, 1);
                      u_112 = ATgetArgument(t, 2);
                      v_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_112;
                  t = map_1_0(t_14, t);
                  LocalPopChoice(c_53);
                }
              else
                {
                  t = b_53;
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
  ATerm c_113 = NULL;
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_113 = ATgetArgument(t, 0);
          {
            ATerm f_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_53);
      t = c_113;
    }
  else
    {
      t = d_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_113;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_109 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_109 = ATgetArgument(t, 0);
      t = q_109;
      t = free_vars_3_0(z_11, f_12, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_109 = ATgetArgument(t, 0);
          t = q_109;
          t = free_vars_3_0(w_12, a_13, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_109 = ATgetArgument(t, 0);
              t = q_109;
              t = free_vars_3_0(e_14, f_14, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_109 = ATgetArgument(t, 0);
                  t = q_109;
                  t = free_vars_3_0(k_14, l_14, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_109 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_109;
                  t = free_vars_3_0(p_14, s_14, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm q_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_113);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm g_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_53);
    }
  else
    {
      t = g_53;
      {
        ATerm i_53 = t;
        int j_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_53);
          }
        else
          {
            t = i_53;
            {
              ATerm k_53 = t;
              int l_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_113 = ATgetArgument(t, 0);
                      t_113 = ATgetArgument(t, 1);
                      u_113 = ATgetArgument(t, 2);
                      v_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_113;
                  t = map_1_0(x_14, t);
                  LocalPopChoice(l_53);
                }
              else
                {
                  t = k_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm c_114 = NULL;
  ATerm m_53 = t;
  int n_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_114 = ATgetArgument(t, 0);
          {
            ATerm o_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_53);
      t = c_114;
    }
  else
    {
      t = m_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_114;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_113 = NULL,n_113 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_113 = ATgetArgument(t, 0);
      t = n_113;
      if(match_cons(t, sym_Rule_3))
        {
          j_113 = ATgetArgument(t, 0);
          {
            ATerm p_53 = ATgetArgument(t, 1);
          }
          {
            ATerm q_53 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_113;
      t = free_vars_3_0(v_14, w_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_113 = ATgetArgument(t, 0);
          {
            ATerm s_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_113;
    }
  return(t);
}
static ATerm q_11 (ATerm g_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  static ATerm v_114 (ATerm t)
  {
    ATerm q_114 = NULL,r_114 = NULL,s_114 = NULL;
    q_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_114 = ATgetFirst((ATermList) t);
            s_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_53 = t;
          int u_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_114;
              {
                static ATerm y_14 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = r_11(g_121, y_14, r_114, s_114, t);
              }
              t = v_114(t);
              LocalPopChoice(u_53);
            }
          else
            {
              t = t_53;
              {
                ATerm n_46 = NULL,a_47 = NULL,z_25 = NULL;
                t = SSLgetAnnotations(q_114);
                n_46 = t;
                t = s_114;
                t = v_114(t);
                a_47 = t;
                t = (ATerm) ATinsert(CheckATermList(a_47), r_114);
                z_25 = t;
                t = SSLsetAnnotations(z_25, n_46);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = v_114(t);
  return(t);
}
static ATerm r_11 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  t = k_121(t);
  {
    static ATerm a_15 (ATerm t)
    {
      ATerm z_114 = NULL;
      z_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, z_114);
      t = j_121(t);
      return(t);
    }
    t = fetch_1_0(a_15, t);
  }
  t = p_30;
  return(t);
}
static ATerm s_11 (ATerm b_121 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm p_115 (ATerm t)
  {
    ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL;
    k_115 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_115;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_115 = ATgetFirst((ATermList) t);
            m_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_53 = t;
          int z_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_115;
              {
                static ATerm d_15 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = r_11(b_121, d_15, l_115, m_115, t);
              }
              t = p_115(t);
              LocalPopChoice(z_53);
            }
          else
            {
              t = x_53;
              {
                ATerm s_47 = NULL,v_47 = NULL,b_26 = NULL;
                t = SSLgetAnnotations(k_115);
                s_47 = t;
                t = m_115;
                t = p_115(t);
                v_47 = t;
                t = (ATerm) ATinsert(CheckATermList(v_47), l_115);
                b_26 = t;
                t = SSLsetAnnotations(b_26, s_47);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = p_115(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t)
{
  static ATerm x_115 (ATerm t)
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_118(t);
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        {
          ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,m_26 = NULL;
          t = a_119(t);
          w_115 = t;
          if(match_cons(t, sym__2))
            {
              s_115 = ATgetArgument(t, 0);
              t_115 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_115);
          r_115 = t;
          t = s_115;
          t = c_119(t);
          u_115 = t;
          t = t_115;
          t = x_115(t);
          v_115 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_115, v_115);
          m_26 = t;
          t = SSLsetAnnotations(m_26, r_115);
          t = b_119(t);
        }
      }
    return(t);
  }
  t = x_115(t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_54 = ATgetArgument(t, 0);
      if(((ATgetType(c_54) != AT_LIST) || !(ATisEmpty(c_54))))
        _fail(t);
      {
        ATerm d_54 = ATgetArgument(t, 1);
        if(((ATgetType(d_54) != AT_LIST) || !(ATisEmpty(d_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_54 = ATgetArgument(t, 0);
      if(((ATgetType(e_54) == AT_LIST) && !(ATisEmpty(e_54))))
        {
          e_116 = ATgetFirst((ATermList) e_54);
          f_116 = (ATerm) ATgetNext((ATermList) e_54);
        }
      else
        _fail(t);
      {
        ATerm f_54 = ATgetArgument(t, 1);
        if(((ATgetType(f_54) == AT_LIST) && !(ATisEmpty(f_54))))
          {
            g_116 = ATgetFirst((ATermList) f_54);
            h_116 = (ATerm) ATgetNext((ATermList) f_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_116, g_116), (ATerm) ATmakeAppl(sym__2, f_116, h_116));
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL;
  if(match_cons(t, sym__2))
    {
      i_116 = ATgetArgument(t, 0);
      j_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_116), i_116);
  return(t);
}
static ATerm x_11 (ATerm f_673, ATerm k_673, ATerm v_66, ATerm t)
{
  ATerm z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL;
  t = SSL_explode_term(k_673);
  if(match_cons(t, sym__2))
    {
      z_115 = ATgetArgument(t, 0);
      b_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_673);
  if(match_cons(t, sym__2))
    {
      if((z_115 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_116, b_116);
  t = genzip_4_0(g_15, h_15, i_15, _id, t);
  c_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_116, v_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t)
{
  static ATerm n_116 (ATerm t)
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_110(t);
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        t = b_110(t);
        t = n_116(t);
      }
    return(t);
  }
  t = n_116(t);
  return(t);
}
ATerm for_3_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm t)
{
  t = d_110(t);
  t = while_not_2_0(e_110, f_110, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm x_116 = NULL;
  x_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_116);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,o_26 = NULL;
  b_117 = t;
  if(match_cons(t, sym__2))
    {
      z_116 = ATgetArgument(t, 0);
      a_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_117);
  y_116 = t;
  t = a_117;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_116, a_117);
  o_26 = t;
  t = SSLsetAnnotations(o_26, y_116);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL,c_118 = NULL;
  y_117 = t;
  if(match_cons(t, sym__2))
    {
      z_117 = ATgetArgument(t, 0);
      a_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_118 = ATgetFirst((ATermList) t);
      c_118 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_54 = t;
        int r_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_118(z_117, a_118, y_117, t);
            LocalPopChoice(r_54);
          }
        else
          {
            t = j_54;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_117), b_118), c_118);
          }
      }
    }
  else
    {
      t = o_118(z_117, a_118, y_117, t);
    }
  return(t);
}
static ATerm o_118 (ATerm c_117, ATerm d_117, ATerm e_117, ATerm t)
{
  ATerm h_117 = NULL,k_117 = NULL,s_26 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL;
  t = SSLgetAnnotations(e_117);
  h_117 = t;
  t = d_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_117 = ATgetFirst((ATermList) t);
      s_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_117;
  if(match_cons(t, sym__2))
    {
      q_117 = ATgetArgument(t, 0);
      r_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_117;
        if((q_117 != t))
          {
            _fail(t);
          }
        t = s_117;
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
        t = d_117;
        t = x_11(q_117, r_117, s_117, t);
      }
  }
  k_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_117, k_117);
  s_26 = t;
  t = SSLsetAnnotations(s_26, h_117);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm n_118 = NULL;
  if(match_cons(t, sym__2))
    {
      n_118 = ATgetArgument(t, 0);
      if((n_118 != ATgetArgument(t, 1)))
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
  ATerm w_54 = t;
  int x_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_15, k_15, l_15, t);
      LocalPopChoice(x_54);
    }
  else
    {
      t = w_54;
      {
        ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL;
        i_118 = t;
        if(match_cons(t, sym__2))
          {
            j_118 = ATgetArgument(t, 0);
            k_118 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_118;
        t = s_11(m_15, j_118, k_118, t);
      }
    }
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(x_15, d_49, e_49, t);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm i_49 = NULL;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      if((i_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(a_16, q_49, r_49, t);
  return(t);
}
static ATerm a_16 (ATerm t)
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
ATerm free_vars_3_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm h_119 (ATerm t)
  {
    ATerm y_54 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_140(t);
        LocalPopChoice(b_55);
      }
    else
      {
        t = y_54;
        {
          ATerm c_55 = t;
          int d_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_118 = NULL,r_118 = NULL,j_48 = NULL,l_48 = NULL;
              q_118 = t;
              t = c_140(t);
              r_118 = t;
              t = q_118;
              {
                static ATerm n_15 (ATerm t)
                {
                  ATerm t_118 = NULL;
                  t = h_119(t);
                  t_118 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_118, r_118);
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_140(n_15, h_119, o_15, t);
              }
              l_48 = t;
              t = SSL_explode_term(l_48);
              if(match_cons(t, sym__2))
                {
                  ATerm f_55 = ATgetArgument(t, 0);
                  j_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_48;
              t = foldr_3_0(p_15, v_15, _id, t);
              LocalPopChoice(d_55);
            }
          else
            {
              t = c_55;
              {
                ATerm l_49 = NULL,m_49 = NULL;
                m_49 = t;
                t = SSL_explode_term(m_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_55 = ATgetArgument(t, 0);
                    l_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_49;
                t = foldr_3_0(y_15, z_15, h_119, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_119(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  static ATerm d_16 (ATerm t)
  {
    t = bottomup_1_0(k_110, t);
    return(t);
  }
  t = SRTS_all(d_16, t);
  t = k_110(t);
  return(t);
}
static ATerm b_12 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm i_119 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
  t = u_12(p_60, q_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_119 = ATgetFirst((ATermList) t);
      {
        ATerm l_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_119;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm w_119 = NULL,x_119 = NULL;
  w_119 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_51 = NULL;
        t = term_r_55;
        d_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_55, w_119);
        t = b_12(d_51, w_119, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_55) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, x_119, (ATerm) ATempty);
        LocalPopChoice(q_55);
      }
    else
      {
        t = m_55;
        {
          ATerm c_52 = NULL;
          t = term_r_55;
          c_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_55, w_119);
          t = b_12(c_52, w_119, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_55) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, x_119, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  static ATerm a_120 (ATerm t)
  {
    ATerm v_55 = t;
    int w_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_112(t);
        LocalPopChoice(w_55);
      }
    else
      {
        t = v_55;
        t = SRTS_all(a_120, t);
      }
    return(t);
  }
  t = a_120(t);
  return(t);
}
static ATerm c_12 (ATerm e_130 (ATerm), ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL;
  e_120 = t;
  t = e_130(t);
  b_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_120, o_44, m_44);
  t = v_12(b_120, o_44, m_44, t);
  {
    ATerm x_55 = t;
    int y_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_120 = NULL;
        t = term_z_55;
        j_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_120, term_z_55);
        t = u_12(b_120, j_120, t);
        LocalPopChoice(y_55);
      }
    else
      {
        t = x_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_120 = ATgetFirst((ATermList) t);
      d_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_120, term_z_55, (ATerm) ATinsert(CheckATermList(d_120), (ATerm) ATinsert(CheckATermList(c_120), o_44)));
  t = lookup_table_0_1(b_120, t);
  i_120 = t;
  t = term_z_55;
  f_120 = t;
  t = (ATerm) ATinsert(CheckATermList(d_120), (ATerm) ATinsert(CheckATermList(c_120), o_44));
  g_120 = t;
  t = i_120;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(f_120, g_120, h_120, t);
  t = e_120;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_r_55;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_r_55;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm n_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      p_120 = ATgetArgument(t, 0);
      q_120 = ATgetArgument(t, 1);
      n_120 = ATgetArgument(t, 2);
      {
        ATerm u_120 = NULL,v_120 = NULL;
        t = q_120;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_120);
        u_120 = t;
        t = term_b_56;
        v_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_120), term_b_56);
        t = c_12(e_16, u_120, v_120, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, p_120, (ATerm)ATempty, n_120);
      }
    }
  else
    {
      ATerm y_120 = NULL,z_120 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          p_120 = ATgetArgument(t, 0);
          q_120 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_120;
      if(match_cons(t, sym_ConstType_1))
        {
          r_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_120);
      y_120 = t;
      t = term_d_56;
      z_120 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_120), term_d_56);
      t = c_12(f_16, y_120, z_120, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_120, (ATerm) ATmakeAppl(sym_ConstType_1, r_120));
    }
  return(t);
}
static ATerm d_12 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm f_121 = NULL,i_121 = NULL;
  i_121 = t;
  {
    ATerm e_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        t = u_12(j_60, k_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_56 = ATgetFirst((ATermList) t);
            f_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_56);
        {
          ATerm l_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, f_121);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_121 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_12(k_60, f_121, l_121, t);
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, f_121);
        }
      }
    else
      {
        t = e_56;
        {
          ATerm n_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_121 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_12(k_60, n_121, t);
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        }
      }
  }
  t = i_121;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL;
  s_121 = t;
  t = b_130(t);
  r_121 = t;
  {
    ATerm l_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_121 = NULL;
        t = term_z_55;
        w_121 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_121, term_z_55);
        t = u_12(r_121, w_121, t);
        LocalPopChoice(m_56);
      }
    else
      {
        t = l_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_121 = ATgetFirst((ATermList) t);
      p_121 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_121, term_z_55, p_121);
  t = lookup_table_0_1(r_121, t);
  v_121 = t;
  t = term_z_55;
  t_121 = t;
  t = v_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(t_121, p_121, u_121, t);
  t = q_121;
  {
    static ATerm g_16 (ATerm t)
    {
      ATerm x_121 = NULL;
      x_121 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_121, x_121);
      t = d_12(r_121, x_121, t);
      return(t);
    }
    t = map_1_0(g_16, t);
  }
  t = s_121;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm q_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_109(t);
      t = g_109(t);
      LocalPopChoice(u_56);
    }
  else
    {
      t = q_56;
      t = g_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL;
  a_122 = t;
  t = a_130(t);
  z_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_121, term_z_55);
  {
    ATerm w_56 = t;
    int x_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_122 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_57 = ATgetArgument(t, 0);
            ATerm d_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_55;
        j_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_121, term_z_55);
        t = u_12(z_121, j_122, t);
        LocalPopChoice(x_56);
      }
    else
      {
        t = w_56;
        t = (ATerm) ATempty;
      }
  }
  b_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_121, term_z_55, (ATerm) ATinsert(CheckATermList(b_122), (ATerm) ATempty));
  t = lookup_table_0_1(z_121, t);
  f_122 = t;
  t = term_z_55;
  c_122 = t;
  t = (ATerm) ATinsert(CheckATermList(b_122), (ATerm) ATempty);
  d_122 = t;
  t = f_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(c_122, d_122, e_122, t);
  t = a_122;
  return(t);
}
ATerm scope_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  static ATerm h_16 (ATerm t)
  {
    t = end_scope_1_0(c_130, t);
    return(t);
  }
  t = begin_scope_1_0(c_130, t);
  t = restore_always_2_0(d_130, h_16, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_r_55;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL,l_27 = NULL;
  r_122 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_122);
  o_122 = t;
  t = p_122;
  t = map_1_0(k_16, t);
  q_122 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_122);
  l_27 = t;
  t = SSLsetAnnotations(l_27, o_122);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm e_123 = NULL,f_123 = NULL;
  f_123 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      e_123 = ATgetArgument(t, 0);
      {
        ATerm e_57 = t;
        int f_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_52 = NULL,z_52 = NULL,j_27 = NULL;
            t = SSLgetAnnotations(f_123);
            t_52 = t;
            t = e_123;
            t = map_1_0(l_16, t);
            z_52 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, z_52);
            j_27 = t;
            t = SSLsetAnnotations(j_27, t_52);
            LocalPopChoice(f_57);
          }
        else
          {
            t = e_57;
            t = f_123;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          e_123 = ATgetArgument(t, 0);
          {
            ATerm i_57 = t;
            int j_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_53 = NULL,y_53 = NULL,k_27 = NULL;
                t = SSLgetAnnotations(f_123);
                r_53 = t;
                t = e_123;
                t = map_1_0(m_16, t);
                y_53 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, y_53);
                k_27 = t;
                t = SSLsetAnnotations(k_27, r_53);
                LocalPopChoice(j_57);
              }
            else
              {
                t = i_57;
                t = f_123;
              }
          }
        }
      else
        {
          t = f_123;
        }
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm k_57 = t;
  int l_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(l_57);
    }
  else
    {
      t = k_57;
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm m_57 = t;
  int n_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(n_57);
    }
  else
    {
      t = m_57;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(i_16, j_16, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_123 = NULL,n_123 = NULL,o_123 = NULL;
  m_123 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_123;
    }
  else
    {
      static ATerm n_16 (ATerm t)
      {
        t = not_null(o_123);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_123 = ATgetFirst((ATermList) t);
          if(((o_123 != NULL) && (o_123 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_123;
      t = at_end_1_0(n_16, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL;
  i_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_124;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_124 = ATgetFirst((ATermList) t);
          k_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_57 = t;
        int p_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_54 = NULL,u_54 = NULL,v_54 = NULL,o_28 = NULL;
            t = SSLgetAnnotations(i_124);
            k_54 = t;
            t = j_124;
            t = y_124(t);
            u_54 = t;
            t = k_124;
            t = filter_1_0(y_124, t);
            v_54 = t;
            t = (ATerm) ATinsert(CheckATermList(v_54), u_54);
            o_28 = t;
            t = SSLsetAnnotations(o_28, k_54);
            LocalPopChoice(p_57);
          }
        else
          {
            t = o_57;
            t = k_124;
            t = filter_1_0(y_124, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  static ATerm b_125 (ATerm t)
  {
    ATerm x_124 = NULL,z_124 = NULL,a_125 = NULL;
    a_125 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_124 = ATgetFirst((ATermList) t);
        z_124 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_55 = NULL,n_55 = NULL,q_28 = NULL;
          t = SSLgetAnnotations(a_125);
          i_55 = t;
          t = z_124;
          t = b_125(t);
          n_55 = t;
          t = (ATerm) ATinsert(CheckATermList(n_55), x_124);
          q_28 = t;
          t = SSLsetAnnotations(q_28, i_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_125;
        t = m_117(t);
      }
    return(t);
  }
  t = b_125(t);
  return(t);
}
static ATerm n_125 (ATerm f_125, ATerm t)
{
  ATerm g_125 = NULL;
  t = SSL_explode_term(f_125);
  if(match_cons(t, sym__2))
    {
      ATerm q_57 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_57) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_125;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_125 = NULL,j_125 = NULL,k_125 = NULL;
  k_125 = t;
  if(match_cons(t, sym__2))
    {
      i_125 = ATgetArgument(t, 0);
      j_125 = ATgetArgument(t, 1);
      {
        ATerm r_57 = t;
        int t_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_16 (ATerm t)
            {
              t = j_125;
              return(t);
            }
            t = i_125;
            t = at_end_1_0(o_16, t);
            LocalPopChoice(t_57);
          }
        else
          {
            t = r_57;
            t = n_125(k_125, t);
          }
      }
    }
  else
    {
      t = n_125(k_125, t);
    }
  return(t);
}
static ATerm g_12 (ATerm m_35, ATerm y_34, ATerm t)
{
  ATerm o_125 = NULL,p_125 = NULL;
  static ATerm p_16 (ATerm t)
  {
    ATerm q_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL;
    t_125 = t;
    t = SSL_explode_term(t_125);
    if(match_cons(t, sym__2))
      {
        if(((o_125 != NULL) && (o_125 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          o_125 = ATgetArgument(t, 0);
        {
          ATerm u_57 = ATgetArgument(t, 1);
          if(((ATgetType(u_57) == AT_LIST) && !(ATisEmpty(u_57))))
            {
              q_125 = ATgetFirst((ATermList) u_57);
              {
                ATerm v_57 = (ATerm) ATgetNext((ATermList) u_57);
                if(((ATgetType(v_57) != AT_LIST) || !(ATisEmpty(v_57))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_125, not_null(p_125));
    t = conc_0_0(t);
    r_125 = t;
    t = (ATerm) ATinsert(ATempty, r_125);
    s_125 = t;
    t = SSL_mkterm(o_125, s_125);
    return(t);
  }
  t = SSL_explode_term(m_35);
  if(match_cons(t, sym__2))
    {
      if(((o_125 != NULL) && (o_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_125 = ATgetArgument(t, 0);
      {
        ATerm x_57 = ATgetArgument(t, 1);
        if(((ATgetType(x_57) == AT_LIST) && !(ATisEmpty(x_57))))
          {
            if(((p_125 != NULL) && (p_125 != ATgetFirst((ATermList) x_57))))
              _fail(ATgetFirst((ATermList) x_57));
            else
              p_125 = ATgetFirst((ATermList) x_57);
            {
              ATerm a_58 = (ATerm) ATgetNext((ATermList) x_57);
              if(((ATgetType(a_58) != AT_LIST) || !(ATisEmpty(a_58))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_34;
  t = fetch_1_0(p_16, t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm t)
{
  ATerm v_125 = NULL,w_125 = NULL,x_125 = NULL;
  v_125 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_125;
      t = w_123(t);
    }
  else
    {
      ATerm a_126 = NULL,b_126 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_125 = ATgetFirst((ATermList) t);
          x_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_125;
      t = y_123(t);
      a_126 = t;
      t = x_125;
      t = foldr_3_0(w_123, x_123, y_123, t);
      b_126 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_126, b_126);
      t = x_123(t);
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_58), term_f_58), term_e_58);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm i_126 = NULL,j_126 = NULL;
  if(match_cons(t, sym__2))
    {
      i_126 = ATgetArgument(t, 0);
      j_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(i_126, j_126, t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm k_126 = NULL,l_126 = NULL;
  l_126 = t;
  if(match_cons(t, sym_Signature_1))
    {
      k_126 = ATgetArgument(t, 0);
      {
        ATerm k_58 = t;
        int l_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_126 = NULL;
            t = k_126;
            t = filter_1_0(u_16, t);
            t = concat_0_0(t);
            n_126 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_126);
            LocalPopChoice(l_58);
          }
        else
          {
            t = k_58;
            t = l_126;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          k_126 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, k_126);
        }
      else
        {
          t = l_126;
        }
    }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm o_126 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      o_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_126;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL,e_29 = NULL;
  h_126 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_126);
  e_126 = t;
  t = f_126;
  t = foldr_3_0(q_16, s_16, t_16, t);
  g_126 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_126);
  e_29 = t;
  t = SSLsetAnnotations(e_29, e_126);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm n_58 = t;
  int o_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(o_58);
    }
  else
    {
      t = n_58;
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm i_127 = NULL,j_127 = NULL,k_127 = NULL,l_127 = NULL,m_127 = NULL;
  m_127 = t;
  if(match_cons(t, sym_LRule_1))
    {
      l_127 = ATgetArgument(t, 0);
      t = l_127;
      if(match_cons(t, sym_Rule_3))
        {
          i_127 = ATgetArgument(t, 0);
          j_127 = ATgetArgument(t, 1);
          k_127 = ATgetArgument(t, 2);
          {
            ATerm p_58 = t;
            int q_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_127 = NULL;
                t = i_127;
                t = free_vars_3_0(x_16, y_16, tboundin_3_0, t);
                q_127 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, q_127, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_127, j_127, k_127)));
                LocalPopChoice(q_58);
              }
            else
              {
                t = p_58;
                t = m_127;
              }
          }
        }
      else
        {
          t = m_127;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          l_127 = ATgetArgument(t, 0);
          {
            ATerm s_58 = t;
            int t_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_128 = NULL;
                t = l_127;
                t = free_vars_3_0(a_17, b_17, tboundin_3_0, t);
                o_128 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, o_128, l_127);
                LocalPopChoice(t_58);
              }
            else
              {
                t = s_58;
                t = m_127;
              }
          }
        }
      else
        {
          t = m_127;
        }
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm r_127 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_127);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm u_58 = t;
  int x_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_58);
    }
  else
    {
      t = u_58;
      {
        ATerm y_58 = t;
        int e_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_59);
          }
        else
          {
            t = y_58;
            {
              ATerm f_59 = t;
              int g_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_127 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_127 = ATgetArgument(t, 0);
                      u_127 = ATgetArgument(t, 1);
                      v_127 = ATgetArgument(t, 2);
                      w_127 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_127;
                  t = map_1_0(z_16, t);
                  LocalPopChoice(g_59);
                }
              else
                {
                  t = f_59;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm i_128 = NULL;
  ATerm h_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_128 = ATgetArgument(t, 0);
          {
            ATerm l_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_59);
      t = i_128;
    }
  else
    {
      t = h_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_128;
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm p_128 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_128);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm m_59 = t;
  int n_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_59);
    }
  else
    {
      t = m_59;
      {
        ATerm o_59 = t;
        int p_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_59);
          }
        else
          {
            t = o_59;
            {
              ATerm q_59 = t;
              int r_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_128 = ATgetArgument(t, 0);
                      s_128 = ATgetArgument(t, 1);
                      t_128 = ATgetArgument(t, 2);
                      u_128 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_128;
                  t = map_1_0(c_17, t);
                  LocalPopChoice(r_59);
                }
              else
                {
                  t = q_59;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm b_129 = NULL;
  ATerm s_59 = t;
  int t_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_129 = ATgetArgument(t, 0);
          {
            ATerm u_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_59);
      t = b_129;
    }
  else
    {
      t = s_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_129;
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm v_59 = t;
  int w_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(w_59);
    }
  else
    {
      t = v_59;
    }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm l_129 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      l_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, l_129)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL,g_30 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(v_16, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(w_16, t);
  {
    ATerm x_59 = t;
    int y_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_129 = NULL,h_129 = NULL,i_129 = NULL;
        g_129 = t;
        t = term_a_60;
        h_129 = t;
        t = term_b_60;
        i_129 = t;
        t = term_g_60;
        t = u_12(h_129, i_129, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = g_129;
        LocalPopChoice(y_59);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = x_59;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(d_17, t);
  f_127 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_127);
  c_127 = t;
  t = d_127;
  t = fetch_1_0(e_17, t);
  e_127 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_127);
  g_30 = t;
  t = SSLsetAnnotations(g_30, c_127);
  return(t);
}
static ATerm h_12 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm m_129 = NULL;
  t = SSL_fputc(e_40, f_40);
  m_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_129);
  return(t);
}
static ATerm i_12 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm n_129 = NULL;
  t = SSL_write_term_to_stream_text(i_24, j_24);
  n_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_129);
  return(t);
}
static ATerm k_12 (ATerm m_116 (ATerm), ATerm v_182, ATerm o_24, ATerm t)
{
  ATerm o_129 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_182, term_i_60);
  t = o_12(t);
  o_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_129, o_24);
  t = m_116(t);
  t = fclose_0_0(t);
  t = o_24;
  return(t);
}
static ATerm j_12 (ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm p_129 = NULL;
  t = SSL_write_term_to_stream_baf(e_24, f_24);
  p_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_129);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm w_129 = NULL,x_129 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_60 = ATgetArgument(t, 0);
      if(match_cons(l_60, sym_Stream_1))
        {
          w_129 = ATgetArgument(l_60, 0);
        }
      else
        _fail(t);
      x_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(w_129, x_129, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL,f_130 = NULL,h_130 = NULL,i_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_60 = ATgetArgument(t, 0);
      if(match_cons(m_60, sym_Stream_1))
        {
          h_130 = ATgetArgument(m_60, 0);
        }
      else
        _fail(t);
      i_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(h_130, i_130, t);
  y_129 = t;
  t = term_d_26;
  z_129 = t;
  t = y_129;
  if(match_cons(t, sym_Stream_1))
    {
      f_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, y_129);
  t = h_12(z_129, f_130, t);
  return(t);
}
ATerm output_1_0 (ATerm v_135 (ATerm), ATerm t)
{
  ATerm q_129 = NULL,r_129 = NULL;
  t = v_135(t);
  r_129 = t;
  {
    ATerm o_60 = t;
    int r_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_129 = NULL,t_129 = NULL;
        t = term_a_60;
        s_129 = t;
        t = term_s_60;
        t_129 = t;
        t = term_t_60;
        t = u_12(s_129, t_129, t);
        LocalPopChoice(r_60);
      }
    else
      {
        t = o_60;
        t = term_b_61;
      }
  }
  q_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_129, r_129);
  {
    ATerm f_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_129 = NULL,v_129 = NULL;
        t = term_a_60;
        u_129 = t;
        t = term_j_61;
        v_129 = t;
        t = term_k_61;
        t = u_12(u_129, v_129, t);
        t = (ATerm) ATmakeAppl(sym__2, q_129, r_129);
        LocalPopChoice(h_61);
        if(match_cons(t, sym__2))
          {
            ATerm m_61 = ATgetArgument(t, 0);
            ATerm n_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_12(f_17, q_129, r_129, t);
      }
    else
      {
        t = f_61;
        if(match_cons(t, sym__2))
          {
            ATerm o_61 = ATgetArgument(t, 0);
            ATerm p_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_12(g_17, q_129, r_129, t);
      }
  }
  return(t);
}
static ATerm w_130 (ATerm q_130, ATerm t)
{
  t = SSL_fclose(q_130);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_130 = NULL,u_130 = NULL;
  u_130 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_130 = ATgetArgument(t, 0);
      {
        ATerm v_61 = t;
        int b_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_130);
            LocalPopChoice(b_62);
          }
        else
          {
            t = v_61;
            t = w_130(u_130, t);
          }
      }
    }
  else
    {
      t = w_130(u_130, t);
    }
  return(t);
}
static ATerm l_12 (ATerm k_24, ATerm t)
{
  t = SSL_read_term_from_stream(k_24);
  return(t);
}
static ATerm m_12 (ATerm x_38, ATerm y_38, ATerm t)
{
  t = SSL_strcat(x_38, y_38);
  return(t);
}
static ATerm n_12 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm x_130 = NULL;
  t = SSL_fopen(g_40, h_40);
  x_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_130);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_130 = NULL;
  t = SSL_stdin_stream();
  y_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_130);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_130 = NULL;
  t = SSL_stdout_stream();
  z_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_130);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_131 = NULL;
  t = SSL_stderr_stream();
  a_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_131);
  return(t);
}
static ATerm h_132 (ATerm g_131, ATerm t)
{
  ATerm h_131 = NULL;
  t = SSL_explode_term(g_131);
  if(match_cons(t, sym__2))
    {
      ATerm c_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_62 = ATgetArgument(t, 1);
        if(((ATgetType(d_62) == AT_LIST) && !(ATisEmpty(d_62))))
          {
            h_131 = ATgetFirst((ATermList) d_62);
            {
              ATerm i_62 = (ATerm) ATgetNext((ATermList) d_62);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_131;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_131;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_131;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_131;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_132 (ATerm k_131, ATerm l_131, ATerm m_131, ATerm t)
{
  ATerm n_131 = NULL,o_131 = NULL,p_131 = NULL,s_131 = NULL,n_30 = NULL;
  t = SSLgetAnnotations(m_131);
  p_131 = t;
  t = k_131;
  if(match_cons(t, sym_Path_1))
    {
      s_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_131, l_131);
  n_30 = t;
  t = SSLsetAnnotations(n_30, p_131);
  if(match_cons(t, sym__2))
    {
      n_131 = ATgetArgument(t, 0);
      o_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(n_131, o_131, t);
  return(t);
}
static ATerm j_132 (ATerm u_131, ATerm v_131, ATerm w_131, ATerm t)
{
  ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL,c_132 = NULL,o_30 = NULL;
  t = SSLgetAnnotations(w_131);
  z_131 = t;
  t = SSL_is_string(u_131);
  c_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_132, v_131);
  o_30 = t;
  t = SSLsetAnnotations(o_30, z_131);
  if(match_cons(t, sym__2))
    {
      x_131 = ATgetArgument(t, 0);
      y_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(x_131, y_131, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL;
  e_132 = t;
  if(match_cons(t, sym__2))
    {
      f_132 = ATgetArgument(t, 0);
      g_132 = ATgetArgument(t, 1);
      {
        ATerm j_62 = t;
        int l_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_132(e_132, t);
            LocalPopChoice(l_62);
          }
        else
          {
            t = j_62;
            {
              ATerm p_62 = t;
              int q_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_132(f_132, g_132, e_132, t);
                  LocalPopChoice(q_62);
                }
              else
                {
                  t = p_62;
                  t = j_132(f_132, g_132, e_132, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_132(e_132, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_132 = NULL,m_132 = NULL,n_132 = NULL,s_132 = NULL;
  s_132 = t;
  {
    ATerm r_62 = t;
    int s_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_132, term_t_62);
        t = o_12(t);
        LocalPopChoice(s_62);
      }
    else
      {
        t = r_62;
        {
          ATerm i_56 = NULL,j_56 = NULL;
          t = term_u_62;
          j_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_62, s_132);
          t = m_12(j_56, s_132, t);
          i_56 = t;
          t = SSL_perror(i_56);
          _fail(t);
        }
      }
  }
  m_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(n_132, t);
  l_132 = t;
  t = m_132;
  t = fclose_0_0(t);
  t = l_132;
  return(t);
}
ATerm input_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm y_62 = t;
  int b_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_132 = NULL,x_132 = NULL;
      t = term_a_60;
      v_132 = t;
      t = term_c_63;
      x_132 = t;
      t = term_e_63;
      t = u_12(v_132, x_132, t);
      LocalPopChoice(b_63);
    }
  else
    {
      t = y_62;
      t = term_g_63;
    }
  t = ReadFromFile_0_0(t);
  t = w_135(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_132 = NULL,z_132 = NULL,a_133 = NULL,b_133 = NULL,c_133 = NULL;
  y_132 = t;
  t = term_h_63;
  t = whoami_0_0(t);
  z_132 = t;
  t = term_w_36;
  b_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_63), z_132), term_i_63);
  c_133 = t;
  t = SSL_printnl(b_133, c_133);
  t = term_z_36;
  a_133 = t;
  t = SSL_exit(a_133);
  t = y_132;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm e_133 = NULL;
  e_133 = t;
  if(match_string(t, "-k"))
    {
      t = e_133;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_133;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm f_133 = NULL,g_133 = NULL,h_133 = NULL;
  f_133 = t;
  t = SSL_string_to_int(f_133);
  g_133 = t;
  t = term_k_63;
  h_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_63, g_133);
  t = x_12(h_133, g_133, t);
  t = f_133;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_l_63;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_17, i_17, j_17, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm j_133 = NULL;
  j_133 = t;
  if(match_string(t, "-S"))
    {
      t = j_133;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_133;
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm k_133 = NULL,l_133 = NULL;
  t = term_n_63;
  k_133 = t;
  t = term_p_63;
  l_133 = t;
  t = term_q_63;
  t = x_12(k_133, l_133, t);
  t = term_r_63;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm m_133 = NULL,n_133 = NULL,o_133 = NULL;
  m_133 = t;
  t = SSL_string_to_int(m_133);
  n_133 = t;
  t = term_n_63;
  o_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_63, n_133);
  t = x_12(o_133, n_133, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_133);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL;
  t = term_u_63;
  p_133 = t;
  t = term_h_63;
  q_133 = t;
  t = term_v_63;
  t = x_12(p_133, q_133, t);
  t = term_d_64;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_h_64;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_64 = t;
  int j_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_17, l_17, m_17, t);
      LocalPopChoice(j_64);
    }
  else
    {
      t = i_64;
      {
        ATerm k_64 = t;
        int l_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_17, o_17, p_17, t);
            LocalPopChoice(l_64);
          }
        else
          {
            t = k_64;
            t = Option_3_0(q_17, r_17, s_17, t);
          }
      }
    }
  return(t);
}
static ATerm x_12 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm r_133 = NULL,s_133 = NULL;
  t = term_a_60;
  r_133 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_60, j_55, k_55);
  t = lookup_table_0_1(r_133, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(j_55, k_55, s_133, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_60, j_55, k_55);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_133 = NULL,x_133 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_133 = NULL,z_133 = NULL,a_134 = NULL;
      t = term_h_63;
      t = i_0(t);
      y_133 = t;
      t = term_m_64;
      z_133 = t;
      t = term_n_64;
      a_134 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_64, term_n_64, y_133);
      t = v_12(z_133, a_134, y_133, t);
      _fail(t);
    }
  else
    {
      ATerm d_134 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_133 = ATgetFirst((ATermList) t);
          x_133 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_133;
      t = d_0(t);
      t = term_h_63;
      t = g_0(t);
      d_134 = t;
      t = (ATerm) ATinsert(CheckATermList(x_133), d_134);
    }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm f_134 = NULL;
  f_134 = t;
  if(match_string(t, "-o"))
    {
      t = f_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_134;
    }
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL;
  g_134 = t;
  t = term_s_60;
  h_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_60, g_134);
  t = x_12(h_134, g_134, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_134);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_o_64;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_17, u_17, v_17, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm j_134 = NULL;
  j_134 = t;
  if(match_string(t, "-i"))
    {
      t = j_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_134;
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm k_134 = NULL,l_134 = NULL;
  k_134 = t;
  t = term_c_63;
  l_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_63, k_134);
  t = x_12(l_134, k_134, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_134);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_p_64;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_17, y_17, z_17, t);
  return(t);
}
static ATerm v_12 (ATerm e_60, ATerm f_60, ATerm d_60, ATerm t)
{
  ATerm n_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL;
  n_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
  {
    ATerm q_64 = t;
    int r_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_64 = ATgetArgument(t, 0);
            ATerm t_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
        t = u_12(e_60, f_60, t);
        LocalPopChoice(r_64);
      }
    else
      {
        t = q_64;
        t = (ATerm) ATempty;
      }
  }
  o_134 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_60, f_60, (ATerm) ATinsert(CheckATermList(o_134), d_60));
  t = lookup_table_0_1(e_60, t);
  r_134 = t;
  t = (ATerm) ATinsert(CheckATermList(o_134), d_60);
  p_134 = t;
  t = r_134;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(f_60, p_134, q_134, t);
  t = n_134;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL,b_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_135 = NULL,d_135 = NULL,e_135 = NULL;
      t = term_h_63;
      t = t_0(t);
      c_135 = t;
      t = term_m_64;
      d_135 = t;
      t = term_n_64;
      e_135 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_64, term_n_64, c_135);
      t = v_12(d_135, e_135, c_135, t);
      _fail(t);
    }
  else
    {
      ATerm i_135 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_134 = ATgetFirst((ATermList) t);
          z_134 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_134;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_135 = ATgetFirst((ATermList) t);
          b_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_134;
      t = o_0(t);
      t = a_135;
      t = r_0(t);
      i_135 = t;
      t = (ATerm) ATinsert(CheckATermList(b_135), i_135);
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm k_135 = NULL,l_135 = NULL;
  k_135 = t;
  if(match_string(t, "old"))
    {
      t = k_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = k_135;
    }
  t = term_b_60;
  l_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_60, k_135);
  t = x_12(l_135, k_135, t);
  t = term_h_63;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_u_64;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_18, b_18, c_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_135 = NULL,t_135 = NULL,u_135 = NULL,x_135 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_63;
  t = whoami_0_0(t);
  s_135 = t;
  t = term_w_36;
  u_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_64), s_135);
  x_135 = t;
  t = SSL_printnl(u_135, x_135);
  t = term_z_36;
  t_135 = t;
  t = SSL_exit(t_135);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_135 = NULL,z_135 = NULL;
  t = term_a_60;
  y_135 = t;
  t = term_x_64;
  z_135 = t;
  t = term_y_64;
  t = u_12(y_135, z_135, t);
  return(t);
}
static ATerm p_12 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm z_64 = t;
  int a_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_43, b_43);
      LocalPopChoice(a_65);
    }
  else
    {
      t = z_64;
      t = SSL_addr(a_43, b_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm t)
{
  ATerm b_136 = NULL,c_136 = NULL,d_136 = NULL;
  b_136 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_136;
      t = u_123(t);
    }
  else
    {
      ATerm g_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_136 = ATgetFirst((ATermList) t);
          d_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_136;
      t = foldr_2_0(u_123, v_123, t);
      g_136 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_136, g_136);
      t = v_123(t);
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
  t = term_p_63;
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL;
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12(z_56, a_57, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_136 = NULL,r_56 = NULL,v_56 = NULL;
  t = times_0_0(t);
  v_56 = t;
  t = SSL_explode_term(v_56);
  if(match_cons(t, sym__2))
    {
      ATerm b_65 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_56;
  t = foldr_2_0(d_18, g_18, t);
  j_136 = t;
  t = SSL_TicksToSeconds(j_136);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL;
  u_136 = t;
  if(match_cons(t, sym__2))
    {
      v_136 = ATgetArgument(t, 0);
      w_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_65 = t;
    int d_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_136;
        if((v_136 != t))
          {
            _fail(t);
          }
        t = u_136;
        LocalPopChoice(d_65);
      }
    else
      {
        t = c_65;
        t = (ATerm) ATmakeAppl(sym__2, v_136, w_136);
        {
          ATerm e_65 = t;
          int f_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_136, w_136);
              LocalPopChoice(f_65);
            }
          else
            {
              t = e_65;
              t = SSL_gtr(v_136, w_136);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_136, w_136);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_132 (ATerm), ATerm t)
{
  ATerm a_137 = NULL;
  a_137 = t;
  {
    ATerm g_65 = t;
    int h_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL;
        t = term_a_60;
        d_137 = t;
        t = term_n_63;
        e_137 = t;
        t = term_i_65;
        t = u_12(d_137, e_137, t);
        c_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_137, term_z_36);
        t = geq_0_0(t);
        t = a_137;
        t = w_132(t);
        LocalPopChoice(h_65);
      }
    else
      {
        t = g_65;
        t = a_137;
      }
  }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm g_137 = NULL,h_137 = NULL,j_137 = NULL,k_137 = NULL;
  t = run_time_0_0(t);
  g_137 = t;
  t = term_h_63;
  t = whoami_0_0(t);
  h_137 = t;
  t = term_w_36;
  j_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_65), g_137), term_j_65), h_137);
  k_137 = t;
  t = SSL_printnl(j_137, k_137);
  t = (ATerm) ATmakeAppl(sym__2, term_w_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_65), g_137), term_j_65), h_137));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_63;
  l_137 = t;
  t = SSL_exit(l_137);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm x_137 = NULL,y_137 = NULL;
  y_137 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_137;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_137 = ATgetArgument(t, 0);
          {
            ATerm w_57 = NULL,v_30 = NULL;
            t = SSLgetAnnotations(y_137);
            w_57 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_137);
            v_30 = t;
            t = SSLsetAnnotations(v_30, w_57);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_137;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm l_65 = t;
  int m_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_137 = NULL,r_137 = NULL;
      t = term_a_60;
      q_137 = t;
      t = term_n_65;
      r_137 = t;
      t = term_o_65;
      t = u_12(q_137, r_137, t);
      LocalPopChoice(m_65);
    }
  else
    {
      t = l_65;
      t = fetch_1_0(l_18, t);
    }
  t = m_135(t);
  return(t);
}
static ATerm y_12 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm t)
{
  ATerm a_138 = NULL;
  t = SSL_hashtable_put(y_63, w_63, x_63);
  a_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_138);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_61, ATerm t)
{
  ATerm j_138 = NULL;
  t = table_hashtable_0_0(t);
  j_138 = t;
  {
    ATerm p_65 = t;
    int q_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL;
        t = j_138;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_12(q_61, m_58, t);
        LocalPopChoice(q_65);
      }
    else
      {
        t = p_65;
        {
          ATerm r_58 = NULL;
          t = q_61;
          t = table_create_0_0(t);
          t = j_138;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_12(q_61, r_58, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_64, ATerm f_64, ATerm t)
{
  ATerm m_138 = NULL;
  t = SSL_hashtable_create(e_64, f_64);
  m_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_138);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_138 = NULL,o_138 = NULL,p_138 = NULL,r_138 = NULL,s_138 = NULL;
  n_138 = t;
  t = term_r_65;
  r_138 = t;
  t = term_s_65;
  s_138 = t;
  t = n_138;
  t = new_hashtable_0_2(r_138, s_138, t);
  o_138 = t;
  t = n_138;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(n_138, o_138, p_138, t);
  t = n_138;
  return(t);
}
static ATerm r_12 (ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm t_138 = NULL;
  t = SSL_hashtable_remove(c_64, b_64);
  t_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_138);
  return(t);
}
static ATerm s_12 (ATerm g_64, ATerm t)
{
  ATerm u_138 = NULL;
  t = SSL_hashtable_destroy(g_64);
  u_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_138);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_138 = NULL;
  t = SSL_table_hashtable();
  v_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_138);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL;
  w_138 = t;
  t = table_hashtable_0_0(t);
  x_138 = t;
  t = lookup_table_0_1(w_138, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(z_138, t);
  t = x_138;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(w_138, y_138, t);
  t = w_138;
  return(t);
}
ATerm map_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm o_139 (ATerm t)
  {
    ATerm l_139 = NULL,m_139 = NULL,n_139 = NULL;
    l_139 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_139;
      }
    else
      {
        ATerm d_59 = NULL,i_59 = NULL,j_59 = NULL,a_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_139 = ATgetFirst((ATermList) t);
            n_139 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_139);
        d_59 = t;
        t = m_139;
        t = v_116(t);
        i_59 = t;
        t = n_139;
        t = o_139(t);
        j_59 = t;
        t = (ATerm) ATinsert(CheckATermList(j_59), i_59);
        a_31 = t;
        t = SSLsetAnnotations(a_31, d_59);
      }
    return(t);
  }
  t = o_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_139 = ATgetFirst((ATermList) t);
      s_139 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_139 = NULL,x_139 = NULL;
        static ATerm m_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_139)), not_null(x_139));
          return(t);
        }
        t = s_139;
        t = n_0(t);
        if(((w_139 != NULL) && (w_139 != t)))
          _fail(t);
        else
          w_139 = t;
        t = r_139;
        t = k_0(t);
        if(((x_139 != NULL) && (x_139 != t)))
          _fail(t);
        else
          x_139 = t;
        t = s_139;
        t = reverse_acc_2_0(k_0, m_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_63;
      t = n_0(t);
    }
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,d_31 = NULL;
  j_140 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_140);
  h_140 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_140);
  d_31 = t;
  t = SSLsetAnnotations(d_31, h_140);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm l_140 = NULL;
  l_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_140), term_t_65);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL;
  ATerm u_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_140 = NULL,g_140 = NULL;
      t = term_a_60;
      f_140 = t;
      t = term_x_64;
      g_140 = t;
      t = term_y_64;
      t = u_12(f_140, g_140, t);
      LocalPopChoice(v_65);
    }
  else
    {
      t = u_65;
      t = fetch_1_0(n_18, t);
    }
  t = term_w_65;
  t = echo_0_0(t);
  t = term_m_64;
  z_139 = t;
  t = term_n_64;
  a_140 = t;
  t = term_x_65;
  t = u_12(z_139, a_140, t);
  t = reverse_acc_2_0(_id, q_18, t);
  t = map_1_0(r_18, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_117 (ATerm), ATerm t)
{
  static ATerm i_141 (ATerm t)
  {
    ATerm f_141 = NULL,g_141 = NULL,h_141 = NULL;
    f_141 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_141 = ATgetFirst((ATermList) t);
        h_141 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_65 = t;
      int z_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_59 = NULL,c_60 = NULL,f_31 = NULL;
          t = SSLgetAnnotations(f_141);
          z_59 = t;
          t = g_141;
          t = f_117(t);
          c_60 = t;
          t = (ATerm) ATinsert(CheckATermList(h_141), c_60);
          f_31 = t;
          t = SSLsetAnnotations(f_31, z_59);
          LocalPopChoice(z_65);
        }
      else
        {
          t = y_65;
          {
            ATerm a_61 = NULL,i_61 = NULL,g_31 = NULL;
            t = SSLgetAnnotations(f_141);
            a_61 = t;
            t = h_141;
            t = i_141(t);
            i_61 = t;
            t = (ATerm) ATinsert(CheckATermList(i_61), g_141);
            g_31 = t;
            t = SSLsetAnnotations(g_31, a_61);
          }
        }
    }
    return(t);
  }
  t = i_141(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_141 = NULL,n_141 = NULL,o_141 = NULL;
  m_141 = t;
  {
    ATerm a_66 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_141;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_66 = ATgetFirst((ATermList) t);
                ATerm d_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_141;
          }
        LocalPopChoice(b_66);
      }
    else
      {
        t = a_66;
        t = (ATerm) ATinsert(ATempty, m_141);
      }
  }
  n_141 = t;
  t = term_b_61;
  o_141 = t;
  t = SSL_printnl(o_141, n_141);
  t = m_141;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL;
  t = term_a_60;
  u_141 = t;
  t = term_x_64;
  v_141 = t;
  t = term_y_64;
  t = u_12(u_141, v_141, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_12 (ATerm z_63, ATerm a_64, ATerm t)
{
  t = SSL_hashtable_get(a_64, z_63);
  return(t);
}
static ATerm u_12 (ATerm x_61, ATerm y_61, ATerm t)
{
  ATerm w_141 = NULL;
  t = lookup_table_0_1(x_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_12(y_61, w_141, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm y_141 = NULL,z_141 = NULL;
  t = term_e_66;
  y_141 = t;
  t = term_h_63;
  z_141 = t;
  t = term_f_66;
  t = x_12(y_141, z_141, t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = term_g_66;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm a_142 = NULL,b_142 = NULL,c_142 = NULL,d_142 = NULL;
  t = term_e_66;
  c_142 = t;
  t = term_h_63;
  d_142 = t;
  t = term_f_66;
  t = x_12(c_142, d_142, t);
  t = term_h_66;
  a_142 = t;
  t = term_h_63;
  b_142 = t;
  t = term_i_66;
  t = x_12(a_142, b_142, t);
  t = term_j_66;
  return(t);
}
static ATerm g_19 (ATerm t)
{
  t = term_k_66;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_66 = t;
  int m_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_18, t_18, y_18, t);
      LocalPopChoice(m_66);
    }
  else
    {
      t = l_66;
      t = Option_3_0(b_19, e_19, g_19, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL,s_31 = NULL;
  j_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_142 = ATgetFirst((ATermList) t);
      g_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_142);
  e_142 = t;
  t = f_142;
  t = l_95(t);
  h_142 = t;
  t = g_142;
  t = m_95(t);
  i_142 = t;
  t = (ATerm) ATinsert(CheckATermList(i_142), h_142);
  s_31 = t;
  t = SSLsetAnnotations(s_31, e_142);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_137 (ATerm), ATerm t)
{
  ATerm r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL,w_142 = NULL,x_142 = NULL,u_31 = NULL;
  r_142 = t;
  {
    ATerm n_66 = t;
    int o_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_66;
        t = p_137(t);
        LocalPopChoice(o_66);
      }
    else
      {
        t = n_66;
      }
  }
  t = r_142;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_142 = ATgetFirst((ATermList) t);
      u_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_142);
  s_142 = t;
  t = term_x_64;
  x_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_64, t_142);
  t = x_12(x_142, t_142, t);
  t = u_142;
  {
    static ATerm o_143 (ATerm t)
    {
      ATerm q_66 = t;
      int r_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_66 = t;
          int t_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_143 = NULL;
              h_143 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_143;
              LocalPopChoice(t_66);
            }
          else
            {
              t = s_66;
              t = p_137(t);
              t = Cons_2_0(_id, o_143, t);
            }
          LocalPopChoice(r_66);
        }
      else
        {
          t = q_66;
          {
            ATerm k_143 = NULL,l_143 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_143 = ATgetFirst((ATermList) t);
                l_143 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_143), (ATerm) ATmakeAppl(sym_Undefined_1, k_143));
          }
        }
      return(t);
    }
    t = o_143(t);
  }
  w_142 = t;
  t = (ATerm) ATinsert(CheckATermList(w_142), (ATerm) ATmakeAppl(sym_Program_1, t_142));
  u_31 = t;
  t = SSLsetAnnotations(u_31, s_142);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm b_144 = NULL;
  b_144 = t;
  if(match_string(t, "--help"))
    {
      t = b_144;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_144;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_144;
        }
    }
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm c_144 = NULL,e_144 = NULL;
  t = term_n_65;
  c_144 = t;
  t = term_h_63;
  e_144 = t;
  t = term_u_66;
  t = x_12(c_144, e_144, t);
  t = term_w_66;
  return(t);
}
static ATerm o_19 (ATerm t)
{
  t = term_x_66;
  return(t);
}
static ATerm q_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm t_143 = NULL,u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL,y_143 = NULL,z_143 = NULL,a_144 = NULL;
  v_143 = t;
  t = term_m_64;
  w_143 = t;
  t = term_y_66;
  t = lookup_table_0_1(w_143, t);
  a_144 = t;
  t = term_n_64;
  x_143 = t;
  t = (ATerm) ATempty;
  y_143 = t;
  t = a_144;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(x_143, y_143, z_143, t);
  t = v_143;
  {
    static ATerm j_19 (ATerm t)
    {
      ATerm z_66 = t;
      int a_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_137(t);
          LocalPopChoice(a_67);
        }
      else
        {
          t = z_66;
          {
            ATerm b_67 = t;
            int c_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_19, n_19, o_19, t);
                LocalPopChoice(c_67);
              }
            else
              {
                t = b_67;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_19, t);
  }
  {
    ATerm d_67 = t;
    int e_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_144 = NULL;
        p_144 = t;
        {
          ATerm i_67 = t;
          int j_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_61 = NULL;
              t = p_144;
              {
                ATerm k_67 = t;
                int l_67 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_61 = NULL,t_61 = NULL;
                    t = term_a_60;
                    s_61 = t;
                    t = term_n_65;
                    t_61 = t;
                    t = term_o_65;
                    t = u_12(s_61, t_61, t);
                    LocalPopChoice(l_67);
                  }
                else
                  {
                    t = k_67;
                    t = fetch_1_0(q_19, t);
                  }
              }
              t = p_144;
              t = default_system_usage_0_0(t);
              t = term_p_63;
              r_61 = t;
              t = SSL_exit(r_61);
              LocalPopChoice(j_67);
            }
          else
            {
              t = i_67;
              {
                ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
                t = term_a_60;
                f_62 = t;
                t = term_e_66;
                g_62 = t;
                t = term_m_67;
                t = u_12(f_62, g_62, t);
                t = p_144;
                t = default_system_about_0_0(t);
                t = term_p_63;
                e_62 = t;
                t = SSL_exit(e_62);
              }
            }
        }
        LocalPopChoice(e_67);
      }
    else
      {
        t = d_67;
        {
          ATerm p_67 = t;
          int u_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_144 = NULL,r_144 = NULL,s_144 = NULL;
              static ATerm v_19 (ATerm t)
              {
                ATerm t_144 = NULL,u_144 = NULL,v_144 = NULL,z_31 = NULL;
                v_144 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_144 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_144);
                t_144 = t;
                t = u_144;
                if(((t_143 != NULL) && (t_143 != t)))
                  _fail(t);
                else
                  t_143 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_144);
                z_31 = t;
                t = SSLsetAnnotations(z_31, t_144);
                return(t);
              }
              t = fetch_1_0(v_19, t);
              t = term_w_36;
              r_144 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_143)), term_y_67);
              s_144 = t;
              t = SSL_printnl(r_144, s_144);
              t = (ATerm) ATmakeAppl(sym__2, term_w_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_143)), term_y_67));
              t = default_system_usage_0_0(t);
              t = term_z_36;
              q_144 = t;
              t = SSL_exit(q_144);
              LocalPopChoice(u_67);
            }
          else
            {
              t = p_67;
            }
        }
      }
  }
  u_143 = t;
  t = term_m_64;
  t = table_destroy_0_0(t);
  t = u_143;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL,e_145 = NULL,f_145 = NULL;
  t = parse_options_1_0(o_135, t);
  b_145 = t;
  t = term_z_67;
  t = table_create_0_0(t);
  t = term_z_67;
  c_145 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_67, term_a_68, b_145);
  t = lookup_table_0_1(c_145, t);
  f_145 = t;
  t = term_a_68;
  d_145 = t;
  t = f_145;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_12(d_145, b_145, e_145, t);
  t = b_145;
  t = q_135(t);
  {
    ATerm b_68 = t;
    int c_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_135, t);
        LocalPopChoice(c_68);
      }
    else
      {
        t = b_68;
        {
          ATerm d_68 = t;
          int e_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_68);
            }
          else
            {
              t = d_68;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_19 (ATerm t)
{
  ATerm f_68 = t;
  int g_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
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
            t = input_option_0_0(t);
            LocalPopChoice(i_68);
          }
        else
          {
            t = h_68;
            {
              ATerm j_68 = t;
              int l_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(l_68);
                }
              else
                {
                  t = j_68;
                  {
                    ATerm m_68 = t;
                    int o_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_20, b_20, d_20, t);
                        LocalPopChoice(o_68);
                      }
                    else
                      {
                        t = m_68;
                        {
                          ATerm p_68 = t;
                          int s_68 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(s_68);
                            }
                          else
                            {
                              t = p_68;
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
static ATerm y_19 (ATerm t)
{
  t = input_1_0(g_20, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_20 (ATerm t)
{
  ATerm h_145 = NULL,i_145 = NULL;
  t = term_j_61;
  h_145 = t;
  t = term_h_63;
  i_145 = t;
  t = term_w_68;
  t = x_12(h_145, i_145, t);
  t = term_x_68;
  return(t);
}
static ATerm d_20 (ATerm t)
{
  t = term_y_68;
  return(t);
}
static ATerm g_20 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_19, default_usage_0_0, _id, y_19, t);
  return(t);
}

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
ATerm term_i_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_f_67;
ATerm term_e_67;
ATerm term_d_67;
ATerm term_a_67;
ATerm term_o_66;
ATerm term_n_66;
ATerm term_m_66;
ATerm term_l_66;
ATerm term_g_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_z_65;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_v_65;
ATerm term_o_65;
ATerm term_n_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_f_65;
ATerm term_e_65;
ATerm term_b_65;
ATerm term_a_65;
ATerm term_z_64;
ATerm term_o_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_d_64;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_h_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_c_63;
ATerm term_x_62;
ATerm term_w_62;
ATerm term_v_62;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_o_62;
ATerm term_m_62;
ATerm term_l_62;
ATerm term_k_62;
ATerm term_j_62;
ATerm term_c_62;
ATerm term_v_61;
ATerm term_l_60;
ATerm term_i_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_r_59;
ATerm term_q_59;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_g_55;
ATerm term_y_54;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_x_49;
ATerm term_p_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_x_43;
ATerm term_s_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_l_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_38;
ATerm term_o_38;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_d_31;
ATerm term_v_30;
ATerm term_y_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_q_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_r_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Op_2, term_n_22, (ATerm) ATempty);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_22);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_20);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Op_2, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Call_2, term_v_25, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Call_2, term_l_27, (ATerm) ATempty);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Call_2, term_r_24, (ATerm) ATempty);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_RootApp_1, term_o_20);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_k_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_35);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_36);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_36);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Closure", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_41);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Var_1, term_e_42);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("lookup-rule", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym_Build_1, term_w_23);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_42);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_43);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_44);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_46);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_46);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("rule-scope", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_49);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule:", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("label-scope", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_50);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_55);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_55);
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_r_59);
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_z_59);
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_i_60);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_j_62);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(sym__2, term_v_62, term_w_62);
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_62);
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(sym__2, term_h_63, term_m_62);
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_n_64);
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_v_62);
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_e_65);
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(sym__2, term_r_63, term_s_63);
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym__2, term_v_65, term_m_62);
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(sym__2, term_y_65, term_m_62);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(sym__2, term_e_65, term_m_62);
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(sym__3, term_r_63, term_s_63, (ATerm) ATempty);
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(sym__2, term_q_59, term_v_65);
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(sym__2, term_i_60, term_m_62);
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm e_110 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm q_10 (ATerm u_142 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm u_142 (ATerm), ATerm t);
static ATerm f_18 (ATerm n_11, ATerm r_11, ATerm t);
static ATerm g_18 (ATerm d_13, ATerm i_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm o_141 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm s_10 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t);
static ATerm x_29 (ATerm i_29, ATerm t);
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
static ATerm t_10 (ATerm v_67, ATerm w_67, ATerm x_67, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm u_10 (ATerm t_142 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm v_142 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm w_10 (ATerm y_81, ATerm x_81, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm m_58 (ATerm v_57, ATerm t);
static ATerm n_58 (ATerm x_57, ATerm t);
static ATerm c_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm o_61 (ATerm n_60, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
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
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm f_11 (ATerm b_143 (ATerm), ATerm m_85, ATerm j_85, ATerm k_85, ATerm w_85, ATerm a_86, ATerm b_86, ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm b_143 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm i_111 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm y_142 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_11 (ATerm u_83, ATerm t_83, ATerm t);
ATerm repeat_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm a_118 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
ATerm debug_1_0 (ATerm f_116 (ATerm), ATerm t);
static ATerm w_100 (ATerm t_99, ATerm u_99, ATerm v_99, ATerm w_99, ATerm y_99, ATerm a_100, ATerm b_100, ATerm t);
static ATerm e_11 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm o_11 (ATerm b_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t);
static ATerm p_11 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
static ATerm q_11 (ATerm w_120 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
ATerm genzip_4_0 (ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm v_11 (ATerm a_673, ATerm f_673, ATerm v_66, ATerm t);
ATerm while_not_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm z_118 (ATerm m_117, ATerm n_117, ATerm o_117, ATerm t);
static ATerm p_15 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm free_vars_3_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm f_110 (ATerm), ATerm t);
static ATerm z_11 (ATerm p_60, ATerm q_60, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm w_111 (ATerm), ATerm t);
static ATerm a_12 (ATerm z_129 (ATerm), ATerm o_44, ATerm m_44, ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm b_12 (ATerm j_60, ATerm k_60, ATerm t);
ATerm end_scope_1_0 (ATerm w_129 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_129 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_124 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_117 (ATerm), ATerm t);
static ATerm t_125 (ATerm l_125, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_12 (ATerm j_35, ATerm v_34, ATerm t);
ATerm foldr_3_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm f_12 (ATerm e_40, ATerm f_40, ATerm t);
static ATerm g_12 (ATerm i_24, ATerm j_24, ATerm t);
static ATerm i_12 (ATerm h_116 (ATerm), ATerm q_182, ATerm o_24, ATerm t);
static ATerm h_12 (ATerm e_24, ATerm f_24, ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm output_1_0 (ATerm q_135 (ATerm), ATerm t);
static ATerm c_131 (ATerm w_130, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_12 (ATerm k_24, ATerm t);
static ATerm k_12 (ATerm x_38, ATerm y_38, ATerm t);
static ATerm l_12 (ATerm g_40, ATerm h_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_132 (ATerm m_131, ATerm t);
static ATerm o_132 (ATerm q_131, ATerm r_131, ATerm s_131, ATerm t);
static ATerm p_132 (ATerm a_132, ATerm b_132, ATerm c_132, ATerm t);
static ATerm m_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_135 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm v_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_12 (ATerm j_55, ATerm k_55, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm t_12 (ATerm e_60, ATerm f_60, ATerm d_60, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_12 (ATerm a_43, ATerm b_43, ATerm t);
ATerm foldr_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_132 (ATerm), ATerm t);
static ATerm j_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_18 (ATerm t);
ATerm need_help_1_0 (ATerm h_135 (ATerm), ATerm t);
static ATerm w_12 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm t);
ATerm lookup_table_0_1 (ATerm q_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_64, ATerm f_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_12 (ATerm b_64, ATerm c_64, ATerm t);
static ATerm q_12 (ATerm g_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_116 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_12 (ATerm z_63, ATerm a_64, ATerm t);
static ATerm s_12 (ATerm x_61, ATerm y_61, ATerm t);
static ATerm s_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm k_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_137 (ATerm), ATerm t);
static ATerm m_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm r_19 (ATerm t);
static ATerm w_19 (ATerm t);
ATerm parse_options_1_0 (ATerm j_137 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
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
              t = term_m_20;
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
                  t = term_m_20;
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
                      t = term_o_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      a_1 = ATgetArgument(t, 0);
                      b_1 = ATgetArgument(t, 1);
                      y_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_1, (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, y_0), a_1)));
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
ATerm topdown_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(e_110, t);
    return(t);
  }
  t = e_110(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm t_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_5);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = s_20;
            {
              ATerm v_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_5 = NULL,w_5 = NULL,y_5 = NULL,z_5 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_5 = ATgetArgument(t, 0);
                      w_5 = ATgetArgument(t, 1);
                      y_5 = ATgetArgument(t, 2);
                      z_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_5;
                  t = map_1_0(s_0, t);
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = v_20;
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
  ATerm h_6 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_6 = ATgetArgument(t, 0);
          {
            ATerm c_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_21);
      t = h_6;
    }
  else
    {
      t = a_21;
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
static ATerm t_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_6);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm m_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_6);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm d_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = d_21;
      {
        ATerm q_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_21);
          }
        else
          {
            t = q_21;
            {
              ATerm x_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_6 = NULL,s_6 = NULL,v_6 = NULL,w_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_6 = ATgetArgument(t, 0);
                      s_6 = ATgetArgument(t, 1);
                      v_6 = ATgetArgument(t, 2);
                      w_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_6;
                  t = map_1_0(z_0, t);
                  LocalPopChoice(y_21);
                }
              else
                {
                  t = x_21;
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
  ATerm d_7 = NULL;
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm b_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_22);
      t = d_7;
    }
  else
    {
      t = z_21;
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
  ATerm h_7 = NULL;
  h_7 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,h_0 = NULL,q_0 = NULL,d_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            c_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_7);
        h_0 = t;
        t = c_8;
        t = ContextVar_0_0(t);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, q_0);
        d_3 = t;
        t = SSLsetAnnotations(d_3, h_0);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, h_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm s_8 (ATerm h_4, ATerm j_4, ATerm k_4, ATerm l_4, ATerm q_4, ATerm s_4, ATerm u_4, ATerm t)
  {
    ATerm c_5 = NULL,d_5 = NULL,i_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, q_4, term_o_22);
    {
      ATerm p_22 = t;
      if((PushChoice() == 0))
        {
          ATerm q_5 = NULL;
          if(match_cons(t, sym__2))
            {
              q_5 = ATgetArgument(t, 0);
              if((q_5 != ATgetArgument(t, 1)))
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
          t = p_22;
        }
    }
    t = new_0_0(t);
    c_5 = t;
    t = l_4;
    t = dummify_0_0(t);
    i_5 = t;
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_5;
          if((l_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, c_5);
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          t = i_5;
        }
    }
    d_5 = t;
    t = i_5;
    t = free_vars_3_0(j_0, r_0, tboundin_3_0, t);
    t = map_1_0(t_0, t);
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_4, s_4);
    t = free_vars_3_0(u_0, w_0, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, m_5);
    t = diff_0_0(t);
    n_5 = t;
    t = new_0_0(t);
    o_5 = t;
    t = h_4;
    t = p_0(t);
    p_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, p_5, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_u_22, (ATerm) ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Str_1, o_5)))), i_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_4, j_4, k_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, c_5), l_4), q_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_4)))), d_5), (ATerm) ATmakeAppl(sym_Op_2, term_u_22, (ATerm) ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Str_1, o_5))))), s_4))));
    return(t);
  }
  ATerm d_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,p_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      h_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
      k_8 = ATgetArgument(t, 2);
      l_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_8;
  if(match_cons(t, sym_Rule_3))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      p_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_8;
  if(match_cons(t, sym_Op_2))
    {
      d_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      t = f_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = d_8;
          if(match_string(t, "Undefined"))
            {
              ATerm a_23 = t;
              int d_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
                  t = g_8;
                  t = new_0_0(t);
                  e_2 = t;
                  t = m_8;
                  t = dummify_0_0(t);
                  c_2 = t;
                  {
                    ATerm e_23 = t;
                    int h_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_2;
                        if((m_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
                        LocalPopChoice(h_23);
                      }
                    else
                      {
                        t = e_23;
                        t = c_2;
                      }
                  }
                  f_2 = t;
                  t = h_8;
                  t = p_0(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_2, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, term_o_22), c_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_8, j_8, k_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_2), m_8), term_o_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_8)))), f_2), term_o_22)), (ATerm) ATmakeAppl(sym_Seq_2, p_8, term_m_20)))));
                  LocalPopChoice(d_23);
                }
              else
                {
                  t = a_23;
                  t = s_8(h_8, j_8, k_8, m_8, n_8, p_8, g_8, t);
                }
            }
          else
            {
              t = s_8(h_8, j_8, k_8, m_8, n_8, p_8, g_8, t);
            }
        }
      else
        {
          t = d_8;
          t = s_8(h_8, j_8, k_8, m_8, n_8, p_8, g_8, t);
        }
    }
  else
    {
      t = s_8(h_8, j_8, k_8, m_8, n_8, p_8, g_8, t);
    }
  return(t);
}
static ATerm q_10 (ATerm u_142 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,y_8 = NULL,z_8 = NULL;
  t = new_0_0(t);
  w_8 = t;
  t = u_81;
  t = dummify_0_0(t);
  v_8 = t;
  {
    ATerm n_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_8;
        if((u_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, w_8);
        LocalPopChoice(p_23);
      }
    else
      {
        t = n_23;
        t = v_8;
      }
  }
  y_8 = t;
  t = r_81;
  t = u_142(t);
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_8, v_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, r_81, p_81, q_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_8), u_81), term_o_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_81)))), y_8), term_w_23)), (ATerm) ATmakeAppl(sym_Seq_2, s_81, term_m_20))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm u_142 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      h_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      j_9 = ATgetArgument(t, 2);
      {
        ATerm d_24 = ATgetArgument(t, 3);
        if(match_cons(d_24, sym_Rule_3))
          {
            k_9 = ATgetArgument(d_24, 0);
            {
              ATerm h_24 = ATgetArgument(d_24, 1);
              if(match_cons(h_24, sym_Op_2))
                {
                  ATerm l_24 = ATgetArgument(h_24, 0);
                  if((ATgetSymbol((ATermAppl) l_24) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm m_24 = ATgetArgument(h_24, 1);
                    if(((ATgetType(m_24) != AT_LIST) || !(ATisEmpty(m_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            l_9 = ATgetArgument(d_24, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_10(u_142, h_9, i_9, j_9, k_9, l_9, t);
  return(t);
}
static ATerm f_18 (ATerm n_11, ATerm r_11, ATerm t)
{
  t = n_11;
  {
    ATerm n_24 = t;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL,o_12 = NULL,y_12 = NULL,c_13 = NULL,f_3 = NULL;
        c_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_12 = ATgetFirst((ATermList) t);
            y_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_13);
        d_12 = t;
        t = y_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_12), o_12);
        f_3 = t;
        t = SSLsetAnnotations(f_3, d_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_20, n_11);
  return(t);
}
static ATerm g_18 (ATerm d_13, ATerm i_13, ATerm t)
{
  t = d_13;
  {
    ATerm p_24 = t;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,g_3 = NULL;
        n_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_13 = ATgetFirst((ATermList) t);
            m_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_13);
        k_13 = t;
        t = m_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_13), l_13);
        g_3 = t;
        t = SSLsetAnnotations(g_3, k_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_24, d_13);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,p_2 = NULL;
  h_14 = t;
  t = SSL_explode_term(h_14);
  if(match_cons(t, sym__2))
    {
      ATerm h_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_25 = ATgetArgument(t, 1);
        if(((ATgetType(l_25) == AT_LIST) && !(ATisEmpty(l_25))))
          {
            i_14 = ATgetFirst((ATermList) l_25);
            {
              ATerm m_25 = (ATerm) ATgetNext((ATermList) l_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(h_14);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_25 = ATgetArgument(t, 1);
        if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
          {
            ATerm p_25 = ATgetFirst((ATermList) o_25);
            ATerm q_25 = (ATerm) ATgetNext((ATermList) o_25);
            if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
              {
                p_2 = ATgetFirst((ATermList) q_25);
                {
                  ATerm s_25 = (ATerm) ATgetNext((ATermList) q_25);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_25, (ATerm) ATinsert(ATinsert(ATempty, p_2), i_14));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_25, (ATerm) ATinsert(ATinsert(ATempty, d_15), c_15));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_25, (ATerm) ATinsert(ATinsert(ATempty, g_15), f_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm t_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, v_15), t_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, b_16), a_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,v_13 = NULL,w_13 = NULL,b_14 = NULL,c_14 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      {
        ATerm f_14 = NULL;
        t = c_14;
        t = foldr_2_0(d_1, e_1, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, b_14, f_14);
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
                  ATerm x_25 = t;
                  int z_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_b_26;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_c_26;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_e_26;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_f_26;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_g_26;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(z_25);
                    }
                  else
                    {
                      t = x_25;
                      {
                        ATerm w_2 = NULL;
                        t = SSL_explode_string(b_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm l_26 = ATgetFirst((ATermList) t);
                            if(((ATgetType(l_26) != AT_INT) || (ATgetInt((ATermInt) l_26) != 39)))
                              _fail(t);
                            {
                              ATerm n_26 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
                                {
                                  w_2 = ATgetFirst((ATermList) n_26);
                                  {
                                    ATerm o_26 = (ATerm) ATgetNext((ATermList) n_26);
                                    if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
                                      {
                                        ATerm p_26 = ATgetFirst((ATermList) o_26);
                                        if(((ATgetType(p_26) != AT_INT) || (ATgetInt((ATermInt) p_26) != 39)))
                                          _fail(t);
                                        {
                                          ATerm q_26 = (ATerm) ATgetNext((ATermList) o_26);
                                          if(((ATgetType(q_26) != AT_LIST) || !(ATisEmpty(q_26))))
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
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      b_14 = ATgetArgument(t, 0);
                      {
                        ATerm v_26 = ATgetArgument(t, 1);
                      }
                      v_13 = ATgetArgument(t, 2);
                      o_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_26);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_14, v_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_13), (ATerm) ATempty));
                }
              else
                {
                  t = t_26;
                  {
                    ATerm y_26 = t;
                    int d_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            b_14 = ATgetArgument(t, 0);
                            {
                              ATerm j_27 = ATgetArgument(t, 1);
                            }
                            v_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_27);
                        t = (ATerm) ATmakeAppl(sym_Con_3, b_14, v_13, term_q_27);
                      }
                    else
                      {
                        t = y_26;
                        if(match_cons(t, sym_Con1_2))
                          {
                            b_14 = ATgetArgument(t, 0);
                            c_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, b_14, c_14, term_q_27);
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
                                            p_13 = ATgetFirst((ATermList) t);
                                            q_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = q_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm t_27 = t;
                                                int y_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_18(b_14, w_13, t);
                                                    LocalPopChoice(y_27);
                                                  }
                                                else
                                                  {
                                                    t = t_27;
                                                    t = p_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = f_18(b_14, w_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = f_18(b_14, w_13, t);
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
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_r_24, (ATerm) ATinsert(CheckATermList(c_14), b_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                b_14 = ATgetArgument(t, 0);
                                                                                t = b_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    p_13 = ATgetFirst((ATermList) t);
                                                                                    q_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = q_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm n_28 = t;
                                                                                        int p_28 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = g_18(b_14, w_13, t);
                                                                                            LocalPopChoice(p_28);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = n_28;
                                                                                            t = p_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_18(b_14, w_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_18(b_14, w_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_y_28;
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
                                                                                            r_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_29, (ATerm) ATinsert(ATinsert(ATempty, r_13), b_14));
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
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, b_14, c_14, term_o_20);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    b_14 = ATgetArgument(t, 0);
                                                                                                    c_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, b_14, c_14, term_o_20);
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
                                                                                                                        v_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_14, c_14, (ATerm)ATempty, v_13);
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
                                                                                                                                v_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_14, c_14, (ATerm)ATempty, v_13);
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
                                                                                                                                        v_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_14, c_14, (ATerm)ATempty, v_13);
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
                                                                                                                                                ATerm g_29 = ATgetArgument(t, 0);
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
        ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
        t = l_18;
        t = new_0_0(t);
        t_18 = t;
        t = new_0_0(t);
        u_18 = t;
        t = new_0_0(t);
        v_18 = t;
        t = new_0_0(t);
        w_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_18), v_18), u_18), t_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, t_18), (ATerm) ATmakeAppl(sym_Var_1, v_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, m_18, (ATerm)ATmakeAppl(sym_Var_1, t_18), (ATerm) ATmakeAppl(sym_Var_1, u_18)), (ATerm) ATmakeAppl(sym_BAM_3, k_18, (ATerm)ATmakeAppl(sym_Var_1, v_18), (ATerm) ATmakeAppl(sym_Var_1, w_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_18)), (ATerm) ATmakeAppl(sym_Var_1, u_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_18 = ATgetArgument(t, 0);
          {
            ATerm x_18 = NULL,y_18 = NULL,a_19 = NULL,b_19 = NULL;
            t = l_18;
            t = new_0_0(t);
            a_19 = t;
            t = m_18;
            {
              static ATerm n_1 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, a_19);
                return(t);
              }
              t = oncetd_1_0(n_1, t);
            }
            b_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_18)), not_null(x_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_19)), (ATerm) ATmakeAppl(sym_Build_1, b_19))));
          }
        }
      else
        {
          ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,n_19 = NULL;
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
          n_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_19))))), (ATerm)ATmakeAppl(sym_Var_1, h_19), (ATerm) ATmakeAppl(sym_Op_2, term_p_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_19)), not_null(f_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      q_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
        t = p_19;
        t = new_0_0(t);
        u_19 = t;
        t = q_19;
        {
          static ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_19 = ATgetArgument(t, 0);
                if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_19), s_19);
            return(t);
          }
          t = pat_td_1_0(p_1, t);
        }
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_19))))));
        LocalPopChoice(w_29);
      }
    else
      {
        t = s_29;
        {
          ATerm a_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
              t = p_19;
              t = new_0_0(t);
              b_20 = t;
              t = q_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((a_20 != NULL) && (a_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                  return(t);
                }
                t = pat_td_1_0(q_1, t);
              }
              c_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), not_null(a_20))));
              LocalPopChoice(c_30);
            }
          else
            {
              t = a_30;
              {
                ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
                t = p_19;
                t = new_0_0(t);
                k_20 = t;
                t = q_19;
                {
                  static ATerm r_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((j_20 != NULL) && (j_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_20 = ATgetArgument(t, 0);
                        if(((i_20 != NULL) && (i_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, k_20);
                    return(t);
                  }
                  t = pat_td_1_0(r_1, t);
                }
                l_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_20)), not_null(j_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm o_141 (ATerm), ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_141(t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm d_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
        i_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            j_26 = ATgetArgument(t, 0);
            k_26 = ATgetArgument(t, 1);
            {
              ATerm c_3 = NULL,m_3 = NULL,l_3 = NULL;
              t = SSLgetAnnotations(i_26);
              c_3 = t;
              t = k_26;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(o_141, t);
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
                k_26 = ATgetArgument(t, 1);
                {
                  ATerm h_30 = t;
                  int n_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_3 = NULL,i_4 = NULL,p_3 = NULL;
                      t = SSLgetAnnotations(i_26);
                      z_3 = t;
                      t = k_26;
                      t = pat_td_1_0(o_141, t);
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, j_26, i_4);
                      p_3 = t;
                      t = SSLsetAnnotations(p_3, z_3);
                      LocalPopChoice(n_30);
                    }
                  else
                    {
                      t = h_30;
                      {
                        ATerm y_4 = NULL,f_5 = NULL,s_3 = NULL;
                        t = SSLgetAnnotations(i_26);
                        y_4 = t;
                        t = j_26;
                        t = pat_td_1_0(o_141, t);
                        f_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, f_5, k_26);
                        s_3 = t;
                        t = SSLsetAnnotations(s_3, y_4);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    j_26 = ATgetArgument(t, 0);
                    k_26 = ATgetArgument(t, 1);
                    d_26 = ATgetArgument(t, 2);
                    {
                      ATerm t_6 = NULL,j_7 = NULL,u_3 = NULL;
                      t = SSLgetAnnotations(i_26);
                      t_6 = t;
                      t = d_26;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(o_141, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      j_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, j_26, k_26, j_7);
                      u_3 = t;
                      t = SSLsetAnnotations(u_3, t_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        j_26 = ATgetArgument(t, 0);
                        k_26 = ATgetArgument(t, 1);
                        d_26 = ATgetArgument(t, 2);
                        {
                          ATerm x_7 = NULL,e_8 = NULL,w_3 = NULL;
                          t = SSLgetAnnotations(i_26);
                          x_7 = t;
                          t = d_26;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(o_141, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          e_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, j_26, k_26, e_8);
                          w_3 = t;
                          t = SSLsetAnnotations(w_3, x_7);
                        }
                      }
                    else
                      {
                        ATerm f_9 = NULL,o_9 = NULL,y_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            j_26 = ATgetArgument(t, 0);
                            k_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_26);
                        f_9 = t;
                        t = k_26;
                        t = pat_td_1_0(o_141, t);
                        o_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, j_26, o_9);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, f_9);
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
    ATerm s_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL,a_27 = NULL,e_27 = NULL,f_27 = NULL;
        t = w_26;
        t = new_0_0(t);
        e_27 = t;
        t = x_26;
        {
          static ATerm v_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_26 = ATgetArgument(t, 0);
                if(((a_27 != NULL) && (a_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, e_27);
            return(t);
          }
          t = pat_td_1_0(v_1, t);
        }
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_30, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_27)), not_null(z_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_27)))), (ATerm) ATmakeAppl(sym_Build_1, f_27)));
        LocalPopChoice(u_30);
      }
    else
      {
        t = s_30;
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_27 = NULL,m_27 = NULL,n_27 = NULL;
              t = w_26;
              t = new_0_0(t);
              m_27 = t;
              t = x_26;
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_27);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              n_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_27)))), (ATerm) ATmakeAppl(sym_Build_1, n_27)));
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
              {
                ATerm o_27 = NULL,p_27 = NULL,r_27 = NULL,s_27 = NULL;
                t = w_26;
                t = new_0_0(t);
                r_27 = t;
                t = x_26;
                {
                  static ATerm x_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_27 = ATgetArgument(t, 0);
                        if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_27);
                    return(t);
                  }
                  t = pat_td_1_0(x_1, t);
                }
                s_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_27), not_null(p_27), (ATerm) ATmakeAppl(sym_Var_1, r_27))), (ATerm) ATmakeAppl(sym_Build_1, s_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm a_31 = t;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,q_7 = NULL;
      h_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_28);
      f_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_28);
      q_7 = t;
      t = SSLsetAnnotations(q_7, f_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_31;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm i_28 = NULL,q_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_28 = ATgetFirst((ATermList) t);
      q_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_28, q_28);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      if(match_cons(f_31, sym__2))
        {
          r_28 = ATgetArgument(f_31, 0);
          s_28 = ATgetArgument(f_31, 1);
        }
      else
        _fail(t);
      {
        ATerm j_31 = ATgetArgument(t, 1);
        if(match_cons(j_31, sym__2))
          {
            t_28 = ATgetArgument(j_31, 0);
            u_28 = ATgetArgument(j_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_28), r_28), (ATerm) ATinsert(CheckATermList(u_28), s_28));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
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
  ATerm x_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      if(match_cons(l_31, sym__2))
        {
          x_28 = ATgetArgument(l_31, 0);
          z_28 = ATgetArgument(l_31, 1);
        }
      else
        _fail(t);
      {
        ATerm m_31 = ATgetArgument(t, 1);
        if(match_cons(m_31, sym__2))
          {
            a_29 = ATgetArgument(m_31, 0);
            b_29 = ATgetArgument(m_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_29), x_28), (ATerm) ATinsert(CheckATermList(b_29), z_28));
  return(t);
}
static ATerm s_10 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,r_7 = NULL;
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
  x_27 = t;
  t = a_28;
  t = concat_0_0(t);
  c_28 = t;
  t = b_28;
  t = genzip_4_0(d_2, h_2, i_2, _id, t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
  r_7 = t;
  t = SSLsetAnnotations(r_7, x_27);
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(match_cons(r_31, sym__2))
          {
            v_27 = ATgetArgument(r_31, 0);
            w_27 = ATgetArgument(r_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_27), (ATerm) ATmakeAppl(sym_CallT_3, i_72, j_72, w_27)));
  return(t);
}
static ATerm x_29 (ATerm i_29, ATerm t)
{
  ATerm l_29 = NULL;
  t = i_29;
  {
    ATerm s_31 = t;
    if((PushChoice() == 0))
      {
        ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,t_8 = NULL;
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
        t_8 = t;
        t = SSLsetAnnotations(t_8, m_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_31;
      }
  }
  t = new_0_0(t);
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_29)))), (ATerm) ATmakeAppl(sym_Var_1, l_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_29 = ATgetArgument(t, 0);
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_29(p_29, t);
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_o_20, (ATerm) ATmakeAppl(sym_Var_1, q_29)));
          }
      }
    }
  else
    {
      t = x_29(p_29, t);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm w_31 = t;
  if((PushChoice() == 0))
    {
      ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,i_10 = NULL;
      n_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_10);
      l_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_10);
      i_10 = t;
      t = SSLsetAnnotations(i_10, l_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_31;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_10 = ATgetFirst((ATermList) t);
      p_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_10, p_10);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm v_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      if(match_cons(x_31, sym__2))
        {
          v_10 = ATgetArgument(x_31, 0);
          x_10 = ATgetArgument(x_31, 1);
        }
      else
        _fail(t);
      {
        ATerm z_31 = ATgetArgument(t, 1);
        if(match_cons(z_31, sym__2))
          {
            z_10 = ATgetArgument(z_31, 0);
            a_11 = ATgetArgument(z_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_10), v_10), (ATerm) ATinsert(CheckATermList(a_11), x_10));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_11 = ATgetFirst((ATermList) t);
      d_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_11, d_11);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm g_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_32 = ATgetArgument(t, 0);
      if(match_cons(b_32, sym__2))
        {
          g_11 = ATgetArgument(b_32, 0);
          j_11 = ATgetArgument(b_32, 1);
        }
      else
        _fail(t);
      {
        ATerm c_32 = ATgetArgument(t, 1);
        if(match_cons(c_32, sym__2))
          {
            k_11 = ATgetArgument(c_32, 0);
            l_11 = ATgetArgument(c_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_11), g_11), (ATerm) ATinsert(CheckATermList(l_11), j_11));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm d_32 = t;
  if((PushChoice() == 0))
    {
      ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,y_10 = NULL;
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
      y_10 = t;
      t = SSLsetAnnotations(y_10, x_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_32;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_14 = NULL,l_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_14 = ATgetFirst((ATermList) t);
      l_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_14, l_14);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,q_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      if(match_cons(f_32, sym__2))
        {
          m_14 = ATgetArgument(f_32, 0);
          n_14 = ATgetArgument(f_32, 1);
        }
      else
        _fail(t);
      {
        ATerm g_32 = ATgetArgument(t, 1);
        if(match_cons(g_32, sym__2))
          {
            o_14 = ATgetArgument(g_32, 0);
            q_14 = ATgetArgument(g_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_14), m_14), (ATerm) ATinsert(CheckATermList(q_14), n_14));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm s_14 = NULL,x_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_14 = ATgetFirst((ATermList) t);
      x_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_14, x_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm a_15 = NULL,r_15 = NULL,s_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if(match_cons(h_32, sym__2))
        {
          a_15 = ATgetArgument(h_32, 0);
          r_15 = ATgetArgument(h_32, 1);
        }
      else
        _fail(t);
      {
        ATerm i_32 = ATgetArgument(t, 1);
        if(match_cons(i_32, sym__2))
          {
            s_15 = ATgetArgument(i_32, 0);
            u_15 = ATgetArgument(i_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_15), a_15), (ATerm) ATinsert(CheckATermList(u_15), r_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm b_35 = NULL,f_35 = NULL,g_35 = NULL,m_35 = NULL;
  f_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      b_35 = ATgetArgument(t, 2);
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,j_10 = NULL,k_10 = NULL,r_10 = NULL;
        t = b_35;
        t = fetch_1_0(j_2, t);
        t = b_35;
        t = genzip_4_0(k_2, l_2, m_2, LiftPrimArg_0_0, t);
        k_10 = t;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_10);
        d_10 = t;
        t = e_10;
        t = concat_0_0(t);
        g_10 = t;
        t = f_10;
        t = genzip_4_0(n_2, o_2, q_2, _id, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, j_10);
        r_10 = t;
        t = SSLsetAnnotations(r_10, d_10);
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            {
              ATerm j_32 = ATgetArgument(t, 1);
              if(match_cons(j_32, sym__2))
                {
                  b_10 = ATgetArgument(j_32, 0);
                  c_10 = ATgetArgument(j_32, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_10), (ATerm) ATmakeAppl(sym_PrimT_3, g_35, m_35, c_10)));
      }
    }
  else
    {
      ATerm a_13 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,b_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_35 = ATgetArgument(t, 0);
          m_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_35;
      t = fetch_1_0(r_2, t);
      t = m_35;
      t = genzip_4_0(s_2, t_2, v_2, LiftPrimArg_0_0, t);
      u_13 = t;
      if(match_cons(t, sym__2))
        {
          g_13 = ATgetArgument(t, 0);
          h_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_13);
      f_13 = t;
      t = g_13;
      t = concat_0_0(t);
      s_13 = t;
      t = h_13;
      t = genzip_4_0(x_2, y_2, z_2, _id, t);
      t_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
      b_11 = t;
      t = SSLsetAnnotations(b_11, f_13);
      if(match_cons(t, sym__2))
        {
          a_13 = ATgetArgument(t, 0);
          {
            ATerm k_32 = ATgetArgument(t, 1);
            if(match_cons(k_32, sym__2))
              {
                b_13 = ATgetArgument(k_32, 0);
                e_13 = ATgetArgument(k_32, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_13), (ATerm) ATmakeAppl(sym_PrimT_3, g_35, (ATerm)ATempty, e_13)));
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm l_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  q_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
      p_36 = ATgetArgument(t, 2);
      {
        ATerm q_16 = NULL,w_20 = NULL;
        t = SSLgetAnnotations(q_36);
        q_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_36, o_36, p_36);
        w_20 = t;
        t = SSLsetAnnotations(w_20, q_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = q_36;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm l_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_32;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  c_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
      b_38 = ATgetArgument(t, 2);
      {
        ATerm u_17 = NULL,y_20 = NULL;
        t = SSLgetAnnotations(c_38);
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, d_38, e_38, b_38);
        y_20 = t;
        t = SSLsetAnnotations(y_20, u_17);
      }
    }
  else
    {
      ATerm j_19 = NULL,e_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          d_38 = ATgetArgument(t, 0);
          e_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_38);
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, d_38, e_38);
      e_21 = t;
      t = SSLsetAnnotations(e_21, j_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
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
ATerm RtoS_0_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,q_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      m_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_38;
  if(match_cons(t, sym_StratRule_3))
    {
      n_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
      r_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_38), (ATerm) ATmakeAppl(sym_Where_1, r_38)), n_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          n_38 = ATgetArgument(t, 0);
          q_38 = ATgetArgument(t, 1);
          r_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_38;
      t = pureterm_0_0(t);
      t = q_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, q_38)), (ATerm) ATmakeAppl(sym_Where_1, r_38)), (ATerm) ATmakeAppl(sym_Match_1, n_38)));
    }
  return(t);
}
static ATerm t_10 (ATerm v_67, ATerm w_67, ATerm x_67, ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  t = new_0_0(t);
  o_39 = t;
  t = v_67;
  {
    static ATerm e_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm o_32 = ATgetArgument(t, 0);
          if(match_cons(o_32, sym_Var_1))
            {
              if(((n_39 != NULL) && (n_39 != ATgetArgument(o_32, 0))))
                _fail(ATgetArgument(o_32, 0));
              else
                n_39 = ATgetArgument(o_32, 0);
            }
          else
            _fail(t);
          if(((l_39 != NULL) && (l_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_39 = ATgetArgument(t, 1);
          {
            ATerm p_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, n_39);
      return(t);
    }
    t = oncetd_1_0(e_3, t);
  }
  p_39 = t;
  t = w_67;
  {
    static ATerm h_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm q_32 = ATgetArgument(t, 0);
          if(match_cons(q_32, sym_Var_1))
            {
              if(((n_39 != NULL) && (n_39 != ATgetArgument(q_32, 0))))
                _fail(ATgetArgument(q_32, 0));
              else
                n_39 = ATgetArgument(q_32, 0);
            }
          else
            _fail(t);
          if(((m_39 != NULL) && (m_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_39 = ATgetArgument(t, 1);
          {
            ATerm r_32 = ATgetArgument(t, 2);
            if(match_cons(r_32, sym_CallT_3))
              {
                if(((k_39 != NULL) && (k_39 != ATgetArgument(r_32, 0))))
                  _fail(ATgetArgument(r_32, 0));
                else
                  k_39 = ATgetArgument(r_32, 0);
                {
                  ATerm s_32 = ATgetArgument(r_32, 1);
                  if(((ATgetType(s_32) != AT_LIST) || !(ATisEmpty(s_32))))
                    _fail(t);
                }
                {
                  ATerm u_32 = ATgetArgument(r_32, 2);
                  if(((ATgetType(u_32) != AT_LIST) || !(ATisEmpty(u_32))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_39);
      return(t);
    }
    t = oncetd_1_0(h_3, t);
  }
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, p_39, q_39, (ATerm) ATmakeAppl(sym_Seq_2, x_67, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(k_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_39), not_null(m_39), term_o_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_39)), (ATerm) ATmakeAppl(sym_Var_1, o_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_40 = NULL,u_40 = NULL,y_40 = NULL,z_40 = NULL,e_41 = NULL,f_41 = NULL;
          z_40 = t;
          if(match_cons(t, sym_SRule_1))
            {
              e_41 = ATgetArgument(t, 0);
              t = e_41;
              if(match_cons(t, sym_Rule_3))
                {
                  t_40 = ATgetArgument(t, 0);
                  u_40 = ATgetArgument(t, 1);
                  y_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_40;
              t = t_10(t_40, u_40, y_40, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm g_20 = NULL,n_20 = NULL,s_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  e_41 = ATgetArgument(t, 0);
                  f_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_40);
              g_20 = t;
              t = f_41;
              t = desugarRule_0_0(t);
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, e_41, n_20);
              s_21 = t;
              t = SSLsetAnnotations(s_21, g_20);
            }
          LocalPopChoice(y_32);
        }
      else
        {
          t = x_32;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
    }
  t = repeat_2_0(j_3, _id, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
            y_41 = t;
            if(match_cons(t, sym_CallT_3))
              {
                z_41 = ATgetArgument(t, 0);
                a_42 = ATgetArgument(t, 1);
                b_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_41;
            t = s_10(z_41, a_42, b_42, t);
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
                  t = HL_0_0(t);
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
                        t = Bapp_0_0(t);
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
                              ATerm m_33 = t;
                              int n_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      i_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_42;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      j_42 = ATgetArgument(t, 0);
                                      t = j_42;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          j_42 = ATgetArgument(t, 0);
                                          k_42 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, j_42, k_42);
                                    }
                                  LocalPopChoice(n_33);
                                }
                              else
                                {
                                  t = m_33;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(k_33);
                            }
                          else
                            {
                              t = j_33;
                              {
                                ATerm o_33 = t;
                                int p_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(p_33);
                                  }
                                else
                                  {
                                    t = o_33;
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
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_46;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_46), (ATerm) ATempty);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm r_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_46 = ATgetArgument(t, 0);
      t = r_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_46 = ATgetArgument(t, 0);
          {
            ATerm r_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_46;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, r_46);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm c_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_47);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            {
              ATerm x_33 = t;
              int y_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_47 = ATgetArgument(t, 0);
                      j_47 = ATgetArgument(t, 1);
                      k_47 = ATgetArgument(t, 2);
                      l_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_47;
                  t = map_1_0(r_3, t);
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm u_47 = NULL;
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_47 = ATgetArgument(t, 0);
          {
            ATerm b_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_34);
      t = u_47;
    }
  else
    {
      t = z_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_47;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_47);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm a_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_48);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm g_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_34);
          }
        else
          {
            t = g_34;
            {
              ATerm j_34 = t;
              int m_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_48 = ATgetArgument(t, 0);
                      g_48 = ATgetArgument(t, 1);
                      h_48 = ATgetArgument(t, 2);
                      i_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_48;
                  t = map_1_0(a_4, t);
                  LocalPopChoice(m_34);
                }
              else
                {
                  t = j_34;
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
  ATerm t_48 = NULL;
  ATerm o_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_48 = ATgetArgument(t, 0);
          {
            ATerm r_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_34);
      t = t_48;
    }
  else
    {
      t = o_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_48;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_49 = NULL,t_20 = NULL,z_20 = NULL,w_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            n_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_49);
        t_20 = t;
        t = n_49;
        t = ContextVar_0_0(t);
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, z_20);
        w_21 = t;
        t = SSLsetAnnotations(w_21, t_20);
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, d_49);
  return(t);
}
static ATerm u_10 (ATerm t_142 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,r_43 = NULL,a_44 = NULL,x_44 = NULL,i_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,t_45 = NULL,v_45 = NULL,x_45 = NULL,a_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_81, term_o_22);
  {
    ATerm u_34 = t;
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
        t = u_34;
      }
  }
  t = term_w_34;
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_34, y_80);
  t = k_12(a_46, y_80, t);
  h_43 = t;
  t = term_x_34;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_34, y_80);
  t = k_12(x_45, y_80, t);
  i_43 = t;
  t = new_0_0(t);
  j_43 = t;
  t = v_80;
  t = map_1_0(k_3, t);
  k_43 = t;
  t = w_80;
  t = map_1_0(n_3, t);
  r_43 = t;
  t = new_0_0(t);
  a_44 = t;
  t = f_81;
  t = dummify_0_0(t);
  i_45 = t;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_45;
        if((f_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, a_44);
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        t = i_45;
      }
  }
  x_44 = t;
  t = i_45;
  t = free_vars_3_0(o_3, q_3, tboundin_3_0, t);
  t = map_1_0(t_3, t);
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
  t = free_vars_3_0(v_3, x_3, tboundin_3_0, t);
  t = filter_1_0(b_4, t);
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  t = diff_0_0(t);
  r_45 = t;
  t = new_0_0(t);
  t_45 = t;
  t = y_80;
  t = t_142(t);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_45, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_u_22, (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATmakeAppl(sym_Str_1, t_45)))), i_45)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, i_43, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_u_22, (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATmakeAppl(sym_Str_1, t_45)))), f_81)), j_81, (ATerm) ATmakeAppl(sym_Seq_2, term_l_35, k_81)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_43, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_44), f_81), (ATerm)ATmakeAppl(sym_Var_1, j_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), x_44), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_43), k_43, r_43), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_e_35), (ATerm) ATmakeAppl(sym_Var_1, a_44)))))), (ATerm) ATmakeAppl(sym_Var_1, j_43)))))), (ATerm) ATmakeAppl(sym_RDefT_4, y_80, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_44), f_81), j_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), x_44), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_u_22, (ATerm) ATinsert(CheckATermList(r_45), (ATerm) ATmakeAppl(sym_Str_1, t_45)))), term_a_35))), k_81)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,r_21 = NULL,t_21 = NULL,u_21 = NULL;
      l_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          m_21 = ATgetArgument(t, 0);
          n_21 = ATgetArgument(t, 1);
          o_21 = ATgetArgument(t, 2);
          p_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_21;
      if(match_cons(t, sym_Rule_3))
        {
          r_21 = ATgetArgument(t, 0);
          t_21 = ATgetArgument(t, 1);
          u_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_21;
      t = u_10(d_4, m_21, n_21, o_21, r_21, t_21, u_21, t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_4, t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_22))));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_22))));
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm g_4 (ATerm t)
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
      ATerm u_35 = ATgetArgument(t, 0);
      if(match_cons(u_35, sym__2))
        {
          j_22 = ATgetArgument(u_35, 0);
          k_22 = ATgetArgument(u_35, 1);
        }
      else
        _fail(t);
      {
        ATerm v_35 = ATgetArgument(t, 1);
        if(match_cons(v_35, sym__2))
          {
            l_22 = ATgetArgument(v_35, 0);
            m_22 = ATgetArgument(v_35, 1);
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
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,g_24 = NULL;
      m_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          x_23 = ATgetArgument(t, 0);
          y_23 = ATgetArgument(t, 1);
          z_23 = ATgetArgument(t, 2);
          a_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_24;
      if(match_cons(t, sym_Rule_3))
        {
          b_24 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
          g_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_23;
      t = u_10(o_4, x_23, y_23, z_23, b_24, c_24, g_24, t);
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(p_4, t);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_24))));
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_24))));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
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
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if(match_cons(d_36, sym__2))
        {
          y_24 = ATgetArgument(d_36, 0);
          z_24 = ATgetArgument(d_36, 1);
        }
      else
        _fail(t);
      {
        ATerm e_36 = ATgetArgument(t, 1);
        if(match_cons(e_36, sym__2))
          {
            a_25 = ATgetArgument(e_36, 0);
            e_25 = ATgetArgument(e_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_25), y_24), (ATerm) ATinsert(CheckATermList(e_25), z_24));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_g_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_54))));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_54 = ATgetFirst((ATermList) t);
      q_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_54, q_54);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(match_cons(h_36, sym__2))
        {
          r_54 = ATgetArgument(h_36, 0);
          s_54 = ATgetArgument(h_36, 1);
        }
      else
        _fail(t);
      {
        ATerm i_36 = ATgetArgument(t, 1);
        if(match_cons(i_36, sym__2))
          {
            t_54 = ATgetArgument(i_36, 0);
            u_54 = ATgetArgument(i_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_54), r_54), (ATerm) ATinsert(CheckATermList(u_54), s_54));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm h_55 = NULL;
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_55))));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm n_55 = NULL,q_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_55 = ATgetFirst((ATermList) t);
      q_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_55, q_55);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,x_55 = NULL,y_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      if(match_cons(n_36, sym__2))
        {
          r_55 = ATgetArgument(n_36, 0);
          s_55 = ATgetArgument(n_36, 1);
        }
      else
        _fail(t);
      {
        ATerm r_36 = ATgetArgument(t, 1);
        if(match_cons(r_36, sym__2))
          {
            x_55 = ATgetArgument(r_36, 0);
            y_55 = ATgetArgument(r_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_55), r_55), (ATerm) ATinsert(CheckATermList(y_55), s_55));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm z_53 = NULL,e_54 = NULL;
  z_53 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      e_54 = ATgetArgument(t, 0);
      {
        ATerm f_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,c_22 = NULL;
        t = e_54;
        t = map_1_0(c_4, t);
        t = genzip_4_0(f_4, g_4, m_4, _id, t);
        k_21 = t;
        if(match_cons(t, sym__2))
          {
            h_21 = ATgetArgument(t, 0);
            i_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_21);
        f_21 = t;
        t = i_21;
        t = concat_0_0(t);
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_21, j_21);
        c_22 = t;
        t = SSLsetAnnotations(c_22, f_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          e_54 = ATgetArgument(t, 0);
          {
            ATerm f_23 = NULL,g_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,s_22 = NULL;
            t = e_54;
            t = map_1_0(n_4, t);
            t = genzip_4_0(r_4, t_4, v_4, _id, t);
            l_23 = t;
            if(match_cons(t, sym__2))
              {
                g_23 = ATgetArgument(t, 0);
                j_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_23);
            f_23 = t;
            t = j_23;
            t = concat_0_0(t);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_23, k_23);
            s_22 = t;
            t = SSLsetAnnotations(s_22, f_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              e_54 = ATgetArgument(t, 0);
              t = e_54;
              t = map_1_0(w_4, t);
              t = genzip_4_0(z_4, a_5, b_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_54 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_54;
              t = map_1_0(e_5, t);
              t = genzip_4_0(h_5, j_5, k_5, _id, t);
            }
        }
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm v_142 (ATerm), ATerm t)
{
  static ATerm r_56 (ATerm t)
  {
    static ATerm r_5 (ATerm t)
    {
      ATerm u_36 = t;
      int v_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_142(t);
          LocalPopChoice(v_36);
        }
      else
        {
          t = u_36;
          {
            ATerm j_56 = NULL,m_56 = NULL,p_56 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                j_56 = ATgetArgument(t, 0);
                m_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_56, m_56);
            {
              static ATerm u_5 (ATerm t)
              {
                t = j_56;
                t = DeclareContextVars_0_0(t);
                t = m_56;
                t = r_56(t);
                if(((p_56 != NULL) && (p_56 != t)))
                  _fail(t);
                else
                  p_56 = t;
                return(t);
              }
              t = scope_2_0(s_5, u_5, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_56, not_null(p_56));
          }
        }
      return(t);
    }
    t = oncetd_1_0(r_5, t);
    return(t);
  }
  t = r_56(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_t_36;
  return(t);
}
static ATerm w_10 (ATerm y_81, ATerm x_81, ATerm t)
{
  ATerm s_56 = NULL,x_56 = NULL,y_56 = NULL;
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
            if(((x_56 != NULL) && (x_56 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              x_56 = ATgetArgument(t, 0);
            if(((s_56 != NULL) && (s_56 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              s_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, x_56);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(b_6, t);
    }
    if(((y_56 != NULL) && (y_56 != t)))
      _fail(t);
    else
      y_56 = t;
    return(t);
  }
  t = scope_2_0(x_5, a_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_56)), not_null(y_56)), x_81);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,h_57 = NULL,i_57 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      h_57 = ATgetArgument(t, 0);
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_57 = ATgetFirst((ATermList) t);
      d_57 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_x_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, d_57, i_57)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_57))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_57;
    }
  return(t);
}
static ATerm m_58 (ATerm v_57, ATerm t)
{
  t = SSL_is_string(v_57);
  return(t);
}
static ATerm n_58 (ATerm x_57, ATerm t)
{
  ATerm a_58 = NULL,c_58 = NULL,d_58 = NULL;
  t = term_z_36;
  c_58 = t;
  t = (ATerm) ATinsert(ATempty, term_a_37);
  d_58 = t;
  t = SSL_printnl(c_58, d_58);
  t = x_57;
  t = debug_1_0(c_6, t);
  t = term_c_37;
  a_58 = t;
  t = SSL_exit(a_58);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  g_58 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      f_58 = ATgetArgument(t, 0);
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_58(g_58, t);
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            t = f_58;
          }
      }
    }
  else
    {
      ATerm g_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_58(g_58, t);
          LocalPopChoice(h_37);
        }
      else
        {
          t = g_37;
          t = n_58(g_58, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm w_58 = NULL,y_58 = NULL,z_58 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      w_58 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
      t = w_58;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_58;
      if(match_cons(t, sym_RDecT_3))
        {
          z_58 = ATgetArgument(t, 0);
          e_59 = ATgetArgument(t, 1);
          f_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_58, e_59, f_59, (ATerm) ATmakeAppl(sym_Rule_3, g_59, term_o_22, term_o_20));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          w_58 = ATgetArgument(t, 0);
          g_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_58;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_58;
      if(match_cons(t, sym_RDecT_3))
        {
          z_58 = ATgetArgument(t, 0);
          e_59 = ATgetArgument(t, 1);
          f_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_58, e_59, f_59, g_59);
    }
  return(t);
}
static ATerm o_61 (ATerm n_60, ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,w_60 = NULL;
  t = n_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      t_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_60;
  t = filter_1_0(d_6, t);
  w_60 = t;
  t = n_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      r_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_60;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, w_60), (ATerm) ATmakeAppl(sym_DynamicRules_1, s_60));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,f_61 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm i_37 = ATgetArgument(t, 0);
      if(match_cons(i_37, sym_DynRuleId_1))
        {
          ATerm j_37 = ATgetArgument(i_37, 0);
          if(match_cons(j_37, sym_RDecT_3))
            {
              x_60 = ATgetArgument(j_37, 0);
              y_60 = ATgetArgument(j_37, 1);
              z_60 = ATgetArgument(j_37, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      f_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, x_60, y_60, z_60, f_61);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      ATerm l_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  h_61 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      g_61 = ATgetArgument(t, 0);
      {
        ATerm m_37 = t;
        int n_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_25 = NULL;
            t = g_61;
            {
              ATerm o_37 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(e_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = o_37;
                }
            }
            t = g_61;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            r_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_25);
            LocalPopChoice(n_37);
          }
        else
          {
            t = m_37;
            t = o_61(h_61, t);
          }
      }
    }
  else
    {
      t = o_61(h_61, t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_62 = NULL;
      b_62 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm r_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_62;
      LocalPopChoice(q_37);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = p_37;
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_62 = NULL;
            d_62 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm u_37 = ATgetArgument(t, 0);
                ATerm v_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_62;
            LocalPopChoice(t_37);
            {
              ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  e_62 = ATgetArgument(t, 0);
                  f_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_62;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              g_62 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, g_62, f_62);
            }
          }
        else
          {
            t = s_37;
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
  ATerm d_63 = NULL,g_63 = NULL,i_63 = NULL,j_63 = NULL,v_22 = NULL;
  j_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_63);
  d_63 = t;
  t = g_63;
  t = topdown_1_0(l_6, t);
  t = listtd_1_0(n_6, t);
  i_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_63);
  v_22 = t;
  t = SSLsetAnnotations(v_22, d_63);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = repeat_2_0(o_6, _id, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_63 = ATgetFirst((ATermList) t);
      v_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_10(u_63, v_63, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm n_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,x_22 = NULL,w_22 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  b_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_63);
  n_62 = t;
  t = p_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_62 = ATgetFirst((ATermList) t);
      y_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_62);
  q_62 = t;
  t = y_62;
  t = Cons_2_0(_id, g_6, t);
  z_62 = t;
  t = (ATerm) ATinsert(CheckATermList(z_62), r_62);
  w_22 = t;
  t = SSLsetAnnotations(w_22, q_62);
  a_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_63);
  x_22 = t;
  t = SSLsetAnnotations(x_22, n_62);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        t = term_t_36;
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_36, x_64);
        t = z_11(h_26, x_64, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm a_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_38) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = x_64;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          ATerm b_27 = NULL;
          t = term_t_36;
          b_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_36, x_64);
          t = z_11(b_27, x_64, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_38) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = x_64;
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,n_67 = NULL;
  j_67 = t;
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm i_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_38);
        t = j_67;
        {
          ATerm j_38 = t;
          if((PushChoice() == 0))
            {
              ATerm z_27 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,c_23 = NULL;
              l_28 = t;
              if(match_cons(t, sym_Var_1))
                {
                  j_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_28);
              z_27 = t;
              t = j_28;
              {
                ATerm k_38 = t;
                int l_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(l_38);
                  }
                else
                  {
                    t = k_38;
                    {
                      ATerm c_29 = NULL,h_29 = NULL,r_29 = NULL,b_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          c_29 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(j_28);
                      h_29 = t;
                      t = c_29;
                      t = ContextVar_0_0(t);
                      r_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, r_29);
                      b_23 = t;
                      t = SSLsetAnnotations(b_23, h_29);
                    }
                  }
              }
              k_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, k_28);
              c_23 = t;
              t = SSLsetAnnotations(c_23, z_27);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_38;
            }
        }
        t = term_g_25;
      }
    else
      {
        t = g_38;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_g_25;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                k_67 = ATgetArgument(t, 0);
                {
                  ATerm r_67 = NULL;
                  t = k_67;
                  t = free_vars_3_0(r_6, u_6, tboundin_3_0, t);
                  t = map_1_0(y_6, t);
                  r_67 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_38, r_67);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    k_67 = ATgetArgument(t, 0);
                    n_67 = ATgetArgument(t, 1);
                    {
                      ATerm u_68 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, k_67, n_67);
                      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
                      t = map_1_0(c_7, t);
                      u_68 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_o_38, u_68);
                    }
                  }
                else
                  {
                    ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm p_38 = ATgetArgument(t, 0);
                        ATerm s_38 = ATgetArgument(t, 1);
                        ATerm t_38 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_z_36;
                    u_29 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_38);
                    v_29 = t;
                    t = SSL_printnl(u_29, v_29);
                    t = term_c_37;
                    t_29 = t;
                    t = SSL_exit(t_29);
                    t = (ATerm) ATinsert(ATempty, term_v_38);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm s_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_67);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
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
                  ATerm u_67 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_67 = ATgetArgument(t, 0);
                      f_68 = ATgetArgument(t, 1);
                      g_68 = ATgetArgument(t, 2);
                      h_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_68;
                  t = map_1_0(x_6, t);
                  LocalPopChoice(e_39);
                }
              else
                {
                  t = d_39;
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
  ATerm o_68 = NULL;
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_68 = ATgetArgument(t, 0);
          {
            ATerm h_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_39);
      t = o_68;
    }
  else
    {
      t = f_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_68;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm r_68 = NULL;
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_68);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm v_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_68);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            {
              ATerm u_39 = t;
              int v_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_69 = ATgetArgument(t, 0);
                      v_69 = ATgetArgument(t, 1);
                      w_69 = ATgetArgument(t, 2);
                      x_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_69;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(v_39);
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
static ATerm b_7 (ATerm t)
{
  ATerm e_70 = NULL;
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_70 = ATgetArgument(t, 0);
          {
            ATerm a_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_39);
      t = e_70;
    }
  else
    {
      t = y_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_70;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm h_70 = NULL;
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_70);
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
  ATerm h_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_74 = ATgetArgument(t, 0);
      t = h_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_74 = ATgetArgument(t, 0);
          {
            ATerm b_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_74;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_74), (ATerm) ATempty);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm n_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_74 = ATgetArgument(t, 0);
      t = n_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_74 = ATgetArgument(t, 0);
          {
            ATerm c_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_74;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, n_74);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm s_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_74);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm d_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(k_40);
          }
        else
          {
            t = j_40;
            {
              ATerm l_40 = t;
              int m_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_74 = ATgetArgument(t, 0);
                      w_74 = ATgetArgument(t, 1);
                      x_74 = ATgetArgument(t, 2);
                      y_74 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_74;
                  t = map_1_0(k_7, t);
                  LocalPopChoice(m_40);
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
static ATerm k_7 (ATerm t)
{
  ATerm k_75 = NULL;
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_75 = ATgetArgument(t, 0);
          {
            ATerm q_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_40);
      t = k_75;
    }
  else
    {
      t = n_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_75;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm n_75 = NULL;
  n_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_75);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm q_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_75);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
            {
              ATerm x_40 = t;
              int d_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_75 = ATgetArgument(t, 0);
                      t_75 = ATgetArgument(t, 1);
                      u_75 = ATgetArgument(t, 2);
                      v_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_75;
                  t = map_1_0(o_7, t);
                  LocalPopChoice(d_41);
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
static ATerm o_7 (ATerm t)
{
  ATerm e_76 = NULL;
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_76 = ATgetArgument(t, 0);
          {
            ATerm i_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_41);
      t = e_76;
    }
  else
    {
      t = g_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_76;
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm h_76 = NULL;
  h_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_76);
  return(t);
}
static ATerm s_7 (ATerm t)
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
static ATerm t_7 (ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm l_41 = t;
        int m_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_76 = ATgetArgument(t, 0);
                      m_76 = ATgetArgument(t, 1);
                      n_76 = ATgetArgument(t, 2);
                      o_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_76;
                  t = map_1_0(u_7, t);
                  LocalPopChoice(o_41);
                }
              else
                {
                  t = n_41;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm b_79 = NULL;
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_79 = ATgetArgument(t, 0);
          {
            ATerm r_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_41);
      t = b_79;
    }
  else
    {
      t = p_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_79;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm o_79 = NULL;
  o_79 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_82 = NULL,z_29 = NULL,b_30 = NULL,i_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            e_82 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_79);
        z_29 = t;
        t = e_82;
        t = ContextVar_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_30);
        i_23 = t;
        t = SSLsetAnnotations(i_23, z_29);
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, o_79);
  return(t);
}
static ATerm f_11 (ATerm b_143 (ATerm), ATerm m_85, ATerm j_85, ATerm k_85, ATerm w_85, ATerm a_86, ATerm b_86, ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
  t = term_w_34;
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_34, m_85);
  t = k_12(e_74, m_85, t);
  f_73 = t;
  t = term_x_34;
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_34, m_85);
  t = k_12(d_74, m_85, t);
  g_73 = t;
  t = new_0_0(t);
  h_73 = t;
  t = j_85;
  t = map_1_0(e_7, t);
  i_73 = t;
  t = k_85;
  t = map_1_0(f_7, t);
  j_73 = t;
  t = w_85;
  t = free_vars_3_0(g_7, i_7, tboundin_3_0, t);
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_85, k_73);
  t = conc_0_0(t);
  e_73 = t;
  t = k_73;
  t = map_1_0(l_7, t);
  c_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_73, c_74);
  t = conc_0_0(t);
  l_73 = t;
  t = new_0_0(t);
  m_73 = t;
  t = w_85;
  t = dummify_0_0(t);
  o_73 = t;
  {
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_73;
        if((w_85 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, m_73);
        LocalPopChoice(v_41);
      }
    else
      {
        t = u_41;
        t = o_73;
      }
  }
  n_73 = t;
  t = o_73;
  t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
  t = map_1_0(p_7, t);
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_86, b_86);
  t = free_vars_3_0(s_7, t_7, tboundin_3_0, t);
  t = filter_1_0(v_7, t);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_73, y_73);
  t = diff_0_0(t);
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_73, (ATerm) ATmakeAppl(sym_Op_2, term_w_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, z_73)), (ATerm) ATmakeAppl(sym_Str_1, h_73))));
  t = b_143(t);
  a_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, a_74), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_73, j_85, k_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_73), w_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_73), i_73, l_73))), term_f_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_h_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_73), (ATerm) ATmakeAppl(sym_Str_1, m_85))), term_l_42), term_f_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_85, j_85, k_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_73), w_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_73), i_73, l_73))), term_f_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_h_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_73), (ATerm) ATmakeAppl(sym_Str_1, m_85))), term_f_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_73, j_85, e_73, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, z_73)), (ATerm) ATmakeAppl(sym_Str_1, h_73))), a_86, b_86))));
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm b_143 (ATerm), ATerm t)
{
  ATerm r_82 = NULL,x_82 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm m_42 = ATgetArgument(t, 0);
      if(match_cons(m_42, sym_DynRuleId_1))
        {
          ATerm o_42 = ATgetArgument(m_42, 0);
          if(match_cons(o_42, sym_RDecT_3))
            {
              r_82 = ATgetArgument(o_42, 0);
              x_82 = ATgetArgument(o_42, 1);
              c_83 = ATgetArgument(o_42, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm n_42 = ATgetArgument(t, 1);
        if(match_cons(n_42, sym_Rule_3))
          {
            d_83 = ATgetArgument(n_42, 0);
            e_83 = ATgetArgument(n_42, 1);
            f_83 = ATgetArgument(n_42, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_11(b_143, r_82, x_82, c_83, d_83, e_83, f_83, t);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm g_84 = NULL,h_84 = NULL,y_84 = NULL,p_85 = NULL,r_85 = NULL,s_85 = NULL,f_86 = NULL,g_86 = NULL;
  h_84 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      y_84 = ATgetArgument(t, 0);
      g_86 = ATgetArgument(t, 1);
      t = y_84;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          p_85 = ATgetArgument(t, 0);
          g_84 = ATgetArgument(t, 1);
          {
            static ATerm w_7 (ATerm t)
            {
              ATerm b_87 = NULL,d_87 = NULL;
              b_87 = t;
              t = SSL_explode_term(b_87);
              if(match_cons(t, sym__2))
                {
                  ATerm p_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm q_42 = ATgetArgument(t, 1);
                    if(((ATgetType(q_42) == AT_LIST) && !(ATisEmpty(q_42))))
                      {
                        d_87 = ATgetFirst((ATermList) q_42);
                        {
                          ATerm r_42 = (ATerm) ATgetNext((ATermList) q_42);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_87), g_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_85))));
              return(t);
            }
            t = p_85;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_85 = ATgetArgument(t, 0);
                s_85 = ATgetArgument(t, 1);
                f_86 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_85, s_85, f_86)), (ATerm) ATmakeAppl(sym_Rule_3, g_86, term_y_42, term_o_20));
            t = SplitDynamicRule_1_0(w_7, t);
          }
        }
      else
        {
          ATerm h_87 = NULL;
          static ATerm y_7 (ATerm t)
          {
            ATerm i_87 = NULL,j_87 = NULL;
            i_87 = t;
            t = SSL_explode_term(i_87);
            if(match_cons(t, sym__2))
              {
                ATerm z_42 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_42) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm c_43 = ATgetArgument(t, 1);
                  if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
                    {
                      j_87 = ATgetFirst((ATermList) c_43);
                      {
                        ATerm d_43 = (ATerm) ATgetNext((ATermList) c_43);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_85))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              p_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_85;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_85 = ATgetArgument(t, 0);
              s_85 = ATgetArgument(t, 1);
              f_86 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_85, s_85, f_86)), (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_87), term_y_42, term_o_20));
          t = SplitDynamicRule_1_0(y_7, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          y_84 = ATgetArgument(t, 0);
          g_86 = ATgetArgument(t, 1);
          t = y_84;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              p_85 = ATgetArgument(t, 0);
              g_84 = ATgetArgument(t, 1);
              {
                static ATerm z_7 (ATerm t)
                {
                  ATerm s_87 = NULL,t_87 = NULL,d_30 = NULL;
                  s_87 = t;
                  t = SSL_explode_term(s_87);
                  if(match_cons(t, sym__2))
                    {
                      ATerm e_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) e_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm f_43 = ATgetArgument(t, 1);
                        if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
                          {
                            t_87 = ATgetFirst((ATermList) f_43);
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
                  t = SSL_explode_term(s_87);
                  if(match_cons(t, sym__2))
                    {
                      ATerm l_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) l_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm m_43 = ATgetArgument(t, 1);
                        if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
                          {
                            ATerm o_43 = ATgetFirst((ATermList) m_43);
                            ATerm p_43 = (ATerm) ATgetNext((ATermList) m_43);
                            if(((ATgetType(p_43) == AT_LIST) && !(ATisEmpty(p_43))))
                              {
                                d_30 = ATgetFirst((ATermList) p_43);
                                {
                                  ATerm q_43 = (ATerm) ATgetNext((ATermList) p_43);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_30), t_87), g_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_85))));
                  return(t);
                }
                t = p_85;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_85 = ATgetArgument(t, 0);
                    s_85 = ATgetArgument(t, 1);
                    f_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_85, s_85, f_86)), g_86);
                t = SplitDynamicRule_1_0(z_7, t);
              }
            }
          else
            {
              static ATerm a_8 (ATerm t)
              {
                ATerm a_88 = NULL,b_88 = NULL,g_30 = NULL;
                a_88 = t;
                t = SSL_explode_term(a_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_43 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) y_43) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm z_43 = ATgetArgument(t, 1);
                      if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
                        {
                          b_88 = ATgetFirst((ATermList) z_43);
                          {
                            ATerm b_44 = (ATerm) ATgetNext((ATermList) z_43);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(a_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm d_44 = ATgetArgument(t, 1);
                      if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
                        {
                          ATerm e_44 = ATgetFirst((ATermList) d_44);
                          ATerm f_44 = (ATerm) ATgetNext((ATermList) d_44);
                          if(((ATgetType(f_44) == AT_LIST) && !(ATisEmpty(f_44))))
                            {
                              g_30 = ATgetFirst((ATermList) f_44);
                              {
                                ATerm h_44 = (ATerm) ATgetNext((ATermList) f_44);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_30), b_88), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_85))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  p_85 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_85;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_85 = ATgetArgument(t, 0);
                  s_85 = ATgetArgument(t, 1);
                  f_86 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_85, s_85, f_86)), g_86);
              t = SplitDynamicRule_1_0(a_8, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              y_84 = ATgetArgument(t, 0);
              g_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_84;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              p_85 = ATgetArgument(t, 0);
              g_84 = ATgetArgument(t, 1);
              {
                static ATerm b_8 (ATerm t)
                {
                  ATerm k_88 = NULL,l_88 = NULL,r_30 = NULL;
                  k_88 = t;
                  t = SSL_explode_term(k_88);
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) j_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm k_44 = ATgetArgument(t, 1);
                        if(((ATgetType(k_44) == AT_LIST) && !(ATisEmpty(k_44))))
                          {
                            l_88 = ATgetFirst((ATermList) k_44);
                            {
                              ATerm l_44 = (ATerm) ATgetNext((ATermList) k_44);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(k_88);
                  if(match_cons(t, sym__2))
                    {
                      ATerm n_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) n_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm p_44 = ATgetArgument(t, 1);
                        if(((ATgetType(p_44) == AT_LIST) && !(ATisEmpty(p_44))))
                          {
                            ATerm r_44 = ATgetFirst((ATermList) p_44);
                            ATerm t_44 = (ATerm) ATgetNext((ATermList) p_44);
                            if(((ATgetType(t_44) == AT_LIST) && !(ATisEmpty(t_44))))
                              {
                                r_30 = ATgetFirst((ATermList) t_44);
                                {
                                  ATerm u_44 = (ATerm) ATgetNext((ATermList) t_44);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_30), l_88), g_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_85))));
                  return(t);
                }
                t = p_85;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_85 = ATgetArgument(t, 0);
                    s_85 = ATgetArgument(t, 1);
                    f_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_85, s_85, f_86)), g_86);
                t = SplitDynamicRule_1_0(b_8, t);
              }
            }
          else
            {
              static ATerm i_8 (ATerm t)
              {
                ATerm q_88 = NULL,t_88 = NULL,x_30 = NULL;
                q_88 = t;
                t = SSL_explode_term(q_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) y_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm a_45 = ATgetArgument(t, 1);
                      if(((ATgetType(a_45) == AT_LIST) && !(ATisEmpty(a_45))))
                        {
                          t_88 = ATgetFirst((ATermList) a_45);
                          {
                            ATerm c_45 = (ATerm) ATgetNext((ATermList) a_45);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(q_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_45) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_45 = ATgetArgument(t, 1);
                      if(((ATgetType(e_45) == AT_LIST) && !(ATisEmpty(e_45))))
                        {
                          ATerm f_45 = ATgetFirst((ATermList) e_45);
                          ATerm g_45 = (ATerm) ATgetNext((ATermList) e_45);
                          if(((ATgetType(g_45) == AT_LIST) && !(ATisEmpty(g_45))))
                            {
                              x_30 = ATgetFirst((ATermList) g_45);
                              {
                                ATerm j_45 = (ATerm) ATgetNext((ATermList) g_45);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_30), t_88), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_85))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  p_85 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_85;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_85 = ATgetArgument(t, 0);
                  {
                    ATerm l_45 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm m_45 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = h_84;
              t = SplitDynamicRule_1_0(i_8, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  static ATerm u_88 (ATerm t)
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
        t = SRTS_one(u_88, t);
      }
    return(t);
  }
  t = u_88(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm y_142 (ATerm), ATerm t)
{
  static ATerm d_89 (ATerm t)
  {
    static ATerm o_8 (ATerm t)
    {
      ATerm s_45 = t;
      int w_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_142(t);
          LocalPopChoice(w_45);
        }
      else
        {
          t = s_45;
          {
            ATerm x_88 = NULL,y_88 = NULL,c_89 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                x_88 = ATgetArgument(t, 0);
                y_88 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_88, y_88);
            {
              static ATerm r_8 (ATerm t)
              {
                t = x_88;
                t = DeclareContextVars_0_0(t);
                t = y_88;
                t = d_89(t);
                if(((c_89 != NULL) && (c_89 != t)))
                  _fail(t);
                else
                  c_89 = t;
                return(t);
              }
              t = scope_2_0(q_8, r_8, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_88, not_null(c_89));
          }
        }
      return(t);
    }
    t = oncetd_1_0(o_8, t);
    return(t);
  }
  t = d_89(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm k_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
  o_89 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      n_89 = ATgetArgument(t, 0);
      {
        ATerm y_45 = t;
        int b_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_89;
            k_89 = t;
            t = o_89;
            LocalPopChoice(b_46);
          }
        else
          {
            t = y_45;
            t = o_89;
            k_89 = t;
            t = o_89;
          }
      }
    }
  else
    {
      t = o_89;
      k_89 = t;
      t = o_89;
    }
  t = term_d_46;
  m_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_89, term_d_46);
  t = a_12(x_8, k_89, m_89, t);
  t = o_89;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm p_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL;
  t_89 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_89 = ATgetArgument(t, 0);
      {
        ATerm f_46 = t;
        int g_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_89;
            p_89 = t;
            t = t_89;
            LocalPopChoice(g_46);
          }
        else
          {
            t = f_46;
            t = t_89;
            p_89 = t;
            t = t_89;
          }
      }
    }
  else
    {
      t = t_89;
      p_89 = t;
      t = t_89;
    }
  t = term_i_46;
  r_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_89, term_i_46);
  t = a_12(b_9, p_89, r_89, t);
  t = t_89;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm k_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(u_8, t);
      LocalPopChoice(m_46);
    }
  else
    {
      t = k_46;
      t = map_1_0(a_9, t);
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm k_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_31);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm p_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_46);
          }
        else
          {
            t = p_46;
            {
              ATerm s_46 = t;
              int t_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_31 = ATgetArgument(t, 0);
                      o_31 = ATgetArgument(t, 1);
                      p_31 = ATgetArgument(t, 2);
                      q_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_31;
                  t = map_1_0(e_9, t);
                  LocalPopChoice(t_46);
                }
              else
                {
                  t = s_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm e_32 = NULL;
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_32 = ATgetArgument(t, 0);
          {
            ATerm w_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_46);
      t = e_32;
    }
  else
    {
      t = u_46;
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
static ATerm g_9 (ATerm t)
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
            ATerm x_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_32;
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm l_33 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_33 = ATgetArgument(t, 0);
      t = l_33;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_33 = ATgetArgument(t, 0);
          {
            ATerm z_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_33;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
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
static ATerm p_9 (ATerm t)
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
static ATerm q_9 (ATerm t)
{
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_47);
    }
  else
    {
      t = a_47;
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
            {
              ATerm f_47 = t;
              int g_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_34 = NULL,l_34 = NULL,n_34 = NULL,p_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_34 = ATgetArgument(t, 0);
                      l_34 = ATgetArgument(t, 1);
                      n_34 = ATgetArgument(t, 2);
                      p_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_34;
                  t = map_1_0(r_9, t);
                  LocalPopChoice(g_47);
                }
              else
                {
                  t = f_47;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm h_35 = NULL;
  ATerm h_47 = t;
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
      t = h_47;
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
static ATerm s_9 (ATerm t)
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
            ATerm o_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_36;
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm k_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_36 = ATgetArgument(t, 0);
      t = k_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_36 = ATgetArgument(t, 0);
          {
            ATerm p_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_36;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm s_36 = NULL;
  if(match_cons(t, sym__2))
    {
      s_36 = ATgetArgument(t, 0);
      if((s_36 != ATgetArgument(t, 1)))
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
  ATerm g_94 = NULL;
  g_94 = t;
  {
    ATerm q_47 = t;
    int r_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL,i_31 = NULL;
        t = g_94;
        t = free_vars_3_0(c_9, d_9, tboundin_3_0, t);
        c_31 = t;
        t = g_94;
        {
          ATerm t_47 = t;
          int v_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_32 = NULL;
              ATerm w_47 = t;
              int x_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm y_47 = ATgetArgument(t, 0);
                      ATerm b_48 = ATgetArgument(t, 1);
                      m_32 = ATgetArgument(t, 2);
                      {
                        ATerm d_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_47);
                  t = m_32;
                  t = map_1_0(g_9, t);
                }
              else
                {
                  t = w_47;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm e_48 = ATgetArgument(t, 0);
                      ATerm j_48 = ATgetArgument(t, 1);
                      m_32 = ATgetArgument(t, 2);
                      {
                        ATerm k_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = m_32;
                  t = map_1_0(m_9, t);
                }
              LocalPopChoice(v_47);
            }
          else
            {
              t = t_47;
              t = (ATerm) ATempty;
            }
        }
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, i_31);
        t = o_11(n_9, c_31, i_31, t);
        LocalPopChoice(r_47);
      }
    else
      {
        t = q_47;
        {
          ATerm e_34 = NULL,f_34 = NULL;
          t = g_94;
          t = free_vars_3_0(p_9, q_9, tboundin_3_0, t);
          e_34 = t;
          t = g_94;
          {
            ATerm n_48 = t;
            int o_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_35 = NULL;
                ATerm p_48 = t;
                int q_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm r_48 = ATgetArgument(t, 0);
                        ATerm s_48 = ATgetArgument(t, 1);
                        s_35 = ATgetArgument(t, 2);
                        {
                          ATerm u_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_48);
                    t = s_35;
                    t = map_1_0(s_9, t);
                  }
                else
                  {
                    t = p_48;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm v_48 = ATgetArgument(t, 0);
                        ATerm w_48 = ATgetArgument(t, 1);
                        s_35 = ATgetArgument(t, 2);
                        {
                          ATerm x_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = s_35;
                    t = map_1_0(t_9, t);
                  }
                LocalPopChoice(o_48);
              }
            else
              {
                t = n_48;
                t = (ATerm) ATempty;
              }
          }
          f_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
          t = o_11(u_9, e_34, f_34, t);
        }
      }
  }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_t_36;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_31;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_95 = ATgetFirst((ATermList) t);
      b_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_95, b_95);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_48 = ATgetArgument(t, 0);
      if(match_cons(y_48, sym__2))
        {
          j_95 = ATgetArgument(y_48, 0);
          k_95 = ATgetArgument(y_48, 1);
        }
      else
        _fail(t);
      {
        ATerm c_49 = ATgetArgument(t, 1);
        if(match_cons(c_49, sym__2))
          {
            l_95 = ATgetArgument(c_49, 0);
            m_95 = ATgetArgument(c_49, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_95), j_95), (ATerm) ATinsert(CheckATermList(m_95), k_95));
  return(t);
}
static ATerm i_11 (ATerm u_83, ATerm t_83, ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
  static ATerm w_9 (ATerm t)
  {
    t = u_83;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = u_83;
    {
      static ATerm x_9 (ATerm t)
      {
        ATerm s_94 = NULL,t_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,o_23 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            s_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_94;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(y_9, z_9, h_10, _id, t);
        z_94 = t;
        if(match_cons(t, sym__2))
          {
            w_94 = ATgetArgument(t, 0);
            x_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_94);
        t_94 = t;
        t = x_94;
        t = concat_0_0(t);
        y_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_94, y_94);
        o_23 = t;
        t = SSLsetAnnotations(o_23, t_94);
        if(match_cons(t, sym__2))
          {
            if(((p_94 != NULL) && (p_94 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              p_94 = ATgetArgument(t, 0);
            if(((o_94 != NULL) && (o_94 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              o_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, p_94);
        return(t);
      }
      t = split_dynamic_rule_1_0(x_9, t);
    }
    if(((q_94 != NULL) && (q_94 != t)))
      _fail(t);
    else
      q_94 = t;
    return(t);
  }
  t = scope_2_0(v_9, w_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_94)), not_null(q_94)), t_83);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t)
{
  static ATerm q_95 (ATerm t)
  {
    ATerm g_49 = t;
    int h_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_109(t);
        t = q_95(t);
        LocalPopChoice(h_49);
      }
    else
      {
        t = g_49;
        t = f_109(t);
      }
    return(t);
  }
  t = q_95(t);
  return(t);
}
ATerm listtd_1_0 (ATerm a_118 (ATerm), ATerm t)
{
  static ATerm v_96 (ATerm t)
  {
    ATerm m_96 = NULL,p_96 = NULL,r_96 = NULL;
    t = a_118(t);
    m_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_96;
      }
    else
      {
        ATerm y_36 = NULL,b_37 = NULL,q_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_96 = ATgetFirst((ATermList) t);
            r_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_96);
        y_36 = t;
        t = r_96;
        t = v_96(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(b_37), p_96);
        q_23 = t;
        t = SSLsetAnnotations(q_23, y_36);
      }
    return(t);
  }
  t = v_96(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm d_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,j_97 = NULL,k_97 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      j_97 = ATgetArgument(t, 0);
      k_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_97 = ATgetFirst((ATermList) t);
      h_97 = (ATerm) ATgetNext((ATermList) t);
      t = f_97;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          g_97 = ATgetArgument(t, 0);
          d_97 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, g_97, d_97), (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_97, k_97))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, g_97)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              g_97 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_97, k_97)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, g_97)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_97;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,g_98 = NULL;
  t = term_z_36;
  a_98 = t;
  t = (ATerm) ATinsert(ATempty, term_k_49);
  g_98 = t;
  t = SSL_printnl(a_98, g_98);
  t = term_c_37;
  z_97 = t;
  t = SSL_exit(z_97);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
  t = term_z_36;
  i_98 = t;
  t = (ATerm) ATinsert(ATempty, term_l_49);
  j_98 = t;
  t = SSL_printnl(i_98, j_98);
  t = term_c_37;
  h_98 = t;
  t = SSL_exit(h_98);
  return(t);
}
ATerm debug_1_0 (ATerm f_116 (ATerm), ATerm t)
{
  ATerm k_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL;
  k_98 = t;
  t = f_116(t);
  n_98 = t;
  t = term_z_36;
  o_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_98), n_98);
  p_98 = t;
  t = SSL_printnl(o_98, p_98);
  t = k_98;
  return(t);
}
static ATerm w_100 (ATerm t_99, ATerm u_99, ATerm v_99, ATerm w_99, ATerm y_99, ATerm a_100, ATerm b_100, ATerm t)
{
  t = b_100;
  {
    ATerm m_49 = t;
    if((PushChoice() == 0))
      {
        t = y_99;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_49) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_49;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, t_99, u_99, v_99)), (ATerm) ATmakeAppl(sym_Rule_3, w_99, y_99, a_100));
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_p_49;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm k_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL;
  n_100 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      o_100 = ATgetArgument(t, 0);
      p_100 = ATgetArgument(t, 1);
      q_100 = ATgetArgument(t, 2);
      r_100 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = r_100;
  if(match_cons(t, sym_Rule_3))
    {
      s_100 = ATgetArgument(t, 0);
      t_100 = ATgetArgument(t, 1);
      u_100 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_100;
  if(match_cons(t, sym_Var_1))
    {
      k_100 = ATgetArgument(t, 0);
      t = k_100;
      if(match_string(t, "Undefined"))
        {
          ATerm t_49 = t;
          int u_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_100;
              {
                ATerm v_49 = t;
                int w_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_100;
                    if(!(match_cons(t, sym_Id_0)))
                      _fail(t);
                    LocalPopChoice(w_49);
                  }
                else
                  {
                    t = v_49;
                    {
                      ATerm u_38 = NULL,w_38 = NULL;
                      t = term_z_36;
                      u_38 = t;
                      t = (ATerm) ATinsert(ATempty, term_x_49);
                      w_38 = t;
                      t = SSL_printnl(u_38, w_38);
                      t = n_100;
                      t = debug_1_0(e_11, t);
                    }
                  }
              }
              t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, o_100, p_100, q_100)), s_100);
              LocalPopChoice(u_49);
            }
          else
            {
              t = t_49;
              t = w_100(o_100, p_100, q_100, s_100, t_100, u_100, n_100, t);
            }
        }
      else
        {
          t = w_100(o_100, p_100, q_100, s_100, t_100, u_100, n_100, t);
        }
    }
  else
    {
      t = w_100(o_100, p_100, q_100, s_100, t_100, u_100, n_100, t);
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_100 = NULL;
      y_100 = t;
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          ATerm a_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_100;
      LocalPopChoice(z_49);
      {
        ATerm z_100 = NULL,a_101 = NULL;
        if(match_cons(t, sym_ExtendDynamicRules_1))
          {
            z_100 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_100;
        t = map_1_0(RDefToDRDef_extend_0_0, t);
        a_101 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, a_101);
      }
    }
  else
    {
      t = y_49;
      {
        ATerm b_50 = t;
        int c_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_101 = NULL;
            b_101 = t;
            if(match_cons(t, sym_OverrideDynamicRules_1))
              {
                ATerm d_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_101;
            LocalPopChoice(c_50);
            t = UpgradeOverrideDynamicRules_0_0(t);
          }
        else
          {
            t = b_50;
            {
              ATerm e_50 = t;
              int f_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_101 = NULL;
                  d_101 = t;
                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                    {
                      ATerm g_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = d_101;
                  LocalPopChoice(f_50);
                  t = UpgradeExtendOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = e_50;
                }
            }
          }
      }
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(h_11, t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = Cons_2_0(s_11, t_11, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm c_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,s_23 = NULL;
  i_102 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_102);
  c_102 = t;
  t = g_102;
  t = topdown_1_0(u_11, t);
  t = listtd_1_0(w_11, t);
  h_102 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_102);
  s_23 = t;
  t = SSLsetAnnotations(s_23, c_102);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_50 = t;
      int k_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(k_50);
        }
      else
        {
          t = j_50;
          {
            ATerm l_102 = NULL,m_102 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                l_102 = ATgetArgument(t, 0);
                m_102 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_50, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, m_102), (ATerm) ATmakeAppl(sym_Str_1, l_102)));
          }
        }
      LocalPopChoice(i_50);
    }
  else
    {
      t = h_50;
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = repeat_2_0(x_11, _id, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_102 = ATgetFirst((ATermList) t);
      u_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_11(t_102, u_102, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,t_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,u_23 = NULL,t_23 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  a_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_102);
  l_101 = t;
  t = m_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_101 = ATgetFirst((ATermList) t);
      x_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_101);
  t_101 = t;
  t = x_101;
  t = Cons_2_0(_id, m_11, t);
  y_101 = t;
  t = (ATerm) ATinsert(CheckATermList(y_101), w_101);
  t_23 = t;
  t = SSLsetAnnotations(t_23, t_101);
  z_101 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_101);
  u_23 = t;
  t = SSLsetAnnotations(u_23, l_101);
  return(t);
}
ATerm tboundin_3_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t)
{
  ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL;
  z_107 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_108 = ATgetArgument(t, 0);
      w_107 = ATgetArgument(t, 1);
      {
        ATerm t_39 = NULL,w_39 = NULL,x_39 = NULL,q_24 = NULL;
        t = SSLgetAnnotations(z_107);
        t_39 = t;
        t = a_108;
        t = l_142(t);
        w_39 = t;
        t = w_107;
        t = j_142(t);
        x_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_39, x_39);
        q_24 = t;
        t = SSLsetAnnotations(q_24, t_39);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          a_108 = ATgetArgument(t, 0);
          w_107 = ATgetArgument(t, 1);
          x_107 = ATgetArgument(t, 2);
          {
            ATerm p_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,s_24 = NULL;
            t = SSLgetAnnotations(z_107);
            p_40 = t;
            t = a_108;
            t = l_142(t);
            a_41 = t;
            t = w_107;
            t = l_142(t);
            b_41 = t;
            t = x_107;
            t = l_142(t);
            c_41 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, a_41, b_41, c_41);
            s_24 = t;
            t = SSLsetAnnotations(s_24, p_40);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_108 = ATgetArgument(t, 0);
              w_107 = ATgetArgument(t, 1);
              x_107 = ATgetArgument(t, 2);
              y_107 = ATgetArgument(t, 3);
              {
                ATerm c_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,v_24 = NULL;
                t = SSLgetAnnotations(z_107);
                c_42 = t;
                t = a_108;
                t = l_142(t);
                s_42 = t;
                t = w_107;
                t = l_142(t);
                t_42 = t;
                t = x_107;
                t = l_142(t);
                u_42 = t;
                t = y_107;
                t = j_142(t);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_42, t_42, u_42, v_42);
                v_24 = t;
                t = SSLsetAnnotations(v_24, c_42);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  a_108 = ATgetArgument(t, 0);
                  w_107 = ATgetArgument(t, 1);
                  x_107 = ATgetArgument(t, 2);
                  y_107 = ATgetArgument(t, 3);
                  {
                    ATerm n_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,b_25 = NULL;
                    t = SSLgetAnnotations(z_107);
                    n_43 = t;
                    t = a_108;
                    t = l_142(t);
                    t_43 = t;
                    t = w_107;
                    t = l_142(t);
                    u_43 = t;
                    t = x_107;
                    t = l_142(t);
                    v_43 = t;
                    t = y_107;
                    t = j_142(t);
                    w_43 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, t_43, u_43, v_43, w_43);
                    b_25 = t;
                    t = SSLsetAnnotations(b_25, n_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      a_108 = ATgetArgument(t, 0);
                      {
                        ATerm g_44 = NULL,i_44 = NULL,c_25 = NULL;
                        t = SSLgetAnnotations(z_107);
                        g_44 = t;
                        t = a_108;
                        t = j_142(t);
                        i_44 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, i_44);
                        c_25 = t;
                        t = SSLsetAnnotations(c_25, g_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          a_108 = ATgetArgument(t, 0);
                          {
                            ATerm q_44 = NULL,s_44 = NULL,d_25 = NULL;
                            t = SSLgetAnnotations(z_107);
                            q_44 = t;
                            t = a_108;
                            t = j_142(t);
                            s_44 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_44);
                            d_25 = t;
                            t = SSLsetAnnotations(d_25, q_44);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              a_108 = ATgetArgument(t, 0);
                              {
                                ATerm z_44 = NULL,b_45 = NULL,i_25 = NULL;
                                t = SSLgetAnnotations(z_107);
                                z_44 = t;
                                t = a_108;
                                t = j_142(t);
                                b_45 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, b_45);
                                i_25 = t;
                                t = SSLsetAnnotations(i_25, z_44);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  a_108 = ATgetArgument(t, 0);
                                  {
                                    ATerm h_45 = NULL,k_45 = NULL,j_25 = NULL;
                                    t = SSLgetAnnotations(z_107);
                                    h_45 = t;
                                    t = a_108;
                                    t = j_142(t);
                                    k_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, k_45);
                                    j_25 = t;
                                    t = SSLsetAnnotations(j_25, h_45);
                                  }
                                }
                              else
                                {
                                  ATerm u_45 = NULL,z_45 = NULL,k_25 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      a_108 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(z_107);
                                  u_45 = t;
                                  t = a_108;
                                  t = j_142(t);
                                  z_45 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, z_45);
                                  k_25 = t;
                                  t = SSLsetAnnotations(k_25, u_45);
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
static ATerm y_11 (ATerm t)
{
  ATerm w_108 = NULL;
  ATerm n_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_108 = ATgetArgument(t, 0);
          {
            ATerm q_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_50);
      t = w_108;
    }
  else
    {
      t = n_50;
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
static ATerm c_12 (ATerm t)
{
  ATerm h_109 = NULL;
  ATerm r_50 = t;
  int s_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_109 = ATgetArgument(t, 0);
          {
            ATerm t_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_50);
      t = h_109;
    }
  else
    {
      t = r_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_109;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm r_108 = NULL;
  ATerm u_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm w_50 = ATgetArgument(t, 0);
          ATerm x_50 = ATgetArgument(t, 1);
          r_108 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(v_50);
      t = r_108;
      t = map_1_0(y_11, t);
    }
  else
    {
      t = u_50;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm y_50 = ATgetArgument(t, 0);
          ATerm z_50 = ATgetArgument(t, 1);
          r_108 = ATgetArgument(t, 2);
          {
            ATerm a_51 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_108;
      t = map_1_0(c_12, t);
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm g_110 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_110);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm b_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_51);
    }
  else
    {
      t = b_51;
      {
        ATerm d_51 = t;
        int e_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_51);
          }
        else
          {
            t = d_51;
            {
              ATerm f_51 = t;
              int g_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_110 = NULL,j_110 = NULL,k_110 = NULL,l_110 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_110 = ATgetArgument(t, 0);
                      j_110 = ATgetArgument(t, 1);
                      k_110 = ATgetArgument(t, 2);
                      l_110 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_110;
                  t = map_1_0(z_12, t);
                  LocalPopChoice(g_51);
                }
              else
                {
                  t = f_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm s_110 = NULL;
  ATerm h_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_110 = ATgetArgument(t, 0);
          {
            ATerm j_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_51);
      t = s_110;
    }
  else
    {
      t = h_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_110;
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm w_110 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_110);
  return(t);
}
static ATerm d_14 (ATerm t)
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
                  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_110 = ATgetArgument(t, 0);
                      z_110 = ATgetArgument(t, 1);
                      a_111 = ATgetArgument(t, 2);
                      b_111 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_111;
                  t = map_1_0(e_14, t);
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
static ATerm e_14 (ATerm t)
{
  ATerm k_111 = NULL;
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_111 = ATgetArgument(t, 0);
          {
            ATerm s_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_51);
      t = k_111;
    }
  else
    {
      t = q_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_111;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm o_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_111);
  return(t);
}
static ATerm j_14 (ATerm t)
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
                  ATerm q_111 = NULL,r_111 = NULL,s_111 = NULL,t_111 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_111 = ATgetArgument(t, 0);
                      r_111 = ATgetArgument(t, 1);
                      s_111 = ATgetArgument(t, 2);
                      t_111 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_111;
                  t = map_1_0(k_14, t);
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
static ATerm k_14 (ATerm t)
{
  ATerm c_112 = NULL;
  ATerm z_51 = t;
  int b_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_112 = ATgetArgument(t, 0);
          {
            ATerm c_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_52);
      t = c_112;
    }
  else
    {
      t = z_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_112;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm g_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_112);
  return(t);
}
static ATerm r_14 (ATerm t)
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
                  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_112 = ATgetArgument(t, 0);
                      j_112 = ATgetArgument(t, 1);
                      k_112 = ATgetArgument(t, 2);
                      l_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_112;
                  t = map_1_0(t_14, t);
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
static ATerm t_14 (ATerm t)
{
  ATerm s_112 = NULL;
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_112 = ATgetArgument(t, 0);
          {
            ATerm l_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_52);
      t = s_112;
    }
  else
    {
      t = j_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_112;
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm w_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_112);
  return(t);
}
static ATerm v_14 (ATerm t)
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
                  ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL,b_113 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_112 = ATgetArgument(t, 0);
                      z_112 = ATgetArgument(t, 1);
                      a_113 = ATgetArgument(t, 2);
                      b_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_113;
                  t = map_1_0(w_14, t);
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
static ATerm w_14 (ATerm t)
{
  ATerm i_113 = NULL;
  ATerm s_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_113 = ATgetArgument(t, 0);
          {
            ATerm v_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_52);
      t = i_113;
    }
  else
    {
      t = s_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_113;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm c_110 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      c_110 = ATgetArgument(t, 0);
      t = c_110;
      t = free_vars_3_0(r_12, u_12, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          c_110 = ATgetArgument(t, 0);
          t = c_110;
          t = free_vars_3_0(j_13, d_14, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              c_110 = ATgetArgument(t, 0);
              t = c_110;
              t = free_vars_3_0(g_14, j_14, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_110 = ATgetArgument(t, 0);
                  t = c_110;
                  t = free_vars_3_0(p_14, r_14, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      c_110 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_110;
                  t = free_vars_3_0(u_14, v_14, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm w_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_113);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm w_52 = t;
  int y_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_52);
    }
  else
    {
      t = w_52;
      {
        ATerm z_52 = t;
        int a_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_53);
          }
        else
          {
            t = z_52;
            {
              ATerm b_53 = t;
              int c_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL,b_114 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_113 = ATgetArgument(t, 0);
                      z_113 = ATgetArgument(t, 1);
                      a_114 = ATgetArgument(t, 2);
                      b_114 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_114;
                  t = map_1_0(b_15, t);
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
static ATerm b_15 (ATerm t)
{
  ATerm i_114 = NULL;
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_114 = ATgetArgument(t, 0);
          {
            ATerm f_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_53);
      t = i_114;
    }
  else
    {
      t = d_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_114;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_113 = NULL,t_113 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_113 = ATgetArgument(t, 0);
      t = t_113;
      if(match_cons(t, sym_Rule_3))
        {
          p_113 = ATgetArgument(t, 0);
          {
            ATerm g_53 = ATgetArgument(t, 1);
          }
          {
            ATerm h_53 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_113;
      t = free_vars_3_0(y_14, z_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_113 = ATgetArgument(t, 0);
          {
            ATerm i_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_113;
    }
  return(t);
}
static ATerm o_11 (ATerm b_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  static ATerm b_115 (ATerm t)
  {
    ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL;
    w_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_114 = ATgetFirst((ATermList) t);
            y_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_53 = t;
          int k_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_114;
              {
                static ATerm e_15 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = p_11(b_121, e_15, x_114, y_114, t);
              }
              t = b_115(t);
              LocalPopChoice(k_53);
            }
          else
            {
              t = j_53;
              {
                ATerm j_46 = NULL,y_46 = NULL,y_25 = NULL;
                t = SSLgetAnnotations(w_114);
                j_46 = t;
                t = y_114;
                t = b_115(t);
                y_46 = t;
                t = (ATerm) ATinsert(CheckATermList(y_46), x_114);
                y_25 = t;
                t = SSLsetAnnotations(y_25, j_46);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = b_115(t);
  return(t);
}
static ATerm p_11 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  t = f_121(t);
  {
    static ATerm h_15 (ATerm t)
    {
      ATerm f_115 = NULL;
      f_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, f_115);
      t = e_121(t);
      return(t);
    }
    t = fetch_1_0(h_15, t);
  }
  t = p_30;
  return(t);
}
static ATerm q_11 (ATerm w_120 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm v_115 (ATerm t)
  {
    ATerm q_115 = NULL,r_115 = NULL,s_115 = NULL;
    q_115 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_115;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_115 = ATgetFirst((ATermList) t);
            s_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_53 = t;
          int m_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_115;
              {
                static ATerm i_15 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = p_11(w_120, i_15, r_115, s_115, t);
              }
              t = v_115(t);
              LocalPopChoice(m_53);
            }
          else
            {
              t = l_53;
              {
                ATerm s_47 = NULL,c_48 = NULL,a_26 = NULL;
                t = SSLgetAnnotations(q_115);
                s_47 = t;
                t = s_115;
                t = v_115(t);
                c_48 = t;
                t = (ATerm) ATinsert(CheckATermList(c_48), r_115);
                a_26 = t;
                t = SSLsetAnnotations(a_26, s_47);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = v_115(t);
  return(t);
}
ATerm genzip_4_0 (ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm t)
{
  static ATerm d_116 (ATerm t)
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_118(t);
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        {
          ATerm x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL,m_26 = NULL;
          t = v_118(t);
          c_116 = t;
          if(match_cons(t, sym__2))
            {
              y_115 = ATgetArgument(t, 0);
              z_115 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_116);
          x_115 = t;
          t = y_115;
          t = x_118(t);
          a_116 = t;
          t = z_115;
          t = d_116(t);
          b_116 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_116, b_116);
          m_26 = t;
          t = SSLsetAnnotations(m_26, x_115);
          t = w_118(t);
        }
      }
    return(t);
  }
  t = d_116(t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_53 = ATgetArgument(t, 0);
      if(((ATgetType(q_53) != AT_LIST) || !(ATisEmpty(q_53))))
        _fail(t);
      {
        ATerm s_53 = ATgetArgument(t, 1);
        if(((ATgetType(s_53) != AT_LIST) || !(ATisEmpty(s_53))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm m_116 = NULL,n_116 = NULL,p_116 = NULL,s_116 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_53 = ATgetArgument(t, 0);
      if(((ATgetType(t_53) == AT_LIST) && !(ATisEmpty(t_53))))
        {
          m_116 = ATgetFirst((ATermList) t_53);
          n_116 = (ATerm) ATgetNext((ATermList) t_53);
        }
      else
        _fail(t);
      {
        ATerm u_53 = ATgetArgument(t, 1);
        if(((ATgetType(u_53) == AT_LIST) && !(ATisEmpty(u_53))))
          {
            p_116 = ATgetFirst((ATermList) u_53);
            s_116 = (ATerm) ATgetNext((ATermList) u_53);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_116, p_116), (ATerm) ATmakeAppl(sym__2, n_116, s_116));
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm t_116 = NULL,u_116 = NULL;
  if(match_cons(t, sym__2))
    {
      t_116 = ATgetArgument(t, 0);
      u_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_116), t_116);
  return(t);
}
static ATerm v_11 (ATerm a_673, ATerm f_673, ATerm v_66, ATerm t)
{
  ATerm g_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL;
  t = SSL_explode_term(f_673);
  if(match_cons(t, sym__2))
    {
      g_116 = ATgetArgument(t, 0);
      j_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_673);
  if(match_cons(t, sym__2))
    {
      if((g_116 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_116, j_116);
  t = genzip_4_0(j_15, k_15, l_15, _id, t);
  k_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_116, v_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t)
{
  static ATerm w_116 (ATerm t)
  {
    ATerm v_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_109(t);
        LocalPopChoice(w_53);
      }
    else
      {
        t = v_53;
        t = w_109(t);
        t = w_116(t);
      }
    return(t);
  }
  t = w_116(t);
  return(t);
}
ATerm for_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t)
{
  t = y_109(t);
  t = while_not_2_0(z_109, a_110, t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm f_117 = NULL;
  f_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_117);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm g_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,r_26 = NULL;
  l_117 = t;
  if(match_cons(t, sym__2))
    {
      j_117 = ATgetArgument(t, 0);
      k_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_117);
  g_117 = t;
  t = k_117;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_117, k_117);
  r_26 = t;
  t = SSLsetAnnotations(r_26, g_117);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL;
  g_118 = t;
  if(match_cons(t, sym__2))
    {
      h_118 = ATgetArgument(t, 0);
      i_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_118 = ATgetFirst((ATermList) t);
      k_118 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_53 = t;
        int y_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_118(h_118, i_118, g_118, t);
            LocalPopChoice(y_53);
          }
        else
          {
            t = x_53;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_118), j_118), k_118);
          }
      }
    }
  else
    {
      t = z_118(h_118, i_118, g_118, t);
    }
  return(t);
}
static ATerm z_118 (ATerm m_117, ATerm n_117, ATerm o_117, ATerm t)
{
  ATerm p_117 = NULL,s_117 = NULL,s_26 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL;
  t = SSLgetAnnotations(o_117);
  p_117 = t;
  t = n_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_117 = ATgetFirst((ATermList) t);
      y_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_117;
  if(match_cons(t, sym__2))
    {
      w_117 = ATgetArgument(t, 0);
      x_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_117;
        if((w_117 != t))
          {
            _fail(t);
          }
        t = y_117;
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        t = n_117;
        t = v_11(w_117, x_117, y_117, t);
      }
  }
  s_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_117, s_117);
  s_26 = t;
  t = SSLsetAnnotations(s_26, p_117);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm t_118 = NULL;
  if(match_cons(t, sym__2))
    {
      t_118 = ATgetArgument(t, 0);
      if((t_118 != ATgetArgument(t, 1)))
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
  ATerm c_54 = t;
  int d_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_15, n_15, o_15, t);
      LocalPopChoice(d_54);
    }
  else
    {
      t = c_54;
      {
        ATerm o_118 = NULL,p_118 = NULL,q_118 = NULL;
        o_118 = t;
        if(match_cons(t, sym__2))
          {
            p_118 = ATgetArgument(t, 0);
            q_118 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_118;
        t = q_11(p_15, p_118, q_118, t);
      }
    }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(z_15, z_48, a_49, t);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm b_49 = NULL;
  if(match_cons(t, sym__2))
    {
      b_49 = ATgetArgument(t, 0);
      if((b_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(e_16, q_49, r_49, t);
  return(t);
}
static ATerm e_16 (ATerm t)
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
ATerm free_vars_3_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_119 (ATerm t)
  {
    ATerm f_54 = t;
    int g_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_139(t);
        LocalPopChoice(g_54);
      }
    else
      {
        t = f_54;
        {
          ATerm h_54 = t;
          int j_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_119 = NULL,c_119 = NULL,l_48 = NULL,m_48 = NULL;
              b_119 = t;
              t = x_139(t);
              c_119 = t;
              t = b_119;
              {
                static ATerm q_15 (ATerm t)
                {
                  ATerm e_119 = NULL;
                  t = n_119(t);
                  e_119 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_119, c_119);
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_139(q_15, n_119, w_15, t);
              }
              m_48 = t;
              t = SSL_explode_term(m_48);
              if(match_cons(t, sym__2))
                {
                  ATerm k_54 = ATgetArgument(t, 0);
                  l_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_48;
              t = foldr_3_0(x_15, y_15, _id, t);
              LocalPopChoice(j_54);
            }
          else
            {
              t = h_54;
              {
                ATerm e_49 = NULL,f_49 = NULL;
                f_49 = t;
                t = SSL_explode_term(f_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_54 = ATgetArgument(t, 0);
                    e_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_49;
                t = foldr_3_0(c_16, d_16, n_119, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_119(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  static ATerm f_16 (ATerm t)
  {
    t = bottomup_1_0(f_110, t);
    return(t);
  }
  t = SRTS_all(f_16, t);
  t = f_110(t);
  return(t);
}
static ATerm z_11 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm o_119 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
  t = s_12(p_60, q_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_119 = ATgetFirst((ATermList) t);
      {
        ATerm v_54 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_119;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL;
  c_120 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL;
        t = term_y_54;
        p_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_54, c_120);
        t = z_11(p_50, c_120, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_54 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_54) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, d_120, (ATerm) ATempty);
        LocalPopChoice(x_54);
      }
    else
      {
        t = w_54;
        {
          ATerm a_52 = NULL;
          t = term_y_54;
          a_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_54, c_120);
          t = z_11(a_52, c_120, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm a_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_55) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, d_120, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  static ATerm g_120 (ATerm t)
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_111(t);
        LocalPopChoice(c_55);
      }
    else
      {
        t = b_55;
        t = SRTS_all(g_120, t);
      }
    return(t);
  }
  t = g_120(t);
  return(t);
}
static ATerm a_12 (ATerm z_129 (ATerm), ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL;
  k_120 = t;
  t = z_129(t);
  h_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_120, o_44, m_44);
  t = t_12(h_120, o_44, m_44, t);
  {
    ATerm e_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_120 = NULL;
        t = term_g_55;
        p_120 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_120, term_g_55);
        t = s_12(h_120, p_120, t);
        LocalPopChoice(f_55);
      }
    else
      {
        t = e_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_120 = ATgetFirst((ATermList) t);
      j_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_120, term_g_55, (ATerm) ATinsert(CheckATermList(j_120), (ATerm) ATinsert(CheckATermList(i_120), o_44)));
  t = lookup_table_0_1(h_120, t);
  o_120 = t;
  t = term_g_55;
  l_120 = t;
  t = (ATerm) ATinsert(CheckATermList(j_120), (ATerm) ATinsert(CheckATermList(i_120), o_44));
  m_120 = t;
  t = o_120;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(l_120, m_120, n_120, t);
  t = k_120;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_y_54;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_y_54;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm t_120 = NULL,v_120 = NULL,y_120 = NULL,z_120 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      v_120 = ATgetArgument(t, 0);
      y_120 = ATgetArgument(t, 1);
      t_120 = ATgetArgument(t, 2);
      {
        ATerm g_121 = NULL,h_121 = NULL;
        t = y_120;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, v_120);
        g_121 = t;
        t = term_m_55;
        h_121 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_120), term_m_55);
        t = a_12(g_16, g_121, h_121, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, v_120, (ATerm)ATempty, t_120);
      }
    }
  else
    {
      ATerm k_121 = NULL,l_121 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          v_120 = ATgetArgument(t, 0);
          y_120 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_120;
      if(match_cons(t, sym_ConstType_1))
        {
          z_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, v_120);
      k_121 = t;
      t = term_p_55;
      l_121 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_120), term_p_55);
      t = a_12(h_16, k_121, l_121, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_120, (ATerm) ATmakeAppl(sym_ConstType_1, z_120));
    }
  return(t);
}
static ATerm b_12 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL;
  q_121 = t;
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        t = s_12(j_60, k_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_55 = ATgetFirst((ATermList) t);
            p_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_55);
        {
          ATerm r_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, p_121);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_121 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_12(k_60, p_121, r_121, t);
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, p_121);
        }
      }
    else
      {
        t = t_55;
        {
          ATerm t_121 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_121 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_12(k_60, t_121, t);
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        }
      }
  }
  t = q_121;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_129 (ATerm), ATerm t)
{
  ATerm v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL,a_122 = NULL,b_122 = NULL;
  y_121 = t;
  t = w_129(t);
  x_121 = t;
  {
    ATerm w_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_122 = NULL;
        t = term_g_55;
        c_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_121, term_g_55);
        t = s_12(x_121, c_122, t);
        LocalPopChoice(z_55);
      }
    else
      {
        t = w_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_121 = ATgetFirst((ATermList) t);
      v_121 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_121, term_g_55, v_121);
  t = lookup_table_0_1(x_121, t);
  b_122 = t;
  t = term_g_55;
  z_121 = t;
  t = b_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(z_121, v_121, a_122, t);
  t = w_121;
  {
    static ATerm i_16 (ATerm t)
    {
      ATerm d_122 = NULL;
      d_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_121, d_122);
      t = b_12(x_121, d_122, t);
      return(t);
    }
    t = map_1_0(i_16, t);
  }
  t = y_121;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t)
{
  ATerm a_56 = t;
  int b_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_109(t);
      t = b_109(t);
      LocalPopChoice(b_56);
    }
  else
    {
      t = a_56;
      t = b_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
  g_122 = t;
  t = v_129(t);
  f_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_122, term_g_55);
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_122 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_56 = ATgetArgument(t, 0);
            ATerm g_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_55;
        p_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_122, term_g_55);
        t = s_12(f_122, p_122, t);
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
        t = (ATerm) ATempty;
      }
  }
  h_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_122, term_g_55, (ATerm) ATinsert(CheckATermList(h_122), (ATerm) ATempty));
  t = lookup_table_0_1(f_122, t);
  l_122 = t;
  t = term_g_55;
  i_122 = t;
  t = (ATerm) ATinsert(CheckATermList(h_122), (ATerm) ATempty);
  j_122 = t;
  t = l_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(i_122, j_122, k_122, t);
  t = g_122;
  return(t);
}
ATerm scope_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  static ATerm j_16 (ATerm t)
  {
    t = end_scope_1_0(x_129, t);
    return(t);
  }
  t = begin_scope_1_0(x_129, t);
  t = restore_always_2_0(y_129, j_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_y_54;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL,i_27 = NULL;
  x_122 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_122);
  u_122 = t;
  t = v_122;
  t = map_1_0(m_16, t);
  w_122 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_122);
  i_27 = t;
  t = SSLsetAnnotations(i_27, u_122);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm k_123 = NULL,l_123 = NULL;
  l_123 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      k_123 = ATgetArgument(t, 0);
      {
        ATerm i_56 = t;
        int k_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_52 = NULL,x_52 = NULL,c_27 = NULL;
            t = SSLgetAnnotations(l_123);
            t_52 = t;
            t = k_123;
            t = map_1_0(n_16, t);
            x_52 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, x_52);
            c_27 = t;
            t = SSLsetAnnotations(c_27, t_52);
            LocalPopChoice(k_56);
          }
        else
          {
            t = i_56;
            t = l_123;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          k_123 = ATgetArgument(t, 0);
          {
            ATerm n_56 = t;
            int o_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_53 = NULL,r_53 = NULL,h_27 = NULL;
                t = SSLgetAnnotations(l_123);
                p_53 = t;
                t = k_123;
                t = map_1_0(o_16, t);
                r_53 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, r_53);
                h_27 = t;
                t = SSLsetAnnotations(h_27, p_53);
                LocalPopChoice(o_56);
              }
            else
              {
                t = n_56;
                t = l_123;
              }
          }
        }
      else
        {
          t = l_123;
        }
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm z_56 = t;
  int a_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(a_57);
    }
  else
    {
      t = z_56;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(k_16, l_16, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL;
  x_123 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_123;
    }
  else
    {
      static ATerm p_16 (ATerm t)
      {
        t = not_null(z_123);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_123 = ATgetFirst((ATermList) t);
          if(((z_123 != NULL) && (z_123 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_123;
      t = at_end_1_0(p_16, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm o_124 = NULL,p_124 = NULL,q_124 = NULL;
  o_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_124;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_124 = ATgetFirst((ATermList) t);
          q_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_57 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_54 = NULL,m_54 = NULL,n_54 = NULL,m_28 = NULL;
            t = SSLgetAnnotations(o_124);
            i_54 = t;
            t = p_124;
            t = t_124(t);
            m_54 = t;
            t = q_124;
            t = filter_1_0(t_124, t);
            n_54 = t;
            t = (ATerm) ATinsert(CheckATermList(n_54), m_54);
            m_28 = t;
            t = SSLsetAnnotations(m_28, i_54);
            LocalPopChoice(e_57);
          }
        else
          {
            t = b_57;
            t = q_124;
            t = filter_1_0(t_124, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  static ATerm h_125 (ATerm t)
  {
    ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL;
    g_125 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_125 = ATgetFirst((ATermList) t);
        f_125 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_55 = NULL,i_55 = NULL,o_28 = NULL;
          t = SSLgetAnnotations(g_125);
          d_55 = t;
          t = f_125;
          t = h_125(t);
          i_55 = t;
          t = (ATerm) ATinsert(CheckATermList(i_55), e_125);
          o_28 = t;
          t = SSLsetAnnotations(o_28, d_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_125;
        t = h_117(t);
      }
    return(t);
  }
  t = h_125(t);
  return(t);
}
static ATerm t_125 (ATerm l_125, ATerm t)
{
  ATerm m_125 = NULL;
  t = SSL_explode_term(l_125);
  if(match_cons(t, sym__2))
    {
      ATerm f_57 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_57) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_125;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
  q_125 = t;
  if(match_cons(t, sym__2))
    {
      o_125 = ATgetArgument(t, 0);
      p_125 = ATgetArgument(t, 1);
      {
        ATerm g_57 = t;
        int j_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_16 (ATerm t)
            {
              t = p_125;
              return(t);
            }
            t = o_125;
            t = at_end_1_0(r_16, t);
            LocalPopChoice(j_57);
          }
        else
          {
            t = g_57;
            t = t_125(q_125, t);
          }
      }
    }
  else
    {
      t = t_125(q_125, t);
    }
  return(t);
}
static ATerm e_12 (ATerm j_35, ATerm v_34, ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL;
  static ATerm s_16 (ATerm t)
  {
    ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL;
    z_125 = t;
    t = SSL_explode_term(z_125);
    if(match_cons(t, sym__2))
      {
        if(((u_125 != NULL) && (u_125 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_125 = ATgetArgument(t, 0);
        {
          ATerm k_57 = ATgetArgument(t, 1);
          if(((ATgetType(k_57) == AT_LIST) && !(ATisEmpty(k_57))))
            {
              w_125 = ATgetFirst((ATermList) k_57);
              {
                ATerm l_57 = (ATerm) ATgetNext((ATermList) k_57);
                if(((ATgetType(l_57) != AT_LIST) || !(ATisEmpty(l_57))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_125, not_null(v_125));
    t = conc_0_0(t);
    x_125 = t;
    t = (ATerm) ATinsert(ATempty, x_125);
    y_125 = t;
    t = SSL_mkterm(u_125, y_125);
    return(t);
  }
  t = SSL_explode_term(j_35);
  if(match_cons(t, sym__2))
    {
      if(((u_125 != NULL) && (u_125 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_125 = ATgetArgument(t, 0);
      {
        ATerm m_57 = ATgetArgument(t, 1);
        if(((ATgetType(m_57) == AT_LIST) && !(ATisEmpty(m_57))))
          {
            if(((v_125 != NULL) && (v_125 != ATgetFirst((ATermList) m_57))))
              _fail(ATgetFirst((ATermList) m_57));
            else
              v_125 = ATgetFirst((ATermList) m_57);
            {
              ATerm n_57 = (ATerm) ATgetNext((ATermList) m_57);
              if(((ATgetType(n_57) != AT_LIST) || !(ATisEmpty(n_57))))
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
  t = fetch_1_0(s_16, t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_123 (ATerm), ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t)
{
  ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL;
  b_126 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_126;
      t = r_123(t);
    }
  else
    {
      ATerm g_126 = NULL,h_126 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_126 = ATgetFirst((ATermList) t);
          d_126 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_126;
      t = t_123(t);
      g_126 = t;
      t = d_126;
      t = foldr_3_0(r_123, s_123, t_123, t);
      h_126 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_126, h_126);
      t = s_123(t);
    }
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_57), term_p_57), term_o_57);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm o_126 = NULL,p_126 = NULL;
  if(match_cons(t, sym__2))
    {
      o_126 = ATgetArgument(t, 0);
      p_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(o_126, p_126, t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm q_126 = NULL,r_126 = NULL;
  r_126 = t;
  if(match_cons(t, sym_Signature_1))
    {
      q_126 = ATgetArgument(t, 0);
      {
        ATerm r_57 = t;
        int s_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_126 = NULL;
            t = q_126;
            t = filter_1_0(w_16, t);
            t = concat_0_0(t);
            t_126 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, t_126);
            LocalPopChoice(s_57);
          }
        else
          {
            t = r_57;
            t = r_126;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          q_126 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, q_126);
        }
      else
        {
          t = r_126;
        }
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm u_126 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      u_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_126;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm k_126 = NULL,l_126 = NULL,m_126 = NULL,n_126 = NULL,e_29 = NULL;
  n_126 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_126);
  k_126 = t;
  t = l_126;
  t = foldr_3_0(t_16, u_16, v_16, t);
  m_126 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_126);
  e_29 = t;
  t = SSLsetAnnotations(e_29, k_126);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm t_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(w_57);
    }
  else
    {
      t = t_57;
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL,s_127 = NULL;
  s_127 = t;
  if(match_cons(t, sym_LRule_1))
    {
      r_127 = ATgetArgument(t, 0);
      t = r_127;
      if(match_cons(t, sym_Rule_3))
        {
          o_127 = ATgetArgument(t, 0);
          p_127 = ATgetArgument(t, 1);
          q_127 = ATgetArgument(t, 2);
          {
            ATerm y_57 = t;
            int z_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_127 = NULL;
                t = o_127;
                t = free_vars_3_0(z_16, a_17, tboundin_3_0, t);
                w_127 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, w_127, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, o_127, p_127, q_127)));
                LocalPopChoice(z_57);
              }
            else
              {
                t = y_57;
                t = s_127;
              }
          }
        }
      else
        {
          t = s_127;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          r_127 = ATgetArgument(t, 0);
          {
            ATerm b_58 = t;
            int e_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_128 = NULL;
                t = r_127;
                t = free_vars_3_0(c_17, d_17, tboundin_3_0, t);
                u_128 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, u_128, r_127);
                LocalPopChoice(e_58);
              }
            else
              {
                t = b_58;
                t = s_127;
              }
          }
        }
      else
        {
          t = s_127;
        }
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm x_127 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_127);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm h_58 = t;
  int i_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_58);
    }
  else
    {
      t = h_58;
      {
        ATerm k_58 = t;
        int l_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_58);
          }
        else
          {
            t = k_58;
            {
              ATerm o_58 = t;
              int p_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_128 = ATgetArgument(t, 0);
                      f_128 = ATgetArgument(t, 1);
                      g_128 = ATgetArgument(t, 2);
                      h_128 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_128;
                  t = map_1_0(b_17, t);
                  LocalPopChoice(p_58);
                }
              else
                {
                  t = o_58;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm o_128 = NULL;
  ATerm q_58 = t;
  int s_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_128 = ATgetArgument(t, 0);
          {
            ATerm t_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_58);
      t = o_128;
    }
  else
    {
      t = q_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_128;
    }
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm v_128 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_128);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm u_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_58);
    }
  else
    {
      t = u_58;
      {
        ATerm x_58 = t;
        int b_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_59);
          }
        else
          {
            t = x_58;
            {
              ATerm c_59 = t;
              int h_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_128 = ATgetArgument(t, 0);
                      y_128 = ATgetArgument(t, 1);
                      z_128 = ATgetArgument(t, 2);
                      a_129 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_128;
                  t = map_1_0(e_17, t);
                  LocalPopChoice(h_59);
                }
              else
                {
                  t = c_59;
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
  ATerm h_129 = NULL;
  ATerm i_59 = t;
  int j_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_129 = ATgetArgument(t, 0);
          {
            ATerm l_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_59);
      t = h_129;
    }
  else
    {
      t = i_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_129;
    }
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm m_59 = t;
  int n_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(n_59);
    }
  else
    {
      t = m_59;
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm r_129 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      r_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, r_129)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm i_127 = NULL,j_127 = NULL,k_127 = NULL,l_127 = NULL,i_30 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(x_16, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(y_16, t);
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_129 = NULL,n_129 = NULL,o_129 = NULL;
        m_129 = t;
        t = term_q_59;
        n_129 = t;
        t = term_r_59;
        o_129 = t;
        t = term_s_59;
        t = s_12(n_129, o_129, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = m_129;
        LocalPopChoice(p_59);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = o_59;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(f_17, t);
  l_127 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_127);
  i_127 = t;
  t = j_127;
  t = fetch_1_0(g_17, t);
  k_127 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_127);
  i_30 = t;
  t = SSLsetAnnotations(i_30, i_127);
  return(t);
}
static ATerm f_12 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm s_129 = NULL;
  t = SSL_fputc(e_40, f_40);
  s_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_129);
  return(t);
}
static ATerm g_12 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm t_129 = NULL;
  t = SSL_write_term_to_stream_text(i_24, j_24);
  t_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_129);
  return(t);
}
static ATerm i_12 (ATerm h_116 (ATerm), ATerm q_182, ATerm o_24, ATerm t)
{
  ATerm u_129 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_182, term_t_59);
  t = m_12(t);
  u_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_129, o_24);
  t = h_116(t);
  t = fclose_0_0(t);
  t = o_24;
  return(t);
}
static ATerm h_12 (ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm a_130 = NULL;
  t = SSL_write_term_to_stream_baf(e_24, f_24);
  a_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_130);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm i_130 = NULL,j_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_59 = ATgetArgument(t, 0);
      if(match_cons(u_59, sym_Stream_1))
        {
          i_130 = ATgetArgument(u_59, 0);
        }
      else
        _fail(t);
      j_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(i_130, j_130, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm k_130 = NULL,l_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_59 = ATgetArgument(t, 0);
      if(match_cons(v_59, sym_Stream_1))
        {
          n_130 = ATgetArgument(v_59, 0);
        }
      else
        _fail(t);
      o_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(n_130, o_130, t);
  k_130 = t;
  t = term_f_26;
  l_130 = t;
  t = k_130;
  if(match_cons(t, sym_Stream_1))
    {
      m_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, k_130);
  t = f_12(l_130, m_130, t);
  return(t);
}
ATerm output_1_0 (ATerm q_135 (ATerm), ATerm t)
{
  ATerm c_130 = NULL,d_130 = NULL;
  t = q_135(t);
  d_130 = t;
  {
    ATerm w_59 = t;
    int x_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_130 = NULL,f_130 = NULL;
        t = term_q_59;
        e_130 = t;
        t = term_z_59;
        f_130 = t;
        t = term_a_60;
        t = s_12(e_130, f_130, t);
        LocalPopChoice(x_59);
      }
    else
      {
        t = w_59;
        t = term_b_60;
      }
  }
  c_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_130, d_130);
  {
    ATerm g_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_130 = NULL,h_130 = NULL;
        t = term_q_59;
        g_130 = t;
        t = term_i_60;
        h_130 = t;
        t = term_l_60;
        t = s_12(g_130, h_130, t);
        t = (ATerm) ATmakeAppl(sym__2, c_130, d_130);
        LocalPopChoice(h_60);
        if(match_cons(t, sym__2))
          {
            ATerm m_60 = ATgetArgument(t, 0);
            ATerm o_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_12(h_17, c_130, d_130, t);
      }
    else
      {
        t = g_60;
        if(match_cons(t, sym__2))
          {
            ATerm u_60 = ATgetArgument(t, 0);
            ATerm v_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_12(i_17, c_130, d_130, t);
      }
  }
  return(t);
}
static ATerm c_131 (ATerm w_130, ATerm t)
{
  t = SSL_fclose(w_130);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL;
  a_131 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_130 = ATgetArgument(t, 0);
      {
        ATerm b_61 = t;
        int c_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_130);
            LocalPopChoice(c_61);
          }
        else
          {
            t = b_61;
            t = c_131(a_131, t);
          }
      }
    }
  else
    {
      t = c_131(a_131, t);
    }
  return(t);
}
static ATerm j_12 (ATerm k_24, ATerm t)
{
  t = SSL_read_term_from_stream(k_24);
  return(t);
}
static ATerm k_12 (ATerm x_38, ATerm y_38, ATerm t)
{
  t = SSL_strcat(x_38, y_38);
  return(t);
}
static ATerm l_12 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm d_131 = NULL;
  t = SSL_fopen(g_40, h_40);
  d_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_131);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_131 = NULL;
  t = SSL_stdin_stream();
  e_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_131);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_131 = NULL;
  t = SSL_stdout_stream();
  f_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_131);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_131 = NULL;
  t = SSL_stderr_stream();
  g_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_131);
  return(t);
}
static ATerm n_132 (ATerm m_131, ATerm t)
{
  ATerm n_131 = NULL;
  t = SSL_explode_term(m_131);
  if(match_cons(t, sym__2))
    {
      ATerm e_61 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_61) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_61 = ATgetArgument(t, 1);
        if(((ATgetType(i_61) == AT_LIST) && !(ATisEmpty(i_61))))
          {
            n_131 = ATgetFirst((ATermList) i_61);
            {
              ATerm j_61 = (ATerm) ATgetNext((ATermList) i_61);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_131;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_131;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_131;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_131;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_132 (ATerm q_131, ATerm r_131, ATerm s_131, ATerm t)
{
  ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL,y_131 = NULL,o_30 = NULL;
  t = SSLgetAnnotations(s_131);
  v_131 = t;
  t = q_131;
  if(match_cons(t, sym_Path_1))
    {
      y_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_131, r_131);
  o_30 = t;
  t = SSLsetAnnotations(o_30, v_131);
  if(match_cons(t, sym__2))
    {
      t_131 = ATgetArgument(t, 0);
      u_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(t_131, u_131, t);
  return(t);
}
static ATerm p_132 (ATerm a_132, ATerm b_132, ATerm c_132, ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL,i_132 = NULL,t_30 = NULL;
  t = SSLgetAnnotations(c_132);
  f_132 = t;
  t = SSL_is_string(a_132);
  i_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_132, b_132);
  t_30 = t;
  t = SSLsetAnnotations(t_30, f_132);
  if(match_cons(t, sym__2))
    {
      d_132 = ATgetArgument(t, 0);
      e_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(d_132, e_132, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm k_132 = NULL,l_132 = NULL,m_132 = NULL;
  k_132 = t;
  if(match_cons(t, sym__2))
    {
      l_132 = ATgetArgument(t, 0);
      m_132 = ATgetArgument(t, 1);
      {
        ATerm k_61 = t;
        int l_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_132(k_132, t);
            LocalPopChoice(l_61);
          }
        else
          {
            t = k_61;
            {
              ATerm m_61 = t;
              int n_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_132(l_132, m_132, k_132, t);
                  LocalPopChoice(n_61);
                }
              else
                {
                  t = m_61;
                  t = p_132(l_132, m_132, k_132, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_132(k_132, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_132 = NULL,t_132 = NULL,u_132 = NULL,z_132 = NULL;
  z_132 = t;
  {
    ATerm t_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_132, term_v_61);
        t = m_12(t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = t_61;
        {
          ATerm e_56 = NULL,h_56 = NULL;
          t = term_c_62;
          h_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_62, z_132);
          t = k_12(h_56, z_132, t);
          e_56 = t;
          t = SSL_perror(e_56);
          _fail(t);
        }
      }
  }
  t_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(u_132, t);
  s_132 = t;
  t = t_132;
  t = fclose_0_0(t);
  t = s_132;
  return(t);
}
ATerm input_1_0 (ATerm r_135 (ATerm), ATerm t)
{
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_133 = NULL,d_133 = NULL;
      t = term_q_59;
      c_133 = t;
      t = term_j_62;
      d_133 = t;
      t = term_k_62;
      t = s_12(c_133, d_133, t);
      LocalPopChoice(i_62);
    }
  else
    {
      t = h_62;
      t = term_l_62;
    }
  t = ReadFromFile_0_0(t);
  t = r_135(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_133 = NULL,f_133 = NULL,g_133 = NULL,h_133 = NULL,i_133 = NULL;
  e_133 = t;
  t = term_m_62;
  t = whoami_0_0(t);
  f_133 = t;
  t = term_z_36;
  h_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_62), f_133), term_o_62);
  i_133 = t;
  t = SSL_printnl(h_133, i_133);
  t = term_c_37;
  g_133 = t;
  t = SSL_exit(g_133);
  t = e_133;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm k_133 = NULL;
  k_133 = t;
  if(match_string(t, "-k"))
    {
      t = k_133;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_133;
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL;
  l_133 = t;
  t = SSL_string_to_int(l_133);
  m_133 = t;
  t = term_t_62;
  n_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_62, m_133);
  t = v_12(n_133, m_133, t);
  t = l_133;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_u_62;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm p_133 = NULL;
  p_133 = t;
  if(match_string(t, "-S"))
    {
      t = p_133;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_133;
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL;
  t = term_v_62;
  q_133 = t;
  t = term_w_62;
  r_133 = t;
  t = term_x_62;
  t = v_12(q_133, r_133, t);
  t = term_c_63;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm s_133 = NULL,t_133 = NULL,u_133 = NULL;
  s_133 = t;
  t = SSL_string_to_int(s_133);
  t_133 = t;
  t = term_v_62;
  u_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_62, t_133);
  t = v_12(u_133, t_133, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_133);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_f_63;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm v_133 = NULL,w_133 = NULL;
  t = term_h_63;
  v_133 = t;
  t = term_m_62;
  w_133 = t;
  t = term_k_63;
  t = v_12(v_133, w_133, t);
  t = term_l_63;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_m_63;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_63 = t;
  int o_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_17, n_17, o_17, t);
      LocalPopChoice(o_63);
    }
  else
    {
      t = n_63;
      {
        ATerm p_63 = t;
        int q_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_17, q_17, r_17, t);
            LocalPopChoice(q_63);
          }
        else
          {
            t = p_63;
            t = Option_3_0(s_17, t_17, v_17, t);
          }
      }
    }
  return(t);
}
static ATerm v_12 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm x_133 = NULL,y_133 = NULL;
  t = term_q_59;
  x_133 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_59, j_55, k_55);
  t = lookup_table_0_1(x_133, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(j_55, k_55, y_133, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_59, j_55, k_55);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_134 = NULL,f_134 = NULL,g_134 = NULL;
      t = term_m_62;
      t = e_0(t);
      e_134 = t;
      t = term_r_63;
      f_134 = t;
      t = term_s_63;
      g_134 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_63, term_s_63, e_134);
      t = t_12(f_134, g_134, e_134, t);
      _fail(t);
    }
  else
    {
      ATerm j_134 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_134 = ATgetFirst((ATermList) t);
          d_134 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_134;
      t = c_0(t);
      t = term_m_62;
      t = d_0(t);
      j_134 = t;
      t = (ATerm) ATinsert(CheckATermList(d_134), j_134);
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm l_134 = NULL;
  l_134 = t;
  if(match_string(t, "-o"))
    {
      t = l_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_134;
    }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm m_134 = NULL,n_134 = NULL;
  m_134 = t;
  t = term_z_59;
  n_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_59, m_134);
  t = v_12(n_134, m_134, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_134);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = term_t_63;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_17, x_17, y_17, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm p_134 = NULL;
  p_134 = t;
  if(match_string(t, "-i"))
    {
      t = p_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_134;
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm q_134 = NULL,r_134 = NULL;
  q_134 = t;
  t = term_j_62;
  r_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_62, q_134);
  t = v_12(r_134, q_134, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_134);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_d_64;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_17, a_18, b_18, t);
  return(t);
}
static ATerm t_12 (ATerm e_60, ATerm f_60, ATerm d_60, ATerm t)
{
  ATerm t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL;
  t_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
  {
    ATerm h_64 = t;
    int i_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_64 = ATgetArgument(t, 0);
            ATerm k_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
        t = s_12(e_60, f_60, t);
        LocalPopChoice(i_64);
      }
    else
      {
        t = h_64;
        t = (ATerm) ATempty;
      }
  }
  u_134 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_60, f_60, (ATerm) ATinsert(CheckATermList(u_134), d_60));
  t = lookup_table_0_1(e_60, t);
  x_134 = t;
  t = (ATerm) ATinsert(CheckATermList(u_134), d_60);
  v_134 = t;
  t = x_134;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(f_60, v_134, w_134, t);
  t = t_134;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_135 = NULL,f_135 = NULL,g_135 = NULL,i_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL;
      t = term_m_62;
      t = n_0(t);
      n_135 = t;
      t = term_r_63;
      o_135 = t;
      t = term_s_63;
      p_135 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_63, term_s_63, n_135);
      t = t_12(o_135, p_135, n_135, t);
      _fail(t);
    }
  else
    {
      ATerm v_135 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_135 = ATgetFirst((ATermList) t);
          f_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_135;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_135 = ATgetFirst((ATermList) t);
          i_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_135;
      t = k_0(t);
      t = g_135;
      t = l_0(t);
      v_135 = t;
      t = (ATerm) ATinsert(CheckATermList(i_135), v_135);
    }
  return(t);
}
static ATerm c_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm x_135 = NULL,y_135 = NULL;
  x_135 = t;
  if(match_string(t, "old"))
    {
      t = x_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = x_135;
    }
  t = term_r_59;
  y_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_59, x_135);
  t = v_12(y_135, x_135, t);
  t = term_m_62;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_l_64;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_18, d_18, e_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_136 = NULL,b_136 = NULL,c_136 = NULL,d_136 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_62;
  t = whoami_0_0(t);
  a_136 = t;
  t = term_z_36;
  c_136 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_64), a_136);
  d_136 = t;
  t = SSL_printnl(c_136, d_136);
  t = term_c_37;
  b_136 = t;
  t = SSL_exit(b_136);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_136 = NULL,f_136 = NULL;
  t = term_q_59;
  e_136 = t;
  t = term_n_64;
  f_136 = t;
  t = term_o_64;
  t = s_12(e_136, f_136, t);
  return(t);
}
static ATerm n_12 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm p_64 = t;
  int q_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_43, b_43);
      LocalPopChoice(q_64);
    }
  else
    {
      t = p_64;
      t = SSL_addr(a_43, b_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL;
  h_136 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_136;
      t = p_123(t);
    }
  else
    {
      ATerm m_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_136 = ATgetFirst((ATermList) t);
          j_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_136;
      t = foldr_2_0(p_123, q_123, t);
      m_136 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_136, m_136);
      t = q_123(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = term_w_62;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  if(match_cons(t, sym__2))
    {
      v_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(v_56, w_56, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_136 = NULL,l_56 = NULL,q_56 = NULL;
  t = times_0_0(t);
  q_56 = t;
  t = SSL_explode_term(q_56);
  if(match_cons(t, sym__2))
    {
      ATerm r_64 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_56;
  t = foldr_2_0(h_18, i_18, t);
  p_136 = t;
  t = SSL_TicksToSeconds(p_136);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL;
  a_137 = t;
  if(match_cons(t, sym__2))
    {
      b_137 = ATgetArgument(t, 0);
      c_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_64 = t;
    int t_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_137;
        if((b_137 != t))
          {
            _fail(t);
          }
        t = a_137;
        LocalPopChoice(t_64);
      }
    else
      {
        t = s_64;
        t = (ATerm) ATmakeAppl(sym__2, b_137, c_137);
        {
          ATerm u_64 = t;
          int v_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_137, c_137);
              LocalPopChoice(v_64);
            }
          else
            {
              t = u_64;
              t = SSL_gtr(b_137, c_137);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_137, c_137);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm g_137 = NULL;
  g_137 = t;
  {
    ATerm w_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_137 = NULL,l_137 = NULL,m_137 = NULL;
        t = term_q_59;
        l_137 = t;
        t = term_v_62;
        m_137 = t;
        t = term_z_64;
        t = s_12(l_137, m_137, t);
        i_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_137, term_c_37);
        t = geq_0_0(t);
        t = g_137;
        t = r_132(t);
        LocalPopChoice(y_64);
      }
    else
      {
        t = w_64;
        t = g_137;
      }
  }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm o_137 = NULL,p_137 = NULL,r_137 = NULL,s_137 = NULL;
  t = run_time_0_0(t);
  o_137 = t;
  t = term_m_62;
  t = whoami_0_0(t);
  p_137 = t;
  t = term_z_36;
  r_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_65), o_137), term_a_65), p_137);
  s_137 = t;
  t = SSL_printnl(r_137, s_137);
  t = (ATerm) ATmakeAppl(sym__2, term_z_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_65), o_137), term_a_65), p_137));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_62;
  t_137 = t;
  t = SSL_exit(t_137);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm d_138 = NULL,e_138 = NULL;
  e_138 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_138;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_138 = ATgetArgument(t, 0);
          {
            ATerm u_57 = NULL,w_30 = NULL;
            t = SSLgetAnnotations(e_138);
            u_57 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_138);
            w_30 = t;
            t = SSLsetAnnotations(w_30, u_57);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_138;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_135 (ATerm), ATerm t)
{
  ATerm c_65 = t;
  int d_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_137 = NULL,x_137 = NULL;
      t = term_q_59;
      w_137 = t;
      t = term_e_65;
      x_137 = t;
      t = term_f_65;
      t = s_12(w_137, x_137, t);
      LocalPopChoice(d_65);
    }
  else
    {
      t = c_65;
      t = fetch_1_0(n_18, t);
    }
  t = h_135(t);
  return(t);
}
static ATerm w_12 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm t)
{
  ATerm g_138 = NULL;
  t = SSL_hashtable_put(y_63, w_63, x_63);
  g_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_138);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_61, ATerm t)
{
  ATerm p_138 = NULL;
  t = table_hashtable_0_0(t);
  p_138 = t;
  {
    ATerm g_65 = t;
    int h_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_58 = NULL;
        t = p_138;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_12(q_61, j_58, t);
        LocalPopChoice(h_65);
      }
    else
      {
        t = g_65;
        {
          ATerm r_58 = NULL;
          t = q_61;
          t = table_create_0_0(t);
          t = p_138;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_12(q_61, r_58, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_64, ATerm f_64, ATerm t)
{
  ATerm s_138 = NULL;
  t = SSL_hashtable_create(e_64, f_64);
  s_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_138);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL,x_138 = NULL,y_138 = NULL;
  t_138 = t;
  t = term_i_65;
  x_138 = t;
  t = term_j_65;
  y_138 = t;
  t = t_138;
  t = new_hashtable_0_2(x_138, y_138, t);
  u_138 = t;
  t = t_138;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(t_138, u_138, v_138, t);
  t = t_138;
  return(t);
}
static ATerm p_12 (ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm z_138 = NULL;
  t = SSL_hashtable_remove(c_64, b_64);
  z_138 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_138);
  return(t);
}
static ATerm q_12 (ATerm g_64, ATerm t)
{
  ATerm a_139 = NULL;
  t = SSL_hashtable_destroy(g_64);
  a_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_139);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_139 = NULL;
  t = SSL_table_hashtable();
  b_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_139);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL;
  c_139 = t;
  t = table_hashtable_0_0(t);
  d_139 = t;
  t = lookup_table_0_1(c_139, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(f_139, t);
  t = d_139;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_12(c_139, e_139, t);
  t = c_139;
  return(t);
}
ATerm map_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  static ATerm u_139 (ATerm t)
  {
    ATerm r_139 = NULL,s_139 = NULL,t_139 = NULL;
    r_139 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_139;
      }
    else
      {
        ATerm a_59 = NULL,d_59 = NULL,k_59 = NULL,b_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_139 = ATgetFirst((ATermList) t);
            t_139 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_139);
        a_59 = t;
        t = s_139;
        t = q_116(t);
        d_59 = t;
        t = t_139;
        t = u_139(t);
        k_59 = t;
        t = (ATerm) ATinsert(CheckATermList(k_59), d_59);
        b_31 = t;
        t = SSLsetAnnotations(b_31, a_59);
      }
    return(t);
  }
  t = u_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_140 = ATgetFirst((ATermList) t);
      c_140 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_140 = NULL,h_140 = NULL;
        static ATerm o_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_140)), not_null(h_140));
          return(t);
        }
        t = c_140;
        t = i_0(t);
        if(((g_140 != NULL) && (g_140 != t)))
          _fail(t);
        else
          g_140 = t;
        t = b_140;
        t = g_0(t);
        if(((h_140 != NULL) && (h_140 != t)))
          _fail(t);
        else
          h_140 = t;
        t = c_140;
        t = reverse_acc_2_0(g_0, o_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_62;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm n_140 = NULL,o_140 = NULL,p_140 = NULL,e_31 = NULL;
  p_140 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_140);
  n_140 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_140);
  e_31 = t;
  t = SSLsetAnnotations(e_31, n_140);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm r_140 = NULL;
  r_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_140), term_k_65);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_140 = NULL,k_140 = NULL;
  ATerm l_65 = t;
  int m_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_140 = NULL,m_140 = NULL;
      t = term_q_59;
      l_140 = t;
      t = term_n_64;
      m_140 = t;
      t = term_o_64;
      t = s_12(l_140, m_140, t);
      LocalPopChoice(m_65);
    }
  else
    {
      t = l_65;
      t = fetch_1_0(p_18, t);
    }
  t = term_n_65;
  t = echo_0_0(t);
  t = term_r_63;
  j_140 = t;
  t = term_s_63;
  k_140 = t;
  t = term_o_65;
  t = s_12(j_140, k_140, t);
  t = reverse_acc_2_0(_id, q_18, t);
  t = map_1_0(r_18, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  static ATerm q_141 (ATerm t)
  {
    ATerm l_141 = NULL,m_141 = NULL,p_141 = NULL;
    l_141 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_141 = ATgetFirst((ATermList) t);
        p_141 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_65 = t;
      int q_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_59 = NULL,c_60 = NULL,g_31 = NULL;
          t = SSLgetAnnotations(l_141);
          y_59 = t;
          t = m_141;
          t = a_117(t);
          c_60 = t;
          t = (ATerm) ATinsert(CheckATermList(p_141), c_60);
          g_31 = t;
          t = SSLsetAnnotations(g_31, y_59);
          LocalPopChoice(q_65);
        }
      else
        {
          t = p_65;
          {
            ATerm a_61 = NULL,d_61 = NULL,h_31 = NULL;
            t = SSLgetAnnotations(l_141);
            a_61 = t;
            t = p_141;
            t = q_141(t);
            d_61 = t;
            t = (ATerm) ATinsert(CheckATermList(d_61), m_141);
            h_31 = t;
            t = SSLsetAnnotations(h_31, a_61);
          }
        }
    }
    return(t);
  }
  t = q_141(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL;
  u_141 = t;
  {
    ATerm r_65 = t;
    int s_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_141;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_65 = ATgetFirst((ATermList) t);
                ATerm u_65 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_141;
          }
        LocalPopChoice(s_65);
      }
    else
      {
        t = r_65;
        t = (ATerm) ATinsert(ATempty, u_141);
      }
  }
  v_141 = t;
  t = term_b_60;
  w_141 = t;
  t = SSL_printnl(w_141, v_141);
  t = u_141;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_142 = NULL,b_142 = NULL;
  t = term_q_59;
  a_142 = t;
  t = term_n_64;
  b_142 = t;
  t = term_o_64;
  t = s_12(a_142, b_142, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_12 (ATerm z_63, ATerm a_64, ATerm t)
{
  t = SSL_hashtable_get(a_64, z_63);
  return(t);
}
static ATerm s_12 (ATerm x_61, ATerm y_61, ATerm t)
{
  ATerm c_142 = NULL;
  t = lookup_table_0_1(x_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_12(y_61, c_142, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL;
  t = term_v_65;
  e_142 = t;
  t = term_m_62;
  f_142 = t;
  t = term_w_65;
  t = v_12(e_142, f_142, t);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  t = term_x_65;
  return(t);
}
static ATerm d_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL,m_142 = NULL;
  t = term_v_65;
  i_142 = t;
  t = term_m_62;
  m_142 = t;
  t = term_w_65;
  t = v_12(i_142, m_142, t);
  t = term_y_65;
  g_142 = t;
  t = term_m_62;
  h_142 = t;
  t = term_z_65;
  t = v_12(g_142, h_142, t);
  t = term_a_66;
  return(t);
}
static ATerm k_19 (ATerm t)
{
  t = term_b_66;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_66 = t;
  int d_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_18, z_18, c_19, t);
      LocalPopChoice(d_66);
    }
  else
    {
      t = c_66;
      t = Option_3_0(d_19, e_19, k_19, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL,q_142 = NULL,r_142 = NULL,s_142 = NULL,t_31 = NULL;
  s_142 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_142 = ATgetFirst((ATermList) t);
      p_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_142);
  n_142 = t;
  t = o_142;
  t = g_95(t);
  q_142 = t;
  t = p_142;
  t = h_95(t);
  r_142 = t;
  t = (ATerm) ATinsert(CheckATermList(r_142), q_142);
  t_31 = t;
  t = SSLsetAnnotations(t_31, n_142);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_137 (ATerm), ATerm t)
{
  ATerm e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,j_143 = NULL,k_143 = NULL,y_31 = NULL;
  e_143 = t;
  {
    ATerm e_66 = t;
    int f_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_66;
        t = k_137(t);
        LocalPopChoice(f_66);
      }
    else
      {
        t = e_66;
      }
  }
  t = e_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_143 = ATgetFirst((ATermList) t);
      h_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_143);
  f_143 = t;
  t = term_n_64;
  k_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_64, g_143);
  t = v_12(k_143, g_143, t);
  t = h_143;
  {
    static ATerm u_143 (ATerm t)
    {
      ATerm h_66 = t;
      int i_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_66 = t;
          int k_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_143 = NULL;
              n_143 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_143;
              LocalPopChoice(k_66);
            }
          else
            {
              t = j_66;
              t = k_137(t);
              t = Cons_2_0(_id, u_143, t);
            }
          LocalPopChoice(i_66);
        }
      else
        {
          t = h_66;
          {
            ATerm q_143 = NULL,r_143 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_143 = ATgetFirst((ATermList) t);
                r_143 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_143), (ATerm) ATmakeAppl(sym_Undefined_1, q_143));
          }
        }
      return(t);
    }
    t = u_143(t);
  }
  j_143 = t;
  t = (ATerm) ATinsert(CheckATermList(j_143), (ATerm) ATmakeAppl(sym_Program_1, g_143));
  y_31 = t;
  t = SSLsetAnnotations(y_31, f_143);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm i_144 = NULL;
  i_144 = t;
  if(match_string(t, "--help"))
    {
      t = i_144;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_144;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_144;
        }
    }
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm j_144 = NULL,k_144 = NULL;
  t = term_e_65;
  j_144 = t;
  t = term_m_62;
  k_144 = t;
  t = term_l_66;
  t = v_12(j_144, k_144, t);
  t = term_m_66;
  return(t);
}
static ATerm r_19 (ATerm t)
{
  t = term_n_66;
  return(t);
}
static ATerm w_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL,e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL;
  c_144 = t;
  t = term_r_63;
  d_144 = t;
  t = term_o_66;
  t = lookup_table_0_1(d_144, t);
  h_144 = t;
  t = term_s_63;
  e_144 = t;
  t = (ATerm) ATempty;
  f_144 = t;
  t = h_144;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(e_144, f_144, g_144, t);
  t = c_144;
  {
    static ATerm l_19 (ATerm t)
    {
      ATerm p_66 = t;
      int q_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_137(t);
          LocalPopChoice(q_66);
        }
      else
        {
          t = p_66;
          {
            ATerm r_66 = t;
            int s_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_19, o_19, r_19, t);
                LocalPopChoice(s_66);
              }
            else
              {
                t = r_66;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_19, t);
  }
  {
    ATerm t_66 = t;
    int u_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_144 = NULL;
        w_144 = t;
        {
          ATerm w_66 = t;
          int x_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_61 = NULL;
              t = w_144;
              {
                ATerm y_66 = t;
                int z_66 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_61 = NULL,s_61 = NULL;
                    t = term_q_59;
                    r_61 = t;
                    t = term_e_65;
                    s_61 = t;
                    t = term_f_65;
                    t = s_12(r_61, s_61, t);
                    LocalPopChoice(z_66);
                  }
                else
                  {
                    t = y_66;
                    t = fetch_1_0(w_19, t);
                  }
              }
              t = w_144;
              t = default_system_usage_0_0(t);
              t = term_w_62;
              p_61 = t;
              t = SSL_exit(p_61);
              LocalPopChoice(x_66);
            }
          else
            {
              t = w_66;
              {
                ATerm w_61 = NULL,z_61 = NULL,a_62 = NULL;
                t = term_q_59;
                z_61 = t;
                t = term_v_65;
                a_62 = t;
                t = term_a_67;
                t = s_12(z_61, a_62, t);
                t = w_144;
                t = default_system_about_0_0(t);
                t = term_w_62;
                w_61 = t;
                t = SSL_exit(w_61);
              }
            }
        }
        LocalPopChoice(u_66);
      }
    else
      {
        t = t_66;
        {
          ATerm b_67 = t;
          int c_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_144 = NULL,y_144 = NULL,z_144 = NULL;
              static ATerm x_19 (ATerm t)
              {
                ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL,a_32 = NULL;
                c_145 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_145 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_145);
                a_145 = t;
                t = b_145;
                if(((a_144 != NULL) && (a_144 != t)))
                  _fail(t);
                else
                  a_144 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_145);
                a_32 = t;
                t = SSLsetAnnotations(a_32, a_145);
                return(t);
              }
              t = fetch_1_0(x_19, t);
              t = term_z_36;
              y_144 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_144)), term_d_67);
              z_144 = t;
              t = SSL_printnl(y_144, z_144);
              t = (ATerm) ATmakeAppl(sym__2, term_z_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_144)), term_d_67));
              t = default_system_usage_0_0(t);
              t = term_c_37;
              x_144 = t;
              t = SSL_exit(x_144);
              LocalPopChoice(c_67);
            }
          else
            {
              t = b_67;
            }
        }
      }
  }
  b_144 = t;
  t = term_r_63;
  t = table_destroy_0_0(t);
  t = b_144;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm t)
{
  ATerm h_145 = NULL,i_145 = NULL,k_145 = NULL,l_145 = NULL,m_145 = NULL;
  t = parse_options_1_0(j_135, t);
  h_145 = t;
  t = term_e_67;
  t = table_create_0_0(t);
  t = term_e_67;
  i_145 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_67, term_f_67, h_145);
  t = lookup_table_0_1(i_145, t);
  m_145 = t;
  t = term_f_67;
  k_145 = t;
  t = m_145;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(k_145, h_145, l_145, t);
  t = h_145;
  t = l_135(t);
  {
    ATerm g_67 = t;
    int h_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_135, t);
        LocalPopChoice(h_67);
      }
    else
      {
        t = g_67;
        {
          ATerm i_67 = t;
          int l_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_67);
            }
          else
            {
              t = i_67;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm m_67 = t;
  int o_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(o_67);
    }
  else
    {
      t = m_67;
      {
        ATerm p_67 = t;
        int q_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(q_67);
          }
        else
          {
            t = p_67;
            {
              ATerm t_67 = t;
              int y_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(y_67);
                }
              else
                {
                  t = t_67;
                  {
                    ATerm z_67 = t;
                    int a_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(d_20, e_20, f_20, t);
                        LocalPopChoice(a_68);
                      }
                    else
                      {
                        t = z_67;
                        {
                          ATerm b_68 = t;
                          int c_68 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(c_68);
                            }
                          else
                            {
                              t = b_68;
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
static ATerm z_19 (ATerm t)
{
  t = input_1_0(h_20, t);
  return(t);
}
static ATerm d_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_20 (ATerm t)
{
  ATerm o_145 = NULL,p_145 = NULL;
  t = term_i_60;
  o_145 = t;
  t = term_m_62;
  p_145 = t;
  t = term_d_68;
  t = v_12(o_145, p_145, t);
  t = term_e_68;
  return(t);
}
static ATerm f_20 (ATerm t)
{
  t = term_i_68;
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_19, default_usage_0_0, _id, z_19, t);
  return(t);
}

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
ATerm term_h_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_c_68;
ATerm term_n_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_i_67;
ATerm term_b_67;
ATerm term_u_66;
ATerm term_t_66;
ATerm term_s_66;
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
ATerm term_q_64;
ATerm term_p_64;
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
ATerm term_l_63;
ATerm term_k_63;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_r_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_e_61;
ATerm term_x_60;
ATerm term_v_60;
ATerm term_u_60;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_q_58;
ATerm term_w_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_c_56;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_b_50;
ATerm term_w_49;
ATerm term_p_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_45;
ATerm term_d_45;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_z_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_b_39;
ATerm term_t_38;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_a_37;
ATerm term_w_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_m_36;
ATerm term_i_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_h_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_k_31;
ATerm term_b_31;
ATerm term_e_30;
ATerm term_y_29;
ATerm term_u_29;
ATerm term_m_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_n_28;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_a_24;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_u_22;
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
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Op_2, term_r_22, (ATerm) ATempty);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_20);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Op_2, term_l_25, (ATerm) ATempty);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_25);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Call_2, term_c_26, (ATerm) ATempty);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_27);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Call_2, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Call_2, term_k_25, (ATerm) ATempty);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
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
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_RootApp_1, term_r_20);
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
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_36);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_36);
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
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Closure", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Var_1, term_h_42);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_42);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Build_1, term_q_24);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_42);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_44);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_45);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_46);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_46);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_49);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
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
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_56);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_56);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_v_60);
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_o_61);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_c_62);
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_o_63);
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
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  term_g_65 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_f_65);
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_d_64);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_v_65);
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
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(sym__2, term_p_66, term_r_63);
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(sym__2, term_v_65, term_r_63);
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(sym__3, term_v_64, term_w_64, (ATerm) ATempty);
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(sym__2, term_u_60, term_m_66);
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(sym__2, term_c_62, term_r_63);
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm m_110 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm v_10 (ATerm c_143 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm c_143 (ATerm), ATerm t);
static ATerm g_18 (ATerm c_11, ATerm i_11, ATerm t);
static ATerm h_18 (ATerm i_12, ATerm x_12, ATerm t);
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
static ATerm t_29 (ATerm h_29, ATerm t);
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
static ATerm z_10 (ATerm b_143 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm d_143 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm b_11 (ATerm y_81, ATerm x_81, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm k_58 (ATerm t_57, ATerm t);
static ATerm l_58 (ATerm w_57, ATerm t);
static ATerm c_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm i_61 (ATerm m_60, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm k_11 (ATerm j_143 (ATerm), ATerm l_85, ATerm i_85, ATerm j_85, ATerm v_85, ATerm z_85, ATerm a_86, ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm j_143 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm q_111 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm g_143 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm n_9 (ATerm t);
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
static ATerm d_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm n_11 (ATerm u_83, ATerm t_83, ATerm t);
ATerm repeat_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm i_118 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm c_101 (ATerm t_99, ATerm u_99, ATerm v_99, ATerm y_99, ATerm z_99, ATerm a_100, ATerm b_100, ATerm t);
static ATerm g_11 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_116 (ATerm), ATerm t);
static ATerm l_11 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm t);
static ATerm j_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm m_14 (ATerm t);
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
ATerm Bind4_0_0 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm u_11 (ATerm j_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t);
static ATerm v_11 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
static ATerm w_11 (ATerm e_121 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
ATerm genzip_4_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm b_12 (ATerm i_673, ATerm n_673, ATerm v_66, ATerm t);
ATerm while_not_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm d_120 (ATerm s_118, ATerm t_118, ATerm u_118, ATerm t);
static ATerm y_15 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm free_vars_3_0 (ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm g_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm n_110 (ATerm), ATerm t);
static ATerm f_12 (ATerm p_60, ATerm q_60, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm g_12 (ATerm h_130 (ATerm), ATerm o_44, ATerm m_44, ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
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
static ATerm x_126 (ATerm p_126, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_12 (ATerm m_35, ATerm y_34, ATerm t);
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
static ATerm g_132 (ATerm a_132, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_12 (ATerm k_24, ATerm t);
static ATerm q_12 (ATerm x_38, ATerm y_38, ATerm t);
static ATerm r_12 (ATerm g_40, ATerm h_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_133 (ATerm q_132, ATerm t);
static ATerm t_133 (ATerm u_132, ATerm v_132, ATerm w_132, ATerm t);
static ATerm u_133 (ATerm f_133, ATerm g_133, ATerm h_133, ATerm t);
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
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_13 (ATerm j_55, ATerm k_55, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm z_12 (ATerm e_60, ATerm f_60, ATerm d_60, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm f_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm m_18 (ATerm t);
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
static ATerm u_18 (ATerm t);
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
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_13 (ATerm z_63, ATerm a_64, ATerm t);
static ATerm y_12 (ATerm x_61, ATerm y_61, ATerm t);
static ATerm d_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_137 (ATerm), ATerm t);
static ATerm s_19 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm b_20 (ATerm t);
static ATerm c_20 (ATerm t);
ATerm parse_options_1_0 (ATerm r_137 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm o_20 (ATerm t);
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
              t = term_q_20;
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
                  t = term_q_20;
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
                      t = term_r_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
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
static ATerm f_0 (ATerm t)
{
  ATerm u_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_5);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm y_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = y_20;
            {
              ATerm c_21 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_5 = ATgetArgument(t, 0);
                      x_5 = ATgetArgument(t, 1);
                      y_5 = ATgetArgument(t, 2);
                      z_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_5;
                  t = map_1_0(m_0, t);
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
static ATerm m_0 (ATerm t)
{
  ATerm h_6 = NULL;
  ATerm e_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_6 = ATgetArgument(t, 0);
          {
            ATerm h_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_21);
      t = h_6;
    }
  else
    {
      t = e_21;
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
  ATerm m_6 = NULL;
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_6);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm n_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_6);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm k_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_21);
    }
  else
    {
      t = k_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            {
              ATerm a_22 = t;
              int d_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_6 = NULL,r_6 = NULL,s_6 = NULL,v_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_6 = ATgetArgument(t, 0);
                      r_6 = ATgetArgument(t, 1);
                      s_6 = ATgetArgument(t, 2);
                      v_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_6;
                  t = map_1_0(b_1, t);
                  LocalPopChoice(d_22);
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
static ATerm b_1 (ATerm t)
{
  ATerm f_7 = NULL;
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_7 = ATgetArgument(t, 0);
          {
            ATerm g_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_22);
      t = f_7;
    }
  else
    {
      t = e_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_7;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 = NULL,b_0 = NULL,h_0 = NULL,c_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            v_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_7);
        b_0 = t;
        t = v_7;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        c_3 = t;
        t = SSLsetAnnotations(c_3, b_0);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, i_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  static ATerm s_8 (ATerm g_4, ATerm i_4, ATerm j_4, ATerm l_4, ATerm m_4, ATerm n_4, ATerm s_4, ATerm t)
  {
    ATerm a_5 = NULL,b_5 = NULL,e_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, m_4, term_u_22);
    {
      ATerm v_22 = t;
      if((PushChoice() == 0))
        {
          ATerm r_5 = NULL;
          if(match_cons(t, sym__2))
            {
              r_5 = ATgetArgument(t, 0);
              if((r_5 != ATgetArgument(t, 1)))
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
          t = v_22;
        }
    }
    t = new_0_0(t);
    a_5 = t;
    t = l_4;
    t = dummify_0_0(t);
    e_5 = t;
    {
      ATerm w_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_5;
          if((l_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, a_5);
          LocalPopChoice(x_22);
        }
      else
        {
          t = w_22;
          t = e_5;
        }
    }
    b_5 = t;
    t = e_5;
    t = free_vars_3_0(f_0, j_0, tboundin_3_0, t);
    t = map_1_0(s_0, t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_4, n_4);
    t = free_vars_3_0(w_0, y_0, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_5, n_5);
    t = diff_0_0(t);
    o_5 = t;
    t = new_0_0(t);
    p_5 = t;
    t = g_4;
    t = v_0(t);
    q_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, q_5, (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_23, (ATerm) ATinsert(CheckATermList(o_5), (ATerm) ATmakeAppl(sym_Str_1, p_5)))), e_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_4, i_4, j_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_5), l_4), m_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_4)))), b_5), (ATerm) ATmakeAppl(sym_Op_2, term_c_23, (ATerm) ATinsert(CheckATermList(o_5), (ATerm) ATmakeAppl(sym_Str_1, p_5))))), n_4))));
    return(t);
  }
  ATerm w_7 = NULL,b_8 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,o_8 = NULL,q_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      k_8 = ATgetArgument(t, 2);
      l_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_8;
  if(match_cons(t, sym_Rule_3))
    {
      m_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      q_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_8;
  if(match_cons(t, sym_Op_2))
    {
      w_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
      t = b_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_7;
          if(match_string(t, "Undefined"))
            {
              ATerm h_23 = t;
              int j_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
                  t = f_8;
                  t = new_0_0(t);
                  e_2 = t;
                  t = m_8;
                  t = dummify_0_0(t);
                  c_2 = t;
                  {
                    ATerm o_23 = t;
                    int u_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_2;
                        if((m_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
                        LocalPopChoice(u_23);
                      }
                    else
                      {
                        t = o_23;
                        t = c_2;
                      }
                  }
                  f_2 = t;
                  t = h_8;
                  t = v_0(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_2, (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, term_u_22), c_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_8, i_8, k_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_2), m_8), term_u_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_8)))), f_2), term_u_22)), (ATerm) ATmakeAppl(sym_Seq_2, q_8, term_q_20)))));
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = h_23;
                  t = s_8(h_8, i_8, k_8, m_8, o_8, q_8, f_8, t);
                }
            }
          else
            {
              t = s_8(h_8, i_8, k_8, m_8, o_8, q_8, f_8, t);
            }
        }
      else
        {
          t = w_7;
          t = s_8(h_8, i_8, k_8, m_8, o_8, q_8, f_8, t);
        }
    }
  else
    {
      t = s_8(h_8, i_8, k_8, m_8, o_8, q_8, f_8, t);
    }
  return(t);
}
static ATerm v_10 (ATerm c_143 (ATerm), ATerm r_81, ATerm p_81, ATerm q_81, ATerm u_81, ATerm s_81, ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  t = new_0_0(t);
  y_8 = t;
  t = u_81;
  t = dummify_0_0(t);
  x_8 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_8;
        if((u_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, y_8);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = x_8;
      }
  }
  z_8 = t;
  t = r_81;
  t = c_143(t);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, a_9, x_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, r_81, p_81, q_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_8), u_81), term_u_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_81)))), z_8), term_q_24)), (ATerm) ATmakeAppl(sym_Seq_2, s_81, term_q_20))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,g_9 = NULL,h_9 = NULL,l_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      e_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
      h_9 = ATgetArgument(t, 2);
      {
        ATerm r_24 = ATgetArgument(t, 3);
        if(match_cons(r_24, sym_Rule_3))
          {
            l_9 = ATgetArgument(r_24, 0);
            {
              ATerm s_24 = ATgetArgument(r_24, 1);
              if(match_cons(s_24, sym_Op_2))
                {
                  ATerm t_24 = ATgetArgument(s_24, 0);
                  if((ATgetSymbol((ATermAppl) t_24) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_24 = ATgetArgument(s_24, 1);
                    if(((ATgetType(u_24) != AT_LIST) || !(ATisEmpty(u_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            m_9 = ATgetArgument(r_24, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_10(c_143, e_9, g_9, h_9, l_9, m_9, t);
  return(t);
}
static ATerm g_18 (ATerm c_11, ATerm i_11, ATerm t)
{
  t = c_11;
  {
    ATerm e_25 = t;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,y_11 = NULL,e_12 = NULL,e_3 = NULL;
        e_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_11 = ATgetFirst((ATermList) t);
            y_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_12);
        r_11 = t;
        t = y_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_11), s_11);
        e_3 = t;
        t = SSLsetAnnotations(e_3, r_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_20, c_11);
  return(t);
}
static ATerm h_18 (ATerm i_12, ATerm x_12, ATerm t)
{
  t = i_12;
  {
    ATerm f_25 = t;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,f_3 = NULL;
        q_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_13 = ATgetFirst((ATermList) t);
            p_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_13);
        j_13 = t;
        t = p_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
        f_3 = t;
        t = SSLsetAnnotations(f_3, j_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_25, i_12);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,p_2 = NULL;
  k_14 = t;
  t = SSL_explode_term(k_14);
  if(match_cons(t, sym__2))
    {
      ATerm o_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(((ATgetType(p_25) == AT_LIST) && !(ATisEmpty(p_25))))
          {
            l_14 = ATgetFirst((ATermList) p_25);
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
  t = SSL_explode_term(k_14);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, p_2), l_14));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, e_15), c_15));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, h_15), g_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_26, (ATerm) ATinsert(ATinsert(ATempty, t_15), s_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_e_26;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_26, (ATerm) ATinsert(ATinsert(ATempty, z_15), x_15));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,b_14 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      x_13 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
      {
        ATerm i_14 = NULL;
        t = b_14;
        t = foldr_2_0(d_1, e_1, t);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, x_13, i_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          x_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, x_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              x_13 = ATgetArgument(t, 0);
              {
                ATerm u_2 = NULL;
                t = x_13;
                {
                  ATerm f_26 = t;
                  int g_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_h_26;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_i_26;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_l_26;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_n_26;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_o_26;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(g_26);
                    }
                  else
                    {
                      t = f_26;
                      {
                        ATerm w_2 = NULL;
                        t = SSL_explode_string(x_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm r_26 = ATgetFirst((ATermList) t);
                            if(((ATgetType(r_26) != AT_INT) || (ATgetInt((ATermInt) r_26) != 39)))
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
                                          ATerm v_26 = (ATerm) ATgetNext((ATermList) t_26);
                                          if(((ATgetType(v_26) != AT_LIST) || !(ATisEmpty(v_26))))
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
              ATerm w_26 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      x_13 = ATgetArgument(t, 0);
                      {
                        ATerm g_27 = ATgetArgument(t, 1);
                      }
                      v_13 = ATgetArgument(t, 2);
                      r_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_27);
                  t = (ATerm) ATmakeAppl(sym_Con_3, x_13, v_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_13), (ATerm) ATempty));
                }
              else
                {
                  t = w_26;
                  {
                    ATerm o_27 = t;
                    int p_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            x_13 = ATgetArgument(t, 0);
                            {
                              ATerm q_27 = ATgetArgument(t, 1);
                            }
                            v_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_27);
                        t = (ATerm) ATmakeAppl(sym_Con_3, x_13, v_13, term_n_28);
                      }
                    else
                      {
                        t = o_27;
                        if(match_cons(t, sym_Con1_2))
                          {
                            x_13 = ATgetArgument(t, 0);
                            b_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, x_13, b_14, term_n_28);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                x_13 = ATgetArgument(t, 0);
                                b_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = b_14;
                                    return(t);
                                  }
                                  t = x_13;
                                  t = foldr_2_0(f_1, g_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    x_13 = ATgetArgument(t, 0);
                                    t = x_13;
                                    t = foldr_2_0(h_1, i_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        x_13 = ATgetArgument(t, 0);
                                        t = x_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            s_13 = ATgetFirst((ATermList) t);
                                            t_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = t_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm t_28 = t;
                                                int u_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_18(x_13, w_13, t);
                                                    LocalPopChoice(u_28);
                                                  }
                                                else
                                                  {
                                                    t = t_28;
                                                    t = s_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_18(x_13, w_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_18(x_13, w_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            x_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, x_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                x_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, x_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    x_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, x_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        x_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, x_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            x_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                x_13 = ATgetArgument(t, 0);
                                                                b_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_13), b_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    x_13 = ATgetArgument(t, 0);
                                                                    b_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = b_14;
                                                                        return(t);
                                                                      }
                                                                      t = x_13;
                                                                      t = foldr_2_0(j_1, k_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        x_13 = ATgetArgument(t, 0);
                                                                        t = x_13;
                                                                        t = foldr_2_0(l_1, m_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            x_13 = ATgetArgument(t, 0);
                                                                            b_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_k_25, (ATerm) ATinsert(CheckATermList(b_14), x_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                x_13 = ATgetArgument(t, 0);
                                                                                t = x_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    s_13 = ATgetFirst((ATermList) t);
                                                                                    t_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = t_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm d_29 = t;
                                                                                        int f_29 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_18(x_13, w_13, t);
                                                                                            LocalPopChoice(f_29);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_29;
                                                                                            t = s_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_18(x_13, w_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_18(x_13, w_13, t);
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
                                                                                        x_13 = ATgetArgument(t, 0);
                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                        t = b_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_m_29, (ATerm) ATinsert(ATinsert(ATempty, u_13), x_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            x_13 = ATgetArgument(t, 0);
                                                                                            t = x_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                x_13 = ATgetArgument(t, 0);
                                                                                                b_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, x_13, b_14, term_r_20);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    x_13 = ATgetArgument(t, 0);
                                                                                                    b_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, x_13, b_14, term_r_20);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        x_13 = ATgetArgument(t, 0);
                                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, x_13, (ATerm)ATempty, b_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            x_13 = ATgetArgument(t, 0);
                                                                                                            b_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, b_14, x_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                x_13 = ATgetArgument(t, 0);
                                                                                                                b_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, x_13, b_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    x_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, x_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        x_13 = ATgetArgument(t, 0);
                                                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                                                        v_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_13, b_14, (ATerm)ATempty, v_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            x_13 = ATgetArgument(t, 0);
                                                                                                                            b_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_13, (ATerm)ATempty, (ATerm)ATempty, b_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                x_13 = ATgetArgument(t, 0);
                                                                                                                                b_14 = ATgetArgument(t, 1);
                                                                                                                                v_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, x_13, b_14, (ATerm)ATempty, v_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    x_13 = ATgetArgument(t, 0);
                                                                                                                                    b_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, x_13, (ATerm)ATempty, (ATerm)ATempty, b_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        x_13 = ATgetArgument(t, 0);
                                                                                                                                        b_14 = ATgetArgument(t, 1);
                                                                                                                                        v_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, x_13, b_14, (ATerm)ATempty, v_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            x_13 = ATgetArgument(t, 0);
                                                                                                                                            b_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, x_13, (ATerm)ATempty, (ATerm)ATempty, b_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm s_29 = ATgetArgument(t, 0);
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
        ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
        t = k_18;
        t = new_0_0(t);
        q_18 = t;
        t = new_0_0(t);
        r_18 = t;
        t = new_0_0(t);
        s_18 = t;
        t = new_0_0(t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_18), s_18), r_18), q_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_18), (ATerm) ATmakeAppl(sym_Var_1, s_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, l_18, (ATerm)ATmakeAppl(sym_Var_1, q_18), (ATerm) ATmakeAppl(sym_Var_1, r_18)), (ATerm) ATmakeAppl(sym_BAM_3, j_18, (ATerm)ATmakeAppl(sym_Var_1, s_18), (ATerm) ATmakeAppl(sym_Var_1, t_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_18)), (ATerm) ATmakeAppl(sym_Var_1, r_18))))));
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
              static ATerm n_1 (ATerm t)
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
              t = oncetd_1_0(n_1, t);
            }
            c_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_18)), not_null(y_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_19)), (ATerm) ATmakeAppl(sym_Build_1, c_19))));
          }
        }
      else
        {
          ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
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
            static ATerm o_1 (ATerm t)
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
            t = oncetd_1_0(o_1, t);
          }
          i_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_19))))), (ATerm)ATmakeAppl(sym_Var_1, g_19), (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_19)), not_null(e_19)))))));
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
    ATerm a_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
        t = m_19;
        t = new_0_0(t);
        v_19 = t;
        t = n_19;
        {
          static ATerm p_1 (ATerm t)
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
          t = pat_td_1_0(p_1, t);
        }
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_30, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_19))))));
        LocalPopChoice(c_30);
      }
    else
      {
        t = a_30;
        {
          ATerm f_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
              t = m_19;
              t = new_0_0(t);
              z_19 = t;
              t = n_19;
              {
                static ATerm q_1 (ATerm t)
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
                t = pat_td_1_0(q_1, t);
              }
              a_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_19)), not_null(y_19))));
              LocalPopChoice(i_30);
            }
          else
            {
              t = f_30;
              {
                ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
                t = m_19;
                t = new_0_0(t);
                i_20 = t;
                t = n_19;
                {
                  static ATerm r_1 (ATerm t)
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
                  t = pat_td_1_0(r_1, t);
                }
                j_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_20)), not_null(h_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm n_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_141(t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = n_30;
      {
        ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,j_26 = NULL;
        y_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            z_25 = ATgetArgument(t, 0);
            j_26 = ATgetArgument(t, 1);
            {
              ATerm i_3 = NULL,n_3 = NULL,j_3 = NULL;
              t = SSLgetAnnotations(y_25);
              i_3 = t;
              t = j_26;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(w_141, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, z_25, n_3);
              j_3 = t;
              t = SSLsetAnnotations(j_3, i_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                z_25 = ATgetArgument(t, 0);
                j_26 = ATgetArgument(t, 1);
                {
                  ATerm u_30 = t;
                  int v_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_4 = NULL,k_4 = NULL,l_3 = NULL;
                      t = SSLgetAnnotations(y_25);
                      b_4 = t;
                      t = j_26;
                      t = pat_td_1_0(w_141, t);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, z_25, k_4);
                      l_3 = t;
                      t = SSLsetAnnotations(l_3, b_4);
                      LocalPopChoice(v_30);
                    }
                  else
                    {
                      t = u_30;
                      {
                        ATerm c_5 = NULL,i_5 = NULL,p_3 = NULL;
                        t = SSLgetAnnotations(y_25);
                        c_5 = t;
                        t = z_25;
                        t = pat_td_1_0(w_141, t);
                        i_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, i_5, j_26);
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
                    z_25 = ATgetArgument(t, 0);
                    j_26 = ATgetArgument(t, 1);
                    x_25 = ATgetArgument(t, 2);
                    {
                      ATerm u_6 = NULL,l_7 = NULL,r_3 = NULL;
                      t = SSLgetAnnotations(y_25);
                      u_6 = t;
                      t = x_25;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(w_141, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      l_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, z_25, j_26, l_7);
                      r_3 = t;
                      t = SSLsetAnnotations(r_3, u_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        z_25 = ATgetArgument(t, 0);
                        j_26 = ATgetArgument(t, 1);
                        x_25 = ATgetArgument(t, 2);
                        {
                          ATerm a_8 = NULL,g_8 = NULL,u_3 = NULL;
                          t = SSLgetAnnotations(y_25);
                          a_8 = t;
                          t = x_25;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(w_141, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          g_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, z_25, j_26, g_8);
                          u_3 = t;
                          t = SSLsetAnnotations(u_3, a_8);
                        }
                      }
                    else
                      {
                        ATerm j_9 = NULL,o_9 = NULL,w_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            z_25 = ATgetArgument(t, 0);
                            j_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(y_25);
                        j_9 = t;
                        t = j_26;
                        t = pat_td_1_0(w_141, t);
                        o_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, z_25, o_9);
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
    ATerm y_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL;
        t = y_26;
        t = new_0_0(t);
        d_27 = t;
        t = z_26;
        {
          static ATerm v_1 (ATerm t)
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
          t = pat_td_1_0(v_1, t);
        }
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_31, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_27)), not_null(a_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_27)))), (ATerm) ATmakeAppl(sym_Build_1, e_27)));
        LocalPopChoice(a_31);
      }
    else
      {
        t = y_30;
        {
          ATerm c_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_27 = NULL,j_27 = NULL,k_27 = NULL;
              t = y_26;
              t = new_0_0(t);
              j_27 = t;
              t = z_26;
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              k_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_27)))), (ATerm) ATmakeAppl(sym_Build_1, k_27)));
              LocalPopChoice(f_31);
            }
          else
            {
              t = c_31;
              {
                ATerm l_27 = NULL,m_27 = NULL,s_27 = NULL,t_27 = NULL;
                t = y_26;
                t = new_0_0(t);
                s_27 = t;
                t = z_26;
                {
                  static ATerm x_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_27 = ATgetArgument(t, 0);
                        if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_27);
                    return(t);
                  }
                  t = pat_td_1_0(x_1, t);
                }
                t_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_27), not_null(m_27), (ATerm) ATmakeAppl(sym_Var_1, s_27))), (ATerm) ATmakeAppl(sym_Build_1, t_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_31 = t;
  if((PushChoice() == 0))
    {
      ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,k_7 = NULL;
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
      k_7 = t;
      t = SSLsetAnnotations(k_7, e_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_31;
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
  ATerm l_28 = NULL,o_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_28, o_28);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,w_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      if(match_cons(m_31, sym__2))
        {
          p_28 = ATgetArgument(m_31, 0);
          q_28 = ATgetArgument(m_31, 1);
        }
      else
        _fail(t);
      {
        ATerm o_31 = ATgetArgument(t, 1);
        if(match_cons(o_31, sym__2))
          {
            r_28 = ATgetArgument(o_31, 0);
            w_28 = ATgetArgument(o_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_28), p_28), (ATerm) ATinsert(CheckATermList(w_28), q_28));
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
static ATerm i_2 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_31 = ATgetArgument(t, 0);
      if(match_cons(t_31, sym__2))
        {
          z_28 = ATgetArgument(t_31, 0);
          a_29 = ATgetArgument(t_31, 1);
        }
      else
        _fail(t);
      {
        ATerm u_31 = ATgetArgument(t, 1);
        if(match_cons(u_31, sym__2))
          {
            b_29 = ATgetArgument(u_31, 0);
            c_29 = ATgetArgument(u_31, 1);
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
static ATerm x_10 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,m_7 = NULL;
  t = k_72;
  t = fetch_1_0(y_1, t);
  t = k_72;
  t = genzip_4_0(z_1, a_2, b_2, LiftPrimArg_0_0, t);
  d_28 = t;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  y_27 = t;
  t = z_27;
  t = concat_0_0(t);
  b_28 = t;
  t = a_28;
  t = genzip_4_0(d_2, h_2, i_2, _id, t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
  m_7 = t;
  t = SSLsetAnnotations(m_7, y_27);
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      {
        ATerm v_31 = ATgetArgument(t, 1);
        if(match_cons(v_31, sym__2))
          {
            w_27 = ATgetArgument(v_31, 0);
            x_27 = ATgetArgument(v_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_27), (ATerm) ATmakeAppl(sym_CallT_3, i_72, j_72, x_27)));
  return(t);
}
static ATerm t_29 (ATerm h_29, ATerm t)
{
  ATerm j_29 = NULL;
  t = h_29;
  {
    ATerm x_31 = t;
    if((PushChoice() == 0))
      {
        ATerm k_29 = NULL,n_29 = NULL,o_29 = NULL,u_8 = NULL;
        o_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_29);
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_29);
        u_8 = t;
        t = SSLsetAnnotations(u_8, k_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_31;
      }
  }
  t = new_0_0(t);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_29)))), (ATerm) ATmakeAppl(sym_Var_1, j_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_29 = NULL,r_29 = NULL;
  p_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_29 = ATgetArgument(t, 0);
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_29(p_29, t);
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATmakeAppl(sym_Var_1, r_29)));
          }
      }
    }
  else
    {
      t = t_29(p_29, t);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm b_32 = t;
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
      t = b_32;
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
static ATerm m_2 (ATerm t)
{
  ATerm u_10 = NULL,w_10 = NULL,a_11 = NULL,d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if(match_cons(c_32, sym__2))
        {
          u_10 = ATgetArgument(c_32, 0);
          w_10 = ATgetArgument(c_32, 1);
        }
      else
        _fail(t);
      {
        ATerm d_32 = ATgetArgument(t, 1);
        if(match_cons(d_32, sym__2))
          {
            a_11 = ATgetArgument(d_32, 0);
            d_11 = ATgetArgument(d_32, 1);
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
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm o_2 (ATerm t)
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
static ATerm q_2 (ATerm t)
{
  ATerm h_11 = NULL,j_11 = NULL,m_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      if(match_cons(e_32, sym__2))
        {
          h_11 = ATgetArgument(e_32, 0);
          j_11 = ATgetArgument(e_32, 1);
        }
      else
        _fail(t);
      {
        ATerm f_32 = ATgetArgument(t, 1);
        if(match_cons(f_32, sym__2))
          {
            m_11 = ATgetArgument(f_32, 0);
            o_11 = ATgetArgument(f_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_11), h_11), (ATerm) ATinsert(CheckATermList(o_11), j_11));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm g_32 = t;
  if((PushChoice() == 0))
    {
      ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,m_10 = NULL;
      a_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_14);
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
      m_10 = t;
      t = SSLsetAnnotations(m_10, y_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_32;
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
  ATerm d_14 = NULL,e_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_14 = ATgetFirst((ATermList) t);
      e_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_14, e_14);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_32 = ATgetArgument(t, 0);
      if(match_cons(i_32, sym__2))
        {
          f_14 = ATgetArgument(i_32, 0);
          g_14 = ATgetArgument(i_32, 1);
        }
      else
        _fail(t);
      {
        ATerm j_32 = ATgetArgument(t, 1);
        if(match_cons(j_32, sym__2))
          {
            r_14 = ATgetArgument(j_32, 0);
            s_14 = ATgetArgument(j_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_14), f_14), (ATerm) ATinsert(CheckATermList(s_14), g_14));
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
  ATerm u_14 = NULL,v_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_14 = ATgetFirst((ATermList) t);
      v_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm y_14 = NULL,d_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_32 = ATgetArgument(t, 0);
      if(match_cons(k_32, sym__2))
        {
          y_14 = ATgetArgument(k_32, 0);
          d_15 = ATgetArgument(k_32, 1);
        }
      else
        _fail(t);
      {
        ATerm l_32 = ATgetArgument(t, 1);
        if(match_cons(l_32, sym__2))
          {
            v_15 = ATgetArgument(l_32, 0);
            w_15 = ATgetArgument(l_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_15), y_14), (ATerm) ATinsert(CheckATermList(w_15), d_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
      c_35 = ATgetArgument(t, 2);
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,l_10 = NULL,k_10 = NULL;
        t = c_35;
        t = fetch_1_0(j_2, t);
        t = c_35;
        t = genzip_4_0(k_2, l_2, m_2, LiftPrimArg_0_0, t);
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
        t = genzip_4_0(n_2, o_2, q_2, _id, t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, j_10);
        k_10 = t;
        t = SSLsetAnnotations(k_10, e_10);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_10), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, f_35, c_10)));
      }
    }
  else
    {
      ATerm a_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,n_10 = NULL;
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
      n_13 = t;
      if(match_cons(t, sym__2))
        {
          h_13 = ATgetArgument(t, 0);
          k_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_13);
      g_13 = t;
      t = h_13;
      t = concat_0_0(t);
      l_13 = t;
      t = k_13;
      t = genzip_4_0(x_2, y_2, z_2, _id, t);
      m_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_13, m_13);
      n_10 = t;
      t = SSLsetAnnotations(n_10, g_13);
      if(match_cons(t, sym__2))
        {
          a_13 = ATgetArgument(t, 0);
          {
            ATerm n_32 = ATgetArgument(t, 1);
            if(match_cons(n_32, sym__2))
              {
                e_13 = ATgetArgument(n_32, 0);
                f_13 = ATgetArgument(n_32, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_13), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, (ATerm)ATempty, f_13)));
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,p_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      j_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
      l_36 = ATgetArgument(t, 2);
      {
        ATerm l_16 = NULL,x_20 = NULL;
        t = SSLgetAnnotations(p_36);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, j_36, k_36, l_36);
        x_20 = t;
        t = SSLsetAnnotations(x_20, l_16);
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
  ATerm o_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_32;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      e_38 = ATgetArgument(t, 2);
      {
        ATerm z_17 = NULL,z_20 = NULL;
        t = SSLgetAnnotations(f_38);
        z_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_38, h_38, e_38);
        z_20 = t;
        t = SSLsetAnnotations(z_20, z_17);
      }
    }
  else
    {
      ATerm k_19 = NULL,a_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          g_38 = ATgetArgument(t, 0);
          h_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_38);
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, g_38, h_38);
      a_21 = t;
      t = SSLsetAnnotations(a_21, k_19);
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
static ATerm y_10 (ATerm v_67, ATerm w_67, ATerm x_67, ATerm t)
{
  ATerm h_39 = NULL,j_39 = NULL,k_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = new_0_0(t);
  q_39 = t;
  t = v_67;
  {
    static ATerm d_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_32 = ATgetArgument(t, 0);
          if(match_cons(r_32, sym_Var_1))
            {
              if(((p_39 != NULL) && (p_39 != ATgetArgument(r_32, 0))))
                _fail(ATgetArgument(r_32, 0));
              else
                p_39 = ATgetArgument(r_32, 0);
            }
          else
            _fail(t);
          if(((j_39 != NULL) && (j_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_39 = ATgetArgument(t, 1);
          {
            ATerm s_32 = ATgetArgument(t, 2);
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
  t = w_67;
  {
    static ATerm g_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_32 = ATgetArgument(t, 0);
          if(match_cons(t_32, sym_Var_1))
            {
              if(((p_39 != NULL) && (p_39 != ATgetArgument(t_32, 0))))
                _fail(ATgetArgument(t_32, 0));
              else
                p_39 = ATgetArgument(t_32, 0);
            }
          else
            _fail(t);
          if(((k_39 != NULL) && (k_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_39 = ATgetArgument(t, 1);
          {
            ATerm u_32 = ATgetArgument(t, 2);
            if(match_cons(u_32, sym_CallT_3))
              {
                if(((h_39 != NULL) && (h_39 != ATgetArgument(u_32, 0))))
                  _fail(ATgetArgument(u_32, 0));
                else
                  h_39 = ATgetArgument(u_32, 0);
                {
                  ATerm w_32 = ATgetArgument(u_32, 1);
                  if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
                    _fail(t);
                }
                {
                  ATerm x_32 = ATgetArgument(u_32, 2);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, q_39);
      return(t);
    }
    t = oncetd_1_0(g_3, t);
  }
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, r_39, s_39, (ATerm) ATmakeAppl(sym_Seq_2, x_67, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(h_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_39), not_null(k_39), term_r_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_39)), (ATerm) ATmakeAppl(sym_Var_1, q_39))))));
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
          ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
          y_40 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_40 = ATgetArgument(t, 0);
              t = z_40;
              if(match_cons(t, sym_Rule_3))
                {
                  v_40 = ATgetArgument(t, 0);
                  w_40 = ATgetArgument(t, 1);
                  x_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_40;
              t = y_10(v_40, w_40, x_40, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm k_20 = NULL,n_20 = NULL,f_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  z_40 = ATgetArgument(t, 0);
                  a_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_40);
              k_20 = t;
              t = a_41;
              t = desugarRule_0_0(t);
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_40, n_20);
              f_21 = t;
              t = SSLsetAnnotations(f_21, k_20);
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
static ATerm h_3 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
    }
  t = repeat_2_0(k_3, _id, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm g_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
            z_41 = t;
            if(match_cons(t, sym_CallT_3))
              {
                a_42 = ATgetArgument(t, 0);
                b_42 = ATgetArgument(t, 1);
                c_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_41;
            t = x_10(a_42, b_42, c_42, t);
            LocalPopChoice(i_33);
          }
        else
          {
            t = g_33;
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
                                  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_42;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      k_42 = ATgetArgument(t, 0);
                                      t = k_42;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          k_42 = ATgetArgument(t, 0);
                                          l_42 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, k_42, l_42);
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
  t = topdown_1_0(h_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm i_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_46 = ATgetArgument(t, 0);
      t = i_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_46 = ATgetArgument(t, 0);
          {
            ATerm t_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_46;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_46), (ATerm) ATempty);
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
            ATerm u_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_46;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, t_46);
  return(t);
}
static ATerm q_3 (ATerm t)
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
static ATerm s_3 (ATerm t)
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
                  ATerm d_47 = NULL,h_47 = NULL,i_47 = NULL,n_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_47 = ATgetArgument(t, 0);
                      h_47 = ATgetArgument(t, 1);
                      i_47 = ATgetArgument(t, 2);
                      n_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_47;
                  t = map_1_0(t_3, t);
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
static ATerm t_3 (ATerm t)
{
  ATerm u_47 = NULL;
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_47 = ATgetArgument(t, 0);
          {
            ATerm e_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_34);
      t = u_47;
    }
  else
    {
      t = c_34;
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
static ATerm v_3 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_47);
  return(t);
}
static ATerm x_3 (ATerm t)
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
static ATerm y_3 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm j_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_34);
          }
        else
          {
            t = j_34;
            {
              ATerm m_34 = t;
              int q_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,l_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_48 = ATgetArgument(t, 0);
                      g_48 = ATgetArgument(t, 1);
                      h_48 = ATgetArgument(t, 2);
                      l_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_48;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(q_34);
                }
              else
                {
                  t = m_34;
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
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_48 = ATgetArgument(t, 0);
          {
            ATerm u_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_34);
      t = w_48;
    }
  else
    {
      t = s_34;
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
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_49 = NULL,t_20 = NULL,w_20 = NULL,w_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            o_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_48);
        t_20 = t;
        t = o_49;
        t = ContextVar_0_0(t);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, w_20);
        w_21 = t;
        t = SSLsetAnnotations(w_21, t_20);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, z_48);
  return(t);
}
static ATerm z_10 (ATerm b_143 (ATerm), ATerm y_80, ATerm v_80, ATerm w_80, ATerm f_81, ATerm j_81, ATerm k_81, ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,v_43 = NULL,e_44 = NULL,b_45 = NULL,m_45 = NULL,r_45 = NULL,w_45 = NULL,z_45 = NULL,b_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_81, term_u_22);
  {
    ATerm x_34 = t;
    if((PushChoice() == 0))
      {
        ATerm c_46 = NULL;
        if(match_cons(t, sym__2))
          {
            c_46 = ATgetArgument(t, 0);
            if((c_46 != ATgetArgument(t, 1)))
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
  t = term_z_34;
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, y_80);
  t = q_12(b_46, y_80, t);
  i_43 = t;
  t = term_a_35;
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_35, y_80);
  t = q_12(z_45, y_80, t);
  j_43 = t;
  t = new_0_0(t);
  k_43 = t;
  t = v_80;
  t = map_1_0(m_3, t);
  l_43 = t;
  t = w_80;
  t = map_1_0(o_3, t);
  m_43 = t;
  t = new_0_0(t);
  n_43 = t;
  t = f_81;
  t = dummify_0_0(t);
  v_43 = t;
  {
    ATerm b_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_43;
        if((f_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, n_43);
        LocalPopChoice(g_35);
      }
    else
      {
        t = b_35;
        t = v_43;
      }
  }
  o_43 = t;
  t = v_43;
  t = free_vars_3_0(q_3, s_3, tboundin_3_0, t);
  t = map_1_0(v_3, t);
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
  t = free_vars_3_0(x_3, y_3, tboundin_3_0, t);
  t = filter_1_0(a_4, t);
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_44, b_45);
  t = diff_0_0(t);
  m_45 = t;
  t = new_0_0(t);
  r_45 = t;
  t = y_80;
  t = b_143(t);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, w_45, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_23, (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATmakeAppl(sym_Str_1, r_45)))), v_43)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, j_43, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_23, (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATmakeAppl(sym_Str_1, r_45)))), f_81)), j_81, (ATerm) ATmakeAppl(sym_Seq_2, term_p_35, k_81)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_43, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_43), f_81), (ATerm)ATmakeAppl(sym_Var_1, k_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), o_43), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_43), l_43, m_43), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_l_35), (ATerm) ATmakeAppl(sym_Var_1, n_43)))))), (ATerm) ATmakeAppl(sym_Var_1, k_43)))))), (ATerm) ATmakeAppl(sym_RDefT_4, y_80, v_80, w_80, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_43), f_81), j_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_24, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_80)))), o_43), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_23, (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATmakeAppl(sym_Str_1, r_45)))), term_h_35))), k_81)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm q_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
      o_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          p_21 = ATgetArgument(t, 0);
          q_21 = ATgetArgument(t, 1);
          r_21 = ATgetArgument(t, 2);
          s_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = s_21;
      if(match_cons(t, sym_Rule_3))
        {
          t_21 = ATgetArgument(t, 0);
          u_21 = ATgetArgument(t, 1);
          v_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_21;
      t = z_10(d_4, p_21, q_21, r_21, t_21, u_21, v_21, t);
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
  ATerm h_22 = NULL;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_22))));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_22))));
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_22 = ATgetFirst((ATermList) t);
      k_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(match_cons(x_35, sym__2))
        {
          l_22 = ATgetArgument(x_35, 0);
          m_22 = ATgetArgument(x_35, 1);
        }
      else
        _fail(t);
      {
        ATerm y_35 = ATgetArgument(t, 1);
        if(match_cons(y_35, sym__2))
          {
            n_22 = ATgetArgument(y_35, 0);
            o_22 = ATgetArgument(y_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_22), l_22), (ATerm) ATinsert(CheckATermList(o_22), m_22));
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,d_24 = NULL,h_24 = NULL,l_24 = NULL,n_24 = NULL;
      p_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          q_23 = ATgetArgument(t, 0);
          r_23 = ATgetArgument(t, 1);
          s_23 = ATgetArgument(t, 2);
          d_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_24;
      if(match_cons(t, sym_Rule_3))
        {
          h_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
          n_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_23;
      t = z_10(q_4, q_23, r_23, s_23, h_24, l_24, n_24, t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(r_4, t);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_24))));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_24))));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm u_4 (ATerm t)
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
  ATerm z_24 = NULL,a_25 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(match_cons(g_36, sym__2))
        {
          z_24 = ATgetArgument(g_36, 0);
          a_25 = ATgetArgument(g_36, 1);
        }
      else
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(match_cons(h_36, sym__2))
          {
            c_25 = ATgetArgument(h_36, 0);
            d_25 = ATgetArgument(h_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_25), z_24), (ATerm) ATinsert(CheckATermList(d_25), a_25));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_53))));
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_53 = ATgetFirst((ATermList) t);
      a_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_53, a_54);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm b_54 = NULL,f_54 = NULL,g_54 = NULL,i_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if(match_cons(o_36, sym__2))
        {
          b_54 = ATgetArgument(o_36, 0);
          f_54 = ATgetArgument(o_36, 1);
        }
      else
        _fail(t);
      {
        ATerm q_36 = ATgetArgument(t, 1);
        if(match_cons(q_36, sym__2))
          {
            g_54 = ATgetArgument(q_36, 0);
            i_54 = ATgetArgument(q_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_54), b_54), (ATerm) ATinsert(CheckATermList(i_54), f_54));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm q_54 = NULL;
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_54))));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_31;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_54 = ATgetFirst((ATermList) t);
      s_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_54, s_54);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm t_54 = NULL,y_54 = NULL,d_55 = NULL,i_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_36 = ATgetArgument(t, 0);
      if(match_cons(u_36, sym__2))
        {
          t_54 = ATgetArgument(u_36, 0);
          y_54 = ATgetArgument(u_36, 1);
        }
      else
        _fail(t);
      {
        ATerm v_36 = ATgetArgument(t, 1);
        if(match_cons(v_36, sym__2))
          {
            d_55 = ATgetArgument(v_36, 0);
            i_55 = ATgetArgument(v_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_55), t_54), (ATerm) ATinsert(CheckATermList(i_55), y_54));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  t_53 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      u_53 = ATgetArgument(t, 0);
      {
        ATerm i_21 = NULL,j_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,b_22 = NULL;
        t = u_53;
        t = map_1_0(c_4, t);
        t = genzip_4_0(f_4, h_4, o_4, _id, t);
        n_21 = t;
        if(match_cons(t, sym__2))
          {
            j_21 = ATgetArgument(t, 0);
            l_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_21);
        i_21 = t;
        t = l_21;
        t = concat_0_0(t);
        m_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_21, m_21);
        b_22 = t;
        t = SSLsetAnnotations(b_22, i_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          u_53 = ATgetArgument(t, 0);
          {
            ATerm y_22 = NULL,z_22 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,c_22 = NULL;
            t = u_53;
            t = map_1_0(p_4, t);
            t = genzip_4_0(t_4, u_4, v_4, _id, t);
            m_23 = t;
            if(match_cons(t, sym__2))
              {
                z_22 = ATgetArgument(t, 0);
                k_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_23);
            y_22 = t;
            t = k_23;
            t = concat_0_0(t);
            l_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_22, l_23);
            c_22 = t;
            t = SSLsetAnnotations(c_22, y_22);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              u_53 = ATgetArgument(t, 0);
              t = u_53;
              t = map_1_0(w_4, t);
              t = genzip_4_0(y_4, z_4, d_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  u_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = u_53;
              t = map_1_0(f_5, t);
              t = genzip_4_0(h_5, j_5, k_5, _id, t);
            }
        }
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm d_143 (ATerm), ATerm t)
{
  static ATerm g_56 (ATerm t)
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
            ATerm q_55 = NULL,x_55 = NULL,d_56 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                q_55 = ATgetArgument(t, 0);
                x_55 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, q_55, x_55);
            {
              static ATerm t_5 (ATerm t)
              {
                t = q_55;
                t = DeclareContextVars_0_0(t);
                t = x_55;
                t = g_56(t);
                if(((d_56 != NULL) && (d_56 != t)))
                  _fail(t);
                else
                  d_56 = t;
                return(t);
              }
              t = scope_2_0(s_5, t_5, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, q_55, not_null(d_56));
          }
        }
      return(t);
    }
    t = oncetd_1_0(l_5, t);
    return(t);
  }
  t = g_56(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm b_11 (ATerm y_81, ATerm x_81, ATerm t)
{
  ATerm h_56 = NULL,m_56 = NULL,r_56 = NULL;
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
            if(((m_56 != NULL) && (m_56 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              m_56 = ATgetArgument(t, 0);
            if(((h_56 != NULL) && (h_56 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_56);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(b_6, t);
    }
    if(((r_56 != NULL) && (r_56 != t)))
      _fail(t);
    else
      r_56 = t;
    return(t);
  }
  t = scope_2_0(v_5, a_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_56)), not_null(r_56)), x_81);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm z_56 = NULL,b_57 = NULL,d_57 = NULL,j_57 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      d_57 = ATgetArgument(t, 0);
      j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_56 = ATgetFirst((ATermList) t);
      b_57 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_c_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, b_57, j_57)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_56))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_57;
    }
  return(t);
}
static ATerm k_58 (ATerm t_57, ATerm t)
{
  t = SSL_is_string(t_57);
  return(t);
}
static ATerm l_58 (ATerm w_57, ATerm t)
{
  ATerm x_57 = NULL,d_58 = NULL,e_58 = NULL;
  t = term_d_37;
  d_58 = t;
  t = (ATerm) ATinsert(ATempty, term_e_37);
  e_58 = t;
  t = SSL_printnl(d_58, e_58);
  t = w_57;
  t = debug_1_0(c_6, t);
  t = term_f_37;
  x_57 = t;
  t = SSL_exit(x_57);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_g_37;
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
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_58(g_58, t);
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = f_58;
          }
      }
    }
  else
    {
      ATerm j_37 = t;
      int k_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_58(g_58, t);
          LocalPopChoice(k_37);
        }
      else
        {
          t = j_37;
          t = l_58(g_58, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,d_59 = NULL,e_59 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      x_58 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
      t = x_58;
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
          a_59 = ATgetArgument(t, 1);
          d_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_58, a_59, d_59, (ATerm) ATmakeAppl(sym_Rule_3, e_59, term_u_22, term_r_20));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          x_58 = ATgetArgument(t, 0);
          e_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_58;
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
          a_59 = ATgetArgument(t, 1);
          d_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_58, a_59, d_59, e_59);
    }
  return(t);
}
static ATerm i_61 (ATerm m_60, ATerm t)
{
  ATerm o_60 = NULL,s_60 = NULL,t_60 = NULL,y_60 = NULL;
  t = m_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      t_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_60;
  t = filter_1_0(d_6, t);
  y_60 = t;
  t = m_60;
  if(match_cons(t, sym_GenDynRules_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_60;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, y_60), (ATerm) ATmakeAppl(sym_DynamicRules_1, s_60));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(match_cons(l_37, sym_DynRuleId_1))
        {
          ATerm m_37 = ATgetArgument(l_37, 0);
          if(match_cons(m_37, sym_RDecT_3))
            {
              z_60 = ATgetArgument(m_37, 0);
              a_61 = ATgetArgument(m_37, 1);
              b_61 = ATgetArgument(m_37, 2);
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
  t = (ATerm) ATmakeAppl(sym_RDefT_4, z_60, a_61, b_61, c_61);
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
  ATerm d_61 = NULL,g_61 = NULL;
  g_61 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      d_61 = ATgetArgument(t, 0);
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25 = NULL;
            t = d_61;
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
            t = d_61;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            m_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, m_25);
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            t = i_61(g_61, t);
          }
      }
    }
  else
    {
      t = i_61(g_61, t);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_61 = NULL;
      l_61 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm u_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_61;
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
            ATerm m_61 = NULL;
            m_61 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm x_37 = ATgetArgument(t, 0);
                ATerm y_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_61;
            LocalPopChoice(w_37);
            {
              ATerm u_61 = NULL,v_61 = NULL,z_61 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  u_61 = ATgetArgument(t, 0);
                  v_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_61;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              z_61 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, z_61, v_61);
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
  t = Cons_2_0(i_6, j_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,c_63 = NULL,s_22 = NULL;
  c_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_63);
  x_62 = t;
  t = y_62;
  t = topdown_1_0(k_6, t);
  t = listtd_1_0(l_6, t);
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_62);
  s_22 = t;
  t = SSLsetAnnotations(s_22, x_62);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
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
  t = repeat_2_0(o_6, _id, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm h_63 = NULL,j_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_63 = ATgetFirst((ATermList) t);
      j_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_11(h_63, j_63, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,t_62 = NULL,v_62 = NULL,a_23 = NULL,t_22 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  v_62 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_62);
  g_62 = t;
  t = h_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_62 = ATgetFirst((ATermList) t);
      m_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_62);
  k_62 = t;
  t = m_62;
  t = Cons_2_0(_id, g_6, t);
  n_62 = t;
  t = (ATerm) ATinsert(CheckATermList(n_62), l_62);
  t_22 = t;
  t = SSLsetAnnotations(t_22, k_62);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_62);
  a_23 = t;
  t = SSLsetAnnotations(a_23, g_62);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm o_64 = NULL;
  o_64 = t;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_26 = NULL;
        t = term_w_36;
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_36, o_64);
        t = f_12(k_26, o_64, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_38) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = o_64;
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        {
          ATerm x_26 = NULL;
          t = term_w_36;
          x_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_36, o_64);
          t = f_12(x_26, o_64, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm i_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_38) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = o_64;
        }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,a_67 = NULL;
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
              ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,f_23 = NULL;
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
                ATerm n_38 = t;
                int o_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(o_38);
                  }
                else
                  {
                    t = n_38;
                    {
                      ATerm v_28 = NULL,l_29 = NULL,q_29 = NULL,e_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          v_28 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(i_28);
                      l_29 = t;
                      t = v_28;
                      t = ContextVar_0_0(t);
                      q_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, q_29);
                      e_23 = t;
                      t = SSLsetAnnotations(e_23, l_29);
                    }
                  }
              }
              j_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, j_28);
              f_23 = t;
              t = SSLsetAnnotations(f_23, h_28);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_38;
            }
        }
        t = term_n_25;
      }
    else
      {
        t = j_38;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_n_25;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                r_66 = ATgetArgument(t, 0);
                {
                  ATerm d_67 = NULL;
                  t = r_66;
                  t = free_vars_3_0(t_6, w_6, tboundin_3_0, t);
                  t = map_1_0(y_6, t);
                  d_67 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_38, d_67);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    r_66 = ATgetArgument(t, 0);
                    a_67 = ATgetArgument(t, 1);
                    {
                      ATerm w_69 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, r_66, a_67);
                      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
                      t = map_1_0(c_7, t);
                      w_69 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_t_38, w_69);
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
static ATerm t_6 (ATerm t)
{
  ATerm e_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_67);
  return(t);
}
static ATerm w_6 (ATerm t)
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
              int i_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_67 = NULL,m_67 = NULL,u_67 = NULL,j_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_67 = ATgetArgument(t, 0);
                      m_67 = ATgetArgument(t, 1);
                      u_67 = ATgetArgument(t, 2);
                      j_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_67;
                  t = map_1_0(x_6, t);
                  LocalPopChoice(i_39);
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
static ATerm x_6 (ATerm t)
{
  ATerm s_68 = NULL;
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_68 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      t = s_68;
    }
  else
    {
      t = l_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_68;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm t_69 = NULL;
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_69);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm x_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_69);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm o_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_39);
    }
  else
    {
      t = o_39;
      {
        ATerm v_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_39);
          }
        else
          {
            t = v_39;
            {
              ATerm y_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_69 = ATgetArgument(t, 0);
                      a_70 = ATgetArgument(t, 1);
                      b_70 = ATgetArgument(t, 2);
                      c_70 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_70;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = y_39;
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
  ATerm j_70 = NULL;
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_70 = ATgetArgument(t, 0);
          {
            ATerm d_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_40);
      t = j_70;
    }
  else
    {
      t = b_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_70;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm a_71 = NULL;
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_71);
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
static ATerm d_7 (ATerm t)
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
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_74;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_74), (ATerm) ATempty);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm v_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_74 = ATgetArgument(t, 0);
      t = v_74;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_74 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_74;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, v_74);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm z_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_74);
  return(t);
}
static ATerm h_7 (ATerm t)
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
                  ATerm b_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_75 = ATgetArgument(t, 0);
                      h_75 = ATgetArgument(t, 1);
                      i_75 = ATgetArgument(t, 2);
                      j_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_75;
                  t = map_1_0(j_7, t);
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
static ATerm j_7 (ATerm t)
{
  ATerm q_75 = NULL;
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_75 = ATgetArgument(t, 0);
          {
            ATerm t_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_40);
      t = q_75;
    }
  else
    {
      t = r_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_75;
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm t_75 = NULL;
  t_75 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_75);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm u_75 = NULL;
  u_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_75);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm x_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_75);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm u_40 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_41);
    }
  else
    {
      t = u_40;
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm h_41 = t;
              int i_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_76 = NULL,b_76 = NULL,d_76 = NULL,e_76 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_76 = ATgetArgument(t, 0);
                      b_76 = ATgetArgument(t, 1);
                      d_76 = ATgetArgument(t, 2);
                      e_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_76;
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
  ATerm l_76 = NULL;
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_76 = ATgetArgument(t, 0);
          {
            ATerm l_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_41);
      t = l_76;
    }
  else
    {
      t = j_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_76;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm o_76 = NULL;
  o_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_76);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm i_77 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_77);
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
                  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_77 = ATgetArgument(t, 0);
                      l_77 = ATgetArgument(t, 1);
                      m_77 = ATgetArgument(t, 2);
                      n_77 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_77;
                  t = map_1_0(x_7, t);
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
static ATerm x_7 (ATerm t)
{
  ATerm q_79 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_79 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = q_79;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_79;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm w_79 = NULL;
  w_79 = t;
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_82 = NULL,z_29 = NULL,b_30 = NULL,i_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            q_82 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_79);
        z_29 = t;
        t = q_82;
        t = ContextVar_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_30);
        i_23 = t;
        t = SSLsetAnnotations(i_23, z_29);
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, w_79);
  return(t);
}
static ATerm k_11 (ATerm j_143 (ATerm), ATerm l_85, ATerm i_85, ATerm j_85, ATerm v_85, ATerm z_85, ATerm a_86, ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  t = term_z_34;
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_34, l_85);
  t = q_12(k_74, l_85, t);
  k_73 = t;
  t = term_a_35;
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_35, l_85);
  t = q_12(j_74, l_85, t);
  l_73 = t;
  t = new_0_0(t);
  m_73 = t;
  t = i_85;
  t = map_1_0(d_7, t);
  n_73 = t;
  t = j_85;
  t = map_1_0(e_7, t);
  o_73 = t;
  t = v_85;
  t = free_vars_3_0(g_7, h_7, tboundin_3_0, t);
  p_73 = t;
  t = map_1_0(n_7, t);
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_85, i_74);
  t = conc_0_0(t);
  j_73 = t;
  t = p_73;
  t = map_1_0(o_7, t);
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_73, h_74);
  t = conc_0_0(t);
  y_73 = t;
  t = new_0_0(t);
  z_73 = t;
  t = v_85;
  t = dummify_0_0(t);
  b_74 = t;
  {
    ATerm x_41 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_74;
        if((v_85 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, z_73);
        LocalPopChoice(d_42);
      }
    else
      {
        t = x_41;
        t = b_74;
      }
  }
  a_74 = t;
  t = b_74;
  t = free_vars_3_0(p_7, q_7, tboundin_3_0, t);
  t = map_1_0(s_7, t);
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_85, a_86);
  t = free_vars_3_0(t_7, u_7, tboundin_3_0, t);
  t = filter_1_0(y_7, t);
  c_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_74, d_74);
  t = diff_0_0(t);
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_74, (ATerm) ATmakeAppl(sym_Op_2, term_e_42, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, e_74)), (ATerm) ATmakeAppl(sym_Str_1, m_73))));
  t = j_143(t);
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, f_74), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, k_73, i_85, j_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_73), v_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_73), n_73, y_73))), term_i_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_n_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_74), (ATerm) ATmakeAppl(sym_Str_1, l_85))), term_o_42), term_i_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, l_85, i_85, j_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_73), v_85), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_73), n_73, y_73))), term_i_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_n_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, a_74), (ATerm) ATmakeAppl(sym_Str_1, l_85))), term_i_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, l_73, i_85, j_73, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_42, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, e_74)), (ATerm) ATmakeAppl(sym_Str_1, m_73))), z_85, a_86))));
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm j_143 (ATerm), ATerm t)
{
  ATerm x_82 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm p_42 = ATgetArgument(t, 0);
      if(match_cons(p_42, sym_DynRuleId_1))
        {
          ATerm r_42 = ATgetArgument(p_42, 0);
          if(match_cons(r_42, sym_RDecT_3))
            {
              x_82 = ATgetArgument(r_42, 0);
              c_83 = ATgetArgument(r_42, 1);
              d_83 = ATgetArgument(r_42, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm q_42 = ATgetArgument(t, 1);
        if(match_cons(q_42, sym_Rule_3))
          {
            e_83 = ATgetArgument(q_42, 0);
            f_83 = ATgetArgument(q_42, 1);
            g_83 = ATgetArgument(q_42, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_11(j_143, x_82, c_83, d_83, e_83, f_83, g_83, t);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm h_84 = NULL,o_85 = NULL,q_85 = NULL,r_85 = NULL,e_86 = NULL,f_86 = NULL,m_86 = NULL,n_86 = NULL;
  o_85 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      q_85 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
      t = q_85;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          r_85 = ATgetArgument(t, 0);
          h_84 = ATgetArgument(t, 1);
          {
            static ATerm z_7 (ATerm t)
            {
              ATerm f_87 = NULL,g_87 = NULL;
              f_87 = t;
              t = SSL_explode_term(f_87);
              if(match_cons(t, sym__2))
                {
                  ATerm w_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm x_42 = ATgetArgument(t, 1);
                    if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
                      {
                        g_87 = ATgetFirst((ATermList) x_42);
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_87), h_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_86))));
              return(t);
            }
            t = r_85;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((e_86 != NULL) && (e_86 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_86 = ATgetArgument(t, 0);
                f_86 = ATgetArgument(t, 1);
                m_86 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_86, f_86, m_86)), (ATerm) ATmakeAppl(sym_Rule_3, n_86, term_d_43, term_r_20));
            t = SplitDynamicRule_1_0(z_7, t);
          }
        }
      else
        {
          static ATerm c_8 (ATerm t)
          {
            ATerm l_87 = NULL,m_87 = NULL;
            l_87 = t;
            t = SSL_explode_term(l_87);
            if(match_cons(t, sym__2))
              {
                ATerm e_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_43) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_43 = ATgetArgument(t, 1);
                  if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
                    {
                      m_87 = ATgetFirst((ATermList) f_43);
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, m_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_86))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              r_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_85;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((e_86 != NULL) && (e_86 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_86 = ATgetArgument(t, 0);
              f_86 = ATgetArgument(t, 1);
              m_86 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_86, f_86, m_86)), (ATerm) ATmakeAppl(sym_Rule_3, n_86, term_d_43, term_r_20));
          t = SplitDynamicRule_1_0(c_8, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          q_85 = ATgetArgument(t, 0);
          n_86 = ATgetArgument(t, 1);
          t = q_85;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              r_85 = ATgetArgument(t, 0);
              h_84 = ATgetArgument(t, 1);
              {
                static ATerm d_8 (ATerm t)
                {
                  ATerm u_87 = NULL,v_87 = NULL,d_30 = NULL;
                  u_87 = t;
                  t = SSL_explode_term(u_87);
                  if(match_cons(t, sym__2))
                    {
                      ATerm h_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) h_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm p_43 = ATgetArgument(t, 1);
                        if(((ATgetType(p_43) == AT_LIST) && !(ATisEmpty(p_43))))
                          {
                            v_87 = ATgetFirst((ATermList) p_43);
                            {
                              ATerm r_43 = (ATerm) ATgetNext((ATermList) p_43);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(u_87);
                  if(match_cons(t, sym__2))
                    {
                      ATerm s_43 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) s_43) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm t_43 = ATgetArgument(t, 1);
                        if(((ATgetType(t_43) == AT_LIST) && !(ATisEmpty(t_43))))
                          {
                            ATerm u_43 = ATgetFirst((ATermList) t_43);
                            ATerm a_44 = (ATerm) ATgetNext((ATermList) t_43);
                            if(((ATgetType(a_44) == AT_LIST) && !(ATisEmpty(a_44))))
                              {
                                d_30 = ATgetFirst((ATermList) a_44);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_30), v_87), h_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_86))));
                  return(t);
                }
                t = r_85;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((e_86 != NULL) && (e_86 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_86 = ATgetArgument(t, 0);
                    f_86 = ATgetArgument(t, 1);
                    m_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_86, f_86, m_86)), n_86);
                t = SplitDynamicRule_1_0(d_8, t);
              }
            }
          else
            {
              static ATerm e_8 (ATerm t)
              {
                ATerm c_88 = NULL,d_88 = NULL,h_30 = NULL;
                c_88 = t;
                t = SSL_explode_term(c_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm g_44 = ATgetArgument(t, 1);
                      if(((ATgetType(g_44) == AT_LIST) && !(ATisEmpty(g_44))))
                        {
                          d_88 = ATgetFirst((ATermList) g_44);
                          {
                            ATerm h_44 = (ATerm) ATgetNext((ATermList) g_44);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(c_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_44) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm k_44 = ATgetArgument(t, 1);
                      if(((ATgetType(k_44) == AT_LIST) && !(ATisEmpty(k_44))))
                        {
                          ATerm n_44 = ATgetFirst((ATermList) k_44);
                          ATerm p_44 = (ATerm) ATgetNext((ATermList) k_44);
                          if(((ATgetType(p_44) == AT_LIST) && !(ATisEmpty(p_44))))
                            {
                              h_30 = ATgetFirst((ATermList) p_44);
                              {
                                ATerm q_44 = (ATerm) ATgetNext((ATermList) p_44);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_30), d_88), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_86))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  r_85 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_85;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((e_86 != NULL) && (e_86 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_86 = ATgetArgument(t, 0);
                  f_86 = ATgetArgument(t, 1);
                  m_86 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_86, f_86, m_86)), n_86);
              t = SplitDynamicRule_1_0(e_8, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              q_85 = ATgetArgument(t, 0);
              n_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_85;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              r_85 = ATgetArgument(t, 0);
              h_84 = ATgetArgument(t, 1);
              {
                static ATerm j_8 (ATerm t)
                {
                  ATerm n_88 = NULL,p_88 = NULL,r_30 = NULL;
                  n_88 = t;
                  t = SSL_explode_term(n_88);
                  if(match_cons(t, sym__2))
                    {
                      ATerm r_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) r_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm s_44 = ATgetArgument(t, 1);
                        if(((ATgetType(s_44) == AT_LIST) && !(ATisEmpty(s_44))))
                          {
                            p_88 = ATgetFirst((ATermList) s_44);
                            {
                              ATerm u_44 = (ATerm) ATgetNext((ATermList) s_44);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(n_88);
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_44 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) w_44) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm x_44 = ATgetArgument(t, 1);
                        if(((ATgetType(x_44) == AT_LIST) && !(ATisEmpty(x_44))))
                          {
                            ATerm y_44 = ATgetFirst((ATermList) x_44);
                            ATerm z_44 = (ATerm) ATgetNext((ATermList) x_44);
                            if(((ATgetType(z_44) == AT_LIST) && !(ATisEmpty(z_44))))
                              {
                                r_30 = ATgetFirst((ATermList) z_44);
                                {
                                  ATerm a_45 = (ATerm) ATgetNext((ATermList) z_44);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_45, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_30), p_88), h_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_86))));
                  return(t);
                }
                t = r_85;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((e_86 != NULL) && (e_86 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_86 = ATgetArgument(t, 0);
                    f_86 = ATgetArgument(t, 1);
                    m_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_86, f_86, m_86)), n_86);
                t = SplitDynamicRule_1_0(j_8, t);
              }
            }
          else
            {
              static ATerm n_8 (ATerm t)
              {
                ATerm u_88 = NULL,w_88 = NULL,w_30 = NULL;
                u_88 = t;
                t = SSL_explode_term(u_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_45) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm h_45 = ATgetArgument(t, 1);
                      if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
                        {
                          w_88 = ATgetFirst((ATermList) h_45);
                          {
                            ATerm i_45 = (ATerm) ATgetNext((ATermList) h_45);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(u_88);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_45 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_45) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm l_45 = ATgetArgument(t, 1);
                      if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
                        {
                          ATerm o_45 = ATgetFirst((ATermList) l_45);
                          ATerm p_45 = (ATerm) ATgetNext((ATermList) l_45);
                          if(((ATgetType(p_45) == AT_LIST) && !(ATisEmpty(p_45))))
                            {
                              w_30 = ATgetFirst((ATermList) p_45);
                              {
                                ATerm q_45 = (ATerm) ATgetNext((ATermList) p_45);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_45, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_30), w_88), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_86))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  r_85 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_85;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((e_86 != NULL) && (e_86 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_86 = ATgetArgument(t, 0);
                  {
                    ATerm s_45 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm t_45 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = o_85;
              t = SplitDynamicRule_1_0(n_8, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_111 (ATerm), ATerm t)
{
  static ATerm z_88 (ATerm t)
  {
    ATerm v_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_111(t);
        LocalPopChoice(x_45);
      }
    else
      {
        t = v_45;
        t = SRTS_one(z_88, t);
      }
    return(t);
  }
  t = z_88(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm g_143 (ATerm), ATerm t)
{
  static ATerm h_89 (ATerm t)
  {
    static ATerm p_8 (ATerm t)
    {
      ATerm a_46 = t;
      int d_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_143(t);
          LocalPopChoice(d_46);
        }
      else
        {
          t = a_46;
          {
            ATerm c_89 = NULL,d_89 = NULL,g_89 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                c_89 = ATgetArgument(t, 0);
                d_89 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, c_89, d_89);
            {
              static ATerm t_8 (ATerm t)
              {
                t = c_89;
                t = DeclareContextVars_0_0(t);
                t = d_89;
                t = h_89(t);
                if(((g_89 != NULL) && (g_89 != t)))
                  _fail(t);
                else
                  g_89 = t;
                return(t);
              }
              t = scope_2_0(r_8, t_8, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, c_89, not_null(g_89));
          }
        }
      return(t);
    }
    t = oncetd_1_0(p_8, t);
    return(t);
  }
  t = h_89(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm k_89 = NULL,m_89 = NULL,n_89 = NULL,q_89 = NULL;
  q_89 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      n_89 = ATgetArgument(t, 0);
      {
        ATerm e_46 = t;
        int f_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_89;
            k_89 = t;
            t = q_89;
            LocalPopChoice(f_46);
          }
        else
          {
            t = e_46;
            t = q_89;
            k_89 = t;
            t = q_89;
          }
      }
    }
  else
    {
      t = q_89;
      k_89 = t;
      t = q_89;
    }
  t = term_h_46;
  m_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_89, term_h_46);
  t = g_12(w_8, k_89, m_89, t);
  t = q_89;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm r_89 = NULL,t_89 = NULL,u_89 = NULL,x_89 = NULL;
  x_89 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      u_89 = ATgetArgument(t, 0);
      {
        ATerm j_46 = t;
        int k_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_89;
            r_89 = t;
            t = x_89;
            LocalPopChoice(k_46);
          }
        else
          {
            t = j_46;
            t = x_89;
            r_89 = t;
            t = x_89;
          }
      }
    }
  else
    {
      t = x_89;
      r_89 = t;
      t = x_89;
    }
  t = term_m_46;
  t_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_89, term_m_46);
  t = g_12(c_9, r_89, t_89, t);
  t = x_89;
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
  int p_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(v_8, t);
      LocalPopChoice(p_46);
    }
  else
    {
      t = o_46;
      t = map_1_0(b_9, t);
    }
  return(t);
}
static ATerm d_9 (ATerm t)
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
static ATerm f_9 (ATerm t)
{
  ATerm q_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_46);
    }
  else
    {
      t = q_46;
      {
        ATerm s_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_46);
          }
        else
          {
            t = s_46;
            {
              ATerm v_46 = t;
              int w_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_31 = ATgetArgument(t, 0);
                      q_31 = ATgetArgument(t, 1);
                      r_31 = ATgetArgument(t, 2);
                      s_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_31;
                  t = map_1_0(i_9, t);
                  LocalPopChoice(w_46);
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
static ATerm i_9 (ATerm t)
{
  ATerm h_32 = NULL;
  ATerm x_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_32 = ATgetArgument(t, 0);
          {
            ATerm b_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_46);
      t = h_32;
    }
  else
    {
      t = x_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_32;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
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
            ATerm c_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_32;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
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
            ATerm e_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_33;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
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
static ATerm q_9 (ATerm t)
{
  ATerm k_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_34);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_47);
    }
  else
    {
      t = f_47;
      {
        ATerm j_47 = t;
        int k_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_47);
          }
        else
          {
            t = j_47;
            {
              ATerm l_47 = t;
              int o_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,r_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_34 = ATgetArgument(t, 0);
                      o_34 = ATgetArgument(t, 1);
                      p_34 = ATgetArgument(t, 2);
                      r_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_34;
                  t = map_1_0(s_9, t);
                  LocalPopChoice(o_47);
                }
              else
                {
                  t = l_47;
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
  ATerm i_35 = NULL;
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_35 = ATgetArgument(t, 0);
          {
            ATerm r_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_47);
      t = i_35;
    }
  else
    {
      t = p_47;
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
static ATerm t_9 (ATerm t)
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
            ATerm s_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_36;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm n_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_36 = ATgetArgument(t, 0);
      t = n_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_36 = ATgetArgument(t, 0);
          {
            ATerm t_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_36;
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
  ATerm n_94 = NULL;
  n_94 = t;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_31 = NULL,g_31 = NULL;
        t = n_94;
        t = free_vars_3_0(d_9, f_9, tboundin_3_0, t);
        d_31 = t;
        t = n_94;
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_32 = NULL;
              ATerm c_48 = t;
              int d_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm e_48 = ATgetArgument(t, 0);
                      ATerm i_48 = ATgetArgument(t, 1);
                      p_32 = ATgetArgument(t, 2);
                      {
                        ATerm j_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_48);
                  t = p_32;
                  t = map_1_0(k_9, t);
                }
              else
                {
                  t = c_48;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm m_48 = ATgetArgument(t, 0);
                      ATerm n_48 = ATgetArgument(t, 1);
                      p_32 = ATgetArgument(t, 2);
                      {
                        ATerm o_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = p_32;
                  t = map_1_0(n_9, t);
                }
              LocalPopChoice(y_47);
            }
          else
            {
              t = x_47;
              t = (ATerm) ATempty;
            }
        }
        g_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_31, g_31);
        t = u_11(p_9, d_31, g_31, t);
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        {
          ATerm h_34 = NULL,i_34 = NULL;
          t = n_94;
          t = free_vars_3_0(q_9, r_9, tboundin_3_0, t);
          h_34 = t;
          t = n_94;
          {
            ATerm q_48 = t;
            int r_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_35 = NULL;
                ATerm s_48 = t;
                int t_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm u_48 = ATgetArgument(t, 0);
                        ATerm v_48 = ATgetArgument(t, 1);
                        r_35 = ATgetArgument(t, 2);
                        {
                          ATerm x_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_48);
                    t = r_35;
                    t = map_1_0(t_9, t);
                  }
                else
                  {
                    t = s_48;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm y_48 = ATgetArgument(t, 0);
                        ATerm a_49 = ATgetArgument(t, 1);
                        r_35 = ATgetArgument(t, 2);
                        {
                          ATerm c_49 = ATgetArgument(t, 3);
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
          i_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
          t = u_11(v_9, h_34, i_34, t);
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
static ATerm d_10 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_95 = ATgetFirst((ATermList) t);
      i_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_95, i_95);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_49 = ATgetArgument(t, 0);
      if(match_cons(f_49, sym__2))
        {
          j_95 = ATgetArgument(f_49, 0);
          k_95 = ATgetArgument(f_49, 1);
        }
      else
        _fail(t);
      {
        ATerm h_49 = ATgetArgument(t, 1);
        if(match_cons(h_49, sym__2))
          {
            l_95 = ATgetArgument(h_49, 0);
            m_95 = ATgetArgument(h_49, 1);
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
static ATerm n_11 (ATerm u_83, ATerm t_83, ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  static ATerm x_9 (ATerm t)
  {
    t = u_83;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = u_83;
    {
      static ATerm y_9 (ATerm t)
      {
        ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,g_95 = NULL,n_23 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            z_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_94;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(z_9, d_10, t_10, _id, t);
        g_95 = t;
        if(match_cons(t, sym__2))
          {
            b_95 = ATgetArgument(t, 0);
            c_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_95);
        a_95 = t;
        t = c_95;
        t = concat_0_0(t);
        d_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_95, d_95);
        n_23 = t;
        t = SSLsetAnnotations(n_23, a_95);
        if(match_cons(t, sym__2))
          {
            if(((u_94 != NULL) && (u_94 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              u_94 = ATgetArgument(t, 0);
            if(((t_94 != NULL) && (t_94 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              t_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, u_94);
        return(t);
      }
      t = split_dynamic_rule_1_0(y_9, t);
    }
    if(((v_94 != NULL) && (v_94 != t)))
      _fail(t);
    else
      v_94 = t;
    return(t);
  }
  t = scope_2_0(w_9, x_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_94)), not_null(v_94)), t_83);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  static ATerm q_95 (ATerm t)
  {
    ATerm j_49 = t;
    int k_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109(t);
        t = q_95(t);
        LocalPopChoice(k_49);
      }
    else
      {
        t = j_49;
        t = n_109(t);
      }
    return(t);
  }
  t = q_95(t);
  return(t);
}
ATerm listtd_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  static ATerm i_96 (ATerm t)
  {
    ATerm d_96 = NULL,e_96 = NULL,h_96 = NULL;
    t = i_118(t);
    d_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_96;
      }
    else
      {
        ATerm y_36 = NULL,b_37 = NULL,t_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_96 = ATgetFirst((ATermList) t);
            h_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_96);
        y_36 = t;
        t = h_96;
        t = i_96(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(b_37), e_96);
        t_23 = t;
        t = SSLsetAnnotations(t_23, y_36);
      }
    return(t);
  }
  t = i_96(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,w_96 = NULL,x_96 = NULL,b_97 = NULL,c_97 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      b_97 = ATgetArgument(t, 0);
      c_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_96 = ATgetFirst((ATermList) t);
      x_96 = (ATerm) ATgetNext((ATermList) t);
      t = q_96;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          w_96 = ATgetArgument(t, 0);
          p_96 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, w_96, p_96), (ATerm) ATmakeAppl(sym_DynRuleScope_2, x_96, c_97))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, w_96)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              w_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, x_96, c_97)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, w_96)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_97;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm v_97 = NULL,x_97 = NULL,a_98 = NULL;
  t = term_d_37;
  x_97 = t;
  t = (ATerm) ATinsert(ATempty, term_n_49);
  a_98 = t;
  t = SSL_printnl(x_97, a_98);
  t = term_f_37;
  v_97 = t;
  t = SSL_exit(v_97);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm c_98 = NULL,g_98 = NULL,h_98 = NULL;
  t = term_d_37;
  g_98 = t;
  t = (ATerm) ATinsert(ATempty, term_p_49);
  h_98 = t;
  t = SSL_printnl(g_98, h_98);
  t = term_f_37;
  c_98 = t;
  t = SSL_exit(c_98);
  return(t);
}
static ATerm c_101 (ATerm t_99, ATerm u_99, ATerm v_99, ATerm y_99, ATerm z_99, ATerm a_100, ATerm b_100, ATerm t)
{
  t = b_100;
  {
    ATerm t_49 = t;
    if((PushChoice() == 0))
      {
        t = z_99;
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
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, t_99, u_99, v_99)), (ATerm) ATmakeAppl(sym_Rule_3, y_99, z_99, a_100));
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm m_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,t_100 = NULL,u_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL;
  q_100 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      r_100 = ATgetArgument(t, 0);
      t_100 = ATgetArgument(t, 1);
      u_100 = ATgetArgument(t, 2);
      x_100 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = x_100;
  if(match_cons(t, sym_Rule_3))
    {
      y_100 = ATgetArgument(t, 0);
      z_100 = ATgetArgument(t, 1);
      a_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_100;
  if(match_cons(t, sym_Op_2))
    {
      m_100 = ATgetArgument(t, 0);
      p_100 = ATgetArgument(t, 1);
      t = p_100;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_100;
          if(match_string(t, "Undefined"))
            {
              ATerm x_49 = t;
              int y_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_100;
                  {
                    ATerm z_49 = t;
                    int a_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_101;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(a_50);
                      }
                    else
                      {
                        t = z_49;
                        {
                          ATerm u_38 = NULL,v_38 = NULL;
                          t = term_d_37;
                          u_38 = t;
                          t = (ATerm) ATinsert(ATempty, term_b_50);
                          v_38 = t;
                          t = SSL_printnl(u_38, v_38);
                          t = q_100;
                          t = debug_1_0(g_11, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_100, t_100, u_100)), y_100);
                  LocalPopChoice(y_49);
                }
              else
                {
                  t = x_49;
                  t = c_101(r_100, t_100, u_100, y_100, z_100, a_101, q_100, t);
                }
            }
          else
            {
              t = c_101(r_100, t_100, u_100, y_100, z_100, a_101, q_100, t);
            }
        }
      else
        {
          t = m_100;
          t = c_101(r_100, t_100, u_100, y_100, z_100, a_101, q_100, t);
        }
    }
  else
    {
      t = c_101(r_100, t_100, u_100, y_100, z_100, a_101, q_100, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL;
  d_101 = t;
  t = n_116(t);
  e_101 = t;
  t = term_d_37;
  f_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_101), e_101);
  g_101 = t;
  t = SSL_printnl(f_101, g_101);
  t = d_101;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm h_101 = NULL,j_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
  o_101 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm c_50 = ATgetArgument(t, 0);
      if(match_cons(c_50, sym_DynRuleId_1))
        {
          ATerm e_50 = ATgetArgument(c_50, 0);
          if(match_cons(e_50, sym_RDecT_3))
            {
              h_101 = ATgetArgument(e_50, 0);
              j_101 = ATgetArgument(e_50, 1);
              l_101 = ATgetArgument(e_50, 2);
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
            m_101 = ATgetArgument(d_50, 0);
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
            n_101 = ATgetArgument(d_50, 2);
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
        t = n_101;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(j_50);
      }
    else
      {
        t = i_50;
        {
          ATerm p_101 = NULL,s_101 = NULL;
          t = term_d_37;
          p_101 = t;
          t = (ATerm) ATinsert(ATempty, term_b_50);
          s_101 = t;
          t = SSL_printnl(p_101, s_101);
          t = o_101;
          t = debug_1_0(l_11, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, j_101, l_101)), m_101);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_101 = NULL;
      v_101 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm m_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_101;
      LocalPopChoice(l_50);
      {
        ATerm y_101 = NULL,z_101 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            y_101 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_101;
        t = map_1_0(q_11, t);
        z_101 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, z_101);
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
            ATerm c_102 = NULL;
            c_102 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm p_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_102;
            LocalPopChoice(o_50);
            {
              ATerm d_102 = NULL,e_102 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  d_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_102;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              e_102 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, e_102);
            }
          }
        else
          {
            t = n_50;
            {
              ATerm q_50 = t;
              int r_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_102 = NULL;
                  f_102 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm t_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_102;
                  LocalPopChoice(r_50);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = q_50;
                  {
                    ATerm u_50 = t;
                    int v_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_102 = NULL;
                        g_102 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm w_50 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = g_102;
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
static ATerm t_11 (ATerm t)
{
  t = Cons_2_0(x_11, z_11, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm e_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,v_23 = NULL;
  j_103 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_103);
  e_103 = t;
  t = h_103;
  t = topdown_1_0(a_12, t);
  t = listtd_1_0(c_12, t);
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_103);
  v_23 = t;
  t = SSLsetAnnotations(v_23, e_103);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm a_12 (ATerm t)
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
            ATerm l_103 = NULL,m_103 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                l_103 = ATgetArgument(t, 0);
                m_103 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_51, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, m_103), (ATerm) ATmakeAppl(sym_Str_1, l_103)));
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
static ATerm c_12 (ATerm t)
{
  t = repeat_2_0(d_12, _id, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm u_103 = NULL,w_103 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_103 = ATgetFirst((ATermList) t);
      w_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_11(u_103, w_103, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm m_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,w_102 = NULL,x_23 = NULL,w_23 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  w_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_102);
  m_102 = t;
  t = o_102;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_102 = ATgetFirst((ATermList) t);
      r_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_102);
  p_102 = t;
  t = r_102;
  t = Cons_2_0(_id, t_11, t);
  s_102 = t;
  t = (ATerm) ATinsert(CheckATermList(s_102), q_102);
  w_23 = t;
  t = SSLsetAnnotations(w_23, p_102);
  t_102 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_102);
  x_23 = t;
  t = SSLsetAnnotations(x_23, m_102);
  return(t);
}
ATerm tboundin_3_0 (ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm t)
{
  ATerm b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL;
  e_109 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_109 = ATgetArgument(t, 0);
      b_109 = ATgetArgument(t, 1);
      {
        ATerm t_39 = NULL,w_39 = NULL,z_39 = NULL,b_24 = NULL;
        t = SSLgetAnnotations(e_109);
        t_39 = t;
        t = f_109;
        t = t_142(t);
        w_39 = t;
        t = b_109;
        t = r_142(t);
        z_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_39, z_39);
        b_24 = t;
        t = SSLsetAnnotations(b_24, t_39);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          f_109 = ATgetArgument(t, 0);
          b_109 = ATgetArgument(t, 1);
          c_109 = ATgetArgument(t, 2);
          {
            ATerm o_40 = NULL,c_41 = NULL,d_41 = NULL,g_41 = NULL,c_24 = NULL;
            t = SSLgetAnnotations(e_109);
            o_40 = t;
            t = f_109;
            t = t_142(t);
            c_41 = t;
            t = b_109;
            t = t_142(t);
            d_41 = t;
            t = c_109;
            t = t_142(t);
            g_41 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, c_41, d_41, g_41);
            c_24 = t;
            t = SSLsetAnnotations(c_24, o_40);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_109 = ATgetArgument(t, 0);
              b_109 = ATgetArgument(t, 1);
              c_109 = ATgetArgument(t, 2);
              d_109 = ATgetArgument(t, 3);
              {
                ATerm y_41 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,g_24 = NULL;
                t = SSLgetAnnotations(e_109);
                y_41 = t;
                t = f_109;
                t = t_142(t);
                s_42 = t;
                t = b_109;
                t = t_142(t);
                t_42 = t;
                t = c_109;
                t = t_142(t);
                u_42 = t;
                t = d_109;
                t = r_142(t);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_42, t_42, u_42, v_42);
                g_24 = t;
                t = SSLsetAnnotations(g_24, y_41);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_109 = ATgetArgument(t, 0);
                  b_109 = ATgetArgument(t, 1);
                  c_109 = ATgetArgument(t, 2);
                  d_109 = ATgetArgument(t, 3);
                  {
                    ATerm q_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,m_24 = NULL;
                    t = SSLgetAnnotations(e_109);
                    q_43 = t;
                    t = f_109;
                    t = t_142(t);
                    w_43 = t;
                    t = b_109;
                    t = t_142(t);
                    x_43 = t;
                    t = c_109;
                    t = t_142(t);
                    y_43 = t;
                    t = d_109;
                    t = r_142(t);
                    z_43 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_43, x_43, y_43, z_43);
                    m_24 = t;
                    t = SSLsetAnnotations(m_24, q_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      f_109 = ATgetArgument(t, 0);
                      {
                        ATerm j_44 = NULL,l_44 = NULL,b_25 = NULL;
                        t = SSLgetAnnotations(e_109);
                        j_44 = t;
                        t = f_109;
                        t = r_142(t);
                        l_44 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, l_44);
                        b_25 = t;
                        t = SSLsetAnnotations(b_25, j_44);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          f_109 = ATgetArgument(t, 0);
                          {
                            ATerm t_44 = NULL,v_44 = NULL,g_25 = NULL;
                            t = SSLgetAnnotations(e_109);
                            t_44 = t;
                            t = f_109;
                            t = r_142(t);
                            v_44 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, v_44);
                            g_25 = t;
                            t = SSLsetAnnotations(g_25, t_44);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              f_109 = ATgetArgument(t, 0);
                              {
                                ATerm c_45 = NULL,e_45 = NULL,h_25 = NULL;
                                t = SSLgetAnnotations(e_109);
                                c_45 = t;
                                t = f_109;
                                t = r_142(t);
                                e_45 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_45);
                                h_25 = t;
                                t = SSLsetAnnotations(h_25, c_45);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  f_109 = ATgetArgument(t, 0);
                                  {
                                    ATerm k_45 = NULL,n_45 = NULL,i_25 = NULL;
                                    t = SSLgetAnnotations(e_109);
                                    k_45 = t;
                                    t = f_109;
                                    t = r_142(t);
                                    n_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, n_45);
                                    i_25 = t;
                                    t = SSLsetAnnotations(i_25, k_45);
                                  }
                                }
                              else
                                {
                                  ATerm u_45 = NULL,y_45 = NULL,j_25 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      f_109 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(e_109);
                                  u_45 = t;
                                  t = f_109;
                                  t = r_142(t);
                                  y_45 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, y_45);
                                  j_25 = t;
                                  t = SSLsetAnnotations(j_25, u_45);
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
static ATerm j_12 (ATerm t)
{
  ATerm l_110 = NULL;
  ATerm f_51 = t;
  int g_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_110 = ATgetArgument(t, 0);
          {
            ATerm h_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_51);
      t = l_110;
    }
  else
    {
      t = f_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_110;
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm t_110 = NULL;
  ATerm i_51 = t;
  int j_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_110 = ATgetArgument(t, 0);
          {
            ATerm k_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_51);
      t = t_110;
    }
  else
    {
      t = i_51;
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
ATerm Bind8_0_0 (ATerm t)
{
  ATerm a_110 = NULL;
  ATerm l_51 = t;
  int m_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm n_51 = ATgetArgument(t, 0);
          ATerm o_51 = ATgetArgument(t, 1);
          a_110 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(m_51);
      t = a_110;
      t = map_1_0(j_12, t);
    }
  else
    {
      t = l_51;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm p_51 = ATgetArgument(t, 0);
          ATerm q_51 = ATgetArgument(t, 1);
          a_110 = ATgetArgument(t, 2);
          {
            ATerm r_51 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_110;
      t = map_1_0(u_12, t);
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm k_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_111);
  return(t);
}
static ATerm c_14 (ATerm t)
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
                  ATerm m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_111 = ATgetArgument(t, 0);
                      n_111 = ATgetArgument(t, 1);
                      o_111 = ATgetArgument(t, 2);
                      p_111 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_111;
                  t = map_1_0(h_14, t);
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
static ATerm h_14 (ATerm t)
{
  ATerm y_111 = NULL;
  ATerm y_51 = t;
  int z_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_111 = ATgetArgument(t, 0);
          {
            ATerm b_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_51);
      t = y_111;
    }
  else
    {
      t = y_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_111;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm c_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_112);
  return(t);
}
static ATerm m_14 (ATerm t)
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
                  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_112 = ATgetArgument(t, 0);
                      h_112 = ATgetArgument(t, 1);
                      i_112 = ATgetArgument(t, 2);
                      j_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_112;
                  t = map_1_0(n_14, t);
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
static ATerm n_14 (ATerm t)
{
  ATerm q_112 = NULL;
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_112 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_52);
      t = q_112;
    }
  else
    {
      t = i_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_112;
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm u_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_112);
  return(t);
}
static ATerm p_14 (ATerm t)
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
                  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_112 = ATgetArgument(t, 0);
                      x_112 = ATgetArgument(t, 1);
                      y_112 = ATgetArgument(t, 2);
                      z_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_112;
                  t = map_1_0(q_14, t);
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
static ATerm q_14 (ATerm t)
{
  ATerm g_113 = NULL;
  ATerm r_52 = t;
  int s_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_113 = ATgetArgument(t, 0);
          {
            ATerm t_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_52);
      t = g_113;
    }
  else
    {
      t = r_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_113;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm k_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_113);
  return(t);
}
static ATerm w_14 (ATerm t)
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
              int z_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_113 = ATgetArgument(t, 0);
                      n_113 = ATgetArgument(t, 1);
                      o_113 = ATgetArgument(t, 2);
                      p_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_113;
                  t = map_1_0(x_14, t);
                  LocalPopChoice(z_52);
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
static ATerm x_14 (ATerm t)
{
  ATerm w_113 = NULL;
  ATerm b_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_113 = ATgetArgument(t, 0);
          {
            ATerm d_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_53);
      t = w_113;
    }
  else
    {
      t = b_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_113;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm a_114 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_114);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm e_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_53);
    }
  else
    {
      t = e_53;
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
                  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL,f_114 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_114 = ATgetArgument(t, 0);
                      d_114 = ATgetArgument(t, 1);
                      e_114 = ATgetArgument(t, 2);
                      f_114 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_114;
                  t = map_1_0(b_15, t);
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
static ATerm b_15 (ATerm t)
{
  ATerm m_114 = NULL;
  ATerm l_53 = t;
  int m_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_114 = ATgetArgument(t, 0);
          {
            ATerm n_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_53);
      t = m_114;
    }
  else
    {
      t = l_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_114;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm i_111 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      i_111 = ATgetArgument(t, 0);
      t = i_111;
      t = free_vars_3_0(i_13, c_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          i_111 = ATgetArgument(t, 0);
          t = i_111;
          t = free_vars_3_0(j_14, m_14, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              i_111 = ATgetArgument(t, 0);
              t = i_111;
              t = free_vars_3_0(o_14, p_14, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_111 = ATgetArgument(t, 0);
                  t = i_111;
                  t = free_vars_3_0(t_14, w_14, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      i_111 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_111;
                  t = free_vars_3_0(z_14, a_15, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm a_115 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_115);
  return(t);
}
static ATerm i_15 (ATerm t)
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
              ATerm s_53 = t;
              int v_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_115 = ATgetArgument(t, 0);
                      d_115 = ATgetArgument(t, 1);
                      e_115 = ATgetArgument(t, 2);
                      f_115 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_115;
                  t = map_1_0(j_15, t);
                  LocalPopChoice(v_53);
                }
              else
                {
                  t = s_53;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm m_115 = NULL;
  ATerm x_53 = t;
  int c_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_115 = ATgetArgument(t, 0);
          {
            ATerm e_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_54);
      t = m_115;
    }
  else
    {
      t = x_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_115;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_114 = NULL,x_114 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_114 = ATgetArgument(t, 0);
      t = x_114;
      if(match_cons(t, sym_Rule_3))
        {
          t_114 = ATgetArgument(t, 0);
          {
            ATerm h_54 = ATgetArgument(t, 1);
          }
          {
            ATerm j_54 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_114;
      t = free_vars_3_0(f_15, i_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_114 = ATgetArgument(t, 0);
          {
            ATerm k_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_114;
    }
  return(t);
}
static ATerm u_11 (ATerm j_121 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  static ATerm f_116 (ATerm t)
  {
    ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
    a_116 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_116 = ATgetFirst((ATermList) t);
            c_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_116;
              {
                static ATerm k_15 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = v_11(j_121, k_15, b_116, c_116, t);
              }
              t = f_116(t);
              LocalPopChoice(m_54);
            }
          else
            {
              t = l_54;
              {
                ATerm n_46 = NULL,a_47 = NULL,b_26 = NULL;
                t = SSLgetAnnotations(a_116);
                n_46 = t;
                t = c_116;
                t = f_116(t);
                a_47 = t;
                t = (ATerm) ATinsert(CheckATermList(a_47), b_116);
                b_26 = t;
                t = SSLsetAnnotations(b_26, n_46);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = f_116(t);
  return(t);
}
static ATerm v_11 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  t = n_121(t);
  {
    static ATerm l_15 (ATerm t)
    {
      ATerm j_116 = NULL;
      j_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, j_116);
      t = m_121(t);
      return(t);
    }
    t = fetch_1_0(l_15, t);
  }
  t = p_30;
  return(t);
}
static ATerm w_11 (ATerm e_121 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm e_117 (ATerm t)
  {
    ATerm x_116 = NULL,a_117 = NULL,b_117 = NULL;
    x_116 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_116;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_117 = ATgetFirst((ATermList) t);
            b_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_54 = t;
          int o_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_116;
              {
                static ATerm m_15 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = v_11(e_121, m_15, a_117, b_117, t);
              }
              t = e_117(t);
              LocalPopChoice(o_54);
            }
          else
            {
              t = n_54;
              {
                ATerm m_47 = NULL,b_48 = NULL,d_26 = NULL;
                t = SSLgetAnnotations(x_116);
                m_47 = t;
                t = b_117;
                t = e_117(t);
                b_48 = t;
                t = (ATerm) ATinsert(CheckATermList(b_48), a_117);
                d_26 = t;
                t = SSLsetAnnotations(d_26, m_47);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = e_117(t);
  return(t);
}
ATerm genzip_4_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm e_119 (ATerm), ATerm f_119 (ATerm), ATerm t)
{
  static ATerm o_117 (ATerm t)
  {
    ATerm p_54 = t;
    int u_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_119(t);
        LocalPopChoice(u_54);
      }
    else
      {
        t = p_54;
        {
          ATerm g_117 = NULL,h_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,m_26 = NULL;
          t = d_119(t);
          n_117 = t;
          if(match_cons(t, sym__2))
            {
              h_117 = ATgetArgument(t, 0);
              k_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_117);
          g_117 = t;
          t = h_117;
          t = f_119(t);
          l_117 = t;
          t = k_117;
          t = o_117(t);
          m_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_117, m_117);
          m_26 = t;
          t = SSLsetAnnotations(m_26, g_117);
          t = e_119(t);
        }
      }
    return(t);
  }
  t = o_117(t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_54 = ATgetArgument(t, 0);
      if(((ATgetType(v_54) != AT_LIST) || !(ATisEmpty(v_54))))
        _fail(t);
      {
        ATerm x_54 = ATgetArgument(t, 1);
        if(((ATgetType(x_54) != AT_LIST) || !(ATisEmpty(x_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL,z_117 = NULL,a_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_54 = ATgetArgument(t, 0);
      if(((ATgetType(z_54) == AT_LIST) && !(ATisEmpty(z_54))))
        {
          x_117 = ATgetFirst((ATermList) z_54);
          y_117 = (ATerm) ATgetNext((ATermList) z_54);
        }
      else
        _fail(t);
      {
        ATerm c_55 = ATgetArgument(t, 1);
        if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
          {
            z_117 = ATgetFirst((ATermList) c_55);
            a_118 = (ATerm) ATgetNext((ATermList) c_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_117, z_117), (ATerm) ATmakeAppl(sym__2, y_117, a_118));
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL;
  if(match_cons(t, sym__2))
    {
      b_118 = ATgetArgument(t, 0);
      c_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_118), b_118);
  return(t);
}
static ATerm b_12 (ATerm i_673, ATerm n_673, ATerm v_66, ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL;
  t = SSL_explode_term(n_673);
  if(match_cons(t, sym__2))
    {
      s_117 = ATgetArgument(t, 0);
      u_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_673);
  if(match_cons(t, sym__2))
    {
      if((s_117 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_117, u_117);
  t = genzip_4_0(n_15, o_15, p_15, _id, t);
  v_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_117, v_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t)
{
  static ATerm e_118 (ATerm t)
  {
    ATerm e_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_110(t);
        LocalPopChoice(f_55);
      }
    else
      {
        t = e_55;
        t = e_110(t);
        t = e_118(t);
      }
    return(t);
  }
  t = e_118(t);
  return(t);
}
ATerm for_3_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t)
{
  t = g_110(t);
  t = while_not_2_0(h_110, i_110, t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm n_118 = NULL;
  n_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_118);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,p_26 = NULL;
  r_118 = t;
  if(match_cons(t, sym__2))
    {
      p_118 = ATgetArgument(t, 0);
      q_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_118);
  o_118 = t;
  t = q_118;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_118, q_118);
  p_26 = t;
  t = SSLsetAnnotations(p_26, o_118);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL;
  p_119 = t;
  if(match_cons(t, sym__2))
    {
      q_119 = ATgetArgument(t, 0);
      r_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_119 = ATgetFirst((ATermList) t);
      t_119 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_120(q_119, r_119, p_119, t);
            LocalPopChoice(h_55);
          }
        else
          {
            t = g_55;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_119), s_119), t_119);
          }
      }
    }
  else
    {
      t = d_120(q_119, r_119, p_119, t);
    }
  return(t);
}
static ATerm d_120 (ATerm s_118, ATerm t_118, ATerm u_118, ATerm t)
{
  ATerm v_118 = NULL,y_118 = NULL,q_26 = NULL,b_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL;
  t = SSLgetAnnotations(u_118);
  v_118 = t;
  t = t_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_119 = ATgetFirst((ATermList) t);
      j_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_119;
  if(match_cons(t, sym__2))
    {
      h_119 = ATgetArgument(t, 0);
      i_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_119;
        if((h_119 != t))
          {
            _fail(t);
          }
        t = j_119;
        LocalPopChoice(m_55);
      }
    else
      {
        t = l_55;
        t = t_118;
        t = b_12(h_119, i_119, j_119, t);
      }
  }
  y_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_118, y_118);
  q_26 = t;
  t = SSLsetAnnotations(q_26, v_118);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm c_120 = NULL;
  if(match_cons(t, sym__2))
    {
      c_120 = ATgetArgument(t, 0);
      if((c_120 != ATgetArgument(t, 1)))
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
      t = for_3_0(q_15, r_15, u_15, t);
      LocalPopChoice(o_55);
    }
  else
    {
      t = n_55;
      {
        ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL;
        x_119 = t;
        if(match_cons(t, sym__2))
          {
            y_119 = ATgetArgument(t, 0);
            z_119 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_119;
        t = w_11(y_15, y_119, z_119, t);
      }
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm b_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      b_49 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(e_16, b_49, d_49, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm e_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      if((e_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(h_16, q_49, r_49, t);
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
  static ATerm r_120 (ATerm t)
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
          ATerm t_55 = t;
          int u_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_120 = NULL,g_120 = NULL,k_48 = NULL,p_48 = NULL;
              f_120 = t;
              t = f_140(t);
              g_120 = t;
              t = f_120;
              {
                static ATerm a_16 (ATerm t)
                {
                  ATerm i_120 = NULL;
                  t = r_120(t);
                  i_120 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_120, g_120);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_140(a_16, r_120, b_16, t);
              }
              p_48 = t;
              t = SSL_explode_term(p_48);
              if(match_cons(t, sym__2))
                {
                  ATerm w_55 = ATgetArgument(t, 0);
                  k_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_48;
              t = foldr_3_0(c_16, d_16, _id, t);
              LocalPopChoice(u_55);
            }
          else
            {
              t = t_55;
              {
                ATerm g_49 = NULL,i_49 = NULL;
                i_49 = t;
                t = SSL_explode_term(i_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_55 = ATgetArgument(t, 0);
                    g_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_49;
                t = foldr_3_0(f_16, g_16, r_120, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_120(t);
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
  ATerm s_120 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
  t = y_12(p_60, q_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_120 = ATgetFirst((ATermList) t);
      {
        ATerm z_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_120;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm i_121 = NULL,l_121 = NULL;
  i_121 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL;
        t = term_c_56;
        s_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_56, i_121);
        t = f_12(s_50, i_121, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_56) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, l_121, (ATerm) ATempty);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        {
          ATerm a_52 = NULL;
          t = term_c_56;
          a_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_56, i_121);
          t = f_12(a_52, i_121, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_56) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, l_121, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  static ATerm q_121 (ATerm t)
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        t = SRTS_all(q_121, t);
      }
    return(t);
  }
  t = q_121(t);
  return(t);
}
static ATerm g_12 (ATerm h_130 (ATerm), ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL;
  u_121 = t;
  t = h_130(t);
  r_121 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_121, o_44, m_44);
  t = z_12(r_121, o_44, m_44, t);
  {
    ATerm k_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_121 = NULL;
        t = term_n_56;
        z_121 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_121, term_n_56);
        t = y_12(r_121, z_121, t);
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
      s_121 = ATgetFirst((ATermList) t);
      t_121 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_121, term_n_56, (ATerm) ATinsert(CheckATermList(t_121), (ATerm) ATinsert(CheckATermList(s_121), o_44)));
  t = lookup_table_0_1(r_121, t);
  y_121 = t;
  t = term_n_56;
  v_121 = t;
  t = (ATerm) ATinsert(CheckATermList(t_121), (ATerm) ATinsert(CheckATermList(s_121), o_44));
  w_121 = t;
  t = y_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(v_121, w_121, x_121, t);
  t = u_121;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_c_56;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_c_56;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm d_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      f_122 = ATgetArgument(t, 0);
      g_122 = ATgetArgument(t, 1);
      d_122 = ATgetArgument(t, 2);
      {
        ATerm k_122 = NULL,l_122 = NULL;
        t = g_122;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, f_122);
        k_122 = t;
        t = term_s_56;
        l_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_122), term_s_56);
        t = g_12(j_16, k_122, l_122, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, f_122, (ATerm)ATempty, d_122);
      }
    }
  else
    {
      ATerm o_122 = NULL,p_122 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          f_122 = ATgetArgument(t, 0);
          g_122 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_122;
      if(match_cons(t, sym_ConstType_1))
        {
          h_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_122);
      o_122 = t;
      t = term_w_56;
      p_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_122), term_w_56);
      t = g_12(k_16, o_122, p_122, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, f_122, (ATerm) ATmakeAppl(sym_ConstType_1, h_122));
    }
  return(t);
}
static ATerm h_12 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm t_122 = NULL,u_122 = NULL;
  u_122 = t;
  {
    ATerm x_56 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        t = y_12(j_60, k_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_57 = ATgetFirst((ATermList) t);
            t_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_57);
        {
          ATerm v_122 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, t_122);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_122 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_13(k_60, t_122, v_122, t);
          t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, t_122);
        }
      }
    else
      {
        t = x_56;
        {
          ATerm x_122 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
          t = lookup_table_0_1(j_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_122 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_12(k_60, x_122, t);
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        }
      }
  }
  t = u_122;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL,d_123 = NULL,e_123 = NULL,f_123 = NULL;
  c_123 = t;
  t = e_130(t);
  b_123 = t;
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_123 = NULL;
        t = term_n_56;
        g_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_123, term_n_56);
        t = y_12(b_123, g_123, t);
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_123 = ATgetFirst((ATermList) t);
      z_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_123, term_n_56, z_122);
  t = lookup_table_0_1(b_123, t);
  f_123 = t;
  t = term_n_56;
  d_123 = t;
  t = f_123;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(d_123, z_122, e_123, t);
  t = a_123;
  {
    static ATerm m_16 (ATerm t)
    {
      ATerm h_123 = NULL;
      h_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_123, h_123);
      t = h_12(b_123, h_123, t);
      return(t);
    }
    t = map_1_0(m_16, t);
  }
  t = c_123;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t)
{
  ATerm h_57 = t;
  int i_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_109(t);
      t = j_109(t);
      LocalPopChoice(i_57);
    }
  else
    {
      t = h_57;
      t = j_109(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_130 (ATerm), ATerm t)
{
  ATerm j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL,n_123 = NULL,o_123 = NULL,p_123 = NULL;
  k_123 = t;
  t = d_130(t);
  j_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_123, term_n_56);
  {
    ATerm k_57 = t;
    int l_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_123 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_57 = ATgetArgument(t, 0);
            ATerm n_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_56;
        t_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_123, term_n_56);
        t = y_12(j_123, t_123, t);
        LocalPopChoice(l_57);
      }
    else
      {
        t = k_57;
        t = (ATerm) ATempty;
      }
  }
  l_123 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_123, term_n_56, (ATerm) ATinsert(CheckATermList(l_123), (ATerm) ATempty));
  t = lookup_table_0_1(j_123, t);
  p_123 = t;
  t = term_n_56;
  m_123 = t;
  t = (ATerm) ATinsert(CheckATermList(l_123), (ATerm) ATempty);
  n_123 = t;
  t = p_123;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(m_123, n_123, o_123, t);
  t = k_123;
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
  ATerm d_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL,n_27 = NULL;
  g_124 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_124);
  d_124 = t;
  t = e_124;
  t = map_1_0(q_16, t);
  f_124 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_124);
  n_27 = t;
  t = SSLsetAnnotations(n_27, d_124);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm t_124 = NULL,u_124 = NULL;
  u_124 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      t_124 = ATgetArgument(t, 0);
      {
        ATerm o_57 = t;
        int p_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_53 = NULL,f_53 = NULL,h_27 = NULL;
            t = SSLgetAnnotations(u_124);
            a_53 = t;
            t = t_124;
            t = map_1_0(r_16, t);
            f_53 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, f_53);
            h_27 = t;
            t = SSLsetAnnotations(h_27, a_53);
            LocalPopChoice(p_57);
          }
        else
          {
            t = o_57;
            t = u_124;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          t_124 = ATgetArgument(t, 0);
          {
            ATerm q_57 = t;
            int r_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_53 = NULL,d_54 = NULL,i_27 = NULL;
                t = SSLgetAnnotations(u_124);
                w_53 = t;
                t = t_124;
                t = map_1_0(s_16, t);
                d_54 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, d_54);
                i_27 = t;
                t = SSLsetAnnotations(i_27, w_53);
                LocalPopChoice(r_57);
              }
            else
              {
                t = q_57;
                t = u_124;
              }
          }
        }
      else
        {
          t = u_124;
        }
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm s_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(u_57);
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
  int z_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(z_57);
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
  ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL;
  c_125 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_125;
    }
  else
    {
      static ATerm t_16 (ATerm t)
      {
        t = not_null(e_125);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_125 = ATgetFirst((ATermList) t);
          if(((e_125 != NULL) && (e_125 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_125;
      t = at_end_1_0(t_16, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL;
  t_125 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_125;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_125 = ATgetFirst((ATermList) t);
          v_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_58 = t;
        int b_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_54 = NULL,a_55 = NULL,b_55 = NULL,m_28 = NULL;
            t = SSLgetAnnotations(t_125);
            w_54 = t;
            t = u_125;
            t = b_125(t);
            a_55 = t;
            t = v_125;
            t = filter_1_0(b_125, t);
            b_55 = t;
            t = (ATerm) ATinsert(CheckATermList(b_55), a_55);
            m_28 = t;
            t = SSLsetAnnotations(m_28, w_54);
            LocalPopChoice(b_58);
          }
        else
          {
            t = a_58;
            t = v_125;
            t = filter_1_0(b_125, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  static ATerm l_126 (ATerm t)
  {
    ATerm i_126 = NULL,j_126 = NULL,k_126 = NULL;
    k_126 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_126 = ATgetFirst((ATermList) t);
        j_126 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_55 = NULL,v_55 = NULL,s_28 = NULL;
          t = SSLgetAnnotations(k_126);
          s_55 = t;
          t = j_126;
          t = l_126(t);
          v_55 = t;
          t = (ATerm) ATinsert(CheckATermList(v_55), i_126);
          s_28 = t;
          t = SSLsetAnnotations(s_28, s_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_126;
        t = p_117(t);
      }
    return(t);
  }
  t = l_126(t);
  return(t);
}
static ATerm x_126 (ATerm p_126, ATerm t)
{
  ATerm q_126 = NULL;
  t = SSL_explode_term(p_126);
  if(match_cons(t, sym__2))
    {
      ATerm c_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_126;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_126 = NULL,t_126 = NULL,u_126 = NULL;
  u_126 = t;
  if(match_cons(t, sym__2))
    {
      s_126 = ATgetArgument(t, 0);
      t_126 = ATgetArgument(t, 1);
      {
        ATerm h_58 = t;
        int i_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_16 (ATerm t)
            {
              t = t_126;
              return(t);
            }
            t = s_126;
            t = at_end_1_0(u_16, t);
            LocalPopChoice(i_58);
          }
        else
          {
            t = h_58;
            t = x_126(u_126, t);
          }
      }
    }
  else
    {
      t = x_126(u_126, t);
    }
  return(t);
}
static ATerm k_12 (ATerm m_35, ATerm y_34, ATerm t)
{
  ATerm y_126 = NULL,z_126 = NULL;
  static ATerm v_16 (ATerm t)
  {
    ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL;
    d_127 = t;
    t = SSL_explode_term(d_127);
    if(match_cons(t, sym__2))
      {
        if(((y_126 != NULL) && (y_126 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_126 = ATgetArgument(t, 0);
        {
          ATerm j_58 = ATgetArgument(t, 1);
          if(((ATgetType(j_58) == AT_LIST) && !(ATisEmpty(j_58))))
            {
              a_127 = ATgetFirst((ATermList) j_58);
              {
                ATerm n_58 = (ATerm) ATgetNext((ATermList) j_58);
                if(((ATgetType(n_58) != AT_LIST) || !(ATisEmpty(n_58))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, a_127, not_null(z_126));
    t = conc_0_0(t);
    b_127 = t;
    t = (ATerm) ATinsert(ATempty, b_127);
    c_127 = t;
    t = SSL_mkterm(y_126, c_127);
    return(t);
  }
  t = SSL_explode_term(m_35);
  if(match_cons(t, sym__2))
    {
      if(((y_126 != NULL) && (y_126 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_126 = ATgetArgument(t, 0);
      {
        ATerm o_58 = ATgetArgument(t, 1);
        if(((ATgetType(o_58) == AT_LIST) && !(ATisEmpty(o_58))))
          {
            if(((z_126 != NULL) && (z_126 != ATgetFirst((ATermList) o_58))))
              _fail(ATgetFirst((ATermList) o_58));
            else
              z_126 = ATgetFirst((ATermList) o_58);
            {
              ATerm p_58 = (ATerm) ATgetNext((ATermList) o_58);
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
  t = y_34;
  t = fetch_1_0(v_16, t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm t)
{
  ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL;
  f_127 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_127;
      t = z_123(t);
    }
  else
    {
      ATerm k_127 = NULL,l_127 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_127 = ATgetFirst((ATermList) t);
          h_127 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_127;
      t = b_124(t);
      k_127 = t;
      t = h_127;
      t = foldr_3_0(z_123, a_124, b_124, t);
      l_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_127, l_127);
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
  ATerm s_127 = NULL,t_127 = NULL;
  if(match_cons(t, sym__2))
    {
      s_127 = ATgetArgument(t, 0);
      t_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(s_127, t_127, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm u_127 = NULL,v_127 = NULL;
  v_127 = t;
  if(match_cons(t, sym_Signature_1))
    {
      u_127 = ATgetArgument(t, 0);
      {
        ATerm u_58 = t;
        int v_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_127 = NULL;
            t = u_127;
            t = filter_1_0(z_16, t);
            t = concat_0_0(t);
            x_127 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, x_127);
            LocalPopChoice(v_58);
          }
        else
          {
            t = u_58;
            t = v_127;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          u_127 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, u_127);
        }
      else
        {
          t = v_127;
        }
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm y_127 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_127;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL,e_29 = NULL;
  r_127 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_127);
  o_127 = t;
  t = p_127;
  t = foldr_3_0(w_16, x_16, y_16, t);
  q_127 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_127);
  e_29 = t;
  t = SSLsetAnnotations(e_29, o_127);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm w_58 = t;
  int c_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(c_59);
    }
  else
    {
      t = w_58;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL,b_129 = NULL;
  b_129 = t;
  if(match_cons(t, sym_LRule_1))
    {
      a_129 = ATgetArgument(t, 0);
      t = a_129;
      if(match_cons(t, sym_Rule_3))
        {
          x_128 = ATgetArgument(t, 0);
          y_128 = ATgetArgument(t, 1);
          z_128 = ATgetArgument(t, 2);
          {
            ATerm f_59 = t;
            int g_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_129 = NULL;
                t = x_128;
                t = free_vars_3_0(c_17, d_17, tboundin_3_0, t);
                f_129 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, f_129, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, x_128, y_128, z_128)));
                LocalPopChoice(g_59);
              }
            else
              {
                t = f_59;
                t = b_129;
              }
          }
        }
      else
        {
          t = b_129;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          a_129 = ATgetArgument(t, 0);
          {
            ATerm h_59 = t;
            int i_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_129 = NULL;
                t = a_129;
                t = free_vars_3_0(f_17, g_17, tboundin_3_0, t);
                y_129 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, y_129, a_129);
                LocalPopChoice(i_59);
              }
            else
              {
                t = h_59;
                t = b_129;
              }
          }
        }
      else
        {
          t = b_129;
        }
    }
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm g_129 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_129);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm j_59 = t;
  int m_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_59);
    }
  else
    {
      t = j_59;
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
                  ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_129 = ATgetArgument(t, 0);
                      j_129 = ATgetArgument(t, 1);
                      k_129 = ATgetArgument(t, 2);
                      l_129 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_129;
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
  ATerm s_129 = NULL;
  ATerm r_59 = t;
  int s_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_129 = ATgetArgument(t, 0);
          {
            ATerm t_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_59);
      t = s_129;
    }
  else
    {
      t = r_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_129;
    }
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm z_129 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_129);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm u_59 = t;
  int v_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_59);
    }
  else
    {
      t = u_59;
      {
        ATerm w_59 = t;
        int x_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_59);
          }
        else
          {
            t = w_59;
            {
              ATerm y_59 = t;
              int a_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_130 = NULL,c_130 = NULL,i_130 = NULL,k_130 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_130 = ATgetArgument(t, 0);
                      c_130 = ATgetArgument(t, 1);
                      i_130 = ATgetArgument(t, 2);
                      k_130 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_130;
                  t = map_1_0(h_17, t);
                  LocalPopChoice(a_60);
                }
              else
                {
                  t = y_59;
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
  ATerm r_130 = NULL;
  ATerm b_60 = t;
  int g_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_130 = ATgetArgument(t, 0);
          {
            ATerm h_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_60);
      t = r_130;
    }
  else
    {
      t = b_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_130;
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
  ATerm b_131 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      b_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, b_131)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL,g_30 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(a_17, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(b_17, t);
  {
    ATerm n_60 = t;
    int r_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_130 = NULL,x_130 = NULL,y_130 = NULL;
        w_130 = t;
        t = term_u_60;
        x_130 = t;
        t = term_v_60;
        y_130 = t;
        t = term_x_60;
        t = y_12(x_130, y_130, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = w_130;
        LocalPopChoice(r_60);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = n_60;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(i_17, t);
  u_128 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_128);
  r_128 = t;
  t = s_128;
  t = fetch_1_0(j_17, t);
  t_128 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_128);
  g_30 = t;
  t = SSLsetAnnotations(g_30, r_128);
  return(t);
}
static ATerm l_12 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm c_131 = NULL;
  t = SSL_fputc(e_40, f_40);
  c_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_131);
  return(t);
}
static ATerm m_12 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm d_131 = NULL;
  t = SSL_write_term_to_stream_text(i_24, j_24);
  d_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_131);
  return(t);
}
static ATerm o_12 (ATerm p_116 (ATerm), ATerm y_182, ATerm o_24, ATerm t)
{
  ATerm e_131 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_182, term_e_61);
  t = s_12(t);
  e_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_131, o_24);
  t = p_116(t);
  t = fclose_0_0(t);
  t = o_24;
  return(t);
}
static ATerm n_12 (ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm f_131 = NULL;
  t = SSL_write_term_to_stream_baf(e_24, f_24);
  f_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_131);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_61 = ATgetArgument(t, 0);
      if(match_cons(h_61, sym_Stream_1))
        {
          m_131 = ATgetArgument(h_61, 0);
        }
      else
        _fail(t);
      n_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(m_131, n_131, t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_61 = ATgetArgument(t, 0);
      if(match_cons(j_61, sym_Stream_1))
        {
          r_131 = ATgetArgument(j_61, 0);
        }
      else
        _fail(t);
      s_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_12(r_131, s_131, t);
  o_131 = t;
  t = term_n_26;
  p_131 = t;
  t = o_131;
  if(match_cons(t, sym_Stream_1))
    {
      q_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, o_131);
  t = l_12(p_131, q_131, t);
  return(t);
}
ATerm output_1_0 (ATerm y_135 (ATerm), ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL;
  t = y_135(t);
  h_131 = t;
  {
    ATerm k_61 = t;
    int n_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_131 = NULL,j_131 = NULL;
        t = term_u_60;
        i_131 = t;
        t = term_o_61;
        j_131 = t;
        t = term_p_61;
        t = y_12(i_131, j_131, t);
        LocalPopChoice(n_61);
      }
    else
      {
        t = k_61;
        t = term_r_61;
      }
  }
  g_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_131, h_131);
  {
    ATerm a_62 = t;
    int b_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_131 = NULL,l_131 = NULL;
        t = term_u_60;
        k_131 = t;
        t = term_c_62;
        l_131 = t;
        t = term_d_62;
        t = y_12(k_131, l_131, t);
        t = (ATerm) ATmakeAppl(sym__2, g_131, h_131);
        LocalPopChoice(b_62);
        if(match_cons(t, sym__2))
          {
            ATerm j_62 = ATgetArgument(t, 0);
            ATerm o_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_12(k_17, g_131, h_131, t);
      }
    else
      {
        t = a_62;
        if(match_cons(t, sym__2))
          {
            ATerm p_62 = ATgetArgument(t, 0);
            ATerm q_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_12(l_17, g_131, h_131, t);
      }
  }
  return(t);
}
static ATerm g_132 (ATerm a_132, ATerm t)
{
  t = SSL_fclose(a_132);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL;
  e_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_132 = ATgetArgument(t, 0);
      {
        ATerm r_62 = t;
        int s_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_132);
            LocalPopChoice(s_62);
          }
        else
          {
            t = r_62;
            t = g_132(e_132, t);
          }
      }
    }
  else
    {
      t = g_132(e_132, t);
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
  ATerm h_132 = NULL;
  t = SSL_fopen(g_40, h_40);
  h_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_132);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_132 = NULL;
  t = SSL_stdin_stream();
  i_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_132);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_132 = NULL;
  t = SSL_stdout_stream();
  j_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_132);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_132 = NULL;
  t = SSL_stderr_stream();
  k_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_132);
  return(t);
}
static ATerm s_133 (ATerm q_132, ATerm t)
{
  ATerm r_132 = NULL;
  t = SSL_explode_term(q_132);
  if(match_cons(t, sym__2))
    {
      ATerm u_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_62 = ATgetArgument(t, 1);
        if(((ATgetType(w_62) == AT_LIST) && !(ATisEmpty(w_62))))
          {
            r_132 = ATgetFirst((ATermList) w_62);
            {
              ATerm a_63 = (ATerm) ATgetNext((ATermList) w_62);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_132;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_132;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_132;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_132;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_133 (ATerm u_132, ATerm v_132, ATerm w_132, ATerm t)
{
  ATerm x_132 = NULL,y_132 = NULL,a_133 = NULL,d_133 = NULL,o_30 = NULL;
  t = SSLgetAnnotations(w_132);
  a_133 = t;
  t = u_132;
  if(match_cons(t, sym_Path_1))
    {
      d_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_133, v_132);
  o_30 = t;
  t = SSLsetAnnotations(o_30, a_133);
  if(match_cons(t, sym__2))
    {
      x_132 = ATgetArgument(t, 0);
      y_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(x_132, y_132, t);
  return(t);
}
static ATerm u_133 (ATerm f_133, ATerm g_133, ATerm h_133, ATerm t)
{
  ATerm i_133 = NULL,j_133 = NULL,k_133 = NULL,n_133 = NULL,s_30 = NULL;
  t = SSLgetAnnotations(h_133);
  k_133 = t;
  t = SSL_is_string(f_133);
  n_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_133, g_133);
  s_30 = t;
  t = SSLsetAnnotations(s_30, k_133);
  if(match_cons(t, sym__2))
    {
      i_133 = ATgetArgument(t, 0);
      j_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(i_133, j_133, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL,r_133 = NULL;
  p_133 = t;
  if(match_cons(t, sym__2))
    {
      q_133 = ATgetArgument(t, 0);
      r_133 = ATgetArgument(t, 1);
      {
        ATerm b_63 = t;
        int d_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_133(p_133, t);
            LocalPopChoice(d_63);
          }
        else
          {
            t = b_63;
            {
              ATerm e_63 = t;
              int f_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_133(q_133, r_133, p_133, t);
                  LocalPopChoice(f_63);
                }
              else
                {
                  t = e_63;
                  t = u_133(q_133, r_133, p_133, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_133(p_133, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_133 = NULL,x_133 = NULL,y_133 = NULL,d_134 = NULL;
  d_134 = t;
  {
    ATerm g_63 = t;
    int i_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_134, term_k_63);
        t = s_12(t);
        LocalPopChoice(i_63);
      }
    else
      {
        t = g_63;
        {
          ATerm p_56 = NULL,q_56 = NULL;
          t = term_l_63;
          q_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_63, d_134);
          t = q_12(q_56, d_134, t);
          p_56 = t;
          t = SSL_perror(p_56);
          _fail(t);
        }
      }
  }
  x_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_12(y_133, t);
  w_133 = t;
  t = x_133;
  t = fclose_0_0(t);
  t = w_133;
  return(t);
}
ATerm input_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm m_63 = t;
  int n_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_134 = NULL,h_134 = NULL;
      t = term_u_60;
      g_134 = t;
      t = term_o_63;
      h_134 = t;
      t = term_p_63;
      t = y_12(g_134, h_134, t);
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
  ATerm i_134 = NULL,j_134 = NULL,k_134 = NULL,l_134 = NULL,m_134 = NULL;
  i_134 = t;
  t = term_r_63;
  t = whoami_0_0(t);
  j_134 = t;
  t = term_d_37;
  l_134 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_63), j_134), term_s_63);
  m_134 = t;
  t = SSL_printnl(l_134, m_134);
  t = term_f_37;
  k_134 = t;
  t = SSL_exit(k_134);
  t = i_134;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm o_134 = NULL;
  o_134 = t;
  if(match_string(t, "-k"))
    {
      t = o_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_134;
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm p_134 = NULL,q_134 = NULL,r_134 = NULL;
  p_134 = t;
  t = SSL_string_to_int(p_134);
  q_134 = t;
  t = term_u_63;
  r_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_63, q_134);
  t = b_13(r_134, q_134, t);
  t = p_134;
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
  ATerm t_134 = NULL;
  t_134 = t;
  if(match_string(t, "-S"))
    {
      t = t_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_134;
    }
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm u_134 = NULL,v_134 = NULL;
  t = term_d_64;
  u_134 = t;
  t = term_h_64;
  v_134 = t;
  t = term_i_64;
  t = b_13(u_134, v_134, t);
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
  ATerm w_134 = NULL,x_134 = NULL,y_134 = NULL;
  w_134 = t;
  t = SSL_string_to_int(w_134);
  x_134 = t;
  t = term_d_64;
  y_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_64, x_134);
  t = b_13(y_134, x_134, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_134);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_l_64;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm z_134 = NULL,a_135 = NULL;
  t = term_m_64;
  z_134 = t;
  t = term_r_63;
  a_135 = t;
  t = term_n_64;
  t = b_13(z_134, a_135, t);
  t = term_p_64;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_q_64;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_64 = t;
  int s_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_17, q_17, r_17, t);
      LocalPopChoice(s_64);
    }
  else
    {
      t = r_64;
      {
        ATerm t_64 = t;
        int u_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_17, t_17, u_17, t);
            LocalPopChoice(u_64);
          }
        else
          {
            t = t_64;
            t = Option_3_0(v_17, w_17, x_17, t);
          }
      }
    }
  return(t);
}
static ATerm b_13 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm b_135 = NULL,c_135 = NULL;
  t = term_u_60;
  b_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_60, j_55, k_55);
  t = lookup_table_0_1(b_135, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(j_55, k_55, c_135, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_60, j_55, k_55);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_135 = NULL,h_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL;
      t = term_r_63;
      t = i_0(t);
      i_135 = t;
      t = term_v_64;
      j_135 = t;
      t = term_w_64;
      k_135 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_64, term_w_64, i_135);
      t = z_12(j_135, k_135, i_135, t);
      _fail(t);
    }
  else
    {
      ATerm n_135 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_135 = ATgetFirst((ATermList) t);
          h_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_135;
      t = d_0(t);
      t = term_r_63;
      t = g_0(t);
      n_135 = t;
      t = (ATerm) ATinsert(CheckATermList(h_135), n_135);
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm q_135 = NULL;
  q_135 = t;
  if(match_string(t, "-o"))
    {
      t = q_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_135;
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL;
  v_135 = t;
  t = term_o_61;
  w_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_61, v_135);
  t = b_13(w_135, v_135, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_135);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_x_64;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_17, a_18, b_18, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm a_136 = NULL;
  a_136 = t;
  if(match_string(t, "-i"))
    {
      t = a_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_136;
    }
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm b_136 = NULL,c_136 = NULL;
  b_136 = t;
  t = term_o_63;
  c_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_63, b_136);
  t = b_13(c_136, b_136, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_136);
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
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL,h_136 = NULL,i_136 = NULL;
  e_136 = t;
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
  f_136 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_60, f_60, (ATerm) ATinsert(CheckATermList(f_136), d_60));
  t = lookup_table_0_1(e_60, t);
  i_136 = t;
  t = (ATerm) ATinsert(CheckATermList(f_136), d_60);
  g_136 = t;
  t = i_136;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(f_60, g_136, h_136, t);
  t = e_136;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm p_136 = NULL,q_136 = NULL,r_136 = NULL,s_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_136 = NULL,u_136 = NULL,v_136 = NULL;
      t = term_r_63;
      t = t_0(t);
      t_136 = t;
      t = term_v_64;
      u_136 = t;
      t = term_w_64;
      v_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_64, term_w_64, t_136);
      t = z_12(u_136, v_136, t_136, t);
      _fail(t);
    }
  else
    {
      ATerm z_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_136 = ATgetFirst((ATermList) t);
          q_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_136 = ATgetFirst((ATermList) t);
          s_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_136;
      t = o_0(t);
      t = r_136;
      t = r_0(t);
      z_136 = t;
      t = (ATerm) ATinsert(CheckATermList(s_136), z_136);
    }
  return(t);
}
static ATerm f_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm b_137 = NULL,c_137 = NULL;
  b_137 = t;
  if(match_string(t, "old"))
    {
      t = b_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = b_137;
    }
  t = term_v_60;
  c_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_60, b_137);
  t = b_13(c_137, b_137, t);
  t = term_r_63;
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_d_65;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_18, i_18, m_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_137 = NULL,f_137 = NULL,g_137 = NULL,h_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_63;
  t = whoami_0_0(t);
  e_137 = t;
  t = term_d_37;
  g_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_65), e_137);
  h_137 = t;
  t = SSL_printnl(g_137, h_137);
  t = term_f_37;
  f_137 = t;
  t = SSL_exit(f_137);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_137 = NULL,j_137 = NULL;
  t = term_u_60;
  i_137 = t;
  t = term_f_65;
  j_137 = t;
  t = term_g_65;
  t = y_12(i_137, j_137, t);
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
  ATerm l_137 = NULL,m_137 = NULL,n_137 = NULL;
  l_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_137;
      t = x_123(t);
    }
  else
    {
      ATerm q_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_137 = ATgetFirst((ATermList) t);
          n_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_137;
      t = foldr_2_0(x_123, y_123, t);
      q_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_137, q_137);
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
  ATerm y_56 = NULL,a_57 = NULL;
  if(match_cons(t, sym__2))
    {
      y_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(y_56, a_57, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_137 = NULL,u_56 = NULL,v_56 = NULL;
  t = times_0_0(t);
  v_56 = t;
  t = SSL_explode_term(v_56);
  if(match_cons(t, sym__2))
    {
      ATerm j_65 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_56;
  t = foldr_2_0(n_18, o_18, t);
  v_137 = t;
  t = SSL_TicksToSeconds(v_137);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_138 = NULL,h_138 = NULL,i_138 = NULL;
  g_138 = t;
  if(match_cons(t, sym__2))
    {
      h_138 = ATgetArgument(t, 0);
      i_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_138;
        if((h_138 != t))
          {
            _fail(t);
          }
        t = g_138;
        LocalPopChoice(l_65);
      }
    else
      {
        t = k_65;
        t = (ATerm) ATmakeAppl(sym__2, h_138, i_138);
        {
          ATerm m_65 = t;
          int n_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_138, i_138);
              LocalPopChoice(n_65);
            }
          else
            {
              t = m_65;
              t = SSL_gtr(h_138, i_138);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_138, i_138);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_132 (ATerm), ATerm t)
{
  ATerm m_138 = NULL;
  m_138 = t;
  {
    ATerm o_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL;
        t = term_u_60;
        p_138 = t;
        t = term_d_64;
        q_138 = t;
        t = term_q_65;
        t = y_12(p_138, q_138, t);
        o_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_138, term_f_37);
        t = geq_0_0(t);
        t = m_138;
        t = z_132(t);
        LocalPopChoice(p_65);
      }
    else
      {
        t = o_65;
        t = m_138;
      }
  }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm s_138 = NULL,t_138 = NULL,v_138 = NULL,w_138 = NULL;
  t = run_time_0_0(t);
  s_138 = t;
  t = term_r_63;
  t = whoami_0_0(t);
  t_138 = t;
  t = term_d_37;
  v_138 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_65), s_138), term_r_65), t_138);
  w_138 = t;
  t = SSL_printnl(v_138, w_138);
  t = (ATerm) ATmakeAppl(sym__2, term_d_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_65), s_138), term_r_65), t_138));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_138 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_64;
  x_138 = t;
  t = SSL_exit(x_138);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm h_139 = NULL,i_139 = NULL;
  i_139 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_139;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_139 = ATgetArgument(t, 0);
          {
            ATerm y_57 = NULL,x_30 = NULL;
            t = SSLgetAnnotations(i_139);
            y_57 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_139);
            x_30 = t;
            t = SSLsetAnnotations(x_30, y_57);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_139;
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
      ATerm a_139 = NULL,b_139 = NULL;
      t = term_u_60;
      a_139 = t;
      t = term_v_65;
      b_139 = t;
      t = term_w_65;
      t = y_12(a_139, b_139, t);
      LocalPopChoice(u_65);
    }
  else
    {
      t = t_65;
      t = fetch_1_0(u_18, t);
    }
  t = p_135(t);
  return(t);
}
static ATerm c_13 (ATerm w_63, ATerm x_63, ATerm y_63, ATerm t)
{
  ATerm k_139 = NULL;
  t = SSL_hashtable_put(y_63, w_63, x_63);
  k_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_139);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_61, ATerm t)
{
  ATerm t_139 = NULL;
  t = table_hashtable_0_0(t);
  t_139 = t;
  {
    ATerm x_65 = t;
    int y_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL;
        t = t_139;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_13(q_61, m_58, t);
        LocalPopChoice(y_65);
      }
    else
      {
        t = x_65;
        {
          ATerm r_58 = NULL;
          t = q_61;
          t = table_create_0_0(t);
          t = t_139;
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
  ATerm w_139 = NULL;
  t = SSL_hashtable_create(e_64, f_64);
  w_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_139);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_139 = NULL,y_139 = NULL,z_139 = NULL,b_140 = NULL,c_140 = NULL;
  x_139 = t;
  t = term_z_65;
  b_140 = t;
  t = term_a_66;
  c_140 = t;
  t = x_139;
  t = new_hashtable_0_2(b_140, c_140, t);
  y_139 = t;
  t = x_139;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(x_139, y_139, z_139, t);
  t = x_139;
  return(t);
}
static ATerm v_12 (ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm d_140 = NULL;
  t = SSL_hashtable_remove(c_64, b_64);
  d_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_140);
  return(t);
}
static ATerm w_12 (ATerm g_64, ATerm t)
{
  ATerm i_140 = NULL;
  t = SSL_hashtable_destroy(g_64);
  i_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_140);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_140 = NULL;
  t = SSL_table_hashtable();
  j_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_140);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_140 = NULL,l_140 = NULL,m_140 = NULL,n_140 = NULL;
  k_140 = t;
  t = table_hashtable_0_0(t);
  l_140 = t;
  t = lookup_table_0_1(k_140, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(n_140, t);
  t = l_140;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_12(k_140, m_140, t);
  t = k_140;
  return(t);
}
ATerm map_1_0 (ATerm y_116 (ATerm), ATerm t)
{
  static ATerm c_141 (ATerm t)
  {
    ATerm z_140 = NULL,a_141 = NULL,b_141 = NULL;
    z_140 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_140;
      }
    else
      {
        ATerm b_59 = NULL,k_59 = NULL,l_59 = NULL,z_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_141 = ATgetFirst((ATermList) t);
            b_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_140);
        b_59 = t;
        t = a_141;
        t = y_116(t);
        k_59 = t;
        t = b_141;
        t = c_141(t);
        l_59 = t;
        t = (ATerm) ATinsert(CheckATermList(l_59), k_59);
        z_30 = t;
        t = SSLsetAnnotations(z_30, b_59);
      }
    return(t);
  }
  t = c_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_141 = NULL,g_141 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_141 = ATgetFirst((ATermList) t);
      g_141 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_141 = NULL,l_141 = NULL;
        static ATerm v_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_141)), not_null(l_141));
          return(t);
        }
        t = g_141;
        t = n_0(t);
        if(((k_141 != NULL) && (k_141 != t)))
          _fail(t);
        else
          k_141 = t;
        t = f_141;
        t = k_0(t);
        if(((l_141 != NULL) && (l_141 != t)))
          _fail(t);
        else
          l_141 = t;
        t = g_141;
        t = reverse_acc_2_0(k_0, v_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_63;
      t = n_0(t);
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm r_141 = NULL,s_141 = NULL,t_141 = NULL,e_31 = NULL;
  t_141 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_141);
  r_141 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_141);
  e_31 = t;
  t = SSLsetAnnotations(e_31, r_141);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm x_141 = NULL;
  x_141 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_141), term_b_66);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_141 = NULL,o_141 = NULL;
  ATerm c_66 = t;
  int d_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_141 = NULL,q_141 = NULL;
      t = term_u_60;
      p_141 = t;
      t = term_f_65;
      q_141 = t;
      t = term_g_65;
      t = y_12(p_141, q_141, t);
      LocalPopChoice(d_66);
    }
  else
    {
      t = c_66;
      t = fetch_1_0(w_18, t);
    }
  t = term_e_66;
  t = echo_0_0(t);
  t = term_v_64;
  n_141 = t;
  t = term_w_64;
  o_141 = t;
  t = term_f_66;
  t = y_12(n_141, o_141, t);
  t = reverse_acc_2_0(_id, x_18, t);
  t = map_1_0(a_19, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  static ATerm x_142 (ATerm t)
  {
    ATerm u_142 = NULL,v_142 = NULL,w_142 = NULL;
    u_142 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_142 = ATgetFirst((ATermList) t);
        w_142 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_66 = t;
      int h_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_59 = NULL,c_60 = NULL,h_31 = NULL;
          t = SSLgetAnnotations(u_142);
          z_59 = t;
          t = v_142;
          t = i_117(t);
          c_60 = t;
          t = (ATerm) ATinsert(CheckATermList(w_142), c_60);
          h_31 = t;
          t = SSLsetAnnotations(h_31, z_59);
          LocalPopChoice(h_66);
        }
      else
        {
          t = g_66;
          {
            ATerm w_60 = NULL,f_61 = NULL,i_31 = NULL;
            t = SSLgetAnnotations(u_142);
            w_60 = t;
            t = w_142;
            t = x_142(t);
            f_61 = t;
            t = (ATerm) ATinsert(CheckATermList(f_61), v_142);
            i_31 = t;
            t = SSLsetAnnotations(i_31, w_60);
          }
        }
    }
    return(t);
  }
  t = x_142(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_143 = NULL,i_143 = NULL,k_143 = NULL;
  f_143 = t;
  {
    ATerm i_66 = t;
    int j_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_143;
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
            t = f_143;
          }
        LocalPopChoice(j_66);
      }
    else
      {
        t = i_66;
        t = (ATerm) ATinsert(ATempty, f_143);
      }
  }
  i_143 = t;
  t = term_r_61;
  k_143 = t;
  t = SSL_printnl(k_143, i_143);
  t = f_143;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL;
  t = term_u_60;
  o_143 = t;
  t = term_f_65;
  p_143 = t;
  t = term_g_65;
  t = y_12(o_143, p_143, t);
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
  ATerm q_143 = NULL;
  t = lookup_table_0_1(x_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_13(y_61, q_143, t);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm s_143 = NULL,t_143 = NULL;
  t = term_m_66;
  s_143 = t;
  t = term_r_63;
  t_143 = t;
  t = term_n_66;
  t = b_13(s_143, t_143, t);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  t = term_o_66;
  return(t);
}
static ATerm o_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL;
  t = term_m_66;
  w_143 = t;
  t = term_r_63;
  x_143 = t;
  t = term_n_66;
  t = b_13(w_143, x_143, t);
  t = term_p_66;
  u_143 = t;
  t = term_r_63;
  v_143 = t;
  t = term_s_66;
  t = b_13(u_143, v_143, t);
  t = term_t_66;
  return(t);
}
static ATerm q_19 (ATerm t)
{
  t = term_u_66;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_66 = t;
  int x_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_19, j_19, l_19, t);
      LocalPopChoice(x_66);
    }
  else
    {
      t = w_66;
      t = Option_3_0(o_19, p_19, q_19, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t)
{
  ATerm y_143 = NULL,z_143 = NULL,a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL,l_31 = NULL;
  d_144 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_143 = ATgetFirst((ATermList) t);
      a_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_144);
  y_143 = t;
  t = z_143;
  t = o_95(t);
  b_144 = t;
  t = a_144;
  t = p_95(t);
  c_144 = t;
  t = (ATerm) ATinsert(CheckATermList(c_144), b_144);
  l_31 = t;
  t = SSLsetAnnotations(l_31, y_143);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_137 (ATerm), ATerm t)
{
  ATerm j_144 = NULL,k_144 = NULL,l_144 = NULL,m_144 = NULL,o_144 = NULL,p_144 = NULL,w_31 = NULL;
  j_144 = t;
  {
    ATerm y_66 = t;
    int z_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_67;
        t = s_137(t);
        LocalPopChoice(z_66);
      }
    else
      {
        t = y_66;
      }
  }
  t = j_144;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_144 = ATgetFirst((ATermList) t);
      m_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_144);
  k_144 = t;
  t = term_f_65;
  p_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_65, l_144);
  t = b_13(p_144, l_144, t);
  t = m_144;
  {
    static ATerm z_144 (ATerm t)
    {
      ATerm c_67 = t;
      int f_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_67 = t;
          int h_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_144 = NULL;
              s_144 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_144;
              LocalPopChoice(h_67);
            }
          else
            {
              t = g_67;
              t = s_137(t);
              t = Cons_2_0(_id, z_144, t);
            }
          LocalPopChoice(f_67);
        }
      else
        {
          t = c_67;
          {
            ATerm v_144 = NULL,w_144 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_144 = ATgetFirst((ATermList) t);
                w_144 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_144), (ATerm) ATmakeAppl(sym_Undefined_1, v_144));
          }
        }
      return(t);
    }
    t = z_144(t);
  }
  o_144 = t;
  t = (ATerm) ATinsert(CheckATermList(o_144), (ATerm) ATmakeAppl(sym_Program_1, l_144));
  w_31 = t;
  t = SSLsetAnnotations(w_31, k_144);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  ATerm n_145 = NULL;
  n_145 = t;
  if(match_string(t, "--help"))
    {
      t = n_145;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_145;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_145;
        }
    }
  return(t);
}
static ATerm x_19 (ATerm t)
{
  ATerm o_145 = NULL,p_145 = NULL;
  t = term_v_65;
  o_145 = t;
  t = term_r_63;
  p_145 = t;
  t = term_i_67;
  t = b_13(o_145, p_145, t);
  t = term_j_67;
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = term_k_67;
  return(t);
}
static ATerm c_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_137 (ATerm), ATerm t)
{
  ATerm f_145 = NULL,g_145 = NULL,h_145 = NULL,i_145 = NULL,j_145 = NULL,k_145 = NULL,l_145 = NULL,m_145 = NULL;
  h_145 = t;
  t = term_v_64;
  i_145 = t;
  t = term_n_67;
  t = lookup_table_0_1(i_145, t);
  m_145 = t;
  t = term_w_64;
  j_145 = t;
  t = (ATerm) ATempty;
  k_145 = t;
  t = m_145;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(j_145, k_145, l_145, t);
  t = h_145;
  {
    static ATerm r_19 (ATerm t)
    {
      ATerm o_67 = t;
      int p_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_137(t);
          LocalPopChoice(p_67);
        }
      else
        {
          t = o_67;
          {
            ATerm q_67 = t;
            int r_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_19, x_19, b_20, t);
                LocalPopChoice(r_67);
              }
            else
              {
                t = q_67;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_19, t);
  }
  {
    ATerm s_67 = t;
    int t_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_146 = NULL;
        b_146 = t;
        {
          ATerm y_67 = t;
          int z_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_61 = NULL;
              t = b_146;
              {
                ATerm a_68 = t;
                int b_68 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_61 = NULL,w_61 = NULL;
                    t = term_u_60;
                    t_61 = t;
                    t = term_v_65;
                    w_61 = t;
                    t = term_w_65;
                    t = y_12(t_61, w_61, t);
                    LocalPopChoice(b_68);
                  }
                else
                  {
                    t = a_68;
                    t = fetch_1_0(c_20, t);
                  }
              }
              t = b_146;
              t = default_system_usage_0_0(t);
              t = term_h_64;
              s_61 = t;
              t = SSL_exit(s_61);
              LocalPopChoice(z_67);
            }
          else
            {
              t = y_67;
              {
                ATerm e_62 = NULL,f_62 = NULL,i_62 = NULL;
                t = term_u_60;
                f_62 = t;
                t = term_m_66;
                i_62 = t;
                t = term_c_68;
                t = y_12(f_62, i_62, t);
                t = b_146;
                t = default_system_about_0_0(t);
                t = term_h_64;
                e_62 = t;
                t = SSL_exit(e_62);
              }
            }
        }
        LocalPopChoice(t_67);
      }
    else
      {
        t = s_67;
        {
          ATerm d_68 = t;
          int e_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_146 = NULL,d_146 = NULL,e_146 = NULL;
              static ATerm d_20 (ATerm t)
              {
                ATerm f_146 = NULL,g_146 = NULL,h_146 = NULL,y_31 = NULL;
                h_146 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_146 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_146);
                f_146 = t;
                t = g_146;
                if(((f_145 != NULL) && (f_145 != t)))
                  _fail(t);
                else
                  f_145 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_146);
                y_31 = t;
                t = SSLsetAnnotations(y_31, f_146);
                return(t);
              }
              t = fetch_1_0(d_20, t);
              t = term_d_37;
              d_146 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_145)), term_f_68);
              e_146 = t;
              t = SSL_printnl(d_146, e_146);
              t = (ATerm) ATmakeAppl(sym__2, term_d_37, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_145)), term_f_68));
              t = default_system_usage_0_0(t);
              t = term_f_37;
              c_146 = t;
              t = SSL_exit(c_146);
              LocalPopChoice(e_68);
            }
          else
            {
              t = d_68;
            }
        }
      }
  }
  g_145 = t;
  t = term_v_64;
  t = table_destroy_0_0(t);
  t = g_145;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm t)
{
  ATerm m_146 = NULL,n_146 = NULL,o_146 = NULL,p_146 = NULL,q_146 = NULL;
  t = parse_options_1_0(r_135, t);
  m_146 = t;
  t = term_g_68;
  t = table_create_0_0(t);
  t = term_g_68;
  n_146 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_68, term_h_68, m_146);
  t = lookup_table_0_1(n_146, t);
  q_146 = t;
  t = term_h_68;
  o_146 = t;
  t = q_146;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(o_146, m_146, p_146, t);
  t = m_146;
  t = t_135(t);
  {
    ATerm i_68 = t;
    int k_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_135, t);
        LocalPopChoice(k_68);
      }
    else
      {
        t = i_68;
        {
          ATerm l_68 = t;
          int m_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_68);
            }
          else
            {
              t = l_68;
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
              int t_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(t_68);
                }
              else
                {
                  t = r_68;
                  {
                    ATerm u_68 = t;
                    int v_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(l_20, m_20, o_20, t);
                        LocalPopChoice(v_68);
                      }
                    else
                      {
                        t = u_68;
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
static ATerm f_20 (ATerm t)
{
  t = input_1_0(p_20, t);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm s_146 = NULL,t_146 = NULL;
  t = term_c_62;
  s_146 = t;
  t = term_r_63;
  t_146 = t;
  t = term_y_68;
  t = b_13(s_146, t_146, t);
  t = term_z_68;
  return(t);
}
static ATerm o_20 (ATerm t)
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
  t = option_wrap_4_0(e_20, default_usage_0_0, _id, f_20, t);
  return(t);
}

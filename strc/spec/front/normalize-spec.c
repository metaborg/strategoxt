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
ATerm term_d_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_k_79;
ATerm term_h_79;
ATerm term_w_78;
ATerm term_v_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_o_78;
ATerm term_j_78;
ATerm term_i_78;
ATerm term_h_78;
ATerm term_g_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_d_78;
ATerm term_w_77;
ATerm term_v_77;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_n_77;
ATerm term_m_77;
ATerm term_j_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_x_76;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_n_76;
ATerm term_m_76;
ATerm term_h_76;
ATerm term_g_76;
ATerm term_f_76;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_z_75;
ATerm term_y_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_t_75;
ATerm term_s_75;
ATerm term_r_75;
ATerm term_o_75;
ATerm term_n_75;
ATerm term_x_74;
ATerm term_w_74;
ATerm term_t_74;
ATerm term_s_74;
ATerm term_r_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_y_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_t_70;
ATerm term_l_70;
ATerm term_m_60;
ATerm term_h_60;
ATerm term_o_58;
ATerm term_z_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_c_53;
ATerm term_z_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_m_51;
ATerm term_e_51;
ATerm term_w_50;
ATerm term_u_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_t_49;
ATerm term_q_46;
ATerm term_b_46;
ATerm term_m_45;
ATerm term_c_45;
ATerm term_v_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_f_44;
ATerm term_b_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_n_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_b_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_k_41;
ATerm term_f_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_x_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_j_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_d_40;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_g_35;
ATerm term_a_35;
ATerm term_i_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_b_26;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Op_2, term_i_29, (ATerm) ATempty);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_30);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_26);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Op_2, term_t_31, (ATerm) ATempty);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_32);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_31);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Call_2, term_m_32, (ATerm) ATempty);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Call_2, term_q_33, (ATerm) ATempty);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Call_2, term_s_31, (ATerm) ATempty);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_33);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_40);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_RootApp_1, term_d_26);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_40);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_o_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_40);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_41);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_41);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_41);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_42);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_42);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Counter", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Defined_2, term_k_44, term_l_44);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("DRRenameVar", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("DRVarNumber", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym__2, term_p_44, term_m_44);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-Rule already generated: ", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("DRAuxRuleGenerated", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("callers already generated: ", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("freshly generating the DR callers: ", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_51);
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym_Var_1, term_w_51);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_51);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Build_1, term_c_31);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_52);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_52);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_53);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_54);
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_57);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_60);
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_70);
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_70);
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_k_74);
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_r_74);
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_w_74);
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_r_75);
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(sym__2, term_z_75, term_l_44);
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_44);
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(sym__2, term_e_76, term_u_75);
  ATprotect(&(term_g_76));
  term_g_76 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_76));
  term_n_76 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_w_76);
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_z_75);
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_m_77);
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(sym__2, term_m_76, term_n_76);
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(sym__2, term_d_78, term_u_75);
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_78));
  term_g_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(sym__2, term_g_78, term_u_75);
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(sym__2, term_m_77, term_u_75);
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(sym__3, term_m_76, term_n_76, (ATerm) ATempty);
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(sym__2, term_j_74, term_d_78);
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(sym__2, term_w_74, term_u_75);
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_111 (ATerm), ATerm t);
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
static ATerm b_12 (ATerm l_144 (ATerm), ATerm x_81, ATerm v_81, ATerm w_81, ATerm a_82, ATerm y_81, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm l_144 (ATerm), ATerm t);
static ATerm y_18 (ATerm i_11, ATerm j_11, ATerm t);
static ATerm z_18 (ATerm k_12, ATerm o_12, ATerm t);
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
ATerm pat_td_1_0 (ATerm u_142 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm d_12 (ATerm o_72, ATerm p_72, ATerm q_72, ATerm t);
static ATerm a_31 (ATerm f_30, ATerm t);
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
static ATerm e_12 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t);
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
static ATerm f_12 (ATerm k_144 (ATerm), ATerm e_81, ATerm b_81, ATerm c_81, ATerm l_81, ATerm p_81, ATerm q_81, ATerm t);
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
static ATerm b_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm m_144 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm h_12 (ATerm e_82, ATerm d_82, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm o_62 (ATerm b_62, ATerm t);
static ATerm r_62 (ATerm f_62, ATerm t);
static ATerm o_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm i_65 (ATerm x_63, ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm NewNumberedVar_0_0 (ATerm t);
ATerm RenameVarTerm_2_0 (ATerm q_144 (ATerm), ATerm r_144 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm dr_rename_vars_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm v_144 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm o_112 (ATerm), ATerm t);
static ATerm p_12 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm s_144 (ATerm), ATerm t);
static ATerm r_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm t_12 (ATerm g_84, ATerm f_84, ATerm t);
ATerm repeat_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm g_119 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm x_119 (ATerm y_117, ATerm z_117, ATerm a_118, ATerm c_118, ATerm d_118, ATerm e_118, ATerm l_118, ATerm t);
static ATerm h_16 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm l_117 (ATerm), ATerm t);
static ATerm i_16 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm y_143 (ATerm), ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm x_16 (ATerm t);
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
ATerm Bind4_0_0 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm a_13 (ATerm h_122 (ATerm), ATerm s_30, ATerm r_30, ATerm t);
static ATerm b_13 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm w_30, ATerm v_30, ATerm t);
static ATerm c_13 (ATerm c_122 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
ATerm genzip_4_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t);
static ATerm g_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm h_13 (ATerm r_674, ATerm w_674, ATerm b_67, ATerm t);
ATerm while_not_2_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm t);
ATerm for_3_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm t_140 (ATerm n_139, ATerm o_139, ATerm p_139, ATerm t);
static ATerm m_18 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
ATerm free_vars_3_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm e_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm l_111 (ATerm), ATerm t);
static ATerm l_13 (ATerm v_60, ATerm w_60, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm c_113 (ATerm), ATerm t);
static ATerm m_13 (ATerm f_131 (ATerm), ATerm u_44, ATerm s_44, ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm n_13 (ATerm p_60, ATerm q_60, ATerm t);
ATerm end_scope_1_0 (ATerm c_131 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_131 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm t);
static ATerm e_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_125 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_118 (ATerm), ATerm t);
static ATerm y_147 (ATerm q_147, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_13 (ATerm i_35, ATerm q_34, ATerm t);
ATerm foldr_3_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm f_20 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
static ATerm g_21 (ATerm t);
static ATerm i_21 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm r_13 (ATerm k_40, ATerm l_40, ATerm t);
static ATerm s_13 (ATerm o_24, ATerm p_24, ATerm t);
static ATerm u_13 (ATerm n_117 (ATerm), ATerm h_184, ATerm u_24, ATerm t);
static ATerm t_13 (ATerm k_24, ATerm l_24, ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm output_1_0 (ATerm w_136 (ATerm), ATerm t);
static ATerm i_153 (ATerm c_153, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_13 (ATerm q_24, ATerm t);
static ATerm w_13 (ATerm d_39, ATerm e_39, ATerm t);
static ATerm x_13 (ATerm m_40, ATerm n_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_154 (ATerm s_153, ATerm t);
static ATerm u_154 (ATerm w_153, ATerm x_153, ATerm y_153, ATerm t);
static ATerm v_154 (ATerm g_154, ATerm h_154, ATerm i_154, ATerm t);
static ATerm y_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_136 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm t_21 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm f_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_14 (ATerm p_55, ATerm q_55, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm s_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm i_23 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm f_14 (ATerm k_60, ATerm l_60, ATerm j_60, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_13 (ATerm g_43, ATerm h_43, ATerm t);
ATerm foldr_2_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm p_23 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_133 (ATerm), ATerm t);
static ATerm q_23 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_24 (ATerm t);
ATerm need_help_1_0 (ATerm n_136 (ATerm), ATerm t);
static ATerm i_14 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t);
ATerm lookup_table_0_1 (ATerm w_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_64, ATerm l_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_14 (ATerm h_64, ATerm i_64, ATerm t);
static ATerm c_14 (ATerm m_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm n_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm x_24 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_118 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_14 (ATerm f_64, ATerm g_64, ATerm t);
static ATerm e_14 (ATerm d_62, ATerm e_62, ATerm t);
static ATerm y_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_138 (ATerm), ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
ATerm parse_options_1_0 (ATerm p_138 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm a_26 (ATerm t);
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
              t = term_b_26;
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
                  t = term_b_26;
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
                      t = term_d_26;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      d_1 = ATgetArgument(t, 0);
                      e_1 = ATgetArgument(t, 1);
                      b_1 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, e_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_26, (ATerm) ATinsert(ATinsert(ATempty, b_1), d_1)));
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
ATerm topdown_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(k_111, t);
    return(t);
  }
  t = k_111(t);
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
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm m_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_26);
          }
        else
          {
            t = m_26;
            {
              ATerm p_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_6 = ATgetArgument(t, 0);
                      c_6 = ATgetArgument(t, 1);
                      d_6 = ATgetArgument(t, 2);
                      e_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_6;
                  t = map_1_0(u_0, t);
                  LocalPopChoice(q_26);
                }
              else
                {
                  t = p_26;
                  {
                    ATerm u_26 = t;
                    int z_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_26);
                      }
                    else
                      {
                        t = u_26;
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
  ATerm s_6 = NULL;
  ATerm a_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_6 = ATgetArgument(t, 0);
          {
            ATerm o_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_27);
      t = s_6;
    }
  else
    {
      t = a_27;
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
static ATerm a_1 (ATerm t)
{
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm s_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_27);
      t = x_6;
    }
  else
    {
      t = q_27;
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
static ATerm f_1 (ATerm t)
{
  ATerm a_7 = NULL;
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_7);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm b_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_7);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm t_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = t_27;
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            {
              ATerm b_28 = t;
              int c_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_7 = ATgetArgument(t, 0);
                      e_7 = ATgetArgument(t, 1);
                      f_7 = ATgetArgument(t, 2);
                      g_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_7;
                  t = map_1_0(i_1, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_28);
                      }
                    else
                      {
                        t = d_28;
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
  ATerm q_7 = NULL;
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_7 = ATgetArgument(t, 0);
          {
            ATerm s_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_28);
      t = q_7;
    }
  else
    {
      t = k_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_7;
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
  ATerm v_7 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_7 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = v_7;
    }
  else
    {
      t = t_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_7;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 = NULL,b_0 = NULL,h_0 = NULL,k_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            k_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_8);
        b_0 = t;
        t = k_8;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        k_0 = t;
        t = SSLsetAnnotations(k_0, b_0);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  static ATerm l_9 (ATerm g_4, ATerm i_4, ATerm l_4, ATerm m_4, ATerm n_4, ATerm o_4, ATerm q_4, ATerm t)
  {
    ATerm y_4 = NULL,z_4 = NULL,b_5 = NULL,g_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, n_4, term_n_29);
    {
      ATerm p_29 = t;
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
          t = p_29;
        }
    }
    t = new_0_0(t);
    y_4 = t;
    t = m_4;
    t = dummify_0_0(t);
    b_5 = t;
    {
      ATerm q_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_5;
          if((m_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, y_4);
          LocalPopChoice(z_29);
        }
      else
        {
          t = q_29;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_5, (ATerm) ATmakeAppl(sym_Op_2, term_a_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_30, (ATerm) ATinsert(CheckATermList(j_5), (ATerm) ATmakeAppl(sym_Str_1, l_5)))), b_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_4, i_4, l_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_4), m_4), n_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_4)))), z_4), (ATerm) ATmakeAppl(sym_Op_2, term_b_30, (ATerm) ATinsert(CheckATermList(j_5), (ATerm) ATmakeAppl(sym_Str_1, l_5))))), o_4))));
    return(t);
  }
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL,w_8 = NULL,y_8 = NULL,b_9 = NULL;
  n_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
      q_8 = ATgetArgument(t, 2);
      s_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_8;
  if(match_cons(t, sym_Rule_3))
    {
      w_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
      b_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_8;
  if(match_cons(t, sym_Op_2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
      t = m_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_8;
          if(match_string(t, "Undefined"))
            {
              ATerm g_30 = t;
              int i_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
                  t = n_8;
                  t = new_0_0(t);
                  j_2 = t;
                  t = w_8;
                  t = dummify_0_0(t);
                  h_2 = t;
                  {
                    ATerm j_30 = t;
                    int k_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_2;
                        if((w_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_2);
                        LocalPopChoice(k_30);
                      }
                    else
                      {
                        t = j_30;
                        t = h_2;
                      }
                  }
                  k_2 = t;
                  t = o_8;
                  t = x_0(t);
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, l_2, (ATerm) ATmakeAppl(sym_Op_2, term_a_30, (ATerm) ATinsert(ATinsert(ATempty, term_n_29), h_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, o_8, p_8, q_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_2), w_8), term_n_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_8)))), k_2), term_n_29)), (ATerm) ATmakeAppl(sym_Seq_2, b_9, term_b_26)))));
                  LocalPopChoice(i_30);
                }
              else
                {
                  t = g_30;
                  t = l_9(o_8, p_8, q_8, w_8, y_8, b_9, n_8, t);
                }
            }
          else
            {
              t = l_9(o_8, p_8, q_8, w_8, y_8, b_9, n_8, t);
            }
        }
      else
        {
          t = l_8;
          t = l_9(o_8, p_8, q_8, w_8, y_8, b_9, n_8, t);
        }
    }
  else
    {
      t = l_9(o_8, p_8, q_8, w_8, y_8, b_9, n_8, t);
    }
  return(t);
}
static ATerm b_12 (ATerm l_144 (ATerm), ATerm x_81, ATerm v_81, ATerm w_81, ATerm a_82, ATerm y_81, ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,u_9 = NULL;
  t = new_0_0(t);
  r_9 = t;
  t = a_82;
  t = dummify_0_0(t);
  q_9 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_9;
        if((a_82 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, r_9);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = q_9;
      }
  }
  s_9 = t;
  t = x_81;
  t = l_144(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, u_9, q_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, x_81, v_81, w_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, r_9), a_82), term_n_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, x_81)))), s_9), term_c_31)), (ATerm) ATmakeAppl(sym_Seq_2, y_81, term_b_26))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm l_144 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
      d_10 = ATgetArgument(t, 2);
      {
        ATerm e_31 = ATgetArgument(t, 3);
        if(match_cons(e_31, sym_Rule_3))
          {
            e_10 = ATgetArgument(e_31, 0);
            {
              ATerm f_31 = ATgetArgument(e_31, 1);
              if(match_cons(f_31, sym_Op_2))
                {
                  ATerm i_31 = ATgetArgument(f_31, 0);
                  if((ATgetSymbol((ATermAppl) i_31) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm l_31 = ATgetArgument(f_31, 1);
                    if(((ATgetType(l_31) != AT_LIST) || !(ATisEmpty(l_31))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            f_10 = ATgetArgument(e_31, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_12(l_144, a_10, b_10, d_10, e_10, f_10, t);
  return(t);
}
static ATerm y_18 (ATerm i_11, ATerm j_11, ATerm t)
{
  t = i_11;
  {
    ATerm q_31 = t;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,t_11 = NULL,y_11 = NULL,j_12 = NULL,j_3 = NULL;
        j_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_11 = ATgetFirst((ATermList) t);
            y_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_12);
        s_11 = t;
        t = y_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_11), t_11);
        j_3 = t;
        t = SSLsetAnnotations(j_3, s_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_31;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_f_26, i_11);
  return(t);
}
static ATerm z_18 (ATerm k_12, ATerm o_12, ATerm t)
{
  t = k_12;
  {
    ATerm r_31 = t;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL,y_12 = NULL,f_13 = NULL,j_13 = NULL,m_3 = NULL;
        j_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_12 = ATgetFirst((ATermList) t);
            f_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_13);
        v_12 = t;
        t = f_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_13), y_12);
        m_3 = t;
        t = SSLsetAnnotations(m_3, v_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_31;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_31, k_12);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,u_2 = NULL;
  w_14 = t;
  t = SSL_explode_term(w_14);
  if(match_cons(t, sym__2))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_31 = ATgetArgument(t, 1);
        if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
          {
            x_14 = ATgetFirst((ATermList) y_31);
            {
              ATerm d_32 = (ATerm) ATgetNext((ATermList) y_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_14);
  if(match_cons(t, sym__2))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_32 = ATgetArgument(t, 1);
        if(((ATgetType(f_32) == AT_LIST) && !(ATisEmpty(f_32))))
          {
            ATerm h_32 = ATgetFirst((ATermList) f_32);
            ATerm i_32 = (ATerm) ATgetNext((ATermList) f_32);
            if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
              {
                u_2 = ATgetFirst((ATermList) i_32);
                {
                  ATerm j_32 = (ATerm) ATgetNext((ATermList) i_32);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_32, (ATerm) ATinsert(ATinsert(ATempty, u_2), x_14));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_32, (ATerm) ATinsert(ATinsert(ATempty, t_15), s_15));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_u_31;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_32, (ATerm) ATinsert(ATinsert(ATempty, w_15), v_15));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm m_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_32, (ATerm) ATinsert(ATinsert(ATempty, o_16), m_16));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_32, (ATerm) ATinsert(ATinsert(ATempty, r_16), q_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm k_13 = NULL,o_13 = NULL,p_13 = NULL,a_14 = NULL,d_14 = NULL,g_14 = NULL,k_14 = NULL,m_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      k_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
      {
        ATerm u_14 = NULL;
        t = m_14;
        t = foldr_2_0(m_1, n_1, t);
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, k_14, u_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          k_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, k_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              k_14 = ATgetArgument(t, 0);
              {
                ATerm z_2 = NULL;
                t = k_14;
                {
                  ATerm o_32 = t;
                  int p_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_q_32;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_r_32;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_s_32;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_t_32;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_u_32;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(p_32);
                    }
                  else
                    {
                      t = o_32;
                      {
                        ATerm b_3 = NULL;
                        t = SSL_explode_string(k_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm v_32 = ATgetFirst((ATermList) t);
                            if(((ATgetType(v_32) != AT_INT) || (ATgetInt((ATermInt) v_32) != 39)))
                              _fail(t);
                            {
                              ATerm w_32 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
                                {
                                  b_3 = ATgetFirst((ATermList) w_32);
                                  {
                                    ATerm x_32 = (ATerm) ATgetNext((ATermList) w_32);
                                    if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
                                      {
                                        ATerm y_32 = ATgetFirst((ATermList) x_32);
                                        if(((ATgetType(y_32) != AT_INT) || (ATgetInt((ATermInt) y_32) != 39)))
                                          _fail(t);
                                        {
                                          ATerm z_32 = (ATerm) ATgetNext((ATermList) x_32);
                                          if(((ATgetType(z_32) != AT_LIST) || !(ATisEmpty(z_32))))
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
              ATerm c_33 = t;
              int d_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      k_14 = ATgetArgument(t, 0);
                      {
                        ATerm e_33 = ATgetArgument(t, 1);
                      }
                      d_14 = ATgetArgument(t, 2);
                      k_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_33);
                  t = (ATerm) ATmakeAppl(sym_Con_3, k_14, d_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_13), (ATerm) ATempty));
                }
              else
                {
                  t = c_33;
                  {
                    ATerm g_33 = t;
                    int i_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            k_14 = ATgetArgument(t, 0);
                            {
                              ATerm l_33 = ATgetArgument(t, 1);
                            }
                            d_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(i_33);
                        t = (ATerm) ATmakeAppl(sym_Con_3, k_14, d_14, term_r_33);
                      }
                    else
                      {
                        t = g_33;
                        if(match_cons(t, sym_Con1_2))
                          {
                            k_14 = ATgetArgument(t, 0);
                            m_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, k_14, m_14, term_r_33);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                k_14 = ATgetArgument(t, 0);
                                m_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm o_1 (ATerm t)
                                  {
                                    t = m_14;
                                    return(t);
                                  }
                                  t = k_14;
                                  t = foldr_2_0(o_1, p_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    k_14 = ATgetArgument(t, 0);
                                    t = k_14;
                                    t = foldr_2_0(q_1, r_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        k_14 = ATgetArgument(t, 0);
                                        t = k_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            o_13 = ATgetFirst((ATermList) t);
                                            p_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = p_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm s_33 = t;
                                                int t_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = y_18(k_14, g_14, t);
                                                    LocalPopChoice(t_33);
                                                  }
                                                else
                                                  {
                                                    t = s_33;
                                                    t = o_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = y_18(k_14, g_14, t);
                                              }
                                          }
                                        else
                                          {
                                            t = y_18(k_14, g_14, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            k_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, k_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                k_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, k_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    k_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, k_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        k_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, k_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            k_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                k_14 = ATgetArgument(t, 0);
                                                                m_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_14), m_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    k_14 = ATgetArgument(t, 0);
                                                                    m_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm s_1 (ATerm t)
                                                                      {
                                                                        t = m_14;
                                                                        return(t);
                                                                      }
                                                                      t = k_14;
                                                                      t = foldr_2_0(s_1, t_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        k_14 = ATgetArgument(t, 0);
                                                                        t = k_14;
                                                                        t = foldr_2_0(u_1, v_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            k_14 = ATgetArgument(t, 0);
                                                                            m_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_s_31, (ATerm) ATinsert(CheckATermList(m_14), k_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                k_14 = ATgetArgument(t, 0);
                                                                                t = k_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    o_13 = ATgetFirst((ATermList) t);
                                                                                    p_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = p_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm u_33 = t;
                                                                                        int v_33 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = z_18(k_14, g_14, t);
                                                                                            LocalPopChoice(v_33);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_33;
                                                                                            t = o_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_18(k_14, g_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_18(k_14, g_14, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_w_33;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        k_14 = ATgetArgument(t, 0);
                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                        t = m_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            a_14 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_b_34, (ATerm) ATinsert(ATinsert(ATempty, a_14), k_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            k_14 = ATgetArgument(t, 0);
                                                                                            t = k_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                k_14 = ATgetArgument(t, 0);
                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, k_14, m_14, term_d_26);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    k_14 = ATgetArgument(t, 0);
                                                                                                    m_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, k_14, m_14, term_d_26);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        k_14 = ATgetArgument(t, 0);
                                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, k_14, (ATerm)ATempty, m_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            k_14 = ATgetArgument(t, 0);
                                                                                                            m_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, m_14, k_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                k_14 = ATgetArgument(t, 0);
                                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, k_14, m_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    k_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, k_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        k_14 = ATgetArgument(t, 0);
                                                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                                                        d_14 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_14, m_14, (ATerm)ATempty, d_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            k_14 = ATgetArgument(t, 0);
                                                                                                                            m_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_14, (ATerm)ATempty, (ATerm)ATempty, m_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                k_14 = ATgetArgument(t, 0);
                                                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                                                d_14 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_14, m_14, (ATerm)ATempty, d_14);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    k_14 = ATgetArgument(t, 0);
                                                                                                                                    m_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_14, (ATerm)ATempty, (ATerm)ATempty, m_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        k_14 = ATgetArgument(t, 0);
                                                                                                                                        m_14 = ATgetArgument(t, 1);
                                                                                                                                        d_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_14, m_14, (ATerm)ATempty, d_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            k_14 = ATgetArgument(t, 0);
                                                                                                                                            m_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_14, (ATerm)ATempty, (ATerm)ATempty, m_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm c_34 = ATgetArgument(t, 0);
                                                                                                                                                m_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, m_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm b_19 = NULL,c_19 = NULL,f_19 = NULL;
  c_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      {
        ATerm i_19 = NULL,j_19 = NULL,o_19 = NULL,p_19 = NULL;
        t = c_19;
        t = new_0_0(t);
        i_19 = t;
        t = new_0_0(t);
        j_19 = t;
        t = new_0_0(t);
        o_19 = t;
        t = new_0_0(t);
        p_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_19), o_19), j_19), i_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_19), (ATerm) ATmakeAppl(sym_Var_1, o_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_19, (ATerm)ATmakeAppl(sym_Var_1, i_19), (ATerm) ATmakeAppl(sym_Var_1, j_19)), (ATerm) ATmakeAppl(sym_BAM_3, b_19, (ATerm)ATmakeAppl(sym_Var_1, o_19), (ATerm) ATmakeAppl(sym_Var_1, p_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_19)), (ATerm) ATmakeAppl(sym_Var_1, j_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_19 = ATgetArgument(t, 0);
          {
            ATerm q_19 = NULL,r_19 = NULL,t_19 = NULL,u_19 = NULL;
            t = c_19;
            t = new_0_0(t);
            t_19 = t;
            t = f_19;
            {
              static ATerm w_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((q_19 != NULL) && (q_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      q_19 = ATgetArgument(t, 0);
                    if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      r_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, t_19);
                return(t);
              }
              t = oncetd_1_0(w_1, t);
            }
            u_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_19)), not_null(q_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_19)), (ATerm) ATmakeAppl(sym_Build_1, u_19))));
          }
        }
      else
        {
          ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,b_20 = NULL,c_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_19;
          t = new_0_0(t);
          y_19 = t;
          t = new_0_0(t);
          b_20 = t;
          t = f_19;
          {
            static ATerm x_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((w_19 != NULL) && (w_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    w_19 = ATgetArgument(t, 0);
                  if(((x_19 != NULL) && (x_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    x_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_19);
              return(t);
            }
            t = oncetd_1_0(x_1, t);
          }
          c_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_20))))), (ATerm)ATmakeAppl(sym_Var_1, y_19), (ATerm) ATmakeAppl(sym_Op_2, term_f_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_19)), not_null(w_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm e_20 = NULL,j_20 = NULL;
  e_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
        t = e_20;
        t = new_0_0(t);
        n_20 = t;
        t = j_20;
        {
          static ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_20 != NULL) && (l_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_20 = ATgetArgument(t, 0);
                if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_20), l_20);
            return(t);
          }
          t = pat_td_1_0(y_1, t);
        }
        o_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_20))))));
        LocalPopChoice(h_34);
      }
    else
      {
        t = f_34;
        {
          ATerm j_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_20 = NULL,v_20 = NULL,w_20 = NULL;
              t = e_20;
              t = new_0_0(t);
              v_20 = t;
              t = j_20;
              {
                static ATerm z_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, v_20);
                  return(t);
                }
                t = pat_td_1_0(z_1, t);
              }
              w_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_20)), not_null(q_20))));
              LocalPopChoice(k_34);
            }
          else
            {
              t = j_34;
              {
                ATerm y_20 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
                t = e_20;
                t = new_0_0(t);
                e_21 = t;
                t = j_20;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_21 = ATgetArgument(t, 0);
                        if(((y_20 != NULL) && (y_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_21);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                f_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, e_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_20)), not_null(d_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm u_142 (ATerm), ATerm t)
{
  ATerm l_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_142(t);
      LocalPopChoice(p_34);
    }
  else
    {
      t = l_34;
      {
        ATerm s_26 = NULL,t_26 = NULL,v_26 = NULL,y_26 = NULL;
        t_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            v_26 = ATgetArgument(t, 0);
            y_26 = ATgetArgument(t, 1);
            {
              ATerm h_3 = NULL,n_3 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(t_26);
              h_3 = t;
              t = y_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  t = pat_td_1_0(u_142, t);
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
                y_26 = ATgetArgument(t, 1);
                {
                  ATerm u_34 = t;
                  int v_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_4 = NULL,x_4 = NULL,s_3 = NULL;
                      t = SSLgetAnnotations(t_26);
                      p_4 = t;
                      t = y_26;
                      t = pat_td_1_0(u_142, t);
                      x_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, v_26, x_4);
                      s_3 = t;
                      t = SSLsetAnnotations(s_3, p_4);
                      LocalPopChoice(v_34);
                    }
                  else
                    {
                      t = u_34;
                      {
                        ATerm t_5 = NULL,w_5 = NULL,t_3 = NULL;
                        t = SSLgetAnnotations(t_26);
                        t_5 = t;
                        t = v_26;
                        t = pat_td_1_0(u_142, t);
                        w_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, w_5, y_26);
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
                    y_26 = ATgetArgument(t, 1);
                    s_26 = ATgetArgument(t, 2);
                    {
                      ATerm q_6 = NULL,p_7 = NULL,v_3 = NULL;
                      t = SSLgetAnnotations(t_26);
                      q_6 = t;
                      t = s_26;
                      {
                        static ATerm c_2 (ATerm t)
                        {
                          t = pat_td_1_0(u_142, t);
                          return(t);
                        }
                        t = fetch_1_0(c_2, t);
                      }
                      p_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, v_26, y_26, p_7);
                      v_3 = t;
                      t = SSLsetAnnotations(v_3, q_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        v_26 = ATgetArgument(t, 0);
                        y_26 = ATgetArgument(t, 1);
                        s_26 = ATgetArgument(t, 2);
                        {
                          ATerm v_8 = NULL,d_9 = NULL,x_3 = NULL;
                          t = SSLgetAnnotations(t_26);
                          v_8 = t;
                          t = s_26;
                          {
                            static ATerm d_2 (ATerm t)
                            {
                              t = pat_td_1_0(u_142, t);
                              return(t);
                            }
                            t = fetch_1_0(d_2, t);
                          }
                          d_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, v_26, y_26, d_9);
                          x_3 = t;
                          t = SSLsetAnnotations(x_3, v_8);
                        }
                      }
                    else
                      {
                        ATerm o_9 = NULL,v_9 = NULL,y_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            v_26 = ATgetArgument(t, 0);
                            y_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_26);
                        o_9 = t;
                        t = y_26;
                        t = pat_td_1_0(u_142, t);
                        v_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, v_26, v_9);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, o_9);
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
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL,n_27 = NULL,p_27 = NULL,w_27 = NULL;
        t = k_27;
        t = new_0_0(t);
        p_27 = t;
        t = l_27;
        {
          static ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_27 = ATgetArgument(t, 0);
                if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
            return(t);
          }
          t = pat_td_1_0(e_2, t);
        }
        w_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_27)), not_null(m_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_27)))), (ATerm) ATmakeAppl(sym_Build_1, w_27)));
        LocalPopChoice(y_34);
      }
    else
      {
        t = w_34;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_27 = NULL,g_28 = NULL,h_28 = NULL;
              t = k_27;
              t = new_0_0(t);
              g_28 = t;
              t = l_27;
              {
                static ATerm f_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_28);
                  return(t);
                }
                t = pat_td_1_0(f_2, t);
              }
              h_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_28)))), (ATerm) ATmakeAppl(sym_Build_1, h_28)));
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
              {
                ATerm i_28 = NULL,j_28 = NULL,l_28 = NULL,n_28 = NULL;
                t = k_27;
                t = new_0_0(t);
                l_28 = t;
                t = l_27;
                {
                  static ATerm g_2 (ATerm t)
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
                  t = pat_td_1_0(g_2, t);
                }
                n_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_28), not_null(j_28), (ATerm) ATmakeAppl(sym_Var_1, l_28))), (ATerm) ATmakeAppl(sym_Build_1, n_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_35 = t;
  if((PushChoice() == 0))
    {
      ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,d_8 = NULL;
      e_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_29);
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_29);
      d_8 = t;
      t = SSLsetAnnotations(d_8, c_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_35;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm n_2 (ATerm t)
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
static ATerm o_2 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,r_29 = NULL,s_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(match_cons(j_35, sym__2))
        {
          l_29 = ATgetArgument(j_35, 0);
          m_29 = ATgetArgument(j_35, 1);
        }
      else
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(match_cons(k_35, sym__2))
          {
            r_29 = ATgetArgument(k_35, 0);
            s_29 = ATgetArgument(k_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_29), l_29), (ATerm) ATinsert(CheckATermList(s_29), m_29));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_29 = ATgetFirst((ATermList) t);
      u_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_29, u_29);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(match_cons(l_35, sym__2))
        {
          v_29 = ATgetArgument(l_35, 0);
          w_29 = ATgetArgument(l_35, 1);
        }
      else
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(match_cons(n_35, sym__2))
          {
            x_29 = ATgetArgument(n_35, 0);
            y_29 = ATgetArgument(n_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_29), v_29), (ATerm) ATinsert(CheckATermList(y_29), w_29));
  return(t);
}
static ATerm d_12 (ATerm o_72, ATerm p_72, ATerm q_72, ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,g_8 = NULL;
  t = q_72;
  t = fetch_1_0(i_2, t);
  t = q_72;
  t = genzip_4_0(m_2, n_2, o_2, LiftPrimArg_0_0, t);
  b_29 = t;
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  w_28 = t;
  t = x_28;
  t = concat_0_0(t);
  z_28 = t;
  t = y_28;
  t = genzip_4_0(p_2, q_2, r_2, _id, t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
  g_8 = t;
  t = SSLsetAnnotations(g_8, w_28);
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(match_cons(p_35, sym__2))
          {
            q_28 = ATgetArgument(p_35, 0);
            r_28 = ATgetArgument(p_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_28), (ATerm) ATmakeAppl(sym_CallT_3, o_72, p_72, r_28)));
  return(t);
}
static ATerm a_31 (ATerm f_30, ATerm t)
{
  ATerm l_30 = NULL;
  t = f_30;
  {
    ATerm q_35 = t;
    if((PushChoice() == 0))
      {
        ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,c_9 = NULL;
        o_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_30);
        m_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_30);
        c_9 = t;
        t = SSLsetAnnotations(c_9, m_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_35;
      }
  }
  t = new_0_0(t);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_30)))), (ATerm) ATmakeAppl(sym_Var_1, l_30)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_30 = ATgetArgument(t, 0);
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_31(t_30, t);
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATmakeAppl(sym_Var_1, u_30)));
          }
      }
    }
  else
    {
      t = a_31(t_30, t);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm v_35 = t;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL,c_11 = NULL,d_11 = NULL,y_10 = NULL;
      d_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_11);
      z_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_11);
      y_10 = t;
      t = SSLsetAnnotations(y_10, z_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_35;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_11 = NULL,k_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_11 = ATgetFirst((ATermList) t);
      k_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_11, k_11);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(match_cons(w_35, sym__2))
        {
          l_11 = ATgetArgument(w_35, 0);
          m_11 = ATgetArgument(w_35, 1);
        }
      else
        _fail(t);
      {
        ATerm y_35 = ATgetArgument(t, 1);
        if(match_cons(y_35, sym__2))
          {
            n_11 = ATgetArgument(y_35, 0);
            o_11 = ATgetArgument(y_35, 1);
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
  t = term_g_35;
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
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if(match_cons(z_35, sym__2))
        {
          u_11 = ATgetArgument(z_35, 0);
          v_11 = ATgetArgument(z_35, 1);
        }
      else
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(match_cons(h_36, sym__2))
          {
            w_11 = ATgetArgument(h_36, 0);
            x_11 = ATgetArgument(h_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_11), u_11), (ATerm) ATinsert(CheckATermList(x_11), v_11));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm i_36 = t;
  if((PushChoice() == 0))
    {
      ATerm n_14 = NULL,q_14 = NULL,r_14 = NULL,b_11 = NULL;
      r_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_14);
      n_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_14);
      b_11 = t;
      t = SSLsetAnnotations(b_11, n_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_36;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
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
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(match_cons(j_36, sym__2))
        {
          e_15 = ATgetArgument(j_36, 0);
          f_15 = ATgetArgument(j_36, 1);
        }
      else
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(match_cons(k_36, sym__2))
          {
            g_15 = ATgetArgument(k_36, 0);
            h_15 = ATgetArgument(k_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_15), e_15), (ATerm) ATinsert(CheckATermList(h_15), f_15));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_15 = ATgetFirst((ATermList) t);
      l_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_15, l_15);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      if(match_cons(l_36, sym__2))
        {
          m_15 = ATgetArgument(l_36, 0);
          n_15 = ATgetArgument(l_36, 1);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(match_cons(n_36, sym__2))
          {
            o_15 = ATgetArgument(n_36, 0);
            z_15 = ATgetArgument(n_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_15), m_15), (ATerm) ATinsert(CheckATermList(z_15), n_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm b_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
      b_36 = ATgetArgument(t, 2);
      {
        ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,a_11 = NULL;
        t = b_36;
        t = fetch_1_0(s_2, t);
        t = b_36;
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
        a_11 = t;
        t = SSLsetAnnotations(a_11, s_10);
        if(match_cons(t, sym__2))
          {
            p_10 = ATgetArgument(t, 0);
            {
              ATerm p_36 = ATgetArgument(t, 1);
              if(match_cons(p_36, sym__2))
                {
                  q_10 = ATgetArgument(p_36, 0);
                  r_10 = ATgetArgument(p_36, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_10), (ATerm) ATmakeAppl(sym_PrimT_3, e_36, f_36, r_10)));
      }
    }
  else
    {
      ATerm s_12 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,d_13 = NULL,e_13 = NULL,g_13 = NULL,i_13 = NULL,l_14 = NULL,e_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          e_36 = ATgetArgument(t, 0);
          f_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_36;
      t = fetch_1_0(c_3, t);
      t = f_36;
      t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
      l_14 = t;
      if(match_cons(t, sym__2))
        {
          d_13 = ATgetArgument(t, 0);
          e_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_14);
      z_12 = t;
      t = d_13;
      t = concat_0_0(t);
      g_13 = t;
      t = e_13;
      t = genzip_4_0(g_3, i_3, k_3, _id, t);
      i_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_13, i_13);
      e_11 = t;
      t = SSLsetAnnotations(e_11, z_12);
      if(match_cons(t, sym__2))
        {
          s_12 = ATgetArgument(t, 0);
          {
            ATerm q_36 = ATgetArgument(t, 1);
            if(match_cons(q_36, sym__2))
              {
                w_12 = ATgetArgument(q_36, 0);
                x_12 = ATgetArgument(q_36, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_12), (ATerm) ATmakeAppl(sym_PrimT_3, e_36, (ATerm)ATempty, x_12)));
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm d_38 = NULL,m_38 = NULL,p_38 = NULL,q_38 = NULL;
  q_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      d_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
      p_38 = ATgetArgument(t, 2);
      {
        ATerm y_16 = NULL,s_21 = NULL;
        t = SSLgetAnnotations(q_38);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, d_38, m_38, p_38);
        s_21 = t;
        t = SSLsetAnnotations(s_21, y_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = q_38;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm r_36 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_36;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,y_39 = NULL,a_40 = NULL;
  v_39 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
      u_39 = ATgetArgument(t, 2);
      {
        ATerm f_18 = NULL,u_21 = NULL;
        t = SSLgetAnnotations(v_39);
        f_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_39, a_40, u_39);
        u_21 = t;
        t = SSLsetAnnotations(u_21, f_18);
      }
    }
  else
    {
      ATerm l_19 = NULL,v_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          y_39 = ATgetArgument(t, 0);
          a_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_39);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, y_39, a_40);
      v_21 = t;
      t = SSLsetAnnotations(v_21, l_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm s_36 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_36;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_41;
  if(match_cons(t, sym_StratRule_3))
    {
      c_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
      e_41 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_41), (ATerm) ATmakeAppl(sym_Where_1, e_41)), c_41));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          c_41 = ATgetArgument(t, 0);
          d_41 = ATgetArgument(t, 1);
          e_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_41;
      t = pureterm_0_0(t);
      t = d_41;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, d_41)), (ATerm) ATmakeAppl(sym_Where_1, e_41)), (ATerm) ATmakeAppl(sym_Match_1, c_41)));
    }
  return(t);
}
static ATerm e_12 (ATerm b_68, ATerm c_68, ATerm d_68, ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  t = new_0_0(t);
  p_41 = t;
  t = b_68;
  {
    static ATerm p_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_36 = ATgetArgument(t, 0);
          if(match_cons(t_36, sym_Var_1))
            {
              if(((o_41 != NULL) && (o_41 != ATgetArgument(t_36, 0))))
                _fail(ATgetArgument(t_36, 0));
              else
                o_41 = ATgetArgument(t_36, 0);
            }
          else
            _fail(t);
          if(((m_41 != NULL) && (m_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_41 = ATgetArgument(t, 1);
          {
            ATerm v_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_41);
      return(t);
    }
    t = oncetd_1_0(p_3, t);
  }
  q_41 = t;
  t = c_68;
  {
    static ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm w_36 = ATgetArgument(t, 0);
          if(match_cons(w_36, sym_Var_1))
            {
              if(((o_41 != NULL) && (o_41 != ATgetArgument(w_36, 0))))
                _fail(ATgetArgument(w_36, 0));
              else
                o_41 = ATgetArgument(w_36, 0);
            }
          else
            _fail(t);
          if(((n_41 != NULL) && (n_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_41 = ATgetArgument(t, 1);
          {
            ATerm y_36 = ATgetArgument(t, 2);
            if(match_cons(y_36, sym_CallT_3))
              {
                if(((l_41 != NULL) && (l_41 != ATgetArgument(y_36, 0))))
                  _fail(ATgetArgument(y_36, 0));
                else
                  l_41 = ATgetArgument(y_36, 0);
                {
                  ATerm z_36 = ATgetArgument(y_36, 1);
                  if(((ATgetType(z_36) != AT_LIST) || !(ATisEmpty(z_36))))
                    _fail(t);
                }
                {
                  ATerm a_37 = ATgetArgument(y_36, 2);
                  if(((ATgetType(a_37) != AT_LIST) || !(ATisEmpty(a_37))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_41);
      return(t);
    }
    t = oncetd_1_0(r_3, t);
  }
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_41), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, q_41, r_41, (ATerm) ATmakeAppl(sym_Seq_2, d_68, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(l_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_41), not_null(n_41), term_d_26))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_41)), (ATerm) ATmakeAppl(sym_Var_1, p_41))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
          q_42 = t;
          if(match_cons(t, sym_SRule_1))
            {
              r_42 = ATgetArgument(t, 0);
              t = r_42;
              if(match_cons(t, sym_Rule_3))
                {
                  l_42 = ATgetArgument(t, 0);
                  o_42 = ATgetArgument(t, 1);
                  p_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_42;
              t = e_12(l_42, o_42, p_42, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm r_20 = NULL,u_20 = NULL,c_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  r_42 = ATgetArgument(t, 0);
                  s_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_42);
              r_20 = t;
              t = s_42;
              t = desugarRule_0_0(t);
              u_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, r_42, u_20);
              c_22 = t;
              t = SSLsetAnnotations(c_22, r_20);
            }
          LocalPopChoice(e_37);
        }
      else
        {
          t = d_37;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
    }
  t = repeat_2_0(w_3, _id, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_43 = NULL,a_44 = NULL,c_44 = NULL,d_44 = NULL;
            x_43 = t;
            if(match_cons(t, sym_CallT_3))
              {
                a_44 = ATgetArgument(t, 0);
                c_44 = ATgetArgument(t, 1);
                d_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_43;
            t = d_12(a_44, c_44, d_44, t);
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            {
              ATerm l_37 = t;
              int m_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(m_37);
                }
              else
                {
                  t = l_37;
                  {
                    ATerm n_37 = t;
                    int p_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(p_37);
                      }
                    else
                      {
                        t = n_37;
                        {
                          ATerm q_37 = t;
                          int r_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_37 = t;
                              int t_37 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_44;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      y_44 = ATgetArgument(t, 0);
                                      t = y_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          y_44 = ATgetArgument(t, 0);
                                          z_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, y_44, z_44);
                                    }
                                  LocalPopChoice(t_37);
                                }
                              else
                                {
                                  t = s_37;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(r_37);
                            }
                          else
                            {
                              t = q_37;
                              {
                                ATerm u_37 = t;
                                int v_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(v_37);
                                  }
                                else
                                  {
                                    t = u_37;
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
  ATerm e_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_47 = ATgetArgument(t, 0);
      t = e_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_47 = ATgetArgument(t, 0);
          {
            ATerm w_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_47;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_47), (ATerm) ATempty);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm t_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_47 = ATgetArgument(t, 0);
      t = t_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_47 = ATgetArgument(t, 0);
          {
            ATerm y_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_47;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, t_47);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_47);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
            {
              ATerm e_38 = t;
              int f_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_48 = NULL,c_48 = NULL,m_48 = NULL,n_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_48 = ATgetArgument(t, 0);
                      c_48 = ATgetArgument(t, 1);
                      m_48 = ATgetArgument(t, 2);
                      n_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_48;
                  t = map_1_0(d_4, t);
                  LocalPopChoice(f_38);
                }
              else
                {
                  t = e_38;
                  {
                    ATerm k_38 = t;
                    int l_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_38);
                      }
                    else
                      {
                        t = k_38;
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
  ATerm b_49 = NULL;
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_49 = ATgetArgument(t, 0);
          {
            ATerm r_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_38);
      t = b_49;
    }
  else
    {
      t = n_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_49;
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
  ATerm g_49 = NULL;
  ATerm s_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_49 = ATgetArgument(t, 0);
          {
            ATerm v_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_38);
      t = g_49;
    }
  else
    {
      t = s_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_49;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_49);
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
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
            {
              ATerm a_39 = t;
              int b_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_50 = ATgetArgument(t, 0);
                      d_50 = ATgetArgument(t, 1);
                      f_50 = ATgetArgument(t, 2);
                      g_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_50;
                  t = map_1_0(r_4, t);
                  LocalPopChoice(b_39);
                }
              else
                {
                  t = a_39;
                  {
                    ATerm c_39 = t;
                    int f_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_39);
                      }
                    else
                      {
                        t = c_39;
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
  ATerm p_50 = NULL;
  ATerm g_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_50 = ATgetArgument(t, 0);
          {
            ATerm k_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_39);
      t = p_50;
    }
  else
    {
      t = g_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_50;
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
  ATerm v_50 = NULL;
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_50 = ATgetArgument(t, 0);
          {
            ATerm o_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      t = v_50;
    }
  else
    {
      t = l_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_50;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm z_50 = NULL;
  z_50 = t;
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_51 = NULL,h_21 = NULL,j_21 = NULL,e_22 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            g_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_50);
        h_21 = t;
        t = g_51;
        t = ContextVar_0_0(t);
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, j_21);
        e_22 = t;
        t = SSLsetAnnotations(e_22, h_21);
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, z_50);
  return(t);
}
static ATerm f_12 (ATerm k_144 (ATerm), ATerm e_81, ATerm b_81, ATerm c_81, ATerm l_81, ATerm p_81, ATerm q_81, ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,s_46 = NULL,t_46 = NULL,z_46 = NULL,a_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_81, term_n_29);
  {
    ATerm r_39 = t;
    if((PushChoice() == 0))
      {
        ATerm b_47 = NULL;
        if(match_cons(t, sym__2))
          {
            b_47 = ATgetArgument(t, 0);
            if((b_47 != ATgetArgument(t, 1)))
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
        t = r_39;
      }
  }
  t = term_s_39;
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_39, e_81);
  t = w_13(a_47, e_81, t);
  z_45 = t;
  t = term_t_39;
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_39, e_81);
  t = w_13(z_46, e_81, t);
  a_46 = t;
  t = new_0_0(t);
  f_46 = t;
  t = b_81;
  t = map_1_0(z_3, t);
  g_46 = t;
  t = c_81;
  t = map_1_0(a_4, t);
  h_46 = t;
  t = new_0_0(t);
  i_46 = t;
  t = l_81;
  t = dummify_0_0(t);
  k_46 = t;
  {
    ATerm z_39 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_46;
        if((l_81 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, i_46);
        LocalPopChoice(b_40);
      }
    else
      {
        t = z_39;
        t = k_46;
      }
  }
  j_46 = t;
  t = k_46;
  t = free_vars_3_0(b_4, c_4, tboundin_3_0, t);
  t = map_1_0(h_4, t);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_81, q_81);
  t = free_vars_3_0(j_4, k_4, tboundin_3_0, t);
  t = filter_1_0(u_4, t);
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
  t = diff_0_0(t);
  p_46 = t;
  t = new_0_0(t);
  s_46 = t;
  t = e_81;
  t = k_144(t);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_46, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_30, (ATerm) ATinsert(CheckATermList(p_46), (ATerm) ATmakeAppl(sym_Str_1, s_46)))), k_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, a_46, b_81, c_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_30, (ATerm) ATinsert(CheckATermList(p_46), (ATerm) ATmakeAppl(sym_Str_1, s_46)))), l_81)), p_81, (ATerm) ATmakeAppl(sym_Seq_2, term_r_40, q_81)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_45, b_81, c_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_46), l_81), (ATerm)ATmakeAppl(sym_Var_1, f_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_81)))), j_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_46), g_46, h_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_40), (ATerm) ATmakeAppl(sym_Var_1, i_46)))))), (ATerm) ATmakeAppl(sym_Var_1, f_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, e_81, b_81, c_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_46), l_81), p_81, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_81)))), j_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_30, (ATerm) ATinsert(CheckATermList(p_46), (ATerm) ATmakeAppl(sym_Str_1, s_46)))), term_d_40))), q_81)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm t_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
      x_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          y_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
          i_22 = ATgetArgument(t, 2);
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
      t = f_12(w_4, y_21, z_21, i_22, k_22, l_22, m_22, t);
      LocalPopChoice(v_40);
    }
  else
    {
      t = t_40;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(a_5, t);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_22))));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_22))));
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_22 = ATgetFirst((ATermList) t);
      w_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_22, w_22);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,e_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_41 = ATgetArgument(t, 0);
      if(match_cons(g_41, sym__2))
        {
          b_23 = ATgetArgument(g_41, 0);
          c_23 = ATgetArgument(g_41, 1);
        }
      else
        _fail(t);
      {
        ATerm h_41 = ATgetArgument(t, 1);
        if(match_cons(h_41, sym__2))
          {
            e_23 = ATgetArgument(h_41, 0);
            g_23 = ATgetArgument(h_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_23), b_23), (ATerm) ATinsert(CheckATermList(g_23), c_23));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,a_24 = NULL,d_24 = NULL,g_24 = NULL;
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
          a_24 = ATgetArgument(t, 0);
          d_24 = ATgetArgument(t, 1);
          g_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_23;
      t = f_12(h_5, v_23, w_23, x_23, a_24, d_24, g_24, t);
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(k_5, t);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_25))));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_25))));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm g_25 = NULL,i_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_25 = ATgetFirst((ATermList) t);
      i_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_25, i_25);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      if(match_cons(y_41, sym__2))
        {
          j_25 = ATgetArgument(y_41, 0);
          k_25 = ATgetArgument(y_41, 1);
        }
      else
        _fail(t);
      {
        ATerm a_42 = ATgetArgument(t, 1);
        if(match_cons(a_42, sym__2))
          {
            l_25 = ATgetArgument(a_42, 0);
            m_25 = ATgetArgument(a_42, 1);
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
  ATerm d_58 = NULL;
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_58))));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_58 = ATgetFirst((ATermList) t);
      g_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_58, g_58);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_42 = ATgetArgument(t, 0);
      if(match_cons(g_42, sym__2))
        {
          h_58 = ATgetArgument(g_42, 0);
          i_58 = ATgetArgument(g_42, 1);
        }
      else
        _fail(t);
      {
        ATerm h_42 = ATgetArgument(t, 1);
        if(match_cons(h_42, sym__2))
          {
            j_58 = ATgetArgument(h_42, 0);
            k_58 = ATgetArgument(h_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_58), h_58), (ATerm) ATinsert(CheckATermList(k_58), i_58));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_58))));
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm q_58 = NULL,s_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_58 = ATgetFirst((ATermList) t);
      s_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_58, s_58);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(match_cons(k_42, sym__2))
        {
          u_58 = ATgetArgument(k_42, 0);
          v_58 = ATgetArgument(k_42, 1);
        }
      else
        _fail(t);
      {
        ATerm m_42 = ATgetArgument(t, 1);
        if(match_cons(m_42, sym__2))
          {
            w_58 = ATgetArgument(m_42, 0);
            x_58 = ATgetArgument(m_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_58), u_58), (ATerm) ATinsert(CheckATermList(x_58), v_58));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm y_57 = NULL,b_58 = NULL;
  y_57 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      b_58 = ATgetArgument(t, 0);
      {
        ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,w_21 = NULL,g_22 = NULL;
        t = b_58;
        t = map_1_0(v_4, t);
        t = genzip_4_0(c_5, d_5, e_5, _id, t);
        w_21 = t;
        if(match_cons(t, sym__2))
          {
            p_21 = ATgetArgument(t, 0);
            q_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_21);
        o_21 = t;
        t = q_21;
        t = concat_0_0(t);
        r_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_21, r_21);
        g_22 = t;
        t = SSLsetAnnotations(g_22, o_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          b_58 = ATgetArgument(t, 0);
          {
            ATerm n_23 = NULL,o_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,h_22 = NULL;
            t = b_58;
            t = map_1_0(f_5, t);
            t = genzip_4_0(n_5, p_5, q_5, _id, t);
            t_23 = t;
            if(match_cons(t, sym__2))
              {
                o_23 = ATgetArgument(t, 0);
                r_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_23);
            n_23 = t;
            t = r_23;
            t = concat_0_0(t);
            s_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_23, s_23);
            h_22 = t;
            t = SSLsetAnnotations(h_22, n_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              b_58 = ATgetArgument(t, 0);
              t = b_58;
              t = map_1_0(r_5, t);
              t = genzip_4_0(v_5, x_5, y_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_58 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_58;
              t = map_1_0(z_5, t);
              t = genzip_4_0(f_6, g_6, h_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_n_42;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  static ATerm a_60 (ATerm t)
  {
    static ATerm i_6 (ATerm t)
    {
      ATerm t_42 = t;
      int u_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_144(t);
          LocalPopChoice(u_42);
        }
      else
        {
          t = t_42;
          {
            ATerm j_59 = NULL,m_59 = NULL,q_59 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                j_59 = ATgetArgument(t, 0);
                m_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_59, m_59);
            {
              static ATerm k_6 (ATerm t)
              {
                t = j_59;
                t = DeclareContextVars_0_0(t);
                t = m_59;
                t = a_60(t);
                if(((q_59 != NULL) && (q_59 != t)))
                  _fail(t);
                else
                  q_59 = t;
                return(t);
              }
              t = scope_2_0(j_6, k_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_59, not_null(q_59));
          }
        }
      return(t);
    }
    t = oncetd_1_0(i_6, t);
    return(t);
  }
  t = a_60(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm h_12 (ATerm e_82, ATerm d_82, ATerm t)
{
  ATerm f_60 = NULL,i_60 = NULL,s_60 = NULL;
  static ATerm m_6 (ATerm t)
  {
    t = e_82;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = e_82;
    {
      static ATerm n_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((i_60 != NULL) && (i_60 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              i_60 = ATgetArgument(t, 0);
            if(((f_60 != NULL) && (f_60 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              f_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, i_60);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(n_6, t);
    }
    if(((s_60 != NULL) && (s_60 != t)))
      _fail(t);
    else
      s_60 = t;
    return(t);
  }
  t = scope_2_0(l_6, m_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_60)), not_null(s_60)), d_82);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,g_61 = NULL,h_61 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      g_61 = ATgetArgument(t, 0);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_61 = ATgetFirst((ATermList) t);
      c_61 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_w_42, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, c_61, h_61)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_61))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_61;
    }
  return(t);
}
static ATerm o_62 (ATerm b_62, ATerm t)
{
  t = SSL_is_string(b_62);
  return(t);
}
static ATerm r_62 (ATerm f_62, ATerm t)
{
  ATerm g_62 = NULL,j_62 = NULL,k_62 = NULL;
  t = term_x_42;
  j_62 = t;
  t = (ATerm) ATinsert(ATempty, term_y_42);
  k_62 = t;
  t = SSL_printnl(j_62, k_62);
  t = f_62;
  t = debug_1_0(o_6, t);
  t = term_z_42;
  g_62 = t;
  t = SSL_exit(g_62);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL;
  m_62 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      l_62 = ATgetArgument(t, 0);
      {
        ATerm c_43 = t;
        int d_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_62(m_62, t);
            LocalPopChoice(d_43);
          }
        else
          {
            t = c_43;
            t = l_62;
          }
      }
    }
  else
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_62(m_62, t);
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          t = r_62(m_62, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      a_63 = ATgetArgument(t, 0);
      f_63 = ATgetArgument(t, 1);
      t = a_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          b_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_63;
      if(match_cons(t, sym_RDecT_3))
        {
          c_63 = ATgetArgument(t, 0);
          d_63 = ATgetArgument(t, 1);
          e_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, c_63, d_63, e_63, (ATerm) ATmakeAppl(sym_Rule_3, f_63, term_n_29, term_d_26));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          a_63 = ATgetArgument(t, 0);
          f_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          b_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_63;
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
static ATerm i_65 (ATerm x_63, ATerm t)
{
  ATerm j_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  t = x_63;
  if(match_cons(t, sym_GenDynRules_1))
    {
      q_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_64;
  t = filter_1_0(p_6, t);
  r_64 = t;
  t = x_63;
  if(match_cons(t, sym_GenDynRules_1))
    {
      j_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_64;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, r_64), (ATerm) ATmakeAppl(sym_DynamicRules_1, p_64));
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm i_43 = ATgetArgument(t, 0);
      if(match_cons(i_43, sym_DynRuleId_1))
        {
          ATerm j_43 = ATgetArgument(i_43, 0);
          if(match_cons(j_43, sym_RDecT_3))
            {
              y_64 = ATgetArgument(j_43, 0);
              z_64 = ATgetArgument(j_43, 1);
              a_65 = ATgetArgument(j_43, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      b_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, y_64, z_64, a_65, b_65);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      ATerm m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL;
  d_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      c_65 = ATgetArgument(t, 0);
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_25 = NULL;
            t = c_65;
            {
              ATerm p_43 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(r_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = p_43;
                }
            }
            t = c_65;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            x_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, x_25);
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            t = i_65(d_65, t);
          }
      }
    }
  else
    {
      t = i_65(d_65, t);
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_65 = NULL;
      o_65 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm t_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_65;
      LocalPopChoice(s_43);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = r_43;
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_65 = NULL;
            r_65 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm y_43 = ATgetArgument(t, 0);
                ATerm z_43 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_65;
            LocalPopChoice(v_43);
            {
              ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  s_65 = ATgetArgument(t, 0);
                  t_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_65;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              u_65 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, u_65, t_65);
            }
          }
        else
          {
            t = u_43;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(t_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = Cons_2_0(v_6, w_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,r_67 = NULL,s_67 = NULL,z_22 = NULL;
  s_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_67);
  l_67 = t;
  t = m_67;
  t = topdown_1_0(y_6, t);
  t = listtd_1_0(z_6, t);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_67);
  z_22 = t;
  t = SSLsetAnnotations(z_22, l_67);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm b_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(e_44);
    }
  else
    {
      t = b_44;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = repeat_2_0(c_7, _id, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_67 = ATgetFirst((ATermList) t);
      w_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_12(v_67, w_67, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,h_67 = NULL,i_67 = NULL,d_23 = NULL,a_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  i_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_67);
  p_66 = t;
  t = q_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_66 = ATgetFirst((ATermList) t);
      t_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_66);
  r_66 = t;
  t = t_66;
  t = Cons_2_0(_id, u_6, t);
  u_66 = t;
  t = (ATerm) ATinsert(CheckATermList(u_66), s_66);
  a_23 = t;
  t = SSLsetAnnotations(a_23, r_66);
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_67);
  d_23 = t;
  t = SSLsetAnnotations(d_23, p_66);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_f_44;
  return(t);
}
ATerm next_counter_0_0 (ATerm t)
{
  ATerm n_68 = NULL,r_68 = NULL,s_68 = NULL,x_68 = NULL,y_68 = NULL;
  n_68 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_68 = NULL,n_26 = NULL;
        t = term_f_44;
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_44, n_68);
        t = l_13(n_26, n_68, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_44 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_44) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            z_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_68;
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        {
          ATerm a_69 = NULL;
          t = term_m_44;
          a_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_68, term_m_44);
          t = m_13(h_7, n_68, a_69, t);
          t = (ATerm) ATmakeAppl(sym__2, n_68, term_l_44);
        }
      }
  }
  x_68 = t;
  t = term_z_42;
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_68, term_z_42);
  t = z_13(x_68, y_68, t);
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_44, r_68);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_68, (ATerm) ATmakeAppl(sym_Defined_2, term_k_44, r_68));
  t = m_13(i_7, n_68, s_68, t);
  t = r_68;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_n_44;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm b_69 = NULL,z_69 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
  z_69 = t;
  t = term_p_44;
  t = next_counter_0_0(t);
  b_69 = t;
  t = SSL_int_to_string(b_69);
  d_70 = t;
  t = term_q_44;
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_44, d_70);
  t = w_13(f_70, d_70, t);
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_44, c_70);
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_69, (ATerm) ATmakeAppl(sym_Defined_2, term_v_44, c_70));
  t = m_13(j_7, z_69, e_70, t);
  t = c_70;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm q_144 (ATerm), ATerm r_144 (ATerm), ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,c_89 = NULL;
  y_88 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_88 = ATgetArgument(t, 0);
      {
        ATerm a_45 = t;
        int b_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_26 = NULL,w_26 = NULL,x_26 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,b_24 = NULL,z_23 = NULL;
            t = SSLgetAnnotations(y_88);
            r_26 = t;
            t = z_88;
            if(match_cons(t, sym_ListVar_1))
              {
                x_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_88);
            w_26 = t;
            t = x_26;
            t = q_144(t);
            e_27 = t;
            t = term_c_45;
            f_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_27, term_c_45);
            t = w_13(e_27, f_27, t);
            c_27 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, c_27);
            z_23 = t;
            t = SSLsetAnnotations(z_23, w_26);
            d_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, d_27);
            b_24 = t;
            t = SSLsetAnnotations(b_24, r_26);
            LocalPopChoice(b_45);
          }
        else
          {
            t = a_45;
            {
              ATerm u_27 = NULL,y_27 = NULL,c_24 = NULL;
              t = SSLgetAnnotations(y_88);
              u_27 = t;
              t = z_88;
              t = q_144(t);
              y_27 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, y_27);
              c_24 = t;
              t = SSLsetAnnotations(c_24, u_27);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          z_88 = ATgetArgument(t, 0);
          {
            ATerm f_28 = NULL,o_28 = NULL,e_24 = NULL;
            t = SSLgetAnnotations(y_88);
            f_28 = t;
            t = z_88;
            t = q_144(t);
            o_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, o_28);
            e_24 = t;
            t = SSLsetAnnotations(e_24, f_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              z_88 = ATgetArgument(t, 0);
              c_89 = ATgetArgument(t, 1);
              {
                ATerm h_29 = NULL,o_29 = NULL,f_24 = NULL;
                t = SSLgetAnnotations(y_88);
                h_29 = t;
                t = z_88;
                t = q_144(t);
                o_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, o_29, c_89);
                f_24 = t;
                t = SSLsetAnnotations(f_24, h_29);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  z_88 = ATgetArgument(t, 0);
                  {
                    ATerm e_30 = NULL,h_30 = NULL,i_24 = NULL;
                    t = SSLgetAnnotations(y_88);
                    e_30 = t;
                    t = z_88;
                    t = q_144(t);
                    h_30 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_30);
                    i_24 = t;
                    t = SSLsetAnnotations(i_24, e_30);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      z_88 = ATgetArgument(t, 0);
                      c_89 = ATgetArgument(t, 1);
                      {
                        ATerm d_31 = NULL,g_31 = NULL,h_31 = NULL,j_24 = NULL;
                        t = SSLgetAnnotations(y_88);
                        d_31 = t;
                        t = z_88;
                        t = q_144(t);
                        g_31 = t;
                        t = c_89;
                        t = r_144(t);
                        h_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, g_31, h_31);
                        j_24 = t;
                        t = SSLsetAnnotations(j_24, d_31);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          z_88 = ATgetArgument(t, 0);
                          c_89 = ATgetArgument(t, 1);
                          {
                            ATerm v_31 = NULL,z_31 = NULL,g_32 = NULL,r_24 = NULL;
                            t = SSLgetAnnotations(y_88);
                            v_31 = t;
                            t = z_88;
                            t = q_144(t);
                            z_31 = t;
                            t = c_89;
                            t = r_144(t);
                            g_32 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, z_31, g_32);
                            r_24 = t;
                            t = SSLsetAnnotations(r_24, v_31);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              z_88 = ATgetArgument(t, 0);
                              c_89 = ATgetArgument(t, 1);
                              w_88 = ATgetArgument(t, 2);
                              {
                                ATerm b_33 = NULL,j_33 = NULL,k_33 = NULL,n_33 = NULL,s_24 = NULL;
                                t = SSLgetAnnotations(y_88);
                                b_33 = t;
                                t = z_88;
                                t = q_144(t);
                                j_33 = t;
                                t = c_89;
                                t = r_144(t);
                                k_33 = t;
                                t = w_88;
                                t = r_144(t);
                                n_33 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, j_33, k_33, n_33);
                                s_24 = t;
                                t = SSLsetAnnotations(s_24, b_33);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  z_88 = ATgetArgument(t, 0);
                                  c_89 = ATgetArgument(t, 1);
                                  w_88 = ATgetArgument(t, 2);
                                  x_88 = ATgetArgument(t, 3);
                                  {
                                    ATerm g_34 = NULL,m_34 = NULL,o_34 = NULL,s_34 = NULL,t_34 = NULL,v_24 = NULL;
                                    t = SSLgetAnnotations(y_88);
                                    g_34 = t;
                                    t = z_88;
                                    t = q_144(t);
                                    m_34 = t;
                                    t = c_89;
                                    t = r_144(t);
                                    o_34 = t;
                                    t = w_88;
                                    t = r_144(t);
                                    s_34 = t;
                                    t = x_88;
                                    t = r_144(t);
                                    t_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_34, o_34, s_34, t_34);
                                    v_24 = t;
                                    t = SSLsetAnnotations(v_24, g_34);
                                  }
                                }
                              else
                                {
                                  ATerm x_35 = NULL,a_36 = NULL,c_36 = NULL,w_24 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      z_88 = ATgetArgument(t, 0);
                                      c_89 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(y_88);
                                  x_35 = t;
                                  t = z_88;
                                  t = map_1_0(q_144, t);
                                  a_36 = t;
                                  t = c_89;
                                  t = r_144(t);
                                  c_36 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_36, c_36);
                                  w_24 = t;
                                  t = SSLsetAnnotations(w_24, x_35);
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
static ATerm k_7 (ATerm t)
{
  t = term_n_44;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_90 = NULL,u_36 = NULL,x_36 = NULL;
      q_90 = t;
      t = term_n_44;
      x_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_n_44, q_90);
      t = l_13(x_36, q_90, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm j_45 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) j_45) != ATmakeSymbol("q_0", 0, ATtrue)))
            _fail(t);
          u_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_36;
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
      t = NewNumberedVar_0_0(t);
    }
  return(t);
}
ATerm dr_rename_vars_0_0 (ATerm t)
{
  static ATerm l_7 (ATerm t)
  {
    ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL;
    static ATerm r_90 (ATerm t)
    {
      ATerm k_45 = t;
      int l_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(n_7, r_90, t);
          LocalPopChoice(l_45);
        }
      else
        {
          t = k_45;
          t = SRTS_all(r_90, t);
        }
      return(t);
    }
    f_90 = t;
    t = term_p_44;
    g_90 = t;
    t = term_m_44;
    h_90 = t;
    t = term_m_45;
    t = m_13(m_7, g_90, h_90, t);
    t = f_90;
    t = r_90(t);
    return(t);
  }
  t = scope_2_0(k_7, l_7, t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm f_91 = NULL;
  f_91 = t;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_37 = NULL;
        t = term_n_42;
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_42, f_91);
        t = l_13(o_37, f_91, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm q_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_45) != ATmakeSymbol("t_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = f_91;
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
        {
          ATerm x_37 = NULL;
          t = term_n_42;
          x_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_42, f_91);
          t = l_13(x_37, f_91, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm r_45 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_45) != ATmakeSymbol("n_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = f_91;
        }
      }
  }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
  o_92 = t;
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_45);
        t = o_92;
        {
          ATerm w_45 = t;
          if((PushChoice() == 0))
            {
              ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,z_25 = NULL;
              j_38 = t;
              if(match_cons(t, sym_Var_1))
                {
                  h_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_38);
              g_38 = t;
              t = h_38;
              {
                ATerm x_45 = t;
                int y_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(y_45);
                  }
                else
                  {
                    t = x_45;
                    {
                      ATerm t_38 = NULL,h_39 = NULL,j_39 = NULL,w_25 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          t_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(h_38);
                      h_39 = t;
                      t = t_38;
                      t = ContextVar_0_0(t);
                      j_39 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, j_39);
                      w_25 = t;
                      t = SSLsetAnnotations(w_25, h_39);
                    }
                  }
              }
              i_38 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, i_38);
              z_25 = t;
              t = SSLsetAnnotations(z_25, g_38);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_45;
            }
        }
        t = term_u_31;
      }
    else
      {
        t = s_45;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_u_31;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                p_92 = ATgetArgument(t, 0);
                {
                  ATerm z_92 = NULL;
                  t = p_92;
                  t = free_vars_3_0(r_7, s_7, tboundin_3_0, t);
                  t = map_1_0(x_7, t);
                  z_92 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_46, z_92);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    p_92 = ATgetArgument(t, 0);
                    q_92 = ATgetArgument(t, 1);
                    {
                      ATerm i_94 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, p_92, q_92);
                      t = free_vars_3_0(y_7, z_7, tboundin_3_0, t);
                      t = map_1_0(f_8, t);
                      i_94 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_b_46, i_94);
                    }
                  }
                else
                  {
                    ATerm n_39 = NULL,w_39 = NULL,x_39 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm d_46 = ATgetArgument(t, 0);
                        ATerm e_46 = ATgetArgument(t, 1);
                        ATerm l_46 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_x_42;
                    w_39 = t;
                    t = (ATerm) ATinsert(ATempty, term_q_46);
                    x_39 = t;
                    t = SSL_printnl(w_39, x_39);
                    t = term_z_42;
                    n_39 = t;
                    t = SSL_exit(n_39);
                    t = (ATerm) ATinsert(ATempty, term_q_46);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm a_93 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_93);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm r_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_46);
    }
  else
    {
      t = r_46;
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_46);
          }
        else
          {
            t = v_46;
            {
              ATerm y_46 = t;
              int c_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,h_93 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_93 = ATgetArgument(t, 0);
                      d_93 = ATgetArgument(t, 1);
                      e_93 = ATgetArgument(t, 2);
                      h_93 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_93;
                  t = map_1_0(t_7, t);
                  LocalPopChoice(c_47);
                }
              else
                {
                  t = y_46;
                  {
                    ATerm d_47 = t;
                    int f_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_47);
                      }
                    else
                      {
                        t = d_47;
                        t = dynrule_targs_1_0(u_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm q_93 = NULL;
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_93 = ATgetArgument(t, 0);
          {
            ATerm i_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_47);
      t = q_93;
    }
  else
    {
      t = g_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_93;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = map_1_0(w_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_94 = NULL;
  ATerm j_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_94 = ATgetArgument(t, 0);
          {
            ATerm m_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_47);
      t = c_94;
    }
  else
    {
      t = j_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_94;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm f_94 = NULL;
  f_94 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_94);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm j_94 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_94);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm n_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(q_47);
          }
        else
          {
            t = p_47;
            {
              ATerm r_47 = t;
              int u_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_94 = ATgetArgument(t, 0);
                      m_94 = ATgetArgument(t, 1);
                      n_94 = ATgetArgument(t, 2);
                      o_94 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_94;
                  t = map_1_0(a_8, t);
                  LocalPopChoice(u_47);
                }
              else
                {
                  t = r_47;
                  {
                    ATerm v_47 = t;
                    int w_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_47);
                      }
                    else
                      {
                        t = v_47;
                        t = dynrule_targs_1_0(c_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm v_94 = NULL;
  ATerm x_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_94 = ATgetArgument(t, 0);
          {
            ATerm a_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_47);
      t = v_94;
    }
  else
    {
      t = x_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_94;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = map_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm a_95 = NULL;
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_95 = ATgetArgument(t, 0);
          {
            ATerm g_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_48);
      t = a_95;
    }
  else
    {
      t = d_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_95;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm d_95 = NULL;
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_95);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(o_7, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm c_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_97);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      {
        ATerm j_48 = t;
        int k_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_48);
          }
        else
          {
            t = j_48;
            {
              ATerm l_48 = t;
              int o_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_97 = ATgetArgument(t, 0);
                      f_97 = ATgetArgument(t, 1);
                      g_97 = ATgetArgument(t, 2);
                      h_97 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_97;
                  t = map_1_0(j_8, t);
                  LocalPopChoice(o_48);
                }
              else
                {
                  t = l_48;
                  {
                    ATerm p_48 = t;
                    int q_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_48);
                      }
                    else
                      {
                        t = p_48;
                        t = dynrule_targs_1_0(r_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm o_97 = NULL;
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_97 = ATgetArgument(t, 0);
          {
            ATerm t_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_48);
      t = o_97;
    }
  else
    {
      t = r_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_97;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = map_1_0(t_8, t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm t_97 = NULL;
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_97 = ATgetArgument(t, 0);
          {
            ATerm w_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_48);
      t = t_97;
    }
  else
    {
      t = u_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_97;
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_97);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm x_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_97);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm z_48 = t;
        int a_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_49);
          }
        else
          {
            t = z_48;
            {
              ATerm c_49 = t;
              int d_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_97 = ATgetArgument(t, 0);
                      a_98 = ATgetArgument(t, 1);
                      b_98 = ATgetArgument(t, 2);
                      c_98 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_98;
                  t = map_1_0(a_9, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_49);
                      }
                    else
                      {
                        t = e_49;
                        t = dynrule_targs_1_0(e_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm j_98 = NULL;
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_98 = ATgetArgument(t, 0);
          {
            ATerm k_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_49);
      t = j_98;
    }
  else
    {
      t = h_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_98;
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = map_1_0(f_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm o_98 = NULL;
  ATerm l_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_98 = ATgetArgument(t, 0);
          {
            ATerm p_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_49);
      t = o_98;
    }
  else
    {
      t = l_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_98;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm r_98 = NULL;
  r_98 = t;
  {
    ATerm r_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_98 = NULL,c_40 = NULL,e_40 = NULL,c_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_98 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_98);
        c_40 = t;
        t = x_98;
        t = ContextVar_0_0(t);
        e_40 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, e_40);
        c_26 = t;
        t = SSLsetAnnotations(c_26, c_40);
        LocalPopChoice(s_49);
      }
    else
      {
        t = r_49;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, r_98);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL;
  if(match_cons(t, sym__2))
    {
      y_98 = ATgetArgument(t, 0);
      z_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(y_98, z_98, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm a_99 = NULL,b_99 = NULL;
  if(match_cons(t, sym__2))
    {
      a_99 = ATgetArgument(t, 0);
      b_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(a_99, b_99, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_t_49;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm i_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_99);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm w_49 = t;
        int x_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_49);
          }
        else
          {
            t = w_49;
            {
              ATerm y_49 = t;
              int z_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_99 = ATgetArgument(t, 0);
                      l_99 = ATgetArgument(t, 1);
                      m_99 = ATgetArgument(t, 2);
                      n_99 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_99;
                  t = map_1_0(x_9, t);
                  LocalPopChoice(z_49);
                }
              else
                {
                  t = y_49;
                  {
                    ATerm b_50 = t;
                    int e_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_50);
                      }
                    else
                      {
                        t = b_50;
                        t = dynrule_targs_1_0(y_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm u_99 = NULL;
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_99 = ATgetArgument(t, 0);
          {
            ATerm k_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_50);
      t = u_99;
    }
  else
    {
      t = h_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_99;
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = map_1_0(z_9, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm a_100 = NULL;
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_100 = ATgetArgument(t, 0);
          {
            ATerm n_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_50);
      t = a_100;
    }
  else
    {
      t = l_50;
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
static ATerm c_10 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL;
  f_100 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      e_100 = ATgetArgument(t, 0);
      t = e_100;
    }
  else
    {
      t = f_100;
    }
  d_100 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_100);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_q_50;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL;
  if(match_cons(t, sym__2))
    {
      k_100 = ATgetArgument(t, 0);
      l_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(k_100, l_100, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm m_100 = NULL,r_100 = NULL;
  if(match_cons(t, sym__2))
    {
      m_100 = ATgetArgument(t, 0);
      r_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(m_100, r_100, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_r_50;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm c_101 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_101 = ATgetArgument(t, 0);
      t = c_101;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_101 = ATgetArgument(t, 0);
          {
            ATerm s_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_101;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_101), (ATerm) ATempty);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm i_101 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_101 = ATgetArgument(t, 0);
      t = i_101;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_101 = ATgetArgument(t, 0);
          {
            ATerm t_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_101;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, i_101);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm o_101 = NULL;
  o_101 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_101);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_u_50;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm v_144 (ATerm), ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,a_97 = NULL,b_97 = NULL;
  z_95 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm x_50 = ATgetArgument(t, 0);
      if(match_cons(x_50, sym_DynRuleId_1))
        {
          ATerm a_51 = ATgetArgument(x_50, 0);
          if(match_cons(a_51, sym_RDecT_3))
            {
              t_96 = ATgetArgument(a_51, 0);
              h_96 = ATgetArgument(a_51, 1);
              i_96 = ATgetArgument(a_51, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_50 = ATgetArgument(t, 1);
        if(match_cons(y_50, sym_Rule_3))
          {
            p_96 = ATgetArgument(y_50, 0);
            c_96 = ATgetArgument(y_50, 1);
            d_96 = ATgetArgument(y_50, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_96;
  t = dummify_0_0(t);
  w_96 = t;
  t = free_vars_3_0(h_8, i_8, tboundin_3_0, t);
  t = map_1_0(u_8, t);
  y_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_96, d_96);
  t = free_vars_3_0(x_8, z_8, tboundin_3_0, t);
  t = filter_1_0(g_9, t);
  x_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_95, y_95);
  t = diff_0_0(t);
  b_96 = t;
  t = h_96;
  t = foldr_3_0(h_9, i_9, j_9, t);
  a_97 = t;
  t = i_96;
  t = foldr_3_0(k_9, m_9, n_9, t);
  b_97 = t;
  t = z_95;
  t = dr_rename_vars_0_0(t);
  f_96 = t;
  {
    ATerm b_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_99 = NULL,i_40 = NULL;
        t = term_q_50;
        i_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_50, f_96);
        t = l_13(i_40, f_96, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_51 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_51) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
            c_99 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_99;
        g_96 = t;
        t = f_96;
        LocalPopChoice(c_51);
        t = (ATerm) ATempty;
        e_96 = t;
        t = (ATerm) ATempty;
        v_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_96, f_96);
        t = debug_1_0(p_9, t);
      }
    else
      {
        t = b_51;
        {
          ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL;
          t = term_t_39;
          h_99 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_39, t_96);
          t = w_13(h_99, t_96, t);
          q_96 = t;
          t = new_0_0(t);
          g_96 = t;
          t = new_0_0(t);
          o_96 = t;
          t = p_96;
          t = free_vars_3_0(t_9, w_9, tboundin_3_0, t);
          k_96 = t;
          t = map_1_0(c_10, t);
          f_99 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_96))), f_99), i_96);
          t = concat_0_0(t);
          a_96 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, q_96, h_96, a_96, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(b_96), (ATerm) ATmakeAppl(sym_Str_1, g_96))), c_96, (ATerm) ATmakeAppl(sym_BA_2, d_96, (ATerm) ATmakeAppl(sym_Var_1, o_96)))));
          e_96 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_51, g_96);
          g_99 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_96, (ATerm) ATmakeAppl(sym_Defined_2, term_e_51, g_96));
          t = m_13(g_10, f_96, g_99, t);
          t = h_96;
          t = foldr_3_0(h_10, i_10, j_10, t);
          d_99 = t;
          t = i_96;
          t = foldr_3_0(k_10, l_10, m_10, t);
          e_99 = t;
          t = d_99;
          if((a_97 != t))
            {
              _fail(t);
            }
          t = e_99;
          if((b_97 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99));
          {
            ATerm f_51 = t;
            int h_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_40 = NULL,q_40 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99)), w_96);
                p_40 = t;
                t = term_u_50;
                q_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_50, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99)), w_96));
                t = l_13(q_40, p_40, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm i_51 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_51) != ATmakeSymbol("y_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99));
                LocalPopChoice(h_51);
                t = (ATerm) ATempty;
                v_96 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99)), w_96);
                t = debug_1_0(n_10, t);
              }
            else
              {
                t = f_51;
                {
                  ATerm u_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL;
                  t = term_s_39;
                  z_100 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_s_39, t_96);
                  t = w_13(z_100, t_96, t);
                  l_96 = t;
                  t = h_96;
                  t = map_1_0(o_10, t);
                  r_96 = t;
                  t = i_96;
                  t = map_1_0(f_11, t);
                  j_96 = t;
                  t = k_96;
                  t = map_1_0(h_11, t);
                  u_100 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_96))), u_100), j_96);
                  t = concat_0_0(t);
                  s_96 = t;
                  t = w_96;
                  {
                    ATerm j_51 = t;
                    int k_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_96;
                        if((p_96 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_96);
                        LocalPopChoice(k_51);
                      }
                    else
                      {
                        t = j_51;
                        t = w_96;
                      }
                  }
                  u_96 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, l_96, h_96, i_96, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_96), p_96), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_96), r_96, s_96))), term_x_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_51, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, u_96), (ATerm) ATmakeAppl(sym_Str_1, t_96))), term_a_52), term_x_51)))), (ATerm) ATmakeAppl(sym_RDefT_4, t_96, h_96, i_96, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_96), p_96), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_51, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_96), r_96, s_96))), term_x_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_51, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, u_96), (ATerm) ATmakeAppl(sym_Str_1, t_96))), term_x_51))));
                  v_96 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99)), w_96);
                  x_100 = t;
                  t = term_d_52;
                  y_100 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99)), w_96), term_d_52);
                  t = m_13(r_11, x_100, y_100, t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_96, (ATerm) ATmakeAppl(sym__2, d_99, e_99)), w_96);
                  t = debug_1_0(z_11, t);
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, w_96, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(b_96), (ATerm) ATmakeAppl(sym_Str_1, g_96))));
  t = v_144(t);
  x_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_96, v_96);
  t = conc_0_0(t);
  y_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, x_96), y_96);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  k_102 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      p_102 = ATgetArgument(t, 0);
      u_102 = ATgetArgument(t, 1);
      t = p_102;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          q_102 = ATgetArgument(t, 0);
          j_102 = ATgetArgument(t, 1);
          {
            static ATerm a_12 (ATerm t)
            {
              ATerm a_103 = NULL,b_103 = NULL;
              a_103 = t;
              t = SSL_explode_term(a_103);
              if(match_cons(t, sym__2))
                {
                  ATerm e_52 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_52) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm f_52 = ATgetArgument(t, 1);
                    if(((ATgetType(f_52) == AT_LIST) && !(ATisEmpty(f_52))))
                      {
                        b_103 = ATgetFirst((ATermList) f_52);
                        {
                          ATerm j_52 = (ATerm) ATgetNext((ATermList) f_52);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_103), j_102), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_102))));
              return(t);
            }
            t = q_102;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((r_102 != NULL) && (r_102 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_102 = ATgetArgument(t, 0);
                s_102 = ATgetArgument(t, 1);
                t_102 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_102, s_102, t_102)), (ATerm) ATmakeAppl(sym_Rule_3, u_102, term_m_52, term_d_26));
            t = SplitDynamicRule_1_0(a_12, t);
          }
        }
      else
        {
          static ATerm c_12 (ATerm t)
          {
            ATerm i_103 = NULL,k_103 = NULL;
            i_103 = t;
            t = SSL_explode_term(i_103);
            if(match_cons(t, sym__2))
              {
                ATerm n_52 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) n_52) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm o_52 = ATgetArgument(t, 1);
                  if(((ATgetType(o_52) == AT_LIST) && !(ATisEmpty(o_52))))
                    {
                      k_103 = ATgetFirst((ATermList) o_52);
                      {
                        ATerm p_52 = (ATerm) ATgetNext((ATermList) o_52);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, k_103), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_102))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              q_102 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_102;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((r_102 != NULL) && (r_102 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_102 = ATgetArgument(t, 0);
              s_102 = ATgetArgument(t, 1);
              t_102 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_102, s_102, t_102)), (ATerm) ATmakeAppl(sym_Rule_3, u_102, term_m_52, term_d_26));
          t = SplitDynamicRule_1_0(c_12, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          p_102 = ATgetArgument(t, 0);
          u_102 = ATgetArgument(t, 1);
          t = p_102;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              q_102 = ATgetArgument(t, 0);
              j_102 = ATgetArgument(t, 1);
              {
                static ATerm g_12 (ATerm t)
                {
                  ATerm x_103 = NULL,y_103 = NULL,s_40 = NULL;
                  x_103 = t;
                  t = SSL_explode_term(x_103);
                  if(match_cons(t, sym__2))
                    {
                      ATerm q_52 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) q_52) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm r_52 = ATgetArgument(t, 1);
                        if(((ATgetType(r_52) == AT_LIST) && !(ATisEmpty(r_52))))
                          {
                            y_103 = ATgetFirst((ATermList) r_52);
                            {
                              ATerm s_52 = (ATerm) ATgetNext((ATermList) r_52);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(x_103);
                  if(match_cons(t, sym__2))
                    {
                      ATerm t_52 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) t_52) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm u_52 = ATgetArgument(t, 1);
                        if(((ATgetType(u_52) == AT_LIST) && !(ATisEmpty(u_52))))
                          {
                            ATerm w_52 = ATgetFirst((ATermList) u_52);
                            ATerm x_52 = (ATerm) ATgetNext((ATermList) u_52);
                            if(((ATgetType(x_52) == AT_LIST) && !(ATisEmpty(x_52))))
                              {
                                s_40 = ATgetFirst((ATermList) x_52);
                                {
                                  ATerm y_52 = (ATerm) ATgetNext((ATermList) x_52);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_40), y_103), j_102), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_102))));
                  return(t);
                }
                t = q_102;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((r_102 != NULL) && (r_102 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_102 = ATgetArgument(t, 0);
                    s_102 = ATgetArgument(t, 1);
                    t_102 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_102, s_102, t_102)), u_102);
                t = SplitDynamicRule_1_0(g_12, t);
              }
            }
          else
            {
              static ATerm i_12 (ATerm t)
              {
                ATerm g_104 = NULL,h_104 = NULL,u_40 = NULL;
                g_104 = t;
                t = SSL_explode_term(g_104);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_53 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_53) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm g_53 = ATgetArgument(t, 1);
                      if(((ATgetType(g_53) == AT_LIST) && !(ATisEmpty(g_53))))
                        {
                          h_104 = ATgetFirst((ATermList) g_53);
                          {
                            ATerm h_53 = (ATerm) ATgetNext((ATermList) g_53);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(g_104);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_53 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_53) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm j_53 = ATgetArgument(t, 1);
                      if(((ATgetType(j_53) == AT_LIST) && !(ATisEmpty(j_53))))
                        {
                          ATerm k_53 = ATgetFirst((ATermList) j_53);
                          ATerm l_53 = (ATerm) ATgetNext((ATermList) j_53);
                          if(((ATgetType(l_53) == AT_LIST) && !(ATisEmpty(l_53))))
                            {
                              u_40 = ATgetFirst((ATermList) l_53);
                              {
                                ATerm m_53 = (ATerm) ATgetNext((ATermList) l_53);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_40), h_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_102))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  q_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_102;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((r_102 != NULL) && (r_102 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_102 = ATgetArgument(t, 0);
                  s_102 = ATgetArgument(t, 1);
                  t_102 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_102, s_102, t_102)), u_102);
              t = SplitDynamicRule_1_0(i_12, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              p_102 = ATgetArgument(t, 0);
              u_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_102;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              q_102 = ATgetArgument(t, 0);
              j_102 = ATgetArgument(t, 1);
              {
                static ATerm l_12 (ATerm t)
                {
                  ATerm u_104 = NULL,v_104 = NULL,w_40 = NULL;
                  u_104 = t;
                  t = SSL_explode_term(u_104);
                  if(match_cons(t, sym__2))
                    {
                      ATerm n_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) n_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm o_53 = ATgetArgument(t, 1);
                        if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
                          {
                            v_104 = ATgetFirst((ATermList) o_53);
                            {
                              ATerm p_53 = (ATerm) ATgetNext((ATermList) o_53);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(u_104);
                  if(match_cons(t, sym__2))
                    {
                      ATerm q_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) q_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm r_53 = ATgetArgument(t, 1);
                        if(((ATgetType(r_53) == AT_LIST) && !(ATisEmpty(r_53))))
                          {
                            ATerm s_53 = ATgetFirst((ATermList) r_53);
                            ATerm t_53 = (ATerm) ATgetNext((ATermList) r_53);
                            if(((ATgetType(t_53) == AT_LIST) && !(ATisEmpty(t_53))))
                              {
                                w_40 = ATgetFirst((ATermList) t_53);
                                {
                                  ATerm u_53 = (ATerm) ATgetNext((ATermList) t_53);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_40), v_104), j_102), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_102))));
                  return(t);
                }
                t = q_102;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((r_102 != NULL) && (r_102 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_102 = ATgetArgument(t, 0);
                    s_102 = ATgetArgument(t, 1);
                    t_102 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, r_102, s_102, t_102)), u_102);
                t = SplitDynamicRule_1_0(l_12, t);
              }
            }
          else
            {
              static ATerm m_12 (ATerm t)
              {
                ATerm d_105 = NULL,e_105 = NULL,y_40 = NULL;
                d_105 = t;
                t = SSL_explode_term(d_105);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_53 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) y_53) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm z_53 = ATgetArgument(t, 1);
                      if(((ATgetType(z_53) == AT_LIST) && !(ATisEmpty(z_53))))
                        {
                          e_105 = ATgetFirst((ATermList) z_53);
                          {
                            ATerm a_54 = (ATerm) ATgetNext((ATermList) z_53);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(d_105);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_54 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_54) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm c_54 = ATgetArgument(t, 1);
                      if(((ATgetType(c_54) == AT_LIST) && !(ATisEmpty(c_54))))
                        {
                          ATerm d_54 = ATgetFirst((ATermList) c_54);
                          ATerm g_54 = (ATerm) ATgetNext((ATermList) c_54);
                          if(((ATgetType(g_54) == AT_LIST) && !(ATisEmpty(g_54))))
                            {
                              y_40 = ATgetFirst((ATermList) g_54);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_40), e_105), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_102))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  q_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_102;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((r_102 != NULL) && (r_102 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_102 = ATgetArgument(t, 0);
                  {
                    ATerm i_54 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm j_54 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = k_102;
              t = SplitDynamicRule_1_0(m_12, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  static ATerm g_105 (ATerm t)
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_112(t);
        LocalPopChoice(l_54);
      }
    else
      {
        t = k_54;
        t = SRTS_one(g_105, t);
      }
    return(t);
  }
  t = g_105(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_n_42;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm s_144 (ATerm), ATerm t)
{
  static ATerm u_105 (ATerm t)
  {
    static ATerm n_12 (ATerm t)
    {
      ATerm m_54 = t;
      int n_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_144(t);
          LocalPopChoice(n_54);
        }
      else
        {
          t = m_54;
          {
            ATerm n_105 = NULL,o_105 = NULL,r_105 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                n_105 = ATgetArgument(t, 0);
                o_105 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, n_105, o_105);
            {
              static ATerm q_12 (ATerm t)
              {
                t = n_105;
                t = DeclareContextVars_0_0(t);
                t = o_105;
                t = u_105(t);
                if(((r_105 != NULL) && (r_105 != t)))
                  _fail(t);
                else
                  r_105 = t;
                return(t);
              }
              t = scope_2_0(p_12, q_12, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, n_105, not_null(r_105));
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_12, t);
    return(t);
  }
  t = u_105(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm x_105 = NULL,b_106 = NULL,e_106 = NULL,f_106 = NULL;
  f_106 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      e_106 = ATgetArgument(t, 0);
      {
        ATerm o_54 = t;
        int p_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_106;
            x_105 = t;
            t = f_106;
            LocalPopChoice(p_54);
          }
        else
          {
            t = o_54;
            t = f_106;
            x_105 = t;
            t = f_106;
          }
      }
    }
  else
    {
      t = f_106;
      x_105 = t;
      t = f_106;
    }
  t = term_t_54;
  b_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_105, term_t_54);
  t = m_13(u_12, x_105, b_106, t);
  t = f_106;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm i_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL;
  m_106 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      l_106 = ATgetArgument(t, 0);
      {
        ATerm u_54 = t;
        int v_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_106;
            i_106 = t;
            t = m_106;
            LocalPopChoice(v_54);
          }
        else
          {
            t = u_54;
            t = m_106;
            i_106 = t;
            t = m_106;
          }
      }
    }
  else
    {
      t = m_106;
      i_106 = t;
      t = m_106;
    }
  t = term_x_54;
  k_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_106, term_x_54);
  t = m_13(p_14, i_106, k_106, t);
  t = m_106;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_n_42;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm y_54 = t;
  int z_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(r_12, t);
      LocalPopChoice(z_54);
    }
  else
    {
      t = y_54;
      t = map_1_0(o_14, t);
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm x_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_41);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_55);
    }
  else
    {
      t = a_55;
      {
        ATerm c_55 = t;
        int d_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_55);
          }
        else
          {
            t = c_55;
            {
              ATerm e_55 = t;
              int f_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_41 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_41 = ATgetArgument(t, 0);
                      c_42 = ATgetArgument(t, 1);
                      d_42 = ATgetArgument(t, 2);
                      e_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_42;
                  t = map_1_0(z_14, t);
                  LocalPopChoice(f_55);
                }
              else
                {
                  t = e_55;
                  {
                    ATerm g_55 = t;
                    int h_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_55);
                      }
                    else
                      {
                        t = g_55;
                        t = dynrule_targs_1_0(a_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm a_43 = NULL;
  ATerm i_55 = t;
  int j_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_43 = ATgetArgument(t, 0);
          {
            ATerm k_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_55);
      t = a_43;
    }
  else
    {
      t = i_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_43;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = map_1_0(b_15, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm k_43 = NULL;
  ATerm l_55 = t;
  int m_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_43 = ATgetArgument(t, 0);
          {
            ATerm n_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_55);
      t = k_43;
    }
  else
    {
      t = l_55;
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
static ATerm c_15 (ATerm t)
{
  ATerm w_43 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_43 = ATgetArgument(t, 0);
      t = w_43;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_43 = ATgetArgument(t, 0);
          {
            ATerm o_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_43;
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm i_44 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_44 = ATgetArgument(t, 0);
      t = i_44;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm r_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_44;
    }
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm o_44 = NULL;
  if(match_cons(t, sym__2))
    {
      o_44 = ATgetArgument(t, 0);
      if((o_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm w_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_44);
  return(t);
}
static ATerm p_15 (ATerm t)
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
              ATerm z_55 = t;
              int a_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_45 = ATgetArgument(t, 0);
                      g_45 = ATgetArgument(t, 1);
                      h_45 = ATgetArgument(t, 2);
                      i_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_45;
                  t = map_1_0(q_15, t);
                  LocalPopChoice(a_56);
                }
              else
                {
                  t = z_55;
                  {
                    ATerm b_56 = t;
                    int c_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_56);
                      }
                    else
                      {
                        t = b_56;
                        t = dynrule_targs_1_0(r_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm p_45 = NULL;
  ATerm d_56 = t;
  int e_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm f_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_56);
      t = p_45;
    }
  else
    {
      t = d_56;
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
static ATerm r_15 (ATerm t)
{
  t = map_1_0(u_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm u_45 = NULL;
  ATerm g_56 = t;
  int h_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_45 = ATgetArgument(t, 0);
          {
            ATerm i_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_56);
      t = u_45;
    }
  else
    {
      t = g_56;
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
static ATerm x_15 (ATerm t)
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
            ATerm j_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_46;
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm x_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_46 = ATgetArgument(t, 0);
      t = x_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_46 = ATgetArgument(t, 0);
          {
            ATerm k_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_46;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm l_47 = NULL;
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      if((l_47 != ATgetArgument(t, 1)))
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
  ATerm f_113 = NULL;
  f_113 = t;
  {
    ATerm l_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_41 = NULL,u_41 = NULL;
        t = f_113;
        t = free_vars_3_0(v_14, y_14, tboundin_3_0, t);
        t_41 = t;
        t = f_113;
        {
          ATerm n_56 = t;
          int p_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_43 = NULL;
              ATerm q_56 = t;
              int r_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm s_56 = ATgetArgument(t, 0);
                      ATerm t_56 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      {
                        ATerm u_56 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_56);
                  t = q_43;
                  t = map_1_0(c_15, t);
                }
              else
                {
                  t = q_56;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm v_56 = ATgetArgument(t, 0);
                      ATerm w_56 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      {
                        ATerm x_56 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = q_43;
                  t = map_1_0(d_15, t);
                }
              LocalPopChoice(p_56);
            }
          else
            {
              t = n_56;
              t = (ATerm) ATempty;
            }
        }
        u_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
        t = a_13(j_15, t_41, u_41, t);
        LocalPopChoice(m_56);
      }
    else
      {
        t = l_56;
        {
          ATerm r_44 = NULL,t_44 = NULL;
          t = f_113;
          t = free_vars_3_0(k_15, p_15, tboundin_3_0, t);
          r_44 = t;
          t = f_113;
          {
            ATerm y_56 = t;
            int b_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_46 = NULL;
                ATerm c_57 = t;
                int d_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm e_57 = ATgetArgument(t, 0);
                        ATerm f_57 = ATgetArgument(t, 1);
                        c_46 = ATgetArgument(t, 2);
                        {
                          ATerm g_57 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_57);
                    t = c_46;
                    t = map_1_0(x_15, t);
                  }
                else
                  {
                    t = c_57;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm h_57 = ATgetArgument(t, 0);
                        ATerm i_57 = ATgetArgument(t, 1);
                        c_46 = ATgetArgument(t, 2);
                        {
                          ATerm k_57 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = c_46;
                    t = map_1_0(y_15, t);
                  }
                LocalPopChoice(b_57);
              }
            else
              {
                t = y_56;
                t = (ATerm) ATempty;
              }
          }
          t_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_44, t_44);
          t = a_13(a_16, r_44, t_44, t);
        }
      }
  }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_35;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm x_113 = NULL,y_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_113 = ATgetFirst((ATermList) t);
      y_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_113, y_113);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm z_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_57 = ATgetArgument(t, 0);
      if(match_cons(l_57, sym__2))
        {
          z_113 = ATgetArgument(l_57, 0);
          a_114 = ATgetArgument(l_57, 1);
        }
      else
        _fail(t);
      {
        ATerm m_57 = ATgetArgument(t, 1);
        if(match_cons(m_57, sym__2))
          {
            b_114 = ATgetArgument(m_57, 0);
            c_114 = ATgetArgument(m_57, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_114), z_113), (ATerm) ATinsert(CheckATermList(c_114), a_114));
  return(t);
}
static ATerm t_12 (ATerm g_84, ATerm f_84, ATerm t)
{
  ATerm j_113 = NULL,m_113 = NULL,n_113 = NULL;
  static ATerm c_16 (ATerm t)
  {
    t = g_84;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = g_84;
    {
      static ATerm d_16 (ATerm t)
      {
        ATerm p_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,e_26 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            p_113 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_113;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(e_16, f_16, g_16, _id, t);
        w_113 = t;
        if(match_cons(t, sym__2))
          {
            t_113 = ATgetArgument(t, 0);
            u_113 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_113);
        s_113 = t;
        t = u_113;
        t = concat_0_0(t);
        v_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_113, v_113);
        e_26 = t;
        t = SSLsetAnnotations(e_26, s_113);
        if(match_cons(t, sym__2))
          {
            if(((m_113 != NULL) && (m_113 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              m_113 = ATgetArgument(t, 0);
            if(((j_113 != NULL) && (j_113 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              j_113 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_113);
        return(t);
      }
      t = split_dynamic_rule_1_0(d_16, t);
    }
    if(((n_113 != NULL) && (n_113 != t)))
      _fail(t);
    else
      n_113 = t;
    return(t);
  }
  t = scope_2_0(b_16, c_16, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_113)), not_null(n_113)), f_84);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t)
{
  static ATerm e_114 (ATerm t)
  {
    ATerm p_57 = t;
    int q_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_110(t);
        t = e_114(t);
        LocalPopChoice(q_57);
      }
    else
      {
        t = p_57;
        t = l_110(t);
      }
    return(t);
  }
  t = e_114(t);
  return(t);
}
ATerm listtd_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  static ATerm d_115 (ATerm t)
  {
    ATerm y_114 = NULL,b_115 = NULL,c_115 = NULL;
    t = g_119(t);
    y_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_114;
      }
    else
      {
        ATerm s_47 = NULL,f_48 = NULL,g_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_115 = ATgetFirst((ATermList) t);
            c_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_114);
        s_47 = t;
        t = c_115;
        t = d_115(t);
        f_48 = t;
        t = (ATerm) ATinsert(CheckATermList(f_48), b_115);
        g_26 = t;
        t = SSLsetAnnotations(g_26, s_47);
      }
    return(t);
  }
  t = d_115(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,r_115 = NULL,u_115 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      r_115 = ATgetArgument(t, 0);
      u_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_115;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_115 = ATgetFirst((ATermList) t);
      o_115 = (ATerm) ATgetNext((ATermList) t);
      t = m_115;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          n_115 = ATgetArgument(t, 0);
          l_115 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_57, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, n_115, l_115), (ATerm) ATmakeAppl(sym_DynRuleScope_2, o_115, u_115))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, n_115)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              n_115 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_57, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, o_115, u_115)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, n_115)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_115;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL;
  t = term_x_42;
  f_116 = t;
  t = (ATerm) ATinsert(ATempty, term_t_57);
  g_116 = t;
  t = SSL_printnl(f_116, g_116);
  t = term_z_42;
  e_116 = t;
  t = SSL_exit(e_116);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL;
  t = term_x_42;
  k_116 = t;
  t = (ATerm) ATinsert(ATempty, term_u_57);
  l_116 = t;
  t = SSL_printnl(k_116, l_116);
  t = term_z_42;
  j_116 = t;
  t = SSL_exit(j_116);
  return(t);
}
static ATerm x_119 (ATerm y_117, ATerm z_117, ATerm a_118, ATerm c_118, ATerm d_118, ATerm e_118, ATerm l_118, ATerm t)
{
  t = l_118;
  {
    ATerm v_57 = t;
    if((PushChoice() == 0))
      {
        t = d_118;
        if(match_cons(t, sym_Op_2))
          {
            ATerm w_57 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_57) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_57 = ATgetArgument(t, 1);
              if(((ATgetType(x_57) != AT_LIST) || !(ATisEmpty(x_57))))
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
        t = v_57;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, y_117, z_117, a_118)), (ATerm) ATmakeAppl(sym_Rule_3, c_118, d_118, e_118));
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_z_57;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm e_119 = NULL,f_119 = NULL,i_119 = NULL,j_119 = NULL,m_119 = NULL,n_119 = NULL,o_119 = NULL,r_119 = NULL,t_119 = NULL,u_119 = NULL;
  i_119 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      j_119 = ATgetArgument(t, 0);
      m_119 = ATgetArgument(t, 1);
      n_119 = ATgetArgument(t, 2);
      o_119 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = o_119;
  if(match_cons(t, sym_Rule_3))
    {
      r_119 = ATgetArgument(t, 0);
      t_119 = ATgetArgument(t, 1);
      u_119 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_119;
  if(match_cons(t, sym_Op_2))
    {
      e_119 = ATgetArgument(t, 0);
      f_119 = ATgetArgument(t, 1);
      t = f_119;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_119;
          if(match_string(t, "Undefined"))
            {
              ATerm a_58 = t;
              int c_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_119;
                  {
                    ATerm l_58 = t;
                    int m_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_119;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(m_58);
                      }
                    else
                      {
                        t = l_58;
                        {
                          ATerm n_49 = NULL,o_49 = NULL;
                          t = term_x_42;
                          n_49 = t;
                          t = (ATerm) ATinsert(ATempty, term_o_58);
                          o_49 = t;
                          t = SSL_printnl(n_49, o_49);
                          t = i_119;
                          t = debug_1_0(h_16, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, j_119, m_119, n_119)), r_119);
                  LocalPopChoice(c_58);
                }
              else
                {
                  t = a_58;
                  t = x_119(j_119, m_119, n_119, r_119, t_119, u_119, i_119, t);
                }
            }
          else
            {
              t = x_119(j_119, m_119, n_119, r_119, t_119, u_119, i_119, t);
            }
        }
      else
        {
          t = e_119;
          t = x_119(j_119, m_119, n_119, r_119, t_119, u_119, i_119, t);
        }
    }
  else
    {
      t = x_119(j_119, m_119, n_119, r_119, t_119, u_119, i_119, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm l_117 (ATerm), ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL;
  f_120 = t;
  t = l_117(t);
  g_120 = t;
  t = term_x_42;
  h_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_120), g_120);
  i_120 = t;
  t = SSL_printnl(h_120, i_120);
  t = f_120;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_z_57;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL;
  o_120 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm r_58 = ATgetArgument(t, 0);
      if(match_cons(r_58, sym_DynRuleId_1))
        {
          ATerm y_58 = ATgetArgument(r_58, 0);
          if(match_cons(y_58, sym_RDecT_3))
            {
              j_120 = ATgetArgument(y_58, 0);
              k_120 = ATgetArgument(y_58, 1);
              l_120 = ATgetArgument(y_58, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm t_58 = ATgetArgument(t, 1);
        if(match_cons(t_58, sym_Rule_3))
          {
            m_120 = ATgetArgument(t_58, 0);
            {
              ATerm z_58 = ATgetArgument(t_58, 1);
              if(match_cons(z_58, sym_Op_2))
                {
                  ATerm a_59 = ATgetArgument(z_58, 0);
                  if((ATgetSymbol((ATermAppl) a_59) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_59 = ATgetArgument(z_58, 1);
                    if(((ATgetType(b_59) != AT_LIST) || !(ATisEmpty(b_59))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            n_120 = ATgetArgument(t_58, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_120;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        {
          ATerm p_120 = NULL,q_120 = NULL;
          t = term_x_42;
          p_120 = t;
          t = (ATerm) ATinsert(ATempty, term_o_58);
          q_120 = t;
          t = SSL_printnl(p_120, q_120);
          t = o_120;
          t = debug_1_0(i_16, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, j_120, k_120, l_120)), m_120);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm f_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_120 = NULL;
      t_120 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm i_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_120;
      LocalPopChoice(h_59);
      {
        ATerm u_120 = NULL,v_120 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            u_120 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_120;
        t = map_1_0(k_16, t);
        v_120 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, v_120);
      }
    }
  else
    {
      t = f_59;
      {
        ATerm k_59 = t;
        int l_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_120 = NULL;
            y_120 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm n_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_120;
            LocalPopChoice(l_59);
            {
              ATerm z_120 = NULL,a_121 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  z_120 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_120;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              a_121 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, a_121);
            }
          }
        else
          {
            t = k_59;
            {
              ATerm o_59 = t;
              int p_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_121 = NULL;
                  d_121 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm r_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = d_121;
                  LocalPopChoice(p_59);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = o_59;
                  {
                    ATerm t_59 = t;
                    int v_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_121 = NULL;
                        e_121 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm w_59 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = e_121;
                        LocalPopChoice(v_59);
                        t = UpgradeExtendOverrideDynamicRules_0_0(t);
                      }
                    else
                      {
                        t = t_59;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm x_59 = t;
  int y_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(y_59);
    }
  else
    {
      t = x_59;
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(j_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = Cons_2_0(n_16, p_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,j_26 = NULL;
  w_121 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_121);
  t_121 = t;
  t = u_121;
  t = topdown_1_0(s_16, t);
  t = listtd_1_0(t_16, t);
  v_121 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_121);
  j_26 = t;
  t = SSLsetAnnotations(j_26, t_121);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm z_59 = t;
  int c_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_60 = t;
      int g_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(g_60);
        }
      else
        {
          t = e_60;
          {
            ATerm y_121 = NULL,z_121 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                y_121 = ATgetArgument(t, 0);
                z_121 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_60, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, z_121), (ATerm) ATmakeAppl(sym_Str_1, y_121)));
          }
        }
      LocalPopChoice(c_60);
    }
  else
    {
      t = z_59;
    }
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = repeat_2_0(u_16, _id, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm g_122 = NULL,j_122 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_122 = ATgetFirst((ATermList) t);
      j_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_12(g_122, j_122, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL,n_121 = NULL,o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,l_26 = NULL,k_26 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  r_121 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_121);
  k_121 = t;
  t = l_121;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_121 = ATgetFirst((ATermList) t);
      o_121 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_121);
  m_121 = t;
  t = o_121;
  t = Cons_2_0(_id, l_16, t);
  p_121 = t;
  t = (ATerm) ATinsert(CheckATermList(p_121), n_121);
  k_26 = t;
  t = SSLsetAnnotations(k_26, m_121);
  q_121 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_121);
  l_26 = t;
  t = SSLsetAnnotations(l_26, k_121);
  return(t);
}
ATerm tboundin_3_0 (ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm t)
{
  ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL;
  b_128 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_128 = ATgetArgument(t, 0);
      a_128 = ATgetArgument(t, 1);
      {
        ATerm a_50 = NULL,j_50 = NULL,o_50 = NULL,b_27 = NULL;
        t = SSLgetAnnotations(b_128);
        a_50 = t;
        t = c_128;
        t = r_143(t);
        j_50 = t;
        t = a_128;
        t = p_143(t);
        o_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_50, o_50);
        b_27 = t;
        t = SSLsetAnnotations(b_27, a_50);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          c_128 = ATgetArgument(t, 0);
          {
            ATerm l_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,h_27 = NULL,g_27 = NULL;
            t = SSLgetAnnotations(b_128);
            l_51 = t;
            t = c_128;
            if(match_cons(t, sym_Rule_3))
              {
                o_51 = ATgetArgument(t, 0);
                p_51 = ATgetArgument(t, 1);
                q_51 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_128);
            n_51 = t;
            t = o_51;
            t = p_143(t);
            r_51 = t;
            t = p_51;
            t = p_143(t);
            s_51 = t;
            t = q_51;
            t = p_143(t);
            t_51 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, r_51, s_51, t_51);
            g_27 = t;
            t = SSLsetAnnotations(g_27, n_51);
            u_51 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, u_51);
            h_27 = t;
            t = SSLsetAnnotations(h_27, l_51);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              c_128 = ATgetArgument(t, 0);
              a_128 = ATgetArgument(t, 1);
              y_127 = ATgetArgument(t, 2);
              {
                ATerm c_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,i_27 = NULL;
                t = SSLgetAnnotations(b_128);
                c_52 = t;
                t = c_128;
                t = r_143(t);
                g_52 = t;
                t = a_128;
                t = r_143(t);
                h_52 = t;
                t = y_127;
                t = r_143(t);
                i_52 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, g_52, h_52, i_52);
                i_27 = t;
                t = SSLsetAnnotations(i_27, c_52);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  c_128 = ATgetArgument(t, 0);
                  a_128 = ATgetArgument(t, 1);
                  y_127 = ATgetArgument(t, 2);
                  z_127 = ATgetArgument(t, 3);
                  {
                    ATerm v_52 = NULL,a_53 = NULL,b_53 = NULL,d_53 = NULL,e_53 = NULL,j_31 = NULL;
                    t = SSLgetAnnotations(b_128);
                    v_52 = t;
                    t = c_128;
                    t = r_143(t);
                    a_53 = t;
                    t = a_128;
                    t = r_143(t);
                    b_53 = t;
                    t = y_127;
                    t = r_143(t);
                    d_53 = t;
                    t = z_127;
                    t = p_143(t);
                    e_53 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, a_53, b_53, d_53, e_53);
                    j_31 = t;
                    t = SSLsetAnnotations(j_31, v_52);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_128 = ATgetArgument(t, 0);
                      a_128 = ATgetArgument(t, 1);
                      y_127 = ATgetArgument(t, 2);
                      z_127 = ATgetArgument(t, 3);
                      {
                        ATerm x_53 = NULL,e_54 = NULL,f_54 = NULL,q_54 = NULL,r_54 = NULL,k_31 = NULL;
                        t = SSLgetAnnotations(b_128);
                        x_53 = t;
                        t = c_128;
                        t = r_143(t);
                        e_54 = t;
                        t = a_128;
                        t = r_143(t);
                        f_54 = t;
                        t = y_127;
                        t = r_143(t);
                        q_54 = t;
                        t = z_127;
                        t = p_143(t);
                        r_54 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, e_54, f_54, q_54, r_54);
                        k_31 = t;
                        t = SSLsetAnnotations(k_31, x_53);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          c_128 = ATgetArgument(t, 0);
                          a_128 = ATgetArgument(t, 1);
                          {
                            ATerm s_55 = NULL,x_55 = NULL,y_55 = NULL,m_31 = NULL;
                            t = SSLgetAnnotations(b_128);
                            s_55 = t;
                            t = c_128;
                            t = r_143(t);
                            x_55 = t;
                            t = a_128;
                            t = p_143(t);
                            y_55 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_55, y_55);
                            m_31 = t;
                            t = SSLsetAnnotations(m_31, s_55);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              c_128 = ATgetArgument(t, 0);
                              a_128 = ATgetArgument(t, 1);
                              {
                                ATerm o_56 = NULL,z_56 = NULL,a_57 = NULL,n_31 = NULL;
                                t = SSLgetAnnotations(b_128);
                                o_56 = t;
                                t = c_128;
                                t = r_143(t);
                                z_56 = t;
                                t = a_128;
                                t = p_143(t);
                                a_57 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_56, a_57);
                                n_31 = t;
                                t = SSLsetAnnotations(n_31, o_56);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  c_128 = ATgetArgument(t, 0);
                                  a_128 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_57 = NULL,n_57 = NULL,o_57 = NULL,o_31 = NULL;
                                    t = SSLgetAnnotations(b_128);
                                    j_57 = t;
                                    t = c_128;
                                    t = r_143(t);
                                    n_57 = t;
                                    t = a_128;
                                    t = p_143(t);
                                    o_57 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_57, o_57);
                                    o_31 = t;
                                    t = SSLsetAnnotations(o_31, j_57);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      c_128 = ATgetArgument(t, 0);
                                      {
                                        ATerm e_58 = NULL,n_58 = NULL,p_31 = NULL;
                                        t = SSLgetAnnotations(b_128);
                                        e_58 = t;
                                        t = c_128;
                                        t = p_143(t);
                                        n_58 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, n_58);
                                        p_31 = t;
                                        t = SSLsetAnnotations(p_31, e_58);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          c_128 = ATgetArgument(t, 0);
                                          {
                                            ATerm e_59 = NULL,g_59 = NULL,x_31 = NULL;
                                            t = SSLgetAnnotations(b_128);
                                            e_59 = t;
                                            t = c_128;
                                            t = p_143(t);
                                            g_59 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_59);
                                            x_31 = t;
                                            t = SSLsetAnnotations(x_31, e_59);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              c_128 = ATgetArgument(t, 0);
                                              {
                                                ATerm s_59 = NULL,u_59 = NULL,a_32 = NULL;
                                                t = SSLgetAnnotations(b_128);
                                                s_59 = t;
                                                t = c_128;
                                                t = p_143(t);
                                                u_59 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, u_59);
                                                a_32 = t;
                                                t = SSLsetAnnotations(a_32, s_59);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  c_128 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm b_60 = NULL,d_60 = NULL,b_32 = NULL;
                                                    t = SSLgetAnnotations(b_128);
                                                    b_60 = t;
                                                    t = c_128;
                                                    t = p_143(t);
                                                    d_60 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, d_60);
                                                    b_32 = t;
                                                    t = SSLsetAnnotations(b_32, b_60);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm o_60 = NULL,t_60 = NULL,c_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      c_128 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(b_128);
                                                  o_60 = t;
                                                  t = c_128;
                                                  t = p_143(t);
                                                  t_60 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, t_60);
                                                  c_32 = t;
                                                  t = SSLsetAnnotations(c_32, o_60);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm y_143 (ATerm), ATerm t)
{
  ATerm y_128 = NULL,z_128 = NULL,c_129 = NULL;
  ATerm n_60 = t;
  int r_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          y_128 = ATgetArgument(t, 0);
          {
            ATerm u_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_60);
      t = y_128;
      if(match_cons(t, sym_DynRuleId_1))
        {
          z_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_128;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_60 = ATgetArgument(t, 0);
          ATerm y_60 = ATgetArgument(t, 1);
          c_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_129;
    }
  else
    {
      t = n_60;
      {
        ATerm z_60 = t;
        int a_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                y_128 = ATgetArgument(t, 0);
                {
                  ATerm d_61 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_61);
            t = y_128;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_128 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_128;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_61 = ATgetArgument(t, 0);
                ATerm f_61 = ATgetArgument(t, 1);
                c_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = c_129;
          }
        else
          {
            t = z_60;
            if(match_cons(t, sym_AddDynRule_2))
              {
                y_128 = ATgetArgument(t, 0);
                {
                  ATerm i_61 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = y_128;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_128 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_128;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm k_61 = ATgetArgument(t, 0);
                ATerm l_61 = ATgetArgument(t, 1);
                c_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = c_129;
          }
      }
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm x_129 = NULL;
  ATerm m_61 = t;
  int o_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_129 = ATgetArgument(t, 0);
          {
            ATerm p_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_61);
      t = x_129;
    }
  else
    {
      t = m_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_129;
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm d_130 = NULL;
  ATerm q_61 = t;
  int r_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_130 = ATgetArgument(t, 0);
          {
            ATerm s_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_61);
      t = d_130;
    }
  else
    {
      t = q_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_130;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm s_129 = NULL;
  ATerm t_61 = t;
  int u_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm v_61 = ATgetArgument(t, 0);
          ATerm x_61 = ATgetArgument(t, 1);
          s_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(u_61);
      t = s_129;
      t = map_1_0(v_16, t);
    }
  else
    {
      t = t_61;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm z_61 = ATgetArgument(t, 0);
          ATerm a_62 = ATgetArgument(t, 1);
          s_129 = ATgetArgument(t, 2);
          {
            ATerm c_62 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = s_129;
      t = map_1_0(w_16, t);
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm z_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_130);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm i_62 = t;
  int n_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_62);
    }
  else
    {
      t = i_62;
      {
        ATerm p_62 = t;
        int q_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_62);
          }
        else
          {
            t = p_62;
            {
              ATerm s_62 = t;
              int t_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_131 = NULL,i_131 = NULL,j_131 = NULL,k_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_131 = ATgetArgument(t, 0);
                      i_131 = ATgetArgument(t, 1);
                      j_131 = ATgetArgument(t, 2);
                      k_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_131;
                  t = map_1_0(a_17, t);
                  LocalPopChoice(t_62);
                }
              else
                {
                  t = s_62;
                  {
                    ATerm w_62 = t;
                    int x_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_62);
                      }
                    else
                      {
                        t = w_62;
                        t = dynrule_targs_1_0(b_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm r_131 = NULL;
  ATerm y_62 = t;
  int z_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_131 = ATgetArgument(t, 0);
          {
            ATerm g_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_62);
      t = r_131;
    }
  else
    {
      t = y_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_131;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = map_1_0(c_17, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm w_131 = NULL;
  ATerm h_63 = t;
  int i_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_131 = ATgetArgument(t, 0);
          {
            ATerm j_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_63);
      t = w_131;
    }
  else
    {
      t = h_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_131;
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm a_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_132);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm k_63 = t;
  int l_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
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
                  ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL,f_132 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_132 = ATgetArgument(t, 0);
                      d_132 = ATgetArgument(t, 1);
                      e_132 = ATgetArgument(t, 2);
                      f_132 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_132;
                  t = map_1_0(f_17, t);
                  LocalPopChoice(p_63);
                }
              else
                {
                  t = o_63;
                  {
                    ATerm t_63 = t;
                    int w_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_63);
                      }
                    else
                      {
                        t = t_63;
                        t = dynrule_targs_1_0(g_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm m_132 = NULL;
  ATerm y_63 = t;
  int z_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_132 = ATgetArgument(t, 0);
          {
            ATerm a_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_63);
      t = m_132;
    }
  else
    {
      t = y_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_132;
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = map_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm r_132 = NULL;
  ATerm s_64 = t;
  int t_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_132 = ATgetArgument(t, 0);
          {
            ATerm u_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_64);
      t = r_132;
    }
  else
    {
      t = s_64;
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
static ATerm i_17 (ATerm t)
{
  ATerm v_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_132);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm v_64 = t;
  int w_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_64);
    }
  else
    {
      t = v_64;
      {
        ATerm x_64 = t;
        int e_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_65);
          }
        else
          {
            t = x_64;
            {
              ATerm f_65 = t;
              int g_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_132 = ATgetArgument(t, 0);
                      y_132 = ATgetArgument(t, 1);
                      z_132 = ATgetArgument(t, 2);
                      a_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_132;
                  t = map_1_0(k_17, t);
                  LocalPopChoice(g_65);
                }
              else
                {
                  t = f_65;
                  {
                    ATerm h_65 = t;
                    int j_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_65);
                      }
                    else
                      {
                        t = h_65;
                        t = dynrule_targs_1_0(l_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm h_133 = NULL;
  ATerm k_65 = t;
  int l_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_133 = ATgetArgument(t, 0);
          {
            ATerm m_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_65);
      t = h_133;
    }
  else
    {
      t = k_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_133;
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = map_1_0(m_17, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm m_133 = NULL;
  ATerm p_65 = t;
  int q_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_133 = ATgetArgument(t, 0);
          {
            ATerm v_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_65);
      t = m_133;
    }
  else
    {
      t = p_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_133;
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm q_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_133);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm w_65 = t;
  int x_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
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
                  ATerm s_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_133 = ATgetArgument(t, 0);
                      t_133 = ATgetArgument(t, 1);
                      u_133 = ATgetArgument(t, 2);
                      v_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_133;
                  t = map_1_0(p_17, t);
                  LocalPopChoice(b_66);
                }
              else
                {
                  t = a_66;
                  {
                    ATerm d_66 = t;
                    int e_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_66);
                      }
                    else
                      {
                        t = d_66;
                        t = dynrule_targs_1_0(q_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm d_134 = NULL;
  ATerm f_66 = t;
  int g_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_134 = ATgetArgument(t, 0);
          {
            ATerm h_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_66);
      t = d_134;
    }
  else
    {
      t = f_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_134;
    }
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = map_1_0(r_17, t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm i_134 = NULL;
  ATerm i_66 = t;
  int j_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_134 = ATgetArgument(t, 0);
          {
            ATerm k_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_66);
      t = i_134;
    }
  else
    {
      t = i_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_134;
    }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm m_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_134);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm l_66 = t;
  int n_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_66);
    }
  else
    {
      t = l_66;
      {
        ATerm v_66 = t;
        int w_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_66);
          }
        else
          {
            t = v_66;
            {
              ATerm x_66 = t;
              int y_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_134 = ATgetArgument(t, 0);
                      p_134 = ATgetArgument(t, 1);
                      q_134 = ATgetArgument(t, 2);
                      r_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_134;
                  t = map_1_0(u_17, t);
                  LocalPopChoice(y_66);
                }
              else
                {
                  t = x_66;
                  {
                    ATerm z_66 = t;
                    int a_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_67);
                      }
                    else
                      {
                        t = z_66;
                        t = dynrule_targs_1_0(v_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm y_134 = NULL;
  ATerm c_67 = t;
  int d_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_134 = ATgetArgument(t, 0);
          {
            ATerm f_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_67);
      t = y_134;
    }
  else
    {
      t = c_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_134;
    }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = map_1_0(w_17, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm d_135 = NULL;
  ATerm j_67 = t;
  int k_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_135 = ATgetArgument(t, 0);
          {
            ATerm n_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_67);
      t = d_135;
    }
  else
    {
      t = j_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_135;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_130 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      x_130 = ATgetArgument(t, 0);
      t = x_130;
      t = free_vars_3_0(x_16, z_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          x_130 = ATgetArgument(t, 0);
          t = x_130;
          t = free_vars_3_0(d_17, e_17, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              x_130 = ATgetArgument(t, 0);
              t = x_130;
              t = free_vars_3_0(i_17, j_17, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_130 = ATgetArgument(t, 0);
                  t = x_130;
                  t = free_vars_3_0(n_17, o_17, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      x_130 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_130;
                  t = free_vars_3_0(s_17, t_17, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm s_135 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_135);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm o_67 = t;
  int p_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_67);
    }
  else
    {
      t = o_67;
      {
        ATerm q_67 = t;
        int t_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_67);
          }
        else
          {
            t = q_67;
            {
              ATerm u_67 = t;
              int x_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_135 = NULL,v_135 = NULL,w_135 = NULL,x_135 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_135 = ATgetArgument(t, 0);
                      v_135 = ATgetArgument(t, 1);
                      w_135 = ATgetArgument(t, 2);
                      x_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_135;
                  t = map_1_0(z_17, t);
                  LocalPopChoice(x_67);
                }
              else
                {
                  t = u_67;
                  {
                    ATerm y_67 = t;
                    int z_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_67);
                      }
                    else
                      {
                        t = y_67;
                        t = dynrule_targs_1_0(a_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm e_136 = NULL;
  ATerm a_68 = t;
  int e_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_136 = ATgetArgument(t, 0);
          {
            ATerm f_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_68);
      t = e_136;
    }
  else
    {
      t = a_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_136;
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = map_1_0(b_18, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm j_136 = NULL;
  ATerm h_68 = t;
  int i_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_136 = ATgetArgument(t, 0);
          {
            ATerm l_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_68);
      t = j_136;
    }
  else
    {
      t = h_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_136;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_135 = NULL,p_135 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      p_135 = ATgetArgument(t, 0);
      t = p_135;
      if(match_cons(t, sym_Rule_3))
        {
          l_135 = ATgetArgument(t, 0);
          {
            ATerm m_68 = ATgetArgument(t, 1);
          }
          {
            ATerm o_68 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_135;
      t = free_vars_3_0(x_17, y_17, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          p_135 = ATgetArgument(t, 0);
          {
            ATerm p_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_135;
    }
  return(t);
}
static ATerm a_13 (ATerm h_122 (ATerm), ATerm s_30, ATerm r_30, ATerm t)
{
  static ATerm j_137 (ATerm t)
  {
    ATerm e_137 = NULL,f_137 = NULL,g_137 = NULL;
    e_137 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_137 = ATgetFirst((ATermList) t);
            g_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_68 = t;
          int t_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_137;
              {
                static ATerm c_18 (ATerm t)
                {
                  t = r_30;
                  return(t);
                }
                t = b_13(h_122, c_18, f_137, g_137, t);
              }
              t = j_137(t);
              LocalPopChoice(t_68);
            }
          else
            {
              t = q_68;
              {
                ATerm j_61 = NULL,n_61 = NULL,a_33 = NULL;
                t = SSLgetAnnotations(e_137);
                j_61 = t;
                t = g_137;
                t = j_137(t);
                n_61 = t;
                t = (ATerm) ATinsert(CheckATermList(n_61), f_137);
                a_33 = t;
                t = SSLsetAnnotations(a_33, j_61);
              }
            }
        }
      }
    return(t);
  }
  t = s_30;
  t = j_137(t);
  return(t);
}
static ATerm b_13 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm w_30, ATerm v_30, ATerm t)
{
  t = l_122(t);
  {
    static ATerm d_18 (ATerm t)
    {
      ATerm n_137 = NULL;
      n_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, n_137);
      t = k_122(t);
      return(t);
    }
    t = fetch_1_0(d_18, t);
  }
  t = v_30;
  return(t);
}
static ATerm c_13 (ATerm c_122 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  static ATerm d_138 (ATerm t)
  {
    ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL;
    y_137 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_137;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_137 = ATgetFirst((ATermList) t);
            a_138 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_68 = t;
          int v_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_137;
              {
                static ATerm e_18 (ATerm t)
                {
                  t = p_30;
                  return(t);
                }
                t = b_13(c_122, e_18, z_137, a_138, t);
              }
              t = d_138(t);
              LocalPopChoice(v_68);
            }
          else
            {
              t = u_68;
              {
                ATerm y_61 = NULL,h_62 = NULL,f_33 = NULL;
                t = SSLgetAnnotations(y_137);
                y_61 = t;
                t = a_138;
                t = d_138(t);
                h_62 = t;
                t = (ATerm) ATinsert(CheckATermList(h_62), z_137);
                f_33 = t;
                t = SSLsetAnnotations(f_33, y_61);
              }
            }
        }
      }
    return(t);
  }
  t = q_30;
  t = d_138(t);
  return(t);
}
ATerm genzip_4_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  static ATerm l_138 (ATerm t)
  {
    ATerm w_68 = t;
    int d_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_120(t);
        LocalPopChoice(d_69);
      }
    else
      {
        t = w_68;
        {
          ATerm f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL,h_33 = NULL;
          t = b_120(t);
          k_138 = t;
          if(match_cons(t, sym__2))
            {
              g_138 = ATgetArgument(t, 0);
              h_138 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_138);
          f_138 = t;
          t = g_138;
          t = d_120(t);
          i_138 = t;
          t = h_138;
          t = l_138(t);
          j_138 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_138, j_138);
          h_33 = t;
          t = SSLsetAnnotations(h_33, f_138);
          t = c_120(t);
        }
      }
    return(t);
  }
  t = l_138(t);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_69 = ATgetArgument(t, 0);
      if(((ATgetType(e_69) != AT_LIST) || !(ATisEmpty(e_69))))
        _fail(t);
      {
        ATerm g_69 = ATgetArgument(t, 1);
        if(((ATgetType(g_69) != AT_LIST) || !(ATisEmpty(g_69))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_69 = ATgetArgument(t, 0);
      if(((ATgetType(h_69) == AT_LIST) && !(ATisEmpty(h_69))))
        {
          u_138 = ATgetFirst((ATermList) h_69);
          v_138 = (ATerm) ATgetNext((ATermList) h_69);
        }
      else
        _fail(t);
      {
        ATerm i_69 = ATgetArgument(t, 1);
        if(((ATgetType(i_69) == AT_LIST) && !(ATisEmpty(i_69))))
          {
            w_138 = ATgetFirst((ATermList) i_69);
            x_138 = (ATerm) ATgetNext((ATermList) i_69);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_138, w_138), (ATerm) ATmakeAppl(sym__2, v_138, x_138));
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm y_138 = NULL,z_138 = NULL;
  if(match_cons(t, sym__2))
    {
      y_138 = ATgetArgument(t, 0);
      z_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_138), y_138);
  return(t);
}
static ATerm h_13 (ATerm r_674, ATerm w_674, ATerm b_67, ATerm t)
{
  ATerm n_138 = NULL,o_138 = NULL,r_138 = NULL,s_138 = NULL;
  t = SSL_explode_term(w_674);
  if(match_cons(t, sym__2))
    {
      n_138 = ATgetArgument(t, 0);
      r_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_674);
  if(match_cons(t, sym__2))
    {
      if((n_138 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_138, r_138);
  t = genzip_4_0(g_18, h_18, i_18, _id, t);
  s_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_138, b_67);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm t)
{
  static ATerm b_139 (ATerm t)
  {
    ATerm j_69 = t;
    int k_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_111(t);
        LocalPopChoice(k_69);
      }
    else
      {
        t = j_69;
        t = c_111(t);
        t = b_139(t);
      }
    return(t);
  }
  t = b_139(t);
  return(t);
}
ATerm for_3_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  t = e_111(t);
  t = while_not_2_0(f_111, g_111, t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm i_139 = NULL;
  i_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_139);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL,m_139 = NULL,m_33 = NULL;
  m_139 = t;
  if(match_cons(t, sym__2))
    {
      k_139 = ATgetArgument(t, 0);
      l_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_139);
  j_139 = t;
  t = l_139;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_139, l_139);
  m_33 = t;
  t = SSLsetAnnotations(m_33, j_139);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm f_140 = NULL,g_140 = NULL,h_140 = NULL,i_140 = NULL,j_140 = NULL;
  f_140 = t;
  if(match_cons(t, sym__2))
    {
      g_140 = ATgetArgument(t, 0);
      h_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_140;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_140 = ATgetFirst((ATermList) t);
      j_140 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_69 = t;
        int m_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_140(g_140, h_140, f_140, t);
            LocalPopChoice(m_69);
          }
        else
          {
            t = l_69;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_140), i_140), j_140);
          }
      }
    }
  else
    {
      t = t_140(g_140, h_140, f_140, t);
    }
  return(t);
}
static ATerm t_140 (ATerm n_139, ATerm o_139, ATerm p_139, ATerm t)
{
  ATerm q_139 = NULL,t_139 = NULL,o_33 = NULL,w_139 = NULL,x_139 = NULL,y_139 = NULL,z_139 = NULL;
  t = SSLgetAnnotations(p_139);
  q_139 = t;
  t = o_139;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_139 = ATgetFirst((ATermList) t);
      z_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_139;
  if(match_cons(t, sym__2))
    {
      x_139 = ATgetArgument(t, 0);
      y_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_69 = t;
    int o_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_139;
        if((x_139 != t))
          {
            _fail(t);
          }
        t = z_139;
        LocalPopChoice(o_69);
      }
    else
      {
        t = n_69;
        t = o_139;
        t = h_13(x_139, y_139, z_139, t);
      }
  }
  t_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_139, t_139);
  o_33 = t;
  t = SSLsetAnnotations(o_33, q_139);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm s_140 = NULL;
  if(match_cons(t, sym__2))
    {
      s_140 = ATgetArgument(t, 0);
      if((s_140 != ATgetArgument(t, 1)))
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
  ATerm p_69 = t;
  int q_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_18, k_18, l_18, t);
      LocalPopChoice(q_69);
    }
  else
    {
      t = p_69;
      {
        ATerm n_140 = NULL,o_140 = NULL,p_140 = NULL;
        n_140 = t;
        if(match_cons(t, sym__2))
          {
            o_140 = ATgetArgument(t, 0);
            p_140 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_140;
        t = c_13(m_18, o_140, p_140, t);
      }
    }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL;
  if(match_cons(t, sym__2))
    {
      q_63 = ATgetArgument(t, 0);
      r_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13(r_18, q_63, r_63, t);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm s_63 = NULL;
  if(match_cons(t, sym__2))
    {
      s_63 = ATgetArgument(t, 0);
      if((s_63 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm b_64 = NULL,n_64 = NULL;
  if(match_cons(t, sym__2))
    {
      b_64 = ATgetArgument(t, 0);
      n_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13(u_18, b_64, n_64, t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm o_64 = NULL;
  if(match_cons(t, sym__2))
    {
      o_64 = ATgetArgument(t, 0);
      if((o_64 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm e_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_141 (ATerm t)
  {
    ATerm r_69 = t;
    int u_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_141(t);
        LocalPopChoice(u_69);
      }
    else
      {
        t = r_69;
        {
          ATerm x_69 = t;
          int y_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_140 = NULL,w_140 = NULL,u_62 = NULL,v_62 = NULL;
              v_140 = t;
              t = d_141(t);
              w_140 = t;
              t = v_140;
              {
                static ATerm n_18 (ATerm t)
                {
                  ATerm y_140 = NULL;
                  t = l_141(t);
                  y_140 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_140, w_140);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_141(n_18, l_141, o_18, t);
              }
              v_62 = t;
              t = SSL_explode_term(v_62);
              if(match_cons(t, sym__2))
                {
                  ATerm g_70 = ATgetArgument(t, 0);
                  u_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_62;
              t = foldr_3_0(p_18, q_18, _id, t);
              LocalPopChoice(y_69);
            }
          else
            {
              t = x_69;
              {
                ATerm u_63 = NULL,v_63 = NULL;
                v_63 = t;
                t = SSL_explode_term(v_63);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_70 = ATgetArgument(t, 0);
                    u_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_63;
                t = foldr_3_0(s_18, t_18, l_141, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_141(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  static ATerm v_18 (ATerm t)
  {
    t = bottomup_1_0(l_111, t);
    return(t);
  }
  t = SRTS_all(v_18, t);
  t = l_111(t);
  return(t);
}
static ATerm l_13 (ATerm v_60, ATerm w_60, ATerm t)
{
  ATerm m_141 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_60, w_60);
  t = e_14(v_60, w_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_141 = ATgetFirst((ATermList) t);
      {
        ATerm i_70 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_141;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm a_142 = NULL,b_142 = NULL;
  a_142 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_70 = t;
    int k_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_65 = NULL;
        t = term_l_70;
        n_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_70, a_142);
        t = l_13(n_65, a_142, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm m_70 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_70) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, b_142, (ATerm) ATempty);
        LocalPopChoice(k_70);
      }
    else
      {
        t = j_70;
        {
          ATerm c_66 = NULL;
          t = term_l_70;
          c_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_70, a_142);
          t = l_13(c_66, a_142, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_70 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_70) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, b_142, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  static ATerm e_142 (ATerm t)
  {
    ATerm o_70 = t;
    int p_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_113(t);
        LocalPopChoice(p_70);
      }
    else
      {
        t = o_70;
        t = SRTS_all(e_142, t);
      }
    return(t);
  }
  t = e_142(t);
  return(t);
}
static ATerm m_13 (ATerm f_131 (ATerm), ATerm u_44, ATerm s_44, ATerm t)
{
  ATerm f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL,k_142 = NULL,l_142 = NULL,m_142 = NULL;
  i_142 = t;
  t = f_131(t);
  f_142 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_142, u_44, s_44);
  t = f_14(f_142, u_44, s_44, t);
  {
    ATerm q_70 = t;
    int s_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_142 = NULL;
        t = term_t_70;
        n_142 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_142, term_t_70);
        t = e_14(f_142, n_142, t);
        LocalPopChoice(s_70);
      }
    else
      {
        t = q_70;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_142 = ATgetFirst((ATermList) t);
      h_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_142, term_t_70, (ATerm) ATinsert(CheckATermList(h_142), (ATerm) ATinsert(CheckATermList(g_142), u_44)));
  t = lookup_table_0_1(f_142, t);
  m_142 = t;
  t = term_t_70;
  j_142 = t;
  t = (ATerm) ATinsert(CheckATermList(h_142), (ATerm) ATinsert(CheckATermList(g_142), u_44));
  k_142 = t;
  t = m_142;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(j_142, k_142, l_142, t);
  t = i_142;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = term_l_70;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_l_70;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm r_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      v_142 = ATgetArgument(t, 0);
      w_142 = ATgetArgument(t, 1);
      r_142 = ATgetArgument(t, 2);
      {
        ATerm a_143 = NULL,b_143 = NULL;
        t = w_142;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, v_142);
        a_143 = t;
        t = term_v_70;
        b_143 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_142), term_v_70);
        t = m_13(w_18, a_143, b_143, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, v_142, (ATerm)ATempty, r_142);
      }
    }
  else
    {
      ATerm e_143 = NULL,f_143 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          v_142 = ATgetArgument(t, 0);
          w_142 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_142;
      if(match_cons(t, sym_ConstType_1))
        {
          x_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, v_142);
      e_143 = t;
      t = term_y_70;
      f_143 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_142), term_y_70);
      t = m_13(x_18, e_143, f_143, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_142, (ATerm) ATmakeAppl(sym_ConstType_1, x_142));
    }
  return(t);
}
static ATerm n_13 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm j_143 = NULL,k_143 = NULL;
  k_143 = t;
  {
    ATerm z_70 = t;
    int a_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
        t = e_14(p_60, q_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_71 = ATgetFirst((ATermList) t);
            j_143 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_71);
        {
          ATerm l_143 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, p_60, q_60, j_143);
          t = lookup_table_0_1(p_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_143 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_14(q_60, j_143, l_143, t);
          t = (ATerm) ATmakeAppl(sym__3, p_60, q_60, j_143);
        }
      }
    else
      {
        t = z_70;
        {
          ATerm n_143 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
          t = lookup_table_0_1(p_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_143 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_14(q_60, n_143, t);
          t = (ATerm) ATmakeAppl(sym__2, p_60, q_60);
        }
      }
  }
  t = k_143;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_131 (ATerm), ATerm t)
{
  ATerm s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL,z_143 = NULL;
  v_143 = t;
  t = c_131(t);
  u_143 = t;
  {
    ATerm d_71 = t;
    int e_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_144 = NULL;
        t = term_t_70;
        a_144 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_143, term_t_70);
        t = e_14(u_143, a_144, t);
        LocalPopChoice(e_71);
      }
    else
      {
        t = d_71;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_143 = ATgetFirst((ATermList) t);
      s_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_143, term_t_70, s_143);
  t = lookup_table_0_1(u_143, t);
  z_143 = t;
  t = term_t_70;
  w_143 = t;
  t = z_143;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(w_143, s_143, x_143, t);
  t = t_143;
  {
    static ATerm a_19 (ATerm t)
    {
      ATerm b_144 = NULL;
      b_144 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_143, b_144);
      t = n_13(u_143, b_144, t);
      return(t);
    }
    t = map_1_0(a_19, t);
  }
  t = v_143;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm f_71 = t;
  int g_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_110(t);
      t = h_110(t);
      LocalPopChoice(g_71);
    }
  else
    {
      t = f_71;
      t = h_110(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_131 (ATerm), ATerm t)
{
  ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL;
  e_144 = t;
  t = b_131(t);
  d_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_144, term_t_70);
  {
    ATerm i_71 = t;
    int j_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_144 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_71 = ATgetArgument(t, 0);
            ATerm n_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_70;
        x_144 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_144, term_t_70);
        t = e_14(d_144, x_144, t);
        LocalPopChoice(j_71);
      }
    else
      {
        t = i_71;
        t = (ATerm) ATempty;
      }
  }
  f_144 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_144, term_t_70, (ATerm) ATinsert(CheckATermList(f_144), (ATerm) ATempty));
  t = lookup_table_0_1(d_144, t);
  j_144 = t;
  t = term_t_70;
  g_144 = t;
  t = (ATerm) ATinsert(CheckATermList(f_144), (ATerm) ATempty);
  h_144 = t;
  t = j_144;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(g_144, h_144, i_144, t);
  t = e_144;
  return(t);
}
ATerm scope_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm t)
{
  static ATerm d_19 (ATerm t)
  {
    t = end_scope_1_0(d_131, t);
    return(t);
  }
  t = begin_scope_1_0(d_131, t);
  t = restore_always_2_0(e_131, d_19, t);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = term_l_70;
  return(t);
}
static ATerm g_19 (ATerm t)
{
  ATerm c_145 = NULL,d_145 = NULL,e_145 = NULL,f_145 = NULL,a_34 = NULL;
  f_145 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_145);
  c_145 = t;
  t = d_145;
  t = map_1_0(h_19, t);
  e_145 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_145);
  a_34 = t;
  t = SSLsetAnnotations(a_34, c_145);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm t_145 = NULL,u_145 = NULL;
  u_145 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      t_145 = ATgetArgument(t, 0);
      {
        ATerm o_71 = t;
        int p_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_66 = NULL,o_66 = NULL,y_33 = NULL;
            t = SSLgetAnnotations(u_145);
            m_66 = t;
            t = t_145;
            t = map_1_0(k_19, t);
            o_66 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, o_66);
            y_33 = t;
            t = SSLsetAnnotations(y_33, m_66);
            LocalPopChoice(p_71);
          }
        else
          {
            t = o_71;
            t = u_145;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          t_145 = ATgetArgument(t, 0);
          {
            ATerm q_71 = t;
            int r_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_67 = NULL,g_67 = NULL,z_33 = NULL;
                t = SSLgetAnnotations(u_145);
                e_67 = t;
                t = t_145;
                t = map_1_0(m_19, t);
                g_67 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, g_67);
                z_33 = t;
                t = SSLsetAnnotations(z_33, e_67);
                LocalPopChoice(r_71);
              }
            else
              {
                t = q_71;
                t = u_145;
              }
          }
        }
      else
        {
          t = u_145;
        }
    }
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm s_71 = t;
  int u_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(u_71);
    }
  else
    {
      t = s_71;
    }
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm v_71 = t;
  int x_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(x_71);
    }
  else
    {
      t = v_71;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(e_19, g_19, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_146 = NULL,c_146 = NULL,d_146 = NULL;
  b_146 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_146;
    }
  else
    {
      static ATerm n_19 (ATerm t)
      {
        t = not_null(d_146);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_146 = ATgetFirst((ATermList) t);
          if(((d_146 != NULL) && (d_146 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_146;
      t = at_end_1_0(n_19, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm z_125 (ATerm), ATerm t)
{
  ATerm t_146 = NULL,u_146 = NULL,v_146 = NULL;
  t_146 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_146;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_146 = ATgetFirst((ATermList) t);
          v_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_71 = t;
        int z_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_68 = NULL,j_68 = NULL,k_68 = NULL,n_34 = NULL;
            t = SSLgetAnnotations(t_146);
            g_68 = t;
            t = u_146;
            t = z_125(t);
            j_68 = t;
            t = v_146;
            t = filter_1_0(z_125, t);
            k_68 = t;
            t = (ATerm) ATinsert(CheckATermList(k_68), j_68);
            n_34 = t;
            t = SSLsetAnnotations(n_34, g_68);
            LocalPopChoice(z_71);
          }
        else
          {
            t = y_71;
            t = v_146;
            t = filter_1_0(z_125, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_118 (ATerm), ATerm t)
{
  static ATerm m_147 (ATerm t)
  {
    ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL;
    l_147 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_147 = ATgetFirst((ATermList) t);
        k_147 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_69 = NULL,f_69 = NULL,r_34 = NULL;
          t = SSLgetAnnotations(l_147);
          c_69 = t;
          t = k_147;
          t = m_147(t);
          f_69 = t;
          t = (ATerm) ATinsert(CheckATermList(f_69), j_147);
          r_34 = t;
          t = SSLsetAnnotations(r_34, c_69);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_147;
        t = n_118(t);
      }
    return(t);
  }
  t = m_147(t);
  return(t);
}
static ATerm y_147 (ATerm q_147, ATerm t)
{
  ATerm r_147 = NULL;
  t = SSL_explode_term(q_147);
  if(match_cons(t, sym__2))
    {
      ATerm a_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_147;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_147 = NULL,u_147 = NULL,v_147 = NULL;
  v_147 = t;
  if(match_cons(t, sym__2))
    {
      t_147 = ATgetArgument(t, 0);
      u_147 = ATgetArgument(t, 1);
      {
        ATerm b_72 = t;
        int c_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_19 (ATerm t)
            {
              t = u_147;
              return(t);
            }
            t = t_147;
            t = at_end_1_0(s_19, t);
            LocalPopChoice(c_72);
          }
        else
          {
            t = b_72;
            t = y_147(v_147, t);
          }
      }
    }
  else
    {
      t = y_147(v_147, t);
    }
  return(t);
}
static ATerm q_13 (ATerm i_35, ATerm q_34, ATerm t)
{
  ATerm z_147 = NULL,a_148 = NULL;
  static ATerm v_19 (ATerm t)
  {
    ATerm b_148 = NULL,c_148 = NULL,d_148 = NULL,e_148 = NULL;
    e_148 = t;
    t = SSL_explode_term(e_148);
    if(match_cons(t, sym__2))
      {
        if(((z_147 != NULL) && (z_147 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_147 = ATgetArgument(t, 0);
        {
          ATerm d_72 = ATgetArgument(t, 1);
          if(((ATgetType(d_72) == AT_LIST) && !(ATisEmpty(d_72))))
            {
              b_148 = ATgetFirst((ATermList) d_72);
              {
                ATerm f_72 = (ATerm) ATgetNext((ATermList) d_72);
                if(((ATgetType(f_72) != AT_LIST) || !(ATisEmpty(f_72))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, b_148, not_null(a_148));
    t = conc_0_0(t);
    c_148 = t;
    t = (ATerm) ATinsert(ATempty, c_148);
    d_148 = t;
    t = SSL_mkterm(z_147, d_148);
    return(t);
  }
  t = SSL_explode_term(i_35);
  if(match_cons(t, sym__2))
    {
      if(((z_147 != NULL) && (z_147 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_147 = ATgetArgument(t, 0);
      {
        ATerm g_72 = ATgetArgument(t, 1);
        if(((ATgetType(g_72) == AT_LIST) && !(ATisEmpty(g_72))))
          {
            if(((a_148 != NULL) && (a_148 != ATgetFirst((ATermList) g_72))))
              _fail(ATgetFirst((ATermList) g_72));
            else
              a_148 = ATgetFirst((ATermList) g_72);
            {
              ATerm i_72 = (ATerm) ATgetNext((ATermList) g_72);
              if(((ATgetType(i_72) != AT_LIST) || !(ATisEmpty(i_72))))
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
  t = fetch_1_0(v_19, t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm t)
{
  ATerm g_148 = NULL,h_148 = NULL,i_148 = NULL;
  g_148 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_148;
      t = x_124(t);
    }
  else
    {
      ATerm l_148 = NULL,m_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_148 = ATgetFirst((ATermList) t);
          i_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_148;
      t = z_124(t);
      l_148 = t;
      t = i_148;
      t = foldr_3_0(x_124, y_124, z_124, t);
      m_148 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_148, m_148);
      t = y_124(t);
    }
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_72), term_k_72), term_j_72);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm t_148 = NULL,u_148 = NULL;
  if(match_cons(t, sym__2))
    {
      t_148 = ATgetArgument(t, 0);
      u_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(t_148, u_148, t);
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm v_148 = NULL,w_148 = NULL;
  w_148 = t;
  if(match_cons(t, sym_Signature_1))
    {
      v_148 = ATgetArgument(t, 0);
      {
        ATerm m_72 = t;
        int n_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_148 = NULL;
            t = v_148;
            t = filter_1_0(f_20, t);
            t = concat_0_0(t);
            y_148 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, y_148);
            LocalPopChoice(n_72);
          }
        else
          {
            t = m_72;
            t = w_148;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          v_148 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, v_148);
        }
      else
        {
          t = w_148;
        }
    }
  return(t);
}
static ATerm f_20 (ATerm t)
{
  ATerm z_148 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      z_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_148;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm p_148 = NULL,q_148 = NULL,r_148 = NULL,s_148 = NULL,x_34 = NULL;
  s_148 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_148);
  p_148 = t;
  t = q_148;
  t = foldr_3_0(z_19, a_20, d_20, t);
  r_148 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_148);
  x_34 = t;
  t = SSLsetAnnotations(x_34, p_148);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm u_72 = t;
  int v_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(v_72);
    }
  else
    {
      t = u_72;
    }
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm v_149 = NULL,w_149 = NULL,x_149 = NULL,y_149 = NULL,z_149 = NULL;
  z_149 = t;
  if(match_cons(t, sym_LRule_1))
    {
      y_149 = ATgetArgument(t, 0);
      t = y_149;
      if(match_cons(t, sym_Rule_3))
        {
          v_149 = ATgetArgument(t, 0);
          w_149 = ATgetArgument(t, 1);
          x_149 = ATgetArgument(t, 2);
          {
            ATerm w_72 = t;
            int a_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_150 = NULL;
                t = v_149;
                t = free_vars_3_0(i_20, k_20, tboundin_3_0, t);
                d_150 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, d_150, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, v_149, w_149, x_149)));
                LocalPopChoice(a_73);
              }
            else
              {
                t = w_72;
                t = z_149;
              }
          }
        }
      else
        {
          t = z_149;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          y_149 = ATgetArgument(t, 0);
          {
            ATerm b_73 = t;
            int c_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_151 = NULL;
                t = y_149;
                t = free_vars_3_0(x_20, z_20, tboundin_3_0, t);
                b_151 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, b_151, y_149);
                LocalPopChoice(c_73);
              }
            else
              {
                t = b_73;
                t = z_149;
              }
          }
        }
      else
        {
          t = z_149;
        }
    }
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm e_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_150);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm d_73 = t;
  int e_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_73);
    }
  else
    {
      t = d_73;
      {
        ATerm f_73 = t;
        int g_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_73);
          }
        else
          {
            t = f_73;
            {
              ATerm h_73 = t;
              int i_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL,j_150 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_150 = ATgetArgument(t, 0);
                      h_150 = ATgetArgument(t, 1);
                      i_150 = ATgetArgument(t, 2);
                      j_150 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_150;
                  t = map_1_0(p_20, t);
                  LocalPopChoice(i_73);
                }
              else
                {
                  t = h_73;
                  {
                    ATerm j_73 = t;
                    int k_73 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_73);
                      }
                    else
                      {
                        t = j_73;
                        t = dynrule_targs_1_0(s_20, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm q_150 = NULL;
  ATerm l_73 = t;
  int m_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_150 = ATgetArgument(t, 0);
          {
            ATerm n_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_73);
      t = q_150;
    }
  else
    {
      t = l_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_150;
    }
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = map_1_0(t_20, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm v_150 = NULL;
  ATerm o_73 = t;
  int p_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_150 = ATgetArgument(t, 0);
          {
            ATerm q_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_73);
      t = v_150;
    }
  else
    {
      t = o_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_150;
    }
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm c_151 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_151);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  ATerm r_73 = t;
  int s_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_73);
    }
  else
    {
      t = r_73;
      {
        ATerm t_73 = t;
        int u_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_73);
          }
        else
          {
            t = t_73;
            {
              ATerm v_73 = t;
              int w_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_151 = NULL,f_151 = NULL,g_151 = NULL,h_151 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_151 = ATgetArgument(t, 0);
                      f_151 = ATgetArgument(t, 1);
                      g_151 = ATgetArgument(t, 2);
                      h_151 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_151;
                  t = map_1_0(a_21, t);
                  LocalPopChoice(w_73);
                }
              else
                {
                  t = v_73;
                  {
                    ATerm x_73 = t;
                    int y_73 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_73);
                      }
                    else
                      {
                        t = x_73;
                        t = dynrule_targs_1_0(b_21, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm o_151 = NULL;
  ATerm z_73 = t;
  int a_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_151 = ATgetArgument(t, 0);
          {
            ATerm b_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_74);
      t = o_151;
    }
  else
    {
      t = z_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_151;
    }
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = map_1_0(c_21, t);
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm t_151 = NULL;
  ATerm c_74 = t;
  int d_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_151 = ATgetArgument(t, 0);
          {
            ATerm e_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_74);
      t = t_151;
    }
  else
    {
      t = c_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_151;
    }
  return(t);
}
static ATerm g_21 (ATerm t)
{
  ATerm f_74 = t;
  int g_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(g_74);
    }
  else
    {
      t = f_74;
    }
  return(t);
}
static ATerm i_21 (ATerm t)
{
  ATerm d_152 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      d_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, d_152)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm p_149 = NULL,q_149 = NULL,r_149 = NULL,s_149 = NULL,z_34 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(g_20, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(h_20, t);
  {
    ATerm h_74 = t;
    int i_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_151 = NULL,z_151 = NULL,a_152 = NULL;
        y_151 = t;
        t = term_j_74;
        z_151 = t;
        t = term_k_74;
        a_152 = t;
        t = term_l_74;
        t = e_14(z_151, a_152, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = y_151;
        LocalPopChoice(i_74);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = h_74;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(g_21, t);
  s_149 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_149);
  p_149 = t;
  t = q_149;
  t = fetch_1_0(i_21, t);
  r_149 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_149);
  z_34 = t;
  t = SSLsetAnnotations(z_34, p_149);
  return(t);
}
static ATerm r_13 (ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm e_152 = NULL;
  t = SSL_fputc(k_40, l_40);
  e_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_152);
  return(t);
}
static ATerm s_13 (ATerm o_24, ATerm p_24, ATerm t)
{
  ATerm f_152 = NULL;
  t = SSL_write_term_to_stream_text(o_24, p_24);
  f_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_152);
  return(t);
}
static ATerm u_13 (ATerm n_117 (ATerm), ATerm h_184, ATerm u_24, ATerm t)
{
  ATerm g_152 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_184, term_m_74);
  t = y_13(t);
  g_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_152, u_24);
  t = n_117(t);
  t = fclose_0_0(t);
  t = u_24;
  return(t);
}
static ATerm t_13 (ATerm k_24, ATerm l_24, ATerm t)
{
  ATerm h_152 = NULL;
  t = SSL_write_term_to_stream_baf(k_24, l_24);
  h_152 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_152);
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm o_152 = NULL,p_152 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_74 = ATgetArgument(t, 0);
      if(match_cons(n_74, sym_Stream_1))
        {
          o_152 = ATgetArgument(n_74, 0);
        }
      else
        _fail(t);
      p_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_13(o_152, p_152, t);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm q_152 = NULL,r_152 = NULL,s_152 = NULL,t_152 = NULL,u_152 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_74 = ATgetArgument(t, 0);
      if(match_cons(o_74, sym_Stream_1))
        {
          t_152 = ATgetArgument(o_74, 0);
        }
      else
        _fail(t);
      u_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_13(t_152, u_152, t);
  q_152 = t;
  t = term_t_32;
  r_152 = t;
  t = q_152;
  if(match_cons(t, sym_Stream_1))
    {
      s_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, q_152);
  t = r_13(r_152, s_152, t);
  return(t);
}
ATerm output_1_0 (ATerm w_136 (ATerm), ATerm t)
{
  ATerm i_152 = NULL,j_152 = NULL;
  t = w_136(t);
  j_152 = t;
  {
    ATerm p_74 = t;
    int q_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_152 = NULL,l_152 = NULL;
        t = term_j_74;
        k_152 = t;
        t = term_r_74;
        l_152 = t;
        t = term_s_74;
        t = e_14(k_152, l_152, t);
        LocalPopChoice(q_74);
      }
    else
      {
        t = p_74;
        t = term_t_74;
      }
  }
  i_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_152, j_152);
  {
    ATerm u_74 = t;
    int v_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_152 = NULL,n_152 = NULL;
        t = term_j_74;
        m_152 = t;
        t = term_w_74;
        n_152 = t;
        t = term_x_74;
        t = e_14(m_152, n_152, t);
        t = (ATerm) ATmakeAppl(sym__2, i_152, j_152);
        LocalPopChoice(v_74);
        if(match_cons(t, sym__2))
          {
            ATerm y_74 = ATgetArgument(t, 0);
            ATerm z_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_13(k_21, i_152, j_152, t);
      }
    else
      {
        t = u_74;
        if(match_cons(t, sym__2))
          {
            ATerm a_75 = ATgetArgument(t, 0);
            ATerm b_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_13(l_21, i_152, j_152, t);
      }
  }
  return(t);
}
static ATerm i_153 (ATerm c_153, ATerm t)
{
  t = SSL_fclose(c_153);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_153 = NULL,g_153 = NULL;
  g_153 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_153 = ATgetArgument(t, 0);
      {
        ATerm c_75 = t;
        int d_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_153);
            LocalPopChoice(d_75);
          }
        else
          {
            t = c_75;
            t = i_153(g_153, t);
          }
      }
    }
  else
    {
      t = i_153(g_153, t);
    }
  return(t);
}
static ATerm v_13 (ATerm q_24, ATerm t)
{
  t = SSL_read_term_from_stream(q_24);
  return(t);
}
static ATerm w_13 (ATerm d_39, ATerm e_39, ATerm t)
{
  t = SSL_strcat(d_39, e_39);
  return(t);
}
static ATerm x_13 (ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm j_153 = NULL;
  t = SSL_fopen(m_40, n_40);
  j_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_153);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_153 = NULL;
  t = SSL_stdin_stream();
  k_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_153);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_153 = NULL;
  t = SSL_stdout_stream();
  l_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_153);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_153 = NULL;
  t = SSL_stderr_stream();
  m_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_153);
  return(t);
}
static ATerm t_154 (ATerm s_153, ATerm t)
{
  ATerm t_153 = NULL;
  t = SSL_explode_term(s_153);
  if(match_cons(t, sym__2))
    {
      ATerm e_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_75) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_75 = ATgetArgument(t, 1);
        if(((ATgetType(f_75) == AT_LIST) && !(ATisEmpty(f_75))))
          {
            t_153 = ATgetFirst((ATermList) f_75);
            {
              ATerm g_75 = (ATerm) ATgetNext((ATermList) f_75);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_153;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_153;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_153;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_153;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_154 (ATerm w_153, ATerm x_153, ATerm y_153, ATerm t)
{
  ATerm z_153 = NULL,a_154 = NULL,b_154 = NULL,e_154 = NULL,b_35 = NULL;
  t = SSLgetAnnotations(y_153);
  b_154 = t;
  t = w_153;
  if(match_cons(t, sym_Path_1))
    {
      e_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_154, x_153);
  b_35 = t;
  t = SSLsetAnnotations(b_35, b_154);
  if(match_cons(t, sym__2))
    {
      z_153 = ATgetArgument(t, 0);
      a_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(z_153, a_154, t);
  return(t);
}
static ATerm v_154 (ATerm g_154, ATerm h_154, ATerm i_154, ATerm t)
{
  ATerm j_154 = NULL,k_154 = NULL,l_154 = NULL,o_154 = NULL,c_35 = NULL;
  t = SSLgetAnnotations(i_154);
  l_154 = t;
  t = SSL_is_string(g_154);
  o_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_154, h_154);
  c_35 = t;
  t = SSLsetAnnotations(c_35, l_154);
  if(match_cons(t, sym__2))
    {
      j_154 = ATgetArgument(t, 0);
      k_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(j_154, k_154, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm q_154 = NULL,r_154 = NULL,s_154 = NULL;
  q_154 = t;
  if(match_cons(t, sym__2))
    {
      r_154 = ATgetArgument(t, 0);
      s_154 = ATgetArgument(t, 1);
      {
        ATerm h_75 = t;
        int i_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_154(q_154, t);
            LocalPopChoice(i_75);
          }
        else
          {
            t = h_75;
            {
              ATerm j_75 = t;
              int k_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_154(r_154, s_154, q_154, t);
                  LocalPopChoice(k_75);
                }
              else
                {
                  t = j_75;
                  t = v_154(r_154, s_154, q_154, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_154(q_154, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_154 = NULL,y_154 = NULL,z_154 = NULL,e_155 = NULL;
  e_155 = t;
  {
    ATerm l_75 = t;
    int m_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_155, term_n_75);
        t = y_13(t);
        LocalPopChoice(m_75);
      }
    else
      {
        t = l_75;
        {
          ATerm s_69 = NULL,t_69 = NULL;
          t = term_o_75;
          t_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_75, e_155);
          t = w_13(t_69, e_155, t);
          s_69 = t;
          t = SSL_perror(s_69);
          _fail(t);
        }
      }
  }
  y_154 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_13(z_154, t);
  x_154 = t;
  t = y_154;
  t = fclose_0_0(t);
  t = x_154;
  return(t);
}
ATerm input_1_0 (ATerm x_136 (ATerm), ATerm t)
{
  ATerm p_75 = t;
  int q_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_155 = NULL,i_155 = NULL;
      t = term_j_74;
      h_155 = t;
      t = term_r_75;
      i_155 = t;
      t = term_s_75;
      t = e_14(h_155, i_155, t);
      LocalPopChoice(q_75);
    }
  else
    {
      t = p_75;
      t = term_t_75;
    }
  t = ReadFromFile_0_0(t);
  t = x_136(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_155 = NULL,k_155 = NULL,l_155 = NULL,m_155 = NULL,n_155 = NULL;
  j_155 = t;
  t = term_u_75;
  t = whoami_0_0(t);
  k_155 = t;
  t = term_x_42;
  m_155 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_75), k_155), term_v_75);
  n_155 = t;
  t = SSL_printnl(m_155, n_155);
  t = term_z_42;
  l_155 = t;
  t = SSL_exit(l_155);
  t = j_155;
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm p_155 = NULL;
  p_155 = t;
  if(match_string(t, "-k"))
    {
      t = p_155;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_155;
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm q_155 = NULL,r_155 = NULL,s_155 = NULL;
  q_155 = t;
  t = SSL_string_to_int(q_155);
  r_155 = t;
  t = term_x_75;
  s_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_75, r_155);
  t = h_14(s_155, r_155, t);
  t = q_155;
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = term_y_75;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_21, n_21, t_21, t);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  ATerm u_155 = NULL;
  u_155 = t;
  if(match_string(t, "-S"))
    {
      t = u_155;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_155;
    }
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm v_155 = NULL,w_155 = NULL;
  t = term_z_75;
  v_155 = t;
  t = term_l_44;
  w_155 = t;
  t = term_a_76;
  t = h_14(v_155, w_155, t);
  t = term_b_76;
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = term_c_76;
  return(t);
}
static ATerm f_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  ATerm x_155 = NULL,y_155 = NULL,z_155 = NULL;
  x_155 = t;
  t = SSL_string_to_int(x_155);
  y_155 = t;
  t = term_z_75;
  z_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_75, y_155);
  t = h_14(z_155, y_155, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_155);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_d_76;
  return(t);
}
static ATerm p_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  ATerm a_156 = NULL,b_156 = NULL;
  t = term_e_76;
  a_156 = t;
  t = term_u_75;
  b_156 = t;
  t = term_f_76;
  t = h_14(a_156, b_156, t);
  t = term_g_76;
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_h_76;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_76 = t;
  int j_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_22, b_22, d_22, t);
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
            t = ArgOption_3_0(f_22, n_22, o_22, t);
            LocalPopChoice(l_76);
          }
        else
          {
            t = k_76;
            t = Option_3_0(p_22, q_22, r_22, t);
          }
      }
    }
  return(t);
}
static ATerm h_14 (ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm c_156 = NULL,d_156 = NULL;
  t = term_j_74;
  c_156 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_74, p_55, q_55);
  t = lookup_table_0_1(c_156, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(p_55, q_55, d_156, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_74, p_55, q_55);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_156 = NULL,i_156 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_156 = NULL,k_156 = NULL,l_156 = NULL;
      t = term_u_75;
      t = j_0(t);
      j_156 = t;
      t = term_m_76;
      k_156 = t;
      t = term_n_76;
      l_156 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_76, term_n_76, j_156);
      t = f_14(k_156, l_156, j_156, t);
      _fail(t);
    }
  else
    {
      ATerm o_156 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_156 = ATgetFirst((ATermList) t);
          i_156 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_156;
      t = d_0(t);
      t = term_u_75;
      t = g_0(t);
      o_156 = t;
      t = (ATerm) ATinsert(CheckATermList(i_156), o_156);
    }
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm q_156 = NULL;
  q_156 = t;
  if(match_string(t, "-o"))
    {
      t = q_156;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_156;
    }
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm r_156 = NULL,s_156 = NULL;
  r_156 = t;
  t = term_r_74;
  s_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_74, r_156);
  t = h_14(s_156, r_156, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_156);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = term_o_76;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_22, x_22, y_22, t);
  return(t);
}
static ATerm f_23 (ATerm t)
{
  ATerm u_156 = NULL;
  u_156 = t;
  if(match_string(t, "-i"))
    {
      t = u_156;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_156;
    }
  return(t);
}
static ATerm h_23 (ATerm t)
{
  ATerm v_156 = NULL,w_156 = NULL;
  v_156 = t;
  t = term_r_75;
  w_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_75, v_156);
  t = h_14(w_156, v_156, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_156);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  t = term_p_76;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_23, h_23, i_23, t);
  return(t);
}
static ATerm f_14 (ATerm k_60, ATerm l_60, ATerm j_60, ATerm t)
{
  ATerm y_156 = NULL,z_156 = NULL,a_157 = NULL,b_157 = NULL,c_157 = NULL;
  y_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
  {
    ATerm q_76 = t;
    int r_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_76 = ATgetArgument(t, 0);
            ATerm t_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
        t = e_14(k_60, l_60, t);
        LocalPopChoice(r_76);
      }
    else
      {
        t = q_76;
        t = (ATerm) ATempty;
      }
  }
  z_156 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_60, l_60, (ATerm) ATinsert(CheckATermList(z_156), j_60));
  t = lookup_table_0_1(k_60, t);
  c_157 = t;
  t = (ATerm) ATinsert(CheckATermList(z_156), j_60);
  a_157 = t;
  t = c_157;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(l_60, a_157, b_157, t);
  t = y_156;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm j_157 = NULL,k_157 = NULL,l_157 = NULL,m_157 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_157 = NULL,o_157 = NULL,p_157 = NULL;
      t = term_u_75;
      t = v_0(t);
      n_157 = t;
      t = term_m_76;
      o_157 = t;
      t = term_n_76;
      p_157 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_76, term_n_76, n_157);
      t = f_14(o_157, p_157, n_157, t);
      _fail(t);
    }
  else
    {
      ATerm t_157 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_157 = ATgetFirst((ATermList) t);
          k_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_157;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_157 = ATgetFirst((ATermList) t);
          m_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_157;
      t = p_0(t);
      t = l_157;
      t = r_0(t);
      t_157 = t;
      t = (ATerm) ATinsert(CheckATermList(m_157), t_157);
    }
  return(t);
}
static ATerm j_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm v_157 = NULL,w_157 = NULL;
  v_157 = t;
  if(match_string(t, "old"))
    {
      t = v_157;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = v_157;
    }
  t = term_k_74;
  w_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_74, v_157);
  t = h_14(w_157, v_157, t);
  t = term_u_75;
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_u_76;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_23, k_23, l_23, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_157 = NULL,z_157 = NULL,a_158 = NULL,b_158 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_75;
  t = whoami_0_0(t);
  y_157 = t;
  t = term_x_42;
  a_158 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_76), y_157);
  b_158 = t;
  t = SSL_printnl(a_158, b_158);
  t = term_z_42;
  z_157 = t;
  t = SSL_exit(z_157);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_158 = NULL,d_158 = NULL;
  t = term_j_74;
  c_158 = t;
  t = term_w_76;
  d_158 = t;
  t = term_x_76;
  t = e_14(c_158, d_158, t);
  return(t);
}
static ATerm z_13 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm y_76 = t;
  int z_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_43, h_43);
      LocalPopChoice(z_76);
    }
  else
    {
      t = y_76;
      t = SSL_addr(g_43, h_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t)
{
  ATerm f_158 = NULL,g_158 = NULL,h_158 = NULL;
  f_158 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_158;
      t = v_124(t);
    }
  else
    {
      ATerm k_158 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_158 = ATgetFirst((ATermList) t);
          h_158 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_158;
      t = foldr_2_0(v_124, w_124, t);
      k_158 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_158, k_158);
      t = w_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_23 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL;
  if(match_cons(t, sym__2))
    {
      a_70 = ATgetArgument(t, 0);
      b_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(a_70, b_70, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_158 = NULL,v_69 = NULL,w_69 = NULL;
  t = times_0_0(t);
  w_69 = t;
  t = SSL_explode_term(w_69);
  if(match_cons(t, sym__2))
    {
      ATerm a_77 = ATgetArgument(t, 0);
      v_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_69;
  t = foldr_2_0(m_23, p_23, t);
  n_158 = t;
  t = SSL_TicksToSeconds(n_158);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_158 = NULL,z_158 = NULL,a_159 = NULL;
  y_158 = t;
  if(match_cons(t, sym__2))
    {
      z_158 = ATgetArgument(t, 0);
      a_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_77 = t;
    int c_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_159;
        if((z_158 != t))
          {
            _fail(t);
          }
        t = y_158;
        LocalPopChoice(c_77);
      }
    else
      {
        t = b_77;
        t = (ATerm) ATmakeAppl(sym__2, z_158, a_159);
        {
          ATerm d_77 = t;
          int e_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_158, a_159);
              LocalPopChoice(e_77);
            }
          else
            {
              t = d_77;
              t = SSL_gtr(z_158, a_159);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_158, a_159);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_133 (ATerm), ATerm t)
{
  ATerm e_159 = NULL;
  e_159 = t;
  {
    ATerm f_77 = t;
    int g_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_159 = NULL,h_159 = NULL,i_159 = NULL;
        t = term_j_74;
        h_159 = t;
        t = term_z_75;
        i_159 = t;
        t = term_h_77;
        t = e_14(h_159, i_159, t);
        g_159 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_159, term_z_42);
        t = geq_0_0(t);
        t = e_159;
        t = x_133(t);
        LocalPopChoice(g_77);
      }
    else
      {
        t = f_77;
        t = e_159;
      }
  }
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm k_159 = NULL,l_159 = NULL,n_159 = NULL,o_159 = NULL;
  t = run_time_0_0(t);
  k_159 = t;
  t = term_u_75;
  t = whoami_0_0(t);
  l_159 = t;
  t = term_x_42;
  n_159 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_77), k_159), term_i_77), l_159);
  o_159 = t;
  t = SSL_printnl(n_159, o_159);
  t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_77), k_159), term_i_77), l_159));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_23, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_159 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_44;
  p_159 = t;
  t = SSL_exit(p_159);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm z_159 = NULL,a_160 = NULL;
  a_160 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_160;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_159 = ATgetArgument(t, 0);
          {
            ATerm r_70 = NULL,h_35 = NULL;
            t = SSLgetAnnotations(a_160);
            r_70 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_159);
            h_35 = t;
            t = SSLsetAnnotations(h_35, r_70);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_160;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm k_77 = t;
  int l_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_159 = NULL,t_159 = NULL;
      t = term_j_74;
      s_159 = t;
      t = term_m_77;
      t_159 = t;
      t = term_n_77;
      t = e_14(s_159, t_159, t);
      LocalPopChoice(l_77);
    }
  else
    {
      t = k_77;
      t = fetch_1_0(h_24, t);
    }
  t = n_136(t);
  return(t);
}
static ATerm i_14 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm c_160 = NULL;
  t = SSL_hashtable_put(e_64, c_64, d_64);
  c_160 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_160);
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_61, ATerm t)
{
  ATerm l_160 = NULL;
  t = table_hashtable_0_0(t);
  l_160 = t;
  {
    ATerm o_77 = t;
    int p_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_70 = NULL;
        t = l_160;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_14(w_61, x_70, t);
        LocalPopChoice(p_77);
      }
    else
      {
        t = o_77;
        {
          ATerm c_71 = NULL;
          t = w_61;
          t = table_create_0_0(t);
          t = l_160;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_14(w_61, c_71, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_64, ATerm l_64, ATerm t)
{
  ATerm o_160 = NULL;
  t = SSL_hashtable_create(k_64, l_64);
  o_160 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_160);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_160 = NULL,q_160 = NULL,r_160 = NULL,t_160 = NULL,u_160 = NULL;
  p_160 = t;
  t = term_q_77;
  t_160 = t;
  t = term_r_77;
  u_160 = t;
  t = p_160;
  t = new_hashtable_0_2(t_160, u_160, t);
  q_160 = t;
  t = p_160;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(p_160, q_160, r_160, t);
  t = p_160;
  return(t);
}
static ATerm b_14 (ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm v_160 = NULL;
  t = SSL_hashtable_remove(i_64, h_64);
  v_160 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_160);
  return(t);
}
static ATerm c_14 (ATerm m_64, ATerm t)
{
  ATerm w_160 = NULL;
  t = SSL_hashtable_destroy(m_64);
  w_160 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_160);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_160 = NULL;
  t = SSL_table_hashtable();
  x_160 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_160);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_160 = NULL,z_160 = NULL,a_161 = NULL,b_161 = NULL;
  y_160 = t;
  t = table_hashtable_0_0(t);
  z_160 = t;
  t = lookup_table_0_1(y_160, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(b_161, t);
  t = z_160;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_14(y_160, a_161, t);
  t = y_160;
  return(t);
}
ATerm map_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  static ATerm q_161 (ATerm t)
  {
    ATerm n_161 = NULL,o_161 = NULL,p_161 = NULL;
    n_161 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_161;
      }
    else
      {
        ATerm h_71 = NULL,k_71 = NULL,l_71 = NULL,m_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_161 = ATgetFirst((ATermList) t);
            p_161 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_161);
        h_71 = t;
        t = o_161;
        t = w_117(t);
        k_71 = t;
        t = p_161;
        t = q_161(t);
        l_71 = t;
        t = (ATerm) ATinsert(CheckATermList(l_71), k_71);
        m_35 = t;
        t = SSLsetAnnotations(m_35, h_71);
      }
    return(t);
  }
  t = q_161(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm t_161 = NULL,u_161 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_161 = ATgetFirst((ATermList) t);
      u_161 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_161 = NULL,z_161 = NULL;
        static ATerm m_24 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_161)), not_null(z_161));
          return(t);
        }
        t = u_161;
        t = o_0(t);
        if(((y_161 != NULL) && (y_161 != t)))
          _fail(t);
        else
          y_161 = t;
        t = t_161;
        t = l_0(t);
        if(((z_161 != NULL) && (z_161 != t)))
          _fail(t);
        else
          z_161 = t;
        t = u_161;
        t = reverse_acc_2_0(l_0, m_24, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_75;
      t = o_0(t);
    }
  return(t);
}
static ATerm n_24 (ATerm t)
{
  ATerm f_162 = NULL,g_162 = NULL,h_162 = NULL,o_35 = NULL;
  h_162 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_162);
  f_162 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_162);
  o_35 = t;
  t = SSLsetAnnotations(o_35, f_162);
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm j_162 = NULL;
  j_162 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_162), term_s_77);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_162 = NULL,c_162 = NULL;
  ATerm t_77 = t;
  int u_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_162 = NULL,e_162 = NULL;
      t = term_j_74;
      d_162 = t;
      t = term_w_76;
      e_162 = t;
      t = term_x_76;
      t = e_14(d_162, e_162, t);
      LocalPopChoice(u_77);
    }
  else
    {
      t = t_77;
      t = fetch_1_0(n_24, t);
    }
  t = term_v_77;
  t = echo_0_0(t);
  t = term_m_76;
  b_162 = t;
  t = term_n_76;
  c_162 = t;
  t = term_w_77;
  t = e_14(b_162, c_162, t);
  t = reverse_acc_2_0(_id, t_24, t);
  t = map_1_0(x_24, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_118 (ATerm), ATerm t)
{
  static ATerm g_163 (ATerm t)
  {
    ATerm d_163 = NULL,e_163 = NULL,f_163 = NULL;
    d_163 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_163 = ATgetFirst((ATermList) t);
        f_163 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_77 = t;
      int y_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_71 = NULL,w_71 = NULL,r_35 = NULL;
          t = SSLgetAnnotations(d_163);
          t_71 = t;
          t = e_163;
          t = g_118(t);
          w_71 = t;
          t = (ATerm) ATinsert(CheckATermList(f_163), w_71);
          r_35 = t;
          t = SSLsetAnnotations(r_35, t_71);
          LocalPopChoice(y_77);
        }
      else
        {
          t = x_77;
          {
            ATerm e_72 = NULL,h_72 = NULL,s_35 = NULL;
            t = SSLgetAnnotations(d_163);
            e_72 = t;
            t = f_163;
            t = g_163(t);
            h_72 = t;
            t = (ATerm) ATinsert(CheckATermList(h_72), e_163);
            s_35 = t;
            t = SSLsetAnnotations(s_35, e_72);
          }
        }
    }
    return(t);
  }
  t = g_163(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_163 = NULL,l_163 = NULL,m_163 = NULL;
  k_163 = t;
  {
    ATerm z_77 = t;
    int a_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_163;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_78 = ATgetFirst((ATermList) t);
                ATerm c_78 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_163;
          }
        LocalPopChoice(a_78);
      }
    else
      {
        t = z_77;
        t = (ATerm) ATinsert(ATempty, k_163);
      }
  }
  l_163 = t;
  t = term_t_74;
  m_163 = t;
  t = SSL_printnl(m_163, l_163);
  t = k_163;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_163 = NULL,r_163 = NULL;
  t = term_j_74;
  q_163 = t;
  t = term_w_76;
  r_163 = t;
  t = term_x_76;
  t = e_14(q_163, r_163, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_14 (ATerm f_64, ATerm g_64, ATerm t)
{
  t = SSL_hashtable_get(g_64, f_64);
  return(t);
}
static ATerm e_14 (ATerm d_62, ATerm e_62, ATerm t)
{
  ATerm s_163 = NULL;
  t = lookup_table_0_1(d_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(e_62, s_163, t);
  return(t);
}
static ATerm y_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_24 (ATerm t)
{
  ATerm u_163 = NULL,v_163 = NULL;
  t = term_d_78;
  u_163 = t;
  t = term_u_75;
  v_163 = t;
  t = term_e_78;
  t = h_14(u_163, v_163, t);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_f_78;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm w_163 = NULL,x_163 = NULL,y_163 = NULL,z_163 = NULL;
  t = term_d_78;
  y_163 = t;
  t = term_u_75;
  z_163 = t;
  t = term_e_78;
  t = h_14(y_163, z_163, t);
  t = term_g_78;
  w_163 = t;
  t = term_u_75;
  x_163 = t;
  t = term_h_78;
  t = h_14(w_163, x_163, t);
  t = term_i_78;
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_j_78;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_78 = t;
  int l_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_24, z_24, a_25, t);
      LocalPopChoice(l_78);
    }
  else
    {
      t = k_78;
      t = Option_3_0(b_25, c_25, d_25, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t)
{
  ATerm a_164 = NULL,b_164 = NULL,c_164 = NULL,d_164 = NULL,e_164 = NULL,f_164 = NULL,g_36 = NULL;
  f_164 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_164 = ATgetFirst((ATermList) t);
      c_164 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_164);
  a_164 = t;
  t = b_164;
  t = m_96(t);
  d_164 = t;
  t = c_164;
  t = n_96(t);
  e_164 = t;
  t = (ATerm) ATinsert(CheckATermList(e_164), d_164);
  g_36 = t;
  t = SSLsetAnnotations(g_36, a_164);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_138 (ATerm), ATerm t)
{
  ATerm k_164 = NULL,l_164 = NULL,m_164 = NULL,n_164 = NULL,p_164 = NULL,q_164 = NULL,m_36 = NULL;
  k_164 = t;
  {
    ATerm m_78 = t;
    int n_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_78;
        t = q_138(t);
        LocalPopChoice(n_78);
      }
    else
      {
        t = m_78;
      }
  }
  t = k_164;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_164 = ATgetFirst((ATermList) t);
      n_164 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_164);
  l_164 = t;
  t = term_w_76;
  q_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_76, m_164);
  t = h_14(q_164, m_164, t);
  t = n_164;
  {
    static ATerm a_165 (ATerm t)
    {
      ATerm p_78 = t;
      int q_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_78 = t;
          int s_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_164 = NULL;
              t_164 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_164;
              LocalPopChoice(s_78);
            }
          else
            {
              t = r_78;
              t = q_138(t);
              t = Cons_2_0(_id, a_165, t);
            }
          LocalPopChoice(q_78);
        }
      else
        {
          t = p_78;
          {
            ATerm w_164 = NULL,x_164 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_164 = ATgetFirst((ATermList) t);
                x_164 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_164), (ATerm) ATmakeAppl(sym_Undefined_1, w_164));
          }
        }
      return(t);
    }
    t = a_165(t);
  }
  p_164 = t;
  t = (ATerm) ATinsert(CheckATermList(p_164), (ATerm) ATmakeAppl(sym_Program_1, m_164));
  m_36 = t;
  t = SSLsetAnnotations(m_36, l_164);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm n_165 = NULL;
  n_165 = t;
  if(match_string(t, "--help"))
    {
      t = n_165;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_165;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_165;
        }
    }
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm o_165 = NULL,p_165 = NULL;
  t = term_m_77;
  o_165 = t;
  t = term_u_75;
  p_165 = t;
  t = term_t_78;
  t = h_14(o_165, p_165, t);
  t = term_u_78;
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = term_v_78;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_138 (ATerm), ATerm t)
{
  ATerm f_165 = NULL,g_165 = NULL,h_165 = NULL,i_165 = NULL,j_165 = NULL,k_165 = NULL,l_165 = NULL,m_165 = NULL;
  h_165 = t;
  t = term_m_76;
  i_165 = t;
  t = term_w_78;
  t = lookup_table_0_1(i_165, t);
  m_165 = t;
  t = term_n_76;
  j_165 = t;
  t = (ATerm) ATempty;
  k_165 = t;
  t = m_165;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(j_165, k_165, l_165, t);
  t = h_165;
  {
    static ATerm h_25 (ATerm t)
    {
      ATerm x_78 = t;
      int y_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_138(t);
          LocalPopChoice(y_78);
        }
      else
        {
          t = x_78;
          {
            ATerm z_78 = t;
            int a_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_25, o_25, p_25, t);
                LocalPopChoice(a_79);
              }
            else
              {
                t = z_78;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_25, t);
  }
  {
    ATerm b_79 = t;
    int c_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_166 = NULL;
        a_166 = t;
        {
          ATerm d_79 = t;
          int e_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_72 = NULL;
              t = a_166;
              {
                ATerm f_79 = t;
                int g_79 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_72 = NULL,t_72 = NULL;
                    t = term_j_74;
                    s_72 = t;
                    t = term_m_77;
                    t_72 = t;
                    t = term_n_77;
                    t = e_14(s_72, t_72, t);
                    LocalPopChoice(g_79);
                  }
                else
                  {
                    t = f_79;
                    t = fetch_1_0(q_25, t);
                  }
              }
              t = a_166;
              t = default_system_usage_0_0(t);
              t = term_l_44;
              r_72 = t;
              t = SSL_exit(r_72);
              LocalPopChoice(e_79);
            }
          else
            {
              t = d_79;
              {
                ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL;
                t = term_j_74;
                y_72 = t;
                t = term_d_78;
                z_72 = t;
                t = term_h_79;
                t = e_14(y_72, z_72, t);
                t = a_166;
                t = default_system_about_0_0(t);
                t = term_l_44;
                x_72 = t;
                t = SSL_exit(x_72);
              }
            }
        }
        LocalPopChoice(c_79);
      }
    else
      {
        t = b_79;
        {
          ATerm i_79 = t;
          int j_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_166 = NULL,c_166 = NULL,d_166 = NULL;
              static ATerm r_25 (ATerm t)
              {
                ATerm e_166 = NULL,f_166 = NULL,g_166 = NULL,o_36 = NULL;
                g_166 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_166 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_166);
                e_166 = t;
                t = f_166;
                if(((f_165 != NULL) && (f_165 != t)))
                  _fail(t);
                else
                  f_165 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_166);
                o_36 = t;
                t = SSLsetAnnotations(o_36, e_166);
                return(t);
              }
              t = fetch_1_0(r_25, t);
              t = term_x_42;
              c_166 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_165)), term_k_79);
              d_166 = t;
              t = SSL_printnl(c_166, d_166);
              t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_165)), term_k_79));
              t = default_system_usage_0_0(t);
              t = term_z_42;
              b_166 = t;
              t = SSL_exit(b_166);
              LocalPopChoice(j_79);
            }
          else
            {
              t = i_79;
            }
        }
      }
  }
  g_165 = t;
  t = term_m_76;
  t = table_destroy_0_0(t);
  t = g_165;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t)
{
  ATerm l_166 = NULL,m_166 = NULL,n_166 = NULL,o_166 = NULL,p_166 = NULL;
  t = parse_options_1_0(p_136, t);
  l_166 = t;
  t = term_l_79;
  t = table_create_0_0(t);
  t = term_l_79;
  m_166 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_79, term_m_79, l_166);
  t = lookup_table_0_1(m_166, t);
  p_166 = t;
  t = term_m_79;
  n_166 = t;
  t = p_166;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(n_166, l_166, o_166, t);
  t = l_166;
  t = r_136(t);
  {
    ATerm n_79 = t;
    int o_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_136, t);
        LocalPopChoice(o_79);
      }
    else
      {
        t = n_79;
        {
          ATerm p_79 = t;
          int q_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_136(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_79);
            }
          else
            {
              t = p_79;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_25 (ATerm t)
{
  ATerm r_79 = t;
  int s_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(s_79);
    }
  else
    {
      t = r_79;
      {
        ATerm t_79 = t;
        int u_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_79);
          }
        else
          {
            t = t_79;
            {
              ATerm v_79 = t;
              int w_79 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(w_79);
                }
              else
                {
                  t = v_79;
                  {
                    ATerm x_79 = t;
                    int y_79 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(u_25, v_25, y_25, t);
                        LocalPopChoice(y_79);
                      }
                    else
                      {
                        t = x_79;
                        {
                          ATerm z_79 = t;
                          int a_80 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_80);
                            }
                          else
                            {
                              t = z_79;
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
static ATerm t_25 (ATerm t)
{
  t = input_1_0(a_26, t);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm r_166 = NULL,s_166 = NULL;
  t = term_w_74;
  r_166 = t;
  t = term_u_75;
  s_166 = t;
  t = term_b_80;
  t = h_14(r_166, s_166, t);
  t = term_c_80;
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = term_d_80;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_25, default_usage_0_0, _id, t_25, t);
  return(t);
}

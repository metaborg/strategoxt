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
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
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
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym_DynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_GenDynRules_1;
Symbol sym_SetDynRule_2;
Symbol sym_DynRuleScopeId_1;
Symbol sym_DynRuleId_1;
Symbol sym_RDecT_3;
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
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
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
}
ATerm term_i_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_f_55;
ATerm term_c_55;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_g_54;
ATerm term_s_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_u_52;
ATerm term_s_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_h_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_c_51;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_q_49;
ATerm term_n_49;
ATerm term_l_48;
ATerm term_j_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_d_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_b_44;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_j_34;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_d_32;
ATerm term_j_26;
ATerm term_t_25;
ATerm term_f_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_p_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Op_2, term_d_19, (ATerm) ATempty);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_19);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_18);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Op_2, term_l_21, (ATerm) ATempty);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_21);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Call_2, term_e_22, (ATerm) ATempty);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Call_2, term_b_24, (ATerm) ATempty);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Call_2, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_b_18);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_a_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_35);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_36);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_36);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_37);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labelled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_44);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_44);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_w_47);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_d_48);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_j_48);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_t_49);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym__2, term_c_50, term_d_50);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_50);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym__2, term_i_50, term_w_49);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_f_51);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_c_50);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_s_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym__2, term_u_50, term_v_50);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__2, term_l_53, term_w_49);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_o_53, term_w_49);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym__2, term_s_52, term_w_49);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym__3, term_u_50, term_v_50, (ATerm) ATempty);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_l_53);
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_w_49);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_99 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm t_8 (ATerm k_131 (ATerm), ATerm x_75, ATerm v_75, ATerm w_75, ATerm a_76, ATerm y_75, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm k_131 (ATerm), ATerm t);
static ATerm g_19 (ATerm l_13, ATerm m_13, ATerm t);
static ATerm h_19 (ATerm y_13, ATerm z_13, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm b_130 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm v_8 (ATerm c_66, ATerm d_66, ATerm e_66, ATerm t);
static ATerm k_30 (ATerm o_29, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm z_8 (ATerm p_61, ATerm q_61, ATerm r_61, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm a_9 (ATerm j_131 (ATerm), ATerm e_75, ATerm b_75, ATerm c_75, ATerm l_75, ATerm p_75, ATerm q_75, ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_100 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm e_131 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm c_9 (ATerm o_73, ATerm n_73, ATerm t);
ATerm repeat_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm y_106 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm debug_1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm u_78 (ATerm k_78, ATerm t);
static ATerm v_78 (ATerm m_78, ATerm t);
static ATerm m_7 (ATerm t);
ATerm DowngradeScopeId_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm convert_new_syntax_to_old_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm w_130 (ATerm), ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm k_9 (ATerm z_109 (ATerm), ATerm s_29, ATerm r_29, ATerm t);
static ATerm l_9 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm w_29, ATerm v_29, ATerm t);
static ATerm m_9 (ATerm u_109 (ATerm), ATerm q_29, ATerm p_29, ATerm t);
ATerm genzip_4_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm r_9 (ATerm z_640, ATerm e_641, ATerm p_60, ATerm t);
ATerm while_not_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm f_99 (ATerm u_96, ATerm v_96, ATerm w_96, ATerm t);
static ATerm o_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm free_vars_3_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm d_99 (ATerm), ATerm t);
static ATerm v_9 (ATerm j_54, ATerm k_54, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm u_100 (ATerm), ATerm t);
static ATerm w_9 (ATerm x_118 (ATerm), ATerm u_43, ATerm s_43, ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm x_9 (ATerm d_54, ATerm e_54, ATerm t);
ATerm end_scope_1_0 (ATerm u_118 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_118 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm v_118 (ATerm), ATerm w_118 (ATerm), ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm r_113 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_106 (ATerm), ATerm t);
static ATerm p_107 (ATerm h_107, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_10 (ATerm y_131, ATerm u_131, ATerm t);
ATerm foldr_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm b_10 (ATerm k_39, ATerm l_39, ATerm t);
static ATerm c_10 (ATerm o_23, ATerm p_23, ATerm t);
static ATerm e_10 (ATerm f_105 (ATerm), ATerm s_171, ATerm u_23, ATerm t);
static ATerm d_10 (ATerm k_23, ATerm l_23, ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
ATerm output_1_0 (ATerm d_124 (ATerm), ATerm t);
static ATerm a_115 (ATerm u_114, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_10 (ATerm q_23, ATerm t);
static ATerm g_10 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm h_10 (ATerm m_39, ATerm n_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_116 (ATerm k_115, ATerm t);
static ATerm m_116 (ATerm o_115, ATerm p_115, ATerm q_115, ATerm t);
static ATerm n_116 (ATerm y_115, ATerm z_115, ATerm a_116, ATerm t);
static ATerm i_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_124 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_10 (ATerm d_49, ATerm e_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm p_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_10 (ATerm y_53, ATerm z_53, ATerm x_53, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm t_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_10 (ATerm g_42, ATerm h_42, ATerm t);
ATerm foldr_2_0 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_121 (ATerm), ATerm t);
static ATerm b_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_17 (ATerm t);
ATerm need_help_1_0 (ATerm u_123 (ATerm), ATerm t);
static ATerm s_10 (ATerm q_57, ATerm r_57, ATerm s_57, ATerm t);
ATerm lookup_table_0_1 (ATerm k_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm y_57, ATerm z_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_10 (ATerm v_57, ATerm w_57, ATerm t);
static ATerm m_10 (ATerm a_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_10 (ATerm t_57, ATerm u_57, ATerm t);
static ATerm o_10 (ATerm r_55, ATerm s_55, ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_125 (ATerm), ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
ATerm parse_options_1_0 (ATerm w_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_0 = NULL,u_0 = NULL,v_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      y_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, y_0, z_0);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          y_0 = ATgetArgument(t, 0);
          t = y_0;
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
              t = term_a_18;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              y_0 = ATgetArgument(t, 0);
              t = y_0;
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
                  t = term_a_18;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  y_0 = ATgetArgument(t, 0);
                  t = y_0;
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
                      t = term_b_18;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      y_0 = ATgetArgument(t, 0);
                      z_0 = ATgetArgument(t, 1);
                      v_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_0, (ATerm) ATmakeAppl(sym_Op_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, v_0), y_0)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          y_0 = ATgetArgument(t, 0);
                          z_0 = ATgetArgument(t, 1);
                          v_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, v_0)), y_0), (ATerm) ATmakeAppl(sym_Build_1, z_0)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              y_0 = ATgetArgument(t, 0);
                              z_0 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_0, (ATerm) ATmakeAppl(sym_Match_1, z_0));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  y_0 = ATgetArgument(t, 0);
                                  z_0 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_0), z_0);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      y_0 = ATgetArgument(t, 0);
                                      z_0 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_0), y_0);
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
ATerm topdown_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(c_99, t);
    return(t);
  }
  t = c_99(t);
  t = SRTS_all(b_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm e_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_5);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            {
              ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_5 = ATgetArgument(t, 0);
                  h_5 = ATgetArgument(t, 1);
                  i_5 = ATgetArgument(t, 2);
                  k_5 = ATgetArgument(t, 3);
                  t = i_5;
                  t = map_1_0(s_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_5 = ATgetArgument(t, 0);
                      h_5 = ATgetArgument(t, 1);
                      i_5 = ATgetArgument(t, 2);
                      k_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_5;
                  t = map_1_0(w_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm i_6 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_6 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_18);
      t = i_6;
    }
  else
    {
      t = h_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_6;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm t_6 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_6 = ATgetArgument(t, 0);
          {
            ATerm m_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_18);
      t = t_6;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_6;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm x_6 = NULL;
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_6);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm y_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_6);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            {
              ATerm a_7 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_7 = ATgetArgument(t, 0);
                  c_7 = ATgetArgument(t, 1);
                  e_7 = ATgetArgument(t, 2);
                  f_7 = ATgetArgument(t, 3);
                  t = e_7;
                  t = map_1_0(c_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_7 = ATgetArgument(t, 0);
                      c_7 = ATgetArgument(t, 1);
                      e_7 = ATgetArgument(t, 2);
                      f_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_7;
                  t = map_1_0(d_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm q_7 = NULL;
  ATerm r_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_7 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = q_7;
    }
  else
    {
      t = r_18;
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
static ATerm d_1 (ATerm t)
{
  ATerm f_8 = NULL;
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_8 = ATgetArgument(t, 0);
          {
            ATerm x_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_18);
      t = f_8;
    }
  else
    {
      t = v_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_8;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_8 = NULL;
  o_8 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL,j_0 = NULL,a_0 = NULL,u_1 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            s_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_8);
        j_0 = t;
        t = term_a_19;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_19, s_9);
        t = v_9(u_1, s_9, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_19) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, s_9);
        a_0 = t;
        t = SSLsetAnnotations(a_0, j_0);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
          ATerm x_1 = NULL;
          t = term_a_19;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_19, o_8);
          t = v_9(x_1, o_8, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm c_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_19) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = o_8;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, o_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  static ATerm l_11 (ATerm z_3, ATerm b_4, ATerm c_4, ATerm d_4, ATerm e_4, ATerm f_4, ATerm h_4, ATerm t)
  {
    ATerm m_4 = NULL,n_4 = NULL,p_4 = NULL,t_4 = NULL,v_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, e_4, term_e_19);
    {
      ATerm i_19 = t;
      if((PushChoice() == 0))
        {
          ATerm b_5 = NULL;
          if(match_cons(t, sym__2))
            {
              b_5 = ATgetArgument(t, 0);
              if((b_5 != ATgetArgument(t, 1)))
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
          t = i_19;
        }
    }
    t = new_0_0(t);
    m_4 = t;
    t = d_4;
    t = dummify_0_0(t);
    p_4 = t;
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_4;
          if((d_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, m_4);
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          t = p_4;
        }
    }
    n_4 = t;
    t = p_4;
    t = free_vars_3_0(h_0, m_0, tboundin_3_0, t);
    t = map_1_0(x_0, t);
    v_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_4, f_4);
    t = free_vars_3_0(a_1, b_1, tboundin_3_0, t);
    t = filter_1_0(e_1, t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_4, v_4);
    t = diff_0_0(t);
    y_4 = t;
    t = new_0_0(t);
    z_4 = t;
    t = z_3;
    t = t_0(t);
    a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, a_5, (ATerm) ATmakeAppl(sym_Op_2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(y_4), (ATerm) ATmakeAppl(sym_Str_1, z_4)))), p_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_3, b_4, c_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_4), d_4), e_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_3)))), n_4), (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(y_4), (ATerm) ATmakeAppl(sym_Str_1, z_4))))), f_4))));
    return(t);
  }
  ATerm t_9 = NULL,z_9 = NULL,v_10 = NULL,w_10 = NULL,z_10 = NULL,d_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  v_10 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      w_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
      d_11 = ATgetArgument(t, 2);
      g_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_11;
  if(match_cons(t, sym_Rule_3))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      j_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_11;
  if(match_cons(t, sym_Op_2))
    {
      t_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
      t = z_9;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = t_9;
          if(match_string(t, "Undefined"))
            {
              ATerm z_19 = t;
              int a_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
                  t = v_10;
                  t = new_0_0(t);
                  l_2 = t;
                  t = h_11;
                  t = dummify_0_0(t);
                  j_2 = t;
                  {
                    ATerm d_20 = t;
                    int j_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_2;
                        if((h_11 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                        LocalPopChoice(j_20);
                      }
                    else
                      {
                        t = d_20;
                        t = j_2;
                      }
                  }
                  m_2 = t;
                  t = w_10;
                  t = t_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, term_e_19), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_10, z_10, d_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), h_11), term_e_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_10)))), m_2), term_e_19)), (ATerm) ATmakeAppl(sym_Seq_2, j_11, term_a_18)))));
                  LocalPopChoice(a_20);
                }
              else
                {
                  t = z_19;
                  t = l_11(w_10, z_10, d_11, h_11, i_11, j_11, v_10, t);
                }
            }
          else
            {
              t = l_11(w_10, z_10, d_11, h_11, i_11, j_11, v_10, t);
            }
        }
      else
        {
          t = t_9;
          t = l_11(w_10, z_10, d_11, h_11, i_11, j_11, v_10, t);
        }
    }
  else
    {
      t = l_11(w_10, z_10, d_11, h_11, i_11, j_11, v_10, t);
    }
  return(t);
}
static ATerm t_8 (ATerm k_131 (ATerm), ATerm x_75, ATerm v_75, ATerm w_75, ATerm a_76, ATerm y_75, ATerm t)
{
  ATerm p_11 = NULL,r_11 = NULL,s_11 = NULL,x_11 = NULL;
  t = new_0_0(t);
  r_11 = t;
  t = a_76;
  t = dummify_0_0(t);
  p_11 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_11;
        if((a_76 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, r_11);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = p_11;
      }
  }
  s_11 = t;
  t = x_75;
  t = k_131(t);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_11, p_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, x_75, v_75, w_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, r_11), a_76), term_e_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, x_75)))), s_11), term_r_20)), (ATerm) ATmakeAppl(sym_Seq_2, y_75, term_a_18))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm k_131 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
      d_12 = ATgetArgument(t, 2);
      {
        ATerm s_20 = ATgetArgument(t, 3);
        if(match_cons(s_20, sym_Rule_3))
          {
            e_12 = ATgetArgument(s_20, 0);
            {
              ATerm t_20 = ATgetArgument(s_20, 1);
              if(match_cons(t_20, sym_Op_2))
                {
                  ATerm x_20 = ATgetArgument(t_20, 0);
                  if((ATgetSymbol((ATermAppl) x_20) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_21 = ATgetArgument(t_20, 1);
                    if(((ATgetType(b_21) != AT_LIST) || !(ATisEmpty(b_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            f_12 = ATgetArgument(s_20, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_8(k_131, b_12, c_12, d_12, e_12, f_12, t);
  return(t);
}
static ATerm g_19 (ATerm l_13, ATerm m_13, ATerm t)
{
  t = l_13;
  {
    ATerm g_21 = t;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,p_13 = NULL,w_13 = NULL,x_13 = NULL,f_0 = NULL;
        x_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_13 = ATgetFirst((ATermList) t);
            w_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_13);
        o_13 = t;
        t = w_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_13), p_13);
        f_0 = t;
        t = SSLsetAnnotations(f_0, o_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_18, l_13);
  return(t);
}
static ATerm h_19 (ATerm y_13, ATerm z_13, ATerm t)
{
  t = y_13;
  {
    ATerm i_21 = t;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,v_1 = NULL;
        e_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_14 = ATgetFirst((ATermList) t);
            d_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_14);
        b_14 = t;
        t = d_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_14), c_14);
        v_1 = t;
        t = SSLsetAnnotations(v_1, b_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_21, y_13);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,w_2 = NULL;
  t_14 = t;
  t = SSL_explode_term(t_14);
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
          {
            u_14 = ATgetFirst((ATermList) o_21);
            {
              ATerm p_21 = (ATerm) ATgetNext((ATermList) o_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_14);
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_21 = ATgetArgument(t, 1);
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            ATerm v_21 = ATgetFirst((ATermList) s_21);
            ATerm w_21 = (ATerm) ATgetNext((ATermList) s_21);
            if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
              {
                w_2 = ATgetFirst((ATermList) w_21);
                {
                  ATerm y_21 = (ATerm) ATgetNext((ATermList) w_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, w_2), u_14));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, s_15), r_15));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, v_15), u_15));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATinsert(ATinsert(ATempty, o_16), n_16));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATinsert(ATinsert(ATempty, r_16), q_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm f_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
      {
        ATerm r_14 = NULL;
        t = o_14;
        t = foldr_2_0(f_1, g_1, t);
        r_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, n_14, r_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          n_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, n_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              n_14 = ATgetArgument(t, 0);
              {
                ATerm f_3 = NULL;
                t = n_14;
                {
                  ATerm n_22 = t;
                  int o_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_p_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_x_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_y_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_z_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_a_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(o_22);
                    }
                  else
                    {
                      t = n_22;
                      {
                        ATerm i_3 = NULL;
                        t = SSL_explode_string(n_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(c_23) != AT_INT) || (ATgetInt((ATermInt) c_23) != 39)))
                              _fail(t);
                            {
                              ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
                                {
                                  i_3 = ATgetFirst((ATermList) d_23);
                                  {
                                    ATerm e_23 = (ATerm) ATgetNext((ATermList) d_23);
                                    if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                                      {
                                        ATerm g_23 = ATgetFirst((ATermList) e_23);
                                        if(((ATgetType(g_23) != AT_INT) || (ATgetInt((ATermInt) g_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm h_23 = (ATerm) ATgetNext((ATermList) e_23);
                                          if(((ATgetType(h_23) != AT_LIST) || !(ATisEmpty(h_23))))
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
                        t = i_3;
                      }
                    }
                }
                f_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_3);
              }
            }
          else
            {
              ATerm i_23 = t;
              int m_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      n_14 = ATgetArgument(t, 0);
                      {
                        ATerm r_23 = ATgetArgument(t, 1);
                      }
                      l_14 = ATgetArgument(t, 2);
                      f_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, n_14, l_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_14), (ATerm) ATempty));
                }
              else
                {
                  t = i_23;
                  {
                    ATerm s_23 = t;
                    int v_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            n_14 = ATgetArgument(t, 0);
                            {
                              ATerm w_23 = ATgetArgument(t, 1);
                            }
                            l_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, n_14, l_14, term_d_24);
                      }
                    else
                      {
                        t = s_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            n_14 = ATgetArgument(t, 0);
                            o_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, n_14, o_14, term_d_24);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                n_14 = ATgetArgument(t, 0);
                                o_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_1 (ATerm t)
                                  {
                                    t = o_14;
                                    return(t);
                                  }
                                  t = n_14;
                                  t = foldr_2_0(h_1, i_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    n_14 = ATgetArgument(t, 0);
                                    t = n_14;
                                    t = foldr_2_0(j_1, k_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        n_14 = ATgetArgument(t, 0);
                                        t = n_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            i_14 = ATgetFirst((ATermList) t);
                                            j_14 = (ATerm) ATgetNext((ATermList) t);
                                            t = j_14;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm h_24 = t;
                                                int l_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_19(n_14, m_14, t);
                                                    LocalPopChoice(l_24);
                                                  }
                                                else
                                                  {
                                                    t = h_24;
                                                    t = i_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_19(n_14, m_14, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_19(n_14, m_14, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            n_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, n_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                n_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, n_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    n_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, n_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        n_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, n_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            n_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                n_14 = ATgetArgument(t, 0);
                                                                o_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_14), o_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    n_14 = ATgetArgument(t, 0);
                                                                    o_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm l_1 (ATerm t)
                                                                      {
                                                                        t = o_14;
                                                                        return(t);
                                                                      }
                                                                      t = n_14;
                                                                      t = foldr_2_0(l_1, m_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        n_14 = ATgetArgument(t, 0);
                                                                        t = n_14;
                                                                        t = foldr_2_0(n_1, o_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            n_14 = ATgetArgument(t, 0);
                                                                            o_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_j_21, (ATerm) ATinsert(CheckATermList(o_14), n_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                n_14 = ATgetArgument(t, 0);
                                                                                t = n_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    i_14 = ATgetFirst((ATermList) t);
                                                                                    j_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = j_14;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm m_24 = t;
                                                                                        int n_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_19(n_14, m_14, t);
                                                                                            LocalPopChoice(n_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_24;
                                                                                            t = i_14;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_19(n_14, m_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_19(n_14, m_14, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_p_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        n_14 = ATgetArgument(t, 0);
                                                                                        o_14 = ATgetArgument(t, 1);
                                                                                        t = o_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            k_14 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_t_24, (ATerm) ATinsert(ATinsert(ATempty, k_14), n_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            n_14 = ATgetArgument(t, 0);
                                                                                            t = n_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                n_14 = ATgetArgument(t, 0);
                                                                                                o_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, n_14, o_14, term_b_18);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    n_14 = ATgetArgument(t, 0);
                                                                                                    o_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, n_14, o_14, term_b_18);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        n_14 = ATgetArgument(t, 0);
                                                                                                        o_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, n_14, (ATerm)ATempty, o_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            n_14 = ATgetArgument(t, 0);
                                                                                                            o_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, o_14, n_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                n_14 = ATgetArgument(t, 0);
                                                                                                                o_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, n_14, o_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    n_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, n_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        n_14 = ATgetArgument(t, 0);
                                                                                                                        o_14 = ATgetArgument(t, 1);
                                                                                                                        l_14 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_14, o_14, (ATerm)ATempty, l_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            n_14 = ATgetArgument(t, 0);
                                                                                                                            o_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_14, (ATerm)ATempty, (ATerm)ATempty, o_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                n_14 = ATgetArgument(t, 0);
                                                                                                                                o_14 = ATgetArgument(t, 1);
                                                                                                                                l_14 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_14, o_14, (ATerm)ATempty, l_14);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    n_14 = ATgetArgument(t, 0);
                                                                                                                                    o_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_14, (ATerm)ATempty, (ATerm)ATempty, o_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        n_14 = ATgetArgument(t, 0);
                                                                                                                                        o_14 = ATgetArgument(t, 1);
                                                                                                                                        l_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, n_14, o_14, (ATerm)ATempty, l_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            n_14 = ATgetArgument(t, 0);
                                                                                                                                            o_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, n_14, (ATerm)ATempty, (ATerm)ATempty, o_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm u_24 = ATgetArgument(t, 0);
                                                                                                                                                o_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, o_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      l_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      {
        ATerm o_19 = NULL,p_19 = NULL,s_19 = NULL,t_19 = NULL;
        t = k_19;
        t = new_0_0(t);
        o_19 = t;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        s_19 = t;
        t = new_0_0(t);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_19), s_19), p_19), o_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_19), (ATerm) ATmakeAppl(sym_Var_1, s_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, l_19, (ATerm)ATmakeAppl(sym_Var_1, o_19), (ATerm) ATmakeAppl(sym_Var_1, p_19)), (ATerm) ATmakeAppl(sym_BAM_3, j_19, (ATerm)ATmakeAppl(sym_Var_1, s_19), (ATerm) ATmakeAppl(sym_Var_1, t_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_w_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_19)), (ATerm) ATmakeAppl(sym_Var_1, p_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm u_19 = NULL,v_19 = NULL,b_20 = NULL,c_20 = NULL;
            t = k_19;
            t = new_0_0(t);
            b_20 = t;
            t = l_19;
            {
              static ATerm p_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                return(t);
              }
              t = oncetd_1_0(p_1, t);
            }
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_19)), not_null(u_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_Build_1, c_20))));
          }
        }
      else
        {
          ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              l_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_19;
          t = new_0_0(t);
          g_20 = t;
          t = new_0_0(t);
          h_20 = t;
          t = l_19;
          {
            static ATerm q_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_20 = ATgetArgument(t, 0);
                  if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
              return(t);
            }
            t = oncetd_1_0(q_1, t);
          }
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_20))))), (ATerm)ATmakeAppl(sym_Var_1, g_20), (ATerm) ATmakeAppl(sym_Op_2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_20)), not_null(e_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_24 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
        t = m_20;
        t = new_0_0(t);
        v_20 = t;
        t = n_20;
        {
          static ATerm r_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((p_20 != NULL) && (p_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_20 = ATgetArgument(t, 0);
                if(((u_20 != NULL) && (u_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_20), p_20);
            return(t);
          }
          t = pat_td_1_0(r_1, t);
        }
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_20))))));
        LocalPopChoice(e_25);
      }
    else
      {
        t = y_24;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
              t = m_20;
              t = new_0_0(t);
              z_20 = t;
              t = n_20;
              {
                static ATerm s_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_20 != NULL) && (y_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
                  return(t);
                }
                t = pat_td_1_0(s_1, t);
              }
              a_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_20)), not_null(y_20))));
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
                t = m_20;
                t = new_0_0(t);
                e_21 = t;
                t = n_20;
                {
                  static ATerm t_1 (ATerm t)
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
                  t = pat_td_1_0(t_1, t);
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
ATerm pat_td_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm i_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_130(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = i_25;
      {
        ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
        g_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_26 = ATgetArgument(t, 0);
            i_26 = ATgetArgument(t, 1);
            {
              ATerm g_4 = NULL,u_4 = NULL,c_3 = NULL;
              t = SSLgetAnnotations(g_26);
              g_4 = t;
              t = i_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = pat_td_1_0(b_130, t);
                  return(t);
                }
                t = fetch_1_0(w_1, t);
              }
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, h_26, u_4);
              c_3 = t;
              t = SSLsetAnnotations(c_3, g_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_26 = ATgetArgument(t, 0);
                i_26 = ATgetArgument(t, 1);
                {
                  ATerm n_25 = t;
                  int o_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_5 = NULL,v_5 = NULL,d_3 = NULL;
                      t = SSLgetAnnotations(g_26);
                      p_5 = t;
                      t = i_26;
                      t = pat_td_1_0(b_130, t);
                      v_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_26, v_5);
                      d_3 = t;
                      t = SSLsetAnnotations(d_3, p_5);
                      LocalPopChoice(o_25);
                    }
                  else
                    {
                      t = n_25;
                      {
                        ATerm e_6 = NULL,r_6 = NULL,e_3 = NULL;
                        t = SSLgetAnnotations(g_26);
                        e_6 = t;
                        t = h_26;
                        t = pat_td_1_0(b_130, t);
                        r_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, r_6, i_26);
                        e_3 = t;
                        t = SSLsetAnnotations(e_3, e_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_26 = ATgetArgument(t, 0);
                    i_26 = ATgetArgument(t, 1);
                    f_26 = ATgetArgument(t, 2);
                    {
                      ATerm y_7 = NULL,e_8 = NULL,g_3 = NULL;
                      t = SSLgetAnnotations(g_26);
                      y_7 = t;
                      t = f_26;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(b_130, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      e_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_26, i_26, e_8);
                      g_3 = t;
                      t = SSLsetAnnotations(g_3, y_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_26 = ATgetArgument(t, 0);
                        i_26 = ATgetArgument(t, 1);
                        f_26 = ATgetArgument(t, 2);
                        {
                          ATerm s_8 = NULL,d_9 = NULL,m_3 = NULL;
                          t = SSLgetAnnotations(g_26);
                          s_8 = t;
                          t = f_26;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(b_130, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          d_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, h_26, i_26, d_9);
                          m_3 = t;
                          t = SSLsetAnnotations(m_3, s_8);
                        }
                      }
                    else
                      {
                        ATerm u_9 = NULL,n_10 = NULL,n_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_26 = ATgetArgument(t, 0);
                            i_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_26);
                        u_9 = t;
                        t = i_26;
                        t = pat_td_1_0(b_130, t);
                        n_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_26, n_10);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, u_9);
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
  ATerm t_26 = NULL,y_26 = NULL;
  t_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL,a_27 = NULL,c_27 = NULL,e_27 = NULL;
        t = t_26;
        t = new_0_0(t);
        c_27 = t;
        t = y_26;
        {
          static ATerm a_2 (ATerm t)
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
            t = (ATerm) ATmakeAppl(sym_Var_1, c_27);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_27)), not_null(z_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_27)))), (ATerm) ATmakeAppl(sym_Build_1, e_27)));
        LocalPopChoice(r_25);
      }
    else
      {
        t = p_25;
        {
          ATerm v_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_27 = NULL,h_27 = NULL,i_27 = NULL;
              t = t_26;
              t = new_0_0(t);
              h_27 = t;
              t = y_26;
              {
                static ATerm b_2 (ATerm t)
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
                t = pat_td_1_0(b_2, t);
              }
              i_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_27)))), (ATerm) ATmakeAppl(sym_Build_1, i_27)));
              LocalPopChoice(y_25);
            }
          else
            {
              t = v_25;
              {
                ATerm j_27 = NULL,l_27 = NULL,n_27 = NULL,s_27 = NULL;
                t = t_26;
                t = new_0_0(t);
                n_27 = t;
                t = y_26;
                {
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((j_27 != NULL) && (j_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_27 = ATgetArgument(t, 0);
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
                  t = pat_td_1_0(c_2, t);
                }
                s_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_27), not_null(l_27), (ATerm) ATmakeAppl(sym_Var_1, n_27))), (ATerm) ATmakeAppl(sym_Build_1, s_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm z_25 = t;
  if((PushChoice() == 0))
    {
      ATerm j_28 = NULL,m_28 = NULL,n_28 = NULL,v_3 = NULL;
      n_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_28);
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_28);
      v_3 = t;
      t = SSLsetAnnotations(v_3, j_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_25;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm f_2 (ATerm t)
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
static ATerm g_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym__2))
        {
          q_28 = ATgetArgument(l_26, 0);
          r_28 = ATgetArgument(l_26, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            u_28 = ATgetArgument(n_26, 0);
            v_28 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_28), q_28), (ATerm) ATinsert(CheckATermList(v_28), r_28));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm w_28 = NULL,a_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      a_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_28, a_29);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(match_cons(b_27, sym__2))
        {
          c_29 = ATgetArgument(b_27, 0);
          d_29 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm d_27 = ATgetArgument(t, 1);
        if(match_cons(d_27, sym__2))
          {
            f_29 = ATgetArgument(d_27, 0);
            g_29 = ATgetArgument(d_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_29), c_29), (ATerm) ATinsert(CheckATermList(g_29), d_29));
  return(t);
}
static ATerm v_8 (ATerm c_66, ATerm d_66, ATerm e_66, ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,w_3 = NULL;
  t = e_66;
  t = fetch_1_0(d_2, t);
  t = e_66;
  t = genzip_4_0(e_2, f_2, g_2, LiftPrimArg_0_0, t);
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_28);
  d_28 = t;
  t = e_28;
  t = concat_0_0(t);
  g_28 = t;
  t = f_28;
  t = genzip_4_0(h_2, i_2, k_2, _id, t);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
  w_3 = t;
  t = SSLsetAnnotations(w_3, d_28);
  if(match_cons(t, sym__2))
    {
      a_28 = ATgetArgument(t, 0);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(match_cons(g_27, sym__2))
          {
            b_28 = ATgetArgument(g_27, 0);
            c_28 = ATgetArgument(g_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_28), (ATerm) ATmakeAppl(sym_CallT_3, c_66, d_66, c_28)));
  return(t);
}
static ATerm k_30 (ATerm o_29, ATerm t)
{
  ATerm u_29 = NULL;
  t = o_29;
  {
    ATerm k_27 = t;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,w_8 = NULL;
        a_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            z_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_30);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, z_29);
        w_8 = t;
        t = SSLsetAnnotations(w_8, y_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_27;
      }
  }
  t = new_0_0(t);
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_29)))), (ATerm) ATmakeAppl(sym_Var_1, u_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_30 = NULL,i_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_30 = ATgetArgument(t, 0);
      {
        ATerm m_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_30(b_30, t);
            LocalPopChoice(o_27);
          }
        else
          {
            t = m_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_18, (ATerm) ATmakeAppl(sym_Var_1, i_30)));
          }
      }
    }
  else
    {
      t = k_30(b_30, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm p_27 = t;
  if((PushChoice() == 0))
    {
      ATerm l_12 = NULL,m_12 = NULL,o_12 = NULL,h_9 = NULL;
      o_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_12);
      l_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_12);
      h_9 = t;
      t = SSLsetAnnotations(h_9, l_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_27;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_12 = ATgetFirst((ATermList) t);
      q_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_12, q_12);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      if(match_cons(q_27, sym__2))
        {
          r_12 = ATgetArgument(q_27, 0);
          s_12 = ATgetArgument(q_27, 1);
        }
      else
        _fail(t);
      {
        ATerm r_27 = ATgetArgument(t, 1);
        if(match_cons(r_27, sym__2))
          {
            t_12 = ATgetArgument(r_27, 0);
            u_12 = ATgetArgument(r_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_12), r_12), (ATerm) ATinsert(CheckATermList(u_12), s_12));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_12 = ATgetFirst((ATermList) t);
      w_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_12, w_12);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(match_cons(l_28, sym__2))
        {
          x_12 = ATgetArgument(l_28, 0);
          y_12 = ATgetArgument(l_28, 1);
        }
      else
        _fail(t);
      {
        ATerm s_28 = ATgetArgument(t, 1);
        if(match_cons(s_28, sym__2))
          {
            z_12 = ATgetArgument(s_28, 0);
            a_13 = ATgetArgument(s_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_12), x_12), (ATerm) ATinsert(CheckATermList(a_13), y_12));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_28 = t;
  if((PushChoice() == 0))
    {
      ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,m_11 = NULL;
      p_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_15);
      n_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_15);
      m_11 = t;
      t = SSLsetAnnotations(m_11, n_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_28;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm q_15 = NULL,z_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_15 = ATgetFirst((ATermList) t);
      z_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_15, z_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,g_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if(match_cons(x_28, sym__2))
        {
          a_16 = ATgetArgument(x_28, 0);
          b_16 = ATgetArgument(x_28, 1);
        }
      else
        _fail(t);
      {
        ATerm y_28 = ATgetArgument(t, 1);
        if(match_cons(y_28, sym__2))
          {
            g_16 = ATgetArgument(y_28, 0);
            h_16 = ATgetArgument(y_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_16), a_16), (ATerm) ATinsert(CheckATermList(h_16), b_16));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_16 = ATgetFirst((ATermList) t);
      j_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_16, j_16);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm s_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_28 = ATgetArgument(t, 0);
      if(match_cons(z_28, sym__2))
        {
          s_16 = ATgetArgument(z_28, 0);
          u_16 = ATgetArgument(z_28, 1);
        }
      else
        _fail(t);
      {
        ATerm l_29 = ATgetArgument(t, 1);
        if(match_cons(l_29, sym__2))
          {
            v_16 = ATgetArgument(l_29, 0);
            w_16 = ATgetArgument(l_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_16), s_16), (ATerm) ATinsert(CheckATermList(w_16), u_16));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
      w_34 = ATgetArgument(t, 2);
      {
        ATerm q_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,k_11 = NULL;
        t = w_34;
        t = fetch_1_0(o_2, t);
        t = w_34;
        t = genzip_4_0(p_2, q_2, r_2, LiftPrimArg_0_0, t);
        k_12 = t;
        if(match_cons(t, sym__2))
          {
            w_11 = ATgetArgument(t, 0);
            h_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_12);
        v_11 = t;
        t = w_11;
        t = concat_0_0(t);
        i_12 = t;
        t = h_12;
        t = genzip_4_0(s_2, t_2, u_2, _id, t);
        j_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
        k_11 = t;
        t = SSLsetAnnotations(k_11, v_11);
        if(match_cons(t, sym__2))
          {
            q_11 = ATgetArgument(t, 0);
            {
              ATerm t_29 = ATgetArgument(t, 1);
              if(match_cons(t_29, sym__2))
                {
                  t_11 = ATgetArgument(t_29, 0);
                  u_11 = ATgetArgument(t_29, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_11), (ATerm) ATmakeAppl(sym_PrimT_3, y_34, z_34, u_11)));
      }
    }
  else
    {
      ATerm g_14 = NULL,h_14 = NULL,v_14 = NULL,a_15 = NULL,g_15 = NULL,h_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL,g_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          y_34 = ATgetArgument(t, 0);
          z_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_34;
      t = fetch_1_0(v_2, t);
      t = z_34;
      t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
      m_15 = t;
      if(match_cons(t, sym__2))
        {
          g_15 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_15);
      a_15 = t;
      t = g_15;
      t = concat_0_0(t);
      j_15 = t;
      t = h_15;
      t = genzip_4_0(a_3, b_3, h_3, _id, t);
      l_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_15, l_15);
      g_12 = t;
      t = SSLsetAnnotations(g_12, a_15);
      if(match_cons(t, sym__2))
        {
          g_14 = ATgetArgument(t, 0);
          {
            ATerm g_30 = ATgetArgument(t, 1);
            if(match_cons(g_30, sym__2))
              {
                h_14 = ATgetArgument(g_30, 0);
                v_14 = ATgetArgument(g_30, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, g_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_14), (ATerm) ATmakeAppl(sym_PrimT_3, y_34, (ATerm)ATempty, v_14)));
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
      z_35 = ATgetArgument(t, 2);
      {
        ATerm z_17 = NULL,i_13 = NULL;
        t = SSLgetAnnotations(a_36);
        z_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_35, v_35, z_35);
        i_13 = t;
        t = SSLsetAnnotations(i_13, z_17);
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
  ATerm h_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_30;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm m_37 = NULL,o_37 = NULL,p_37 = NULL,s_37 = NULL;
  o_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
      m_37 = ATgetArgument(t, 2);
      {
        ATerm s_18 = NULL,k_13 = NULL;
        t = SSLgetAnnotations(o_37);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_37, s_37, m_37);
        k_13 = t;
        t = SSLsetAnnotations(k_13, s_18);
      }
    }
  else
    {
      ATerm y_19 = NULL,f_19 = NULL;
      if(match_cons(t, sym_App_2))
        {
          p_37 = ATgetArgument(t, 0);
          s_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_37);
      y_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, p_37, s_37);
      f_19 = t;
      t = SSLsetAnnotations(f_19, y_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm j_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_38;
  if(match_cons(t, sym_StratRule_3))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
      l_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_38), (ATerm) ATmakeAppl(sym_Where_1, l_38)), j_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_38 = ATgetArgument(t, 0);
          k_38 = ATgetArgument(t, 1);
          l_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_38;
      t = pureterm_0_0(t);
      t = k_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_38)), (ATerm) ATmakeAppl(sym_Where_1, l_38)), (ATerm) ATmakeAppl(sym_Match_1, j_38)));
    }
  return(t);
}
static ATerm z_8 (ATerm p_61, ATerm q_61, ATerm r_61, ATerm t)
{
  ATerm s_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  t = new_0_0(t);
  c_39 = t;
  t = p_61;
  {
    static ATerm l_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_30 = ATgetArgument(t, 0);
          if(match_cons(l_30, sym_Var_1))
            {
              if(((b_39 != NULL) && (b_39 != ATgetArgument(l_30, 0))))
                _fail(ATgetArgument(l_30, 0));
              else
                b_39 = ATgetArgument(l_30, 0);
            }
          else
            _fail(t);
          if(((z_38 != NULL) && (z_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_38 = ATgetArgument(t, 1);
          {
            ATerm m_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_39);
      return(t);
    }
    t = oncetd_1_0(l_3, t);
  }
  d_39 = t;
  t = q_61;
  {
    static ATerm o_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_30 = ATgetArgument(t, 0);
          if(match_cons(n_30, sym_Var_1))
            {
              if(((b_39 != NULL) && (b_39 != ATgetArgument(n_30, 0))))
                _fail(ATgetArgument(n_30, 0));
              else
                b_39 = ATgetArgument(n_30, 0);
            }
          else
            _fail(t);
          if(((a_39 != NULL) && (a_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_39 = ATgetArgument(t, 1);
          {
            ATerm o_30 = ATgetArgument(t, 2);
            if(match_cons(o_30, sym_CallT_3))
              {
                if(((s_38 != NULL) && (s_38 != ATgetArgument(o_30, 0))))
                  _fail(ATgetArgument(o_30, 0));
                else
                  s_38 = ATgetArgument(o_30, 0);
                {
                  ATerm q_30 = ATgetArgument(o_30, 1);
                  if(((ATgetType(q_30) != AT_LIST) || !(ATisEmpty(q_30))))
                    _fail(t);
                }
                {
                  ATerm r_30 = ATgetArgument(o_30, 2);
                  if(((ATgetType(r_30) != AT_LIST) || !(ATisEmpty(r_30))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_39);
      return(t);
    }
    t = oncetd_1_0(o_3, t);
  }
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_39, e_39, (ATerm) ATmakeAppl(sym_Seq_2, r_61, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(s_38), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_38), not_null(a_39), term_b_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_39)), (ATerm) ATmakeAppl(sym_Var_1, c_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_31 = t;
      int c_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_40 = NULL,p_40 = NULL,r_40 = NULL,v_40 = NULL,x_40 = NULL,y_40 = NULL;
          v_40 = t;
          if(match_cons(t, sym_SRule_1))
            {
              x_40 = ATgetArgument(t, 0);
              t = x_40;
              if(match_cons(t, sym_Rule_3))
                {
                  o_40 = ATgetArgument(t, 0);
                  p_40 = ATgetArgument(t, 1);
                  r_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = v_40;
              t = z_8(o_40, p_40, r_40, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm h_21 = NULL,k_21 = NULL,r_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  x_40 = ATgetArgument(t, 0);
                  y_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_40);
              h_21 = t;
              t = y_40;
              t = desugarRule_0_0(t);
              k_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, x_40, k_21);
              r_21 = t;
              t = SSLsetAnnotations(r_21, h_21);
            }
          LocalPopChoice(c_31);
        }
      else
        {
          t = b_31;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
    }
  t = repeat_2_0(q_3, _id, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
            k_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                p_42 = ATgetArgument(t, 0);
                q_42 = ATgetArgument(t, 1);
                r_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_42;
            t = v_8(p_42, q_42, r_42, t);
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm j_31 = t;
              int k_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(k_31);
                }
              else
                {
                  t = j_31;
                  {
                    ATerm l_31 = t;
                    int m_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(m_31);
                      }
                    else
                      {
                        t = l_31;
                        {
                          ATerm n_31 = t;
                          int o_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_31 = t;
                              int q_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_42 = NULL,z_42 = NULL,a_43 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_42;
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
                                          a_43 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, z_42, a_43);
                                    }
                                  LocalPopChoice(q_31);
                                }
                              else
                                {
                                  t = p_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(o_31);
                            }
                          else
                            {
                              t = n_31;
                              {
                                ATerm s_31 = t;
                                int t_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(t_31);
                                  }
                                else
                                  {
                                    t = s_31;
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,k_46 = NULL;
  c_46 = t;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_31);
        t = c_46;
        {
          ATerm y_31 = t;
          if((PushChoice() == 0))
            {
              ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,u_21 = NULL;
              i_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  g_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_22);
              d_22 = t;
              t = g_22;
              {
                ATerm z_31 = t;
                int a_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_23 = NULL;
                    t = term_a_19;
                    f_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_a_19, g_22);
                    t = v_9(f_23, g_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm b_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) b_32) != ATmakeSymbol("l_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = g_22;
                    LocalPopChoice(a_32);
                  }
                else
                  {
                    t = z_31;
                    {
                      ATerm b_23 = NULL,t_23 = NULL,t_21 = NULL,c_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          b_23 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(g_22);
                      t_23 = t;
                      t = term_a_19;
                      c_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_a_19, b_23);
                      t = v_9(c_24, b_23, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm c_32 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("l_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, b_23);
                      t_21 = t;
                      t = SSLsetAnnotations(t_21, t_23);
                    }
                  }
              }
              h_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
              u_21 = t;
              t = SSLsetAnnotations(u_21, d_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_31;
            }
        }
        t = term_m_21;
      }
    else
      {
        t = v_31;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_m_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                d_46 = ATgetArgument(t, 0);
                {
                  ATerm n_46 = NULL;
                  t = d_46;
                  t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
                  t = map_1_0(y_3, t);
                  n_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_32, n_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    d_46 = ATgetArgument(t, 0);
                    k_46 = ATgetArgument(t, 1);
                    {
                      ATerm a_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, d_46, k_46);
                      t = free_vars_3_0(a_4, i_4, tboundin_3_0, t);
                      t = map_1_0(l_4, t);
                      a_49 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_d_32, a_49);
                    }
                  }
                else
                  {
                    ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm e_32 = ATgetArgument(t, 0);
                        ATerm f_32 = ATgetArgument(t, 1);
                        ATerm g_32 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_h_32;
                    f_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_i_32);
                    g_24 = t;
                    t = SSL_printnl(f_24, g_24);
                    t = term_j_32;
                    e_24 = t;
                    t = SSL_exit(e_24);
                    t = (ATerm) ATinsert(ATempty, term_i_32);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm o_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_46);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm m_32 = t;
        int n_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_32);
          }
        else
          {
            t = m_32;
            {
              ATerm t_46 = NULL,u_46 = NULL,w_46 = NULL,a_47 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_46 = ATgetArgument(t, 0);
                  u_46 = ATgetArgument(t, 1);
                  w_46 = ATgetArgument(t, 2);
                  a_47 = ATgetArgument(t, 3);
                  t = w_46;
                  t = map_1_0(u_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_46 = ATgetArgument(t, 0);
                      u_46 = ATgetArgument(t, 1);
                      w_46 = ATgetArgument(t, 2);
                      a_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_46;
                  t = map_1_0(x_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm r_47 = NULL;
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_47 = ATgetArgument(t, 0);
          {
            ATerm q_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_32);
      t = r_47;
    }
  else
    {
      t = o_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_47;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm k_48 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_48 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = k_48;
    }
  else
    {
      t = r_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_48;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_48);
  return(t);
}
static ATerm a_4 (ATerm t)
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
static ATerm i_4 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            {
              ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_49 = ATgetArgument(t, 0);
                  k_49 = ATgetArgument(t, 1);
                  l_49 = ATgetArgument(t, 2);
                  m_49 = ATgetArgument(t, 3);
                  t = l_49;
                  t = map_1_0(j_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_49 = ATgetArgument(t, 0);
                      k_49 = ATgetArgument(t, 1);
                      l_49 = ATgetArgument(t, 2);
                      m_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_49;
                  t = map_1_0(k_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_49 = NULL;
  ATerm y_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_49 = ATgetArgument(t, 0);
          {
            ATerm b_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_33);
      t = z_49;
    }
  else
    {
      t = y_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_49;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm k_50 = NULL;
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_50 = ATgetArgument(t, 0);
          {
            ATerm g_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_33);
      t = k_50;
    }
  else
    {
      t = c_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_50;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm s_50 = NULL;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_50);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(r_3, t);
  return(t);
}
static ATerm o_4 (ATerm t)
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
            ATerm h_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_52;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_52), (ATerm) ATempty);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm b_53 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_53 = ATgetArgument(t, 0);
      t = b_53;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_53 = ATgetArgument(t, 0);
          {
            ATerm i_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_53;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_53);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm r_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_53);
  return(t);
}
static ATerm s_4 (ATerm t)
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
              ATerm w_53 = NULL,a_54 = NULL,b_54 = NULL,f_54 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_53 = ATgetArgument(t, 0);
                  a_54 = ATgetArgument(t, 1);
                  b_54 = ATgetArgument(t, 2);
                  f_54 = ATgetArgument(t, 3);
                  t = b_54;
                  t = map_1_0(w_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_53 = ATgetArgument(t, 0);
                      a_54 = ATgetArgument(t, 1);
                      b_54 = ATgetArgument(t, 2);
                      f_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_54;
                  t = map_1_0(x_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm u_54 = NULL;
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_54 = ATgetArgument(t, 0);
          {
            ATerm p_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_33);
      t = u_54;
    }
  else
    {
      t = n_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_54;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm g_55 = NULL;
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_55 = ATgetArgument(t, 0);
          {
            ATerm s_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_33);
      t = g_55;
    }
  else
    {
      t = q_33;
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
static ATerm c_5 (ATerm t)
{
  ATerm x_55 = NULL;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_55);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm y_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_55);
  return(t);
}
static ATerm f_5 (ATerm t)
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
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,f_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_56 = ATgetArgument(t, 0);
                  b_56 = ATgetArgument(t, 1);
                  c_56 = ATgetArgument(t, 2);
                  f_56 = ATgetArgument(t, 3);
                  t = c_56;
                  t = map_1_0(j_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_56 = ATgetArgument(t, 0);
                      b_56 = ATgetArgument(t, 1);
                      c_56 = ATgetArgument(t, 2);
                      f_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_56;
                  t = map_1_0(l_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm q_56 = NULL;
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_56 = ATgetArgument(t, 0);
          {
            ATerm z_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_33);
      t = q_56;
    }
  else
    {
      t = x_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_56;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm i_57 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_57 = ATgetArgument(t, 0);
          {
            ATerm d_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_34);
      t = i_57;
    }
  else
    {
      t = a_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_57;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm c_58 = NULL;
  c_58 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_58 = NULL,s_24 = NULL,x_21 = NULL,a_25 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            h_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_58);
        s_24 = t;
        t = term_a_19;
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_19, h_58);
        t = v_9(a_25, h_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm g_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_34) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_58);
        x_21 = t;
        t = SSLsetAnnotations(x_21, s_24);
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        {
          ATerm l_25 = NULL;
          t = term_a_19;
          l_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_19, c_58);
          t = v_9(l_25, c_58, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm h_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = c_58;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, c_58);
  return(t);
}
static ATerm a_9 (ATerm j_131 (ATerm), ATerm e_75, ATerm b_75, ATerm c_75, ATerm l_75, ATerm p_75, ATerm q_75, ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,x_51 = NULL,y_51 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,i_52 = NULL,l_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_75, term_e_19);
  {
    ATerm i_34 = t;
    if((PushChoice() == 0))
      {
        ATerm m_52 = NULL;
        if(match_cons(t, sym__2))
          {
            m_52 = ATgetArgument(t, 0);
            if((m_52 != ATgetArgument(t, 1)))
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
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, e_75);
  t = g_10(l_52, e_75, t);
  n_51 = t;
  t = term_l_34;
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_34, e_75);
  t = g_10(i_52, e_75, t);
  o_51 = t;
  t = new_0_0(t);
  p_51 = t;
  t = b_75;
  t = map_1_0(o_4, t);
  s_51 = t;
  t = c_75;
  t = map_1_0(q_4, t);
  t_51 = t;
  t = new_0_0(t);
  u_51 = t;
  t = l_75;
  t = dummify_0_0(t);
  x_51 = t;
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_51;
        if((l_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, u_51);
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        t = x_51;
      }
  }
  v_51 = t;
  t = x_51;
  t = free_vars_3_0(r_4, s_4, tboundin_3_0, t);
  t = map_1_0(c_5, t);
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_75, q_75);
  t = free_vars_3_0(d_5, f_5, tboundin_3_0, t);
  t = filter_1_0(m_5, t);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, d_52);
  t = diff_0_0(t);
  e_52 = t;
  t = new_0_0(t);
  f_52 = t;
  t = e_75;
  t = j_131(t);
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_52, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Str_1, f_52)))), x_51)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, o_51, b_75, c_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Str_1, f_52)))), l_75)), p_75, (ATerm) ATmakeAppl(sym_Seq_2, term_b_35, q_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, n_51, b_75, c_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_51), l_75), (ATerm)ATmakeAppl(sym_Var_1, p_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_75)))), v_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_51), s_51, t_51), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_u_34), (ATerm) ATmakeAppl(sym_Var_1, u_51)))))), (ATerm) ATmakeAppl(sym_Var_1, p_51)))))), (ATerm) ATmakeAppl(sym_RDefT_4, e_75, b_75, c_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_51), l_75), p_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_75)))), v_51), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Str_1, f_52)))), term_o_34))), q_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
      p_26 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          q_26 = ATgetArgument(t, 0);
          r_26 = ATgetArgument(t, 1);
          s_26 = ATgetArgument(t, 2);
          u_26 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_26;
      if(match_cons(t, sym_Rule_3))
        {
          v_26 = ATgetArgument(t, 0);
          w_26 = ATgetArgument(t, 1);
          x_26 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_26;
      t = a_9(o_5, q_26, r_26, s_26, v_26, w_26, x_26, t);
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(q_5, t);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_27))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_27))));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_27 = ATgetFirst((ATermList) t);
      w_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_27, w_27);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,k_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if(match_cons(i_35, sym__2))
        {
          x_27 = ATgetArgument(i_35, 0);
          y_27 = ATgetArgument(i_35, 1);
        }
      else
        _fail(t);
      {
        ATerm j_35 = ATgetArgument(t, 1);
        if(match_cons(j_35, sym__2))
          {
            z_27 = ATgetArgument(j_35, 0);
            k_28 = ATgetArgument(j_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_27), x_27), (ATerm) ATinsert(CheckATermList(k_28), y_27));
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_29 = NULL,m_29 = NULL,n_29 = NULL,x_29 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
      k_29 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          m_29 = ATgetArgument(t, 0);
          n_29 = ATgetArgument(t, 1);
          x_29 = ATgetArgument(t, 2);
          c_30 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = c_30;
      if(match_cons(t, sym_Rule_3))
        {
          d_30 = ATgetArgument(t, 0);
          e_30 = ATgetArgument(t, 1);
          f_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_29;
      t = a_9(w_5, m_29, n_29, x_29, d_30, e_30, f_30, t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(x_5, t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_30))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, s_30))));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_30 = ATgetFirst((ATermList) t);
      u_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_30, u_30);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      if(match_cons(q_35, sym__2))
        {
          v_30 = ATgetArgument(q_35, 0);
          w_30 = ATgetArgument(q_35, 1);
        }
      else
        _fail(t);
      {
        ATerm r_35 = ATgetArgument(t, 1);
        if(match_cons(r_35, sym__2))
          {
            x_30 = ATgetArgument(r_35, 0);
            y_30 = ATgetArgument(r_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_30), v_30), (ATerm) ATinsert(CheckATermList(y_30), w_30));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(c_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_68 = NULL;
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_68))));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_68 = ATgetFirst((ATermList) t);
      e_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_68, e_68);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(match_cons(w_35, sym__2))
        {
          f_68 = ATgetArgument(w_35, 0);
          g_68 = ATgetArgument(w_35, 1);
        }
      else
        _fail(t);
      {
        ATerm y_35 = ATgetArgument(t, 1);
        if(match_cons(y_35, sym__2))
          {
            h_68 = ATgetArgument(y_35, 0);
            i_68 = ATgetArgument(y_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_68), f_68), (ATerm) ATinsert(CheckATermList(i_68), g_68));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(j_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm m_68 = NULL;
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_68))));
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_26;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm n_68 = NULL,p_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_68 = ATgetFirst((ATermList) t);
      p_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_68, p_68);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if(match_cons(d_36, sym__2))
        {
          q_68 = ATgetArgument(d_36, 0);
          r_68 = ATgetArgument(d_36, 1);
        }
      else
        _fail(t);
      {
        ATerm e_36 = ATgetArgument(t, 1);
        if(match_cons(e_36, sym__2))
          {
            s_68 = ATgetArgument(e_36, 0);
            t_68 = ATgetArgument(e_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_68), q_68), (ATerm) ATinsert(CheckATermList(t_68), r_68));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL;
  z_67 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_68 = ATgetArgument(t, 0);
      {
        ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,z_21 = NULL;
        t = a_68;
        t = map_1_0(n_5, t);
        t = genzip_4_0(r_5, s_5, t_5, _id, t);
        e_26 = t;
        if(match_cons(t, sym__2))
          {
            b_26 = ATgetArgument(t, 0);
            c_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_26);
        a_26 = t;
        t = c_26;
        t = concat_0_0(t);
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_26, d_26);
        z_21 = t;
        t = SSLsetAnnotations(z_21, a_26);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_68 = ATgetArgument(t, 0);
          {
            ATerm b_29 = NULL,e_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,a_22 = NULL;
            t = a_68;
            t = map_1_0(u_5, t);
            t = genzip_4_0(y_5, z_5, a_6, _id, t);
            j_29 = t;
            if(match_cons(t, sym__2))
              {
                e_29 = ATgetArgument(t, 0);
                h_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_29);
            b_29 = t;
            t = h_29;
            t = concat_0_0(t);
            i_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_29, i_29);
            a_22 = t;
            t = SSLsetAnnotations(a_22, b_29);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_68 = ATgetArgument(t, 0);
              t = a_68;
              t = map_1_0(b_6, t);
              t = genzip_4_0(d_6, f_6, g_6, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_68;
              t = map_1_0(h_6, t);
              t = genzip_4_0(k_6, l_6, m_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_100 (ATerm), ATerm t)
{
  static ATerm b_69 (ATerm t)
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_100(t);
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = SRTS_one(b_69, t);
      }
    return(t);
  }
  t = b_69(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm k_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  o_69 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      n_69 = ATgetArgument(t, 0);
      {
        ATerm l_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_69;
            k_69 = t;
            t = o_69;
            LocalPopChoice(m_36);
          }
        else
          {
            t = l_36;
            t = o_69;
            k_69 = t;
            t = o_69;
          }
      }
    }
  else
    {
      t = o_69;
      k_69 = t;
      t = o_69;
    }
  t = term_o_36;
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_69, term_o_36);
  t = w_9(s_6, k_69, m_69, t);
  t = o_69;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm e_131 (ATerm), ATerm t)
{
  static ATerm p_69 (ATerm t)
  {
    static ATerm n_6 (ATerm t)
    {
      ATerm p_36 = t;
      int q_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_131(t);
          LocalPopChoice(q_36);
        }
      else
        {
          t = p_36;
          {
            ATerm f_69 = NULL,g_69 = NULL,j_69 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                f_69 = ATgetArgument(t, 0);
                g_69 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, f_69, g_69);
            {
              static ATerm p_6 (ATerm t)
              {
                t = f_69;
                t = map_1_0(q_6, t);
                t = g_69;
                t = p_69(t);
                if(((j_69 != NULL) && (j_69 != t)))
                  _fail(t);
                else
                  j_69 = t;
                return(t);
              }
              t = scope_2_0(o_6, p_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, f_69, not_null(j_69));
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_6, t);
    return(t);
  }
  t = p_69(t);
  return(t);
}
static ATerm u_6 (ATerm t)
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
static ATerm v_6 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm t_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_36);
          }
        else
          {
            t = t_36;
            {
              ATerm b_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_70 = ATgetArgument(t, 0);
                  v_70 = ATgetArgument(t, 1);
                  w_70 = ATgetArgument(t, 2);
                  x_70 = ATgetArgument(t, 3);
                  t = w_70;
                  t = map_1_0(w_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_70 = ATgetArgument(t, 0);
                      v_70 = ATgetArgument(t, 1);
                      w_70 = ATgetArgument(t, 2);
                      x_70 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_70;
                  t = map_1_0(z_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm a_73 = NULL;
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_73 = ATgetArgument(t, 0);
          {
            ATerm x_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_36);
      t = a_73;
    }
  else
    {
      t = v_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_73;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm v_73 = NULL;
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_73 = ATgetArgument(t, 0);
          {
            ATerm a_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_36);
      t = v_73;
    }
  else
    {
      t = y_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_73;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm h_76 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_76 = ATgetArgument(t, 0);
      t = h_76;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_76 = ATgetArgument(t, 0);
          {
            ATerm b_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_76;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm n_76 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_76 = ATgetArgument(t, 0);
      t = n_76;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_76 = ATgetArgument(t, 0);
          {
            ATerm c_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_76;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm r_76 = NULL;
  if(match_cons(t, sym__2))
    {
      r_76 = ATgetArgument(t, 0);
      if((r_76 != ATgetArgument(t, 1)))
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
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  y_69 = t;
  t = free_vars_3_0(u_6, v_6, tboundin_3_0, t);
  w_69 = t;
  t = y_69;
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_76 = NULL;
        ATerm g_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm j_37 = ATgetArgument(t, 0);
                ATerm k_37 = ATgetArgument(t, 1);
                d_76 = ATgetArgument(t, 2);
                {
                  ATerm l_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_37);
            t = d_76;
            t = map_1_0(b_7, t);
          }
        else
          {
            t = g_37;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm n_37 = ATgetArgument(t, 0);
                ATerm q_37 = ATgetArgument(t, 1);
                d_76 = ATgetArgument(t, 2);
                {
                  ATerm r_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = d_76;
            t = map_1_0(d_7, t);
          }
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = (ATerm) ATempty;
      }
  }
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_69, x_69);
  t = k_9(g_7, w_69, x_69, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm x_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
  b_77 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      a_77 = ATgetArgument(t, 0);
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_77;
            x_76 = t;
            t = b_77;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            t = b_77;
            x_76 = t;
            t = b_77;
          }
      }
    }
  else
    {
      t = b_77;
      x_76 = t;
      t = b_77;
    }
  t = term_o_36;
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_76, term_o_36);
  t = w_9(k_7, x_76, z_76, t);
  t = b_77;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm c_9 (ATerm o_73, ATerm n_73, ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
  static ATerm i_7 (ATerm t)
  {
    t = o_73;
    t = def_tvars_0_0(t);
    t = map_1_0(j_7, t);
    t = o_73;
    {
      static ATerm l_7 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((u_76 != NULL) && (u_76 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              u_76 = ATgetArgument(t, 0);
            if(((t_76 != NULL) && (t_76 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              t_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, u_76);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(l_7, t);
    }
    if(((v_76 != NULL) && (v_76 != t)))
      _fail(t);
    else
      v_76 = t;
    return(t);
  }
  t = scope_2_0(h_7, i_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_76)), not_null(v_76)), n_73);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm t)
{
  static ATerm c_77 (ATerm t)
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_98(t);
        t = c_77(t);
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = d_98(t);
      }
    return(t);
  }
  t = c_77(t);
  return(t);
}
ATerm listtd_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  static ATerm q_77 (ATerm t)
  {
    ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
    t = y_106(t);
    n_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_77;
      }
    else
      {
        ATerm r_31 = NULL,u_31 = NULL,f_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_77 = ATgetFirst((ATermList) t);
            p_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_77);
        r_31 = t;
        t = p_77;
        t = q_77(t);
        u_31 = t;
        t = (ATerm) ATinsert(CheckATermList(u_31), o_77);
        f_22 = t;
        t = SSLsetAnnotations(f_22, r_31);
      }
    return(t);
  }
  t = q_77(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,x_77 = NULL,y_77 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      x_77 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_77 = ATgetFirst((ATermList) t);
      v_77 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_a_38, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, v_77, y_77)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_77))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_77;
    }
  return(t);
}
ATerm debug_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
  d_78 = t;
  t = d_105(t);
  e_78 = t;
  t = term_h_32;
  f_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_78), e_78);
  g_78 = t;
  t = SSL_printnl(f_78, g_78);
  t = d_78;
  return(t);
}
static ATerm u_78 (ATerm k_78, ATerm t)
{
  t = SSL_is_string(k_78);
  return(t);
}
static ATerm v_78 (ATerm m_78, ATerm t)
{
  ATerm n_78 = NULL,p_78 = NULL,q_78 = NULL;
  t = term_h_32;
  p_78 = t;
  t = (ATerm) ATinsert(ATempty, term_b_38);
  q_78 = t;
  t = SSL_printnl(p_78, q_78);
  t = m_78;
  t = debug_1_0(m_7, t);
  t = term_j_32;
  n_78 = t;
  t = SSL_exit(n_78);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm DowngradeScopeId_0_0 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL;
  s_78 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      r_78 = ATgetArgument(t, 0);
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_78(s_78, t);
            LocalPopChoice(h_38);
          }
        else
          {
            t = g_38;
            t = r_78;
          }
      }
    }
  else
    {
      ATerm m_38 = t;
      int n_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_78(s_78, t);
          LocalPopChoice(n_38);
        }
      else
        {
          t = m_38;
          t = v_78(s_78, t);
        }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_78 = NULL;
      x_78 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm q_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_78;
      LocalPopChoice(p_38);
      {
        ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            ATerm r_38 = ATgetArgument(t, 0);
            if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
              {
                ATerm u_38 = ATgetFirst((ATermList) r_38);
                if(match_cons(u_38, sym_SetDynRule_2))
                  {
                    ATerm w_38 = ATgetArgument(u_38, 0);
                    if(match_cons(w_38, sym_DynRuleId_1))
                      {
                        ATerm x_38 = ATgetArgument(w_38, 0);
                        if(match_cons(x_38, sym_RDecT_3))
                          {
                            y_78 = ATgetArgument(x_38, 0);
                            z_78 = ATgetArgument(x_38, 1);
                            a_79 = ATgetArgument(x_38, 2);
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                    b_79 = ATgetArgument(u_38, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm v_38 = (ATerm) ATgetNext((ATermList) r_38);
                  if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_DynamicRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, y_78, z_78, a_79, b_79)));
      }
    }
  else
    {
      t = o_38;
      {
        ATerm y_38 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_79 = NULL;
            c_79 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm i_39 = ATgetArgument(t, 0);
                ATerm j_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_79;
            LocalPopChoice(g_39);
            {
              ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  d_79 = ATgetArgument(t, 0);
                  e_79 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_79;
              t = map_1_0(DowngradeScopeId_0_0, t);
              f_79 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, f_79, e_79);
            }
          }
        else
          {
            t = y_38;
          }
      }
    }
  return(t);
}
ATerm convert_new_syntax_to_old_0_0 (ATerm t)
{
  t = topdown_1_0(n_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = Cons_2_0(p_7, r_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,k_22 = NULL;
  w_79 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_79);
  t_79 = t;
  t = u_79;
  t = topdown_1_0(s_7, t);
  t = listtd_1_0(t_7, t);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_79);
  k_22 = t;
  t = SSLsetAnnotations(k_22, t_79);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = repeat_2_0(u_7, _id, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_79 = ATgetFirst((ATermList) t);
      a_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_9(z_79, a_80, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,m_22 = NULL,l_22 = NULL;
  t = convert_new_syntax_to_old_0_0(t);
  r_79 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_79);
  k_79 = t;
  t = l_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_79 = ATgetFirst((ATermList) t);
      o_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_79);
  m_79 = t;
  t = o_79;
  t = Cons_2_0(_id, o_7, t);
  p_79 = t;
  t = (ATerm) ATinsert(CheckATermList(p_79), n_79);
  l_22 = t;
  t = SSLsetAnnotations(l_22, m_79);
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_79);
  m_22 = t;
  t = SSLsetAnnotations(m_22, k_79);
  return(t);
}
ATerm tboundin_3_0 (ATerm w_130 (ATerm), ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,k_83 = NULL,l_83 = NULL;
  k_83 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_83 = ATgetArgument(t, 0);
      f_83 = ATgetArgument(t, 1);
      {
        ATerm z_32 = NULL,e_33 = NULL,f_33 = NULL,q_22 = NULL;
        t = SSLgetAnnotations(k_83);
        z_32 = t;
        t = l_83;
        t = y_130(t);
        e_33 = t;
        t = f_83;
        t = w_130(t);
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, e_33, f_33);
        q_22 = t;
        t = SSLsetAnnotations(q_22, z_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_83 = ATgetArgument(t, 0);
          f_83 = ATgetArgument(t, 1);
          g_83 = ATgetArgument(t, 2);
          h_83 = ATgetArgument(t, 3);
          {
            ATerm c_34 = NULL,k_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,r_22 = NULL;
            t = SSLgetAnnotations(k_83);
            c_34 = t;
            t = l_83;
            t = y_130(t);
            k_34 = t;
            t = f_83;
            t = y_130(t);
            p_34 = t;
            t = g_83;
            t = y_130(t);
            q_34 = t;
            t = h_83;
            t = w_130(t);
            r_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_34, p_34, q_34, r_34);
            r_22 = t;
            t = SSLsetAnnotations(r_22, c_34);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              l_83 = ATgetArgument(t, 0);
              f_83 = ATgetArgument(t, 1);
              g_83 = ATgetArgument(t, 2);
              h_83 = ATgetArgument(t, 3);
              {
                ATerm x_35 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,s_22 = NULL;
                t = SSLgetAnnotations(k_83);
                x_35 = t;
                t = l_83;
                t = y_130(t);
                f_36 = t;
                t = f_83;
                t = y_130(t);
                g_36 = t;
                t = g_83;
                t = y_130(t);
                h_36 = t;
                t = h_83;
                t = w_130(t);
                i_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_36, g_36, h_36, i_36);
                s_22 = t;
                t = SSLsetAnnotations(s_22, x_35);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  l_83 = ATgetArgument(t, 0);
                  {
                    ATerm f_37 = NULL,h_37 = NULL,t_22 = NULL;
                    t = SSLgetAnnotations(k_83);
                    f_37 = t;
                    t = l_83;
                    t = w_130(t);
                    h_37 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_37);
                    t_22 = t;
                    t = SSLsetAnnotations(t_22, f_37);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      l_83 = ATgetArgument(t, 0);
                      {
                        ATerm t_37 = NULL,w_37 = NULL,u_22 = NULL;
                        t = SSLgetAnnotations(k_83);
                        t_37 = t;
                        t = l_83;
                        t = w_130(t);
                        w_37 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, w_37);
                        u_22 = t;
                        t = SSLsetAnnotations(u_22, t_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          l_83 = ATgetArgument(t, 0);
                          {
                            ATerm f_38 = NULL,t_38 = NULL,v_22 = NULL;
                            t = SSLgetAnnotations(k_83);
                            f_38 = t;
                            t = l_83;
                            t = w_130(t);
                            t_38 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, t_38);
                            v_22 = t;
                            t = SSLsetAnnotations(v_22, f_38);
                          }
                        }
                      else
                        {
                          ATerm f_39 = NULL,h_39 = NULL,w_22 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              l_83 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(k_83);
                          f_39 = t;
                          t = l_83;
                          t = w_130(t);
                          h_39 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, h_39);
                          w_22 = t;
                          t = SSLsetAnnotations(w_22, f_39);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm w_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_84);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
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
              ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_84 = ATgetArgument(t, 0);
                  z_84 = ATgetArgument(t, 1);
                  a_85 = ATgetArgument(t, 2);
                  b_85 = ATgetArgument(t, 3);
                  t = a_85;
                  t = map_1_0(x_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_84 = ATgetArgument(t, 0);
                      z_84 = ATgetArgument(t, 1);
                      a_85 = ATgetArgument(t, 2);
                      b_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_85;
                  t = map_1_0(z_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm i_85 = NULL;
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_85 = ATgetArgument(t, 0);
          {
            ATerm y_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_39);
      t = i_85;
    }
  else
    {
      t = v_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_85;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm x_85 = NULL;
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_85 = ATgetArgument(t, 0);
          {
            ATerm b_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_40);
      t = x_85;
    }
  else
    {
      t = z_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_85;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm e_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_86);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
      {
        ATerm e_40 = t;
        int f_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_40);
          }
        else
          {
            t = e_40;
            {
              ATerm g_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_86 = ATgetArgument(t, 0);
                  i_86 = ATgetArgument(t, 1);
                  j_86 = ATgetArgument(t, 2);
                  k_86 = ATgetArgument(t, 3);
                  t = j_86;
                  t = map_1_0(c_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_86 = ATgetArgument(t, 0);
                      i_86 = ATgetArgument(t, 1);
                      j_86 = ATgetArgument(t, 2);
                      k_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_86;
                  t = map_1_0(d_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm w_86 = NULL;
  ATerm g_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_86 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_40);
      t = w_86;
    }
  else
    {
      t = g_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_86;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm l_87 = NULL;
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_87 = ATgetArgument(t, 0);
          {
            ATerm m_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_40);
      t = l_87;
    }
  else
    {
      t = k_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_87;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm r_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_87);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm n_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_40);
    }
  else
    {
      t = n_40;
      {
        ATerm t_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_40);
          }
        else
          {
            t = t_40;
            {
              ATerm t_87 = NULL,u_87 = NULL,w_87 = NULL,y_87 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_87 = ATgetArgument(t, 0);
                  u_87 = ATgetArgument(t, 1);
                  w_87 = ATgetArgument(t, 2);
                  y_87 = ATgetArgument(t, 3);
                  t = w_87;
                  t = map_1_0(i_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_87 = ATgetArgument(t, 0);
                      u_87 = ATgetArgument(t, 1);
                      w_87 = ATgetArgument(t, 2);
                      y_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_87;
                  t = map_1_0(j_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm k_88 = NULL;
  ATerm w_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_88 = ATgetArgument(t, 0);
          {
            ATerm a_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_40);
      t = k_88;
    }
  else
    {
      t = w_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_88;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm z_88 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_88 = ATgetArgument(t, 0);
          {
            ATerm d_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_41);
      t = z_88;
    }
  else
    {
      t = b_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_88;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm f_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_89);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      {
        ATerm i_41 = t;
        int j_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_41);
          }
        else
          {
            t = i_41;
            {
              ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_89 = ATgetArgument(t, 0);
                  i_89 = ATgetArgument(t, 1);
                  j_89 = ATgetArgument(t, 2);
                  k_89 = ATgetArgument(t, 3);
                  t = j_89;
                  t = map_1_0(m_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_89 = ATgetArgument(t, 0);
                      i_89 = ATgetArgument(t, 1);
                      j_89 = ATgetArgument(t, 2);
                      k_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_89;
                  t = map_1_0(n_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm u_89 = NULL;
  ATerm k_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_89 = ATgetArgument(t, 0);
          {
            ATerm r_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_41);
      t = u_89;
    }
  else
    {
      t = k_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_89;
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm f_90 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_90 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = f_90;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_90;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_84 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_84 = ATgetArgument(t, 0);
      t = q_84;
      t = free_vars_3_0(v_7, w_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_84 = ATgetArgument(t, 0);
          t = q_84;
          t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_84 = ATgetArgument(t, 0);
              t = q_84;
              t = free_vars_3_0(g_8, h_8, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_84 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_84;
              t = free_vars_3_0(k_8, l_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm a_91 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_91);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm x_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_41);
    }
  else
    {
      t = x_41;
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            {
              ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL,k_91 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_91 = ATgetArgument(t, 0);
                  d_91 = ATgetArgument(t, 1);
                  e_91 = ATgetArgument(t, 2);
                  k_91 = ATgetArgument(t, 3);
                  t = e_91;
                  t = map_1_0(r_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_91 = ATgetArgument(t, 0);
                      d_91 = ATgetArgument(t, 1);
                      e_91 = ATgetArgument(t, 2);
                      k_91 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_91;
                  t = map_1_0(u_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm w_91 = NULL;
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_91 = ATgetArgument(t, 0);
          {
            ATerm e_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_42);
      t = w_91;
    }
  else
    {
      t = c_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_91;
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm q_92 = NULL;
  ATerm f_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_92 = ATgetArgument(t, 0);
          {
            ATerm j_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_42);
      t = q_92;
    }
  else
    {
      t = f_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_92;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_90 = NULL,v_90 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_90 = ATgetArgument(t, 0);
      t = v_90;
      if(match_cons(t, sym_Rule_3))
        {
          n_90 = ATgetArgument(t, 0);
          {
            ATerm l_42 = ATgetArgument(t, 1);
          }
          {
            ATerm m_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_90;
      t = free_vars_3_0(p_8, q_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_90 = ATgetArgument(t, 0);
          {
            ATerm n_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_90;
    }
  return(t);
}
static ATerm k_9 (ATerm z_109 (ATerm), ATerm s_29, ATerm r_29, ATerm t)
{
  static ATerm v_93 (ATerm t)
  {
    ATerm n_93 = NULL,o_93 = NULL,q_93 = NULL;
    n_93 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_93 = ATgetFirst((ATermList) t);
            q_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_42 = t;
          int s_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_93;
              {
                static ATerm x_8 (ATerm t)
                {
                  t = r_29;
                  return(t);
                }
                t = l_9(z_109, x_8, o_93, q_93, t);
              }
              t = v_93(t);
              LocalPopChoice(s_42);
            }
          else
            {
              t = o_42;
              {
                ATerm u_39 = NULL,x_39 = NULL,j_23 = NULL;
                t = SSLgetAnnotations(n_93);
                u_39 = t;
                t = q_93;
                t = v_93(t);
                x_39 = t;
                t = (ATerm) ATinsert(CheckATermList(x_39), o_93);
                j_23 = t;
                t = SSLsetAnnotations(j_23, u_39);
              }
            }
        }
      }
    return(t);
  }
  t = s_29;
  t = v_93(t);
  return(t);
}
static ATerm l_9 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm w_29, ATerm v_29, ATerm t)
{
  t = d_110(t);
  {
    static ATerm y_8 (ATerm t)
    {
      ATerm f_94 = NULL;
      f_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_29, f_94);
      t = c_110(t);
      return(t);
    }
    t = fetch_1_0(y_8, t);
  }
  t = v_29;
  return(t);
}
static ATerm m_9 (ATerm u_109 (ATerm), ATerm q_29, ATerm p_29, ATerm t)
{
  static ATerm d_95 (ATerm t)
  {
    ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL;
    u_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_94;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_94 = ATgetFirst((ATermList) t);
            w_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_42 = t;
          int u_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_94;
              {
                static ATerm b_9 (ATerm t)
                {
                  t = p_29;
                  return(t);
                }
                t = l_9(u_109, b_9, v_94, w_94, t);
              }
              t = d_95(t);
              LocalPopChoice(u_42);
            }
          else
            {
              t = t_42;
              {
                ATerm h_40 = NULL,q_40 = NULL,n_23 = NULL;
                t = SSLgetAnnotations(u_94);
                h_40 = t;
                t = w_94;
                t = d_95(t);
                q_40 = t;
                t = (ATerm) ATinsert(CheckATermList(q_40), v_94);
                n_23 = t;
                t = SSLsetAnnotations(n_23, h_40);
              }
            }
        }
      }
    return(t);
  }
  t = q_29;
  t = d_95(t);
  return(t);
}
ATerm genzip_4_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t)
{
  static ATerm o_95 (ATerm t)
  {
    ATerm v_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_107(t);
        LocalPopChoice(y_42);
      }
    else
      {
        t = v_42;
        {
          ATerm f_95 = NULL,h_95 = NULL,i_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,x_23 = NULL;
          t = t_107(t);
          n_95 = t;
          if(match_cons(t, sym__2))
            {
              h_95 = ATgetArgument(t, 0);
              i_95 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_95);
          f_95 = t;
          t = h_95;
          t = v_107(t);
          l_95 = t;
          t = i_95;
          t = o_95(t);
          m_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_95, m_95);
          x_23 = t;
          t = SSLsetAnnotations(x_23, f_95);
          t = u_107(t);
        }
      }
    return(t);
  }
  t = o_95(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(((ATgetType(b_43) != AT_LIST) || !(ATisEmpty(b_43))))
        _fail(t);
      {
        ATerm c_43 = ATgetArgument(t, 1);
        if(((ATgetType(c_43) != AT_LIST) || !(ATisEmpty(c_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm v_95 = NULL,x_95 = NULL,z_95 = NULL,a_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
        {
          v_95 = ATgetFirst((ATermList) d_43);
          x_95 = (ATerm) ATgetNext((ATermList) d_43);
        }
      else
        _fail(t);
      {
        ATerm e_43 = ATgetArgument(t, 1);
        if(((ATgetType(e_43) == AT_LIST) && !(ATisEmpty(e_43))))
          {
            z_95 = ATgetFirst((ATermList) e_43);
            a_96 = (ATerm) ATgetNext((ATermList) e_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_95, z_95), (ATerm) ATmakeAppl(sym__2, x_95, a_96));
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL;
  if(match_cons(t, sym__2))
    {
      b_96 = ATgetArgument(t, 0);
      c_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_96), b_96);
  return(t);
}
static ATerm r_9 (ATerm z_640, ATerm e_641, ATerm p_60, ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  t = SSL_explode_term(e_641);
  if(match_cons(t, sym__2))
    {
      q_95 = ATgetArgument(t, 0);
      s_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_640);
  if(match_cons(t, sym__2))
    {
      if((q_95 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_95, s_95);
  t = genzip_4_0(e_9, f_9, g_9, _id, t);
  t_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_95, p_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  static ATerm e_96 (ATerm t)
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_98(t);
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        t = u_98(t);
        t = e_96(t);
      }
    return(t);
  }
  t = e_96(t);
  return(t);
}
ATerm for_3_0 (ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  t = w_98(t);
  t = while_not_2_0(x_98, y_98, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm p_96 = NULL;
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_96);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,z_23 = NULL;
  t_96 = t;
  if(match_cons(t, sym__2))
    {
      r_96 = ATgetArgument(t, 0);
      s_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_96);
  q_96 = t;
  t = s_96;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_96, s_96);
  z_23 = t;
  t = SSLsetAnnotations(z_23, q_96);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL;
  a_98 = t;
  if(match_cons(t, sym__2))
    {
      b_98 = ATgetArgument(t, 0);
      f_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_98;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_98 = ATgetFirst((ATermList) t);
      h_98 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_99(b_98, f_98, a_98, t);
            LocalPopChoice(i_43);
          }
        else
          {
            t = h_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_98), g_98), h_98);
          }
      }
    }
  else
    {
      t = f_99(b_98, f_98, a_98, t);
    }
  return(t);
}
static ATerm f_99 (ATerm u_96, ATerm v_96, ATerm w_96, ATerm t)
{
  ATerm x_96 = NULL,a_97 = NULL,a_24 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
  t = SSLgetAnnotations(w_96);
  x_96 = t;
  t = v_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_97 = ATgetFirst((ATermList) t);
      h_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_97;
  if(match_cons(t, sym__2))
    {
      f_97 = ATgetArgument(t, 0);
      g_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_97;
        if((f_97 != t))
          {
            _fail(t);
          }
        t = h_97;
        LocalPopChoice(k_43);
      }
    else
      {
        t = j_43;
        t = v_96;
        t = r_9(f_97, g_97, h_97, t);
      }
  }
  a_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_96, a_97);
  a_24 = t;
  t = SSLsetAnnotations(a_24, x_96);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm a_99 = NULL;
  if(match_cons(t, sym__2))
    {
      a_99 = ATgetArgument(t, 0);
      if((a_99 != ATgetArgument(t, 1)))
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
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_9, j_9, n_9, t);
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      {
        ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
        o_98 = t;
        if(match_cons(t, sym__2))
          {
            p_98 = ATgetArgument(t, 0);
            q_98 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_98;
        t = m_9(o_9, p_98, q_98, t);
      }
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(q_10, l_41, m_41, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm n_41 = NULL;
  if(match_cons(t, sym__2))
    {
      n_41 = ATgetArgument(t, 0);
      if((n_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(y_10, v_41, w_41, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm y_41 = NULL;
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      if((y_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm w_99 (ATerm t)
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_128(t);
        LocalPopChoice(p_43);
      }
    else
      {
        t = o_43;
        {
          ATerm q_43 = t;
          int r_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_99 = NULL,i_99 = NULL,e_41 = NULL,f_41 = NULL;
              h_99 = t;
              t = k_128(t);
              i_99 = t;
              t = h_99;
              {
                static ATerm p_9 (ATerm t)
                {
                  ATerm k_99 = NULL;
                  t = w_99(t);
                  k_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_99, i_99);
                  t = diff_0_0(t);
                  return(t);
                }
                t = l_128(p_9, w_99, q_9, t);
              }
              f_41 = t;
              t = SSL_explode_term(f_41);
              if(match_cons(t, sym__2))
                {
                  ATerm t_43 = ATgetArgument(t, 0);
                  e_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_41;
              t = foldr_3_0(y_9, k_10, _id, t);
              LocalPopChoice(r_43);
            }
          else
            {
              t = q_43;
              {
                ATerm p_41 = NULL,q_41 = NULL;
                q_41 = t;
                t = SSL_explode_term(q_41);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_43 = ATgetArgument(t, 0);
                    p_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_41;
                t = foldr_3_0(u_10, x_10, w_99, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_99(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  static ATerm a_11 (ATerm t)
  {
    t = bottomup_1_0(d_99, t);
    return(t);
  }
  t = SRTS_all(a_11, t);
  t = d_99(t);
  return(t);
}
static ATerm v_9 (ATerm j_54, ATerm k_54, ATerm t)
{
  ATerm x_99 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
  t = o_10(j_54, k_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_99 = ATgetFirst((ATermList) t);
      {
        ATerm w_43 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_99;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm t_100 = NULL,y_100 = NULL;
  t_100 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_42 = NULL;
        t = term_b_44;
        x_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_44, t_100);
        t = v_9(x_42, t_100, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_44 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_44) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, y_100, (ATerm) ATempty);
        LocalPopChoice(a_44);
      }
    else
      {
        t = y_43;
        {
          ATerm l_43 = NULL;
          t = term_b_44;
          l_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_44, t_100);
          t = v_9(l_43, t_100, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_44 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_44) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, y_100, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  static ATerm e_101 (ATerm t)
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_100(t);
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        t = SRTS_all(e_101, t);
      }
    return(t);
  }
  t = e_101(t);
  return(t);
}
static ATerm w_9 (ATerm x_118 (ATerm), ATerm u_43, ATerm s_43, ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL;
  i_101 = t;
  t = x_118(t);
  f_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_101, u_43, s_43);
  t = p_10(f_101, u_43, s_43, t);
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_101 = NULL;
        t = term_i_44;
        s_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_101, term_i_44);
        t = o_10(f_101, s_101, t);
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_101 = ATgetFirst((ATermList) t);
      h_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_101, term_i_44, (ATerm) ATinsert(CheckATermList(h_101), (ATerm) ATinsert(CheckATermList(g_101), u_43)));
  t = lookup_table_0_1(f_101, t);
  n_101 = t;
  t = term_i_44;
  j_101 = t;
  t = (ATerm) ATinsert(CheckATermList(h_101), (ATerm) ATinsert(CheckATermList(g_101), u_43));
  l_101 = t;
  t = n_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(j_101, l_101, m_101, t);
  t = i_101;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_b_44;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm c_102 = NULL,f_102 = NULL,j_102 = NULL,k_102 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      f_102 = ATgetArgument(t, 0);
      j_102 = ATgetArgument(t, 1);
      c_102 = ATgetArgument(t, 2);
      {
        ATerm p_102 = NULL,q_102 = NULL;
        t = j_102;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, f_102);
        p_102 = t;
        t = term_m_44;
        q_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_102), term_m_44);
        t = w_9(b_11, p_102, q_102, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, f_102, (ATerm)ATempty, c_102);
      }
    }
  else
    {
      ATerm w_102 = NULL,x_102 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          f_102 = ATgetArgument(t, 0);
          j_102 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_102;
      if(match_cons(t, sym_ConstType_1))
        {
          k_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_102);
      w_102 = t;
      t = term_o_44;
      x_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_102), term_o_44);
      t = w_9(c_11, w_102, x_102, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, f_102, (ATerm) ATmakeAppl(sym_ConstType_1, k_102));
    }
  return(t);
}
static ATerm x_9 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL;
  f_103 = t;
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
        t = o_10(d_54, e_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_44 = ATgetFirst((ATermList) t);
            e_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_44);
        {
          ATerm g_103 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_54, e_54, e_103);
          t = lookup_table_0_1(d_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_103 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_10(e_54, e_103, g_103, t);
          t = (ATerm) ATmakeAppl(sym__3, d_54, e_54, e_103);
        }
      }
    else
      {
        t = p_44;
        {
          ATerm i_103 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
          t = lookup_table_0_1(d_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_103 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_10(e_54, i_103, t);
          t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
        }
      }
  }
  t = f_103;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL;
  n_103 = t;
  t = u_118(t);
  m_103 = t;
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_103 = NULL;
        t = term_i_44;
        r_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_103, term_i_44);
        t = o_10(m_103, r_103, t);
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_103 = ATgetFirst((ATermList) t);
      k_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_103, term_i_44, k_103);
  t = lookup_table_0_1(m_103, t);
  q_103 = t;
  t = term_i_44;
  o_103 = t;
  t = q_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(o_103, k_103, p_103, t);
  t = l_103;
  {
    static ATerm e_11 (ATerm t)
    {
      ATerm s_103 = NULL;
      s_103 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_103, s_103);
      t = x_9(m_103, s_103, t);
      return(t);
    }
    t = map_1_0(e_11, t);
  }
  t = n_103;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm u_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_97(t);
      t = z_97(t);
      LocalPopChoice(w_44);
    }
  else
    {
      t = u_44;
      t = z_97(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL;
  v_103 = t;
  t = t_118(t);
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_103, term_i_44);
  {
    ATerm x_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_104 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_45 = ATgetArgument(t, 0);
            ATerm c_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_44;
        g_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_103, term_i_44);
        t = o_10(u_103, g_104, t);
        LocalPopChoice(a_45);
      }
    else
      {
        t = x_44;
        t = (ATerm) ATempty;
      }
  }
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_103, term_i_44, (ATerm) ATinsert(CheckATermList(w_103), (ATerm) ATempty));
  t = lookup_table_0_1(u_103, t);
  c_104 = t;
  t = term_i_44;
  z_103 = t;
  t = (ATerm) ATinsert(CheckATermList(w_103), (ATerm) ATempty);
  a_104 = t;
  t = c_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(z_103, a_104, b_104, t);
  t = v_103;
  return(t);
}
ATerm scope_2_0 (ATerm v_118 (ATerm), ATerm w_118 (ATerm), ATerm t)
{
  static ATerm f_11 (ATerm t)
  {
    t = end_scope_1_0(v_118, t);
    return(t);
  }
  t = begin_scope_1_0(v_118, t);
  t = restore_always_2_0(w_118, f_11, t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,k_24 = NULL;
  o_104 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_104);
  l_104 = t;
  t = m_104;
  t = map_1_0(y_11, t);
  n_104 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_104);
  k_24 = t;
  t = SSLsetAnnotations(k_24, l_104);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL;
  c_105 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      b_105 = ATgetArgument(t, 0);
      {
        ATerm d_45 = t;
        int e_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_43 = NULL,z_43 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(c_105);
            x_43 = t;
            t = b_105;
            t = map_1_0(z_11, t);
            z_43 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, z_43);
            i_24 = t;
            t = SSLsetAnnotations(i_24, x_43);
            LocalPopChoice(e_45);
          }
        else
          {
            t = d_45;
            t = c_105;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          b_105 = ATgetArgument(t, 0);
          {
            ATerm f_45 = t;
            int g_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_44 = NULL,l_44 = NULL,j_24 = NULL;
                t = SSLgetAnnotations(c_105);
                j_44 = t;
                t = b_105;
                t = map_1_0(a_12, t);
                l_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, l_44);
                j_24 = t;
                t = SSLsetAnnotations(j_24, j_44);
                LocalPopChoice(g_45);
              }
            else
              {
                t = f_45;
                t = c_105;
              }
          }
        }
      else
        {
          t = c_105;
        }
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm h_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(i_45);
    }
  else
    {
      t = h_45;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(k_45);
    }
  else
    {
      t = j_45;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(n_11, o_11, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_105 = NULL,n_105 = NULL,q_105 = NULL;
  l_105 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_105;
    }
  else
    {
      static ATerm n_12 (ATerm t)
      {
        t = not_null(q_105);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_105 = ATgetFirst((ATermList) t);
          if(((q_105 != NULL) && (q_105 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_105;
      t = at_end_1_0(n_12, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm r_113 (ATerm), ATerm t)
{
  ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL;
  j_106 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_106;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_106 = ATgetFirst((ATermList) t);
          l_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_45 = t;
        int m_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL,o_24 = NULL;
            t = SSLgetAnnotations(j_106);
            v_44 = t;
            t = k_106;
            t = r_113(t);
            y_44 = t;
            t = l_106;
            t = filter_1_0(r_113, t);
            z_44 = t;
            t = (ATerm) ATinsert(CheckATermList(z_44), y_44);
            o_24 = t;
            t = SSLsetAnnotations(o_24, v_44);
            LocalPopChoice(m_45);
          }
        else
          {
            t = l_45;
            t = l_106;
            t = filter_1_0(r_113, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  static ATerm d_107 (ATerm t)
  {
    ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL;
    c_107 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_107 = ATgetFirst((ATermList) t);
        b_107 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_45 = NULL,v_45 = NULL,q_24 = NULL;
          t = SSLgetAnnotations(c_107);
          o_45 = t;
          t = b_107;
          t = d_107(t);
          v_45 = t;
          t = (ATerm) ATinsert(CheckATermList(v_45), a_107);
          q_24 = t;
          t = SSLsetAnnotations(q_24, o_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_107;
        t = f_106(t);
      }
    return(t);
  }
  t = d_107(t);
  return(t);
}
static ATerm p_107 (ATerm h_107, ATerm t)
{
  ATerm i_107 = NULL;
  t = SSL_explode_term(h_107);
  if(match_cons(t, sym__2))
    {
      ATerm n_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_107;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL;
  m_107 = t;
  if(match_cons(t, sym__2))
    {
      k_107 = ATgetArgument(t, 0);
      l_107 = ATgetArgument(t, 1);
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_13 (ATerm t)
            {
              t = l_107;
              return(t);
            }
            t = k_107;
            t = at_end_1_0(b_13, t);
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            t = p_107(m_107, t);
          }
      }
    }
  else
    {
      t = p_107(m_107, t);
    }
  return(t);
}
static ATerm a_10 (ATerm y_131, ATerm u_131, ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL;
  static ATerm c_13 (ATerm t)
  {
    ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL;
    a_108 = t;
    t = SSL_explode_term(a_108);
    if(match_cons(t, sym__2))
      {
        if(((q_107 != NULL) && (q_107 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          q_107 = ATgetArgument(t, 0);
        {
          ATerm r_45 = ATgetArgument(t, 1);
          if(((ATgetType(r_45) == AT_LIST) && !(ATisEmpty(r_45))))
            {
              x_107 = ATgetFirst((ATermList) r_45);
              {
                ATerm s_45 = (ATerm) ATgetNext((ATermList) r_45);
                if(((ATgetType(s_45) != AT_LIST) || !(ATisEmpty(s_45))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, x_107, not_null(r_107));
    t = conc_0_0(t);
    y_107 = t;
    t = (ATerm) ATinsert(ATempty, y_107);
    z_107 = t;
    t = SSL_mkterm(q_107, z_107);
    return(t);
  }
  t = SSL_explode_term(y_131);
  if(match_cons(t, sym__2))
    {
      if(((q_107 != NULL) && (q_107 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_107 = ATgetArgument(t, 0);
      {
        ATerm t_45 = ATgetArgument(t, 1);
        if(((ATgetType(t_45) == AT_LIST) && !(ATisEmpty(t_45))))
          {
            if(((r_107 != NULL) && (r_107 != ATgetFirst((ATermList) t_45))))
              _fail(ATgetFirst((ATermList) t_45));
            else
              r_107 = ATgetFirst((ATermList) t_45);
            {
              ATerm u_45 = (ATerm) ATgetNext((ATermList) t_45);
              if(((ATgetType(u_45) != AT_LIST) || !(ATisEmpty(u_45))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_131;
  t = fetch_1_0(c_13, t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL;
  c_108 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_108;
      t = p_112(t);
    }
  else
    {
      ATerm h_108 = NULL,i_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_108 = ATgetFirst((ATermList) t);
          e_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_108;
      t = r_112(t);
      h_108 = t;
      t = e_108;
      t = foldr_3_0(p_112, q_112, r_112, t);
      i_108 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_108, i_108);
      t = q_112(t);
    }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_45), term_x_45), term_w_45);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL;
  if(match_cons(t, sym__2))
    {
      p_108 = ATgetArgument(t, 0);
      q_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(p_108, q_108, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL;
  s_108 = t;
  if(match_cons(t, sym_Signature_1))
    {
      r_108 = ATgetArgument(t, 0);
      {
        ATerm z_45 = t;
        int a_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_108 = NULL;
            t = r_108;
            t = filter_1_0(g_13, t);
            t = concat_0_0(t);
            u_108 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, u_108);
            LocalPopChoice(a_46);
          }
        else
          {
            t = z_45;
            t = s_108;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          r_108 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, r_108);
        }
      else
        {
          t = s_108;
        }
    }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm v_108 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      v_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_108;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,v_24 = NULL;
  o_108 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_108);
  l_108 = t;
  t = m_108;
  t = foldr_3_0(d_13, e_13, f_13, t);
  n_108 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_108);
  v_24 = t;
  t = SSLsetAnnotations(v_24, l_108);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm b_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(e_46);
    }
  else
    {
      t = b_46;
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm y_109 = NULL,b_110 = NULL,e_110 = NULL,f_110 = NULL,g_110 = NULL;
  g_110 = t;
  if(match_cons(t, sym_LRule_1))
    {
      f_110 = ATgetArgument(t, 0);
      t = f_110;
      if(match_cons(t, sym_Rule_3))
        {
          y_109 = ATgetArgument(t, 0);
          b_110 = ATgetArgument(t, 1);
          e_110 = ATgetArgument(t, 2);
          {
            ATerm f_46 = t;
            int g_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_110 = NULL;
                t = y_109;
                t = free_vars_3_0(n_13, q_13, tboundin_3_0, t);
                k_110 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_110, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, y_109, b_110, e_110)));
                LocalPopChoice(g_46);
              }
            else
              {
                t = f_46;
                t = g_110;
              }
          }
        }
      else
        {
          t = g_110;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          f_110 = ATgetArgument(t, 0);
          {
            ATerm h_46 = t;
            int i_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_111 = NULL;
                t = f_110;
                t = free_vars_3_0(t_13, u_13, tboundin_3_0, t);
                m_111 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, m_111, f_110);
                LocalPopChoice(i_46);
              }
            else
              {
                t = h_46;
                t = g_110;
              }
          }
        }
      else
        {
          t = g_110;
        }
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm l_110 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_110);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm j_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_46);
    }
  else
    {
      t = j_46;
      {
        ATerm m_46 = t;
        int p_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_46);
          }
        else
          {
            t = m_46;
            {
              ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_110 = ATgetArgument(t, 0);
                  o_110 = ATgetArgument(t, 1);
                  p_110 = ATgetArgument(t, 2);
                  q_110 = ATgetArgument(t, 3);
                  t = p_110;
                  t = map_1_0(r_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_110 = ATgetArgument(t, 0);
                      o_110 = ATgetArgument(t, 1);
                      p_110 = ATgetArgument(t, 2);
                      q_110 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_110;
                  t = map_1_0(s_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm x_110 = NULL;
  ATerm q_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_110 = ATgetArgument(t, 0);
          {
            ATerm x_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_46);
      t = x_110;
    }
  else
    {
      t = q_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_110;
    }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm g_111 = NULL;
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_111 = ATgetArgument(t, 0);
          {
            ATerm d_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_47);
      t = g_111;
    }
  else
    {
      t = b_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_111;
    }
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm n_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_111);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm e_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(h_47);
          }
        else
          {
            t = g_47;
            {
              ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_111 = ATgetArgument(t, 0);
                  q_111 = ATgetArgument(t, 1);
                  r_111 = ATgetArgument(t, 2);
                  s_111 = ATgetArgument(t, 3);
                  t = r_111;
                  t = map_1_0(v_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_111 = ATgetArgument(t, 0);
                      q_111 = ATgetArgument(t, 1);
                      r_111 = ATgetArgument(t, 2);
                      s_111 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_111;
                  t = map_1_0(a_14, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm z_111 = NULL;
  ATerm k_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_111 = ATgetArgument(t, 0);
          {
            ATerm m_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_47);
      t = z_111;
    }
  else
    {
      t = k_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_111;
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm i_112 = NULL;
  ATerm n_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_112 = ATgetArgument(t, 0);
          {
            ATerm p_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_47);
      t = i_112;
    }
  else
    {
      t = n_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_112;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = Cons_2_0(q_14, s_14, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,z_24 = NULL;
  h_113 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_113);
  e_113 = t;
  t = f_113;
  t = topdown_1_0(w_14, t);
  g_113 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_113);
  z_24 = t;
  t = SSLsetAnnotations(z_24, e_113);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm i_113 = NULL,j_113 = NULL,k_113 = NULL;
  k_113 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      i_113 = ATgetArgument(t, 0);
      j_113 = ATgetArgument(t, 1);
      t = i_113;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_113;
        }
      else
        {
          t = k_113;
        }
    }
  else
    {
      t = k_113;
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm q_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(s_47);
    }
  else
    {
      t = q_47;
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm v_113 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      v_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, v_113)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm q_109 = NULL,r_109 = NULL,s_109 = NULL,t_109 = NULL,d_25 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(h_13, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(j_13, t);
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL;
        s_112 = t;
        t = term_v_47;
        t_112 = t;
        t = term_w_47;
        u_112 = t;
        t = term_x_47;
        t = o_10(t_112, u_112, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = s_112;
        LocalPopChoice(u_47);
        {
          ATerm v_112 = NULL,w_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL,c_25 = NULL,b_25 = NULL;
          c_113 = t;
          if(match_cons(t, sym_Specification_1))
            {
              w_112 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_113);
          v_112 = t;
          t = w_112;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_112 = ATgetFirst((ATermList) t);
              z_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_112);
          x_112 = t;
          t = z_112;
          t = Cons_2_0(_id, p_14, t);
          a_113 = t;
          t = (ATerm) ATinsert(CheckATermList(a_113), y_112);
          b_25 = t;
          t = SSLsetAnnotations(b_25, x_112);
          b_113 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, b_113);
          c_25 = t;
          t = SSLsetAnnotations(c_25, v_112);
        }
      }
    else
      {
        t = t_47;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(x_14, t);
  t_109 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_109);
  q_109 = t;
  t = r_109;
  t = fetch_1_0(y_14, t);
  s_109 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_109);
  d_25 = t;
  t = SSLsetAnnotations(d_25, q_109);
  return(t);
}
static ATerm b_10 (ATerm k_39, ATerm l_39, ATerm t)
{
  ATerm w_113 = NULL;
  t = SSL_fputc(k_39, l_39);
  w_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_113);
  return(t);
}
static ATerm c_10 (ATerm o_23, ATerm p_23, ATerm t)
{
  ATerm x_113 = NULL;
  t = SSL_write_term_to_stream_text(o_23, p_23);
  x_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_113);
  return(t);
}
static ATerm e_10 (ATerm f_105 (ATerm), ATerm s_171, ATerm u_23, ATerm t)
{
  ATerm y_113 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_171, term_y_47);
  t = i_10(t);
  y_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_113, u_23);
  t = f_105(t);
  t = fclose_0_0(t);
  t = u_23;
  return(t);
}
static ATerm d_10 (ATerm k_23, ATerm l_23, ATerm t)
{
  ATerm z_113 = NULL;
  t = SSL_write_term_to_stream_baf(k_23, l_23);
  z_113 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_113);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_47 = ATgetArgument(t, 0);
      if(match_cons(z_47, sym_Stream_1))
        {
          g_114 = ATgetArgument(z_47, 0);
        }
      else
        _fail(t);
      h_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(g_114, h_114, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm i_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_48 = ATgetArgument(t, 0);
      if(match_cons(a_48, sym_Stream_1))
        {
          l_114 = ATgetArgument(a_48, 0);
        }
      else
        _fail(t);
      m_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(l_114, m_114, t);
  i_114 = t;
  t = term_z_22;
  j_114 = t;
  t = i_114;
  if(match_cons(t, sym_Stream_1))
    {
      k_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_22, i_114);
  t = b_10(j_114, k_114, t);
  return(t);
}
ATerm output_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  ATerm a_114 = NULL,b_114 = NULL;
  t = d_124(t);
  b_114 = t;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_114 = NULL,d_114 = NULL;
        t = term_v_47;
        c_114 = t;
        t = term_d_48;
        d_114 = t;
        t = term_f_48;
        t = o_10(c_114, d_114, t);
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = term_g_48;
      }
  }
  a_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_114, b_114);
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_114 = NULL,f_114 = NULL;
        t = term_v_47;
        e_114 = t;
        t = term_j_48;
        f_114 = t;
        t = term_l_48;
        t = o_10(e_114, f_114, t);
        t = (ATerm) ATmakeAppl(sym__2, a_114, b_114);
        LocalPopChoice(i_48);
        if(match_cons(t, sym__2))
          {
            ATerm m_48 = ATgetArgument(t, 0);
            ATerm o_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_10(z_14, a_114, b_114, t);
      }
    else
      {
        t = h_48;
        if(match_cons(t, sym__2))
          {
            ATerm p_48 = ATgetArgument(t, 0);
            ATerm q_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_10(b_15, a_114, b_114, t);
      }
  }
  return(t);
}
static ATerm a_115 (ATerm u_114, ATerm t)
{
  t = SSL_fclose(u_114);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_114 = NULL,y_114 = NULL;
  y_114 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_114 = ATgetArgument(t, 0);
      {
        ATerm r_48 = t;
        int t_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_114);
            LocalPopChoice(t_48);
          }
        else
          {
            t = r_48;
            t = a_115(y_114, t);
          }
      }
    }
  else
    {
      t = a_115(y_114, t);
    }
  return(t);
}
static ATerm f_10 (ATerm q_23, ATerm t)
{
  t = SSL_read_term_from_stream(q_23);
  return(t);
}
static ATerm g_10 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_strcat(d_38, e_38);
  return(t);
}
static ATerm h_10 (ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm b_115 = NULL;
  t = SSL_fopen(m_39, n_39);
  b_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_115);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_115 = NULL;
  t = SSL_stdin_stream();
  c_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_115);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_115 = NULL;
  t = SSL_stdout_stream();
  d_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_115);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_115 = NULL;
  t = SSL_stderr_stream();
  e_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_115);
  return(t);
}
static ATerm l_116 (ATerm k_115, ATerm t)
{
  ATerm l_115 = NULL;
  t = SSL_explode_term(k_115);
  if(match_cons(t, sym__2))
    {
      ATerm u_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_48 = ATgetArgument(t, 1);
        if(((ATgetType(v_48) == AT_LIST) && !(ATisEmpty(v_48))))
          {
            l_115 = ATgetFirst((ATermList) v_48);
            {
              ATerm x_48 = (ATerm) ATgetNext((ATermList) v_48);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_115;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_115;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_115;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_115;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_116 (ATerm o_115, ATerm p_115, ATerm q_115, ATerm t)
{
  ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL,w_115 = NULL,j_25 = NULL;
  t = SSLgetAnnotations(q_115);
  t_115 = t;
  t = o_115;
  if(match_cons(t, sym_Path_1))
    {
      w_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_115, p_115);
  j_25 = t;
  t = SSLsetAnnotations(j_25, t_115);
  if(match_cons(t, sym__2))
    {
      r_115 = ATgetArgument(t, 0);
      s_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(r_115, s_115, t);
  return(t);
}
static ATerm n_116 (ATerm y_115, ATerm z_115, ATerm a_116, ATerm t)
{
  ATerm b_116 = NULL,c_116 = NULL,d_116 = NULL,g_116 = NULL,k_25 = NULL;
  t = SSLgetAnnotations(a_116);
  d_116 = t;
  t = SSL_is_string(y_115);
  g_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_116, z_115);
  k_25 = t;
  t = SSLsetAnnotations(k_25, d_116);
  if(match_cons(t, sym__2))
    {
      b_116 = ATgetArgument(t, 0);
      c_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(b_116, c_116, t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL;
  i_116 = t;
  if(match_cons(t, sym__2))
    {
      j_116 = ATgetArgument(t, 0);
      k_116 = ATgetArgument(t, 1);
      {
        ATerm y_48 = t;
        int z_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_116(i_116, t);
            LocalPopChoice(z_48);
          }
        else
          {
            t = y_48;
            {
              ATerm c_49 = t;
              int g_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_116(j_116, k_116, i_116, t);
                  LocalPopChoice(g_49);
                }
              else
                {
                  t = c_49;
                  t = n_116(j_116, k_116, i_116, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_116(i_116, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL,b_117 = NULL;
  b_117 = t;
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_117, term_n_49);
        t = i_10(t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        {
          ATerm s_46 = NULL,v_46 = NULL;
          t = term_q_49;
          v_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_49, b_117);
          t = g_10(v_46, b_117, t);
          s_46 = t;
          t = SSL_perror(s_46);
          _fail(t);
        }
      }
  }
  q_116 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(r_116, t);
  p_116 = t;
  t = q_116;
  t = fclose_0_0(t);
  t = p_116;
  return(t);
}
ATerm input_1_0 (ATerm e_124 (ATerm), ATerm t)
{
  ATerm r_49 = t;
  int s_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_117 = NULL,f_117 = NULL;
      t = term_v_47;
      e_117 = t;
      t = term_t_49;
      f_117 = t;
      t = term_u_49;
      t = o_10(e_117, f_117, t);
      LocalPopChoice(s_49);
    }
  else
    {
      t = r_49;
      t = term_v_49;
    }
  t = ReadFromFile_0_0(t);
  t = e_124(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL;
  g_117 = t;
  t = term_w_49;
  t = whoami_0_0(t);
  h_117 = t;
  t = term_h_32;
  j_117 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_49), h_117), term_x_49);
  k_117 = t;
  t = SSL_printnl(j_117, k_117);
  t = term_j_32;
  i_117 = t;
  t = SSL_exit(i_117);
  t = g_117;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm m_117 = NULL;
  m_117 = t;
  if(match_string(t, "-k"))
    {
      t = m_117;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_117;
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL;
  n_117 = t;
  t = SSL_string_to_int(n_117);
  o_117 = t;
  t = term_a_50;
  p_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_50, o_117);
  t = r_10(p_117, o_117, t);
  t = n_117;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_b_50;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_15, d_15, e_15, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm r_117 = NULL;
  r_117 = t;
  if(match_string(t, "-S"))
    {
      t = r_117;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_117;
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL;
  t = term_c_50;
  s_117 = t;
  t = term_d_50;
  t_117 = t;
  t = term_e_50;
  t = r_10(s_117, t_117, t);
  t = term_f_50;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL,w_117 = NULL;
  u_117 = t;
  t = SSL_string_to_int(u_117);
  v_117 = t;
  t = term_c_50;
  w_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_50, v_117);
  t = r_10(w_117, v_117, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_117);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_h_50;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL;
  t = term_i_50;
  x_117 = t;
  t = term_w_49;
  y_117 = t;
  t = term_j_50;
  t = r_10(x_117, y_117, t);
  t = term_l_50;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_m_50;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_15, i_15, k_15, t);
      LocalPopChoice(p_50);
    }
  else
    {
      t = n_50;
      {
        ATerm q_50 = t;
        int t_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_15, w_15, x_15, t);
            LocalPopChoice(t_50);
          }
        else
          {
            t = q_50;
            t = Option_3_0(y_15, c_16, d_16, t);
          }
      }
    }
  return(t);
}
static ATerm r_10 (ATerm d_49, ATerm e_49, ATerm t)
{
  ATerm z_117 = NULL,a_118 = NULL;
  t = term_v_47;
  z_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_47, d_49, e_49);
  t = lookup_table_0_1(z_117, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(d_49, e_49, a_118, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_47, d_49, e_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_118 = NULL,f_118 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL;
      t = term_w_49;
      t = i_0(t);
      g_118 = t;
      t = term_u_50;
      h_118 = t;
      t = term_v_50;
      i_118 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_50, term_v_50, g_118);
      t = p_10(h_118, i_118, g_118, t);
      _fail(t);
    }
  else
    {
      ATerm l_118 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_118 = ATgetFirst((ATermList) t);
          f_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_118;
      t = d_0(t);
      t = term_w_49;
      t = g_0(t);
      l_118 = t;
      t = (ATerm) ATinsert(CheckATermList(f_118), l_118);
    }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm n_118 = NULL;
  n_118 = t;
  if(match_string(t, "-o"))
    {
      t = n_118;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_118;
    }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm o_118 = NULL,p_118 = NULL;
  o_118 = t;
  t = term_d_48;
  p_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_48, o_118);
  t = r_10(p_118, o_118, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_118);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_16, f_16, k_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm r_118 = NULL;
  r_118 = t;
  if(match_string(t, "-i"))
    {
      t = r_118;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_118;
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm s_118 = NULL,y_118 = NULL;
  s_118 = t;
  t = term_t_49;
  y_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_49, s_118);
  t = r_10(y_118, s_118, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_118);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_x_50;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_16, m_16, p_16, t);
  return(t);
}
static ATerm p_10 (ATerm y_53, ATerm z_53, ATerm x_53, ATerm t)
{
  ATerm b_119 = NULL,c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL;
  b_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_51 = ATgetArgument(t, 0);
            ATerm b_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
        t = o_10(y_53, z_53, t);
        LocalPopChoice(z_50);
      }
    else
      {
        t = y_50;
        t = (ATerm) ATempty;
      }
  }
  c_119 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_53, z_53, (ATerm) ATinsert(CheckATermList(c_119), x_53));
  t = lookup_table_0_1(y_53, t);
  f_119 = t;
  t = (ATerm) ATinsert(CheckATermList(c_119), x_53);
  d_119 = t;
  t = f_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(z_53, d_119, e_119, t);
  t = b_119;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL;
      t = term_w_49;
      t = r_0(t);
      q_119 = t;
      t = term_u_50;
      r_119 = t;
      t = term_v_50;
      s_119 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_50, term_v_50, q_119);
      t = p_10(r_119, s_119, q_119, t);
      _fail(t);
    }
  else
    {
      ATerm w_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_119 = ATgetFirst((ATermList) t);
          n_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_119;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_119 = ATgetFirst((ATermList) t);
          p_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_119;
      t = o_0(t);
      t = o_119;
      t = p_0(t);
      w_119 = t;
      t = (ATerm) ATinsert(CheckATermList(p_119), w_119);
    }
  return(t);
}
static ATerm t_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL;
  y_119 = t;
  if(match_string(t, "old"))
    {
      t = y_119;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = y_119;
    }
  t = term_w_47;
  z_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_47, y_119);
  t = r_10(z_119, y_119, t);
  t = term_w_49;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_c_51;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_16, x_16, y_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_49;
  t = whoami_0_0(t);
  b_120 = t;
  t = term_h_32;
  d_120 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_51), b_120);
  e_120 = t;
  t = SSL_printnl(d_120, e_120);
  t = term_j_32;
  c_120 = t;
  t = SSL_exit(c_120);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL;
  t = term_v_47;
  f_120 = t;
  t = term_f_51;
  g_120 = t;
  t = term_h_51;
  t = o_10(f_120, g_120, t);
  return(t);
}
static ATerm j_10 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm i_51 = t;
  int j_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_42, h_42);
      LocalPopChoice(j_51);
    }
  else
    {
      t = i_51;
      t = SSL_addr(g_42, h_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL,k_120 = NULL;
  i_120 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_120;
      t = n_112(t);
    }
  else
    {
      ATerm n_120 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_120 = ATgetFirst((ATermList) t);
          k_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_120;
      t = foldr_2_0(n_112, o_112, t);
      n_120 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_120, n_120);
      t = o_112(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_d_50;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  if(match_cons(t, sym__2))
    {
      i_47 = ATgetArgument(t, 0);
      j_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10(i_47, j_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_120 = NULL,y_46 = NULL,z_46 = NULL;
  t = times_0_0(t);
  z_46 = t;
  t = SSL_explode_term(z_46);
  if(match_cons(t, sym__2))
    {
      ATerm k_51 = ATgetArgument(t, 0);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_46;
  t = foldr_2_0(z_16, a_17, t);
  q_120 = t;
  t = SSL_TicksToSeconds(q_120);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_121 = NULL,c_121 = NULL,d_121 = NULL;
  b_121 = t;
  if(match_cons(t, sym__2))
    {
      c_121 = ATgetArgument(t, 0);
      d_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_121;
        if((c_121 != t))
          {
            _fail(t);
          }
        t = b_121;
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
        t = (ATerm) ATmakeAppl(sym__2, c_121, d_121);
        {
          ATerm z_51 = t;
          int a_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_121, d_121);
              LocalPopChoice(a_52);
            }
          else
            {
              t = z_51;
              t = SSL_gtr(c_121, d_121);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_121, d_121);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm i_121 = NULL;
  i_121 = t;
  {
    ATerm b_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL;
        t = term_v_47;
        l_121 = t;
        t = term_c_50;
        m_121 = t;
        t = term_n_52;
        t = o_10(l_121, m_121, t);
        k_121 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_121, term_j_32);
        t = geq_0_0(t);
        t = i_121;
        t = e_121(t);
        LocalPopChoice(h_52);
      }
    else
      {
        t = b_52;
        t = i_121;
      }
  }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL,r_121 = NULL,s_121 = NULL;
  t = run_time_0_0(t);
  o_121 = t;
  t = term_w_49;
  t = whoami_0_0(t);
  p_121 = t;
  t = term_h_32;
  r_121 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_52), o_121), term_o_52), p_121);
  s_121 = t;
  t = SSL_printnl(r_121, s_121);
  t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_52), o_121), term_o_52), p_121));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_121 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_50;
  t_121 = t;
  t = SSL_exit(t_121);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm d_122 = NULL,e_122 = NULL;
  e_122 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_122;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_122 = ATgetArgument(t, 0);
          {
            ATerm e_48 = NULL,q_25 = NULL;
            t = SSLgetAnnotations(e_122);
            e_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_122);
            q_25 = t;
            t = SSLsetAnnotations(q_25, e_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_122;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_123 (ATerm), ATerm t)
{
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_121 = NULL,x_121 = NULL;
      t = term_v_47;
      w_121 = t;
      t = term_s_52;
      x_121 = t;
      t = term_u_52;
      t = o_10(w_121, x_121, t);
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
      t = fetch_1_0(c_17, t);
    }
  t = u_123(t);
  return(t);
}
static ATerm s_10 (ATerm q_57, ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm g_122 = NULL;
  t = SSL_hashtable_put(s_57, q_57, r_57);
  g_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_122);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_55, ATerm t)
{
  ATerm p_122 = NULL;
  t = table_hashtable_0_0(t);
  p_122 = t;
  {
    ATerm v_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_48 = NULL;
        t = p_122;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_10(k_55, n_48, t);
        LocalPopChoice(w_52);
      }
    else
      {
        t = v_52;
        {
          ATerm w_48 = NULL;
          t = k_55;
          t = table_create_0_0(t);
          t = p_122;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_10(k_55, w_48, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm y_57, ATerm z_57, ATerm t)
{
  ATerm s_122 = NULL;
  t = SSL_hashtable_create(y_57, z_57);
  s_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_122);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_122 = NULL,u_122 = NULL,v_122 = NULL,x_122 = NULL,y_122 = NULL;
  t_122 = t;
  t = term_x_52;
  x_122 = t;
  t = term_y_52;
  y_122 = t;
  t = t_122;
  t = new_hashtable_0_2(x_122, y_122, t);
  u_122 = t;
  t = t_122;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(t_122, u_122, v_122, t);
  t = t_122;
  return(t);
}
static ATerm l_10 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm z_122 = NULL;
  t = SSL_hashtable_remove(w_57, v_57);
  z_122 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_122);
  return(t);
}
static ATerm m_10 (ATerm a_58, ATerm t)
{
  ATerm a_123 = NULL;
  t = SSL_hashtable_destroy(a_58);
  a_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_123);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_123 = NULL;
  t = SSL_table_hashtable();
  b_123 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_123);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL,e_123 = NULL,f_123 = NULL;
  c_123 = t;
  t = table_hashtable_0_0(t);
  d_123 = t;
  t = lookup_table_0_1(c_123, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_10(f_123, t);
  t = d_123;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_10(c_123, e_123, t);
  t = c_123;
  return(t);
}
ATerm map_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  static ATerm v_123 (ATerm t)
  {
    ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL;
    r_123 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_123;
      }
    else
      {
        ATerm f_49 = NULL,o_49 = NULL,p_49 = NULL,s_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_123 = ATgetFirst((ATermList) t);
            t_123 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_123);
        f_49 = t;
        t = s_123;
        t = o_105(t);
        o_49 = t;
        t = t_123;
        t = v_123(t);
        p_49 = t;
        t = (ATerm) ATinsert(CheckATermList(p_49), o_49);
        s_25 = t;
        t = SSLsetAnnotations(s_25, f_49);
      }
    return(t);
  }
  t = v_123(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_124 = NULL,f_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_124 = ATgetFirst((ATermList) t);
      f_124 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_124 = NULL,k_124 = NULL;
        static ATerm d_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_124)), not_null(k_124));
          return(t);
        }
        t = f_124;
        t = n_0(t);
        if(((j_124 != NULL) && (j_124 != t)))
          _fail(t);
        else
          j_124 = t;
        t = c_124;
        t = k_0(t);
        if(((k_124 != NULL) && (k_124 != t)))
          _fail(t);
        else
          k_124 = t;
        t = f_124;
        t = reverse_acc_2_0(k_0, d_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_49;
      t = n_0(t);
    }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL,u_25 = NULL;
  s_124 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_124);
  q_124 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_124);
  u_25 = t;
  t = SSLsetAnnotations(u_25, q_124);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm u_124 = NULL;
  u_124 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_124), term_z_52);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL;
  ATerm a_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_124 = NULL,p_124 = NULL;
      t = term_v_47;
      o_124 = t;
      t = term_f_51;
      p_124 = t;
      t = term_h_51;
      t = o_10(o_124, p_124, t);
      LocalPopChoice(c_53);
    }
  else
    {
      t = a_53;
      t = fetch_1_0(e_17, t);
    }
  t = term_d_53;
  t = echo_0_0(t);
  t = term_u_50;
  m_124 = t;
  t = term_v_50;
  n_124 = t;
  t = term_e_53;
  t = o_10(m_124, n_124, t);
  t = reverse_acc_2_0(_id, f_17, t);
  t = map_1_0(g_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  static ATerm r_125 (ATerm t)
  {
    ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
    o_125 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_125 = ATgetFirst((ATermList) t);
        q_125 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_53 = t;
      int g_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_50 = NULL,r_50 = NULL,w_25 = NULL;
          t = SSLgetAnnotations(o_125);
          o_50 = t;
          t = p_125;
          t = y_105(t);
          r_50 = t;
          t = (ATerm) ATinsert(CheckATermList(q_125), r_50);
          w_25 = t;
          t = SSLsetAnnotations(w_25, o_50);
          LocalPopChoice(g_53);
        }
      else
        {
          t = f_53;
          {
            ATerm d_51 = NULL,g_51 = NULL,x_25 = NULL;
            t = SSLgetAnnotations(o_125);
            d_51 = t;
            t = q_125;
            t = r_125(t);
            g_51 = t;
            t = (ATerm) ATinsert(CheckATermList(g_51), p_125);
            x_25 = t;
            t = SSLsetAnnotations(x_25, d_51);
          }
        }
    }
    return(t);
  }
  t = r_125(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_125 = NULL,y_125 = NULL,z_125 = NULL;
  v_125 = t;
  {
    ATerm h_53 = t;
    int i_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_125;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_53 = ATgetFirst((ATermList) t);
                ATerm k_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_125;
          }
        LocalPopChoice(i_53);
      }
    else
      {
        t = h_53;
        t = (ATerm) ATinsert(ATempty, v_125);
      }
  }
  y_125 = t;
  t = term_g_48;
  z_125 = t;
  t = SSL_printnl(z_125, y_125);
  t = v_125;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL;
  t = term_v_47;
  d_126 = t;
  t = term_f_51;
  e_126 = t;
  t = term_h_51;
  t = o_10(d_126, e_126, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_10 (ATerm t_57, ATerm u_57, ATerm t)
{
  t = SSL_hashtable_get(u_57, t_57);
  return(t);
}
static ATerm o_10 (ATerm r_55, ATerm s_55, ATerm t)
{
  ATerm f_126 = NULL;
  t = lookup_table_0_1(r_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_10(s_55, f_126, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm h_126 = NULL,i_126 = NULL;
  t = term_l_53;
  h_126 = t;
  t = term_w_49;
  i_126 = t;
  t = term_m_53;
  t = r_10(h_126, i_126, t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_n_53;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm j_126 = NULL,k_126 = NULL,l_126 = NULL,m_126 = NULL;
  t = term_l_53;
  l_126 = t;
  t = term_w_49;
  m_126 = t;
  t = term_m_53;
  t = r_10(l_126, m_126, t);
  t = term_o_53;
  j_126 = t;
  t = term_w_49;
  k_126 = t;
  t = term_p_53;
  t = r_10(j_126, k_126, t);
  t = term_q_53;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_53 = t;
  int u_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_17, i_17, j_17, t);
      LocalPopChoice(u_53);
    }
  else
    {
      t = t_53;
      t = Option_3_0(k_17, l_17, m_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t)
{
  ATerm n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL,k_26 = NULL;
  s_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_126 = ATgetFirst((ATermList) t);
      p_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_126);
  n_126 = t;
  t = o_126;
  t = c_84(t);
  q_126 = t;
  t = p_126;
  t = d_84(t);
  r_126 = t;
  t = (ATerm) ATinsert(CheckATermList(r_126), q_126);
  k_26 = t;
  t = SSLsetAnnotations(k_26, n_126);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_125 (ATerm), ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL,a_127 = NULL,c_127 = NULL,d_127 = NULL,m_26 = NULL;
  x_126 = t;
  {
    ATerm v_53 = t;
    int c_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_54;
        t = x_125(t);
        LocalPopChoice(c_54);
      }
    else
      {
        t = v_53;
      }
  }
  t = x_126;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_126 = ATgetFirst((ATermList) t);
      a_127 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_126);
  y_126 = t;
  t = term_f_51;
  d_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_51, z_126);
  t = r_10(d_127, z_126, t);
  t = a_127;
  {
    static ATerm n_127 (ATerm t)
    {
      ATerm h_54 = t;
      int i_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_127 = NULL;
              g_127 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_127;
              LocalPopChoice(m_54);
            }
          else
            {
              t = l_54;
              t = x_125(t);
              t = Cons_2_0(_id, n_127, t);
            }
          LocalPopChoice(i_54);
        }
      else
        {
          t = h_54;
          {
            ATerm j_127 = NULL,k_127 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_127 = ATgetFirst((ATermList) t);
                k_127 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_127), (ATerm) ATmakeAppl(sym_Undefined_1, j_127));
          }
        }
      return(t);
    }
    t = n_127(t);
  }
  c_127 = t;
  t = (ATerm) ATinsert(CheckATermList(c_127), (ATerm) ATmakeAppl(sym_Program_1, z_126));
  m_26 = t;
  t = SSLsetAnnotations(m_26, y_126);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm a_128 = NULL;
  a_128 = t;
  if(match_string(t, "--help"))
    {
      t = a_128;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_128;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_128;
        }
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL;
  t = term_s_52;
  b_128 = t;
  t = term_w_49;
  c_128 = t;
  t = term_n_54;
  t = r_10(b_128, c_128, t);
  t = term_o_54;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_p_54;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_125 (ATerm), ATerm t)
{
  ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL;
  u_127 = t;
  t = term_u_50;
  v_127 = t;
  t = term_q_54;
  t = lookup_table_0_1(v_127, t);
  z_127 = t;
  t = term_v_50;
  w_127 = t;
  t = (ATerm) ATempty;
  x_127 = t;
  t = z_127;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(w_127, x_127, y_127, t);
  t = u_127;
  {
    static ATerm n_17 (ATerm t)
    {
      ATerm r_54 = t;
      int s_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_125(t);
          LocalPopChoice(s_54);
        }
      else
        {
          t = r_54;
          {
            ATerm t_54 = t;
            int v_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_17, p_17, q_17, t);
                LocalPopChoice(v_54);
              }
            else
              {
                t = t_54;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_17, t);
  }
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_128 = NULL;
        r_128 = t;
        {
          ATerm y_54 = t;
          int z_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_51 = NULL;
              t = r_128;
              {
                ATerm a_55 = t;
                int b_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_51 = NULL,w_51 = NULL;
                    t = term_v_47;
                    r_51 = t;
                    t = term_s_52;
                    w_51 = t;
                    t = term_u_52;
                    t = o_10(r_51, w_51, t);
                    LocalPopChoice(b_55);
                  }
                else
                  {
                    t = a_55;
                    t = fetch_1_0(r_17, t);
                  }
              }
              t = r_128;
              t = default_system_usage_0_0(t);
              t = term_d_50;
              q_51 = t;
              t = SSL_exit(q_51);
              LocalPopChoice(z_54);
            }
          else
            {
              t = y_54;
              {
                ATerm c_52 = NULL,j_52 = NULL,k_52 = NULL;
                t = term_v_47;
                j_52 = t;
                t = term_l_53;
                k_52 = t;
                t = term_c_55;
                t = o_10(j_52, k_52, t);
                t = r_128;
                t = default_system_about_0_0(t);
                t = term_d_50;
                c_52 = t;
                t = SSL_exit(c_52);
              }
            }
        }
        LocalPopChoice(x_54);
      }
    else
      {
        t = w_54;
        {
          ATerm d_55 = t;
          int e_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_128 = NULL,t_128 = NULL,u_128 = NULL;
              static ATerm s_17 (ATerm t)
              {
                ATerm v_128 = NULL,w_128 = NULL,x_128 = NULL,o_26 = NULL;
                x_128 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_128 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_128);
                v_128 = t;
                t = w_128;
                if(((s_127 != NULL) && (s_127 != t)))
                  _fail(t);
                else
                  s_127 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_128);
                o_26 = t;
                t = SSLsetAnnotations(o_26, v_128);
                return(t);
              }
              t = fetch_1_0(s_17, t);
              t = term_h_32;
              t_128 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_127)), term_f_55);
              u_128 = t;
              t = SSL_printnl(t_128, u_128);
              t = (ATerm) ATmakeAppl(sym__2, term_h_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_127)), term_f_55));
              t = default_system_usage_0_0(t);
              t = term_j_32;
              s_128 = t;
              t = SSL_exit(s_128);
              LocalPopChoice(e_55);
            }
          else
            {
              t = d_55;
            }
        }
      }
  }
  t_127 = t;
  t = term_u_50;
  t = table_destroy_0_0(t);
  t = t_127;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm t)
{
  ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL,f_129 = NULL,g_129 = NULL;
  t = parse_options_1_0(w_123, t);
  c_129 = t;
  t = term_h_55;
  t = table_create_0_0(t);
  t = term_h_55;
  d_129 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_55, term_i_55, c_129);
  t = lookup_table_0_1(d_129, t);
  g_129 = t;
  t = term_i_55;
  e_129 = t;
  t = g_129;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_10(e_129, c_129, f_129, t);
  t = c_129;
  t = y_123(t);
  {
    ATerm j_55 = t;
    int l_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_123, t);
        LocalPopChoice(l_55);
      }
    else
      {
        t = j_55;
        {
          ATerm m_55 = t;
          int n_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_55);
            }
          else
            {
              t = m_55;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm o_55 = t;
  int p_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(p_55);
    }
  else
    {
      t = o_55;
      {
        ATerm q_55 = t;
        int t_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(t_55);
          }
        else
          {
            t = q_55;
            {
              ATerm u_55 = t;
              int v_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(v_55);
                }
              else
                {
                  t = u_55;
                  {
                    ATerm w_55 = t;
                    int z_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_17, w_17, x_17, t);
                        LocalPopChoice(z_55);
                      }
                    else
                      {
                        t = w_55;
                        {
                          ATerm d_56 = t;
                          int e_56 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(e_56);
                            }
                          else
                            {
                              t = d_56;
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
static ATerm u_17 (ATerm t)
{
  t = input_1_0(y_17, t);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm i_129 = NULL,j_129 = NULL;
  t = term_j_48;
  i_129 = t;
  t = term_w_49;
  j_129 = t;
  t = term_g_56;
  t = r_10(i_129, j_129, t);
  t = term_h_56;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_i_56;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_17, default_usage_0_0, _id, u_17, t);
  return(t);
}

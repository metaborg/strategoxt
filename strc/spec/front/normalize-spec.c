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
Symbol sym_UndefineDynRule_2;
Symbol sym_DynRuleScopeId_1;
Symbol sym_DynRuleId_1;
Symbol sym_RDecT_3;
Symbol sym_DynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_GenDynRules_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
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
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
}
ATerm term_h_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_h_55;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_m_54;
ATerm term_e_54;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_d_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_c_52;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_48;
ATerm term_p_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_i_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_e_46;
ATerm term_c_46;
ATerm term_a_46;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_o_44;
ATerm term_d_44;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_b_38;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_f_36;
ATerm term_a_36;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_n_34;
ATerm term_l_34;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_f_32;
ATerm term_r_26;
ATerm term_z_25;
ATerm term_i_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_l_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATempty);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_19);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_18);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Op_2, term_n_21, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_21);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Call_2, term_n_22, (ATerm) ATempty);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Call_2, term_d_24, (ATerm) ATempty);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATempty);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_34);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_e_18);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_34);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_x_34);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_35);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_35);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_35);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_36);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_38);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_44);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_44);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_b_48);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_i_48);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_p_48);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_y_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym__2, term_g_50, term_j_50);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_50);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym__2, term_p_50, term_b_50);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_l_51);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_g_50);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_r_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym__2, term_y_50, term_z_50);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym__2, term_p_53, term_b_50);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym__2, term_s_53, term_b_50);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_b_50);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(sym__3, term_y_50, term_z_50, (ATerm) ATempty);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_p_53);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym__2, term_p_48, term_b_50);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_99 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm z_8 (ATerm c_132 (ATerm), ATerm i_75, ATerm g_75, ATerm h_75, ATerm l_75, ATerm j_75, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm c_132 (ATerm), ATerm t);
static ATerm g_19 (ATerm p_13, ATerm q_13, ATerm t);
static ATerm h_19 (ATerm w_13, ATerm x_13, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm w_130 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm b_9 (ATerm g_66, ATerm h_66, ATerm i_66, ATerm t);
static ATerm i_30 (ATerm o_29, ATerm t);
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
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm f_9 (ATerm t_61, ATerm u_61, ATerm v_61, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm g_9 (ATerm b_132 (ATerm), ATerm p_74, ATerm m_74, ATerm n_74, ATerm w_74, ATerm a_75, ATerm b_75, ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm b_101 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm d_132 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm i_9 (ATerm p_75, ATerm o_75, ATerm t);
ATerm repeat_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm t_107 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm debug_1_0 (ATerm y_105 (ATerm), ATerm t);
static ATerm m_79 (ATerm c_79, ATerm t);
static ATerm n_79 (ATerm e_79, ATerm t);
static ATerm m_7 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm z_80 (ATerm m_80, ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_9 (ATerm u_110 (ATerm), ATerm w_29, ATerm v_29, ATerm t);
static ATerm u_9 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm a_30, ATerm z_29, ATerm t);
static ATerm v_9 (ATerm p_110 (ATerm), ATerm u_29, ATerm t_29, ATerm t);
ATerm genzip_4_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm a_10 (ATerm q_641, ATerm v_641, ATerm t_60, ATerm t);
ATerm while_not_2_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm z_100 (ATerm r_98, ATerm s_98, ATerm v_98, ATerm t);
static ATerm p_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm free_vars_3_0 (ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm g_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm y_99 (ATerm), ATerm t);
static ATerm e_10 (ATerm n_54, ATerm o_54, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm p_101 (ATerm), ATerm t);
static ATerm f_10 (ATerm s_119 (ATerm), ATerm y_43, ATerm w_43, ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm g_10 (ATerm h_54, ATerm i_54, ATerm t);
ATerm end_scope_1_0 (ATerm p_119 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_119 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_114 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_107 (ATerm), ATerm t);
static ATerm u_109 (ATerm m_109, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_10 (ATerm p_132, ATerm l_132, ATerm t);
ATerm foldr_3_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm k_10 (ATerm o_39, ATerm p_39, ATerm t);
static ATerm l_10 (ATerm s_23, ATerm t_23, ATerm t);
static ATerm n_10 (ATerm a_106 (ATerm), ATerm j_172, ATerm y_23, ATerm t);
static ATerm m_10 (ATerm o_23, ATerm p_23, ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm output_1_0 (ATerm y_124 (ATerm), ATerm t);
static ATerm a_117 (ATerm u_116, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_10 (ATerm u_23, ATerm t);
static ATerm p_10 (ATerm h_38, ATerm i_38, ATerm t);
static ATerm q_10 (ATerm q_39, ATerm r_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_118 (ATerm k_117, ATerm t);
static ATerm r_118 (ATerm o_117, ATerm p_117, ATerm q_117, ATerm t);
static ATerm s_118 (ATerm d_118, ATerm e_118, ATerm f_118, ATerm t);
static ATerm r_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_124 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm l_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_11 (ATerm h_49, ATerm i_49, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm y_10 (ATerm c_54, ATerm d_54, ATerm b_54, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_10 (ATerm k_42, ATerm l_42, ATerm t);
ATerm foldr_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_121 (ATerm), ATerm t);
static ATerm e_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
ATerm need_help_1_0 (ATerm p_124 (ATerm), ATerm t);
static ATerm b_11 (ATerm u_57, ATerm v_57, ATerm w_57, ATerm t);
ATerm lookup_table_0_1 (ATerm o_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_58, ATerm d_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_10 (ATerm z_57, ATerm a_58, ATerm t);
static ATerm v_10 (ATerm e_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_106 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_106 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_11 (ATerm x_57, ATerm y_57, ATerm t);
static ATerm x_10 (ATerm v_55, ATerm w_55, ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_126 (ATerm), ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm parse_options_1_0 (ATerm r_126 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL;
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
              u_0 = ATgetFirst((ATermList) t);
              v_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_0, (ATerm) ATmakeAppl(sym_LChoices_1, v_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_d_18;
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
                  u_0 = ATgetFirst((ATermList) t);
                  v_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_0, (ATerm) ATmakeAppl(sym_Choices_1, v_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_d_18;
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
                      u_0 = ATgetFirst((ATermList) t);
                      v_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_0, (ATerm) ATmakeAppl(sym_Seqs_1, v_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_e_18;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
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
ATerm topdown_1_0 (ATerm x_99 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = topdown_1_0(x_99, t);
    return(t);
  }
  t = x_99(t);
  t = SRTS_all(h_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm j_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_5);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_5 = ATgetArgument(t, 0);
                  m_5 = ATgetArgument(t, 1);
                  n_5 = ATgetArgument(t, 2);
                  o_5 = ATgetArgument(t, 3);
                  t = n_5;
                  t = map_1_0(s_0, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_5 = ATgetArgument(t, 0);
                      m_5 = ATgetArgument(t, 1);
                      n_5 = ATgetArgument(t, 2);
                      o_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_5;
                  t = map_1_0(t_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm j_6 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_6 = ATgetArgument(t, 0);
          {
            ATerm m_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_18);
      t = j_6;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_6;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm w_6 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_6 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = w_6;
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_6;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_7);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm c_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_7);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            {
              ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_7 = ATgetArgument(t, 0);
                  f_7 = ATgetArgument(t, 1);
                  g_7 = ATgetArgument(t, 2);
                  h_7 = ATgetArgument(t, 3);
                  t = g_7;
                  t = map_1_0(d_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_7 = ATgetArgument(t, 0);
                      f_7 = ATgetArgument(t, 1);
                      g_7 = ATgetArgument(t, 2);
                      h_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_7;
                  t = map_1_0(e_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm s_7 = NULL;
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_7 = ATgetArgument(t, 0);
          {
            ATerm x_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_18);
      t = s_7;
    }
  else
    {
      t = v_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_7;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_8 = NULL;
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_8 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_18);
      t = h_8;
    }
  else
    {
      t = y_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_8;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm q_8 = NULL;
  q_8 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL,q_0 = NULL,a_0 = NULL,w_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            o_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_8);
        q_0 = t;
        t = term_d_19;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_19, o_9);
        t = e_10(w_0, o_9, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_19) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, o_9);
        a_0 = t;
        t = SSLsetAnnotations(a_0, q_0);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        {
          ATerm x_1 = NULL;
          t = term_d_19;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_19, q_8);
          t = e_10(x_1, q_8, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = q_8;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, q_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm p_11 (ATerm c_4, ATerm d_4, ATerm e_4, ATerm f_4, ATerm h_4, ATerm i_4, ATerm j_4, ATerm t)
  {
    ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,w_4 = NULL,z_4 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, h_4, term_k_19);
    {
      ATerm l_19 = t;
      if((PushChoice() == 0))
        {
          ATerm g_5 = NULL;
          if(match_cons(t, sym__2))
            {
              g_5 = ATgetArgument(t, 0);
              if((g_5 != ATgetArgument(t, 1)))
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
          t = l_19;
        }
    }
    t = new_0_0(t);
    q_4 = t;
    t = f_4;
    t = dummify_0_0(t);
    s_4 = t;
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_4;
          if((f_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, q_4);
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          t = s_4;
        }
    }
    r_4 = t;
    t = s_4;
    t = free_vars_3_0(p_0, r_0, tboundin_3_0, t);
    t = map_1_0(y_0, t);
    z_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_4, i_4);
    t = free_vars_3_0(b_1, c_1, tboundin_3_0, t);
    t = filter_1_0(f_1, t);
    w_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_4, z_4);
    t = diff_0_0(t);
    b_5 = t;
    t = new_0_0(t);
    e_5 = t;
    t = c_4;
    t = o_0(t);
    f_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, f_5, (ATerm) ATmakeAppl(sym_Op_2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(b_5), (ATerm) ATmakeAppl(sym_Str_1, e_5)))), s_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_4, d_4, e_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_4), f_4), h_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_4)))), r_4), (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(b_5), (ATerm) ATmakeAppl(sym_Str_1, e_5))))), i_4))));
    return(t);
  }
  ATerm w_9 = NULL,x_9 = NULL,b_10 = NULL,t_10 = NULL,w_10 = NULL,e_11 = NULL,i_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  b_10 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      t_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
      e_11 = ATgetArgument(t, 2);
      i_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = i_11;
  if(match_cons(t, sym_Rule_3))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
      n_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_11;
  if(match_cons(t, sym_Op_2))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
      t = x_9;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_9;
          if(match_string(t, "Undefined"))
            {
              ATerm d_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
                  t = b_10;
                  t = new_0_0(t);
                  l_2 = t;
                  t = l_11;
                  t = dummify_0_0(t);
                  j_2 = t;
                  {
                    ATerm g_20 = t;
                    int h_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_2;
                        if((l_11 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                        LocalPopChoice(h_20);
                      }
                    else
                      {
                        t = g_20;
                        t = j_2;
                      }
                  }
                  m_2 = t;
                  t = t_10;
                  t = o_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_q_19, (ATerm) ATinsert(ATinsert(ATempty, term_k_19), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, t_10, w_10, e_11, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), l_11), term_k_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_10)))), m_2), term_k_19)), (ATerm) ATmakeAppl(sym_Seq_2, n_11, term_d_18)))));
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = d_20;
                  t = p_11(t_10, w_10, e_11, l_11, m_11, n_11, b_10, t);
                }
            }
          else
            {
              t = p_11(t_10, w_10, e_11, l_11, m_11, n_11, b_10, t);
            }
        }
      else
        {
          t = w_9;
          t = p_11(t_10, w_10, e_11, l_11, m_11, n_11, b_10, t);
        }
    }
  else
    {
      t = p_11(t_10, w_10, e_11, l_11, m_11, n_11, b_10, t);
    }
  return(t);
}
static ATerm z_8 (ATerm c_132 (ATerm), ATerm i_75, ATerm g_75, ATerm h_75, ATerm l_75, ATerm j_75, ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t = new_0_0(t);
  t_11 = t;
  t = l_75;
  t = dummify_0_0(t);
  s_11 = t;
  {
    ATerm i_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_11;
        if((l_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, t_11);
        LocalPopChoice(n_20);
      }
    else
      {
        t = i_20;
        t = s_11;
      }
  }
  u_11 = t;
  t = i_75;
  t = c_132(t);
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_11, s_11)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, i_75, g_75, h_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_11), l_75), term_k_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_75)))), u_11), term_u_20)), (ATerm) ATmakeAppl(sym_Seq_2, j_75, term_d_18))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm c_132 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      b_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
      h_12 = ATgetArgument(t, 2);
      {
        ATerm x_20 = ATgetArgument(t, 3);
        if(match_cons(x_20, sym_Rule_3))
          {
            i_12 = ATgetArgument(x_20, 0);
            {
              ATerm a_21 = ATgetArgument(x_20, 1);
              if(match_cons(a_21, sym_Op_2))
                {
                  ATerm b_21 = ATgetArgument(a_21, 0);
                  if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm e_21 = ATgetArgument(a_21, 1);
                    if(((ATgetType(e_21) != AT_LIST) || !(ATisEmpty(e_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            j_12 = ATgetArgument(x_20, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_8(c_132, b_12, g_12, h_12, i_12, j_12, t);
  return(t);
}
static ATerm g_19 (ATerm p_13, ATerm q_13, ATerm t)
{
  t = p_13;
  {
    ATerm f_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,j_0 = NULL;
        v_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_13 = ATgetFirst((ATermList) t);
            u_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_13);
        s_13 = t;
        t = u_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_13), t_13);
        j_0 = t;
        t = SSLsetAnnotations(j_0, s_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_f_18, p_13);
  return(t);
}
static ATerm h_19 (ATerm w_13, ATerm x_13, ATerm t)
{
  t = w_13;
  {
    ATerm k_21 = t;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,v_1 = NULL;
        i_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_14 = ATgetFirst((ATermList) t);
            h_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_14);
        f_14 = t;
        t = h_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_14), g_14);
        v_1 = t;
        t = SSLsetAnnotations(v_1, f_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, w_13);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,w_2 = NULL;
  x_14 = t;
  t = SSL_explode_term(x_14);
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            y_14 = ATgetFirst((ATermList) q_21);
            {
              ATerm s_21 = (ATerm) ATgetNext((ATermList) q_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(x_14);
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_21 = ATgetArgument(t, 1);
        if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
          {
            ATerm y_21 = ATgetFirst((ATermList) w_21);
            ATerm b_22 = (ATerm) ATgetNext((ATermList) w_21);
            if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
              {
                w_2 = ATgetFirst((ATermList) b_22);
                {
                  ATerm c_22 = (ATerm) ATgetNext((ATermList) b_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, w_2), y_14));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm p_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, w_15), p_15));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, z_15), y_15));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, u_16), t_16));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_o_22;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_22, (ATerm) ATinsert(ATinsert(ATempty, x_16), w_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,r_14 = NULL,s_14 = NULL;
  o_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      r_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
      {
        ATerm v_14 = NULL;
        t = s_14;
        t = foldr_2_0(g_1, h_1, t);
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, r_14, v_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          r_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, r_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              r_14 = ATgetArgument(t, 0);
              {
                ATerm b_3 = NULL;
                t = r_14;
                {
                  ATerm p_22 = t;
                  int r_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_z_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_a_23;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_b_23;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_c_23;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_d_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(r_22);
                    }
                  else
                    {
                      t = p_22;
                      {
                        ATerm h_3 = NULL;
                        t = SSL_explode_string(r_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(e_23) != AT_INT) || (ATgetInt((ATermInt) e_23) != 39)))
                              _fail(t);
                            {
                              ATerm f_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
                                {
                                  h_3 = ATgetFirst((ATermList) f_23);
                                  {
                                    ATerm g_23 = (ATerm) ATgetNext((ATermList) f_23);
                                    if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
                                      {
                                        ATerm i_23 = ATgetFirst((ATermList) g_23);
                                        if(((ATgetType(i_23) != AT_INT) || (ATgetInt((ATermInt) i_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm k_23 = (ATerm) ATgetNext((ATermList) g_23);
                                          if(((ATgetType(k_23) != AT_LIST) || !(ATisEmpty(k_23))))
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
                        t = h_3;
                      }
                    }
                }
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, b_3);
              }
            }
          else
            {
              ATerm m_23 = t;
              int q_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      r_14 = ATgetArgument(t, 0);
                      {
                        ATerm w_23 = ATgetArgument(t, 1);
                      }
                      n_14 = ATgetArgument(t, 2);
                      j_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, r_14, n_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_14), (ATerm) ATempty));
                }
              else
                {
                  t = m_23;
                  {
                    ATerm x_23 = t;
                    int z_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            r_14 = ATgetArgument(t, 0);
                            {
                              ATerm b_24 = ATgetArgument(t, 1);
                            }
                            n_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, r_14, n_14, term_l_24);
                      }
                    else
                      {
                        t = x_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            r_14 = ATgetArgument(t, 0);
                            s_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, r_14, s_14, term_l_24);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                r_14 = ATgetArgument(t, 0);
                                s_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm i_1 (ATerm t)
                                  {
                                    t = s_14;
                                    return(t);
                                  }
                                  t = r_14;
                                  t = foldr_2_0(i_1, j_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    r_14 = ATgetArgument(t, 0);
                                    t = r_14;
                                    t = foldr_2_0(k_1, l_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        r_14 = ATgetArgument(t, 0);
                                        t = r_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            k_14 = ATgetFirst((ATermList) t);
                                            l_14 = (ATerm) ATgetNext((ATermList) t);
                                            t = l_14;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm m_24 = t;
                                                int o_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_19(r_14, o_14, t);
                                                    LocalPopChoice(o_24);
                                                  }
                                                else
                                                  {
                                                    t = m_24;
                                                    t = k_14;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_19(r_14, o_14, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_19(r_14, o_14, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            r_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, r_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                r_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, r_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    r_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, r_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        r_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, r_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            r_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                r_14 = ATgetArgument(t, 0);
                                                                s_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_14), s_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    r_14 = ATgetArgument(t, 0);
                                                                    s_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm m_1 (ATerm t)
                                                                      {
                                                                        t = s_14;
                                                                        return(t);
                                                                      }
                                                                      t = r_14;
                                                                      t = foldr_2_0(m_1, n_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        r_14 = ATgetArgument(t, 0);
                                                                        t = r_14;
                                                                        t = foldr_2_0(o_1, p_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            r_14 = ATgetArgument(t, 0);
                                                                            s_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATinsert(CheckATermList(s_14), r_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                r_14 = ATgetArgument(t, 0);
                                                                                t = r_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    k_14 = ATgetFirst((ATermList) t);
                                                                                    l_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = l_14;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm p_24 = t;
                                                                                        int q_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_19(r_14, o_14, t);
                                                                                            LocalPopChoice(q_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_24;
                                                                                            t = k_14;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_19(r_14, o_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_19(r_14, o_14, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_s_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        r_14 = ATgetArgument(t, 0);
                                                                                        s_14 = ATgetArgument(t, 1);
                                                                                        t = s_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_w_24, (ATerm) ATinsert(ATinsert(ATempty, m_14), r_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            r_14 = ATgetArgument(t, 0);
                                                                                            t = r_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                r_14 = ATgetArgument(t, 0);
                                                                                                s_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, r_14, s_14, term_e_18);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    r_14 = ATgetArgument(t, 0);
                                                                                                    s_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, r_14, s_14, term_e_18);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        r_14 = ATgetArgument(t, 0);
                                                                                                        s_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, r_14, (ATerm)ATempty, s_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            r_14 = ATgetArgument(t, 0);
                                                                                                            s_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, s_14, r_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                r_14 = ATgetArgument(t, 0);
                                                                                                                s_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, r_14, s_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    r_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, r_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        r_14 = ATgetArgument(t, 0);
                                                                                                                        s_14 = ATgetArgument(t, 1);
                                                                                                                        n_14 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, r_14, s_14, (ATerm)ATempty, n_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            r_14 = ATgetArgument(t, 0);
                                                                                                                            s_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_14, (ATerm)ATempty, (ATerm)ATempty, s_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                r_14 = ATgetArgument(t, 0);
                                                                                                                                s_14 = ATgetArgument(t, 1);
                                                                                                                                n_14 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_14, s_14, (ATerm)ATempty, n_14);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    r_14 = ATgetArgument(t, 0);
                                                                                                                                    s_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_14, (ATerm)ATempty, (ATerm)ATempty, s_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        r_14 = ATgetArgument(t, 0);
                                                                                                                                        s_14 = ATgetArgument(t, 1);
                                                                                                                                        n_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, r_14, s_14, (ATerm)ATempty, n_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            r_14 = ATgetArgument(t, 0);
                                                                                                                                            s_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, r_14, (ATerm)ATempty, (ATerm)ATempty, s_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm x_24 = ATgetArgument(t, 0);
                                                                                                                                                s_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, s_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm j_19 = NULL,o_19 = NULL,p_19 = NULL;
  o_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      p_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      {
        ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
        t = o_19;
        t = new_0_0(t);
        s_19 = t;
        t = new_0_0(t);
        t_19 = t;
        t = new_0_0(t);
        u_19 = t;
        t = new_0_0(t);
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_19), u_19), t_19), s_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, s_19), (ATerm) ATmakeAppl(sym_Var_1, u_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, p_19, (ATerm)ATmakeAppl(sym_Var_1, s_19), (ATerm) ATmakeAppl(sym_Var_1, t_19)), (ATerm) ATmakeAppl(sym_BAM_3, j_19, (ATerm)ATmakeAppl(sym_Var_1, u_19), (ATerm) ATmakeAppl(sym_Var_1, v_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_19)), (ATerm) ATmakeAppl(sym_Var_1, t_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          p_19 = ATgetArgument(t, 0);
          {
            ATerm w_19 = NULL,x_19 = NULL,b_20 = NULL,c_20 = NULL;
            t = o_19;
            t = new_0_0(t);
            b_20 = t;
            t = p_19;
            {
              static ATerm q_1 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                return(t);
              }
              t = oncetd_1_0(q_1, t);
            }
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_19)), not_null(w_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_Build_1, c_20))));
          }
        }
      else
        {
          ATerm e_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              p_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_19;
          t = new_0_0(t);
          k_20 = t;
          t = new_0_0(t);
          l_20 = t;
          t = p_19;
          {
            static ATerm r_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_20 = ATgetArgument(t, 0);
                  if(((j_20 != NULL) && (j_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    j_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, k_20);
              return(t);
            }
            t = oncetd_1_0(r_1, t);
          }
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_20))))), (ATerm)ATmakeAppl(sym_Var_1, k_20), (ATerm) ATmakeAppl(sym_Op_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_20)), not_null(e_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,s_20 = NULL,v_20 = NULL,w_20 = NULL;
        t = o_20;
        t = new_0_0(t);
        v_20 = t;
        t = p_20;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_20 = ATgetArgument(t, 0);
                if(((s_20 != NULL) && (s_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_20), r_20);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_20))))));
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        {
          ATerm j_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL,z_20 = NULL,c_21 = NULL;
              t = o_20;
              t = new_0_0(t);
              z_20 = t;
              t = p_20;
              {
                static ATerm t_1 (ATerm t)
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
                t = pat_td_1_0(t_1, t);
              }
              c_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_20)), not_null(y_20))));
              LocalPopChoice(m_25);
            }
          else
            {
              t = j_25;
              {
                ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
                t = o_20;
                t = new_0_0(t);
                i_21 = t;
                t = p_20;
                {
                  static ATerm u_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((h_21 != NULL) && (h_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          h_21 = ATgetArgument(t, 0);
                        if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_21);
                    return(t);
                  }
                  t = pat_td_1_0(u_1, t);
                }
                j_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_21)), not_null(h_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm w_130 (ATerm), ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_130(t);
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
        f_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            g_26 = ATgetArgument(t, 0);
            h_26 = ATgetArgument(t, 1);
            {
              ATerm r_3 = NULL,m_4 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(f_26);
              r_3 = t;
              t = h_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = pat_td_1_0(w_130, t);
                  return(t);
                }
                t = fetch_1_0(w_1, t);
              }
              m_4 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_26, m_4);
              d_3 = t;
              t = SSLsetAnnotations(d_3, r_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                g_26 = ATgetArgument(t, 0);
                h_26 = ATgetArgument(t, 1);
                {
                  ATerm q_25 = t;
                  int r_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_5 = NULL,t_5 = NULL,e_3 = NULL;
                      t = SSLgetAnnotations(f_26);
                      p_5 = t;
                      t = h_26;
                      t = pat_td_1_0(w_130, t);
                      t_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, g_26, t_5);
                      e_3 = t;
                      t = SSLsetAnnotations(e_3, p_5);
                      LocalPopChoice(r_25);
                    }
                  else
                    {
                      t = q_25;
                      {
                        ATerm g_6 = NULL,k_6 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(f_26);
                        g_6 = t;
                        t = g_26;
                        t = pat_td_1_0(w_130, t);
                        k_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, k_6, h_26);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, g_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    g_26 = ATgetArgument(t, 0);
                    h_26 = ATgetArgument(t, 1);
                    e_26 = ATgetArgument(t, 2);
                    {
                      ATerm o_7 = NULL,b_8 = NULL,k_3 = NULL;
                      t = SSLgetAnnotations(f_26);
                      o_7 = t;
                      t = e_26;
                      {
                        static ATerm y_1 (ATerm t)
                        {
                          t = pat_td_1_0(w_130, t);
                          return(t);
                        }
                        t = fetch_1_0(y_1, t);
                      }
                      b_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, g_26, h_26, b_8);
                      k_3 = t;
                      t = SSLsetAnnotations(k_3, o_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        g_26 = ATgetArgument(t, 0);
                        h_26 = ATgetArgument(t, 1);
                        e_26 = ATgetArgument(t, 2);
                        {
                          ATerm t_8 = NULL,y_8 = NULL,l_3 = NULL;
                          t = SSLgetAnnotations(f_26);
                          t_8 = t;
                          t = e_26;
                          {
                            static ATerm z_1 (ATerm t)
                            {
                              t = pat_td_1_0(w_130, t);
                              return(t);
                            }
                            t = fetch_1_0(z_1, t);
                          }
                          y_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, g_26, h_26, y_8);
                          l_3 = t;
                          t = SSLsetAnnotations(l_3, t_8);
                        }
                      }
                    else
                      {
                        ATerm q_9 = NULL,y_9 = NULL,n_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            g_26 = ATgetArgument(t, 0);
                            h_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_26);
                        q_9 = t;
                        t = h_26;
                        t = pat_td_1_0(w_130, t);
                        y_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, g_26, y_9);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, q_9);
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
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL,b_27 = NULL,f_27 = NULL,g_27 = NULL;
        t = v_26;
        t = new_0_0(t);
        f_27 = t;
        t = w_26;
        {
          static ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_26 = ATgetArgument(t, 0);
                if(((b_27 != NULL) && (b_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  b_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, f_27);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        g_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_27)), not_null(x_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_27)))), (ATerm) ATmakeAppl(sym_Build_1, g_27)));
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_27 = NULL,m_27 = NULL,n_27 = NULL;
              t = v_26;
              t = new_0_0(t);
              m_27 = t;
              t = w_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_27 != NULL) && (h_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_27);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              n_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_27)))), (ATerm) ATmakeAppl(sym_Build_1, n_27)));
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              {
                ATerm s_27 = NULL,t_27 = NULL,v_27 = NULL,w_27 = NULL;
                t = v_26;
                t = new_0_0(t);
                v_27 = t;
                t = w_26;
                {
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_27 != NULL) && (s_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_27 = ATgetArgument(t, 0);
                        if(((t_27 != NULL) && (t_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_27);
                    return(t);
                  }
                  t = pat_td_1_0(c_2, t);
                }
                w_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_27), not_null(t_27), (ATerm) ATmakeAppl(sym_Var_1, v_27))), (ATerm) ATmakeAppl(sym_Build_1, w_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm p_26 = t;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,y_3 = NULL;
      p_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_28);
      n_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_28);
      y_3 = t;
      t = SSLsetAnnotations(y_3, n_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_26;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      r_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_28, r_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm s_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      if(match_cons(t_26, sym__2))
        {
          s_28 = ATgetArgument(t_26, 0);
          v_28 = ATgetArgument(t_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(match_cons(c_27, sym__2))
          {
            w_28 = ATgetArgument(c_27, 0);
            x_28 = ATgetArgument(c_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_28), s_28), (ATerm) ATinsert(CheckATermList(x_28), v_28));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm i_2 (ATerm t)
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
static ATerm k_2 (ATerm t)
{
  ATerm a_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(match_cons(d_27, sym__2))
        {
          a_29 = ATgetArgument(d_27, 0);
          d_29 = ATgetArgument(d_27, 1);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(match_cons(e_27, sym__2))
          {
            e_29 = ATgetArgument(e_27, 0);
            f_29 = ATgetArgument(e_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_29), a_29), (ATerm) ATinsert(CheckATermList(f_29), d_29));
  return(t);
}
static ATerm b_9 (ATerm g_66, ATerm h_66, ATerm i_66, ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,z_3 = NULL;
  t = i_66;
  t = fetch_1_0(d_2, t);
  t = i_66;
  t = genzip_4_0(e_2, f_2, g_2, LiftPrimArg_0_0, t);
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_28);
  b_28 = t;
  t = c_28;
  t = concat_0_0(t);
  k_28 = t;
  t = j_28;
  t = genzip_4_0(h_2, i_2, k_2, _id, t);
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
  z_3 = t;
  t = SSLsetAnnotations(z_3, b_28);
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(match_cons(i_27, sym__2))
          {
            z_27 = ATgetArgument(i_27, 0);
            a_28 = ATgetArgument(i_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_27), (ATerm) ATmakeAppl(sym_CallT_3, g_66, h_66, a_28)));
  return(t);
}
static ATerm i_30 (ATerm o_29, ATerm t)
{
  ATerm y_29 = NULL;
  t = o_29;
  {
    ATerm j_27 = t;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,r_8 = NULL;
        e_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_30);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, d_30);
        r_8 = t;
        t = SSLsetAnnotations(r_8, c_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_27;
      }
  }
  t = new_0_0(t);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_29)))), (ATerm) ATmakeAppl(sym_Var_1, y_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  f_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_30 = ATgetArgument(t, 0);
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_30(f_30, t);
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_e_18, (ATerm) ATmakeAppl(sym_Var_1, g_30)));
          }
      }
    }
  else
    {
      t = i_30(f_30, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm o_27 = t;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,d_9 = NULL;
      p_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_12);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_12);
      d_9 = t;
      t = SSLsetAnnotations(d_9, n_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_27;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_12 = ATgetFirst((ATermList) t);
      r_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_12, r_12);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym__2))
        {
          s_12 = ATgetArgument(u_27, 0);
          t_12 = ATgetArgument(u_27, 1);
        }
      else
        _fail(t);
      {
        ATerm h_28 = ATgetArgument(t, 1);
        if(match_cons(h_28, sym__2))
          {
            u_12 = ATgetArgument(h_28, 0);
            v_12 = ATgetArgument(h_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_12), s_12), (ATerm) ATinsert(CheckATermList(v_12), t_12));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_12 = ATgetFirst((ATermList) t);
      x_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_12, x_12);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if(match_cons(i_28, sym__2))
        {
          y_12 = ATgetArgument(i_28, 0);
          z_12 = ATgetArgument(i_28, 1);
        }
      else
        _fail(t);
      {
        ATerm t_28 = ATgetArgument(t, 1);
        if(match_cons(t_28, sym__2))
          {
            a_13 = ATgetArgument(t_28, 0);
            b_13 = ATgetArgument(t_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_13), y_12), (ATerm) ATinsert(CheckATermList(b_13), z_12));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm u_28 = t;
  if((PushChoice() == 0))
    {
      ATerm o_15 = NULL,q_15 = NULL,r_15 = NULL,o_11 = NULL;
      r_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_15);
      o_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
      o_11 = t;
      t = SSLsetAnnotations(o_11, o_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_15 = ATgetFirst((ATermList) t);
      t_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_15, t_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      if(match_cons(b_29, sym__2))
        {
          u_15 = ATgetArgument(b_29, 0);
          v_15 = ATgetArgument(b_29, 1);
        }
      else
        _fail(t);
      {
        ATerm c_29 = ATgetArgument(t, 1);
        if(match_cons(c_29, sym__2))
          {
            e_16 = ATgetArgument(c_29, 0);
            f_16 = ATgetArgument(c_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_16), u_15), (ATerm) ATinsert(CheckATermList(f_16), v_15));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm h_16 = NULL,j_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_16 = ATgetFirst((ATermList) t);
      j_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_16, j_16);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm k_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(match_cons(j_29, sym__2))
        {
          k_16 = ATgetArgument(j_29, 0);
          p_16 = ATgetArgument(j_29, 1);
        }
      else
        _fail(t);
      {
        ATerm p_29 = ATgetArgument(t, 1);
        if(match_cons(p_29, sym__2))
          {
            q_16 = ATgetArgument(p_29, 0);
            r_16 = ATgetArgument(p_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_16), k_16), (ATerm) ATinsert(CheckATermList(r_16), p_16));
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
        ATerm k_11 = NULL,r_11 = NULL,x_11 = NULL,z_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,m_12 = NULL,n_9 = NULL;
        t = c_35;
        t = fetch_1_0(o_2, t);
        t = c_35;
        t = genzip_4_0(p_2, q_2, r_2, LiftPrimArg_0_0, t);
        m_12 = t;
        if(match_cons(t, sym__2))
          {
            c_12 = ATgetArgument(t, 0);
            d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_12);
        z_11 = t;
        t = c_12;
        t = concat_0_0(t);
        e_12 = t;
        t = d_12;
        t = genzip_4_0(s_2, t_2, u_2, _id, t);
        f_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_12, f_12);
        n_9 = t;
        t = SSLsetAnnotations(n_9, z_11);
        if(match_cons(t, sym__2))
          {
            k_11 = ATgetArgument(t, 0);
            {
              ATerm h_30 = ATgetArgument(t, 1);
              if(match_cons(h_30, sym__2))
                {
                  r_11 = ATgetArgument(h_30, 0);
                  x_11 = ATgetArgument(h_30, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_11), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, f_35, x_11)));
      }
    }
  else
    {
      ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,p_14 = NULL,q_14 = NULL,c_15 = NULL,e_15 = NULL,j_15 = NULL,m_15 = NULL,q_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          e_35 = ATgetArgument(t, 0);
          f_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_35;
      t = fetch_1_0(v_2, t);
      t = f_35;
      t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
      m_15 = t;
      if(match_cons(t, sym__2))
        {
          q_14 = ATgetArgument(t, 0);
          c_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_15);
      p_14 = t;
      t = q_14;
      t = concat_0_0(t);
      e_15 = t;
      t = c_15;
      t = genzip_4_0(a_3, c_3, f_3, _id, t);
      j_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_15, j_15);
      q_11 = t;
      t = SSLsetAnnotations(q_11, p_14);
      if(match_cons(t, sym__2))
        {
          c_14 = ATgetArgument(t, 0);
          {
            ATerm k_30 = ATgetArgument(t, 1);
            if(match_cons(k_30, sym__2))
              {
                d_14 = ATgetArgument(k_30, 0);
                e_14 = ATgetArgument(k_30, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, c_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_14), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, (ATerm)ATempty, e_14)));
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
      d_36 = ATgetArgument(t, 2);
      {
        ATerm z_17 = NULL,e_13 = NULL;
        t = SSLgetAnnotations(e_36);
        z_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, b_36, c_36, d_36);
        e_13 = t;
        t = SSLsetAnnotations(e_13, z_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = e_36;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm l_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_30;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,v_37 = NULL,w_37 = NULL;
  t_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
      s_37 = ATgetArgument(t, 2);
      {
        ATerm u_18 = NULL,j_13 = NULL;
        t = SSLgetAnnotations(t_37);
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, v_37, w_37, s_37);
        j_13 = t;
        t = SSLsetAnnotations(j_13, u_18);
      }
    }
  else
    {
      ATerm a_20 = NULL,k_13 = NULL;
      if(match_cons(t, sym_App_2))
        {
          v_37 = ATgetArgument(t, 0);
          w_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_37);
      a_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, v_37, w_37);
      k_13 = t;
      t = SSLsetAnnotations(k_13, a_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm m_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm l_38 = NULL,n_38 = NULL,s_38 = NULL,t_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_38;
  if(match_cons(t, sym_StratRule_3))
    {
      n_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
      t_38 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_38), (ATerm) ATmakeAppl(sym_Where_1, t_38)), n_38));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          n_38 = ATgetArgument(t, 0);
          s_38 = ATgetArgument(t, 1);
          t_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_38;
      t = pureterm_0_0(t);
      t = s_38;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, s_38)), (ATerm) ATmakeAppl(sym_Where_1, t_38)), (ATerm) ATmakeAppl(sym_Match_1, n_38)));
    }
  return(t);
}
static ATerm f_9 (ATerm t_61, ATerm u_61, ATerm v_61, ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  t = new_0_0(t);
  k_39 = t;
  t = t_61;
  {
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm n_30 = ATgetArgument(t, 0);
          if(match_cons(n_30, sym_Var_1))
            {
              if(((j_39 != NULL) && (j_39 != ATgetArgument(n_30, 0))))
                _fail(ATgetArgument(n_30, 0));
              else
                j_39 = ATgetArgument(n_30, 0);
            }
          else
            _fail(t);
          if(((b_39 != NULL) && (b_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_39 = ATgetArgument(t, 1);
          {
            ATerm o_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_39);
      return(t);
    }
    t = oncetd_1_0(m_3, t);
  }
  l_39 = t;
  t = u_61;
  {
    static ATerm o_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_30 = ATgetArgument(t, 0);
          if(match_cons(p_30, sym_Var_1))
            {
              if(((j_39 != NULL) && (j_39 != ATgetArgument(p_30, 0))))
                _fail(ATgetArgument(p_30, 0));
              else
                j_39 = ATgetArgument(p_30, 0);
            }
          else
            _fail(t);
          if(((i_39 != NULL) && (i_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_39 = ATgetArgument(t, 1);
          {
            ATerm u_30 = ATgetArgument(t, 2);
            if(match_cons(u_30, sym_CallT_3))
              {
                if(((a_39 != NULL) && (a_39 != ATgetArgument(u_30, 0))))
                  _fail(ATgetArgument(u_30, 0));
                else
                  a_39 = ATgetArgument(u_30, 0);
                {
                  ATerm v_30 = ATgetArgument(u_30, 1);
                  if(((ATgetType(v_30) != AT_LIST) || !(ATisEmpty(v_30))))
                    _fail(t);
                }
                {
                  ATerm a_31 = ATgetArgument(u_30, 2);
                  if(((ATgetType(a_31) != AT_LIST) || !(ATisEmpty(a_31))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_39);
      return(t);
    }
    t = oncetd_1_0(o_3, t);
  }
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, l_39, m_39, (ATerm) ATmakeAppl(sym_Seq_2, v_61, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(a_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_39), not_null(i_39), term_e_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_39)), (ATerm) ATmakeAppl(sym_Var_1, k_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,a_41 = NULL,c_41 = NULL;
          x_40 = t;
          if(match_cons(t, sym_SRule_1))
            {
              a_41 = ATgetArgument(t, 0);
              t = a_41;
              if(match_cons(t, sym_Rule_3))
                {
                  s_40 = ATgetArgument(t, 0);
                  v_40 = ATgetArgument(t, 1);
                  w_40 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = x_40;
              t = f_9(s_40, v_40, w_40, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm d_21 = NULL,l_21 = NULL,r_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  a_41 = ATgetArgument(t, 0);
                  c_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_40);
              d_21 = t;
              t = c_41;
              t = desugarRule_0_0(t);
              l_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_41, l_21);
              r_21 = t;
              t = SSLsetAnnotations(r_21, d_21);
            }
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
    }
  t = repeat_2_0(q_3, _id, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm b_42 = NULL,p_42 = NULL,a_43 = NULL,f_43 = NULL;
            b_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                p_42 = ATgetArgument(t, 0);
                a_43 = ATgetArgument(t, 1);
                f_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_42;
            t = b_9(p_42, a_43, f_43, t);
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
                  t = HL_0_0(t);
                  LocalPopChoice(m_31);
                }
              else
                {
                  t = l_31;
                  {
                    ATerm o_31 = t;
                    int p_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(p_31);
                      }
                    else
                      {
                        t = o_31;
                        {
                          ATerm q_31 = t;
                          int r_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_31 = t;
                              int t_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      i_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_44;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      j_44 = ATgetArgument(t, 0);
                                      t = j_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          j_44 = ATgetArgument(t, 0);
                                          k_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, j_44, k_44);
                                    }
                                  LocalPopChoice(t_31);
                                }
                              else
                                {
                                  t = s_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(r_31);
                            }
                          else
                            {
                              t = q_31;
                              {
                                ATerm u_31 = t;
                                int v_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(v_31);
                                  }
                                else
                                  {
                                    t = u_31;
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
static ATerm s_3 (ATerm t)
{
  ATerm b_46 = NULL,f_46 = NULL,i_46 = NULL;
  b_46 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm y_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_31);
        t = b_46;
        {
          ATerm z_31 = t;
          if((PushChoice() == 0))
            {
              ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL,u_21 = NULL;
              j_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  f_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_22);
              e_22 = t;
              t = f_22;
              {
                ATerm b_32 = t;
                int c_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_23 = NULL;
                    t = term_d_19;
                    h_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_d_19, f_22);
                    t = e_10(h_23, f_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm d_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_32) != ATmakeSymbol("m_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = f_22;
                    LocalPopChoice(c_32);
                  }
                else
                  {
                    t = b_32;
                    {
                      ATerm s_22 = NULL,a_24 = NULL,t_21 = NULL,e_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          s_22 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(f_22);
                      a_24 = t;
                      t = term_d_19;
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_d_19, s_22);
                      t = e_10(e_24, s_22, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm e_32 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) e_32) != ATmakeSymbol("m_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, s_22);
                      t_21 = t;
                      t = SSLsetAnnotations(t_21, a_24);
                    }
                  }
              }
              g_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, g_22);
              u_21 = t;
              t = SSLsetAnnotations(u_21, e_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_31;
            }
        }
        t = term_o_21;
      }
    else
      {
        t = w_31;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_o_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                f_46 = ATgetArgument(t, 0);
                {
                  ATerm o_46 = NULL;
                  t = f_46;
                  t = free_vars_3_0(t_3, u_3, tboundin_3_0, t);
                  t = map_1_0(x_3, t);
                  o_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_f_32, o_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    f_46 = ATgetArgument(t, 0);
                    i_46 = ATgetArgument(t, 1);
                    {
                      ATerm z_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, f_46, i_46);
                      t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
                      t = map_1_0(l_4, t);
                      z_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_f_32, z_48);
                    }
                  }
                else
                  {
                    ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm g_32 = ATgetArgument(t, 0);
                        ATerm h_32 = ATgetArgument(t, 1);
                        ATerm i_32 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_j_32;
                    h_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_k_32);
                    i_24 = t;
                    t = SSL_printnl(h_24, i_24);
                    t = term_l_32;
                    g_24 = t;
                    t = SSL_exit(g_24);
                    t = (ATerm) ATinsert(ATempty, term_k_32);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm r_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_46);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            {
              ATerm t_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_46 = ATgetArgument(t, 0);
                  a_47 = ATgetArgument(t, 1);
                  b_47 = ATgetArgument(t, 2);
                  c_47 = ATgetArgument(t, 3);
                  t = b_47;
                  t = map_1_0(v_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_46 = ATgetArgument(t, 0);
                      a_47 = ATgetArgument(t, 1);
                      b_47 = ATgetArgument(t, 2);
                      c_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_47;
                  t = map_1_0(w_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_47 = NULL;
  ATerm q_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_47 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = q_47;
    }
  else
    {
      t = q_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_47;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm n_48 = NULL;
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_48 = ATgetArgument(t, 0);
          {
            ATerm w_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_32);
      t = n_48;
    }
  else
    {
      t = u_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_48;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_48);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm a_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_49);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm f_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_49 = ATgetArgument(t, 0);
                  k_49 = ATgetArgument(t, 1);
                  l_49 = ATgetArgument(t, 2);
                  m_49 = ATgetArgument(t, 3);
                  t = l_49;
                  t = map_1_0(g_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_49 = ATgetArgument(t, 0);
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
static ATerm g_4 (ATerm t)
{
  ATerm i_50 = NULL;
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_50 = ATgetArgument(t, 0);
          {
            ATerm d_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_33);
      t = i_50;
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_50;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm w_50 = NULL;
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_50 = ATgetArgument(t, 0);
          {
            ATerm g_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_33);
      t = w_50;
    }
  else
    {
      t = e_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_50;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm c_51 = NULL;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_51);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(s_3, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm f_53 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_53 = ATgetArgument(t, 0);
      t = f_53;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_53 = ATgetArgument(t, 0);
          {
            ATerm i_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_53;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_53), (ATerm) ATempty);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm u_53 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_53 = ATgetArgument(t, 0);
      t = u_53;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_53 = ATgetArgument(t, 0);
          {
            ATerm j_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_53;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, u_53);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_54);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm n_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_33);
          }
        else
          {
            t = n_33;
            {
              ATerm p_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_54 = ATgetArgument(t, 0);
                  u_54 = ATgetArgument(t, 1);
                  v_54 = ATgetArgument(t, 2);
                  w_54 = ATgetArgument(t, 3);
                  t = v_54;
                  t = map_1_0(u_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_54 = ATgetArgument(t, 0);
                      u_54 = ATgetArgument(t, 1);
                      v_54 = ATgetArgument(t, 2);
                      w_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_54;
                  t = map_1_0(v_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm f_55 = NULL;
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_55 = ATgetArgument(t, 0);
          {
            ATerm s_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_33);
      t = f_55;
    }
  else
    {
      t = q_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_55;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm e_56 = NULL;
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_56 = ATgetArgument(t, 0);
          {
            ATerm v_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_33);
      t = e_56;
    }
  else
    {
      t = t_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_56;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm i_56 = NULL;
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_56);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm j_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_56);
  return(t);
}
static ATerm a_5 (ATerm t)
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
              ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_56 = ATgetArgument(t, 0);
                  q_56 = ATgetArgument(t, 1);
                  r_56 = ATgetArgument(t, 2);
                  s_56 = ATgetArgument(t, 3);
                  t = r_56;
                  t = map_1_0(c_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_56 = ATgetArgument(t, 0);
                      q_56 = ATgetArgument(t, 1);
                      r_56 = ATgetArgument(t, 2);
                      s_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_56;
                  t = map_1_0(d_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm f_57 = NULL;
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_57 = ATgetArgument(t, 0);
          {
            ATerm c_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_34);
      t = f_57;
    }
  else
    {
      t = a_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_57;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm r_57 = NULL;
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_57 = ATgetArgument(t, 0);
          {
            ATerm f_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_34);
      t = r_57;
    }
  else
    {
      t = d_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_57;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_58 = NULL,n_24 = NULL,x_21 = NULL,y_24 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            p_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_58);
        n_24 = t;
        t = term_d_19;
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_19, p_58);
        t = e_10(y_24, p_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm i_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, p_58);
        x_21 = t;
        t = SSLsetAnnotations(x_21, n_24);
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm c_25 = NULL;
          t = term_d_19;
          c_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_19, i_58);
          t = e_10(c_25, i_58, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm j_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_34) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = i_58;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, i_58);
  return(t);
}
static ATerm g_9 (ATerm b_132 (ATerm), ATerm p_74, ATerm m_74, ATerm n_74, ATerm w_74, ATerm a_75, ATerm b_75, ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,o_52 = NULL,p_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_75, term_k_19);
  {
    ATerm k_34 = t;
    if((PushChoice() == 0))
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
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_34;
      }
  }
  t = term_l_34;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_34, p_74);
  t = p_10(z_52, p_74, t);
  d_52 = t;
  t = term_n_34;
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_34, p_74);
  t = p_10(y_52, p_74, t);
  e_52 = t;
  t = new_0_0(t);
  f_52 = t;
  t = m_74;
  t = map_1_0(n_4, t);
  g_52 = t;
  t = n_74;
  t = map_1_0(o_4, t);
  j_52 = t;
  t = new_0_0(t);
  k_52 = t;
  t = w_74;
  t = dummify_0_0(t);
  m_52 = t;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_52;
        if((w_74 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, k_52);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = m_52;
      }
  }
  l_52 = t;
  t = m_52;
  t = free_vars_3_0(p_4, t_4, tboundin_3_0, t);
  t = map_1_0(x_4, t);
  p_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_75, b_75);
  t = free_vars_3_0(y_4, a_5, tboundin_3_0, t);
  t = filter_1_0(h_5, t);
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
  t = diff_0_0(t);
  u_52 = t;
  t = new_0_0(t);
  v_52 = t;
  t = p_74;
  t = b_132(t);
  w_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, w_52, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(u_52), (ATerm) ATmakeAppl(sym_Str_1, v_52)))), m_52)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, e_52, m_74, n_74, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(u_52), (ATerm) ATmakeAppl(sym_Str_1, v_52)))), w_74)), a_75, (ATerm) ATmakeAppl(sym_Seq_2, term_a_35, b_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, d_52, m_74, n_74, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_52), w_74), (ATerm)ATmakeAppl(sym_Var_1, f_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_74)))), l_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_u_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_52), g_52, j_52), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_v_34), (ATerm) ATmakeAppl(sym_Var_1, k_52)))))), (ATerm) ATmakeAppl(sym_Var_1, f_52)))))), (ATerm) ATmakeAppl(sym_RDefT_4, p_74, m_74, n_74, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_52), w_74), a_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_74)))), l_52), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_19, (ATerm) ATinsert(CheckATermList(u_52), (ATerm) ATmakeAppl(sym_Str_1, v_52)))), term_q_34))), b_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm b_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,u_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
      k_26 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          l_26 = ATgetArgument(t, 0);
          m_26 = ATgetArgument(t, 1);
          n_26 = ATgetArgument(t, 2);
          u_26 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_26;
      if(match_cons(t, sym_Rule_3))
        {
          y_26 = ATgetArgument(t, 0);
          z_26 = ATgetArgument(t, 1);
          a_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_26;
      t = g_9(k_5, l_26, m_26, n_26, y_26, z_26, a_27, t);
      LocalPopChoice(g_35);
    }
  else
    {
      t = b_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(q_5, t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_27))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_27))));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm r_27 = NULL,x_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_27 = ATgetFirst((ATermList) t);
      x_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_27, x_27);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(match_cons(l_35, sym__2))
        {
          d_28 = ATgetArgument(l_35, 0);
          e_28 = ATgetArgument(l_35, 1);
        }
      else
        _fail(t);
      {
        ATerm m_35 = ATgetArgument(t, 1);
        if(match_cons(m_35, sym__2))
          {
            f_28 = ATgetArgument(m_35, 0);
            g_28 = ATgetArgument(m_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_28), d_28), (ATerm) ATinsert(CheckATermList(g_28), e_28));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = NULL,n_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,x_29 = NULL,b_30 = NULL,j_30 = NULL;
      m_29 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          n_29 = ATgetArgument(t, 0);
          q_29 = ATgetArgument(t, 1);
          r_29 = ATgetArgument(t, 2);
          s_29 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = s_29;
      if(match_cons(t, sym_Rule_3))
        {
          x_29 = ATgetArgument(t, 0);
          b_30 = ATgetArgument(t, 1);
          j_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_29;
      t = g_9(w_5, n_29, q_29, r_29, x_29, b_30, j_30, t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(x_5, t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_30))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_30))));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_30 = ATgetFirst((ATermList) t);
      t_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_30, t_30);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(match_cons(t_35, sym__2))
        {
          w_30 = ATgetArgument(t_35, 0);
          x_30 = ATgetArgument(t_35, 1);
        }
      else
        _fail(t);
      {
        ATerm u_35 = ATgetArgument(t, 1);
        if(match_cons(u_35, sym__2))
          {
            y_30 = ATgetArgument(u_35, 0);
            z_30 = ATgetArgument(u_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_30), w_30), (ATerm) ATinsert(CheckATermList(z_30), x_30));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(c_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm i_68 = NULL;
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_68))));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm l_68 = NULL,n_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_68 = ATgetFirst((ATermList) t);
      n_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_68, n_68);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_68 = NULL,q_68 = NULL,r_68 = NULL,t_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      if(match_cons(y_35, sym__2))
        {
          o_68 = ATgetArgument(y_35, 0);
          q_68 = ATgetArgument(y_35, 1);
        }
      else
        _fail(t);
      {
        ATerm z_35 = ATgetArgument(t, 1);
        if(match_cons(z_35, sym__2))
          {
            r_68 = ATgetArgument(z_35, 0);
            t_68 = ATgetArgument(z_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_68), o_68), (ATerm) ATinsert(CheckATermList(t_68), q_68));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(i_6, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm w_68 = NULL;
  w_68 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_68))));
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_26;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_68 = ATgetFirst((ATermList) t);
      y_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_68, y_68);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm z_68 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(match_cons(g_36, sym__2))
        {
          z_68 = ATgetArgument(g_36, 0);
          e_69 = ATgetArgument(g_36, 1);
        }
      else
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(match_cons(h_36, sym__2))
          {
            f_69 = ATgetArgument(h_36, 0);
            g_69 = ATgetArgument(h_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_69), z_68), (ATerm) ATinsert(CheckATermList(g_69), e_69));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm y_67 = NULL,a_68 = NULL;
  y_67 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_68 = ATgetArgument(t, 0);
      {
        ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,i_26 = NULL,j_26 = NULL,z_21 = NULL;
        t = a_68;
        t = map_1_0(i_5, t);
        t = genzip_4_0(r_5, s_5, u_5, _id, t);
        j_26 = t;
        if(match_cons(t, sym__2))
          {
            w_25 = ATgetArgument(t, 0);
            x_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_26);
        v_25 = t;
        t = x_25;
        t = concat_0_0(t);
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_25, i_26);
        z_21 = t;
        t = SSLsetAnnotations(z_21, v_25);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_68 = ATgetArgument(t, 0);
          {
            ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,k_29 = NULL,l_29 = NULL,a_22 = NULL;
            t = a_68;
            t = map_1_0(v_5, t);
            t = genzip_4_0(y_5, z_5, a_6, _id, t);
            l_29 = t;
            if(match_cons(t, sym__2))
              {
                h_29 = ATgetArgument(t, 0);
                i_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_29);
            g_29 = t;
            t = i_29;
            t = concat_0_0(t);
            k_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_29, k_29);
            a_22 = t;
            t = SSLsetAnnotations(a_22, g_29);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_68 = ATgetArgument(t, 0);
              t = a_68;
              t = map_1_0(b_6, t);
              t = genzip_4_0(d_6, e_6, f_6, _id, t);
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
              t = genzip_4_0(l_6, m_6, n_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  static ATerm k_69 (ATerm t)
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_101(t);
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = SRTS_one(k_69, t);
      }
    return(t);
  }
  t = k_69(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_d_19;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm t_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
  x_69 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      w_69 = ATgetArgument(t, 0);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_69;
            t_69 = t;
            t = x_69;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            t = x_69;
            t_69 = t;
            t = x_69;
          }
      }
    }
  else
    {
      t = x_69;
      t_69 = t;
      t = x_69;
    }
  t = term_r_36;
  v_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_69, term_r_36);
  t = f_10(s_6, t_69, v_69, t);
  t = x_69;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm d_132 (ATerm), ATerm t)
{
  static ATerm y_69 (ATerm t)
  {
    static ATerm o_6 (ATerm t)
    {
      ATerm s_36 = t;
      int t_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_132(t);
          LocalPopChoice(t_36);
        }
      else
        {
          t = s_36;
          {
            ATerm o_69 = NULL,p_69 = NULL,s_69 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                o_69 = ATgetArgument(t, 0);
                p_69 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, o_69, p_69);
            {
              static ATerm q_6 (ATerm t)
              {
                t = o_69;
                t = map_1_0(r_6, t);
                t = p_69;
                t = y_69(t);
                if(((s_69 != NULL) && (s_69 != t)))
                  _fail(t);
                else
                  s_69 = t;
                return(t);
              }
              t = scope_2_0(p_6, q_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, o_69, not_null(s_69));
          }
        }
      return(t);
    }
    t = oncetd_1_0(o_6, t);
    return(t);
  }
  t = y_69(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm b_71 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_71);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            {
              ATerm d_71 = NULL,e_71 = NULL,r_72 = NULL,s_72 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  d_71 = ATgetArgument(t, 0);
                  e_71 = ATgetArgument(t, 1);
                  r_72 = ATgetArgument(t, 2);
                  s_72 = ATgetArgument(t, 3);
                  t = r_72;
                  t = map_1_0(v_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_71 = ATgetArgument(t, 0);
                      e_71 = ATgetArgument(t, 1);
                      r_72 = ATgetArgument(t, 2);
                      s_72 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_72;
                  t = map_1_0(x_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm m_73 = NULL;
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_73 = ATgetArgument(t, 0);
          {
            ATerm a_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_36);
      t = m_73;
    }
  else
    {
      t = y_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_73;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm y_75 = NULL;
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_75 = ATgetArgument(t, 0);
          {
            ATerm d_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_37);
      t = y_75;
    }
  else
    {
      t = b_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_75;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm z_76 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_76 = ATgetArgument(t, 0);
      t = z_76;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_76 = ATgetArgument(t, 0);
          {
            ATerm e_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_76;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm f_77 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_77 = ATgetArgument(t, 0);
      t = f_77;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_77 = ATgetArgument(t, 0);
          {
            ATerm f_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_77;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm j_77 = NULL;
  if(match_cons(t, sym__2))
    {
      j_77 = ATgetArgument(t, 0);
      if((j_77 != ATgetArgument(t, 1)))
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
  ATerm f_70 = NULL,z_70 = NULL,a_71 = NULL;
  a_71 = t;
  t = free_vars_3_0(t_6, u_6, tboundin_3_0, t);
  f_70 = t;
  t = a_71;
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_76 = NULL;
        ATerm i_37 = t;
        int j_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm k_37 = ATgetArgument(t, 0);
                ATerm m_37 = ATgetArgument(t, 1);
                v_76 = ATgetArgument(t, 2);
                {
                  ATerm n_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_37);
            t = v_76;
            t = map_1_0(y_6, t);
          }
        else
          {
            t = i_37;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm p_37 = ATgetArgument(t, 0);
                ATerm q_37 = ATgetArgument(t, 1);
                v_76 = ATgetArgument(t, 2);
                {
                  ATerm r_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = v_76;
            t = map_1_0(z_6, t);
          }
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        t = (ATerm) ATempty;
      }
  }
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, z_70);
  t = t_9(a_7, f_70, z_70, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_d_19;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm p_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  t_77 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_77 = ATgetArgument(t, 0);
      {
        ATerm u_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_77;
            p_77 = t;
            t = t_77;
            LocalPopChoice(x_37);
          }
        else
          {
            t = u_37;
            t = t_77;
            p_77 = t;
            t = t_77;
          }
      }
    }
  else
    {
      t = t_77;
      p_77 = t;
      t = t_77;
    }
  t = term_r_36;
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_77, term_r_36);
  t = f_10(k_7, p_77, r_77, t);
  t = t_77;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_d_19;
  return(t);
}
static ATerm i_9 (ATerm p_75, ATerm o_75, ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  static ATerm i_7 (ATerm t)
  {
    t = p_75;
    t = def_tvars_0_0(t);
    t = map_1_0(j_7, t);
    t = p_75;
    {
      static ATerm l_7 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((m_77 != NULL) && (m_77 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              m_77 = ATgetArgument(t, 0);
            if(((l_77 != NULL) && (l_77 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_77 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_77);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(l_7, t);
    }
    if(((n_77 != NULL) && (n_77 != t)))
      _fail(t);
    else
      n_77 = t;
    return(t);
  }
  t = scope_2_0(d_7, i_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_77)), not_null(n_77)), o_75);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  static ATerm u_77 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_98(t);
        t = u_77(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = y_98(t);
      }
    return(t);
  }
  t = u_77(t);
  return(t);
}
ATerm listtd_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  static ATerm i_78 (ATerm t)
  {
    ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL;
    t = t_107(t);
    f_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_78;
      }
    else
      {
        ATerm n_31 = NULL,a_32 = NULL,h_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_78 = ATgetFirst((ATermList) t);
            h_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_78);
        n_31 = t;
        t = h_78;
        t = i_78(t);
        a_32 = t;
        t = (ATerm) ATinsert(CheckATermList(a_32), g_78);
        h_22 = t;
        t = SSLsetAnnotations(h_22, n_31);
      }
    return(t);
  }
  t = i_78(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,p_78 = NULL,q_78 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      p_78 = ATgetArgument(t, 0);
      q_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_78;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_78 = ATgetFirst((ATermList) t);
      n_78 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_d_38, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, n_78, q_78)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_78))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_78;
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
  v_78 = t;
  t = y_105(t);
  w_78 = t;
  t = term_j_32;
  x_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_78), w_78);
  y_78 = t;
  t = SSL_printnl(x_78, y_78);
  t = v_78;
  return(t);
}
static ATerm m_79 (ATerm c_79, ATerm t)
{
  t = SSL_is_string(c_79);
  return(t);
}
static ATerm n_79 (ATerm e_79, ATerm t)
{
  ATerm f_79 = NULL,h_79 = NULL,i_79 = NULL;
  t = term_j_32;
  h_79 = t;
  t = (ATerm) ATinsert(ATempty, term_e_38);
  i_79 = t;
  t = SSL_printnl(h_79, i_79);
  t = e_79;
  t = debug_1_0(m_7, t);
  t = term_l_32;
  f_79 = t;
  t = SSL_exit(f_79);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL;
  k_79 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      j_79 = ATgetArgument(t, 0);
      {
        ATerm g_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_79(k_79, t);
            LocalPopChoice(j_38);
          }
        else
          {
            t = g_38;
            t = j_79;
          }
      }
    }
  else
    {
      ATerm k_38 = t;
      int o_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_79(k_79, t);
          LocalPopChoice(o_38);
        }
      else
        {
          t = k_38;
          t = n_79(k_79, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      u_79 = ATgetArgument(t, 0);
      z_79 = ATgetArgument(t, 1);
      t = u_79;
      if(match_cons(t, sym_DynRuleId_1))
        {
          v_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_79;
      if(match_cons(t, sym_RDecT_3))
        {
          w_79 = ATgetArgument(t, 0);
          x_79 = ATgetArgument(t, 1);
          y_79 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, w_79, x_79, y_79, (ATerm) ATmakeAppl(sym_Rule_3, z_79, term_k_19, term_e_18));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          u_79 = ATgetArgument(t, 0);
          z_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_79;
      if(match_cons(t, sym_DynRuleId_1))
        {
          v_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_79;
      if(match_cons(t, sym_RDecT_3))
        {
          w_79 = ATgetArgument(t, 0);
          x_79 = ATgetArgument(t, 1);
          y_79 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, w_79, x_79, y_79, z_79);
    }
  return(t);
}
static ATerm z_80 (ATerm m_80, ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL;
  t = m_80;
  if(match_cons(t, sym_GenDynRules_1))
    {
      q_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_80;
  t = filter_1_0(n_7, t);
  r_80 = t;
  t = m_80;
  if(match_cons(t, sym_GenDynRules_1))
    {
      o_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_80;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, r_80), (ATerm) ATmakeAppl(sym_DynamicRules_1, p_80));
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      if(match_cons(q_38, sym_DynRuleId_1))
        {
          ATerm r_38 = ATgetArgument(q_38, 0);
          if(match_cons(r_38, sym_RDecT_3))
            {
              s_80 = ATgetArgument(r_38, 0);
              t_80 = ATgetArgument(r_38, 1);
              u_80 = ATgetArgument(r_38, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      v_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, s_80, t_80, u_80, v_80);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      ATerm v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL;
  x_80 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      w_80 = ATgetArgument(t, 0);
      {
        ATerm w_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_32 = NULL;
            t = w_80;
            {
              ATerm y_38 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(p_7, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = y_38;
                }
            }
            t = w_80;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            r_32 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_32);
            LocalPopChoice(x_38);
          }
        else
          {
            t = w_38;
            t = z_80(x_80, t);
          }
      }
    }
  else
    {
      t = z_80(x_80, t);
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm z_38 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_81 = NULL;
      b_81 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm d_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_81;
      LocalPopChoice(c_39);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = z_38;
      {
        ATerm e_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_81 = NULL;
            c_81 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm n_39 = ATgetArgument(t, 0);
                ATerm s_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_81;
            LocalPopChoice(g_39);
            {
              ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  d_81 = ATgetArgument(t, 0);
                  e_81 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_81;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              f_81 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, f_81, e_81);
            }
          }
        else
          {
            t = e_39;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(q_7, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = Cons_2_0(t_7, u_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,k_22 = NULL;
  w_81 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_81);
  t_81 = t;
  t = u_81;
  t = topdown_1_0(v_7, t);
  t = listtd_1_0(w_7, t);
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_81);
  k_22 = t;
  t = SSLsetAnnotations(k_22, t_81);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = repeat_2_0(x_7, _id, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_81 = ATgetFirst((ATermList) t);
      a_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_9(z_81, a_82, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,m_22 = NULL,l_22 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  r_81 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_81);
  k_81 = t;
  t = l_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_81 = ATgetFirst((ATermList) t);
      o_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_81);
  m_81 = t;
  t = o_81;
  t = Cons_2_0(_id, r_7, t);
  p_81 = t;
  t = (ATerm) ATinsert(CheckATermList(p_81), n_81);
  l_22 = t;
  t = SSLsetAnnotations(l_22, m_81);
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_81);
  m_22 = t;
  t = SSLsetAnnotations(m_22, k_81);
  return(t);
}
ATerm tboundin_3_0 (ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,d_85 = NULL;
  b_85 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_85 = ATgetArgument(t, 0);
      y_84 = ATgetArgument(t, 1);
      {
        ATerm h_33 = NULL,m_33 = NULL,o_33 = NULL,q_22 = NULL;
        t = SSLgetAnnotations(b_85);
        h_33 = t;
        t = d_85;
        t = t_131(t);
        m_33 = t;
        t = y_84;
        t = r_131(t);
        o_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_33, o_33);
        q_22 = t;
        t = SSLsetAnnotations(q_22, h_33);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          d_85 = ATgetArgument(t, 0);
          y_84 = ATgetArgument(t, 1);
          z_84 = ATgetArgument(t, 2);
          a_85 = ATgetArgument(t, 3);
          {
            ATerm m_34 = NULL,s_34 = NULL,t_34 = NULL,y_34 = NULL,z_34 = NULL,t_22 = NULL;
            t = SSLgetAnnotations(b_85);
            m_34 = t;
            t = d_85;
            t = t_131(t);
            s_34 = t;
            t = y_84;
            t = t_131(t);
            t_34 = t;
            t = z_84;
            t = t_131(t);
            y_34 = t;
            t = a_85;
            t = r_131(t);
            z_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_34, t_34, y_34, z_34);
            t_22 = t;
            t = SSLsetAnnotations(t_22, m_34);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              d_85 = ATgetArgument(t, 0);
              y_84 = ATgetArgument(t, 1);
              z_84 = ATgetArgument(t, 2);
              a_85 = ATgetArgument(t, 3);
              {
                ATerm w_35 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,u_22 = NULL;
                t = SSLgetAnnotations(b_85);
                w_35 = t;
                t = d_85;
                t = t_131(t);
                k_36 = t;
                t = y_84;
                t = t_131(t);
                l_36 = t;
                t = z_84;
                t = t_131(t);
                m_36 = t;
                t = a_85;
                t = r_131(t);
                n_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, k_36, l_36, m_36, n_36);
                u_22 = t;
                t = SSLsetAnnotations(u_22, w_35);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  d_85 = ATgetArgument(t, 0);
                  {
                    ATerm l_37 = NULL,o_37 = NULL,v_22 = NULL;
                    t = SSLgetAnnotations(b_85);
                    l_37 = t;
                    t = d_85;
                    t = r_131(t);
                    o_37 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, o_37);
                    v_22 = t;
                    t = SSLsetAnnotations(v_22, l_37);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      d_85 = ATgetArgument(t, 0);
                      {
                        ATerm a_38 = NULL,c_38 = NULL,w_22 = NULL;
                        t = SSLgetAnnotations(b_85);
                        a_38 = t;
                        t = d_85;
                        t = r_131(t);
                        c_38 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, c_38);
                        w_22 = t;
                        t = SSLsetAnnotations(w_22, a_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          d_85 = ATgetArgument(t, 0);
                          {
                            ATerm m_38 = NULL,p_38 = NULL,x_22 = NULL;
                            t = SSLgetAnnotations(b_85);
                            m_38 = t;
                            t = d_85;
                            t = r_131(t);
                            p_38 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, p_38);
                            x_22 = t;
                            t = SSLsetAnnotations(x_22, m_38);
                          }
                        }
                      else
                        {
                          ATerm f_39 = NULL,h_39 = NULL,y_22 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              d_85 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(b_85);
                          f_39 = t;
                          t = d_85;
                          t = r_131(t);
                          h_39 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, h_39);
                          y_22 = t;
                          t = SSLsetAnnotations(y_22, f_39);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm o_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_86);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm x_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_39);
          }
        else
          {
            t = x_39;
            {
              ATerm q_86 = NULL,r_86 = NULL,t_86 = NULL,w_86 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_86 = ATgetArgument(t, 0);
                  r_86 = ATgetArgument(t, 1);
                  t_86 = ATgetArgument(t, 2);
                  w_86 = ATgetArgument(t, 3);
                  t = t_86;
                  t = map_1_0(a_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_86 = ATgetArgument(t, 0);
                      r_86 = ATgetArgument(t, 1);
                      t_86 = ATgetArgument(t, 2);
                      w_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_86;
                  t = map_1_0(c_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm e_87 = NULL;
  ATerm a_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_87 = ATgetArgument(t, 0);
          {
            ATerm d_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_40);
      t = e_87;
    }
  else
    {
      t = a_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_87;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm r_87 = NULL;
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_87 = ATgetArgument(t, 0);
          {
            ATerm g_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_40);
      t = r_87;
    }
  else
    {
      t = e_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_87;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm v_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_87);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
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
              ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,c_88 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_87 = ATgetArgument(t, 0);
                  y_87 = ATgetArgument(t, 1);
                  z_87 = ATgetArgument(t, 2);
                  c_88 = ATgetArgument(t, 3);
                  t = z_87;
                  t = map_1_0(f_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_87 = ATgetArgument(t, 0);
                      y_87 = ATgetArgument(t, 1);
                      z_87 = ATgetArgument(t, 2);
                      c_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_87;
                  t = map_1_0(g_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm n_88 = NULL;
  ATerm l_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_88 = ATgetArgument(t, 0);
          {
            ATerm n_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_40);
      t = n_88;
    }
  else
    {
      t = l_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_88;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm b_89 = NULL;
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_89 = ATgetArgument(t, 0);
          {
            ATerm r_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_40);
      t = b_89;
    }
  else
    {
      t = p_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_89;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm j_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_89);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm t_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_40);
    }
  else
    {
      t = t_40;
      {
        ATerm z_40 = t;
        int b_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_41);
          }
        else
          {
            t = z_40;
            {
              ATerm l_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_89 = ATgetArgument(t, 0);
                  o_89 = ATgetArgument(t, 1);
                  p_89 = ATgetArgument(t, 2);
                  q_89 = ATgetArgument(t, 3);
                  t = p_89;
                  t = map_1_0(k_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_89 = ATgetArgument(t, 0);
                      o_89 = ATgetArgument(t, 1);
                      p_89 = ATgetArgument(t, 2);
                      q_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_89;
                  t = map_1_0(l_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm b_90 = NULL;
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_90 = ATgetArgument(t, 0);
          {
            ATerm f_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_41);
      t = b_90;
    }
  else
    {
      t = d_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_90;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm p_90 = NULL;
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_90 = ATgetArgument(t, 0);
          {
            ATerm i_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_41);
      t = p_90;
    }
  else
    {
      t = g_41;
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
static ATerm m_8 (ATerm t)
{
  ATerm x_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_90);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm j_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_41);
    }
  else
    {
      t = j_41;
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
              ATerm z_90 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_90 = ATgetArgument(t, 0);
                  c_91 = ATgetArgument(t, 1);
                  d_91 = ATgetArgument(t, 2);
                  e_91 = ATgetArgument(t, 3);
                  t = d_91;
                  t = map_1_0(o_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_90 = ATgetArgument(t, 0);
                      c_91 = ATgetArgument(t, 1);
                      d_91 = ATgetArgument(t, 2);
                      e_91 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_91;
                  t = map_1_0(p_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm p_91 = NULL;
  ATerm r_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_91 = ATgetArgument(t, 0);
          {
            ATerm w_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = p_91;
    }
  else
    {
      t = r_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_91;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm c_92 = NULL;
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_92 = ATgetArgument(t, 0);
          {
            ATerm z_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_41);
      t = c_92;
    }
  else
    {
      t = x_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_92;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm j_86 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      j_86 = ATgetArgument(t, 0);
      t = j_86;
      t = free_vars_3_0(y_7, z_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          j_86 = ATgetArgument(t, 0);
          t = j_86;
          t = free_vars_3_0(d_8, e_8, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              j_86 = ATgetArgument(t, 0);
              t = j_86;
              t = free_vars_3_0(i_8, j_8, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_86 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_86;
              t = free_vars_3_0(m_8, n_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm u_92 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_92);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm a_42 = t;
  int f_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_42);
    }
  else
    {
      t = a_42;
      {
        ATerm g_42 = t;
        int h_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_42);
          }
        else
          {
            t = g_42;
            {
              ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_92 = ATgetArgument(t, 0);
                  x_92 = ATgetArgument(t, 1);
                  y_92 = ATgetArgument(t, 2);
                  z_92 = ATgetArgument(t, 3);
                  t = y_92;
                  t = map_1_0(v_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_92 = ATgetArgument(t, 0);
                      x_92 = ATgetArgument(t, 1);
                      y_92 = ATgetArgument(t, 2);
                      z_92 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_92;
                  t = map_1_0(w_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm m_93 = NULL;
  ATerm i_42 = t;
  int j_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_93 = ATgetArgument(t, 0);
          {
            ATerm m_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_42);
      t = m_93;
    }
  else
    {
      t = i_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_93;
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm c_94 = NULL;
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_94 = ATgetArgument(t, 0);
          {
            ATerm q_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_42);
      t = c_94;
    }
  else
    {
      t = n_42;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_92 = NULL,r_92 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_92 = ATgetArgument(t, 0);
      t = r_92;
      if(match_cons(t, sym_Rule_3))
        {
          n_92 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
          {
            ATerm s_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_92;
      t = free_vars_3_0(s_8, u_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_92 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_92;
    }
  return(t);
}
static ATerm t_9 (ATerm u_110 (ATerm), ATerm w_29, ATerm v_29, ATerm t)
{
  static ATerm p_95 (ATerm t)
  {
    ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL;
    h_95 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_95 = ATgetFirst((ATermList) t);
            j_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_42 = t;
          int w_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_95;
              {
                static ATerm x_8 (ATerm t)
                {
                  t = v_29;
                  return(t);
                }
                t = u_9(u_110, x_8, i_95, j_95, t);
              }
              t = p_95(t);
              LocalPopChoice(w_42);
            }
          else
            {
              t = u_42;
              {
                ATerm y_39 = NULL,b_40 = NULL,j_23 = NULL;
                t = SSLgetAnnotations(h_95);
                y_39 = t;
                t = j_95;
                t = p_95(t);
                b_40 = t;
                t = (ATerm) ATinsert(CheckATermList(b_40), i_95);
                j_23 = t;
                t = SSLsetAnnotations(j_23, y_39);
              }
            }
        }
      }
    return(t);
  }
  t = w_29;
  t = p_95(t);
  return(t);
}
static ATerm u_9 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm a_30, ATerm z_29, ATerm t)
{
  t = y_110(t);
  {
    static ATerm a_9 (ATerm t)
    {
      ATerm u_95 = NULL;
      u_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_30, u_95);
      t = x_110(t);
      return(t);
    }
    t = fetch_1_0(a_9, t);
  }
  t = z_29;
  return(t);
}
static ATerm v_9 (ATerm p_110 (ATerm), ATerm u_29, ATerm t_29, ATerm t)
{
  static ATerm v_96 (ATerm t)
  {
    ATerm l_96 = NULL,m_96 = NULL,s_96 = NULL;
    l_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_96;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_96 = ATgetFirst((ATermList) t);
            s_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_42 = t;
          int y_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_96;
              {
                static ATerm c_9 (ATerm t)
                {
                  t = t_29;
                  return(t);
                }
                t = u_9(p_110, c_9, m_96, s_96, t);
              }
              t = v_96(t);
              LocalPopChoice(y_42);
            }
          else
            {
              t = x_42;
              {
                ATerm o_40 = NULL,u_40 = NULL,l_23 = NULL;
                t = SSLgetAnnotations(l_96);
                o_40 = t;
                t = s_96;
                t = v_96(t);
                u_40 = t;
                t = (ATerm) ATinsert(CheckATermList(u_40), m_96);
                l_23 = t;
                t = SSLsetAnnotations(l_23, o_40);
              }
            }
        }
      }
    return(t);
  }
  t = u_29;
  t = v_96(t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
{
  static ATerm f_97 (ATerm t)
  {
    ATerm z_42 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_108(t);
        LocalPopChoice(b_43);
      }
    else
      {
        t = z_42;
        {
          ATerm x_96 = NULL,y_96 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,n_23 = NULL;
          t = o_108(t);
          e_97 = t;
          if(match_cons(t, sym__2))
            {
              y_96 = ATgetArgument(t, 0);
              b_97 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_97);
          x_96 = t;
          t = y_96;
          t = q_108(t);
          c_97 = t;
          t = b_97;
          t = f_97(t);
          d_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_97, d_97);
          n_23 = t;
          t = SSLsetAnnotations(n_23, x_96);
          t = p_108(t);
        }
      }
    return(t);
  }
  t = f_97(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(((ATgetType(c_43) != AT_LIST) || !(ATisEmpty(c_43))))
        _fail(t);
      {
        ATerm d_43 = ATgetArgument(t, 1);
        if(((ATgetType(d_43) != AT_LIST) || !(ATisEmpty(d_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL,w_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_43 = ATgetArgument(t, 0);
      if(((ATgetType(e_43) == AT_LIST) && !(ATisEmpty(e_43))))
        {
          s_97 = ATgetFirst((ATermList) e_43);
          t_97 = (ATerm) ATgetNext((ATermList) e_43);
        }
      else
        _fail(t);
      {
        ATerm h_43 = ATgetArgument(t, 1);
        if(((ATgetType(h_43) == AT_LIST) && !(ATisEmpty(h_43))))
          {
            u_97 = ATgetFirst((ATermList) h_43);
            w_97 = (ATerm) ATgetNext((ATermList) h_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_97, u_97), (ATerm) ATmakeAppl(sym__2, t_97, w_97));
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm x_97 = NULL,a_98 = NULL;
  if(match_cons(t, sym__2))
    {
      x_97 = ATgetArgument(t, 0);
      a_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_98), x_97);
  return(t);
}
static ATerm a_10 (ATerm q_641, ATerm v_641, ATerm t_60, ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,o_97 = NULL;
  t = SSL_explode_term(v_641);
  if(match_cons(t, sym__2))
    {
      j_97 = ATgetArgument(t, 0);
      l_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_641);
  if(match_cons(t, sym__2))
    {
      if((j_97 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_97, l_97);
  t = genzip_4_0(e_9, h_9, j_9, _id, t);
  o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_97, t_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t)
{
  static ATerm c_98 (ATerm t)
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_99(t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        t = p_99(t);
        t = c_98(t);
      }
    return(t);
  }
  t = c_98(t);
  return(t);
}
ATerm for_3_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm t)
{
  t = r_99(t);
  t = while_not_2_0(s_99, t_99, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm k_98 = NULL;
  k_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_98);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm l_98 = NULL,n_98 = NULL,p_98 = NULL,q_98 = NULL,r_23 = NULL;
  q_98 = t;
  if(match_cons(t, sym__2))
    {
      n_98 = ATgetArgument(t, 0);
      p_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_98);
  l_98 = t;
  t = p_98;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_98, p_98);
  r_23 = t;
  t = SSLsetAnnotations(r_23, l_98);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL;
  a_100 = t;
  if(match_cons(t, sym__2))
    {
      b_100 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_100 = ATgetFirst((ATermList) t);
      e_100 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_100(b_100, c_100, a_100, t);
            LocalPopChoice(l_43);
          }
        else
          {
            t = k_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_100), d_100), e_100);
          }
      }
    }
  else
    {
      t = z_100(b_100, c_100, a_100, t);
    }
  return(t);
}
static ATerm z_100 (ATerm r_98, ATerm s_98, ATerm v_98, ATerm t)
{
  ATerm a_99 = NULL,e_99 = NULL,v_23 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL;
  t = SSLgetAnnotations(v_98);
  a_99 = t;
  t = s_98;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_99 = ATgetFirst((ATermList) t);
      m_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_99;
  if(match_cons(t, sym__2))
    {
      k_99 = ATgetArgument(t, 0);
      l_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_99;
        if((k_99 != t))
          {
            _fail(t);
          }
        t = m_99;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        t = s_98;
        t = a_10(k_99, l_99, m_99, t);
      }
  }
  e_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_98, e_99);
  v_23 = t;
  t = SSLsetAnnotations(v_23, a_99);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm w_100 = NULL;
  if(match_cons(t, sym__2))
    {
      w_100 = ATgetArgument(t, 0);
      if((w_100 != ATgetArgument(t, 1)))
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
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_9, l_9, m_9, t);
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
      {
        ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
        j_100 = t;
        if(match_cons(t, sym__2))
          {
            k_100 = ATgetArgument(t, 0);
            l_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_100;
        t = v_9(p_9, k_100, l_100, t);
      }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  if(match_cons(t, sym__2))
    {
      p_41 = ATgetArgument(t, 0);
      q_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(d_10, p_41, q_41, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm s_41 = NULL;
  if(match_cons(t, sym__2))
    {
      s_41 = ATgetArgument(t, 0);
      if((s_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(z_10, c_42, d_42, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm e_42 = NULL;
  if(match_cons(t, sym__2))
    {
      e_42 = ATgetArgument(t, 0);
      if((e_42 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm g_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm x_101 (ATerm t)
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_129(t);
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm t_43 = t;
          int v_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_101 = NULL,e_101 = NULL,k_41 = NULL,l_41 = NULL;
              d_101 = t;
              t = f_129(t);
              e_101 = t;
              t = d_101;
              {
                static ATerm r_9 (ATerm t)
                {
                  ATerm g_101 = NULL;
                  t = x_101(t);
                  g_101 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_101, e_101);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_129(r_9, x_101, s_9, t);
              }
              l_41 = t;
              t = SSL_explode_term(l_41);
              if(match_cons(t, sym__2))
                {
                  ATerm x_43 = ATgetArgument(t, 0);
                  k_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_41;
              t = foldr_3_0(z_9, c_10, _id, t);
              LocalPopChoice(v_43);
            }
          else
            {
              t = t_43;
              {
                ATerm u_41 = NULL,v_41 = NULL;
                v_41 = t;
                t = SSL_explode_term(v_41);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_43 = ATgetArgument(t, 0);
                    u_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_41;
                t = foldr_3_0(h_10, i_10, x_101, t);
              }
            }
        }
      }
    return(t);
  }
  t = x_101(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  static ATerm d_11 (ATerm t)
  {
    t = bottomup_1_0(y_99, t);
    return(t);
  }
  t = SRTS_all(d_11, t);
  t = y_99(t);
  return(t);
}
static ATerm e_10 (ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm y_101 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
  t = x_10(n_54, o_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_101 = ATgetFirst((ATermList) t);
      {
        ATerm a_44 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_101;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm p_102 = NULL,q_102 = NULL;
  p_102 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL;
        t = term_d_44;
        v_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_44, p_102);
        t = e_10(v_42, p_102, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_44 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_44) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, q_102, (ATerm) ATempty);
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        {
          ATerm g_43 = NULL;
          t = term_d_44;
          g_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_44, p_102);
          t = e_10(g_43, p_102, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm g_44 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_44) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, q_102, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  static ATerm t_102 (ATerm t)
  {
    ATerm h_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_101(t);
        LocalPopChoice(l_44);
      }
    else
      {
        t = h_44;
        t = SRTS_all(t_102, t);
      }
    return(t);
  }
  t = t_102(t);
  return(t);
}
static ATerm f_10 (ATerm s_119 (ATerm), ATerm y_43, ATerm w_43, ATerm t)
{
  ATerm w_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL;
  b_103 = t;
  t = s_119(t);
  w_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_102, y_43, w_43);
  t = y_10(w_102, y_43, w_43, t);
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_103 = NULL;
        t = term_o_44;
        i_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_102, term_o_44);
        t = x_10(w_102, i_103, t);
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_102 = ATgetFirst((ATermList) t);
      a_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_102, term_o_44, (ATerm) ATinsert(CheckATermList(a_103), (ATerm) ATinsert(CheckATermList(z_102), y_43)));
  t = lookup_table_0_1(w_102, t);
  h_103 = t;
  t = term_o_44;
  c_103 = t;
  t = (ATerm) ATinsert(CheckATermList(a_103), (ATerm) ATinsert(CheckATermList(z_102), y_43));
  f_103 = t;
  t = h_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(c_103, f_103, g_103, t);
  t = b_103;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm r_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      t_103 = ATgetArgument(t, 0);
      u_103 = ATgetArgument(t, 1);
      r_103 = ATgetArgument(t, 2);
      {
        ATerm z_103 = NULL,a_104 = NULL;
        t = u_103;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, t_103);
        z_103 = t;
        t = term_r_44;
        a_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_103), term_r_44);
        t = f_10(f_11, z_103, a_104, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, t_103, (ATerm)ATempty, r_103);
      }
    }
  else
    {
      ATerm l_104 = NULL,m_104 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          t_103 = ATgetArgument(t, 0);
          u_103 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_103;
      if(match_cons(t, sym_ConstType_1))
        {
          v_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, t_103);
      l_104 = t;
      t = term_t_44;
      m_104 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_103), term_t_44);
      t = f_10(g_11, l_104, m_104, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_103, (ATerm) ATmakeAppl(sym_ConstType_1, v_103));
    }
  return(t);
}
static ATerm g_10 (ATerm h_54, ATerm i_54, ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL;
  x_104 = t;
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
        t = x_10(h_54, i_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_44 = ATgetFirst((ATermList) t);
            w_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_44);
        {
          ATerm y_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, h_54, i_54, w_104);
          t = lookup_table_0_1(h_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_11(i_54, w_104, y_104, t);
          t = (ATerm) ATmakeAppl(sym__3, h_54, i_54, w_104);
        }
      }
    else
      {
        t = u_44;
        {
          ATerm c_105 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
          t = lookup_table_0_1(h_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_105 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_10(i_54, c_105, t);
          t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
        }
      }
  }
  t = x_104;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_119 (ATerm), ATerm t)
{
  ATerm e_105 = NULL,h_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL,o_105 = NULL;
  k_105 = t;
  t = p_119(t);
  j_105 = t;
  {
    ATerm x_44 = t;
    int y_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_105 = NULL;
        t = term_o_44;
        r_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_105, term_o_44);
        t = x_10(j_105, r_105, t);
        LocalPopChoice(y_44);
      }
    else
      {
        t = x_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_105 = ATgetFirst((ATermList) t);
      e_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_105, term_o_44, e_105);
  t = lookup_table_0_1(j_105, t);
  o_105 = t;
  t = term_o_44;
  l_105 = t;
  t = o_105;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(l_105, e_105, m_105, t);
  t = h_105;
  {
    static ATerm h_11 (ATerm t)
    {
      ATerm s_105 = NULL;
      s_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_105, s_105);
      t = g_10(j_105, s_105, t);
      return(t);
    }
    t = map_1_0(h_11, t);
  }
  t = k_105;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm z_44 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_98(t);
      t = u_98(t);
      LocalPopChoice(b_45);
    }
  else
    {
      t = z_44;
      t = u_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL,z_105 = NULL,b_106 = NULL,c_106 = NULL;
  v_105 = t;
  t = o_119(t);
  u_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_105, term_o_44);
  {
    ATerm c_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_106 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_45 = ATgetArgument(t, 0);
            ATerm h_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_44;
        g_106 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_105, term_o_44);
        t = x_10(u_105, g_106, t);
        LocalPopChoice(f_45);
      }
    else
      {
        t = c_45;
        t = (ATerm) ATempty;
      }
  }
  w_105 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_105, term_o_44, (ATerm) ATinsert(CheckATermList(w_105), (ATerm) ATempty));
  t = lookup_table_0_1(u_105, t);
  c_106 = t;
  t = term_o_44;
  x_105 = t;
  t = (ATerm) ATinsert(CheckATermList(w_105), (ATerm) ATempty);
  z_105 = t;
  t = c_106;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(x_105, z_105, b_106, t);
  t = v_105;
  return(t);
}
ATerm scope_2_0 (ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t)
{
  static ATerm j_11 (ATerm t)
  {
    t = end_scope_1_0(q_119, t);
    return(t);
  }
  t = begin_scope_1_0(q_119, t);
  t = restore_always_2_0(r_119, j_11, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm o_106 = NULL,p_106 = NULL,s_106 = NULL,v_106 = NULL,k_24 = NULL;
  v_106 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_106);
  o_106 = t;
  t = p_106;
  t = map_1_0(a_12, t);
  s_106 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_106);
  k_24 = t;
  t = SSLsetAnnotations(k_24, o_106);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL;
  l_107 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      k_107 = ATgetArgument(t, 0);
      {
        ATerm i_45 = t;
        int j_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_43 = NULL,u_43 = NULL,f_24 = NULL;
            t = SSLgetAnnotations(l_107);
            s_43 = t;
            t = k_107;
            t = map_1_0(k_12, t);
            u_43 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, u_43);
            f_24 = t;
            t = SSLsetAnnotations(f_24, s_43);
            LocalPopChoice(j_45);
          }
        else
          {
            t = i_45;
            t = l_107;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          k_107 = ATgetArgument(t, 0);
          {
            ATerm k_45 = t;
            int l_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_44 = NULL,p_44 = NULL,j_24 = NULL;
                t = SSLgetAnnotations(l_107);
                f_44 = t;
                t = k_107;
                t = map_1_0(l_12, t);
                p_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, p_44);
                j_24 = t;
                t = SSLsetAnnotations(j_24, f_44);
                LocalPopChoice(l_45);
              }
            else
              {
                t = k_45;
                t = l_107;
              }
          }
        }
      else
        {
          t = l_107;
        }
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(n_45);
    }
  else
    {
      t = m_45;
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(p_45);
    }
  else
    {
      t = o_45;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(w_11, y_11, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_107 = NULL,v_107 = NULL,w_107 = NULL;
  s_107 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_107;
    }
  else
    {
      static ATerm c_13 (ATerm t)
      {
        t = not_null(w_107);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_107 = ATgetFirst((ATermList) t);
          if(((w_107 != NULL) && (w_107 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_107;
      t = at_end_1_0(c_13, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,s_108 = NULL;
  l_108 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_108;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_108 = ATgetFirst((ATermList) t);
          s_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_45 = t;
        int r_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_45 = NULL,d_45 = NULL,e_45 = NULL,r_24 = NULL;
            t = SSLgetAnnotations(l_108);
            a_45 = t;
            t = m_108;
            t = m_114(t);
            d_45 = t;
            t = s_108;
            t = filter_1_0(m_114, t);
            e_45 = t;
            t = (ATerm) ATinsert(CheckATermList(e_45), d_45);
            r_24 = t;
            t = SSLsetAnnotations(r_24, a_45);
            LocalPopChoice(r_45);
          }
        else
          {
            t = q_45;
            t = s_108;
            t = filter_1_0(m_114, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  static ATerm i_109 (ATerm t)
  {
    ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL;
    h_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_109 = ATgetFirst((ATermList) t);
        g_109 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_45 = NULL,d_46 = NULL,t_24 = NULL;
          t = SSLgetAnnotations(h_109);
          x_45 = t;
          t = g_109;
          t = i_109(t);
          d_46 = t;
          t = (ATerm) ATinsert(CheckATermList(d_46), f_109);
          t_24 = t;
          t = SSLsetAnnotations(t_24, x_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_109;
        t = a_107(t);
      }
    return(t);
  }
  t = i_109(t);
  return(t);
}
static ATerm u_109 (ATerm m_109, ATerm t)
{
  ATerm n_109 = NULL;
  t = SSL_explode_term(m_109);
  if(match_cons(t, sym__2))
    {
      ATerm s_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_109;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL;
  r_109 = t;
  if(match_cons(t, sym__2))
    {
      p_109 = ATgetArgument(t, 0);
      q_109 = ATgetArgument(t, 1);
      {
        ATerm t_45 = t;
        int u_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_13 (ATerm t)
            {
              t = q_109;
              return(t);
            }
            t = p_109;
            t = at_end_1_0(d_13, t);
            LocalPopChoice(u_45);
          }
        else
          {
            t = t_45;
            t = u_109(r_109, t);
          }
      }
    }
  else
    {
      t = u_109(r_109, t);
    }
  return(t);
}
static ATerm j_10 (ATerm p_132, ATerm l_132, ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL;
  static ATerm f_13 (ATerm t)
  {
    ATerm x_109 = NULL,y_109 = NULL,z_109 = NULL,a_110 = NULL;
    a_110 = t;
    t = SSL_explode_term(a_110);
    if(match_cons(t, sym__2))
      {
        if(((v_109 != NULL) && (v_109 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_109 = ATgetArgument(t, 0);
        {
          ATerm v_45 = ATgetArgument(t, 1);
          if(((ATgetType(v_45) == AT_LIST) && !(ATisEmpty(v_45))))
            {
              x_109 = ATgetFirst((ATermList) v_45);
              {
                ATerm w_45 = (ATerm) ATgetNext((ATermList) v_45);
                if(((ATgetType(w_45) != AT_LIST) || !(ATisEmpty(w_45))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, x_109, not_null(w_109));
    t = conc_0_0(t);
    y_109 = t;
    t = (ATerm) ATinsert(ATempty, y_109);
    z_109 = t;
    t = SSL_mkterm(v_109, z_109);
    return(t);
  }
  t = SSL_explode_term(p_132);
  if(match_cons(t, sym__2))
    {
      if(((v_109 != NULL) && (v_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_109 = ATgetArgument(t, 0);
      {
        ATerm y_45 = ATgetArgument(t, 1);
        if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
          {
            if(((w_109 != NULL) && (w_109 != ATgetFirst((ATermList) y_45))))
              _fail(ATgetFirst((ATermList) y_45));
            else
              w_109 = ATgetFirst((ATermList) y_45);
            {
              ATerm z_45 = (ATerm) ATgetNext((ATermList) y_45);
              if(((ATgetType(z_45) != AT_LIST) || !(ATisEmpty(z_45))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_132;
  t = fetch_1_0(f_13, t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL;
  c_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_110;
      t = k_113(t);
    }
  else
    {
      ATerm h_110 = NULL,i_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_110 = ATgetFirst((ATermList) t);
          e_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_110;
      t = m_113(t);
      h_110 = t;
      t = e_110;
      t = foldr_3_0(k_113, l_113, m_113, t);
      i_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_110, i_110);
      t = l_113(t);
    }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_46), term_c_46), term_a_46);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL;
  if(match_cons(t, sym__2))
    {
      r_110 = ATgetArgument(t, 0);
      s_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10(r_110, s_110, t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm t_110 = NULL,w_110 = NULL;
  w_110 = t;
  if(match_cons(t, sym_Signature_1))
    {
      t_110 = ATgetArgument(t, 0);
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_111 = NULL;
            t = t_110;
            t = filter_1_0(l_13, t);
            t = concat_0_0(t);
            a_111 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, a_111);
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            t = w_110;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          t_110 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, t_110);
        }
      else
        {
          t = w_110;
        }
    }
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm b_111 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      b_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_111;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,v_24 = NULL;
  o_110 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_110);
  l_110 = t;
  t = m_110;
  t = foldr_3_0(g_13, h_13, i_13, t);
  n_110 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_110);
  v_24 = t;
  t = SSLsetAnnotations(v_24, l_110);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL;
  g_112 = t;
  if(match_cons(t, sym_LRule_1))
    {
      f_112 = ATgetArgument(t, 0);
      t = f_112;
      if(match_cons(t, sym_Rule_3))
        {
          c_112 = ATgetArgument(t, 0);
          d_112 = ATgetArgument(t, 1);
          e_112 = ATgetArgument(t, 2);
          {
            ATerm l_46 = t;
            int m_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_112 = NULL;
                t = c_112;
                t = free_vars_3_0(o_13, r_13, tboundin_3_0, t);
                k_112 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_112, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_112, d_112, e_112)));
                LocalPopChoice(m_46);
              }
            else
              {
                t = l_46;
                t = g_112;
              }
          }
        }
      else
        {
          t = g_112;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          f_112 = ATgetArgument(t, 0);
          {
            ATerm n_46 = t;
            int p_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_113 = NULL;
                t = f_112;
                t = free_vars_3_0(a_14, b_14, tboundin_3_0, t);
                r_113 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_113, f_112);
                LocalPopChoice(p_46);
              }
            else
              {
                t = n_46;
                t = g_112;
              }
          }
        }
      else
        {
          t = g_112;
        }
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm l_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_112);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm q_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_46);
    }
  else
    {
      t = q_46;
      {
        ATerm u_46 = t;
        int v_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_46);
          }
        else
          {
            t = u_46;
            {
              ATerm n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_112 = ATgetArgument(t, 0);
                  o_112 = ATgetArgument(t, 1);
                  p_112 = ATgetArgument(t, 2);
                  q_112 = ATgetArgument(t, 3);
                  t = p_112;
                  t = map_1_0(y_13, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_112 = ATgetArgument(t, 0);
                      o_112 = ATgetArgument(t, 1);
                      p_112 = ATgetArgument(t, 2);
                      q_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_112;
                  t = map_1_0(z_13, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm x_112 = NULL;
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_112 = ATgetArgument(t, 0);
          {
            ATerm d_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_46);
      t = x_112;
    }
  else
    {
      t = w_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_112;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm g_113 = NULL;
  ATerm e_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_113 = ATgetArgument(t, 0);
          {
            ATerm g_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_47);
      t = g_113;
    }
  else
    {
      t = e_47;
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
static ATerm a_14 (ATerm t)
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
static ATerm b_14 (ATerm t)
{
  ATerm j_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_47);
    }
  else
    {
      t = j_47;
      {
        ATerm l_47 = t;
        int m_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_47);
          }
        else
          {
            t = l_47;
            {
              ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_113 = ATgetArgument(t, 0);
                  v_113 = ATgetArgument(t, 1);
                  w_113 = ATgetArgument(t, 2);
                  x_113 = ATgetArgument(t, 3);
                  t = w_113;
                  t = map_1_0(t_14, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_113 = ATgetArgument(t, 0);
                      v_113 = ATgetArgument(t, 1);
                      w_113 = ATgetArgument(t, 2);
                      x_113 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_113;
                  t = map_1_0(u_14, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm e_114 = NULL;
  ATerm n_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_114 = ATgetArgument(t, 0);
          {
            ATerm s_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_47);
      t = e_114;
    }
  else
    {
      t = n_47;
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
static ATerm u_14 (ATerm t)
{
  ATerm o_114 = NULL;
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_114 = ATgetArgument(t, 0);
          {
            ATerm v_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_47);
      t = o_114;
    }
  else
    {
      t = t_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_114;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = Cons_2_0(z_14, a_15, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL,a_25 = NULL;
  i_115 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_115);
  f_115 = t;
  t = g_115;
  t = topdown_1_0(b_15, t);
  h_115 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_115);
  a_25 = t;
  t = SSLsetAnnotations(a_25, f_115);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL;
  l_115 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      j_115 = ATgetArgument(t, 0);
      k_115 = ATgetArgument(t, 1);
      t = j_115;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_115;
        }
      else
        {
          t = l_115;
        }
    }
  else
    {
      t = l_115;
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm w_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(x_47);
    }
  else
    {
      t = w_47;
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm v_115 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      v_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, v_115)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,f_25 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(m_13, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(n_13, t);
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL;
        t_114 = t;
        t = term_a_48;
        u_114 = t;
        t = term_b_48;
        v_114 = t;
        t = term_c_48;
        t = x_10(u_114, v_114, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = t_114;
        LocalPopChoice(z_47);
        {
          ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL,e_25 = NULL,d_25 = NULL;
          d_115 = t;
          if(match_cons(t, sym_Specification_1))
            {
              x_114 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_115);
          w_114 = t;
          t = x_114;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_114 = ATgetFirst((ATermList) t);
              a_115 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_114);
          y_114 = t;
          t = a_115;
          t = Cons_2_0(_id, w_14, t);
          b_115 = t;
          t = (ATerm) ATinsert(CheckATermList(b_115), z_114);
          d_25 = t;
          t = SSLsetAnnotations(d_25, y_114);
          c_115 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, c_115);
          e_25 = t;
          t = SSLsetAnnotations(e_25, w_114);
        }
      }
    else
      {
        t = y_47;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(d_15, t);
  z_111 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_111);
  w_111 = t;
  t = x_111;
  t = fetch_1_0(f_15, t);
  y_111 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_111);
  f_25 = t;
  t = SSLsetAnnotations(f_25, w_111);
  return(t);
}
static ATerm k_10 (ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm w_115 = NULL;
  t = SSL_fputc(o_39, p_39);
  w_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_115);
  return(t);
}
static ATerm l_10 (ATerm s_23, ATerm t_23, ATerm t)
{
  ATerm x_115 = NULL;
  t = SSL_write_term_to_stream_text(s_23, t_23);
  x_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_115);
  return(t);
}
static ATerm n_10 (ATerm a_106 (ATerm), ATerm j_172, ATerm y_23, ATerm t)
{
  ATerm y_115 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_172, term_d_48);
  t = r_10(t);
  y_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_115, y_23);
  t = a_106(t);
  t = fclose_0_0(t);
  t = y_23;
  return(t);
}
static ATerm m_10 (ATerm o_23, ATerm p_23, ATerm t)
{
  ATerm z_115 = NULL;
  t = SSL_write_term_to_stream_baf(o_23, p_23);
  z_115 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_115);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm g_116 = NULL,h_116 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_48 = ATgetArgument(t, 0);
      if(match_cons(e_48, sym_Stream_1))
        {
          g_116 = ATgetArgument(e_48, 0);
        }
      else
        _fail(t);
      h_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(g_116, h_116, t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_48 = ATgetArgument(t, 0);
      if(match_cons(f_48, sym_Stream_1))
        {
          l_116 = ATgetArgument(f_48, 0);
        }
      else
        _fail(t);
      m_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(l_116, m_116, t);
  i_116 = t;
  t = term_c_23;
  j_116 = t;
  t = i_116;
  if(match_cons(t, sym_Stream_1))
    {
      k_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_23, i_116);
  t = k_10(j_116, k_116, t);
  return(t);
}
ATerm output_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  ATerm a_116 = NULL,b_116 = NULL;
  t = y_124(t);
  b_116 = t;
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_116 = NULL,d_116 = NULL;
        t = term_a_48;
        c_116 = t;
        t = term_i_48;
        d_116 = t;
        t = term_k_48;
        t = x_10(c_116, d_116, t);
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
        t = term_l_48;
      }
  }
  a_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_116, b_116);
  {
    ATerm m_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_116 = NULL,f_116 = NULL;
        t = term_a_48;
        e_116 = t;
        t = term_p_48;
        f_116 = t;
        t = term_r_48;
        t = x_10(e_116, f_116, t);
        t = (ATerm) ATmakeAppl(sym__2, a_116, b_116);
        LocalPopChoice(o_48);
        if(match_cons(t, sym__2))
          {
            ATerm s_48 = ATgetArgument(t, 0);
            ATerm t_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(g_15, a_116, b_116, t);
      }
    else
      {
        t = m_48;
        if(match_cons(t, sym__2))
          {
            ATerm u_48 = ATgetArgument(t, 0);
            ATerm v_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(h_15, a_116, b_116, t);
      }
  }
  return(t);
}
static ATerm a_117 (ATerm u_116, ATerm t)
{
  t = SSL_fclose(u_116);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL;
  y_116 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_116 = ATgetArgument(t, 0);
      {
        ATerm x_48 = t;
        int y_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_116);
            LocalPopChoice(y_48);
          }
        else
          {
            t = x_48;
            t = a_117(y_116, t);
          }
      }
    }
  else
    {
      t = a_117(y_116, t);
    }
  return(t);
}
static ATerm o_10 (ATerm u_23, ATerm t)
{
  t = SSL_read_term_from_stream(u_23);
  return(t);
}
static ATerm p_10 (ATerm h_38, ATerm i_38, ATerm t)
{
  t = SSL_strcat(h_38, i_38);
  return(t);
}
static ATerm q_10 (ATerm q_39, ATerm r_39, ATerm t)
{
  ATerm b_117 = NULL;
  t = SSL_fopen(q_39, r_39);
  b_117 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_117);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_117 = NULL;
  t = SSL_stdin_stream();
  c_117 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_117);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_117 = NULL;
  t = SSL_stdout_stream();
  d_117 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_117);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_117 = NULL;
  t = SSL_stderr_stream();
  e_117 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_117);
  return(t);
}
static ATerm q_118 (ATerm k_117, ATerm t)
{
  ATerm l_117 = NULL;
  t = SSL_explode_term(k_117);
  if(match_cons(t, sym__2))
    {
      ATerm b_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_49 = ATgetArgument(t, 1);
        if(((ATgetType(c_49) == AT_LIST) && !(ATisEmpty(c_49))))
          {
            l_117 = ATgetFirst((ATermList) c_49);
            {
              ATerm d_49 = (ATerm) ATgetNext((ATermList) c_49);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_117;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_117;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_117;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_117;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_118 (ATerm o_117, ATerm p_117, ATerm q_117, ATerm t)
{
  ATerm w_117 = NULL,x_117 = NULL,y_117 = NULL,b_118 = NULL,k_25 = NULL;
  t = SSLgetAnnotations(q_117);
  y_117 = t;
  t = o_117;
  if(match_cons(t, sym_Path_1))
    {
      b_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_118, p_117);
  k_25 = t;
  t = SSLsetAnnotations(k_25, y_117);
  if(match_cons(t, sym__2))
    {
      w_117 = ATgetArgument(t, 0);
      x_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(w_117, x_117, t);
  return(t);
}
static ATerm s_118 (ATerm d_118, ATerm e_118, ATerm f_118, ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,l_118 = NULL,l_25 = NULL;
  t = SSLgetAnnotations(f_118);
  i_118 = t;
  t = SSL_is_string(d_118);
  l_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_118, e_118);
  l_25 = t;
  t = SSLsetAnnotations(l_25, i_118);
  if(match_cons(t, sym__2))
    {
      g_118 = ATgetArgument(t, 0);
      h_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(g_118, h_118, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL;
  n_118 = t;
  if(match_cons(t, sym__2))
    {
      o_118 = ATgetArgument(t, 0);
      p_118 = ATgetArgument(t, 1);
      {
        ATerm g_49 = t;
        int j_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_118(n_118, t);
            LocalPopChoice(j_49);
          }
        else
          {
            t = g_49;
            {
              ATerm n_49 = t;
              int o_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_118(o_118, p_118, n_118, t);
                  LocalPopChoice(o_49);
                }
              else
                {
                  t = n_49;
                  t = s_118(o_118, p_118, n_118, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_118(n_118, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,b_119 = NULL;
  b_119 = t;
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_119, term_s_49);
        t = r_10(t);
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        {
          ATerm y_46 = NULL,z_46 = NULL;
          t = term_t_49;
          z_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_49, b_119);
          t = p_10(z_46, b_119, t);
          y_46 = t;
          t = SSL_perror(y_46);
          _fail(t);
        }
      }
  }
  v_118 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(w_118, t);
  u_118 = t;
  t = v_118;
  t = fclose_0_0(t);
  t = u_118;
  return(t);
}
ATerm input_1_0 (ATerm z_124 (ATerm), ATerm t)
{
  ATerm u_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_119 = NULL,f_119 = NULL;
      t = term_a_48;
      e_119 = t;
      t = term_y_49;
      f_119 = t;
      t = term_z_49;
      t = x_10(e_119, f_119, t);
      LocalPopChoice(x_49);
    }
  else
    {
      t = u_49;
      t = term_a_50;
    }
  t = ReadFromFile_0_0(t);
  t = z_124(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL;
  g_119 = t;
  t = term_b_50;
  t = whoami_0_0(t);
  h_119 = t;
  t = term_j_32;
  j_119 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_50), h_119), term_c_50);
  k_119 = t;
  t = SSL_printnl(j_119, k_119);
  t = term_l_32;
  i_119 = t;
  t = SSL_exit(i_119);
  t = g_119;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm m_119 = NULL;
  m_119 = t;
  if(match_string(t, "-k"))
    {
      t = m_119;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_119;
    }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm n_119 = NULL,t_119 = NULL,v_119 = NULL;
  n_119 = t;
  t = SSL_string_to_int(n_119);
  t_119 = t;
  t = term_e_50;
  v_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_50, t_119);
  t = a_11(v_119, t_119, t);
  t = n_119;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_f_50;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_15, k_15, l_15, t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm x_119 = NULL;
  x_119 = t;
  if(match_string(t, "-S"))
    {
      t = x_119;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_119;
    }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL;
  t = term_g_50;
  y_119 = t;
  t = term_j_50;
  z_119 = t;
  t = term_k_50;
  t = a_11(y_119, z_119, t);
  t = term_l_50;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = term_n_50;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL;
  a_120 = t;
  t = SSL_string_to_int(a_120);
  b_120 = t;
  t = term_g_50;
  c_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_50, b_120);
  t = a_11(c_120, b_120, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_120);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_o_50;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL;
  t = term_p_50;
  d_120 = t;
  t = term_b_50;
  e_120 = t;
  t = term_q_50;
  t = a_11(d_120, e_120, t);
  t = term_r_50;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_50 = t;
  int u_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_15, x_15, a_16, t);
      LocalPopChoice(u_50);
    }
  else
    {
      t = t_50;
      {
        ATerm v_50 = t;
        int x_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_16, c_16, d_16, t);
            LocalPopChoice(x_50);
          }
        else
          {
            t = v_50;
            t = Option_3_0(g_16, i_16, l_16, t);
          }
      }
    }
  return(t);
}
static ATerm a_11 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL;
  t = term_a_48;
  f_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_48, h_49, i_49);
  t = lookup_table_0_1(f_120, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(h_49, i_49, g_120, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_48, h_49, i_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL;
      t = term_b_50;
      t = e_0(t);
      m_120 = t;
      t = term_y_50;
      n_120 = t;
      t = term_z_50;
      o_120 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_50, term_z_50, m_120);
      t = y_10(n_120, o_120, m_120, t);
      _fail(t);
    }
  else
    {
      ATerm r_120 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_120 = ATgetFirst((ATermList) t);
          l_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_120;
      t = c_0(t);
      t = term_b_50;
      t = d_0(t);
      r_120 = t;
      t = (ATerm) ATinsert(CheckATermList(l_120), r_120);
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm t_120 = NULL;
  t_120 = t;
  if(match_string(t, "-o"))
    {
      t = t_120;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_120;
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm u_120 = NULL,v_120 = NULL;
  u_120 = t;
  t = term_i_48;
  v_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_48, u_120);
  t = a_11(v_120, u_120, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_120);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_a_51;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_16, n_16, o_16, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm x_120 = NULL;
  x_120 = t;
  if(match_string(t, "-i"))
    {
      t = x_120;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_120;
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm y_120 = NULL,z_120 = NULL;
  y_120 = t;
  t = term_y_49;
  z_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_49, y_120);
  t = a_11(z_120, y_120, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_120);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_b_51;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_16, v_16, y_16, t);
  return(t);
}
static ATerm y_10 (ATerm c_54, ATerm d_54, ATerm b_54, ATerm t)
{
  ATerm b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL;
  b_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_54, d_54);
  {
    ATerm d_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_51 = ATgetArgument(t, 0);
            ATerm g_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_54, d_54);
        t = x_10(c_54, d_54, t);
        LocalPopChoice(e_51);
      }
    else
      {
        t = d_51;
        t = (ATerm) ATempty;
      }
  }
  c_121 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_54, d_54, (ATerm) ATinsert(CheckATermList(c_121), b_54));
  t = lookup_table_0_1(c_54, t);
  f_121 = t;
  t = (ATerm) ATinsert(CheckATermList(c_121), b_54);
  d_121 = t;
  t = f_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(d_54, d_121, e_121, t);
  t = b_121;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL,p_121 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL;
      t = term_b_50;
      t = n_0(t);
      q_121 = t;
      t = term_y_50;
      r_121 = t;
      t = term_z_50;
      s_121 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_50, term_z_50, q_121);
      t = y_10(r_121, s_121, q_121, t);
      _fail(t);
    }
  else
    {
      ATerm w_121 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_121 = ATgetFirst((ATermList) t);
          n_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_121;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_121 = ATgetFirst((ATermList) t);
          p_121 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_121;
      t = k_0(t);
      t = o_121;
      t = l_0(t);
      w_121 = t;
      t = (ATerm) ATinsert(CheckATermList(p_121), w_121);
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm y_121 = NULL,a_122 = NULL;
  y_121 = t;
  if(match_string(t, "old"))
    {
      t = y_121;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = y_121;
    }
  t = term_b_48;
  a_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_48, y_121);
  t = a_11(a_122, y_121, t);
  t = term_b_50;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_i_51;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_16, a_17, b_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_50;
  t = whoami_0_0(t);
  c_122 = t;
  t = term_j_32;
  e_122 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_51), c_122);
  f_122 = t;
  t = SSL_printnl(e_122, f_122);
  t = term_l_32;
  d_122 = t;
  t = SSL_exit(d_122);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_122 = NULL,h_122 = NULL;
  t = term_a_48;
  g_122 = t;
  t = term_l_51;
  h_122 = t;
  t = term_m_51;
  t = x_10(g_122, h_122, t);
  return(t);
}
static ATerm s_10 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_42, l_42);
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
      t = SSL_addr(k_42, l_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL;
  j_122 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_122;
      t = i_113(t);
    }
  else
    {
      ATerm o_122 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_122 = ATgetFirst((ATermList) t);
          l_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_122;
      t = foldr_2_0(i_113, j_113, t);
      o_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_122, o_122);
      t = j_113(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_j_50;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(o_47, p_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_122 = NULL,h_47 = NULL,i_47 = NULL;
  t = times_0_0(t);
  i_47 = t;
  t = SSL_explode_term(i_47);
  if(match_cons(t, sym__2))
    {
      ATerm p_51 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_47;
  t = foldr_2_0(c_17, d_17, t);
  r_122 = t;
  t = SSL_TicksToSeconds(r_122);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL,e_123 = NULL;
  c_123 = t;
  if(match_cons(t, sym__2))
    {
      d_123 = ATgetArgument(t, 0);
      e_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_123;
        if((d_123 != t))
          {
            _fail(t);
          }
        t = c_123;
        LocalPopChoice(r_51);
      }
    else
      {
        t = q_51;
        t = (ATerm) ATmakeAppl(sym__2, d_123, e_123);
        {
          ATerm v_51 = t;
          int w_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_123, e_123);
              LocalPopChoice(w_51);
            }
          else
            {
              t = v_51;
              t = SSL_gtr(d_123, e_123);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_123, e_123);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  ATerm i_123 = NULL;
  i_123 = t;
  {
    ATerm x_51 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_123 = NULL,l_123 = NULL,m_123 = NULL;
        t = term_a_48;
        l_123 = t;
        t = term_g_50;
        m_123 = t;
        t = term_c_52;
        t = x_10(l_123, m_123, t);
        k_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_123, term_l_32);
        t = geq_0_0(t);
        t = i_123;
        t = z_121(t);
        LocalPopChoice(b_52);
      }
    else
      {
        t = x_51;
        t = i_123;
      }
  }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm o_123 = NULL,p_123 = NULL,r_123 = NULL,s_123 = NULL;
  t = run_time_0_0(t);
  o_123 = t;
  t = term_b_50;
  t = whoami_0_0(t);
  p_123 = t;
  t = term_j_32;
  r_123 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_52), o_123), term_h_52), p_123);
  s_123 = t;
  t = SSL_printnl(r_123, s_123);
  t = (ATerm) ATmakeAppl(sym__2, term_j_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_52), o_123), term_h_52), p_123));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_123 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_50;
  t_123 = t;
  t = SSL_exit(t_123);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm d_124 = NULL,e_124 = NULL;
  e_124 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_124;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_124 = ATgetArgument(t, 0);
          {
            ATerm j_48 = NULL,p_25 = NULL;
            t = SSLgetAnnotations(e_124);
            j_48 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_124);
            p_25 = t;
            t = SSLsetAnnotations(p_25, j_48);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_124;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  ATerm n_52 = t;
  int q_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_123 = NULL,x_123 = NULL;
      t = term_a_48;
      w_123 = t;
      t = term_r_52;
      x_123 = t;
      t = term_s_52;
      t = x_10(w_123, x_123, t);
      LocalPopChoice(q_52);
    }
  else
    {
      t = n_52;
      t = fetch_1_0(f_17, t);
    }
  t = p_124(t);
  return(t);
}
static ATerm b_11 (ATerm u_57, ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm g_124 = NULL;
  t = SSL_hashtable_put(w_57, u_57, v_57);
  g_124 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_124);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_55, ATerm t)
{
  ATerm q_124 = NULL;
  t = table_hashtable_0_0(t);
  q_124 = t;
  {
    ATerm t_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_48 = NULL;
        t = q_124;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_11(o_55, w_48, t);
        LocalPopChoice(x_52);
      }
    else
      {
        t = t_52;
        {
          ATerm e_49 = NULL;
          t = o_55;
          t = table_create_0_0(t);
          t = q_124;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_11(o_55, e_49, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_58, ATerm d_58, ATerm t)
{
  ATerm x_124 = NULL;
  t = SSL_hashtable_create(c_58, d_58);
  x_124 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_124);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,e_125 = NULL,f_125 = NULL;
  a_125 = t;
  t = term_a_53;
  e_125 = t;
  t = term_b_53;
  f_125 = t;
  t = a_125;
  t = new_hashtable_0_2(e_125, f_125, t);
  b_125 = t;
  t = a_125;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(a_125, b_125, c_125, t);
  t = a_125;
  return(t);
}
static ATerm u_10 (ATerm z_57, ATerm a_58, ATerm t)
{
  ATerm g_125 = NULL;
  t = SSL_hashtable_remove(a_58, z_57);
  g_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_125);
  return(t);
}
static ATerm v_10 (ATerm e_58, ATerm t)
{
  ATerm h_125 = NULL;
  t = SSL_hashtable_destroy(e_58);
  h_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_125);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_125 = NULL;
  t = SSL_table_hashtable();
  i_125 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_125);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_125 = NULL,k_125 = NULL,l_125 = NULL,m_125 = NULL;
  j_125 = t;
  t = table_hashtable_0_0(t);
  k_125 = t;
  t = lookup_table_0_1(j_125, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(m_125, t);
  t = k_125;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_10(j_125, l_125, t);
  t = j_125;
  return(t);
}
ATerm map_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  static ATerm b_126 (ATerm t)
  {
    ATerm y_125 = NULL,z_125 = NULL,a_126 = NULL;
    y_125 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_125;
      }
    else
      {
        ATerm p_49 = NULL,v_49 = NULL,w_49 = NULL,s_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_125 = ATgetFirst((ATermList) t);
            a_126 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_125);
        p_49 = t;
        t = z_125;
        t = j_106(t);
        v_49 = t;
        t = a_126;
        t = b_126(t);
        w_49 = t;
        t = (ATerm) ATinsert(CheckATermList(w_49), v_49);
        s_25 = t;
        t = SSLsetAnnotations(s_25, p_49);
      }
    return(t);
  }
  t = b_126(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_126 = NULL,f_126 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_126 = ATgetFirst((ATermList) t);
      f_126 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_126 = NULL,k_126 = NULL;
        static ATerm g_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_126)), not_null(k_126));
          return(t);
        }
        t = f_126;
        t = i_0(t);
        if(((j_126 != NULL) && (j_126 != t)))
          _fail(t);
        else
          j_126 = t;
        t = e_126;
        t = g_0(t);
        if(((k_126 != NULL) && (k_126 != t)))
          _fail(t);
        else
          k_126 = t;
        t = f_126;
        t = reverse_acc_2_0(g_0, g_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_50;
      t = i_0(t);
    }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm q_126 = NULL,t_126 = NULL,u_126 = NULL,y_25 = NULL;
  u_126 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_126);
  q_126 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_126);
  y_25 = t;
  t = SSLsetAnnotations(y_25, q_126);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm w_126 = NULL;
  w_126 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_126), term_d_53);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_126 = NULL,n_126 = NULL;
  ATerm e_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_126 = NULL,p_126 = NULL;
      t = term_a_48;
      o_126 = t;
      t = term_l_51;
      p_126 = t;
      t = term_m_51;
      t = x_10(o_126, p_126, t);
      LocalPopChoice(g_53);
    }
  else
    {
      t = e_53;
      t = fetch_1_0(h_17, t);
    }
  t = term_h_53;
  t = echo_0_0(t);
  t = term_y_50;
  m_126 = t;
  t = term_z_50;
  n_126 = t;
  t = term_i_53;
  t = x_10(m_126, n_126, t);
  t = reverse_acc_2_0(_id, i_17, t);
  t = map_1_0(j_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  static ATerm t_127 (ATerm t)
  {
    ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL;
    q_127 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_127 = ATgetFirst((ATermList) t);
        s_127 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_53 = t;
      int k_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_50 = NULL,m_50 = NULL,a_26 = NULL;
          t = SSLgetAnnotations(q_127);
          h_50 = t;
          t = r_127;
          t = t_106(t);
          m_50 = t;
          t = (ATerm) ATinsert(CheckATermList(s_127), m_50);
          a_26 = t;
          t = SSLsetAnnotations(a_26, h_50);
          LocalPopChoice(k_53);
        }
      else
        {
          t = j_53;
          {
            ATerm h_51 = NULL,k_51 = NULL,b_26 = NULL;
            t = SSLgetAnnotations(q_127);
            h_51 = t;
            t = s_127;
            t = t_127(t);
            k_51 = t;
            t = (ATerm) ATinsert(CheckATermList(k_51), r_127);
            b_26 = t;
            t = SSLsetAnnotations(b_26, h_51);
          }
        }
    }
    return(t);
  }
  t = t_127(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL;
  x_127 = t;
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_127;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_53 = ATgetFirst((ATermList) t);
                ATerm o_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_127;
          }
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
        t = (ATerm) ATinsert(ATempty, x_127);
      }
  }
  y_127 = t;
  t = term_l_48;
  z_127 = t;
  t = SSL_printnl(z_127, y_127);
  t = x_127;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_128 = NULL,e_128 = NULL;
  t = term_a_48;
  d_128 = t;
  t = term_l_51;
  e_128 = t;
  t = term_m_51;
  t = x_10(d_128, e_128, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_11 (ATerm x_57, ATerm y_57, ATerm t)
{
  t = SSL_hashtable_get(y_57, x_57);
  return(t);
}
static ATerm x_10 (ATerm v_55, ATerm w_55, ATerm t)
{
  ATerm f_128 = NULL;
  t = lookup_table_0_1(v_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(w_55, f_128, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm h_128 = NULL,i_128 = NULL;
  t = term_p_53;
  h_128 = t;
  t = term_b_50;
  i_128 = t;
  t = term_q_53;
  t = a_11(h_128, i_128, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_r_53;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL;
  t = term_p_53;
  l_128 = t;
  t = term_b_50;
  m_128 = t;
  t = term_q_53;
  t = a_11(l_128, m_128, t);
  t = term_s_53;
  j_128 = t;
  t = term_b_50;
  k_128 = t;
  t = term_t_53;
  t = a_11(j_128, k_128, t);
  t = term_v_53;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_w_53;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_17, l_17, m_17, t);
      LocalPopChoice(y_53);
    }
  else
    {
      t = x_53;
      t = Option_3_0(n_17, o_17, p_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm n_128 = NULL,o_128 = NULL,p_128 = NULL,q_128 = NULL,r_128 = NULL,s_128 = NULL,o_26 = NULL;
  s_128 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_128 = ATgetFirst((ATermList) t);
      p_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_128);
  n_128 = t;
  t = o_128;
  t = t_84(t);
  q_128 = t;
  t = p_128;
  t = u_84(t);
  r_128 = t;
  t = (ATerm) ATinsert(CheckATermList(r_128), q_128);
  o_26 = t;
  t = SSLsetAnnotations(o_26, n_128);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_126 (ATerm), ATerm t)
{
  ATerm x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL,c_129 = NULL,d_129 = NULL,q_26 = NULL;
  x_128 = t;
  {
    ATerm z_53 = t;
    int a_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_54;
        t = s_126(t);
        LocalPopChoice(a_54);
      }
    else
      {
        t = z_53;
      }
  }
  t = x_128;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_128 = ATgetFirst((ATermList) t);
      a_129 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_128);
  y_128 = t;
  t = term_l_51;
  d_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_51, z_128);
  t = a_11(d_129, z_128, t);
  t = a_129;
  {
    static ATerm r_129 (ATerm t)
    {
      ATerm f_54 = t;
      int g_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_54 = t;
          int l_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_129 = NULL;
              k_129 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_129;
              LocalPopChoice(l_54);
            }
          else
            {
              t = j_54;
              t = s_126(t);
              t = Cons_2_0(_id, r_129, t);
            }
          LocalPopChoice(g_54);
        }
      else
        {
          t = f_54;
          {
            ATerm n_129 = NULL,o_129 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_129 = ATgetFirst((ATermList) t);
                o_129 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_129), (ATerm) ATmakeAppl(sym_Undefined_1, n_129));
          }
        }
      return(t);
    }
    t = r_129(t);
  }
  c_129 = t;
  t = (ATerm) ATinsert(CheckATermList(c_129), (ATerm) ATmakeAppl(sym_Program_1, z_128));
  q_26 = t;
  t = SSLsetAnnotations(q_26, y_128);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm e_130 = NULL;
  e_130 = t;
  if(match_string(t, "--help"))
    {
      t = e_130;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_130;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_130;
        }
    }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm f_130 = NULL,g_130 = NULL;
  t = term_r_52;
  f_130 = t;
  t = term_b_50;
  g_130 = t;
  t = term_m_54;
  t = a_11(f_130, g_130, t);
  t = term_q_54;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_r_54;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  ATerm w_129 = NULL,x_129 = NULL,y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL,c_130 = NULL,d_130 = NULL;
  y_129 = t;
  t = term_y_50;
  z_129 = t;
  t = term_s_54;
  t = lookup_table_0_1(z_129, t);
  d_130 = t;
  t = term_z_50;
  a_130 = t;
  t = (ATerm) ATempty;
  b_130 = t;
  t = d_130;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(a_130, b_130, c_130, t);
  t = y_129;
  {
    static ATerm q_17 (ATerm t)
    {
      ATerm t_54 = t;
      int x_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_126(t);
          LocalPopChoice(x_54);
        }
      else
        {
          t = t_54;
          {
            ATerm y_54 = t;
            int z_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_17, s_17, t_17, t);
                LocalPopChoice(z_54);
              }
            else
              {
                t = y_54;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_17, t);
  }
  {
    ATerm a_55 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_130 = NULL;
        r_130 = t;
        {
          ATerm c_55 = t;
          int d_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_51 = NULL;
              t = r_130;
              {
                ATerm e_55 = t;
                int g_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_51 = NULL,u_51 = NULL;
                    t = term_a_48;
                    t_51 = t;
                    t = term_r_52;
                    u_51 = t;
                    t = term_s_52;
                    t = x_10(t_51, u_51, t);
                    LocalPopChoice(g_55);
                  }
                else
                  {
                    t = e_55;
                    t = fetch_1_0(u_17, t);
                  }
              }
              t = r_130;
              t = default_system_usage_0_0(t);
              t = term_j_50;
              s_51 = t;
              t = SSL_exit(s_51);
              LocalPopChoice(d_55);
            }
          else
            {
              t = c_55;
              {
                ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
                t = term_a_48;
                z_51 = t;
                t = term_p_53;
                a_52 = t;
                t = term_h_55;
                t = x_10(z_51, a_52, t);
                t = r_130;
                t = default_system_about_0_0(t);
                t = term_j_50;
                y_51 = t;
                t = SSL_exit(y_51);
              }
            }
        }
        LocalPopChoice(b_55);
      }
    else
      {
        t = a_55;
        {
          ATerm i_55 = t;
          int j_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_130 = NULL,t_130 = NULL,u_130 = NULL;
              static ATerm v_17 (ATerm t)
              {
                ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL,s_26 = NULL;
                z_130 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_130 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_130);
                x_130 = t;
                t = y_130;
                if(((w_129 != NULL) && (w_129 != t)))
                  _fail(t);
                else
                  w_129 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_130);
                s_26 = t;
                t = SSLsetAnnotations(s_26, x_130);
                return(t);
              }
              t = fetch_1_0(v_17, t);
              t = term_j_32;
              t_130 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_129)), term_k_55);
              u_130 = t;
              t = SSL_printnl(t_130, u_130);
              t = (ATerm) ATmakeAppl(sym__2, term_j_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_129)), term_k_55));
              t = default_system_usage_0_0(t);
              t = term_l_32;
              s_130 = t;
              t = SSL_exit(s_130);
              LocalPopChoice(j_55);
            }
          else
            {
              t = i_55;
            }
        }
      }
  }
  x_129 = t;
  t = term_y_50;
  t = table_destroy_0_0(t);
  t = x_129;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t)
{
  ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL,i_131 = NULL;
  t = parse_options_1_0(r_124, t);
  e_131 = t;
  t = term_l_55;
  t = table_create_0_0(t);
  t = term_l_55;
  f_131 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_55, term_m_55, e_131);
  t = lookup_table_0_1(f_131, t);
  i_131 = t;
  t = term_m_55;
  g_131 = t;
  t = i_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(g_131, e_131, h_131, t);
  t = e_131;
  t = t_124(t);
  {
    ATerm n_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_124, t);
        LocalPopChoice(p_55);
      }
    else
      {
        t = n_55;
        {
          ATerm q_55 = t;
          int r_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_124(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_55);
            }
          else
            {
              t = q_55;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm s_55 = t;
  int t_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(t_55);
    }
  else
    {
      t = s_55;
      {
        ATerm u_55 = t;
        int x_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(x_55);
          }
        else
          {
            t = u_55;
            {
              ATerm y_55 = t;
              int z_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(z_55);
                }
              else
                {
                  t = y_55;
                  {
                    ATerm a_56 = t;
                    int b_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_17, a_18, b_18, t);
                        LocalPopChoice(b_56);
                      }
                    else
                      {
                        t = a_56;
                        {
                          ATerm c_56 = t;
                          int d_56 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(d_56);
                            }
                          else
                            {
                              t = c_56;
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
static ATerm x_17 (ATerm t)
{
  t = input_1_0(c_18, t);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm k_131 = NULL,l_131 = NULL;
  t = term_p_48;
  k_131 = t;
  t = term_b_50;
  l_131 = t;
  t = term_f_56;
  t = a_11(k_131, l_131, t);
  t = term_g_56;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_h_56;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_17, default_usage_0_0, _id, x_17, t);
  return(t);
}

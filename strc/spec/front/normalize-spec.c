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
Symbol sym_DynRuleId_1;
Symbol sym_DynRuleScopeId_1;
Symbol sym_DynRuleScope_2;
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
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
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
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_u_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_a_55;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_a_54;
ATerm term_w_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_p_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_b_52;
ATerm term_y_51;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_o_44;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_t_31;
ATerm term_n_27;
ATerm term_d_26;
ATerm term_f_25;
ATerm term_z_24;
ATerm term_t_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_q_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_o_19;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Op_2, term_u_19, (ATerm) ATempty);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_17);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_21);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Call_2, term_f_22, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_23);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Call_2, term_v_23, (ATerm) ATempty);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATempty);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_s_17);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_k_34);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_34);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_35);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_36);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_37);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_44);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_45);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_k_48);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_x_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_c_49);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_t_50);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym__2, term_e_51, term_f_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_51);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym__2, term_l_51, term_x_50);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_k_52);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_e_51);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_j_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym__2, term_v_51, term_w_51);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym__2, term_i_54, term_x_50);
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym__2, term_o_54, term_x_50);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym__2, term_j_53, term_x_50);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym__3, term_v_51, term_w_51, (ATerm) ATempty);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_i_54);
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym__2, term_c_49, term_x_50);
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_100 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm b_9 (ATerm b_133 (ATerm), ATerm y_75, ATerm w_75, ATerm x_75, ATerm b_76, ATerm z_75, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm b_133 (ATerm), ATerm t);
static ATerm x_17 (ATerm h_12, ATerm i_12, ATerm t);
static ATerm a_18 (ATerm o_12, ATerm p_12, ATerm t);
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
ATerm pat_td_1_0 (ATerm v_131 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm d_9 (ATerm p_66, ATerm q_66, ATerm r_66, ATerm t);
static ATerm r_28 (ATerm g_28, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm h_9 (ATerm c_62, ATerm d_62, ATerm e_62, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm i_9 (ATerm a_133 (ATerm), ATerm f_75, ATerm c_75, ATerm d_75, ATerm m_75, ATerm q_75, ATerm r_75, ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm a_102 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm c_133 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm k_9 (ATerm f_76, ATerm e_76, ATerm t);
ATerm repeat_2_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm s_108 (ATerm), ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm debug_1_0 (ATerm x_106 (ATerm), ATerm t);
static ATerm u_73 (ATerm s_70, ATerm t);
static ATerm c_74 (ATerm u_70, ATerm t);
static ATerm i_7 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm m_78 (ATerm v_77, ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm u_9 (ATerm t_111 (ATerm), ATerm f_30, ATerm e_30, ATerm t);
static ATerm v_9 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm j_30, ATerm i_30, ATerm t);
static ATerm w_9 (ATerm o_111 (ATerm), ATerm d_30, ATerm c_30, ATerm t);
ATerm genzip_4_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm b_10 (ATerm g_642, ATerm l_642, ATerm c_61, ATerm t);
ATerm while_not_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm q_97 (ATerm k_96, ATerm l_96, ATerm m_96, ATerm t);
static ATerm x_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm free_vars_3_0 (ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm x_100 (ATerm), ATerm t);
static ATerm f_10 (ATerm w_54, ATerm x_54, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm o_102 (ATerm), ATerm t);
static ATerm g_10 (ATerm r_120 (ATerm), ATerm h_44, ATerm f_44, ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm h_10 (ATerm q_54, ATerm r_54, ATerm t);
ATerm end_scope_1_0 (ATerm o_120 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_120 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
static ATerm q_12 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_115 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_107 (ATerm), ATerm t);
static ATerm q_104 (ATerm i_104, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_10 (ATerm f_133, ATerm c_35, ATerm t);
ATerm foldr_3_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm l_10 (ATerm x_39, ATerm y_39, ATerm t);
static ATerm m_10 (ATerm b_24, ATerm c_24, ATerm t);
static ATerm o_10 (ATerm z_106 (ATerm), ATerm z_172, ATerm h_24, ATerm t);
static ATerm n_10 (ATerm x_23, ATerm y_23, ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm output_1_0 (ATerm x_125 (ATerm), ATerm t);
static ATerm g_111 (ATerm a_111, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_10 (ATerm d_24, ATerm t);
static ATerm q_10 (ATerm q_38, ATerm r_38, ATerm t);
static ATerm r_10 (ATerm z_39, ATerm a_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_112 (ATerm s_111, ATerm t);
static ATerm y_112 (ATerm a_112, ATerm b_112, ATerm c_112, ATerm t);
static ATerm z_112 (ATerm k_112, ATerm l_112, ATerm m_112, ATerm t);
static ATerm s_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm y_125 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_11 (ATerm q_49, ATerm r_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm z_10 (ATerm l_54, ATerm m_54, ATerm k_54, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_10 (ATerm t_42, ATerm u_42, ATerm t);
ATerm foldr_2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_122 (ATerm), ATerm t);
static ATerm l_16 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm need_help_1_0 (ATerm o_125 (ATerm), ATerm t);
static ATerm c_11 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm t);
ATerm lookup_table_0_1 (ATerm x_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_58, ATerm m_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_10 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm w_10 (ATerm n_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_107 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_107 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_11 (ATerm g_58, ATerm h_58, ATerm t);
static ATerm y_10 (ATerm e_56, ATerm f_56, ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_127 (ATerm), ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
ATerm parse_options_1_0 (ATerm q_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
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
              t = term_r_17;
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
                  t = term_r_17;
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
                      t = term_s_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      y_0 = ATgetArgument(t, 0);
                      z_0 = ATgetArgument(t, 1);
                      v_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_0, (ATerm) ATmakeAppl(sym_Op_2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, v_0), y_0)));
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
ATerm topdown_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    t = topdown_1_0(w_100, t);
    return(t);
  }
  t = w_100(t);
  t = SRTS_all(b_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm d_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_5);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            {
              ATerm b_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_5 = ATgetArgument(t, 0);
                      i_5 = ATgetArgument(t, 1);
                      j_5 = ATgetArgument(t, 2);
                      k_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_5;
                  t = map_1_0(s_0, t);
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = b_18;
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
  ATerm s_5 = NULL;
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_5 = ATgetArgument(t, 0);
          {
            ATerm h_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_18);
      t = s_5;
    }
  else
    {
      t = f_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_5;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_6);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm h_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_6);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm r_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_18);
          }
        else
          {
            t = r_18;
            {
              ATerm u_18 = t;
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_6 = ATgetArgument(t, 0);
                      o_6 = ATgetArgument(t, 1);
                      q_6 = ATgetArgument(t, 2);
                      r_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_6;
                  t = map_1_0(b_1, t);
                  LocalPopChoice(w_18);
                }
              else
                {
                  t = u_18;
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
  ATerm a_7 = NULL;
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_7 = ATgetArgument(t, 0);
          {
            ATerm c_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_19);
      t = a_7;
    }
  else
    {
      t = z_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_7;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  {
    ATerm g_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 = NULL,j_0 = NULL,a_0 = NULL,u_1 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            k_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_7);
        j_0 = t;
        t = term_o_19;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_19, k_7);
        t = f_10(u_1, k_7, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm p_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, k_7);
        a_0 = t;
        t = SSLsetAnnotations(a_0, j_0);
        LocalPopChoice(j_19);
      }
    else
      {
        t = g_19;
        {
          ATerm x_1 = NULL;
          t = term_o_19;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_19, e_7);
          t = f_10(x_1, e_7, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm q_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_19) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = e_7;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, e_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  static ATerm b_8 (ATerm z_3, ATerm a_4, ATerm b_4, ATerm c_4, ATerm d_4, ATerm e_4, ATerm f_4, ATerm t)
  {
    ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, d_4, term_v_19);
    {
      ATerm w_19 = t;
      if((PushChoice() == 0))
        {
          ATerm x_4 = NULL;
          if(match_cons(t, sym__2))
            {
              x_4 = ATgetArgument(t, 0);
              if((x_4 != ATgetArgument(t, 1)))
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
          t = w_19;
        }
    }
    t = new_0_0(t);
    l_4 = t;
    t = c_4;
    t = dummify_0_0(t);
    n_4 = t;
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_4;
          if((c_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, l_4);
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          t = n_4;
        }
    }
    m_4 = t;
    t = n_4;
    t = free_vars_3_0(h_0, m_0, tboundin_3_0, t);
    t = map_1_0(w_0, t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
    t = free_vars_3_0(x_0, a_1, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    r_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_4, s_4);
    t = diff_0_0(t);
    t_4 = t;
    t = new_0_0(t);
    u_4 = t;
    t = z_3;
    t = t_0(t);
    v_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_4, (ATerm) ATmakeAppl(sym_Op_2, term_d_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_e_20, (ATerm) ATinsert(CheckATermList(t_4), (ATerm) ATmakeAppl(sym_Str_1, u_4)))), n_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_3, a_4, b_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_4), c_4), d_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_3)))), m_4), (ATerm) ATmakeAppl(sym_Op_2, term_e_20, (ATerm) ATinsert(CheckATermList(t_4), (ATerm) ATmakeAppl(sym_Str_1, u_4))))), e_4))));
    return(t);
  }
  ATerm m_7 = NULL,n_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,y_7 = NULL,z_7 = NULL;
  r_7 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      s_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
      u_7 = ATgetArgument(t, 2);
      v_7 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = v_7;
  if(match_cons(t, sym_Rule_3))
    {
      w_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
      z_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_7;
  if(match_cons(t, sym_Op_2))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
      t = n_7;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_7;
          if(match_string(t, "Undefined"))
            {
              ATerm i_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
                  t = r_7;
                  t = new_0_0(t);
                  l_2 = t;
                  t = w_7;
                  t = dummify_0_0(t);
                  j_2 = t;
                  {
                    ATerm k_20 = t;
                    int l_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_2;
                        if((w_7 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                        LocalPopChoice(l_20);
                      }
                    else
                      {
                        t = k_20;
                        t = j_2;
                      }
                  }
                  m_2 = t;
                  t = s_7;
                  t = t_0(t);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_2, (ATerm) ATmakeAppl(sym_Op_2, term_d_20, (ATerm) ATinsert(ATinsert(ATempty, term_v_19), j_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, s_7, t_7, u_7, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_2), w_7), term_v_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, s_7)))), m_2), term_v_19)), (ATerm) ATmakeAppl(sym_Seq_2, z_7, term_r_17)))));
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  t = b_8(s_7, t_7, u_7, w_7, y_7, z_7, r_7, t);
                }
            }
          else
            {
              t = b_8(s_7, t_7, u_7, w_7, y_7, z_7, r_7, t);
            }
        }
      else
        {
          t = m_7;
          t = b_8(s_7, t_7, u_7, w_7, y_7, z_7, r_7, t);
        }
    }
  else
    {
      t = b_8(s_7, t_7, u_7, w_7, y_7, z_7, r_7, t);
    }
  return(t);
}
static ATerm b_9 (ATerm b_133 (ATerm), ATerm y_75, ATerm w_75, ATerm x_75, ATerm b_76, ATerm z_75, ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,m_8 = NULL,r_8 = NULL;
  t = new_0_0(t);
  j_8 = t;
  t = b_76;
  t = dummify_0_0(t);
  i_8 = t;
  {
    ATerm m_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_8;
        if((b_76 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, j_8);
        LocalPopChoice(o_20);
      }
    else
      {
        t = m_20;
        t = i_8;
      }
  }
  m_8 = t;
  t = y_75;
  t = b_133(t);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, r_8, i_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, y_75, w_75, x_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_8), b_76), term_v_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_75)))), m_8), term_r_20)), (ATerm) ATmakeAppl(sym_Seq_2, z_75, term_r_17))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,o_9 = NULL,r_9 = NULL,z_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      g_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
      r_9 = ATgetArgument(t, 2);
      {
        ATerm s_20 = ATgetArgument(t, 3);
        if(match_cons(s_20, sym_Rule_3))
          {
            z_9 = ATgetArgument(s_20, 0);
            {
              ATerm v_20 = ATgetArgument(s_20, 1);
              if(match_cons(v_20, sym_Op_2))
                {
                  ATerm w_20 = ATgetArgument(v_20, 0);
                  if((ATgetSymbol((ATermAppl) w_20) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm y_20 = ATgetArgument(v_20, 1);
                    if(((ATgetType(y_20) != AT_LIST) || !(ATisEmpty(y_20))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            a_10 = ATgetArgument(s_20, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_9(b_133, g_9, o_9, r_9, z_9, a_10, t);
  return(t);
}
static ATerm x_17 (ATerm h_12, ATerm i_12, ATerm t)
{
  t = h_12;
  {
    ATerm b_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,f_0 = NULL;
        n_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_12 = ATgetFirst((ATermList) t);
            m_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_12);
        k_12 = t;
        t = m_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_12), l_12);
        f_0 = t;
        t = SSLsetAnnotations(f_0, k_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_17, h_12);
  return(t);
}
static ATerm a_18 (ATerm o_12, ATerm p_12, ATerm t)
{
  t = o_12;
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm u_12 = NULL,v_12 = NULL,a_13 = NULL,b_13 = NULL,v_1 = NULL;
        b_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_12 = ATgetFirst((ATermList) t);
            a_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_13);
        u_12 = t;
        t = a_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(a_13), v_12);
        v_1 = t;
        t = SSLsetAnnotations(v_1, u_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, o_12);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,w_2 = NULL;
  q_13 = t;
  t = SSL_explode_term(q_13);
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_21 = ATgetArgument(t, 1);
        if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
          {
            r_13 = ATgetFirst((ATermList) m_21);
            {
              ATerm n_21 = (ATerm) ATgetNext((ATermList) m_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(q_13);
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            ATerm r_21 = ATgetFirst((ATermList) q_21);
            ATerm s_21 = (ATerm) ATgetNext((ATermList) q_21);
            if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
              {
                w_2 = ATgetFirst((ATermList) s_21);
                {
                  ATerm c_22 = (ATerm) ATgetNext((ATermList) s_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, w_2), r_13));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, g_14), f_14));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm k_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_22, (ATerm) ATinsert(ATinsert(ATempty, m_14), k_14));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, i_15), h_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, p_15), o_15));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
      {
        ATerm o_13 = NULL;
        t = j_13;
        t = foldr_2_0(d_1, e_1, t);
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, i_13, o_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          i_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, i_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              i_13 = ATgetArgument(t, 0);
              {
                ATerm i_3 = NULL;
                t = i_13;
                {
                  ATerm l_22 = t;
                  int m_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_n_22;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_o_22;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_p_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_r_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_s_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(m_22);
                    }
                  else
                    {
                      t = l_22;
                      {
                        ATerm m_3 = NULL;
                        t = SSL_explode_string(i_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm u_22 = ATgetFirst((ATermList) t);
                            if(((ATgetType(u_22) != AT_INT) || (ATgetInt((ATermInt) u_22) != 39)))
                              _fail(t);
                            {
                              ATerm x_22 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
                                {
                                  m_3 = ATgetFirst((ATermList) x_22);
                                  {
                                    ATerm y_22 = (ATerm) ATgetNext((ATermList) x_22);
                                    if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
                                      {
                                        ATerm b_23 = ATgetFirst((ATermList) y_22);
                                        if(((ATgetType(b_23) != AT_INT) || (ATgetInt((ATermInt) b_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm c_23 = (ATerm) ATgetNext((ATermList) y_22);
                                          if(((ATgetType(c_23) != AT_LIST) || !(ATisEmpty(c_23))))
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
                        t = m_3;
                      }
                    }
                }
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, i_3);
              }
            }
          else
            {
              ATerm d_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      i_13 = ATgetArgument(t, 0);
                      {
                        ATerm j_23 = ATgetArgument(t, 1);
                      }
                      g_13 = ATgetArgument(t, 2);
                      c_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_23);
                  t = (ATerm) ATmakeAppl(sym_Con_3, i_13, g_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_13), (ATerm) ATempty));
                }
              else
                {
                  t = d_23;
                  {
                    ATerm k_23 = t;
                    int m_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            i_13 = ATgetArgument(t, 0);
                            {
                              ATerm o_23 = ATgetArgument(t, 1);
                            }
                            g_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(m_23);
                        t = (ATerm) ATmakeAppl(sym_Con_3, i_13, g_13, term_w_23);
                      }
                    else
                      {
                        t = k_23;
                        if(match_cons(t, sym_Con1_2))
                          {
                            i_13 = ATgetArgument(t, 0);
                            j_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, i_13, j_13, term_w_23);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                i_13 = ATgetArgument(t, 0);
                                j_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = j_13;
                                    return(t);
                                  }
                                  t = i_13;
                                  t = foldr_2_0(f_1, g_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    i_13 = ATgetArgument(t, 0);
                                    t = i_13;
                                    t = foldr_2_0(h_1, i_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        i_13 = ATgetArgument(t, 0);
                                        t = i_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            d_13 = ATgetFirst((ATermList) t);
                                            e_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = e_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm z_23 = t;
                                                int a_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = x_17(i_13, h_13, t);
                                                    LocalPopChoice(a_24);
                                                  }
                                                else
                                                  {
                                                    t = z_23;
                                                    t = d_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_17(i_13, h_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = x_17(i_13, h_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            i_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, i_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                i_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, i_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    i_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, i_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        i_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, i_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            i_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                i_13 = ATgetArgument(t, 0);
                                                                j_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_13), j_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    i_13 = ATgetArgument(t, 0);
                                                                    j_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = j_13;
                                                                        return(t);
                                                                      }
                                                                      t = i_13;
                                                                      t = foldr_2_0(j_1, k_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        i_13 = ATgetArgument(t, 0);
                                                                        t = i_13;
                                                                        t = foldr_2_0(l_1, m_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            i_13 = ATgetArgument(t, 0);
                                                                            j_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATinsert(CheckATermList(j_13), i_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                i_13 = ATgetArgument(t, 0);
                                                                                t = i_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    d_13 = ATgetFirst((ATermList) t);
                                                                                    e_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = e_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm f_24 = t;
                                                                                        int g_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = a_18(i_13, h_13, t);
                                                                                            LocalPopChoice(g_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_24;
                                                                                            t = d_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = a_18(i_13, h_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_18(i_13, h_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_i_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        i_13 = ATgetArgument(t, 0);
                                                                                        j_13 = ATgetArgument(t, 1);
                                                                                        t = j_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            f_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(ATinsert(ATempty, f_13), i_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            i_13 = ATgetArgument(t, 0);
                                                                                            t = i_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                i_13 = ATgetArgument(t, 0);
                                                                                                j_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, i_13, j_13, term_s_17);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    i_13 = ATgetArgument(t, 0);
                                                                                                    j_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, i_13, j_13, term_s_17);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        i_13 = ATgetArgument(t, 0);
                                                                                                        j_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, i_13, (ATerm)ATempty, j_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            i_13 = ATgetArgument(t, 0);
                                                                                                            j_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, j_13, i_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                i_13 = ATgetArgument(t, 0);
                                                                                                                j_13 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, i_13, j_13, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    i_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, i_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        i_13 = ATgetArgument(t, 0);
                                                                                                                        j_13 = ATgetArgument(t, 1);
                                                                                                                        g_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_13, j_13, (ATerm)ATempty, g_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            i_13 = ATgetArgument(t, 0);
                                                                                                                            j_13 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_13, (ATerm)ATempty, (ATerm)ATempty, j_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                i_13 = ATgetArgument(t, 0);
                                                                                                                                j_13 = ATgetArgument(t, 1);
                                                                                                                                g_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, i_13, j_13, (ATerm)ATempty, g_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    i_13 = ATgetArgument(t, 0);
                                                                                                                                    j_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, i_13, (ATerm)ATempty, (ATerm)ATempty, j_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        i_13 = ATgetArgument(t, 0);
                                                                                                                                        j_13 = ATgetArgument(t, 1);
                                                                                                                                        g_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_13, j_13, (ATerm)ATempty, g_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            i_13 = ATgetArgument(t, 0);
                                                                                                                                            j_13 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, i_13, (ATerm)ATempty, (ATerm)ATempty, j_13);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm o_24 = ATgetArgument(t, 0);
                                                                                                                                                j_13 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, j_13);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm c_18 = NULL,d_18 = NULL,i_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      i_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
      {
        ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
        t = d_18;
        t = new_0_0(t);
        l_18 = t;
        t = new_0_0(t);
        m_18 = t;
        t = new_0_0(t);
        n_18 = t;
        t = new_0_0(t);
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_18), n_18), m_18), l_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, l_18), (ATerm) ATmakeAppl(sym_Var_1, n_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, i_18, (ATerm)ATmakeAppl(sym_Var_1, l_18), (ATerm) ATmakeAppl(sym_Var_1, m_18)), (ATerm) ATmakeAppl(sym_BAM_3, c_18, (ATerm)ATmakeAppl(sym_Var_1, n_18), (ATerm) ATmakeAppl(sym_Var_1, o_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_t_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_18)), (ATerm) ATmakeAppl(sym_Var_1, m_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm p_18 = NULL,q_18 = NULL,s_18 = NULL,v_18 = NULL;
            t = d_18;
            t = new_0_0(t);
            s_18 = t;
            t = i_18;
            {
              static ATerm n_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((p_18 != NULL) && (p_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_18 = ATgetArgument(t, 0);
                    if(((q_18 != NULL) && (q_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, s_18);
                return(t);
              }
              t = oncetd_1_0(n_1, t);
            }
            v_18 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_18)), not_null(p_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_18)), (ATerm) ATmakeAppl(sym_Build_1, v_18))));
          }
        }
      else
        {
          ATerm x_18 = NULL,y_18 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              i_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_18;
          t = new_0_0(t);
          d_19 = t;
          t = new_0_0(t);
          e_19 = t;
          t = i_18;
          {
            static ATerm o_1 (ATerm t)
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
              t = (ATerm) ATmakeAppl(sym_Var_1, d_19);
              return(t);
            }
            t = oncetd_1_0(o_1, t);
          }
          f_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_19))))), (ATerm)ATmakeAppl(sym_Var_1, d_19), (ATerm) ATmakeAppl(sym_Op_2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_18)), not_null(x_18)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
        t = h_19;
        t = new_0_0(t);
        m_19 = t;
        t = i_19;
        {
          static ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_19 != NULL) && (k_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_19 = ATgetArgument(t, 0);
                if(((l_19 != NULL) && (l_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_19), k_19);
            return(t);
          }
          t = pat_td_1_0(p_1, t);
        }
        n_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_19))))));
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
              t = h_19;
              t = new_0_0(t);
              s_19 = t;
              t = i_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_19);
                  return(t);
                }
                t = pat_td_1_0(q_1, t);
              }
              t_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_19)), not_null(r_19))));
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
                t = h_19;
                t = new_0_0(t);
                b_20 = t;
                t = i_19;
                {
                  static ATerm r_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_20 != NULL) && (a_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_20 = ATgetArgument(t, 0);
                        if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                    return(t);
                  }
                  t = pat_td_1_0(r_1, t);
                }
                c_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_19)), not_null(a_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm v_131 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_131(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = j_25;
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
        v_24 = t;
        if(match_cons(t, sym_Op_2))
          {
            w_24 = ATgetArgument(t, 0);
            x_24 = ATgetArgument(t, 1);
            {
              ATerm o_4 = NULL,a_5 = NULL,y_2 = NULL;
              t = SSLgetAnnotations(v_24);
              o_4 = t;
              t = x_24;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(v_131, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              a_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, w_24, a_5);
              y_2 = t;
              t = SSLsetAnnotations(y_2, o_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                w_24 = ATgetArgument(t, 0);
                x_24 = ATgetArgument(t, 1);
                {
                  ATerm n_25 = t;
                  int s_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_5 = NULL,a_6 = NULL,a_3 = NULL;
                      t = SSLgetAnnotations(v_24);
                      w_5 = t;
                      t = x_24;
                      t = pat_td_1_0(v_131, t);
                      a_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, w_24, a_6);
                      a_3 = t;
                      t = SSLsetAnnotations(a_3, w_5);
                      LocalPopChoice(s_25);
                    }
                  else
                    {
                      t = n_25;
                      {
                        ATerm m_6 = NULL,z_6 = NULL,c_3 = NULL;
                        t = SSLgetAnnotations(v_24);
                        m_6 = t;
                        t = w_24;
                        t = pat_td_1_0(v_131, t);
                        z_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, z_6, x_24);
                        c_3 = t;
                        t = SSLsetAnnotations(c_3, m_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    w_24 = ATgetArgument(t, 0);
                    x_24 = ATgetArgument(t, 1);
                    u_24 = ATgetArgument(t, 2);
                    {
                      ATerm d_8 = NULL,k_8 = NULL,d_3 = NULL;
                      t = SSLgetAnnotations(v_24);
                      d_8 = t;
                      t = u_24;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(v_131, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      k_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, w_24, x_24, k_8);
                      d_3 = t;
                      t = SSLsetAnnotations(d_3, d_8);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        w_24 = ATgetArgument(t, 0);
                        x_24 = ATgetArgument(t, 1);
                        u_24 = ATgetArgument(t, 2);
                        {
                          ATerm y_8 = NULL,f_9 = NULL,e_3 = NULL;
                          t = SSLgetAnnotations(v_24);
                          y_8 = t;
                          t = u_24;
                          {
                            static ATerm w_1 (ATerm t)
                            {
                              t = pat_td_1_0(v_131, t);
                              return(t);
                            }
                            t = fetch_1_0(w_1, t);
                          }
                          f_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, w_24, x_24, f_9);
                          e_3 = t;
                          t = SSLsetAnnotations(e_3, y_8);
                        }
                      }
                    else
                      {
                        ATerm y_9 = NULL,i_10 = NULL,g_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            w_24 = ATgetArgument(t, 0);
                            x_24 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_24);
                        y_9 = t;
                        t = x_24;
                        t = pat_td_1_0(v_131, t);
                        i_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, w_24, i_10);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, y_9);
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
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Build_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL,r_25 = NULL,t_25 = NULL,u_25 = NULL;
        t = o_25;
        t = new_0_0(t);
        t_25 = t;
        t = p_25;
        {
          static ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((q_25 != NULL) && (q_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_25 = ATgetArgument(t, 0);
                if(((r_25 != NULL) && (r_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, t_25);
            return(t);
          }
          t = pat_td_1_0(y_1, t);
        }
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_25)), not_null(q_25))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_25)))), (ATerm) ATmakeAppl(sym_Build_1, u_25)));
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_25 = NULL,z_25 = NULL,a_26 = NULL;
              t = o_25;
              t = new_0_0(t);
              z_25 = t;
              t = p_25;
              {
                static ATerm z_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((v_25 != NULL) && (v_25 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_25);
                  return(t);
                }
                t = pat_td_1_0(z_1, t);
              }
              a_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_25), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_25)))), (ATerm) ATmakeAppl(sym_Build_1, a_26)));
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              {
                ATerm b_26 = NULL,c_26 = NULL,g_26 = NULL,h_26 = NULL;
                t = o_25;
                t = new_0_0(t);
                g_26 = t;
                t = p_25;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_26 != NULL) && (b_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_26 = ATgetArgument(t, 0);
                        if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_26);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                h_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_26), not_null(c_26), (ATerm) ATmakeAppl(sym_Var_1, g_26))), (ATerm) ATmakeAppl(sym_Build_1, h_26)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm i_26 = t;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,v_3 = NULL;
      d_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_27);
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_27);
      v_3 = t;
      t = SSLsetAnnotations(v_3, b_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_26;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      f_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_27, f_27);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm g_27 = NULL,k_27 = NULL,l_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(match_cons(o_27, sym__2))
        {
          g_27 = ATgetArgument(o_27, 0);
          k_27 = ATgetArgument(o_27, 1);
        }
      else
        _fail(t);
      {
        ATerm r_27 = ATgetArgument(t, 1);
        if(match_cons(r_27, sym__2))
          {
            l_27 = ATgetArgument(r_27, 0);
            p_27 = ATgetArgument(r_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_27), g_27), (ATerm) ATinsert(CheckATermList(p_27), k_27));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm q_27 = NULL,u_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      u_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_27, u_27);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,c_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if(match_cons(s_27, sym__2))
        {
          v_27 = ATgetArgument(s_27, 0);
          w_27 = ATgetArgument(s_27, 1);
        }
      else
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(match_cons(t_27, sym__2))
          {
            x_27 = ATgetArgument(t_27, 0);
            c_28 = ATgetArgument(t_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_27), v_27), (ATerm) ATinsert(CheckATermList(c_28), w_27));
  return(t);
}
static ATerm d_9 (ATerm p_66, ATerm q_66, ATerm r_66, ATerm t)
{
  ATerm m_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL,s_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,w_3 = NULL;
  t = r_66;
  t = fetch_1_0(b_2, t);
  t = r_66;
  t = genzip_4_0(c_2, d_2, e_2, LiftPrimArg_0_0, t);
  a_27 = t;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_27);
  r_26 = t;
  t = s_26;
  t = concat_0_0(t);
  y_26 = t;
  t = x_26;
  t = genzip_4_0(f_2, g_2, h_2, _id, t);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, z_26);
  w_3 = t;
  t = SSLsetAnnotations(w_3, r_26);
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(match_cons(y_27, sym__2))
          {
            o_26 = ATgetArgument(y_27, 0);
            p_26 = ATgetArgument(y_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_26, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_26), (ATerm) ATmakeAppl(sym_CallT_3, p_66, q_66, p_26)));
  return(t);
}
static ATerm r_28 (ATerm g_28, ATerm t)
{
  ATerm i_28 = NULL;
  t = g_28;
  {
    ATerm d_28 = t;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,f_7 = NULL;
        l_28 = t;
        if(match_cons(t, sym_Var_1))
          {
            k_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_28);
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, k_28);
        f_7 = t;
        t = SSLsetAnnotations(f_7, j_28);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_28;
      }
  }
  t = new_0_0(t);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, i_28), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_28)))), (ATerm) ATmakeAppl(sym_Var_1, i_28)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_28 = ATgetArgument(t, 0);
      {
        ATerm h_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_28(o_28, t);
            LocalPopChoice(q_28);
          }
        else
          {
            t = h_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_17, (ATerm) ATmakeAppl(sym_Var_1, p_28)));
          }
      }
    }
  else
    {
      t = r_28(o_28, t);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm t_28 = t;
  if((PushChoice() == 0))
    {
      ATerm y_11 = NULL,a_12 = NULL,d_12 = NULL,h_7 = NULL;
      d_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_12);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_12);
      h_7 = t;
      t = SSLsetAnnotations(h_7, y_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_28;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_12 = ATgetFirst((ATermList) t);
      f_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_12, f_12);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm g_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(match_cons(u_28, sym__2))
        {
          g_12 = ATgetArgument(u_28, 0);
          r_12 = ATgetArgument(u_28, 1);
        }
      else
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(match_cons(v_28, sym__2))
          {
            s_12 = ATgetArgument(v_28, 0);
            t_12 = ATgetArgument(v_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_12), g_12), (ATerm) ATinsert(CheckATermList(t_12), r_12));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm r_2 (ATerm t)
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
static ATerm s_2 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if(match_cons(w_28, sym__2))
        {
          y_12 = ATgetArgument(w_28, 0);
          z_12 = ATgetArgument(w_28, 1);
        }
      else
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(match_cons(x_28, sym__2))
          {
            k_13 = ATgetArgument(x_28, 0);
            l_13 = ATgetArgument(x_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_13), y_12), (ATerm) ATinsert(CheckATermList(l_13), z_12));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_28 = t;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL,z_15 = NULL,a_16 = NULL,e_8 = NULL;
      a_16 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_16);
      w_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_15);
      e_8 = t;
      t = SSLsetAnnotations(e_8, w_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_28;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_16 = ATgetFirst((ATermList) t);
      g_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_16, g_16);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if(match_cons(e_29, sym__2))
        {
          h_16 = ATgetArgument(e_29, 0);
          i_16 = ATgetArgument(e_29, 1);
        }
      else
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(match_cons(k_29, sym__2))
          {
            v_16 = ATgetArgument(k_29, 0);
            w_16 = ATgetArgument(k_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_16), h_16), (ATerm) ATinsert(CheckATermList(w_16), i_16));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm y_16 = NULL,a_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_16 = ATgetFirst((ATermList) t);
      a_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_16, a_17);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if(match_cons(l_29, sym__2))
        {
          b_17 = ATgetArgument(l_29, 0);
          c_17 = ATgetArgument(l_29, 1);
        }
      else
        _fail(t);
      {
        ATerm m_29 = ATgetArgument(t, 1);
        if(match_cons(m_29, sym__2))
          {
            d_17 = ATgetArgument(m_29, 0);
            e_17 = ATgetArgument(m_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_17), b_17), (ATerm) ATinsert(CheckATermList(e_17), c_17));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
      r_33 = ATgetArgument(t, 2);
      {
        ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,a_8 = NULL;
        t = r_33;
        t = fetch_1_0(i_2, t);
        t = r_33;
        t = genzip_4_0(k_2, o_2, p_2, LiftPrimArg_0_0, t);
        u_11 = t;
        if(match_cons(t, sym__2))
          {
            q_11 = ATgetArgument(t, 0);
            r_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_11);
        p_11 = t;
        t = q_11;
        t = concat_0_0(t);
        s_11 = t;
        t = r_11;
        t = genzip_4_0(q_2, r_2, s_2, _id, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, t_11);
        a_8 = t;
        t = SSLsetAnnotations(a_8, p_11);
        if(match_cons(t, sym__2))
          {
            m_11 = ATgetArgument(t, 0);
            {
              ATerm r_29 = ATgetArgument(t, 1);
              if(match_cons(r_29, sym__2))
                {
                  n_11 = ATgetArgument(r_29, 0);
                  o_11 = ATgetArgument(r_29, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_11), (ATerm) ATmakeAppl(sym_PrimT_3, t_33, u_33, o_11)));
      }
    }
  else
    {
      ATerm s_14 = NULL,b_15 = NULL,c_15 = NULL,e_15 = NULL,f_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,p_9 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          t_33 = ATgetArgument(t, 0);
          u_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_33;
      t = fetch_1_0(t_2, t);
      t = u_33;
      t = genzip_4_0(u_2, v_2, x_2, LiftPrimArg_0_0, t);
      n_15 = t;
      if(match_cons(t, sym__2))
        {
          f_15 = ATgetArgument(t, 0);
          k_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_15);
      e_15 = t;
      t = f_15;
      t = concat_0_0(t);
      l_15 = t;
      t = k_15;
      t = genzip_4_0(z_2, b_3, f_3, _id, t);
      m_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_15, m_15);
      p_9 = t;
      t = SSLsetAnnotations(p_9, e_15);
      if(match_cons(t, sym__2))
        {
          s_14 = ATgetArgument(t, 0);
          {
            ATerm s_29 = ATgetArgument(t, 1);
            if(match_cons(s_29, sym__2))
              {
                b_15 = ATgetArgument(s_29, 0);
                c_15 = ATgetArgument(s_29, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_15), (ATerm) ATmakeAppl(sym_PrimT_3, t_33, (ATerm)ATempty, c_15)));
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  b_35 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
      a_35 = ATgetArgument(t, 2);
      {
        ATerm t_17 = NULL,x_11 = NULL;
        t = SSLgetAnnotations(b_35);
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_34, z_34, a_35);
        x_11 = t;
        t = SSLsetAnnotations(x_11, t_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = b_35;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm t_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_29;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
      r_36 = ATgetArgument(t, 2);
      {
        ATerm b_19 = NULL,b_12 = NULL;
        t = SSLgetAnnotations(s_36);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_36, u_36, r_36);
        b_12 = t;
        t = SSLsetAnnotations(b_12, b_19);
      }
    }
  else
    {
      ATerm g_20 = NULL,c_12 = NULL;
      if(match_cons(t, sym_App_2))
        {
          t_36 = ATgetArgument(t, 0);
          u_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_36);
      g_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, t_36, u_36);
      c_12 = t;
      t = SSLsetAnnotations(c_12, g_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm u_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_29;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_37;
  if(match_cons(t, sym_StratRule_3))
    {
      i_37 = ATgetArgument(t, 0);
      j_37 = ATgetArgument(t, 1);
      o_37 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_37), (ATerm) ATmakeAppl(sym_Where_1, o_37)), i_37));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_37 = ATgetArgument(t, 0);
          j_37 = ATgetArgument(t, 1);
          o_37 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_37;
      t = pureterm_0_0(t);
      t = j_37;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, j_37)), (ATerm) ATmakeAppl(sym_Where_1, o_37)), (ATerm) ATmakeAppl(sym_Match_1, i_37)));
    }
  return(t);
}
static ATerm h_9 (ATerm c_62, ATerm d_62, ATerm e_62, ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,d_40 = NULL;
  t = new_0_0(t);
  v_39 = t;
  t = c_62;
  {
    static ATerm k_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm v_29 = ATgetArgument(t, 0);
          if(match_cons(v_29, sym_Var_1))
            {
              if(((u_39 != NULL) && (u_39 != ATgetArgument(v_29, 0))))
                _fail(ATgetArgument(v_29, 0));
              else
                u_39 = ATgetArgument(v_29, 0);
            }
          else
            _fail(t);
          if(((o_39 != NULL) && (o_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_39 = ATgetArgument(t, 1);
          {
            ATerm w_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, u_39);
      return(t);
    }
    t = oncetd_1_0(k_3, t);
  }
  w_39 = t;
  t = d_62;
  {
    static ATerm l_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_29 = ATgetArgument(t, 0);
          if(match_cons(x_29, sym_Var_1))
            {
              if(((u_39 != NULL) && (u_39 != ATgetArgument(x_29, 0))))
                _fail(ATgetArgument(x_29, 0));
              else
                u_39 = ATgetArgument(x_29, 0);
            }
          else
            _fail(t);
          if(((t_39 != NULL) && (t_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_39 = ATgetArgument(t, 1);
          {
            ATerm y_29 = ATgetArgument(t, 2);
            if(match_cons(y_29, sym_CallT_3))
              {
                if(((n_39 != NULL) && (n_39 != ATgetArgument(y_29, 0))))
                  _fail(ATgetArgument(y_29, 0));
                else
                  n_39 = ATgetArgument(y_29, 0);
                {
                  ATerm a_30 = ATgetArgument(y_29, 1);
                  if(((ATgetType(a_30) != AT_LIST) || !(ATisEmpty(a_30))))
                    _fail(t);
                }
                {
                  ATerm b_30 = ATgetArgument(y_29, 2);
                  if(((ATgetType(b_30) != AT_LIST) || !(ATisEmpty(b_30))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, v_39);
      return(t);
    }
    t = oncetd_1_0(l_3, t);
  }
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, w_39, d_40, (ATerm) ATmakeAppl(sym_Seq_2, e_62, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(n_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_39), not_null(t_39), term_s_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_39)), (ATerm) ATmakeAppl(sym_Var_1, v_39))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
          l_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              m_41 = ATgetArgument(t, 0);
              t = m_41;
              if(match_cons(t, sym_Rule_3))
                {
                  e_41 = ATgetArgument(t, 0);
                  j_41 = ATgetArgument(t, 1);
                  k_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_41;
              t = h_9(e_41, j_41, k_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm c_21 = NULL,f_21 = NULL,n_20 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  m_41 = ATgetArgument(t, 0);
                  n_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_41);
              c_21 = t;
              t = n_41;
              t = desugarRule_0_0(t);
              f_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_41, f_21);
              n_20 = t;
              t = SSLsetAnnotations(n_20, c_21);
            }
          LocalPopChoice(l_30);
        }
      else
        {
          t = k_30;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm m_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = m_30;
    }
  t = repeat_2_0(o_3, _id, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm p_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = p_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
            f_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                i_42 = ATgetArgument(t, 0);
                j_42 = ATgetArgument(t, 1);
                k_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_42;
            t = d_9(i_42, j_42, k_42, t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            {
              ATerm w_30 = t;
              int x_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(x_30);
                }
              else
                {
                  t = w_30;
                  {
                    ATerm c_31 = t;
                    int d_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(d_31);
                      }
                    else
                      {
                        t = c_31;
                        {
                          ATerm e_31 = t;
                          int f_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_31 = t;
                              int h_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_43 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_43;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      d_43 = ATgetArgument(t, 0);
                                      t = d_43;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          d_43 = ATgetArgument(t, 0);
                                          e_43 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, d_43, e_43);
                                    }
                                  LocalPopChoice(h_31);
                                }
                              else
                                {
                                  t = g_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(f_31);
                            }
                          else
                            {
                              t = e_31;
                              {
                                ATerm i_31 = t;
                                int j_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(j_31);
                                  }
                                else
                                  {
                                    t = i_31;
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
  t = topdown_1_0(n_3, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,a_46 = NULL;
  x_45 = t;
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm m_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_31);
        t = x_45;
        {
          ATerm n_31 = t;
          if((PushChoice() == 0))
            {
              ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,u_20 = NULL;
              k_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  i_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_22);
              h_22 = t;
              t = i_22;
              {
                ATerm o_31 = t;
                int p_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_23 = NULL;
                    t = term_o_19;
                    h_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_o_19, i_22);
                    t = f_10(h_23, i_22, t);
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm q_31 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_31) != ATmakeSymbol("l_0", 0, ATtrue)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                    t = i_22;
                    LocalPopChoice(p_31);
                  }
                else
                  {
                    t = o_31;
                    {
                      ATerm w_22 = NULL,e_24 = NULL,t_20 = NULL,j_24 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          w_22 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(i_22);
                      e_24 = t;
                      t = term_o_19;
                      j_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_o_19, w_22);
                      t = f_10(j_24, w_22, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm r_31 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) r_31) != ATmakeSymbol("l_0", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, w_22);
                      t_20 = t;
                      t = SSLsetAnnotations(t_20, e_24);
                    }
                  }
              }
              j_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, j_22);
              u_20 = t;
              t = SSLsetAnnotations(u_20, h_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_31;
            }
        }
        t = term_i_21;
      }
    else
      {
        t = k_31;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_i_21;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                y_45 = ATgetArgument(t, 0);
                {
                  ATerm h_46 = NULL;
                  t = y_45;
                  t = free_vars_3_0(q_3, r_3, tboundin_3_0, t);
                  t = map_1_0(t_3, t);
                  h_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_31, h_46);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    y_45 = ATgetArgument(t, 0);
                    a_46 = ATgetArgument(t, 1);
                    {
                      ATerm j_47 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, y_45, a_46);
                      t = free_vars_3_0(u_3, x_3, tboundin_3_0, t);
                      t = map_1_0(g_4, t);
                      j_47 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_t_31, j_47);
                    }
                  }
                else
                  {
                    ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm u_31 = ATgetArgument(t, 0);
                        ATerm v_31 = ATgetArgument(t, 1);
                        ATerm w_31 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_x_31;
                    r_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_y_31);
                    s_24 = t;
                    t = SSL_printnl(r_24, s_24);
                    t = term_a_32;
                    q_24 = t;
                    t = SSL_exit(q_24);
                    t = (ATerm) ATinsert(ATempty, term_y_31);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm i_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_46);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            {
              ATerm f_32 = t;
              int g_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,p_46 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_46 = ATgetArgument(t, 0);
                      l_46 = ATgetArgument(t, 1);
                      m_46 = ATgetArgument(t, 2);
                      p_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_46;
                  t = map_1_0(s_3, t);
                  LocalPopChoice(g_32);
                }
              else
                {
                  t = f_32;
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
  ATerm b_47 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_47 = ATgetArgument(t, 0);
          {
            ATerm j_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_32);
      t = b_47;
    }
  else
    {
      t = h_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_47;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_47);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm k_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_47);
  return(t);
}
static ATerm x_3 (ATerm t)
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
              ATerm o_32 = t;
              int p_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_47 = NULL,o_47 = NULL,t_47 = NULL,u_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_47 = ATgetArgument(t, 0);
                      o_47 = ATgetArgument(t, 1);
                      t_47 = ATgetArgument(t, 2);
                      u_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_47;
                  t = map_1_0(y_3, t);
                  LocalPopChoice(p_32);
                }
              else
                {
                  t = o_32;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm d_48 = NULL;
  ATerm q_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_48 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = d_48;
    }
  else
    {
      t = q_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_48;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_48);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(p_3, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm r_50 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_50 = ATgetArgument(t, 0);
      t = r_50;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_50 = ATgetArgument(t, 0);
          {
            ATerm u_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_50;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_50), (ATerm) ATempty);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm i_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_51 = ATgetArgument(t, 0);
      t = i_51;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_51 = ATgetArgument(t, 0);
          {
            ATerm v_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_51;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, i_51);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm x_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_51);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_32);
          }
        else
          {
            t = y_32;
            {
              ATerm a_33 = t;
              int b_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_51 = NULL,a_52 = NULL,f_52 = NULL,g_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_51 = ATgetArgument(t, 0);
                      a_52 = ATgetArgument(t, 1);
                      f_52 = ATgetArgument(t, 2);
                      g_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_52;
                  t = map_1_0(p_4, t);
                  LocalPopChoice(b_33);
                }
              else
                {
                  t = a_33;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm p_52 = NULL;
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_52 = ATgetArgument(t, 0);
          {
            ATerm e_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_33);
      t = p_52;
    }
  else
    {
      t = c_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_52;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_52 = NULL;
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_52);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_52);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      {
        ATerm h_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_33);
          }
        else
          {
            t = h_33;
            {
              ATerm k_33 = t;
              int l_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_52 = NULL,z_52 = NULL,a_53 = NULL,d_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_52 = ATgetArgument(t, 0);
                      z_52 = ATgetArgument(t, 1);
                      a_53 = ATgetArgument(t, 2);
                      d_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_53;
                  t = map_1_0(z_4, t);
                  LocalPopChoice(l_33);
                }
              else
                {
                  t = k_33;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm q_53 = NULL;
  ATerm n_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_53 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_33);
      t = q_53;
    }
  else
    {
      t = n_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_53;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_55 = NULL,e_25 = NULL,x_20 = NULL,k_25 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            d_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_54);
        e_25 = t;
        t = term_o_19;
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_19, d_55);
        t = f_10(k_25, d_55, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm x_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_ListVar_1, d_55);
        x_20 = t;
        t = SSLsetAnnotations(x_20, e_25);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm w_25 = NULL;
          t = term_o_19;
          w_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_19, d_54);
          t = f_10(w_25, d_54, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm y_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_33) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = d_54;
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, d_54);
  return(t);
}
static ATerm i_9 (ATerm a_133 (ATerm), ATerm f_75, ATerm c_75, ATerm d_75, ATerm m_75, ATerm q_75, ATerm r_75, ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,x_49 = NULL,h_50 = NULL,i_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_75, term_v_19);
  {
    ATerm z_33 = t;
    if((PushChoice() == 0))
      {
        ATerm j_50 = NULL;
        if(match_cons(t, sym__2))
          {
            j_50 = ATgetArgument(t, 0);
            if((j_50 != ATgetArgument(t, 1)))
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
        t = z_33;
      }
  }
  t = term_a_34;
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_34, f_75);
  t = q_10(i_50, f_75, t);
  f_49 = t;
  t = term_b_34;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_34, f_75);
  t = q_10(h_50, f_75, t);
  g_49 = t;
  t = new_0_0(t);
  h_49 = t;
  t = c_75;
  t = map_1_0(h_4, t);
  i_49 = t;
  t = d_75;
  t = map_1_0(i_4, t);
  j_49 = t;
  t = new_0_0(t);
  k_49 = t;
  t = m_75;
  t = dummify_0_0(t);
  o_49 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_49;
        if((m_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, k_49);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = o_49;
      }
  }
  n_49 = t;
  t = o_49;
  t = free_vars_3_0(j_4, k_4, tboundin_3_0, t);
  t = map_1_0(q_4, t);
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_75, r_75);
  t = free_vars_3_0(w_4, y_4, tboundin_3_0, t);
  t = filter_1_0(b_5, t);
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_49, s_49);
  t = diff_0_0(t);
  t_49 = t;
  t = new_0_0(t);
  u_49 = t;
  t = f_75;
  t = a_133(t);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_49, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_e_20, (ATerm) ATinsert(CheckATermList(t_49), (ATerm) ATmakeAppl(sym_Str_1, u_49)))), o_49)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, g_49, c_75, d_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_e_20, (ATerm) ATinsert(CheckATermList(t_49), (ATerm) ATmakeAppl(sym_Str_1, u_49)))), m_75)), q_75, (ATerm) ATmakeAppl(sym_Seq_2, term_n_34, r_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, f_49, c_75, d_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_49), m_75), (ATerm)ATmakeAppl(sym_Var_1, h_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_75)))), n_49), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_49), i_49, j_49), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_i_34), (ATerm) ATmakeAppl(sym_Var_1, k_49)))))), (ATerm) ATmakeAppl(sym_Var_1, h_49)))))), (ATerm) ATmakeAppl(sym_RDefT_4, f_75, c_75, d_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_49), m_75), q_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_75)))), n_49), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_e_20, (ATerm) ATinsert(CheckATermList(t_49), (ATerm) ATmakeAppl(sym_Str_1, u_49)))), term_f_34))), r_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,m_27 = NULL;
      t_26 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          u_26 = ATgetArgument(t, 0);
          v_26 = ATgetArgument(t, 1);
          w_26 = ATgetArgument(t, 2);
          h_27 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = h_27;
      if(match_cons(t, sym_Rule_3))
        {
          i_27 = ATgetArgument(t, 0);
          j_27 = ATgetArgument(t, 1);
          m_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_26;
      t = i_9(e_5, u_26, v_26, w_26, i_27, j_27, m_27, t);
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(f_5, t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_27))));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_28))));
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm b_28 = NULL,e_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_28 = ATgetFirst((ATermList) t);
      e_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_28, e_28);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm f_28 = NULL,m_28 = NULL,n_28 = NULL,s_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(match_cons(v_34, sym__2))
        {
          f_28 = ATgetArgument(v_34, 0);
          m_28 = ATgetArgument(v_34, 1);
        }
      else
        _fail(t);
      {
        ATerm w_34 = ATgetArgument(t, 1);
        if(match_cons(w_34, sym__2))
          {
            n_28 = ATgetArgument(w_34, 0);
            s_28 = ATgetArgument(w_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_28), f_28), (ATerm) ATinsert(CheckATermList(s_28), m_28));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_34 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,z_29 = NULL;
      g_29 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          h_29 = ATgetArgument(t, 0);
          i_29 = ATgetArgument(t, 1);
          n_29 = ATgetArgument(t, 2);
          o_29 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_29;
      if(match_cons(t, sym_Rule_3))
        {
          p_29 = ATgetArgument(t, 0);
          q_29 = ATgetArgument(t, 1);
          z_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_29;
      t = i_9(o_5, h_29, i_29, n_29, p_29, q_29, z_29, t);
      LocalPopChoice(d_35);
    }
  else
    {
      t = x_34;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(p_5, t);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, n_30))));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_30))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm r_5 (ATerm t)
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
static ATerm t_5 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if(match_cons(i_35, sym__2))
        {
          y_30 = ATgetArgument(i_35, 0);
          z_30 = ATgetArgument(i_35, 1);
        }
      else
        _fail(t);
      {
        ATerm j_35 = ATgetArgument(t, 1);
        if(match_cons(j_35, sym__2))
          {
            a_31 = ATgetArgument(j_35, 0);
            b_31 = ATgetArgument(j_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_31), y_30), (ATerm) ATinsert(CheckATermList(b_31), z_30));
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(v_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm d_60 = NULL;
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_60))));
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_60 = ATgetFirst((ATermList) t);
      f_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(match_cons(m_35, sym__2))
        {
          g_60 = ATgetArgument(m_35, 0);
          h_60 = ATgetArgument(m_35, 1);
        }
      else
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
        if(match_cons(o_35, sym__2))
          {
            i_60 = ATgetArgument(o_35, 0);
            j_60 = ATgetArgument(o_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_60), g_60), (ATerm) ATinsert(CheckATermList(j_60), h_60));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(d_6, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_60))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_27;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_60 = ATgetFirst((ATermList) t);
      o_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(match_cons(r_35, sym__2))
        {
          q_60 = ATgetArgument(r_35, 0);
          r_60 = ATgetArgument(r_35, 1);
        }
      else
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(match_cons(s_35, sym__2))
          {
            s_60 = ATgetArgument(s_35, 0);
            t_60 = ATgetArgument(s_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_60), q_60), (ATerm) ATinsert(CheckATermList(t_60), r_60));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL;
  a_60 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      b_60 = ATgetArgument(t, 0);
      {
        ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,q_26 = NULL,z_20 = NULL;
        t = b_60;
        t = map_1_0(c_5, t);
        t = genzip_4_0(g_5, l_5, m_5, _id, t);
        q_26 = t;
        if(match_cons(t, sym__2))
          {
            k_26 = ATgetArgument(t, 0);
            l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_26);
        j_26 = t;
        t = l_26;
        t = concat_0_0(t);
        n_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_26, n_26);
        z_20 = t;
        t = SSLsetAnnotations(z_20, j_26);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          b_60 = ATgetArgument(t, 0);
          {
            ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,f_29 = NULL,a_21 = NULL;
            t = b_60;
            t = map_1_0(n_5, t);
            t = genzip_4_0(q_5, r_5, t_5, _id, t);
            f_29 = t;
            if(match_cons(t, sym__2))
              {
                a_29 = ATgetArgument(t, 0);
                b_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_29);
            z_28 = t;
            t = b_29;
            t = concat_0_0(t);
            c_29 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_29, c_29);
            a_21 = t;
            t = SSLsetAnnotations(a_21, z_28);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              b_60 = ATgetArgument(t, 0);
              t = b_60;
              t = map_1_0(u_5, t);
              t = genzip_4_0(x_5, y_5, z_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_60;
              t = map_1_0(b_6, t);
              t = genzip_4_0(e_6, f_6, g_6, _id, t);
            }
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  static ATerm y_60 (ATerm t)
  {
    ATerm v_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_102(t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = v_35;
        t = SRTS_one(y_60, t);
      }
    return(t);
  }
  t = y_60(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_o_19;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm n_61 = NULL,v_61 = NULL,y_61 = NULL,z_61 = NULL;
  z_61 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      y_61 = ATgetArgument(t, 0);
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_61;
            n_61 = t;
            t = z_61;
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            t = z_61;
            n_61 = t;
            t = z_61;
          }
      }
    }
  else
    {
      t = z_61;
      n_61 = t;
      t = z_61;
    }
  t = term_c_36;
  v_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_61, term_c_36);
  t = g_10(p_6, n_61, v_61, t);
  t = z_61;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  static ATerm a_62 (ATerm t)
  {
    static ATerm i_6 (ATerm t)
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_133(t);
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          {
            ATerm h_61 = NULL,i_61 = NULL,m_61 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                h_61 = ATgetArgument(t, 0);
                i_61 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, h_61, i_61);
            {
              static ATerm k_6 (ATerm t)
              {
                t = h_61;
                t = map_1_0(l_6, t);
                t = i_61;
                t = a_62(t);
                if(((m_61 != NULL) && (m_61 != t)))
                  _fail(t);
                else
                  m_61 = t;
                return(t);
              }
              t = scope_2_0(j_6, k_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, h_61, not_null(m_61));
          }
        }
      return(t);
    }
    t = oncetd_1_0(i_6, t);
    return(t);
  }
  t = a_62(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm t_62 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_62);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      {
        ATerm h_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_36);
          }
        else
          {
            t = h_36;
            {
              ATerm j_36 = t;
              int k_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_62 = ATgetArgument(t, 0);
                      y_62 = ATgetArgument(t, 1);
                      z_62 = ATgetArgument(t, 2);
                      a_63 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_62;
                  t = map_1_0(u_6, t);
                  LocalPopChoice(k_36);
                }
              else
                {
                  t = j_36;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm i_64 = NULL;
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_64 = ATgetArgument(t, 0);
          {
            ATerm n_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_36);
      t = i_64;
    }
  else
    {
      t = l_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_64;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm j_65 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_65 = ATgetArgument(t, 0);
      t = j_65;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_65 = ATgetArgument(t, 0);
          {
            ATerm o_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_65;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm n_67 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_67 = ATgetArgument(t, 0);
      t = n_67;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_67 = ATgetArgument(t, 0);
          {
            ATerm p_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_67;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm r_67 = NULL;
  if(match_cons(t, sym__2))
    {
      r_67 = ATgetArgument(t, 0);
      if((r_67 != ATgetArgument(t, 1)))
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
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL;
  s_62 = t;
  t = free_vars_3_0(s_6, t_6, tboundin_3_0, t);
  q_62 = t;
  t = s_62;
  {
    ATerm q_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_64 = NULL;
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm z_36 = ATgetArgument(t, 0);
                ATerm a_37 = ATgetArgument(t, 1);
                q_64 = ATgetArgument(t, 2);
                {
                  ATerm b_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_36);
            t = q_64;
            t = map_1_0(v_6, t);
          }
        else
          {
            t = w_36;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm c_37 = ATgetArgument(t, 0);
                ATerm d_37 = ATgetArgument(t, 1);
                q_64 = ATgetArgument(t, 2);
                {
                  ATerm e_37 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = q_64;
            t = map_1_0(w_6, t);
          }
        LocalPopChoice(v_36);
      }
    else
      {
        t = q_36;
        t = (ATerm) ATempty;
      }
  }
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_62, r_62);
  t = u_9(x_6, q_62, r_62, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_o_19;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm f_68 = NULL,h_68 = NULL,k_68 = NULL,m_68 = NULL;
  m_68 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      k_68 = ATgetArgument(t, 0);
      {
        ATerm f_37 = t;
        int n_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_68;
            f_68 = t;
            t = m_68;
            LocalPopChoice(n_37);
          }
        else
          {
            t = f_37;
            t = m_68;
            f_68 = t;
            t = m_68;
          }
      }
    }
  else
    {
      t = m_68;
      f_68 = t;
      t = m_68;
    }
  t = term_c_36;
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_68, term_c_36);
  t = g_10(d_7, f_68, h_68, t);
  t = m_68;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_o_19;
  return(t);
}
static ATerm k_9 (ATerm f_76, ATerm e_76, ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
  static ATerm b_7 (ATerm t)
  {
    t = f_76;
    t = def_tvars_0_0(t);
    t = map_1_0(c_7, t);
    t = f_76;
    {
      static ATerm g_7 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((u_67 != NULL) && (u_67 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              u_67 = ATgetArgument(t, 0);
            if(((t_67 != NULL) && (t_67 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              t_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, u_67);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(g_7, t);
    }
    if(((v_67 != NULL) && (v_67 != t)))
      _fail(t);
    else
      v_67 = t;
    return(t);
  }
  t = scope_2_0(y_6, b_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_67)), not_null(v_67)), e_76);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm t)
{
  static ATerm o_68 (ATerm t)
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_99(t);
        t = o_68(t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        t = x_99(t);
      }
    return(t);
  }
  t = o_68(t);
  return(t);
}
ATerm listtd_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  static ATerm p_69 (ATerm t)
  {
    ATerm g_69 = NULL,i_69 = NULL,o_69 = NULL;
    t = s_108(t);
    g_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_69;
      }
    else
      {
        ATerm s_31 = NULL,z_31 = NULL,h_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_69 = ATgetFirst((ATermList) t);
            o_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_69);
        s_31 = t;
        t = o_69;
        t = p_69(t);
        z_31 = t;
        t = (ATerm) ATinsert(CheckATermList(z_31), i_69);
        h_21 = t;
        t = SSLsetAnnotations(h_21, s_31);
      }
    return(t);
  }
  t = p_69(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,x_69 = NULL,c_70 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      x_69 = ATgetArgument(t, 0);
      c_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_69 = ATgetFirst((ATermList) t);
      v_69 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_s_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, v_69, c_70)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_69))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_70;
    }
  return(t);
}
ATerm debug_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm i_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  i_70 = t;
  t = x_106(t);
  k_70 = t;
  t = term_x_31;
  l_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_70), k_70);
  m_70 = t;
  t = SSL_printnl(l_70, m_70);
  t = i_70;
  return(t);
}
static ATerm u_73 (ATerm s_70, ATerm t)
{
  t = SSL_is_string(s_70);
  return(t);
}
static ATerm c_74 (ATerm u_70, ATerm t)
{
  ATerm v_70 = NULL,r_71 = NULL,t_71 = NULL;
  t = term_x_31;
  r_71 = t;
  t = (ATerm) ATinsert(ATempty, term_t_37);
  t_71 = t;
  t = SSL_printnl(r_71, t_71);
  t = u_70;
  t = debug_1_0(i_7, t);
  t = term_a_32;
  v_70 = t;
  t = SSL_exit(v_70);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm u_71 = NULL,i_73 = NULL;
  i_73 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      u_71 = ATgetArgument(t, 0);
      {
        ATerm v_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_73(i_73, t);
            LocalPopChoice(x_37);
          }
        else
          {
            t = v_37;
            t = u_71;
          }
      }
    }
  else
    {
      ATerm y_37 = t;
      int a_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_73(i_73, t);
          LocalPopChoice(a_38);
        }
      else
        {
          t = y_37;
          t = c_74(i_73, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,x_76 = NULL,y_76 = NULL,e_77 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      m_76 = ATgetArgument(t, 0);
      e_77 = ATgetArgument(t, 1);
      t = m_76;
      if(match_cons(t, sym_DynRuleId_1))
        {
          n_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_76;
      if(match_cons(t, sym_RDecT_3))
        {
          o_76 = ATgetArgument(t, 0);
          x_76 = ATgetArgument(t, 1);
          y_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, o_76, x_76, y_76, (ATerm) ATmakeAppl(sym_Rule_3, e_77, term_v_19, term_s_17));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          m_76 = ATgetArgument(t, 0);
          e_77 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_76;
      if(match_cons(t, sym_DynRuleId_1))
        {
          n_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_76;
      if(match_cons(t, sym_RDecT_3))
        {
          o_76 = ATgetArgument(t, 0);
          x_76 = ATgetArgument(t, 1);
          y_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, o_76, x_76, y_76, e_77);
    }
  return(t);
}
static ATerm m_78 (ATerm v_77, ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,b_78 = NULL,c_78 = NULL;
  t = v_77;
  if(match_cons(t, sym_GenDynRules_1))
    {
      b_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_78;
  t = filter_1_0(j_7, t);
  c_78 = t;
  t = v_77;
  if(match_cons(t, sym_GenDynRules_1))
    {
      x_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_77;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  y_77 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, c_78), (ATerm) ATmakeAppl(sym_DynamicRules_1, y_77));
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm b_38 = ATgetArgument(t, 0);
      if(match_cons(b_38, sym_DynRuleId_1))
        {
          ATerm c_38 = ATgetArgument(b_38, 0);
          if(match_cons(c_38, sym_RDecT_3))
            {
              d_78 = ATgetArgument(c_38, 0);
              e_78 = ATgetArgument(c_38, 1);
              f_78 = ATgetArgument(c_38, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      g_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, d_78, e_78, f_78, g_78);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm d_38 = ATgetArgument(t, 0);
      ATerm e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL;
  k_78 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      j_78 = ATgetArgument(t, 0);
      {
        ATerm g_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_32 = NULL;
            t = j_78;
            {
              ATerm j_38 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(l_7, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_38;
                }
            }
            t = j_78;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            r_32 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_32);
            LocalPopChoice(i_38);
          }
        else
          {
            t = g_38;
            t = m_78(k_78, t);
          }
      }
    }
  else
    {
      t = m_78(k_78, t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_78 = NULL;
      p_78 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm m_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_78;
      LocalPopChoice(l_38);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = k_38;
      {
        ATerm n_38 = t;
        int p_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_78 = NULL;
            q_78 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm t_38 = ATgetArgument(t, 0);
                ATerm u_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_78;
            LocalPopChoice(p_38);
            {
              ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  r_78 = ATgetArgument(t, 0);
                  s_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_78;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              t_78 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, t_78, s_78);
            }
          }
        else
          {
            t = n_38;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(o_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = Cons_2_0(q_7, x_7, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,k_21 = NULL;
  m_79 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_79);
  j_79 = t;
  t = k_79;
  t = topdown_1_0(c_8, t);
  t = listtd_1_0(f_8, t);
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_79);
  k_21 = t;
  t = SSLsetAnnotations(k_21, j_79);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = repeat_2_0(g_8, _id, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_79 = ATgetFirst((ATermList) t);
      q_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_9(p_79, q_79, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,p_21 = NULL,l_21 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  h_79 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_79);
  a_79 = t;
  t = b_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_79 = ATgetFirst((ATermList) t);
      e_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_79);
  c_79 = t;
  t = e_79;
  t = Cons_2_0(_id, p_7, t);
  f_79 = t;
  t = (ATerm) ATinsert(CheckATermList(f_79), d_79);
  l_21 = t;
  t = SSLsetAnnotations(l_21, c_79);
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_79);
  p_21 = t;
  t = SSLsetAnnotations(p_21, a_79);
  return(t);
}
ATerm tboundin_3_0 (ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t)
{
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL,k_85 = NULL,l_85 = NULL;
  k_85 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
      {
        ATerm i_33 = NULL,m_33 = NULL,o_33 = NULL,t_21 = NULL;
        t = SSLgetAnnotations(k_85);
        i_33 = t;
        t = l_85;
        t = s_132(t);
        m_33 = t;
        t = g_85;
        t = q_132(t);
        o_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_33, o_33);
        t_21 = t;
        t = SSLsetAnnotations(t_21, i_33);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          l_85 = ATgetArgument(t, 0);
          g_85 = ATgetArgument(t, 1);
          h_85 = ATgetArgument(t, 2);
          {
            ATerm e_34 = NULL,l_34 = NULL,m_34 = NULL,q_34 = NULL,u_21 = NULL;
            t = SSLgetAnnotations(k_85);
            e_34 = t;
            t = l_85;
            t = s_132(t);
            l_34 = t;
            t = g_85;
            t = s_132(t);
            m_34 = t;
            t = h_85;
            t = s_132(t);
            q_34 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, l_34, m_34, q_34);
            u_21 = t;
            t = SSLsetAnnotations(u_21, e_34);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_85 = ATgetArgument(t, 0);
              g_85 = ATgetArgument(t, 1);
              h_85 = ATgetArgument(t, 2);
              i_85 = ATgetArgument(t, 3);
              {
                ATerm n_35 = NULL,t_35 = NULL,u_35 = NULL,w_35 = NULL,x_35 = NULL,v_21 = NULL;
                t = SSLgetAnnotations(k_85);
                n_35 = t;
                t = l_85;
                t = s_132(t);
                t_35 = t;
                t = g_85;
                t = s_132(t);
                u_35 = t;
                t = h_85;
                t = s_132(t);
                w_35 = t;
                t = i_85;
                t = q_132(t);
                x_35 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, t_35, u_35, w_35, x_35);
                v_21 = t;
                t = SSLsetAnnotations(v_21, n_35);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  l_85 = ATgetArgument(t, 0);
                  g_85 = ATgetArgument(t, 1);
                  h_85 = ATgetArgument(t, 2);
                  i_85 = ATgetArgument(t, 3);
                  {
                    ATerm y_36 = NULL,g_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,w_21 = NULL;
                    t = SSLgetAnnotations(k_85);
                    y_36 = t;
                    t = l_85;
                    t = s_132(t);
                    g_37 = t;
                    t = g_85;
                    t = s_132(t);
                    k_37 = t;
                    t = h_85;
                    t = s_132(t);
                    l_37 = t;
                    t = i_85;
                    t = q_132(t);
                    m_37 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, g_37, k_37, l_37, m_37);
                    w_21 = t;
                    t = SSLsetAnnotations(w_21, y_36);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      l_85 = ATgetArgument(t, 0);
                      {
                        ATerm w_37 = NULL,z_37 = NULL,x_21 = NULL;
                        t = SSLgetAnnotations(k_85);
                        w_37 = t;
                        t = l_85;
                        t = q_132(t);
                        z_37 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, z_37);
                        x_21 = t;
                        t = SSLsetAnnotations(x_21, w_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          l_85 = ATgetArgument(t, 0);
                          {
                            ATerm f_38 = NULL,h_38 = NULL,y_21 = NULL;
                            t = SSLgetAnnotations(k_85);
                            f_38 = t;
                            t = l_85;
                            t = q_132(t);
                            h_38 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_38);
                            y_21 = t;
                            t = SSLsetAnnotations(y_21, f_38);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              l_85 = ATgetArgument(t, 0);
                              {
                                ATerm o_38 = NULL,s_38 = NULL,z_21 = NULL;
                                t = SSLgetAnnotations(k_85);
                                o_38 = t;
                                t = l_85;
                                t = q_132(t);
                                s_38 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, s_38);
                                z_21 = t;
                                t = SSLsetAnnotations(z_21, o_38);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  l_85 = ATgetArgument(t, 0);
                                  {
                                    ATerm z_38 = NULL,c_39 = NULL,a_22 = NULL;
                                    t = SSLgetAnnotations(k_85);
                                    z_38 = t;
                                    t = l_85;
                                    t = q_132(t);
                                    c_39 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_39);
                                    a_22 = t;
                                    t = SSLsetAnnotations(a_22, z_38);
                                  }
                                }
                              else
                                {
                                  ATerm j_39 = NULL,m_39 = NULL,b_22 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      l_85 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(k_85);
                                  j_39 = t;
                                  t = l_85;
                                  t = q_132(t);
                                  m_39 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, m_39);
                                  b_22 = t;
                                  t = SSLsetAnnotations(b_22, j_39);
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
static ATerm h_8 (ATerm t)
{
  ATerm m_86 = NULL;
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_86 = ATgetArgument(t, 0);
          {
            ATerm a_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_38);
      t = m_86;
    }
  else
    {
      t = x_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_86;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm u_86 = NULL;
  ATerm b_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_86 = ATgetArgument(t, 0);
          {
            ATerm e_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_39);
      t = u_86;
    }
  else
    {
      t = b_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_86;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm g_86 = NULL;
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm h_39 = ATgetArgument(t, 0);
          ATerm i_39 = ATgetArgument(t, 1);
          g_86 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(g_39);
      t = g_86;
      t = map_1_0(h_8, t);
    }
  else
    {
      t = f_39;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm k_39 = ATgetArgument(t, 0);
          ATerm l_39 = ATgetArgument(t, 1);
          g_86 = ATgetArgument(t, 2);
          {
            ATerm p_39 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_86;
      t = map_1_0(l_8, t);
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm o_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_87);
  return(t);
}
static ATerm o_8 (ATerm t)
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
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_40);
          }
        else
          {
            t = s_39;
            {
              ATerm c_40 = t;
              int f_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,v_87 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_87 = ATgetArgument(t, 0);
                      r_87 = ATgetArgument(t, 1);
                      s_87 = ATgetArgument(t, 2);
                      v_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_87;
                  t = map_1_0(p_8, t);
                  LocalPopChoice(f_40);
                }
              else
                {
                  t = c_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm k_88 = NULL;
  ATerm g_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_88 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_40);
      t = k_88;
    }
  else
    {
      t = g_40;
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
static ATerm q_8 (ATerm t)
{
  ATerm r_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_88);
  return(t);
}
static ATerm s_8 (ATerm t)
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
              ATerm o_40 = t;
              int p_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_88 = NULL,v_88 = NULL,w_88 = NULL,z_88 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_88 = ATgetArgument(t, 0);
                      v_88 = ATgetArgument(t, 1);
                      w_88 = ATgetArgument(t, 2);
                      z_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_88;
                  t = map_1_0(t_8, t);
                  LocalPopChoice(p_40);
                }
              else
                {
                  t = o_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm h_89 = NULL;
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_89 = ATgetArgument(t, 0);
          {
            ATerm s_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_40);
      t = h_89;
    }
  else
    {
      t = q_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_89;
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm l_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_89);
  return(t);
}
static ATerm v_8 (ATerm t)
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
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_40);
          }
        else
          {
            t = v_40;
            {
              ATerm y_40 = t;
              int z_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_89 = ATgetArgument(t, 0);
                      q_89 = ATgetArgument(t, 1);
                      r_89 = ATgetArgument(t, 2);
                      s_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_89;
                  t = map_1_0(w_8, t);
                  LocalPopChoice(z_40);
                }
              else
                {
                  t = y_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm d_90 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_90 = ATgetArgument(t, 0);
          {
            ATerm d_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_41);
      t = d_90;
    }
  else
    {
      t = b_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_90;
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm j_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_90);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm f_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_41);
    }
  else
    {
      t = f_41;
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
                  ATerm l_90 = NULL,o_90 = NULL,p_90 = NULL,s_90 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_90 = ATgetArgument(t, 0);
                      o_90 = ATgetArgument(t, 1);
                      p_90 = ATgetArgument(t, 2);
                      s_90 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_90;
                  t = map_1_0(a_9, t);
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
static ATerm a_9 (ATerm t)
{
  ATerm b_91 = NULL;
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_91 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = b_91;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_91;
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm l_91 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_91);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
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
              ATerm c_42 = t;
              int g_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_91 = NULL,s_91 = NULL,u_91 = NULL,v_91 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_91 = ATgetArgument(t, 0);
                      s_91 = ATgetArgument(t, 1);
                      u_91 = ATgetArgument(t, 2);
                      v_91 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_91;
                  t = map_1_0(j_9, t);
                  LocalPopChoice(g_42);
                }
              else
                {
                  t = c_42;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm h_92 = NULL;
  ATerm h_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_92 = ATgetArgument(t, 0);
          {
            ATerm o_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_42);
      t = h_92;
    }
  else
    {
      t = h_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_92;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm l_87 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      l_87 = ATgetArgument(t, 0);
      t = l_87;
      t = free_vars_3_0(n_8, o_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          l_87 = ATgetArgument(t, 0);
          t = l_87;
          t = free_vars_3_0(q_8, s_8, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              l_87 = ATgetArgument(t, 0);
              t = l_87;
              t = free_vars_3_0(u_8, v_8, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  l_87 = ATgetArgument(t, 0);
                  t = l_87;
                  t = free_vars_3_0(x_8, z_8, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      l_87 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_87;
                  t = free_vars_3_0(c_9, e_9, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm b_93 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_93);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      {
        ATerm s_42 = t;
        int v_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_42);
          }
        else
          {
            t = s_42;
            {
              ATerm w_42 = t;
              int x_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_93 = ATgetArgument(t, 0);
                      e_93 = ATgetArgument(t, 1);
                      f_93 = ATgetArgument(t, 2);
                      g_93 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_93;
                  t = map_1_0(n_9, t);
                  LocalPopChoice(x_42);
                }
              else
                {
                  t = w_42;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm p_93 = NULL;
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_93 = ATgetArgument(t, 0);
          {
            ATerm a_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_42);
      t = p_93;
    }
  else
    {
      t = y_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_93;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm u_92 = NULL,y_92 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_92 = ATgetArgument(t, 0);
      t = y_92;
      if(match_cons(t, sym_Rule_3))
        {
          u_92 = ATgetArgument(t, 0);
          {
            ATerm b_43 = ATgetArgument(t, 1);
          }
          {
            ATerm f_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_92;
      t = free_vars_3_0(l_9, m_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_92 = ATgetArgument(t, 0);
          {
            ATerm g_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_92;
    }
  return(t);
}
static ATerm u_9 (ATerm t_111 (ATerm), ATerm f_30, ATerm e_30, ATerm t)
{
  static ATerm i_94 (ATerm t)
  {
    ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL;
    d_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_94 = ATgetFirst((ATermList) t);
            f_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_43 = t;
          int i_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_94;
              {
                static ATerm q_9 (ATerm t)
                {
                  t = e_30;
                  return(t);
                }
                t = v_9(t_111, q_9, e_94, f_94, t);
              }
              t = i_94(t);
              LocalPopChoice(i_43);
            }
          else
            {
              t = h_43;
              {
                ATerm e_40 = NULL,h_40 = NULL,q_22 = NULL;
                t = SSLgetAnnotations(d_94);
                e_40 = t;
                t = f_94;
                t = i_94(t);
                h_40 = t;
                t = (ATerm) ATinsert(CheckATermList(h_40), e_94);
                q_22 = t;
                t = SSLsetAnnotations(q_22, e_40);
              }
            }
        }
      }
    return(t);
  }
  t = f_30;
  t = i_94(t);
  return(t);
}
static ATerm v_9 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm j_30, ATerm i_30, ATerm t)
{
  t = x_111(t);
  {
    static ATerm s_9 (ATerm t)
    {
      ATerm m_94 = NULL;
      m_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_30, m_94);
      t = w_111(t);
      return(t);
    }
    t = fetch_1_0(s_9, t);
  }
  t = i_30;
  return(t);
}
static ATerm w_9 (ATerm o_111 (ATerm), ATerm d_30, ATerm c_30, ATerm t)
{
  static ATerm c_95 (ATerm t)
  {
    ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL;
    x_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_94;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_94 = ATgetFirst((ATermList) t);
            z_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_43 = t;
          int k_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_94;
              {
                static ATerm t_9 (ATerm t)
                {
                  t = c_30;
                  return(t);
                }
                t = v_9(o_111, t_9, y_94, z_94, t);
              }
              t = c_95(t);
              LocalPopChoice(k_43);
            }
          else
            {
              t = j_43;
              {
                ATerm w_40 = NULL,a_41 = NULL,t_22 = NULL;
                t = SSLgetAnnotations(x_94);
                w_40 = t;
                t = z_94;
                t = c_95(t);
                a_41 = t;
                t = (ATerm) ATinsert(CheckATermList(a_41), y_94);
                t_22 = t;
                t = SSLsetAnnotations(t_22, w_40);
              }
            }
        }
      }
    return(t);
  }
  t = d_30;
  t = c_95(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  static ATerm k_95 (ATerm t)
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_109(t);
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        {
          ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,v_22 = NULL;
          t = n_109(t);
          j_95 = t;
          if(match_cons(t, sym__2))
            {
              f_95 = ATgetArgument(t, 0);
              g_95 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_95);
          e_95 = t;
          t = f_95;
          t = p_109(t);
          h_95 = t;
          t = g_95;
          t = k_95(t);
          i_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_95, i_95);
          v_22 = t;
          t = SSLsetAnnotations(v_22, e_95);
          t = o_109(t);
        }
      }
    return(t);
  }
  t = k_95(t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_43 = ATgetArgument(t, 0);
      if(((ATgetType(n_43) != AT_LIST) || !(ATisEmpty(n_43))))
        _fail(t);
      {
        ATerm o_43 = ATgetArgument(t, 1);
        if(((ATgetType(o_43) != AT_LIST) || !(ATisEmpty(o_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_43 = ATgetArgument(t, 0);
      if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
        {
          r_95 = ATgetFirst((ATermList) q_43);
          s_95 = (ATerm) ATgetNext((ATermList) q_43);
        }
      else
        _fail(t);
      {
        ATerm r_43 = ATgetArgument(t, 1);
        if(((ATgetType(r_43) == AT_LIST) && !(ATisEmpty(r_43))))
          {
            t_95 = ATgetFirst((ATermList) r_43);
            u_95 = (ATerm) ATgetNext((ATermList) r_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_95, t_95), (ATerm) ATmakeAppl(sym__2, s_95, u_95));
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL;
  if(match_cons(t, sym__2))
    {
      v_95 = ATgetArgument(t, 0);
      w_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_95), v_95);
  return(t);
}
static ATerm b_10 (ATerm g_642, ATerm l_642, ATerm c_61, ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  t = SSL_explode_term(l_642);
  if(match_cons(t, sym__2))
    {
      m_95 = ATgetArgument(t, 0);
      o_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_642);
  if(match_cons(t, sym__2))
    {
      if((m_95 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_95, o_95);
  t = genzip_4_0(x_9, c_10, d_10, _id, t);
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_95, c_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  static ATerm y_95 (ATerm t)
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_100(t);
        LocalPopChoice(t_43);
      }
    else
      {
        t = s_43;
        t = o_100(t);
        t = y_95(t);
      }
    return(t);
  }
  t = y_95(t);
  return(t);
}
ATerm for_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  t = q_100(t);
  t = while_not_2_0(r_100, s_100, t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm f_96 = NULL;
  f_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_96);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,z_22 = NULL;
  j_96 = t;
  if(match_cons(t, sym__2))
    {
      h_96 = ATgetArgument(t, 0);
      i_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_96);
  g_96 = t;
  t = i_96;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_96, i_96);
  z_22 = t;
  t = SSLsetAnnotations(z_22, g_96);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL;
  c_97 = t;
  if(match_cons(t, sym__2))
    {
      d_97 = ATgetArgument(t, 0);
      e_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_97 = ATgetFirst((ATermList) t);
      g_97 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_97(d_97, e_97, c_97, t);
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_97), f_97), g_97);
          }
      }
    }
  else
    {
      t = q_97(d_97, e_97, c_97, t);
    }
  return(t);
}
static ATerm q_97 (ATerm k_96, ATerm l_96, ATerm m_96, ATerm t)
{
  ATerm n_96 = NULL,q_96 = NULL,a_23 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL;
  t = SSLgetAnnotations(m_96);
  n_96 = t;
  t = l_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_96 = ATgetFirst((ATermList) t);
      w_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_96;
  if(match_cons(t, sym__2))
    {
      u_96 = ATgetArgument(t, 0);
      v_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_96;
        if((u_96 != t))
          {
            _fail(t);
          }
        t = w_96;
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        t = l_96;
        t = b_10(u_96, v_96, w_96, t);
      }
  }
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_96, q_96);
  a_23 = t;
  t = SSLsetAnnotations(a_23, n_96);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm p_97 = NULL;
  if(match_cons(t, sym__2))
    {
      p_97 = ATgetArgument(t, 0);
      if((p_97 != ATgetArgument(t, 1)))
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
  ATerm z_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_10, j_10, u_10, t);
      LocalPopChoice(a_44);
    }
  else
    {
      t = z_43;
      {
        ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
        k_97 = t;
        if(match_cons(t, sym__2))
          {
            l_97 = ATgetArgument(t, 0);
            m_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_97;
        t = w_9(x_10, l_97, m_97, t);
      }
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  if(match_cons(t, sym__2))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(h_11, x_41, y_41, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm z_41 = NULL;
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      if((z_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(k_11, m_42, n_42, t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      if((p_42 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm e_98 (ATerm t)
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_130(t);
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        {
          ATerm d_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_97 = NULL,t_97 = NULL,g_41 = NULL,h_41 = NULL;
              s_97 = t;
              t = e_130(t);
              t_97 = t;
              t = s_97;
              {
                static ATerm a_11 (ATerm t)
                {
                  ATerm v_97 = NULL;
                  t = e_98(t);
                  v_97 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_97, t_97);
                  t = diff_0_0(t);
                  return(t);
                }
                t = f_130(a_11, e_98, e_11, t);
              }
              h_41 = t;
              t = SSL_explode_term(h_41);
              if(match_cons(t, sym__2))
                {
                  ATerm g_44 = ATgetArgument(t, 0);
                  g_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_41;
              t = foldr_3_0(f_11, g_11, _id, t);
              LocalPopChoice(e_44);
            }
          else
            {
              t = d_44;
              {
                ATerm d_42 = NULL,e_42 = NULL;
                e_42 = t;
                t = SSL_explode_term(e_42);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_44 = ATgetArgument(t, 0);
                    d_42 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_42;
                t = foldr_3_0(i_11, j_11, e_98, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_98(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  static ATerm l_11 (ATerm t)
  {
    t = bottomup_1_0(x_100, t);
    return(t);
  }
  t = SRTS_all(l_11, t);
  t = x_100(t);
  return(t);
}
static ATerm f_10 (ATerm w_54, ATerm x_54, ATerm t)
{
  ATerm f_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_54, x_54);
  t = y_10(w_54, x_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_98 = ATgetFirst((ATermList) t);
      {
        ATerm j_44 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_98;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL;
  t_98 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_43 = NULL;
        t = term_o_44;
        p_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_44, t_98);
        t = f_10(p_43, t_98, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm p_44 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_44) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, u_98, (ATerm) ATempty);
        LocalPopChoice(n_44);
      }
    else
      {
        t = l_44;
        {
          ATerm y_43 = NULL;
          t = term_o_44;
          y_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_44, t_98);
          t = f_10(y_43, t_98, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm q_44 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_44) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, u_98, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  static ATerm x_98 (ATerm t)
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_102(t);
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        t = SRTS_all(x_98, t);
      }
    return(t);
  }
  t = x_98(t);
  return(t);
}
static ATerm g_10 (ATerm r_120 (ATerm), ATerm h_44, ATerm f_44, ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL;
  b_99 = t;
  t = r_120(t);
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_98, h_44, f_44);
  t = z_10(y_98, h_44, f_44, t);
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_99 = NULL;
        t = term_w_44;
        h_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_98, term_w_44);
        t = y_10(y_98, h_99, t);
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_98 = ATgetFirst((ATermList) t);
      a_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_98, term_w_44, (ATerm) ATinsert(CheckATermList(a_99), (ATerm) ATinsert(CheckATermList(z_98), h_44)));
  t = lookup_table_0_1(y_98, t);
  g_99 = t;
  t = term_w_44;
  c_99 = t;
  t = (ATerm) ATinsert(CheckATermList(a_99), (ATerm) ATinsert(CheckATermList(z_98), h_44));
  e_99 = t;
  t = g_99;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(c_99, e_99, f_99, t);
  t = b_99;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_o_44;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_o_44;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm l_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      n_99 = ATgetArgument(t, 0);
      o_99 = ATgetArgument(t, 1);
      l_99 = ATgetArgument(t, 2);
      {
        ATerm u_99 = NULL,v_99 = NULL;
        t = o_99;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, n_99);
        u_99 = t;
        t = term_z_44;
        v_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_99), term_z_44);
        t = g_10(v_11, u_99, v_99, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, n_99, (ATerm)ATempty, l_99);
      }
    }
  else
    {
      ATerm b_100 = NULL,c_100 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          n_99 = ATgetArgument(t, 0);
          o_99 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_99;
      if(match_cons(t, sym_ConstType_1))
        {
          p_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, n_99);
      b_100 = t;
      t = term_b_45;
      c_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_99), term_b_45);
      t = g_10(w_11, b_100, c_100, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_99, (ATerm) ATmakeAppl(sym_ConstType_1, p_99));
    }
  return(t);
}
static ATerm h_10 (ATerm q_54, ATerm r_54, ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL;
  h_100 = t;
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_54, r_54);
        t = y_10(q_54, r_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_45 = ATgetFirst((ATermList) t);
            g_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_45);
        {
          ATerm i_100 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_54, r_54, g_100);
          t = lookup_table_0_1(q_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_11(r_54, g_100, i_100, t);
          t = (ATerm) ATmakeAppl(sym__3, q_54, r_54, g_100);
        }
      }
    else
      {
        t = c_45;
        {
          ATerm k_100 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_54, r_54);
          t = lookup_table_0_1(q_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_10(r_54, k_100, t);
          t = (ATerm) ATmakeAppl(sym__2, q_54, r_54);
        }
      }
  }
  t = h_100;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_120 (ATerm), ATerm t)
{
  ATerm m_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL;
  v_100 = t;
  t = o_120(t);
  u_100 = t;
  {
    ATerm f_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_101 = NULL;
        t = term_w_44;
        b_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_100, term_w_44);
        t = y_10(u_100, b_101, t);
        LocalPopChoice(g_45);
      }
    else
      {
        t = f_45;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_100 = ATgetFirst((ATermList) t);
      m_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_100, term_w_44, m_100);
  t = lookup_table_0_1(u_100, t);
  a_101 = t;
  t = term_w_44;
  y_100 = t;
  t = a_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(y_100, m_100, z_100, t);
  t = t_100;
  {
    static ATerm z_11 (ATerm t)
    {
      ATerm c_101 = NULL;
      c_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_100, c_101);
      t = h_10(u_100, c_101, t);
      return(t);
    }
    t = map_1_0(z_11, t);
  }
  t = v_100;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm t)
{
  ATerm h_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_99(t);
      t = t_99(t);
      LocalPopChoice(i_45);
    }
  else
    {
      t = h_45;
      t = t_99(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL;
  f_101 = t;
  t = n_120(t);
  e_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_101, term_w_44);
  {
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_101 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_45 = ATgetArgument(t, 0);
            ATerm n_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_44;
        o_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_101, term_w_44);
        t = y_10(e_101, o_101, t);
        LocalPopChoice(k_45);
      }
    else
      {
        t = j_45;
        t = (ATerm) ATempty;
      }
  }
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_101, term_w_44, (ATerm) ATinsert(CheckATermList(g_101), (ATerm) ATempty));
  t = lookup_table_0_1(e_101, t);
  k_101 = t;
  t = term_w_44;
  h_101 = t;
  t = (ATerm) ATinsert(CheckATermList(g_101), (ATerm) ATempty);
  i_101 = t;
  t = k_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(h_101, i_101, j_101, t);
  t = f_101;
  return(t);
}
ATerm scope_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  static ATerm j_12 (ATerm t)
  {
    t = end_scope_1_0(p_120, t);
    return(t);
  }
  t = begin_scope_1_0(p_120, t);
  t = restore_always_2_0(q_120, j_12, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_o_44;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,g_23 = NULL;
  w_101 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_101);
  t_101 = t;
  t = u_101;
  t = map_1_0(n_13, t);
  v_101 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_101);
  g_23 = t;
  t = SSLsetAnnotations(g_23, t_101);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL;
  m_102 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      l_102 = ATgetArgument(t, 0);
      {
        ATerm o_45 = t;
        int p_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_44 = NULL,m_44 = NULL,e_23 = NULL;
            t = SSLgetAnnotations(m_102);
            k_44 = t;
            t = l_102;
            t = map_1_0(p_13, t);
            m_44 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, m_44);
            e_23 = t;
            t = SSLsetAnnotations(e_23, k_44);
            LocalPopChoice(p_45);
          }
        else
          {
            t = o_45;
            t = m_102;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          l_102 = ATgetArgument(t, 0);
          {
            ATerm q_45 = t;
            int r_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_44 = NULL,x_44 = NULL,f_23 = NULL;
                t = SSLgetAnnotations(m_102);
                v_44 = t;
                t = l_102;
                t = map_1_0(s_13, t);
                x_44 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, x_44);
                f_23 = t;
                t = SSLsetAnnotations(f_23, v_44);
                LocalPopChoice(r_45);
              }
            else
              {
                t = q_45;
                t = m_102;
              }
          }
        }
      else
        {
          t = m_102;
        }
    }
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
    }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm u_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(v_45);
    }
  else
    {
      t = u_45;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(q_12, m_13, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL;
  v_102 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_102;
    }
  else
    {
      static ATerm t_13 (ATerm t)
      {
        t = not_null(x_102);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_102 = ATgetFirst((ATermList) t);
          if(((x_102 != NULL) && (x_102 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_102;
      t = at_end_1_0(t_13, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_115 (ATerm), ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  m_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_103;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_103 = ATgetFirst((ATermList) t);
          o_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_45 = t;
        int b_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_45 = NULL,z_45 = NULL,c_46 = NULL,l_23 = NULL;
            t = SSLgetAnnotations(m_103);
            m_45 = t;
            t = n_103;
            t = l_115(t);
            z_45 = t;
            t = o_103;
            t = filter_1_0(l_115, t);
            c_46 = t;
            t = (ATerm) ATinsert(CheckATermList(c_46), z_45);
            l_23 = t;
            t = SSLsetAnnotations(l_23, m_45);
            LocalPopChoice(b_46);
          }
        else
          {
            t = w_45;
            t = o_103;
            t = filter_1_0(l_115, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  static ATerm e_104 (ATerm t)
  {
    ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL;
    d_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_104 = ATgetFirst((ATermList) t);
        c_104 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_46 = NULL,g_47 = NULL,n_23 = NULL;
          t = SSLgetAnnotations(d_104);
          x_46 = t;
          t = c_104;
          t = e_104(t);
          g_47 = t;
          t = (ATerm) ATinsert(CheckATermList(g_47), b_104);
          n_23 = t;
          t = SSLsetAnnotations(n_23, x_46);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_104;
        t = z_107(t);
      }
    return(t);
  }
  t = e_104(t);
  return(t);
}
static ATerm q_104 (ATerm i_104, ATerm t)
{
  ATerm j_104 = NULL;
  t = SSL_explode_term(i_104);
  if(match_cons(t, sym__2))
    {
      ATerm d_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
  n_104 = t;
  if(match_cons(t, sym__2))
    {
      l_104 = ATgetArgument(t, 0);
      m_104 = ATgetArgument(t, 1);
      {
        ATerm e_46 = t;
        int f_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_13 (ATerm t)
            {
              t = m_104;
              return(t);
            }
            t = l_104;
            t = at_end_1_0(u_13, t);
            LocalPopChoice(f_46);
          }
        else
          {
            t = e_46;
            t = q_104(n_104, t);
          }
      }
    }
  else
    {
      t = q_104(n_104, t);
    }
  return(t);
}
static ATerm k_10 (ATerm f_133, ATerm c_35, ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL;
  static ATerm v_13 (ATerm t)
  {
    ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL;
    w_104 = t;
    t = SSL_explode_term(w_104);
    if(match_cons(t, sym__2))
      {
        if(((r_104 != NULL) && (r_104 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_104 = ATgetArgument(t, 0);
        {
          ATerm g_46 = ATgetArgument(t, 1);
          if(((ATgetType(g_46) == AT_LIST) && !(ATisEmpty(g_46))))
            {
              t_104 = ATgetFirst((ATermList) g_46);
              {
                ATerm j_46 = (ATerm) ATgetNext((ATermList) g_46);
                if(((ATgetType(j_46) != AT_LIST) || !(ATisEmpty(j_46))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, t_104, not_null(s_104));
    t = conc_0_0(t);
    u_104 = t;
    t = (ATerm) ATinsert(ATempty, u_104);
    v_104 = t;
    t = SSL_mkterm(r_104, v_104);
    return(t);
  }
  t = SSL_explode_term(f_133);
  if(match_cons(t, sym__2))
    {
      if(((r_104 != NULL) && (r_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_104 = ATgetArgument(t, 0);
      {
        ATerm n_46 = ATgetArgument(t, 1);
        if(((ATgetType(n_46) == AT_LIST) && !(ATisEmpty(n_46))))
          {
            if(((s_104 != NULL) && (s_104 != ATgetFirst((ATermList) n_46))))
              _fail(ATgetFirst((ATermList) n_46));
            else
              s_104 = ATgetFirst((ATermList) n_46);
            {
              ATerm o_46 = (ATerm) ATgetNext((ATermList) n_46);
              if(((ATgetType(o_46) != AT_LIST) || !(ATisEmpty(o_46))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_35;
  t = fetch_1_0(v_13, t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm t)
{
  ATerm y_104 = NULL,z_104 = NULL,a_105 = NULL;
  y_104 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_104;
      t = j_114(t);
    }
  else
    {
      ATerm d_105 = NULL,e_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_104 = ATgetFirst((ATermList) t);
          a_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_104;
      t = l_114(t);
      d_105 = t;
      t = a_105;
      t = foldr_3_0(j_114, k_114, l_114, t);
      e_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_105, e_105);
      t = k_114(t);
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_46), term_r_46), term_q_46);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm l_105 = NULL,m_105 = NULL;
  if(match_cons(t, sym__2))
    {
      l_105 = ATgetArgument(t, 0);
      m_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(l_105, m_105, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL;
  o_105 = t;
  if(match_cons(t, sym_Signature_1))
    {
      n_105 = ATgetArgument(t, 0);
      {
        ATerm t_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_105 = NULL;
            t = n_105;
            t = filter_1_0(z_13, t);
            t = concat_0_0(t);
            q_105 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, q_105);
            LocalPopChoice(u_46);
          }
        else
          {
            t = t_46;
            t = o_105;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          n_105 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, n_105);
        }
      else
        {
          t = o_105;
        }
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm r_105 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      r_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_105;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL,k_105 = NULL,p_23 = NULL;
  k_105 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_105);
  h_105 = t;
  t = i_105;
  t = foldr_3_0(w_13, x_13, y_13, t);
  j_105 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_105);
  p_23 = t;
  t = SSLsetAnnotations(p_23, h_105);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(w_46);
    }
  else
    {
      t = v_46;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL;
  u_106 = t;
  if(match_cons(t, sym_LRule_1))
    {
      t_106 = ATgetArgument(t, 0);
      t = t_106;
      if(match_cons(t, sym_Rule_3))
        {
          q_106 = ATgetArgument(t, 0);
          r_106 = ATgetArgument(t, 1);
          s_106 = ATgetArgument(t, 2);
          {
            ATerm y_46 = t;
            int z_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_107 = NULL;
                t = q_106;
                t = free_vars_3_0(c_14, d_14, tboundin_3_0, t);
                a_107 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, a_107, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, q_106, r_106, s_106)));
                LocalPopChoice(z_46);
              }
            else
              {
                t = y_46;
                t = u_106;
              }
          }
        }
      else
        {
          t = u_106;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          t_106 = ATgetArgument(t, 0);
          {
            ATerm a_47 = t;
            int c_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_107 = NULL;
                t = t_106;
                t = free_vars_3_0(h_14, i_14, tboundin_3_0, t);
                y_107 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, y_107, t_106);
                LocalPopChoice(c_47);
              }
            else
              {
                t = a_47;
                t = u_106;
              }
          }
        }
      else
        {
          t = u_106;
        }
    }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm b_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_107);
  return(t);
}
static ATerm d_14 (ATerm t)
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
        ATerm h_47 = t;
        int i_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_47);
          }
        else
          {
            t = h_47;
            {
              ATerm l_47 = t;
              int m_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL,h_107 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_107 = ATgetArgument(t, 0);
                      e_107 = ATgetArgument(t, 1);
                      f_107 = ATgetArgument(t, 2);
                      h_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_107;
                  t = map_1_0(e_14, t);
                  LocalPopChoice(m_47);
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
static ATerm e_14 (ATerm t)
{
  ATerm q_107 = NULL;
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_107 = ATgetArgument(t, 0);
          {
            ATerm r_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_47);
      t = q_107;
    }
  else
    {
      t = p_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_107;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm b_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_108);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm s_47 = t;
  int v_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_47);
    }
  else
    {
      t = s_47;
      {
        ATerm w_47 = t;
        int x_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_47);
          }
        else
          {
            t = w_47;
            {
              ATerm y_47 = t;
              int z_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_108 = ATgetArgument(t, 0);
                      e_108 = ATgetArgument(t, 1);
                      f_108 = ATgetArgument(t, 2);
                      g_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_108;
                  t = map_1_0(j_14, t);
                  LocalPopChoice(z_47);
                }
              else
                {
                  t = y_47;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm n_108 = NULL;
  ATerm a_48 = t;
  int b_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_108 = ATgetArgument(t, 0);
          {
            ATerm c_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_48);
      t = n_108;
    }
  else
    {
      t = a_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_108;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = Cons_2_0(n_14, o_14, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,r_23 = NULL;
  j_109 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_109);
  g_109 = t;
  t = h_109;
  t = topdown_1_0(p_14, t);
  i_109 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_109);
  r_23 = t;
  t = SSLsetAnnotations(r_23, g_109);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL,r_109 = NULL;
  r_109 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      k_109 = ATgetArgument(t, 0);
      l_109 = ATgetArgument(t, 1);
      t = k_109;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = l_109;
        }
      else
        {
          t = r_109;
        }
    }
  else
    {
      t = r_109;
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm e_48 = t;
  int f_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(f_48);
    }
  else
    {
      t = e_48;
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm b_110 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      b_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, b_110)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,u_23 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(a_14, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(b_14, t);
  {
    ATerm g_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
        u_108 = t;
        t = term_j_48;
        v_108 = t;
        t = term_k_48;
        w_108 = t;
        t = term_m_48;
        t = y_10(v_108, w_108, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = u_108;
        LocalPopChoice(i_48);
        {
          ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,t_23 = NULL,s_23 = NULL;
          e_109 = t;
          if(match_cons(t, sym_Specification_1))
            {
              y_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_109);
          x_108 = t;
          t = y_108;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_109 = ATgetFirst((ATermList) t);
              b_109 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_108);
          z_108 = t;
          t = b_109;
          t = Cons_2_0(_id, l_14, t);
          c_109 = t;
          t = (ATerm) ATinsert(CheckATermList(c_109), a_109);
          s_23 = t;
          t = SSLsetAnnotations(s_23, z_108);
          d_109 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, d_109);
          t_23 = t;
          t = SSLsetAnnotations(t_23, x_108);
        }
      }
    else
      {
        t = g_48;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(q_14, t);
  n_106 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_106);
  k_106 = t;
  t = l_106;
  t = fetch_1_0(r_14, t);
  m_106 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_106);
  u_23 = t;
  t = SSLsetAnnotations(u_23, k_106);
  return(t);
}
static ATerm l_10 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm c_110 = NULL;
  t = SSL_fputc(x_39, y_39);
  c_110 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_110);
  return(t);
}
static ATerm m_10 (ATerm b_24, ATerm c_24, ATerm t)
{
  ATerm d_110 = NULL;
  t = SSL_write_term_to_stream_text(b_24, c_24);
  d_110 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_110);
  return(t);
}
static ATerm o_10 (ATerm z_106 (ATerm), ATerm z_172, ATerm h_24, ATerm t)
{
  ATerm e_110 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_172, term_n_48);
  t = s_10(t);
  e_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_110, h_24);
  t = z_106(t);
  t = fclose_0_0(t);
  t = h_24;
  return(t);
}
static ATerm n_10 (ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm f_110 = NULL;
  t = SSL_write_term_to_stream_baf(x_23, y_23);
  f_110 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_110);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if(match_cons(o_48, sym_Stream_1))
        {
          m_110 = ATgetArgument(o_48, 0);
        }
      else
        _fail(t);
      n_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(m_110, n_110, t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_48 = ATgetArgument(t, 0);
      if(match_cons(q_48, sym_Stream_1))
        {
          r_110 = ATgetArgument(q_48, 0);
        }
      else
        _fail(t);
      s_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(r_110, s_110, t);
  o_110 = t;
  t = term_r_22;
  p_110 = t;
  t = o_110;
  if(match_cons(t, sym_Stream_1))
    {
      q_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, o_110);
  t = l_10(p_110, q_110, t);
  return(t);
}
ATerm output_1_0 (ATerm x_125 (ATerm), ATerm t)
{
  ATerm g_110 = NULL,h_110 = NULL;
  t = x_125(t);
  h_110 = t;
  {
    ATerm t_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_110 = NULL,j_110 = NULL;
        t = term_j_48;
        i_110 = t;
        t = term_x_48;
        j_110 = t;
        t = term_y_48;
        t = y_10(i_110, j_110, t);
        LocalPopChoice(u_48);
      }
    else
      {
        t = t_48;
        t = term_z_48;
      }
  }
  g_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_110, h_110);
  {
    ATerm a_49 = t;
    int b_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_110 = NULL,l_110 = NULL;
        t = term_j_48;
        k_110 = t;
        t = term_c_49;
        l_110 = t;
        t = term_d_49;
        t = y_10(k_110, l_110, t);
        t = (ATerm) ATmakeAppl(sym__2, g_110, h_110);
        LocalPopChoice(b_49);
        if(match_cons(t, sym__2))
          {
            ATerm e_49 = ATgetArgument(t, 0);
            ATerm l_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_10(t_14, g_110, h_110, t);
      }
    else
      {
        t = a_49;
        if(match_cons(t, sym__2))
          {
            ATerm m_49 = ATgetArgument(t, 0);
            ATerm v_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_10(u_14, g_110, h_110, t);
      }
  }
  return(t);
}
static ATerm g_111 (ATerm a_111, ATerm t)
{
  t = SSL_fclose(a_111);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL;
  e_111 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_111 = ATgetArgument(t, 0);
      {
        ATerm y_49 = t;
        int z_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_111);
            LocalPopChoice(z_49);
          }
        else
          {
            t = y_49;
            t = g_111(e_111, t);
          }
      }
    }
  else
    {
      t = g_111(e_111, t);
    }
  return(t);
}
static ATerm p_10 (ATerm d_24, ATerm t)
{
  t = SSL_read_term_from_stream(d_24);
  return(t);
}
static ATerm q_10 (ATerm q_38, ATerm r_38, ATerm t)
{
  t = SSL_strcat(q_38, r_38);
  return(t);
}
static ATerm r_10 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm h_111 = NULL;
  t = SSL_fopen(z_39, a_40);
  h_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_111);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_111 = NULL;
  t = SSL_stdin_stream();
  i_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_111);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_111 = NULL;
  t = SSL_stdout_stream();
  j_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_111);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_111 = NULL;
  t = SSL_stderr_stream();
  k_111 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_111);
  return(t);
}
static ATerm x_112 (ATerm s_111, ATerm t)
{
  ATerm v_111 = NULL;
  t = SSL_explode_term(s_111);
  if(match_cons(t, sym__2))
    {
      ATerm a_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_50) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_50 = ATgetArgument(t, 1);
        if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
          {
            v_111 = ATgetFirst((ATermList) b_50);
            {
              ATerm c_50 = (ATerm) ATgetNext((ATermList) b_50);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_111;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_111;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_111;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_111;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_112 (ATerm a_112, ATerm b_112, ATerm c_112, ATerm t)
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL,i_112 = NULL,l_24 = NULL;
  t = SSLgetAnnotations(c_112);
  f_112 = t;
  t = a_112;
  if(match_cons(t, sym_Path_1))
    {
      i_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_112, b_112);
  l_24 = t;
  t = SSLsetAnnotations(l_24, f_112);
  if(match_cons(t, sym__2))
    {
      d_112 = ATgetArgument(t, 0);
      e_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(d_112, e_112, t);
  return(t);
}
static ATerm z_112 (ATerm k_112, ATerm l_112, ATerm m_112, ATerm t)
{
  ATerm n_112 = NULL,o_112 = NULL,p_112 = NULL,s_112 = NULL,m_24 = NULL;
  t = SSLgetAnnotations(m_112);
  p_112 = t;
  t = SSL_is_string(k_112);
  s_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_112, l_112);
  m_24 = t;
  t = SSLsetAnnotations(m_24, p_112);
  if(match_cons(t, sym__2))
    {
      n_112 = ATgetArgument(t, 0);
      o_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(n_112, o_112, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL;
  u_112 = t;
  if(match_cons(t, sym__2))
    {
      v_112 = ATgetArgument(t, 0);
      w_112 = ATgetArgument(t, 1);
      {
        ATerm d_50 = t;
        int f_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_112(u_112, t);
            LocalPopChoice(f_50);
          }
        else
          {
            t = d_50;
            {
              ATerm g_50 = t;
              int k_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_112(v_112, w_112, u_112, t);
                  LocalPopChoice(k_50);
                }
              else
                {
                  t = g_50;
                  t = z_112(v_112, w_112, u_112, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_112(u_112, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL,i_113 = NULL;
  i_113 = t;
  {
    ATerm l_50 = t;
    int n_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_113, term_o_50);
        t = s_10(t);
        LocalPopChoice(n_50);
      }
    else
      {
        t = l_50;
        {
          ATerm l_48 = NULL,p_48 = NULL;
          t = term_p_50;
          p_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_50, i_113);
          t = q_10(p_48, i_113, t);
          l_48 = t;
          t = SSL_perror(l_48);
          _fail(t);
        }
      }
  }
  c_113 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_10(d_113, t);
  b_113 = t;
  t = c_113;
  t = fclose_0_0(t);
  t = b_113;
  return(t);
}
ATerm input_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm q_50 = t;
  int s_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_113 = NULL,m_113 = NULL;
      t = term_j_48;
      l_113 = t;
      t = term_t_50;
      m_113 = t;
      t = term_u_50;
      t = y_10(l_113, m_113, t);
      LocalPopChoice(s_50);
    }
  else
    {
      t = q_50;
      t = term_w_50;
    }
  t = ReadFromFile_0_0(t);
  t = y_125(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL;
  n_113 = t;
  t = term_x_50;
  t = whoami_0_0(t);
  o_113 = t;
  t = term_x_31;
  q_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_50), o_113), term_y_50);
  r_113 = t;
  t = SSL_printnl(q_113, r_113);
  t = term_a_32;
  p_113 = t;
  t = SSL_exit(p_113);
  t = n_113;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm t_113 = NULL;
  t_113 = t;
  if(match_string(t, "-k"))
    {
      t = t_113;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_113;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL;
  u_113 = t;
  t = SSL_string_to_int(u_113);
  v_113 = t;
  t = term_a_51;
  w_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_51, v_113);
  t = b_11(w_113, v_113, t);
  t = u_113;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_14, w_14, x_14, t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm y_113 = NULL;
  y_113 = t;
  if(match_string(t, "-S"))
    {
      t = y_113;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_113;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm z_113 = NULL,a_114 = NULL;
  t = term_e_51;
  z_113 = t;
  t = term_f_51;
  a_114 = t;
  t = term_g_51;
  t = b_11(z_113, a_114, t);
  t = term_h_51;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm b_114 = NULL,c_114 = NULL,d_114 = NULL;
  b_114 = t;
  t = SSL_string_to_int(b_114);
  c_114 = t;
  t = term_e_51;
  d_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_51, c_114);
  t = b_11(d_114, c_114, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_114);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_k_51;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL;
  t = term_l_51;
  e_114 = t;
  t = term_x_50;
  f_114 = t;
  t = term_m_51;
  t = b_11(e_114, f_114, t);
  t = term_o_51;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_p_51;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_14, z_14, a_15, t);
      LocalPopChoice(r_51);
    }
  else
    {
      t = q_51;
      {
        ATerm t_51 = t;
        int u_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_15, g_15, j_15, t);
            LocalPopChoice(u_51);
          }
        else
          {
            t = t_51;
            t = Option_3_0(q_15, r_15, s_15, t);
          }
      }
    }
  return(t);
}
static ATerm b_11 (ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm g_114 = NULL,m_114 = NULL;
  t = term_j_48;
  g_114 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_48, q_49, r_49);
  t = lookup_table_0_1(g_114, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(q_49, r_49, m_114, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_48, q_49, r_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_114 = NULL,r_114 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
      t = term_x_50;
      t = i_0(t);
      s_114 = t;
      t = term_v_51;
      t_114 = t;
      t = term_w_51;
      u_114 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_51, term_w_51, s_114);
      t = z_10(t_114, u_114, s_114, t);
      _fail(t);
    }
  else
    {
      ATerm x_114 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_114 = ATgetFirst((ATermList) t);
          r_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_114;
      t = d_0(t);
      t = term_x_50;
      t = g_0(t);
      x_114 = t;
      t = (ATerm) ATinsert(CheckATermList(r_114), x_114);
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm z_114 = NULL;
  z_114 = t;
  if(match_string(t, "-o"))
    {
      t = z_114;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_114;
    }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL;
  a_115 = t;
  t = term_x_48;
  b_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_48, a_115);
  t = b_11(b_115, a_115, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_115);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = term_y_51;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_15, u_15, v_15, t);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm d_115 = NULL;
  d_115 = t;
  if(match_string(t, "-i"))
    {
      t = d_115;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_115;
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL;
  e_115 = t;
  t = term_t_50;
  f_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_50, e_115);
  t = b_11(f_115, e_115, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_115);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_b_52;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_15, y_15, b_16, t);
  return(t);
}
static ATerm z_10 (ATerm l_54, ATerm m_54, ATerm k_54, ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,m_115 = NULL;
  h_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_52 = ATgetArgument(t, 0);
            ATerm h_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_54, m_54);
        t = y_10(l_54, m_54, t);
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
        t = (ATerm) ATempty;
      }
  }
  i_115 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_54, m_54, (ATerm) ATinsert(CheckATermList(i_115), k_54));
  t = lookup_table_0_1(l_54, t);
  m_115 = t;
  t = (ATerm) ATinsert(CheckATermList(i_115), k_54);
  j_115 = t;
  t = m_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(m_54, j_115, k_115, t);
  t = h_115;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_115 = NULL,y_115 = NULL,z_115 = NULL;
      t = term_x_50;
      t = r_0(t);
      x_115 = t;
      t = term_v_51;
      y_115 = t;
      t = term_w_51;
      z_115 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_51, term_w_51, x_115);
      t = z_10(y_115, z_115, x_115, t);
      _fail(t);
    }
  else
    {
      ATerm d_116 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_115 = ATgetFirst((ATermList) t);
          u_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_115;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_115 = ATgetFirst((ATermList) t);
          w_115 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_115;
      t = o_0(t);
      t = v_115;
      t = p_0(t);
      d_116 = t;
      t = (ATerm) ATinsert(CheckATermList(w_115), d_116);
    }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm f_116 = NULL,g_116 = NULL;
  f_116 = t;
  if(match_string(t, "old"))
    {
      t = f_116;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = f_116;
    }
  t = term_k_48;
  g_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_48, f_116);
  t = b_11(g_116, f_116, t);
  t = term_x_50;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_i_52;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_16, d_16, e_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_50;
  t = whoami_0_0(t);
  i_116 = t;
  t = term_x_31;
  k_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_52), i_116);
  l_116 = t;
  t = SSL_printnl(k_116, l_116);
  t = term_a_32;
  j_116 = t;
  t = SSL_exit(j_116);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_116 = NULL,n_116 = NULL;
  t = term_j_48;
  m_116 = t;
  t = term_k_52;
  n_116 = t;
  t = term_l_52;
  t = y_10(m_116, n_116, t);
  return(t);
}
static ATerm t_10 (ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_42, u_42);
      LocalPopChoice(n_52);
    }
  else
    {
      t = m_52;
      t = SSL_addr(t_42, u_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL;
  p_116 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_116;
      t = h_114(t);
    }
  else
    {
      ATerm u_116 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_116 = ATgetFirst((ATermList) t);
          r_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_116;
      t = foldr_2_0(h_114, i_114, t);
      u_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_116, u_116);
      t = i_114(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(v_48, w_48, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_116 = NULL,r_48 = NULL,s_48 = NULL;
  t = times_0_0(t);
  s_48 = t;
  t = SSL_explode_term(s_48);
  if(match_cons(t, sym__2))
    {
      ATerm q_52 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_48;
  t = foldr_2_0(j_16, k_16, t);
  x_116 = t;
  t = SSL_TicksToSeconds(x_116);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL;
  i_117 = t;
  if(match_cons(t, sym__2))
    {
      j_117 = ATgetArgument(t, 0);
      k_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_117;
        if((j_117 != t))
          {
            _fail(t);
          }
        t = i_117;
        LocalPopChoice(u_52);
      }
    else
      {
        t = r_52;
        t = (ATerm) ATmakeAppl(sym__2, j_117, k_117);
        {
          ATerm w_52 = t;
          int x_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_117, k_117);
              LocalPopChoice(x_52);
            }
          else
            {
              t = w_52;
              t = SSL_gtr(j_117, k_117);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_117, k_117);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_122 (ATerm), ATerm t)
{
  ATerm o_117 = NULL;
  o_117 = t;
  {
    ATerm b_53 = t;
    int c_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL;
        t = term_j_48;
        r_117 = t;
        t = term_e_51;
        s_117 = t;
        t = term_e_53;
        t = y_10(r_117, s_117, t);
        q_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_117, term_a_32);
        t = geq_0_0(t);
        t = o_117;
        t = y_122(t);
        LocalPopChoice(c_53);
      }
    else
      {
        t = b_53;
        t = o_117;
      }
  }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL,x_117 = NULL,y_117 = NULL;
  t = run_time_0_0(t);
  u_117 = t;
  t = term_x_50;
  t = whoami_0_0(t);
  v_117 = t;
  t = term_x_31;
  x_117 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_53), u_117), term_f_53), v_117);
  y_117 = t;
  t = SSL_printnl(x_117, y_117);
  t = (ATerm) ATmakeAppl(sym__2, term_x_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_53), u_117), term_f_53), v_117));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_117 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_51;
  z_117 = t;
  t = SSL_exit(z_117);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL;
  k_118 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_118;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_118 = ATgetArgument(t, 0);
          {
            ATerm w_49 = NULL,p_24 = NULL;
            t = SSLgetAnnotations(k_118);
            w_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_118);
            p_24 = t;
            t = SSLsetAnnotations(p_24, w_49);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_118;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  ATerm h_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_118 = NULL,d_118 = NULL;
      t = term_j_48;
      c_118 = t;
      t = term_j_53;
      d_118 = t;
      t = term_k_53;
      t = y_10(c_118, d_118, t);
      LocalPopChoice(i_53);
    }
  else
    {
      t = h_53;
      t = fetch_1_0(m_16, t);
    }
  t = o_125(t);
  return(t);
}
static ATerm c_11 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm m_118 = NULL;
  t = SSL_hashtable_put(f_58, d_58, e_58);
  m_118 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_118);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_55, ATerm t)
{
  ATerm a_119 = NULL;
  t = table_hashtable_0_0(t);
  a_119 = t;
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_50 = NULL;
        t = a_119;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_11(x_55, e_50, t);
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        {
          ATerm m_50 = NULL;
          t = x_55;
          t = table_create_0_0(t);
          t = a_119;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_11(x_55, m_50, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_58, ATerm m_58, ATerm t)
{
  ATerm d_119 = NULL;
  t = SSL_hashtable_create(l_58, m_58);
  d_119 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_119);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL,i_119 = NULL,j_119 = NULL;
  e_119 = t;
  t = term_p_53;
  i_119 = t;
  t = term_r_53;
  j_119 = t;
  t = e_119;
  t = new_hashtable_0_2(i_119, j_119, t);
  f_119 = t;
  t = e_119;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(e_119, f_119, g_119, t);
  t = e_119;
  return(t);
}
static ATerm v_10 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm k_119 = NULL;
  t = SSL_hashtable_remove(j_58, i_58);
  k_119 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_119);
  return(t);
}
static ATerm w_10 (ATerm n_58, ATerm t)
{
  ATerm l_119 = NULL;
  t = SSL_hashtable_destroy(n_58);
  l_119 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_119);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_119 = NULL;
  t = SSL_table_hashtable();
  m_119 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_119);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL;
  n_119 = t;
  t = table_hashtable_0_0(t);
  o_119 = t;
  t = lookup_table_0_1(n_119, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_10(q_119, t);
  t = o_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_10(n_119, p_119, t);
  t = n_119;
  return(t);
}
ATerm map_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  static ATerm f_120 (ATerm t)
  {
    ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL;
    c_120 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_120;
      }
    else
      {
        ATerm v_50 = NULL,b_51 = NULL,c_51 = NULL,y_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_120 = ATgetFirst((ATermList) t);
            e_120 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_120);
        v_50 = t;
        t = d_120;
        t = i_107(t);
        b_51 = t;
        t = e_120;
        t = f_120(t);
        c_51 = t;
        t = (ATerm) ATinsert(CheckATermList(c_51), b_51);
        y_24 = t;
        t = SSLsetAnnotations(y_24, v_50);
      }
    return(t);
  }
  t = f_120(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_120 = ATgetFirst((ATermList) t);
      j_120 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_120 = NULL,u_120 = NULL;
        static ATerm n_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_120)), not_null(u_120));
          return(t);
        }
        t = j_120;
        t = n_0(t);
        if(((s_120 != NULL) && (s_120 != t)))
          _fail(t);
        else
          s_120 = t;
        t = i_120;
        t = k_0(t);
        if(((u_120 != NULL) && (u_120 != t)))
          _fail(t);
        else
          u_120 = t;
        t = j_120;
        t = reverse_acc_2_0(k_0, n_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_50;
      t = n_0(t);
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL,a_25 = NULL;
  c_121 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_121);
  a_121 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_121);
  a_25 = t;
  t = SSLsetAnnotations(a_25, a_121);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm e_121 = NULL;
  e_121 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_121), term_s_53);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_120 = NULL,x_120 = NULL;
  ATerm u_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_120 = NULL,z_120 = NULL;
      t = term_j_48;
      y_120 = t;
      t = term_k_52;
      z_120 = t;
      t = term_l_52;
      t = y_10(y_120, z_120, t);
      LocalPopChoice(v_53);
    }
  else
    {
      t = u_53;
      t = fetch_1_0(o_16, t);
    }
  t = term_w_53;
  t = echo_0_0(t);
  t = term_v_51;
  w_120 = t;
  t = term_w_51;
  x_120 = t;
  t = term_a_54;
  t = y_10(w_120, x_120, t);
  t = reverse_acc_2_0(_id, p_16, t);
  t = map_1_0(q_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  static ATerm b_122 (ATerm t)
  {
    ATerm y_121 = NULL,z_121 = NULL,a_122 = NULL;
    y_121 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_121 = ATgetFirst((ATermList) t);
        a_122 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_54 = t;
      int c_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_51 = NULL,s_51 = NULL,d_25 = NULL;
          t = SSLgetAnnotations(y_121);
          n_51 = t;
          t = z_121;
          t = s_107(t);
          s_51 = t;
          t = (ATerm) ATinsert(CheckATermList(a_122), s_51);
          d_25 = t;
          t = SSLsetAnnotations(d_25, n_51);
          LocalPopChoice(c_54);
        }
      else
        {
          t = b_54;
          {
            ATerm o_52 = NULL,y_52 = NULL,i_25 = NULL;
            t = SSLgetAnnotations(y_121);
            o_52 = t;
            t = a_122;
            t = b_122(t);
            y_52 = t;
            t = (ATerm) ATinsert(CheckATermList(y_52), z_121);
            i_25 = t;
            t = SSLsetAnnotations(i_25, o_52);
          }
        }
    }
    return(t);
  }
  t = b_122(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL;
  f_122 = t;
  {
    ATerm e_54 = t;
    int f_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_122;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_54 = ATgetFirst((ATermList) t);
                ATerm h_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_122;
          }
        LocalPopChoice(f_54);
      }
    else
      {
        t = e_54;
        t = (ATerm) ATinsert(ATempty, f_122);
      }
  }
  g_122 = t;
  t = term_z_48;
  h_122 = t;
  t = SSL_printnl(h_122, g_122);
  t = f_122;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_122 = NULL,m_122 = NULL;
  t = term_j_48;
  l_122 = t;
  t = term_k_52;
  m_122 = t;
  t = term_l_52;
  t = y_10(l_122, m_122, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_11 (ATerm g_58, ATerm h_58, ATerm t)
{
  t = SSL_hashtable_get(h_58, g_58);
  return(t);
}
static ATerm y_10 (ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm n_122 = NULL;
  t = lookup_table_0_1(e_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(f_56, n_122, t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm p_122 = NULL,q_122 = NULL;
  t = term_i_54;
  p_122 = t;
  t = term_x_50;
  q_122 = t;
  t = term_j_54;
  t = b_11(p_122, q_122, t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_n_54;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL;
  t = term_i_54;
  t_122 = t;
  t = term_x_50;
  u_122 = t;
  t = term_j_54;
  t = b_11(t_122, u_122, t);
  t = term_o_54;
  r_122 = t;
  t = term_x_50;
  s_122 = t;
  t = term_p_54;
  t = b_11(r_122, s_122, t);
  t = term_s_54;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_t_54;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_54 = t;
  int v_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_16, s_16, t_16, t);
      LocalPopChoice(v_54);
    }
  else
    {
      t = u_54;
      t = Option_3_0(u_16, x_16, z_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm v_122 = NULL,w_122 = NULL,x_122 = NULL,z_122 = NULL,a_123 = NULL,b_123 = NULL,m_25 = NULL;
  b_123 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_122 = ATgetFirst((ATermList) t);
      x_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_123);
  v_122 = t;
  t = w_122;
  t = d_86(t);
  z_122 = t;
  t = x_122;
  t = e_86(t);
  a_123 = t;
  t = (ATerm) ATinsert(CheckATermList(a_123), z_122);
  m_25 = t;
  t = SSLsetAnnotations(m_25, v_122);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_127 (ATerm), ATerm t)
{
  ATerm g_123 = NULL,h_123 = NULL,i_123 = NULL,j_123 = NULL,l_123 = NULL,m_123 = NULL,d_29 = NULL;
  g_123 = t;
  {
    ATerm y_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_55;
        t = r_127(t);
        LocalPopChoice(z_54);
      }
    else
      {
        t = y_54;
      }
  }
  t = g_123;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_123 = ATgetFirst((ATermList) t);
      j_123 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_123);
  h_123 = t;
  t = term_k_52;
  m_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_52, i_123);
  t = b_11(m_123, i_123, t);
  t = j_123;
  {
    static ATerm w_123 (ATerm t)
    {
      ATerm b_55 = t;
      int c_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_55 = t;
          int f_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_123 = NULL;
              p_123 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_123;
              LocalPopChoice(f_55);
            }
          else
            {
              t = e_55;
              t = r_127(t);
              t = Cons_2_0(_id, w_123, t);
            }
          LocalPopChoice(c_55);
        }
      else
        {
          t = b_55;
          {
            ATerm s_123 = NULL,t_123 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_123 = ATgetFirst((ATermList) t);
                t_123 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_123), (ATerm) ATmakeAppl(sym_Undefined_1, s_123));
          }
        }
      return(t);
    }
    t = w_123(t);
  }
  l_123 = t;
  t = (ATerm) ATinsert(CheckATermList(l_123), (ATerm) ATmakeAppl(sym_Program_1, i_123));
  d_29 = t;
  t = SSLsetAnnotations(d_29, h_123);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm j_124 = NULL;
  j_124 = t;
  if(match_string(t, "--help"))
    {
      t = j_124;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_124;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_124;
        }
    }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL;
  t = term_j_53;
  k_124 = t;
  t = term_x_50;
  l_124 = t;
  t = term_g_55;
  t = b_11(k_124, l_124, t);
  t = term_h_55;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_i_55;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_127 (ATerm), ATerm t)
{
  ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL;
  d_124 = t;
  t = term_v_51;
  e_124 = t;
  t = term_j_55;
  t = lookup_table_0_1(e_124, t);
  i_124 = t;
  t = term_w_51;
  f_124 = t;
  t = (ATerm) ATempty;
  g_124 = t;
  t = i_124;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(f_124, g_124, h_124, t);
  t = d_124;
  {
    static ATerm f_17 (ATerm t)
    {
      ATerm k_55 = t;
      int l_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_127(t);
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
                t = Option_3_0(g_17, h_17, i_17, t);
                LocalPopChoice(n_55);
              }
            else
              {
                t = m_55;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_17, t);
  }
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_124 = NULL;
        w_124 = t;
        {
          ATerm q_55 = t;
          int r_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_53 = NULL;
              t = w_124;
              {
                ATerm s_55 = t;
                int t_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_53 = NULL,t_53 = NULL;
                    t = term_j_48;
                    m_53 = t;
                    t = term_j_53;
                    t_53 = t;
                    t = term_k_53;
                    t = y_10(m_53, t_53, t);
                    LocalPopChoice(t_55);
                  }
                else
                  {
                    t = s_55;
                    t = fetch_1_0(j_17, t);
                  }
              }
              t = w_124;
              t = default_system_usage_0_0(t);
              t = term_f_51;
              l_53 = t;
              t = SSL_exit(l_53);
              LocalPopChoice(r_55);
            }
          else
            {
              t = q_55;
              {
                ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
                t = term_j_48;
                y_53 = t;
                t = term_i_54;
                z_53 = t;
                t = term_u_55;
                t = y_10(y_53, z_53, t);
                t = w_124;
                t = default_system_about_0_0(t);
                t = term_f_51;
                x_53 = t;
                t = SSL_exit(x_53);
              }
            }
        }
        LocalPopChoice(p_55);
      }
    else
      {
        t = o_55;
        {
          ATerm v_55 = t;
          int w_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_124 = NULL,y_124 = NULL,z_124 = NULL;
              static ATerm k_17 (ATerm t)
              {
                ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,j_29 = NULL;
                c_125 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_125 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_125);
                a_125 = t;
                t = b_125;
                if(((b_124 != NULL) && (b_124 != t)))
                  _fail(t);
                else
                  b_124 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_125);
                j_29 = t;
                t = SSLsetAnnotations(j_29, a_125);
                return(t);
              }
              t = fetch_1_0(k_17, t);
              t = term_x_31;
              y_124 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_124)), term_y_55);
              z_124 = t;
              t = SSL_printnl(y_124, z_124);
              t = (ATerm) ATmakeAppl(sym__2, term_x_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_124)), term_y_55));
              t = default_system_usage_0_0(t);
              t = term_a_32;
              x_124 = t;
              t = SSL_exit(x_124);
              LocalPopChoice(w_55);
            }
          else
            {
              t = v_55;
            }
        }
      }
  }
  c_124 = t;
  t = term_v_51;
  t = table_destroy_0_0(t);
  t = c_124;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t)
{
  ATerm h_125 = NULL,i_125 = NULL,j_125 = NULL,k_125 = NULL,l_125 = NULL;
  t = parse_options_1_0(q_125, t);
  h_125 = t;
  t = term_z_55;
  t = table_create_0_0(t);
  t = term_z_55;
  i_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_55, term_a_56, h_125);
  t = lookup_table_0_1(i_125, t);
  l_125 = t;
  t = term_a_56;
  j_125 = t;
  t = l_125;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(j_125, h_125, k_125, t);
  t = h_125;
  t = s_125(t);
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_125, t);
        LocalPopChoice(c_56);
      }
    else
      {
        t = b_56;
        {
          ATerm d_56 = t;
          int g_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_56);
            }
          else
            {
              t = d_56;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm h_56 = t;
  int i_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(i_56);
    }
  else
    {
      t = h_56;
      {
        ATerm j_56 = t;
        int k_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(k_56);
          }
        else
          {
            t = j_56;
            {
              ATerm l_56 = t;
              int m_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(m_56);
                }
              else
                {
                  t = l_56;
                  {
                    ATerm n_56 = t;
                    int o_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_17, o_17, p_17, t);
                        LocalPopChoice(o_56);
                      }
                    else
                      {
                        t = n_56;
                        {
                          ATerm p_56 = t;
                          int q_56 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(q_56);
                            }
                          else
                            {
                              t = p_56;
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
static ATerm m_17 (ATerm t)
{
  t = input_1_0(q_17, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm n_125 = NULL,p_125 = NULL;
  t = term_c_49;
  n_125 = t;
  t = term_x_50;
  p_125 = t;
  t = term_r_56;
  t = b_11(n_125, p_125, t);
  t = term_s_56;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_t_56;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_17, default_usage_0_0, _id, m_17, t);
  return(t);
}

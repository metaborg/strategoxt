#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_BuildDefault_1;
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
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
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
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Where_1;
Symbol sym_PrimNoArgs_1;
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
Symbol sym_Anno_2;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
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
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
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
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_w_87;
ATerm term_y_86;
ATerm term_v_86;
ATerm term_u_86;
ATerm term_n_86;
ATerm term_f_86;
ATerm term_e_86;
ATerm term_d_86;
ATerm term_o_85;
ATerm term_n_85;
ATerm term_m_85;
ATerm term_g_85;
ATerm term_z_84;
ATerm term_y_84;
ATerm term_x_84;
ATerm term_w_84;
ATerm term_v_84;
ATerm term_t_84;
ATerm term_r_84;
ATerm term_l_84;
ATerm term_j_84;
ATerm term_c_84;
ATerm term_b_84;
ATerm term_w_83;
ATerm term_v_83;
ATerm term_e_83;
ATerm term_d_83;
ATerm term_c_83;
ATerm term_b_83;
ATerm term_p_82;
ATerm term_n_82;
ATerm term_m_82;
ATerm term_l_82;
ATerm term_d_82;
ATerm term_y_81;
ATerm term_w_81;
ATerm term_v_81;
ATerm term_u_81;
ATerm term_t_81;
ATerm term_s_81;
ATerm term_r_81;
ATerm term_q_81;
ATerm term_n_81;
ATerm term_m_81;
ATerm term_g_81;
ATerm term_w_80;
ATerm term_o_80;
ATerm term_l_80;
ATerm term_r_79;
ATerm term_m_79;
ATerm term_l_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_n_77;
ATerm term_j_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_g_77;
ATerm term_d_77;
ATerm term_y_76;
ATerm term_v_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_t_75;
ATerm term_s_75;
ATerm term_r_75;
ATerm term_q_75;
ATerm term_p_75;
ATerm term_l_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_h_75;
ATerm term_n_74;
ATerm term_b_71;
ATerm term_a_71;
ATerm term_z_70;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_c_69;
ATerm term_v_68;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_f_65;
ATerm term_e_65;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_p_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_h_64;
ATerm term_g_64;
ATerm term_b_62;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_s_61;
ATerm term_p_61;
ATerm term_p_60;
ATerm term_n_60;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_v_57;
ATerm term_e_57;
ATerm term_a_57;
ATerm term_y_56;
ATerm term_v_56;
ATerm term_b_56;
ATerm term_x_55;
ATerm term_w_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_h_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_l_54;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_h_49;
ATerm term_e_49;
ATerm term_c_49;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_o_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_j_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_q_46;
ATerm term_o_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_e_46;
ATerm term_o_45;
ATerm term_f_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_n_35;
ATerm term_d_35;
ATerm term_u_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
void init_constant_terms (void)
{
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Sort_2, term_y_41, (ATerm) ATempty);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_41);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_46);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_46);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_Var_1, term_w_46);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Var_1, term_y_46);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Anno_2, term_x_46, term_z_46);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym_Var_1, term_b_47);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_Var_1, term_d_47);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Anno_2, term_c_47, term_j_47);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_46);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Call_2, term_n_47, (ATerm) ATempty);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(sym_BAM_3, term_o_47, term_x_46, term_c_47);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_46);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym_Call_2, term_q_47, (ATerm) ATempty);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_BAM_3, term_r_47, term_z_46, term_j_47);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_t_47);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Var_1, term_v_48);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym__2, term_o_48, (ATerm) ATempty);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Keys_1, term_e_46);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_48);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, term_a_50);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_46);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_55);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(sym__2, term_e_55, (ATerm) ATempty);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_58);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(sym_Op_2, term_s_61, (ATerm) ATempty);
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(sym_Op_2, term_g_64, (ATerm) ATempty);
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_64);
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_64);
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_65);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_65);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_66);
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_69);
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_69);
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_34);
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_75);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_61);
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(sym_Call_2, term_k_75, (ATerm) ATempty);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_76);
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(sym_Call_2, term_p_76, (ATerm) ATempty);
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(sym_Call_2, term_n_74, (ATerm) ATempty);
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_e_46);
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_46);
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_81));
  term_u_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(sym__2, term_v_81, term_z_33);
  ATprotect(&(term_y_81));
  term_y_81 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_82));
  term_n_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_83));
  term_e_83 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_84));
  term_b_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(sym__2, term_l_82, term_m_82);
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(sym__2, term_r_84, term_z_33);
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(sym__2, term_w_84, term_z_33);
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(sym__2, term_b_84, term_z_33);
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(sym__2, term_n_86, term_z_33);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm a_143 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm u_12 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm);
ATerm p_10 (ATerm n_9, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm w_133 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm t_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm spaste_1_0 (ATerm m_142 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm z_12 (ATerm h_79, ATerm g_79, ATerm);
ATerm SVar_1_0 (ATerm d_103 (ATerm), ATerm);
ATerm rename_4_0 (ATerm i_139 (ATerm (ATerm), ATerm), ATerm j_139 (ATerm), ATerm k_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_139 (ATerm (ATerm), ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm b_13 (ATerm k_86, ATerm);
ATerm c_13 (ATerm h_86, ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm repeat_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm d_13 (ATerm f_84, ATerm g_84, ATerm h_84, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_114 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm l_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm i_68 (ATerm x_67, ATerm);
ATerm j_68 (ATerm d_68, ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm g_8 (ATerm);
ATerm q_8 (ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm o_10 (ATerm);
ATerm h_13 (ATerm g_76, ATerm h_76, ATerm);
ATerm y_10 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm i_13 (ATerm m_57, ATerm n_57, ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm i_11 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm k_11 (ATerm);
ATerm p_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm j_13 (ATerm k_83, ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm b_12 (ATerm);
ATerm d_12 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm o_116 (ATerm), ATerm);
ATerm f_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm check_constructors_p__2_0 (ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm);
ATerm n_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm p_14 (ATerm);
ATerm y_14 (ATerm);
ATerm o_15 (ATerm);
ATerm r_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm x_15 (ATerm);
ATerm z_15 (ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm k_16 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm k_13 (ATerm t_82, ATerm v_82, ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm tpaste_1_0 (ATerm i_142 (ATerm), ATerm);
ATerm z_16 (ATerm);
ATerm g_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm n_13 (ATerm t_139 (ATerm), ATerm u_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_72, ATerm n_72, ATerm m_72, ATerm);
ATerm q_17 (ATerm);
ATerm u_17 (ATerm);
ATerm x_17 (ATerm);
ATerm o_13 (ATerm n_139 (ATerm), ATerm o_139 (ATerm (ATerm), ATerm), ATerm g_72, ATerm j_72, ATerm);
ATerm env_alltd_1_0 (ATerm s_118 (ATerm), ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm f_18 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm z_138 (ATerm), ATerm);
ATerm l_18 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm t_13 (ATerm o_141 (ATerm), ATerm e_77, ATerm f_77, ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm y_18 (ATerm);
ATerm l_13 (ATerm k_77, ATerm m_77, ATerm l_77, ATerm);
ATerm f_19 (ATerm);
ATerm u_13 (ATerm i_76, ATerm k_76, ATerm j_76, ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm v_13 (ATerm z_81, ATerm a_82, ATerm b_82, ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm h_20 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm i_20 (ATerm);
ATerm t_126 (ATerm c_125, ATerm g_125, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm w_13 (ATerm y_70, ATerm x_70, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm x_13 (ATerm i_82, ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm y_13 (ATerm i_70, ATerm j_70, ATerm k_70, ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm r_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm x_20 (ATerm);
ATerm a_21 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm j_21 (ATerm);
ATerm l_21 (ATerm);
ATerm n_21 (ATerm);
ATerm r_21 (ATerm);
ATerm x_21 (ATerm);
ATerm y_21 (ATerm);
ATerm b_22 (ATerm);
ATerm g_22 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm j_22 (ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm m_22 (ATerm);
ATerm n_22 (ATerm);
ATerm o_22 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm u_22 (ATerm);
ATerm v_22 (ATerm);
ATerm x_22 (ATerm);
ATerm y_22 (ATerm);
ATerm a_23 (ATerm);
ATerm b_23 (ATerm);
ATerm d_23 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm e_23 (ATerm);
ATerm f_23 (ATerm);
ATerm h_23 (ATerm);
ATerm i_23 (ATerm);
ATerm j_23 (ATerm);
ATerm k_23 (ATerm);
ATerm n_23 (ATerm);
ATerm r_23 (ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm u_23 (ATerm);
ATerm j_24 (ATerm);
ATerm k_24 (ATerm);
ATerm l_24 (ATerm);
ATerm o_24 (ATerm);
ATerm q_24 (ATerm);
ATerm r_24 (ATerm);
ATerm s_24 (ATerm);
ATerm t_24 (ATerm);
ATerm u_24 (ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm g_115 (ATerm), ATerm);
ATerm w_24 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm split_dynamic_rule_1_0 (ATerm h_141 (ATerm), ATerm);
ATerm g_25 (ATerm);
ATerm i_25 (ATerm);
ATerm j_25 (ATerm);
ATerm o_25 (ATerm);
ATerm q_25 (ATerm);
ATerm r_25 (ATerm);
ATerm s_25 (ATerm);
ATerm g_14 (ATerm r_74, ATerm q_74, ATerm);
ATerm listtd_1_0 (ATerm c_121 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm w_25 (ATerm);
ATerm x_25 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm y_25 (ATerm);
ATerm z_25 (ATerm);
ATerm e_26 (ATerm);
ATerm f_26 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm m_14 (ATerm x_123 (ATerm), ATerm h_47, ATerm g_47, ATerm);
ATerm n_14 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm l_47, ATerm k_47, ATerm);
ATerm o_14 (ATerm s_123 (ATerm), ATerm f_47, ATerm e_47, ATerm);
ATerm genzip_4_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm);
ATerm j_26 (ATerm);
ATerm m_26 (ATerm);
ATerm n_26 (ATerm);
ATerm s_14 (ATerm q_656, ATerm v_656, ATerm h_74, ATerm);
ATerm while_not_2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm);
ATerm o_26 (ATerm);
ATerm q_26 (ATerm);
ATerm r_26 (ATerm);
ATerm s_170 (ATerm z_168, ATerm a_169, ATerm b_169, ATerm);
ATerm t_26 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm w_26 (ATerm);
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm d_27 (ATerm);
ATerm free_vars_3_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm a_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm d_114 (ATerm), ATerm);
ATerm v_14 (ATerm g_70, ATerm h_70, ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm u_115 (ATerm), ATerm);
ATerm w_14 (ATerm r_130 (ATerm), ATerm u_58, ATerm s_58, ATerm);
ATerm h_27 (ATerm);
ATerm j_27 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm x_14 (ATerm a_70, ATerm b_70, ATerm);
ATerm end_scope_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm);
ATerm u_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_126 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm j_120 (ATerm), ATerm);
ATerm f_178 (ATerm x_177, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_15 (ATerm m_197, ATerm i_197, ATerm);
ATerm foldr_3_0 (ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm);
ATerm f_28 (ATerm);
ATerm g_28 (ATerm);
ATerm i_28 (ATerm);
ATerm j_28 (ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm k_28 (ATerm);
ATerm o_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm u_28 (ATerm);
ATerm v_28 (ATerm);
ATerm w_28 (ATerm);
ATerm x_28 (ATerm);
ATerm z_28 (ATerm);
ATerm a_29 (ATerm);
ATerm b_29 (ATerm);
ATerm c_29 (ATerm);
ATerm e_29 (ATerm);
ATerm g_29 (ATerm);
ATerm h_29 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm u_120 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm i_29 (ATerm);
ATerm unquote_chars_1_0 (ATerm x_128 (ATerm), ATerm);
ATerm k_195 (ATerm h_191, ATerm i_191, ATerm);
ATerm l_195 (ATerm o_191, ATerm p_191, ATerm);
ATerm m_195 (ATerm v_191, ATerm w_191, ATerm x_191, ATerm);
ATerm n_195 (ATerm d_192, ATerm e_192, ATerm);
ATerm j_29 (ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm r_29 (ATerm);
ATerm s_29 (ATerm);
ATerm t_29 (ATerm);
ATerm v_29 (ATerm);
ATerm w_29 (ATerm);
ATerm x_29 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm b_30 (ATerm);
ATerm c_30 (ATerm);
ATerm d_30 (ATerm);
ATerm e_30 (ATerm);
ATerm f_30 (ATerm);
ATerm i_30 (ATerm);
ATerm j_30 (ATerm);
ATerm k_30 (ATerm);
ATerm l_30 (ATerm);
ATerm m_30 (ATerm);
ATerm n_30 (ATerm);
ATerm o_30 (ATerm);
ATerm p_30 (ATerm);
ATerm q_30 (ATerm);
ATerm r_30 (ATerm);
ATerm s_30 (ATerm);
ATerm t_30 (ATerm);
ATerm u_30 (ATerm);
ATerm v_30 (ATerm);
ATerm w_30 (ATerm);
ATerm x_30 (ATerm);
ATerm y_30 (ATerm);
ATerm z_30 (ATerm);
ATerm a_31 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm h_15 (ATerm g_60, ATerm h_60, ATerm);
ATerm i_15 (ATerm u_63, ATerm v_63, ATerm);
ATerm k_15 (ATerm k_132 (ATerm), ATerm a_501, ATerm y_63, ATerm);
ATerm j_15 (ATerm q_63, ATerm r_63, ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm e_31 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_135 (ATerm), ATerm);
ATerm o_201 (ATerm i_201, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_15 (ATerm w_63, ATerm);
ATerm m_15 (ATerm i_60, ATerm j_60, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_202 (ATerm y_201, ATerm);
ATerm a_203 (ATerm c_202, ATerm d_202, ATerm e_202, ATerm);
ATerm b_203 (ATerm m_202, ATerm n_202, ATerm o_202, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_31 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_120 (ATerm), ATerm);
ATerm g_15 (ATerm w_54, ATerm x_54, ATerm);
ATerm debug_1_0 (ATerm i_132 (ATerm), ATerm);
ATerm g_31 (ATerm);
ATerm h_31 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_133 (ATerm), ATerm);
ATerm i_31 (ATerm);
ATerm m_31 (ATerm);
ATerm n_31 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm r_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm u_31 (ATerm);
ATerm v_31 (ATerm);
ATerm w_31 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_15 (ATerm x_64, ATerm y_64, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_31 (ATerm);
ATerm y_31 (ATerm);
ATerm z_31 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_15 (ATerm v_69, ATerm w_69, ATerm u_69, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm a_32 (ATerm);
ATerm b_32 (ATerm);
ATerm c_32 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_15 (ATerm g_57, ATerm h_57, ATerm);
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_32 (ATerm);
ATerm g_32 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_133 (ATerm), ATerm);
ATerm h_32 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_32 (ATerm);
ATerm need_help_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm p_15 (ATerm m_71, ATerm n_71, ATerm);
ATerm r_32 (ATerm);
ATerm s_32 (ATerm);
ATerm u_32 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_32 (ATerm);
ATerm x_32 (ATerm);
ATerm y_32 (ATerm);
ATerm b_33 (ATerm);
ATerm c_33 (ATerm);
ATerm d_33 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_138 (ATerm), ATerm);
ATerm f_33 (ATerm);
ATerm g_33 (ATerm);
ATerm h_33 (ATerm);
ATerm i_33 (ATerm);
ATerm parse_options_1_0 (ATerm m_138 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm);
ATerm l_33 (ATerm);
ATerm n_33 (ATerm);
ATerm p_33 (ATerm);
ATerm q_33 (ATerm);
ATerm u_33 (ATerm);
ATerm iowrap_3_0 (ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm);
ATerm y_33 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL,p_0 = NULL,s_0 = NULL,t_0 = NULL;
  h_0 = t;
  t = term_z_33;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_a_34;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_34), j_0), term_b_34);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_d_34;
  p_0 = t;
  t = SSL_exit(p_0);
  t = h_0;
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,b_1 = NULL;
  z_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      b_1 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
      {
        ATerm h_1 = NULL,l_1 = NULL,p_1 = NULL,r_1 = NULL;
        t = z_0;
        t = new_0_0(t);
        h_1 = t;
        t = new_0_0(t);
        l_1 = t;
        t = new_0_0(t);
        p_1 = t;
        t = new_0_0(t);
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_1), p_1), l_1), h_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, h_1), (ATerm) ATmakeAppl(sym_Var_1, p_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, b_1, (ATerm)ATmakeAppl(sym_Var_1, h_1), (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_BAM_3, y_0, (ATerm)ATmakeAppl(sym_Var_1, p_1), (ATerm) ATmakeAppl(sym_Var_1, r_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_Var_1, l_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_1 = ATgetArgument(t, 0);
          {
            ATerm s_1 = NULL,u_1 = NULL,x_1 = NULL,a_2 = NULL;
            t = not_null(z_0);
            t = new_0_0(t);
            if(((x_1 != NULL) && (x_1 != t)))
              _fail(t);
            else
              x_1 = t;
            t = not_null(b_1);
            {
              ATerm v_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((s_1 != NULL) && (s_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_1 = ATgetArgument(t, 0);
                    if(((u_1 != NULL) && (u_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_1));
                return(t);
              }
              t = oncetd_1_0(v_0, t);
              if(((a_2 != NULL) && (a_2 != t)))
                _fail(t);
              else
                a_2 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_1)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(s_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_1))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_2)))));
            }
          }
        }
      else
        {
          ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              if(((b_1 != NULL) && (b_1 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(z_0);
          t = new_0_0(t);
          if(((f_2 != NULL) && (f_2 != t)))
            _fail(t);
          else
            f_2 = t;
          t = new_0_0(t);
          if(((g_2 != NULL) && (g_2 != t)))
            _fail(t);
          else
            g_2 = t;
          t = not_null(b_1);
          {
            ATerm w_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((d_2 != NULL) && (d_2 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_2 = ATgetArgument(t, 0);
                  if(((e_2 != NULL) && (e_2 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    e_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_2));
              return(t);
            }
            t = oncetd_1_0(w_0, t);
            if(((h_2 != NULL) && (h_2 != t)))
              _fail(t);
            else
              h_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_2)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_2))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_2)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_2)), (ATerm) ATmakeAppl(sym_Op_2, term_i_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_2)), not_null(d_2)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  if(((j_2 != NULL) && (j_2 != t)))
    _fail(t);
  else
    j_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
        t = not_null(j_2);
        t = new_0_0(t);
        if(((q_2 != NULL) && (q_2 != t)))
          _fail(t);
        else
          q_2 = t;
        t = not_null(k_2);
        {
          ATerm c_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((o_2 != NULL) && (o_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_2 = ATgetArgument(t, 0);
                if(((p_2 != NULL) && (p_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_2)), not_null(o_2));
            return(t);
          }
          t = pat_td_1_0(c_1, t);
          if(((r_2 != NULL) && (r_2 != t)))
            _fail(t);
          else
            r_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_2)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_2)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_2))))));
        }
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_2 = NULL,u_2 = NULL,x_2 = NULL;
              t = not_null(j_2);
              t = new_0_0(t);
              if(((u_2 != NULL) && (u_2 != t)))
                _fail(t);
              else
                u_2 = t;
              t = not_null(k_2);
              {
                ATerm e_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_2));
                  return(t);
                }
                t = pat_td_1_0(e_1, t);
                if(((x_2 != NULL) && (x_2 != t)))
                  _fail(t);
                else
                  x_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_2))), not_null(t_2))));
              }
              ;
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              {
                ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
                t = not_null(j_2);
                t = new_0_0(t);
                if(((b_3 != NULL) && (b_3 != t)))
                  _fail(t);
                else
                  b_3 = t;
                t = not_null(k_2);
                {
                  ATerm f_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_3 != NULL) && (a_3 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_3 = ATgetArgument(t, 0);
                        if(((z_2 != NULL) && (z_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_3));
                    return(t);
                  }
                  t = pat_td_1_0(f_1, t);
                  if(((c_3 != NULL) && (c_3 != t)))
                    _fail(t);
                  else
                    c_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_3)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_3)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_3))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_2)), not_null(a_3)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm a_143 (ATerm), ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_143(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      {
        ATerm q_6 = NULL,r_6 = NULL,t_6 = NULL,v_6 = NULL;
        if(((r_6 != NULL) && (r_6 != t)))
          _fail(t);
        else
          r_6 = t;
        if(match_cons(t, sym_Op_2))
          {
            t_6 = ATgetArgument(t, 0);
            v_6 = ATgetArgument(t, 1);
            {
              ATerm i_1 = NULL,o_1 = NULL,o_3 = NULL;
              t = SSLgetAnnotations(not_null(r_6));
              if(((i_1 != NULL) && (i_1 != t)))
                _fail(t);
              else
                i_1 = t;
              t = not_null(v_6);
              {
                ATerm k_1 (ATerm t)
                {
                  t = pat_td_1_0(a_143, t);
                  return(t);
                }
                t = fetch_1_0(k_1, t);
                if(((o_1 != NULL) && (o_1 != t)))
                  _fail(t);
                else
                  o_1 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_6), not_null(o_1));
                if(((o_3 != NULL) && (o_3 != t)))
                  _fail(t);
                else
                  o_3 = t;
                t = SSLsetAnnotations(not_null(o_3), not_null(i_1));
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                t_6 = ATgetArgument(t, 0);
                v_6 = ATgetArgument(t, 1);
                {
                  ATerm q_34 = t;
                  int r_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 = NULL,h_3 = NULL,p_3 = NULL;
                      t = SSLgetAnnotations(not_null(r_6));
                      e_3 = t;
                      t = not_null(v_6);
                      t = pat_td_1_0(a_143, t);
                      h_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(t_6), h_3);
                      p_3 = t;
                      t = SSLsetAnnotations(p_3, e_3);
                      ;
                      LocalPopChoice(r_34);
                    }
                  else
                    {
                      t = q_34;
                      {
                        ATerm t_3 = NULL,b_4 = NULL,q_3 = NULL;
                        t = SSLgetAnnotations(not_null(r_6));
                        t_3 = t;
                        t = not_null(t_6);
                        t = pat_td_1_0(a_143, t);
                        b_4 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, b_4, not_null(v_6));
                        q_3 = t;
                        t = SSLsetAnnotations(q_3, t_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    t_6 = ATgetArgument(t, 0);
                    v_6 = ATgetArgument(t, 1);
                    q_6 = ATgetArgument(t, 2);
                    {
                      ATerm d_5 = NULL,q_5 = NULL,s_3 = NULL;
                      t = SSLgetAnnotations(not_null(r_6));
                      if(((d_5 != NULL) && (d_5 != t)))
                        _fail(t);
                      else
                        d_5 = t;
                      t = not_null(q_6);
                      {
                        ATerm n_1 (ATerm t)
                        {
                          t = pat_td_1_0(a_143, t);
                          return(t);
                        }
                        t = fetch_1_0(n_1, t);
                        if(((q_5 != NULL) && (q_5 != t)))
                          _fail(t);
                        else
                          q_5 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(t_6), not_null(v_6), not_null(q_5));
                        if(((s_3 != NULL) && (s_3 != t)))
                          _fail(t);
                        else
                          s_3 = t;
                        t = SSLsetAnnotations(not_null(s_3), not_null(d_5));
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        t_6 = ATgetArgument(t, 0);
                        v_6 = ATgetArgument(t, 1);
                        q_6 = ATgetArgument(t, 2);
                        {
                          ATerm p_6 = NULL,y_6 = NULL,w_3 = NULL;
                          t = SSLgetAnnotations(not_null(r_6));
                          if(((p_6 != NULL) && (p_6 != t)))
                            _fail(t);
                          else
                            p_6 = t;
                          t = not_null(q_6);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              t = pat_td_1_0(a_143, t);
                              return(t);
                            }
                            t = fetch_1_0(v_1, t);
                            if(((y_6 != NULL) && (y_6 != t)))
                              _fail(t);
                            else
                              y_6 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(t_6), not_null(v_6), not_null(y_6));
                            if(((w_3 != NULL) && (w_3 != t)))
                              _fail(t);
                            else
                              w_3 = t;
                            t = SSLsetAnnotations(not_null(w_3), not_null(p_6));
                          }
                        }
                      }
                    else
                      {
                        ATerm z_7 = NULL,e_8 = NULL,x_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            if(((t_6 != NULL) && (t_6 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              t_6 = ATgetArgument(t, 0);
                            if(((v_6 != NULL) && (v_6 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              v_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(not_null(r_6));
                        z_7 = t;
                        t = not_null(v_6);
                        t = pat_td_1_0(a_143, t);
                        e_8 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, not_null(t_6), e_8);
                        x_3 = t;
                        t = SSLsetAnnotations(x_3, z_7);
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
  ATerm j_7 = NULL,k_7 = NULL;
  if(((j_7 != NULL) && (j_7 != t)))
    _fail(t);
  else
    j_7 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((k_7 != NULL) && (k_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 = NULL,n_7 = NULL,q_7 = NULL,r_7 = NULL;
        t = not_null(j_7);
        t = new_0_0(t);
        if(((q_7 != NULL) && (q_7 != t)))
          _fail(t);
        else
          q_7 = t;
        t = not_null(k_7);
        {
          ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_7 = ATgetArgument(t, 0);
                if(((n_7 != NULL) && (n_7 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_7));
            return(t);
          }
          t = pat_td_1_0(y_1, t);
          if(((r_7 != NULL) && (r_7 != t)))
            _fail(t);
          else
            r_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_7)), not_null(m_7))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_7))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_7))));
        }
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        {
          ATerm y_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_7 = NULL,u_7 = NULL,w_7 = NULL;
              t = not_null(j_7);
              t = new_0_0(t);
              if(((u_7 != NULL) && (u_7 != t)))
                _fail(t);
              else
                u_7 = t;
              t = not_null(k_7);
              {
                ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((s_7 != NULL) && (s_7 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_7));
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
                if(((w_7 != NULL) && (w_7 != t)))
                  _fail(t);
                else
                  w_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_7))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_7))));
              }
              ;
              LocalPopChoice(z_34);
            }
          else
            {
              t = y_34;
              {
                ATerm x_7 = NULL,y_7 = NULL,c_8 = NULL,f_8 = NULL;
                t = not_null(j_7);
                t = new_0_0(t);
                if(((c_8 != NULL) && (c_8 != t)))
                  _fail(t);
                else
                  c_8 = t;
                t = not_null(k_7);
                {
                  ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((x_7 != NULL) && (x_7 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          x_7 = ATgetArgument(t, 0);
                        if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_8));
                    return(t);
                  }
                  t = pat_td_1_0(i_2, t);
                  if(((f_8 != NULL) && (f_8 != t)))
                    _fail(t);
                  else
                    f_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_7), not_null(y_7), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_8)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_8))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm c_35 = t;
  if((PushChoice() == 0))
    {
      ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,f_4 = NULL;
      t_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_8);
      r_8 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_8);
      f_4 = t;
      t = SSLsetAnnotations(f_4, r_8);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_35;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_8 = ATgetFirst((ATermList) t);
      w_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_8, w_8);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if(match_cons(e_35, sym__2))
        {
          y_8 = ATgetArgument(e_35, 0);
          z_8 = ATgetArgument(e_35, 1);
        }
      else
        _fail(t);
      {
        ATerm f_35 = ATgetArgument(t, 1);
        if(match_cons(f_35, sym__2))
          {
            a_9 = ATgetArgument(f_35, 0);
            b_9 = ATgetArgument(f_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_9), y_8), (ATerm) ATinsert(CheckATermList(b_9), z_8));
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_9 = ATgetFirst((ATermList) t);
      d_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_9, d_9);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      if(match_cons(g_35, sym__2))
        {
          e_9 = ATgetArgument(g_35, 0);
          f_9 = ATgetArgument(g_35, 1);
        }
      else
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(match_cons(h_35, sym__2))
          {
            g_9 = ATgetArgument(h_35, 0);
            h_9 = ATgetArgument(h_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_9), e_9), (ATerm) ATinsert(CheckATermList(h_9), f_9));
  return(t);
}
ATerm u_12 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,i_4 = NULL;
  t = s_88;
  t = fetch_1_0(l_2, t);
  t = s_88;
  t = genzip_4_0(m_2, n_2, s_2, LiftPrimArg_0_0, t);
  p_8 = t;
  if(match_cons(t, sym__2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_8);
  k_8 = t;
  t = l_8;
  t = concat_0_0(t);
  n_8 = t;
  t = m_8;
  t = genzip_4_0(v_2, w_2, y_2, _id, t);
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_8, o_8);
  i_4 = t;
  t = SSLsetAnnotations(i_4, k_8);
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      {
        ATerm j_35 = ATgetArgument(t, 1);
        if(match_cons(j_35, sym__2))
          {
            i_8 = ATgetArgument(j_35, 0);
            j_8 = ATgetArgument(j_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, h_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_8), (ATerm) ATmakeAppl(sym_CallT_3, q_88, r_88, j_8)));
  return(t);
}
ATerm p_10 (ATerm n_9, ATerm t)
{
  ATerm p_9 = NULL;
  t = n_9;
  {
    ATerm k_35 = t;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL,u_9 = NULL,z_9 = NULL,p_4 = NULL;
        z_9 = t;
        if(match_cons(t, sym_Var_1))
          {
            u_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_9);
        q_9 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, u_9);
        p_4 = t;
        t = SSLsetAnnotations(p_4, q_9);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_35;
      }
    t = new_0_0(t);
    p_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, p_9), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_9), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_9)))), (ATerm) ATmakeAppl(sym_Var_1, p_9)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_10 = ATgetArgument(t, 0);
      {
        ATerm l_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_10(e_10, t);
            ;
            LocalPopChoice(m_35);
          }
        else
          {
            t = l_35;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_n_35, (ATerm) ATmakeAppl(sym_Var_1, f_10)));
          }
      }
    }
  else
    {
      t = p_10(e_10, t);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm o_35 = t;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,r_4 = NULL;
      j_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_10);
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
      r_4 = t;
      t = SSLsetAnnotations(r_4, h_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_35;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_10 = ATgetFirst((ATermList) t);
      l_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(match_cons(p_35, sym__2))
        {
          m_10 = ATgetArgument(p_35, 0);
          n_10 = ATgetArgument(p_35, 1);
        }
      else
        _fail(t);
      {
        ATerm q_35 = ATgetArgument(t, 1);
        if(match_cons(q_35, sym__2))
          {
            q_10 = ATgetArgument(q_35, 0);
            r_10 = ATgetArgument(q_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_10), m_10), (ATerm) ATinsert(CheckATermList(r_10), n_10));
  return(t);
}
ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_10 = ATgetFirst((ATermList) t);
      t_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_10, t_10);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if(match_cons(u_35, sym__2))
        {
          u_10 = ATgetArgument(u_35, 0);
          v_10 = ATgetArgument(u_35, 1);
        }
      else
        _fail(t);
      {
        ATerm v_35 = ATgetArgument(t, 1);
        if(match_cons(v_35, sym__2))
          {
            w_10 = ATgetArgument(v_35, 0);
            z_10 = ATgetArgument(v_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_10), u_10), (ATerm) ATinsert(CheckATermList(z_10), v_10));
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm w_35 = t;
  if((PushChoice() == 0))
    {
      ATerm f_14 = NULL,q_14 = NULL,r_14 = NULL,u_4 = NULL;
      r_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_14);
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_14);
      u_4 = t;
      t = SSLsetAnnotations(u_4, f_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_35;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm r_3 (ATerm t)
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
ATerm u_3 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(match_cons(x_35, sym__2))
        {
          b_15 = ATgetArgument(x_35, 0);
          c_15 = ATgetArgument(x_35, 1);
        }
      else
        _fail(t);
      {
        ATerm z_35 = ATgetArgument(t, 1);
        if(match_cons(z_35, sym__2))
          {
            d_15 = ATgetArgument(z_35, 0);
            e_15 = ATgetArgument(z_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_15), b_15), (ATerm) ATinsert(CheckATermList(e_15), c_15));
  return(t);
}
ATerm v_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm f_15 = NULL,v_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_15 = ATgetFirst((ATermList) t);
      v_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_15, v_15);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm w_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if(match_cons(a_36, sym__2))
        {
          w_15 = ATgetArgument(a_36, 0);
          y_15 = ATgetArgument(a_36, 1);
        }
      else
        _fail(t);
      {
        ATerm b_36 = ATgetArgument(t, 1);
        if(match_cons(b_36, sym__2))
          {
            a_16 = ATgetArgument(b_36, 0);
            b_16 = ATgetArgument(b_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_16), w_15), (ATerm) ATinsert(CheckATermList(b_16), y_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      g_16 = ATgetArgument(t, 2);
      {
        ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,g_10 = NULL,s_4 = NULL;
        t = g_16;
        t = fetch_1_0(d_3, t);
        t = g_16;
        t = genzip_4_0(f_3, g_3, i_3, LiftPrimArg_0_0, t);
        g_10 = t;
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            b_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_10);
        y_9 = t;
        t = a_10;
        t = concat_0_0(t);
        c_10 = t;
        t = b_10;
        t = genzip_4_0(j_3, k_3, l_3, _id, t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, d_10);
        s_4 = t;
        t = SSLsetAnnotations(s_4, y_9);
        if(match_cons(t, sym__2))
          {
            v_9 = ATgetArgument(t, 0);
            {
              ATerm d_36 = ATgetArgument(t, 1);
              if(match_cons(d_36, sym__2))
                {
                  w_9 = ATgetArgument(d_36, 0);
                  x_9 = ATgetArgument(d_36, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_9), (ATerm) ATmakeAppl(sym_PrimT_3, i_16, j_16, x_9)));
      }
    }
  else
    {
      ATerm v_12 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,c_14 = NULL,d_14 = NULL,v_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          i_16 = ATgetArgument(t, 0);
          j_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_16;
      t = fetch_1_0(m_3, t);
      t = j_16;
      t = genzip_4_0(n_3, r_3, u_3, LiftPrimArg_0_0, t);
      d_14 = t;
      if(match_cons(t, sym__2))
        {
          e_13 = ATgetArgument(t, 0);
          f_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_14);
      a_13 = t;
      t = e_13;
      t = concat_0_0(t);
      g_13 = t;
      t = f_13;
      t = genzip_4_0(v_3, y_3, z_3, _id, t);
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_13, c_14);
      v_4 = t;
      t = SSLsetAnnotations(v_4, a_13);
      if(match_cons(t, sym__2))
        {
          v_12 = ATgetArgument(t, 0);
          {
            ATerm e_36 = ATgetArgument(t, 1);
            if(match_cons(e_36, sym__2))
              {
                x_12 = ATgetArgument(e_36, 0);
                y_12 = ATgetArgument(e_36, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, v_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_12), (ATerm) ATmakeAppl(sym_PrimT_3, i_16, (ATerm)ATempty, y_12)));
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
    }
  t = repeat_1_0(c_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,h_17 = NULL;
            a_17 = t;
            if(match_cons(t, sym_CallT_3))
              {
                b_17 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
                h_17 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_17;
            t = u_12(b_17, c_17, h_17, t);
            ;
            LocalPopChoice(l_36);
          }
        else
          {
            t = k_36;
            {
              ATerm m_36 = t;
              int n_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(n_36);
                }
              else
                {
                  t = m_36;
                  {
                    ATerm o_36 = t;
                    int p_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
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
                              ATerm s_36 = t;
                              int t_36 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        m_17 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(m_17);
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      n_17 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_36 = t;
                                        int w_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm v_17 = NULL,w_17 = NULL;
                                            t = not_null(m_17);
                                            {
                                              ATerm d_4 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm x_36 = ATgetArgument(t, 0);
                                                    if(match_cons(x_36, sym_Match_1))
                                                      {
                                                        if(((v_17 != NULL) && (v_17 != ATgetArgument(x_36, 0))))
                                                          _fail(ATgetArgument(x_36, 0));
                                                        else
                                                          v_17 = ATgetArgument(x_36, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(v_17);
                                                return(t);
                                              }
                                              t = pat_td_1_0(d_4, t);
                                              if(((w_17 != NULL) && (w_17 != t)))
                                                _fail(t);
                                              else
                                                w_17 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, not_null(w_17));
                                            }
                                            ;
                                            LocalPopChoice(w_36);
                                          }
                                        else
                                          {
                                            t = v_36;
                                            t = not_null(n_17);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          n_17 = ATgetArgument(t, 0);
                                          o_17 = ATgetArgument(t, 1);
                                          {
                                            ATerm y_36 = t;
                                            int z_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_18 = NULL,e_18 = NULL;
                                                t = not_null(m_17);
                                                {
                                                  ATerm e_4 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm b_37 = ATgetArgument(t, 0);
                                                        if(match_cons(b_37, sym_Match_1))
                                                          {
                                                            if(((d_18 != NULL) && (d_18 != ATgetArgument(b_37, 0))))
                                                              _fail(ATgetArgument(b_37, 0));
                                                            else
                                                              d_18 = ATgetArgument(b_37, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(d_18);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(e_4, t);
                                                  if(((e_18 != NULL) && (e_18 != t)))
                                                    _fail(t);
                                                  else
                                                    e_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(e_18));
                                                }
                                                ;
                                                LocalPopChoice(z_36);
                                              }
                                            else
                                              {
                                                t = y_36;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, not_null(n_17), not_null(o_17));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm i_18 = NULL,j_18 = NULL;
                                          t = not_null(m_17);
                                          {
                                            ATerm g_4 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm c_37 = ATgetArgument(t, 0);
                                                  if(match_cons(c_37, sym_Match_1))
                                                    {
                                                      if(((i_18 != NULL) && (i_18 != ATgetArgument(c_37, 0))))
                                                        _fail(ATgetArgument(c_37, 0));
                                                      else
                                                        i_18 = ATgetArgument(c_37, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(i_18);
                                              return(t);
                                            }
                                            t = pat_td_1_0(g_4, t);
                                            if(((j_18 != NULL) && (j_18 != t)))
                                              _fail(t);
                                            else
                                              j_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(j_18));
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(t_36);
                                }
                              else
                                {
                                  t = s_36;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(r_36);
                            }
                          else
                            {
                              t = q_36;
                              t = Expl_0_0(t);
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
  t = topdown_1_0(a_4, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm w_133 (ATerm), ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  {
    ATerm g_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        t = term_j_37;
        t = get_config_0_0(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_18, term_k_37);
        t = geq_0_0(t);
        t = m_18;
        t = w_133(t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = g_37;
        t = m_18;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(((ATgetType(l_37) != AT_LIST) || !(ATisEmpty(l_37))))
        _fail(t);
      {
        ATerm o_37 = ATgetArgument(t, 1);
        if(((ATgetType(o_37) != AT_LIST) || !(ATisEmpty(o_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_37 = ATgetArgument(t, 0);
      if(((ATgetType(p_37) == AT_LIST) && !(ATisEmpty(p_37))))
        {
          w_16 = ATgetFirst((ATermList) p_37);
          x_16 = (ATerm) ATgetNext((ATermList) p_37);
        }
      else
        _fail(t);
      {
        ATerm q_37 = ATgetArgument(t, 1);
        if(((ATgetType(q_37) == AT_LIST) && !(ATisEmpty(q_37))))
          {
            y_16 = ATgetFirst((ATermList) q_37);
            d_17 = (ATerm) ATgetNext((ATermList) q_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_16, y_16), (ATerm) ATmakeAppl(sym__2, x_16, d_17));
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_17), e_17);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm p_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,y_17 = NULL;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_17;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm t_37 = ATgetArgument(t, 0);
            r_17 = ATgetArgument(t, 1);
            s_17 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(s_37);
        t = (ATerm) ATmakeAppl(sym_SDef_3, y_17, r_17, s_17);
      }
    else
      {
        t = r_37;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm u_37 = ATgetArgument(t, 0);
            r_17 = ATgetArgument(t, 1);
            s_17 = ATgetArgument(t, 2);
            t_17 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_17, r_17, s_17, t_17);
      }
  }
  return(t);
}
ATerm m_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      if(((ATgetType(w_37) != AT_LIST) || !(ATisEmpty(w_37))))
        _fail(t);
      {
        ATerm y_37 = ATgetArgument(t, 1);
        if(((ATgetType(y_37) != AT_LIST) || !(ATisEmpty(y_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
        {
          g_19 = ATgetFirst((ATermList) z_37);
          h_19 = (ATerm) ATgetNext((ATermList) z_37);
        }
      else
        _fail(t);
      {
        ATerm a_38 = ATgetArgument(t, 1);
        if(((ATgetType(a_38) == AT_LIST) && !(ATisEmpty(a_38))))
          {
            i_19 = ATgetFirst((ATermList) a_38);
            j_19 = (ATerm) ATgetNext((ATermList) a_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_19, i_19), (ATerm) ATmakeAppl(sym__2, h_19, j_19));
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_19), k_19);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm n_19 = NULL,p_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_19;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_19);
      }
    else
      {
        t = b_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_38 = ATgetArgument(t, 0);
            p_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_19, p_19);
      }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(((ATgetType(g_38) != AT_LIST) || !(ATisEmpty(g_38))))
        _fail(t);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(((ATgetType(h_38) != AT_LIST) || !(ATisEmpty(h_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,v_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      if(((ATgetType(i_38) == AT_LIST) && !(ATisEmpty(i_38))))
        {
          s_21 = ATgetFirst((ATermList) i_38);
          t_21 = (ATerm) ATgetNext((ATermList) i_38);
        }
      else
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(((ATgetType(j_38) == AT_LIST) && !(ATisEmpty(j_38))))
          {
            v_21 = ATgetFirst((ATermList) j_38);
            w_21 = (ATerm) ATgetNext((ATermList) j_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_21, v_21), (ATerm) ATmakeAppl(sym__2, t_21, w_21));
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      z_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_22), z_21);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm e_22 = NULL,h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_22;
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_22);
      }
    else
      {
        t = k_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_38 = ATgetArgument(t, 0);
            h_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_22, h_22);
      }
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      if(((ATgetType(o_38) != AT_LIST) || !(ATisEmpty(o_38))))
        _fail(t);
      {
        ATerm p_38 = ATgetArgument(t, 1);
        if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,c_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
        {
          w_23 = ATgetFirst((ATermList) q_38);
          x_23 = (ATerm) ATgetNext((ATermList) q_38);
        }
      else
        _fail(t);
      {
        ATerm r_38 = ATgetArgument(t, 1);
        if(((ATgetType(r_38) == AT_LIST) && !(ATisEmpty(r_38))))
          {
            c_24 = ATgetFirst((ATermList) r_38);
            g_24 = (ATerm) ATgetNext((ATermList) r_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_23, c_24), (ATerm) ATmakeAppl(sym__2, x_23, g_24));
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_24), m_24);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_24 = NULL,z_24 = NULL,f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_24;
  {
    ATerm t_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_25);
      }
    else
      {
        t = t_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_38 = ATgetArgument(t, 0);
            z_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_25, z_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
      {
        ATerm p_16 = NULL,s_16 = NULL,t_16 = NULL,b_5 = NULL;
        t = SSLgetAnnotations(q_27);
        p_16 = t;
        t = r_27;
        t = m_142(t);
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, t_16);
        t = genzip_4_0(h_4, j_4, k_4, l_4, t);
        s_16 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_16, s_27);
        b_5 = t;
        t = SSLsetAnnotations(b_5, p_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_27 = ATgetArgument(t, 0);
          s_27 = ATgetArgument(t, 1);
          m_27 = ATgetArgument(t, 2);
          {
            ATerm z_18 = NULL,d_19 = NULL,e_19 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(q_27);
            z_18 = t;
            t = s_27;
            t = m_142(t);
            e_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_27, e_19);
            t = genzip_4_0(m_4, n_4, o_4, q_4, t);
            d_19 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, r_27, d_19, m_27);
            c_5 = t;
            t = SSLsetAnnotations(c_5, z_18);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              r_27 = ATgetArgument(t, 0);
              s_27 = ATgetArgument(t, 1);
              m_27 = ATgetArgument(t, 2);
              n_27 = ATgetArgument(t, 3);
              {
                ATerm y_20 = NULL,p_21 = NULL,q_21 = NULL,g_5 = NULL;
                t = SSLgetAnnotations(q_27);
                y_20 = t;
                t = s_27;
                t = m_142(t);
                q_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_27, q_21);
                t = genzip_4_0(t_4, w_4, x_4, y_4, t);
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_27, p_21, m_27, n_27);
                g_5 = t;
                t = SSLsetAnnotations(g_5, y_20);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  r_27 = ATgetArgument(t, 0);
                  s_27 = ATgetArgument(t, 1);
                  m_27 = ATgetArgument(t, 2);
                  n_27 = ATgetArgument(t, 3);
                  {
                    ATerm g_23 = NULL,l_23 = NULL,m_23 = NULL,h_5 = NULL;
                    t = SSLgetAnnotations(q_27);
                    g_23 = t;
                    t = s_27;
                    t = m_142(t);
                    m_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_27, m_23);
                    t = genzip_4_0(z_4, a_5, e_5, f_5, t);
                    l_23 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, r_27, l_23, m_27, n_27);
                    h_5 = t;
                    t = SSLsetAnnotations(h_5, g_23);
                  }
                }
              else
                {
                  ATerm p_26 = NULL,s_26 = NULL,i_5 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      r_27 = ATgetArgument(t, 0);
                      s_27 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_27);
                  p_26 = t;
                  t = r_27;
                  t = m_142(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_26 = ATgetFirst((ATermList) t);
                      {
                        ATerm z_38 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, s_26, s_27);
                  i_5 = t;
                  t = SSLsetAnnotations(i_5, p_26);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
      {
        ATerm e_27 = NULL,p_27 = NULL,v_27 = NULL,o_5 = NULL;
        t = SSLgetAnnotations(l_32);
        e_27 = t;
        t = m_32;
        t = n_142(t);
        p_27 = t;
        t = n_32;
        t = n_142(t);
        v_27 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_27, v_27);
        o_5 = t;
        t = SSLsetAnnotations(o_5, e_27);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_32 = ATgetArgument(t, 0);
          n_32 = ATgetArgument(t, 1);
          e_32 = ATgetArgument(t, 2);
          {
            ATerm h_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,r_5 = NULL;
            t = SSLgetAnnotations(l_32);
            h_28 = t;
            t = m_32;
            t = p_142(t);
            l_28 = t;
            t = n_32;
            t = p_142(t);
            m_28 = t;
            t = e_32;
            t = n_142(t);
            n_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, l_28, m_28, n_28);
            r_5 = t;
            t = SSLsetAnnotations(r_5, h_28);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_32 = ATgetArgument(t, 0);
              n_32 = ATgetArgument(t, 1);
              e_32 = ATgetArgument(t, 2);
              f_32 = ATgetArgument(t, 3);
              {
                ATerm y_28 = NULL,d_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,t_5 = NULL;
                t = SSLgetAnnotations(l_32);
                y_28 = t;
                t = m_32;
                t = p_142(t);
                d_29 = t;
                t = n_32;
                t = p_142(t);
                k_29 = t;
                t = e_32;
                t = p_142(t);
                l_29 = t;
                t = f_32;
                t = n_142(t);
                m_29 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_29, k_29, l_29, m_29);
                t_5 = t;
                t = SSLsetAnnotations(t_5, y_28);
              }
            }
          else
            {
              ATerm a_30 = NULL,g_30 = NULL,h_30 = NULL,u_5 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  m_32 = ATgetArgument(t, 0);
                  n_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_32);
              a_30 = t;
              t = m_32;
              t = p_142(t);
              g_30 = t;
              t = n_32;
              t = n_142(t);
              h_30 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, g_30, h_30);
              u_5 = t;
              t = SSLsetAnnotations(u_5, a_30);
            }
        }
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm v_32 = NULL;
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_32 = ATgetArgument(t, 0);
          {
            ATerm g_39 = ATgetArgument(t, 1);
          }
          {
            ATerm n_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_39);
      t = v_32;
    }
  else
    {
      t = d_39;
      if(match_cons(t, sym_SDefT_4))
        {
          v_32 = ATgetArgument(t, 0);
          {
            ATerm p_39 = ATgetArgument(t, 1);
          }
          {
            ATerm q_39 = ATgetArgument(t, 2);
          }
          {
            ATerm x_39 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_32;
    }
  return(t);
}
ATerm z_12 (ATerm h_79, ATerm g_79, ATerm t)
{
  t = h_79;
  t = map_1_0(j_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm d_103 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,v_33 = NULL,x_33 = NULL,c_6 = NULL;
  x_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_33);
  s_33 = t;
  t = t_33;
  t = d_103(t);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, v_33);
  c_6 = t;
  t = SSLsetAnnotations(c_6, s_33);
  return(t);
}
ATerm rename_4_0 (ATerm i_139 (ATerm (ATerm), ATerm), ATerm j_139 (ATerm), ATerm k_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_34 = NULL;
  ATerm b_35 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
      if(((v_34 != NULL) && (v_34 != t)))
        _fail(t);
      else
        v_34 = t;
      if(match_cons(t, sym__2))
        {
          if(((w_34 != NULL) && (w_34 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            w_34 = ATgetArgument(t, 0);
          if(((x_34 != NULL) && (x_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 (ATerm t)
            {
              ATerm a_35 = NULL;
              a_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_35, not_null(x_34));
              t = lookup_0_0(t);
              return(t);
            }
            t = not_null(w_34);
            t = i_139(l_5, t);
            ;
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
            {
              ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
              t = not_null(v_34);
              t = o_13(j_139, l_139, not_null(w_34), not_null(x_34), t);
              if(match_cons(t, sym__3))
                {
                  j_31 = ATgetArgument(t, 0);
                  k_31 = ATgetArgument(t, 1);
                  l_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_13(b_35, k_139, j_31, k_31, l_31, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(k_5, t);
    return(t);
  }
  if(((g_34 != NULL) && (g_34 != t)))
    _fail(t);
  else
    g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_34), (ATerm) ATempty);
  t = b_35(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = a_40;
      {
        ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,c_36 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            r_35 = ATgetArgument(t, 0);
            s_35 = ATgetArgument(t, 1);
            t_35 = ATgetArgument(t, 2);
            c_36 = ATgetArgument(t, 3);
            t = t_35;
            t = map_1_0(n_5, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                r_35 = ATgetArgument(t, 0);
                s_35 = ATgetArgument(t, 1);
                t_35 = ATgetArgument(t, 2);
                c_36 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = t_35;
            t = map_1_0(p_5, t);
          }
      }
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_36 = NULL;
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_36 = ATgetArgument(t, 0);
          {
            ATerm g_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_40);
      t = j_36;
    }
  else
    {
      t = c_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_36;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm a_37 = NULL;
  ATerm h_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_37 = ATgetArgument(t, 0);
          {
            ATerm p_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_40);
      t = a_37;
    }
  else
    {
      t = h_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_37;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,m_37 = NULL,n_37 = NULL;
  d_37 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      t = d_37;
      t = z_12(e_37, f_37, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_37 = ATgetArgument(t, 0);
          f_37 = ATgetArgument(t, 1);
          m_37 = ATgetArgument(t, 2);
          t = f_37;
          t = map_1_0(v_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              e_37 = ATgetArgument(t, 0);
              f_37 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, e_37);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_37 = ATgetArgument(t, 0);
                  f_37 = ATgetArgument(t, 1);
                  m_37 = ATgetArgument(t, 2);
                  n_37 = ATgetArgument(t, 3);
                  t = f_37;
                  t = map_1_0(w_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_37 = ATgetArgument(t, 0);
                      f_37 = ATgetArgument(t, 1);
                      m_37 = ATgetArgument(t, 2);
                      n_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_37;
                  t = map_1_0(x_5, t);
                }
            }
        }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm v_37 = NULL;
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_37 = ATgetArgument(t, 0);
          {
            ATerm s_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_40);
      t = v_37;
    }
  else
    {
      t = q_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_37;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm u_38 = NULL;
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_38 = ATgetArgument(t, 0);
          {
            ATerm v_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_40);
      t = u_38;
    }
  else
    {
      t = t_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_38;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm o_39 = NULL;
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_39 = ATgetArgument(t, 0);
          {
            ATerm y_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_40);
      t = o_39;
    }
  else
    {
      t = w_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_39;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, m_5, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, s_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm b_13 (ATerm k_86, ATerm t)
{
  ATerm t_39 = NULL,v_39 = NULL;
  t = not_null(k_86);
  {
    ATerm y_5 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm z_40 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_40) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm a_41 = ATgetArgument(t, 1);
            if(((ATgetType(a_41) == AT_LIST) && !(ATisEmpty(a_41))))
              {
                ATerm b_41 = ATgetFirst((ATermList) a_41);
                if(match_cons(b_41, sym_Var_1))
                  {
                    ATerm d_41 = ATgetArgument(b_41, 0);
                    if(match_cons(d_41, sym_ListVar_1))
                      {
                        if(((t_39 != NULL) && (t_39 != ATgetArgument(d_41, 0))))
                          _fail(ATgetArgument(d_41, 0));
                        else
                          t_39 = ATgetArgument(d_41, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm c_41 = (ATerm) ATgetNext((ATermList) a_41);
                  if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
                    {
                      ATerm e_41 = ATgetFirst((ATermList) c_41);
                      if(match_cons(e_41, sym_Op_2))
                        {
                          ATerm g_41 = ATgetArgument(e_41, 0);
                          if((ATgetSymbol((ATermAppl) g_41) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm h_41 = ATgetArgument(e_41, 1);
                            if(((ATgetType(h_41) != AT_LIST) || !(ATisEmpty(h_41))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm f_41 = (ATerm) ATgetNext((ATermList) c_41);
                        if(((ATgetType(f_41) != AT_LIST) || !(ATisEmpty(f_41))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_39));
      return(t);
    }
    t = oncetd_1_0(y_5, t);
    if(((v_39 != NULL) && (v_39 != t)))
      _fail(t);
    else
      v_39 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_39));
  }
  return(t);
}
ATerm c_13 (ATerm h_86, ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  t = not_null(h_86);
  {
    ATerm z_5 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm i_41 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_41) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_41 = ATgetArgument(t, 1);
            if(((ATgetType(j_41) == AT_LIST) && !(ATisEmpty(j_41))))
              {
                ATerm k_41 = ATgetFirst((ATermList) j_41);
                if(match_cons(k_41, sym_Var_1))
                  {
                    ATerm m_41 = ATgetArgument(k_41, 0);
                    if(match_cons(m_41, sym_ListVar_1))
                      {
                        if(((l_40 != NULL) && (l_40 != ATgetArgument(m_41, 0))))
                          _fail(ATgetArgument(m_41, 0));
                        else
                          l_40 = ATgetArgument(m_41, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm l_41 = (ATerm) ATgetNext((ATermList) j_41);
                  if(((ATgetType(l_41) == AT_LIST) && !(ATisEmpty(l_41))))
                    {
                      ATerm n_41 = ATgetFirst((ATermList) l_41);
                      if(match_cons(n_41, sym_Op_2))
                        {
                          ATerm p_41 = ATgetArgument(n_41, 0);
                          if((ATgetSymbol((ATermAppl) p_41) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm q_41 = ATgetArgument(n_41, 1);
                            if(((ATgetType(q_41) != AT_LIST) || !(ATisEmpty(q_41))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm o_41 = (ATerm) ATgetNext((ATermList) l_41);
                        if(((ATgetType(o_41) != AT_LIST) || !(ATisEmpty(o_41))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_40));
      return(t);
    }
    t = oncetd_1_0(z_5, t);
    if(((m_40 != NULL) && (m_40 != t)))
      _fail(t);
    else
      m_40 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_40));
  }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  h_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_42 = ATgetFirst((ATermList) t);
      j_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,q_32 = NULL,t_32 = NULL,z_32 = NULL,a_33 = NULL,h_6 = NULL,f_6 = NULL;
        t = SSLgetAnnotations(h_42);
        t_32 = t;
        t = i_42;
        t = q_0(t);
        z_32 = t;
        t = (ATerm) ATinsert(CheckATermList(j_42), z_32);
        f_6 = t;
        t = SSLsetAnnotations(f_6, t_32);
        a_33 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_32 = ATgetFirst((ATermList) t);
            k_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_33);
        i_32 = t;
        t = k_32;
        {
          ATerm t_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_0, t);
              ;
              LocalPopChoice(v_41);
            }
          else
            {
              t = t_41;
            }
          q_32 = t;
          t = (ATerm) ATinsert(CheckATermList(q_32), j_32);
          h_6 = t;
          t = SSLsetAnnotations(h_6, i_32);
        }
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        {
          ATerm o_33 = NULL,r_33 = NULL,j_6 = NULL;
          t = SSLgetAnnotations(h_42);
          o_33 = t;
          t = j_42;
          t = map1_1_0(q_0, t);
          r_33 = t;
          t = (ATerm) ATinsert(CheckATermList(r_33), i_42);
          j_6 = t;
          t = SSLsetAnnotations(j_6, o_33);
        }
      }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm h_44 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_44, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42));
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  o_44 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_44 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_44, term_a_42);
    }
  else
    {
      t = o_44;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm f_45 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_45, term_a_42);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  i_45 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_45 = ATgetArgument(t, 0);
      {
        ATerm b_42 = t;
        int e_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_45, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42));
            ;
            LocalPopChoice(e_42);
          }
        else
          {
            t = b_42;
            t = i_45;
          }
      }
    }
  else
    {
      t = i_45;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm b_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_46, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42));
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  d_46 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_46 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, c_46, term_a_42);
    }
  else
    {
      t = d_46;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,i_43 = NULL,j_43 = NULL,l_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_43, m_43);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_43 = ATgetArgument(t, 0);
          t = l_43;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_43 = ATgetFirst((ATermList) t);
              d_43 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_43, (ATerm) ATmakeAppl(sym_LChoices_1, d_43));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_42;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_43 = ATgetArgument(t, 0);
              t = l_43;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_43 = ATgetFirst((ATermList) t);
                  d_43 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, c_43, (ATerm) ATmakeAppl(sym_Choices_1, d_43));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_42;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_43 = ATgetArgument(t, 0);
                  t = l_43;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_43 = ATgetFirst((ATermList) t);
                      d_43 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_43, (ATerm) ATmakeAppl(sym_Seqs_1, d_43));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_n_35;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_43 = ATgetArgument(t, 0);
                      m_43 = ATgetArgument(t, 1);
                      j_43 = ATgetArgument(t, 2);
                      i_43 = ATgetArgument(t, 3);
                      {
                        ATerm e_44 = NULL,g_44 = NULL;
                        t = m_43;
                        t = map1_1_0(a_6, t);
                        e_44 = t;
                        t = j_43;
                        t = map1_1_0(b_6, t);
                        g_44 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_43, e_44, g_44, i_43);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          l_43 = ATgetArgument(t, 0);
                          m_43 = ATgetArgument(t, 1);
                          j_43 = ATgetArgument(t, 2);
                          i_43 = ATgetArgument(t, 3);
                          {
                            ATerm g_42 = t;
                            int k_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_45 = NULL,e_45 = NULL;
                                t = j_43;
                                t = map1_1_0(d_6, t);
                                c_45 = t;
                                t = m_43;
                                t = map_1_0(e_6, t);
                                e_45 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_43, e_45, c_45, i_43);
                                ;
                                LocalPopChoice(k_42);
                              }
                            else
                              {
                                t = g_42;
                                {
                                  ATerm s_45 = NULL,a_46 = NULL;
                                  t = m_43;
                                  t = map1_1_0(g_6, t);
                                  s_45 = t;
                                  t = j_43;
                                  t = map_1_0(i_6, t);
                                  a_46 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_43, s_45, a_46, i_43);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              l_43 = ATgetArgument(t, 0);
                              m_43 = ATgetArgument(t, 1);
                              j_43 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, m_43, (ATerm) ATmakeAppl(sym_Op_2, term_i_34, (ATerm) ATinsert(ATinsert(ATempty, j_43), l_43)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  l_43 = ATgetArgument(t, 0);
                                  m_43 = ATgetArgument(t, 1);
                                  j_43 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_43)), l_43), (ATerm) ATmakeAppl(sym_Build_1, m_43)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      l_43 = ATgetArgument(t, 0);
                                      m_43 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_43, (ATerm) ATmakeAppl(sym_Match_1, m_43));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          l_43 = ATgetArgument(t, 0);
                                          m_43 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_43), m_43);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              l_43 = ATgetArgument(t, 0);
                                              m_43 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_43), l_43);
                                        }
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
ATerm repeat_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm i_47 (ATerm t)
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_113(t);
        t = i_47(t);
        ;
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
      }
    return(t);
  }
  t = i_47(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,l_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
      g_48 = ATgetArgument(t, 2);
      {
        ATerm e_34 = NULL,x_6 = NULL;
        t = SSLgetAnnotations(l_48);
        e_34 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_48, f_48, g_48);
        x_6 = t;
        t = SSLsetAnnotations(x_6, e_34);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = l_48;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm n_42 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_42;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,o_50 = NULL;
  k_50 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
      j_50 = ATgetArgument(t, 2);
      {
        ATerm i_35 = NULL,e_7 = NULL;
        t = SSLgetAnnotations(k_50);
        i_35 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_50, o_50, j_50);
        e_7 = t;
        t = SSLsetAnnotations(e_7, i_35);
      }
    }
  else
    {
      ATerm y_35 = NULL,f_7 = NULL;
      if(match_cons(t, sym_App_2))
        {
          l_50 = ATgetArgument(t, 0);
          o_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_50);
      y_35 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, l_50, o_50);
      f_7 = t;
      t = SSLsetAnnotations(f_7, y_35);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm o_42 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_42;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      y_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_50;
  if(match_cons(t, sym_StratRule_3))
    {
      z_50 = ATgetArgument(t, 0);
      a_51 = ATgetArgument(t, 1);
      b_51 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_51), (ATerm) ATmakeAppl(sym_Where_1, b_51)), z_50));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          z_50 = ATgetArgument(t, 0);
          a_51 = ATgetArgument(t, 1);
          b_51 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_50;
      t = pureterm_0_0(t);
      t = a_51;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, a_51)), (ATerm) ATmakeAppl(sym_Where_1, b_51)), (ATerm) ATmakeAppl(sym_Match_1, z_50)));
    }
  return(t);
}
ATerm d_13 (ATerm f_84, ATerm g_84, ATerm h_84, ATerm t)
{
  ATerm q_51 = NULL,s_51 = NULL,o_52 = NULL,t_52 = NULL,w_52 = NULL,x_52 = NULL,z_52 = NULL;
  t = new_0_0(t);
  if(((w_52 != NULL) && (w_52 != t)))
    _fail(t);
  else
    w_52 = t;
  t = not_null(f_84);
  {
    ATerm m_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_42 = ATgetArgument(t, 0);
          if(match_cons(p_42, sym_Var_1))
            {
              if(((t_52 != NULL) && (t_52 != ATgetArgument(p_42, 0))))
                _fail(ATgetArgument(p_42, 0));
              else
                t_52 = ATgetArgument(p_42, 0);
            }
          else
            _fail(t);
          if(((s_51 != NULL) && (s_51 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_51 = ATgetArgument(t, 1);
          {
            ATerm r_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_52));
      return(t);
    }
    t = oncetd_1_0(m_6, t);
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = not_null(g_84);
    {
      ATerm n_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm u_42 = ATgetArgument(t, 0);
            if(match_cons(u_42, sym_Var_1))
              {
                if(((t_52 != NULL) && (t_52 != ATgetArgument(u_42, 0))))
                  _fail(ATgetArgument(u_42, 0));
                else
                  t_52 = ATgetArgument(u_42, 0);
              }
            else
              _fail(t);
            if(((o_52 != NULL) && (o_52 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              o_52 = ATgetArgument(t, 1);
            {
              ATerm v_42 = ATgetArgument(t, 2);
              if(match_cons(v_42, sym_CallT_3))
                {
                  if(((q_51 != NULL) && (q_51 != ATgetArgument(v_42, 0))))
                    _fail(ATgetArgument(v_42, 0));
                  else
                    q_51 = ATgetArgument(v_42, 0);
                  {
                    ATerm w_42 = ATgetArgument(v_42, 1);
                    if(((ATgetType(w_42) != AT_LIST) || !(ATisEmpty(w_42))))
                      _fail(t);
                  }
                  {
                    ATerm z_42 = ATgetArgument(v_42, 2);
                    if(((ATgetType(z_42) != AT_LIST) || !(ATisEmpty(z_42))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_52));
        return(t);
      }
      t = oncetd_1_0(n_6, t);
      if(((z_52 != NULL) && (z_52 != t)))
        _fail(t);
      else
        z_52 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_52)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_52), not_null(z_52), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_84), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(q_51), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_51), not_null(o_52), term_n_35))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_52)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_52)))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_43 = t;
      int h_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,z_53 = NULL,a_54 = NULL;
          t_53 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_53 = ATgetArgument(t, 0);
              t = z_53;
              if(match_cons(t, sym_Rule_3))
                {
                  q_53 = ATgetArgument(t, 0);
                  r_53 = ATgetArgument(t, 1);
                  s_53 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_53;
              t = d_13(q_53, r_53, s_53, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_36 = NULL,h_37 = NULL,x_10 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  z_53 = ATgetArgument(t, 0);
                  a_54 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_53);
              u_36 = t;
              t = a_54;
              t = desugarRule_0_0(t);
              h_37 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_53, h_37);
              x_10 = t;
              t = SSLsetAnnotations(x_10, u_36);
            }
          ;
          LocalPopChoice(h_43);
        }
      else
        {
          t = g_43;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    t = topdown_1_0(c_114, t);
    return(t);
  }
  t = c_114(t);
  t = SRTS_all(o_6, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm e_56 = NULL;
  ATerm k_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_56 = ATgetArgument(t, 0);
          {
            ATerm o_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_43);
      t = e_56;
    }
  else
    {
      t = k_43;
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
ATerm u_6 (ATerm t)
{
  ATerm p_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_56);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_56 = ATgetArgument(t, 0);
            t = r_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_56 = ATgetArgument(t, 0);
                s_56 = ATgetArgument(t, 1);
                t_56 = ATgetArgument(t, 2);
                u_56 = ATgetArgument(t, 3);
                t = t_56;
                t = map_1_0(z_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_56 = ATgetArgument(t, 0);
                    s_56 = ATgetArgument(t, 1);
                    t_56 = ATgetArgument(t, 2);
                    u_56 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_56;
                t = map_1_0(a_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm l_57 = NULL;
  ATerm r_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_57 = ATgetArgument(t, 0);
          {
            ATerm u_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_43);
      t = l_57;
    }
  else
    {
      t = r_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_57;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm c_58 = NULL;
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_58 = ATgetArgument(t, 0);
          {
            ATerm y_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_43);
      t = c_58;
    }
  else
    {
      t = w_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_58;
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm g_59 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_59);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm z_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_44);
    }
  else
    {
      t = z_43;
      {
        ATerm i_59 = NULL,k_59 = NULL,q_59 = NULL,r_59 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_59 = ATgetArgument(t, 0);
            t = i_59;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_59 = ATgetArgument(t, 0);
                k_59 = ATgetArgument(t, 1);
                q_59 = ATgetArgument(t, 2);
                r_59 = ATgetArgument(t, 3);
                t = q_59;
                t = map_1_0(d_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_59 = ATgetArgument(t, 0);
                    k_59 = ATgetArgument(t, 1);
                    q_59 = ATgetArgument(t, 2);
                    r_59 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_59;
                t = map_1_0(g_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm o_60 = NULL;
  ATerm b_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_60 = ATgetArgument(t, 0);
          {
            ATerm d_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_44);
      t = o_60;
    }
  else
    {
      t = b_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_60;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm b_61 = NULL;
  ATerm f_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_61 = ATgetArgument(t, 0);
          {
            ATerm j_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_44);
      t = b_61;
    }
  else
    {
      t = f_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_61;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm j_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_55 = ATgetArgument(t, 0);
      q_55 = ATgetArgument(t, 1);
      r_55 = ATgetArgument(t, 2);
      j_55 = ATgetArgument(t, 3);
      {
        ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
        t = r_55;
        t = map_1_0(s_6, t);
        y_55 = t;
        t = j_55;
        t = free_vars_3_0(u_6, w_6, tboundin_3_0, t);
        a_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_56, y_55);
        t = diff_0_0(t);
        z_55 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_55, q_55, r_55, (ATerm) ATmakeAppl(sym_Scope_2, z_55, j_55));
      }
    }
  else
    {
      ATerm b_59 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          p_55 = ATgetArgument(t, 0);
          q_55 = ATgetArgument(t, 1);
          r_55 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_55;
      t = free_vars_3_0(b_7, c_7, tboundin_3_0, t);
      b_59 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_55, q_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, b_59, r_55));
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm t_62 = NULL;
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_62 = ATgetArgument(t, 0);
          {
            ATerm m_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_44);
      t = t_62;
    }
  else
    {
      t = k_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_62;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm a_63 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_63);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm h_63 = NULL,l_63 = NULL,o_63 = NULL,p_63 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_63 = ATgetArgument(t, 0);
            t = h_63;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_63 = ATgetArgument(t, 0);
                l_63 = ATgetArgument(t, 1);
                o_63 = ATgetArgument(t, 2);
                p_63 = ATgetArgument(t, 3);
                t = o_63;
                t = map_1_0(o_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_63 = ATgetArgument(t, 0);
                    l_63 = ATgetArgument(t, 1);
                    o_63 = ATgetArgument(t, 2);
                    p_63 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_63;
                t = map_1_0(p_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm q_64 = NULL;
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_64 = ATgetArgument(t, 0);
          {
            ATerm t_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_44);
      t = q_64;
    }
  else
    {
      t = r_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_64;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm t_65 = NULL;
  ATerm u_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_65 = ATgetArgument(t, 0);
          {
            ATerm x_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_44);
      t = t_65;
    }
  else
    {
      t = u_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_65;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm h_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_66);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_44);
    }
  else
    {
      t = y_44;
      {
        ATerm n_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_66 = ATgetArgument(t, 0);
            t = n_66;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_66 = ATgetArgument(t, 0);
                s_66 = ATgetArgument(t, 1);
                t_66 = ATgetArgument(t, 2);
                u_66 = ATgetArgument(t, 3);
                t = t_66;
                t = map_1_0(a_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_66 = ATgetArgument(t, 0);
                    s_66 = ATgetArgument(t, 1);
                    t_66 = ATgetArgument(t, 2);
                    u_66 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_66;
                t = map_1_0(b_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm e_67 = NULL;
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_67 = ATgetArgument(t, 0);
          {
            ATerm d_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_45);
      t = e_67;
    }
  else
    {
      t = a_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_67;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm o_67 = NULL;
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_67 = ATgetArgument(t, 0);
          {
            ATerm m_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_45);
      t = o_67;
    }
  else
    {
      t = j_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_67;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm r_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      t_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
      v_61 = ATgetArgument(t, 2);
      r_61 = ATgetArgument(t, 3);
      {
        ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
        t = v_61;
        t = map_1_0(h_7, t);
        o_62 = t;
        t = r_61;
        t = free_vars_3_0(i_7, l_7, tboundin_3_0, t);
        q_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_62, o_62);
        t = diff_0_0(t);
        p_62 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_61, u_61, v_61, (ATerm) ATmakeAppl(sym_Scope_2, p_62, (ATerm) ATmakeAppl(sym_SRule_1, r_61)));
      }
    }
  else
    {
      ATerm g_66 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          t_61 = ATgetArgument(t, 0);
          u_61 = ATgetArgument(t, 1);
          v_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_61;
      t = free_vars_3_0(t_7, v_7, tboundin_3_0, t);
      g_66 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, t_61, u_61, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, g_66, (ATerm) ATmakeAppl(sym_SRule_1, v_61)));
    }
  return(t);
}
ATerm i_68 (ATerm x_67, ATerm t)
{
  ATerm x_37 = NULL;
  t = term_o_45;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, x_67);
  t = v_14(x_37, x_67, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm p_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_45) != ATmakeSymbol("r_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_z_33;
  return(t);
}
ATerm j_68 (ATerm d_68, ATerm t)
{
  ATerm d_38 = NULL;
  t = term_o_45;
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, d_68);
  t = v_14(d_38, d_68, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_45) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_z_33;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm f_68 = NULL,h_68 = NULL;
  f_68 = t;
  if(match_cons(t, sym__2))
    {
      ATerm r_45 = ATgetArgument(t, 0);
      h_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_68;
  if(match_int(t, 0))
    {
      ATerm t_45 = t;
      int z_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_68(f_68, t);
          ;
          LocalPopChoice(z_45);
        }
      else
        {
          t = t_45;
          t = j_68(f_68, t);
        }
    }
  else
    {
      t = i_68(f_68, t);
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL;
  if(match_cons(t, sym__2))
    {
      h_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(h_39, i_39, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_o_45;
  return(t);
}
ATerm x_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_39 = ATgetFirst((ATermList) t);
      k_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_39, k_39);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_46 = ATgetArgument(t, 0);
      if(match_cons(f_46, sym__2))
        {
          l_39 = ATgetArgument(f_46, 0);
          m_39 = ATgetArgument(f_46, 1);
        }
      else
        _fail(t);
      {
        ATerm g_46 = ATgetArgument(t, 1);
        if(match_cons(g_46, sym__2))
          {
            r_39 = ATgetArgument(g_46, 0);
            s_39 = ATgetArgument(g_46, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_39), l_39), (ATerm) ATinsert(CheckATermList(s_39), m_39));
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm u_39 = NULL;
  t = new_0_0(t);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, u_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42)), u_39);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_39), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_o_45;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  h_71 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      i_71 = ATgetArgument(t, 0);
      j_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_71;
  if(match_cons(t, sym_FunType_2))
    {
      k_71 = ATgetArgument(t, 0);
      g_71 = ATgetArgument(t, 1);
      {
        ATerm s_38 = NULL,v_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,f_39 = NULL;
        t = k_71;
        t = foldr_3_0(d_8, g_8, q_8, t);
        s_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_71, s_38);
        {
          ATerm h_46 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_46;
            }
          t = (ATerm) ATmakeAppl(sym__2, i_71, s_38);
          c_39 = t;
          t = term_j_46;
          f_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_71, s_38), term_j_46);
          t = w_14(u_8, c_39, f_39, t);
          t = k_71;
          t = genzip_4_0(x_8, i_9, j_9, k_9, t);
          if(match_cons(t, sym__2))
            {
              v_38 = ATgetArgument(t, 0);
              a_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_39;
          t = map_1_0(l_9, t);
          b_39 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_71, v_38, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, i_71, b_39));
        }
      }
    }
  else
    {
      ATerm e_40 = NULL,f_40 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm l_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_71, term_e_46);
      {
        ATerm n_46 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_46;
          }
        t = (ATerm) ATmakeAppl(sym__2, i_71, term_e_46);
        e_40 = t;
        t = term_q_46;
        f_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_71, term_e_46), term_q_46);
        t = w_14(m_9, e_40, f_40, t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_71, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, i_71, (ATerm) ATempty));
      }
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_o_45;
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = filter_1_0(s_9, t);
  t = concat_0_0(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm l_72 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      l_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_72;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RDtoSD_0_0(t);
      ;
      LocalPopChoice(s_46);
    }
  else
    {
      t = r_46;
      t = DeclareVariables_0_0(t);
    }
  t = topdown_1_0(o_10, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t_72 = t;
  if(match_cons(t, sym_Call_2))
    {
      r_72 = ATgetArgument(t, 0);
      s_72 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, r_72, s_72, (ATerm) ATempty);
    }
  else
    {
      t = t_72;
    }
  return(t);
}
ATerm h_13 (ATerm g_76, ATerm h_76, ATerm t)
{
  ATerm r_71 = NULL,a_72 = NULL,b_72 = NULL;
  t = g_76;
  t = scope_2_0(o_9, r_9, t);
  a_72 = t;
  t = (ATerm) ATinsert(CheckATermList(h_76), (ATerm) ATmakeAppl(sym_RDefT_4, term_t_46, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_v_46, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42))), (ATerm) ATmakeAppl(sym_VarDec_2, term_u_46, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_a_47, term_m_47, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_s_47), term_p_47)))));
  t = map_1_0(t_9, t);
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_72, b_72);
  t = conc_0_0(t);
  r_71 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, r_71)), (ATerm) ATmakeAppl(sym_Signature_1, g_76)));
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm n_73 = NULL,q_73 = NULL;
  if(match_cons(t, sym__2))
    {
      n_73 = ATgetArgument(t, 0);
      q_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(n_73, q_73, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,d_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,i_40 = NULL,j_40 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      a_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_47;
  i_40 = t;
  t = term_v_47;
  j_40 = t;
  t = term_w_47;
  t = v_14(j_40, i_40, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm x_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_47) != ATmakeSymbol("c_2", 0, ATtrue)))
        _fail(t);
      y_72 = ATgetArgument(t, 1);
      z_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_73;
  t = foldr_3_0(y_10, d_11, e_11, t);
  k_73 = t;
  t = SSL_int_to_string(k_73);
  h_73 = t;
  t = term_a_34;
  i_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_48), h_73), term_c_48), a_73), term_b_48), term_a_48), z_72), term_z_47), y_72), term_y_47);
  j_73 = t;
  t = SSL_printnl(i_73, j_73);
  t = (ATerm) ATmakeAppl(sym_Op_2, a_73, d_73);
  return(t);
}
ATerm i_13 (ATerm m_57, ATerm n_57, ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_57, n_57);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      t = SSL_subtr(m_57, n_57);
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm s_73 = NULL,v_73 = NULL;
  if(match_cons(t, sym__2))
    {
      s_73 = ATgetArgument(t, 0);
      v_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_73, v_73, (ATerm) ATempty);
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm y_73 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm j_48 = ATgetArgument(t, 0);
      if(((ATgetType(j_48) != AT_INT) || (ATgetInt((ATermInt) j_48) != 0)))
        _fail(t);
      {
        ATerm m_48 = ATgetArgument(t, 1);
      }
      y_73 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_73;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm z_73 = NULL,d_74 = NULL,i_74 = NULL,y_74 = NULL,a_75 = NULL;
  if(match_cons(t, sym__3))
    {
      z_73 = ATgetArgument(t, 0);
      d_74 = ATgetArgument(t, 1);
      i_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_73, term_d_34);
  t = geq_0_0(t);
  t = term_d_34;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_73, term_d_34);
  t = i_13(z_73, a_75, t);
  y_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_74, d_74, (ATerm) ATinsert(CheckATermList(i_74), d_74));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(f_11, g_11, i_11, t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm i_78 = NULL,k_78 = NULL;
  if(match_cons(t, sym__2))
    {
      i_78 = ATgetArgument(t, 0);
      k_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(i_78, k_78, t);
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_o_48;
  return(t);
}
ATerm j_13 (ATerm k_83, ATerm t)
{
  ATerm d_75 = NULL,d_76 = NULL,w_77 = NULL,x_77 = NULL,z_77 = NULL,h_78 = NULL;
  d_76 = t;
  t = k_83;
  t = foldr_3_0(k_11, p_11, r_11, t);
  d_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_75, term_x_48);
  t = copy_0_0(t);
  x_77 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, x_77, term_x_48));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm a_49 = t;
    int b_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_78 = NULL,n_40 = NULL,o_40 = NULL;
        t = (ATerm) ATempty;
        n_40 = t;
        t = term_o_48;
        o_40 = t;
        t = term_c_49;
        t = v_14(o_40, n_40, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_49) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            o_78 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_78;
        ;
        LocalPopChoice(b_49);
      }
    else
      {
        t = a_49;
        t = (ATerm) ATempty;
      }
    w_77 = t;
    t = (ATerm) ATempty;
    z_77 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_49, (ATerm) ATinsert(CheckATermList(w_77), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, x_77, term_x_48))));
    h_78 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_49, (ATerm) ATinsert(CheckATermList(w_77), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, x_77, term_x_48)))));
    t = w_14(s_11, z_77, h_78, t);
    t = d_76;
  }
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(w_41, x_41, t);
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  if(match_cons(t, sym__2))
    {
      s_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(s_42, t_42, t);
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,j_80 = NULL;
  a_80 = t;
  if(match_cons(t, sym_Op_2))
    {
      b_80 = ATgetArgument(t, 0);
      j_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_41 = NULL,c_42 = NULL,d_42 = NULL;
        t = j_80;
        t = foldr_3_0(t_11, u_11, v_11, t);
        u_41 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, b_80, (ATerm) ATmakeAppl(sym_Keys_1, u_41));
        c_42 = t;
        t = term_h_49;
        d_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_49, (ATerm) ATmakeAppl(sym_Op_2, b_80, (ATerm) ATmakeAppl(sym_Keys_1, u_41)));
        t = v_14(d_42, c_42, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm i_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_49) != ATmakeSymbol("w_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, b_80, (ATerm) ATempty);
        ;
        LocalPopChoice(g_49);
      }
    else
      {
        t = f_49;
        {
          ATerm q_42 = NULL,x_42 = NULL,y_42 = NULL;
          t = j_80;
          t = foldr_3_0(x_11, b_12, d_12, t);
          q_42 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, b_80, (ATerm) ATmakeAppl(sym_Keys_1, q_42));
          x_42 = t;
          t = term_h_49;
          y_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_49, (ATerm) ATmakeAppl(sym_Op_2, b_80, (ATerm) ATmakeAppl(sym_Keys_1, q_42)));
          t = v_14(y_42, x_42, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm j_49 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_49) != ATmakeSymbol("t_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, b_80, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm c_82 (ATerm t)
  {
    ATerm k_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 (ATerm t)
        {
          ATerm m_49 = t;
          int n_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_82(t);
              ;
              LocalPopChoice(n_49);
            }
          else
            {
              t = m_49;
            }
          return(t);
        }
        t = o_116(t);
        t = SRTS_all(e_12, t);
        ;
        LocalPopChoice(l_49);
      }
    else
      {
        t = k_49;
        t = SRTS_some(c_82, t);
      }
    return(t);
  }
  t = c_82(t);
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_v_47;
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_v_47;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm o_49 = t;
  if((PushChoice() == 0))
    {
      ATerm p_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = CheckCons_0_0(t);
          ;
          LocalPopChoice(q_49);
        }
      else
        {
          t = p_49;
          {
            ATerm n_83 = NULL,o_83 = NULL,z_83 = NULL;
            n_83 = t;
            if(match_cons(t, sym_Op_2))
              {
                o_83 = ATgetArgument(t, 0);
                z_83 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_83;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            t = n_83;
            t = j_13(z_83, t);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_49;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm t)
{
  ATerm u_82 = NULL,z_82 = NULL;
  ATerm g_12 (ATerm t)
  {
    ATerm a_83 = NULL,h_83 = NULL,l_83 = NULL;
    a_83 = t;
    t = x_142(t);
    if(((z_82 != NULL) && (z_82 != t)))
      _fail(t);
    else
      z_82 = t;
    t = y_142(t);
    if(((u_82 != NULL) && (u_82 != t)))
      _fail(t);
    else
      u_82 = t;
    t = term_t_47;
    h_83 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_r_49, not_null(u_82), not_null(z_82));
    l_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_47, (ATerm) ATmakeAppl(sym_Defined_3, term_r_49, not_null(u_82), not_null(z_82)));
    t = w_14(h_12, h_83, l_83, t);
    t = a_83;
    t = manytd_1_0(i_12, t);
    return(t);
  }
  t = scope_2_0(f_12, g_12, t);
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_s_49;
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL;
  if(match_cons(t, sym__2))
    {
      p_90 = ATgetArgument(t, 0);
      q_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(p_90, q_90, t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL;
  if(match_cons(t, sym__2))
    {
      r_90 = ATgetArgument(t, 0);
      s_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(r_90, s_90, t);
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = term_t_49;
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm f_94 = NULL,i_94 = NULL;
  if(match_cons(t, sym__2))
    {
      f_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(f_94, i_94, t);
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL;
  if(match_cons(t, sym__2))
    {
      l_94 = ATgetArgument(t, 0);
      m_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(l_94, m_94, t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,j_87 = NULL,l_87 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      w_86 = ATgetArgument(t, 0);
      x_86 = ATgetArgument(t, 1);
      j_87 = ATgetArgument(t, 2);
      l_87 = ATgetArgument(t, 3);
      {
        ATerm j_12 (ATerm t)
        {
          ATerm e_90 = NULL,n_90 = NULL;
          t = not_null(x_86);
          t = foldr_3_0(q_12, r_12, s_12, t);
          e_90 = t;
          t = not_null(j_87);
          t = foldr_3_0(k_14, l_14, p_14, t);
          n_90 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(w_86), e_90, n_90);
          return(t);
        }
        t = not_null(l_87);
        t = check_constructors_p__2_0(j_12, n_12, t);
      }
    }
  else
    {
      ATerm t_14 (ATerm t)
      {
        ATerm c_94 = NULL,d_94 = NULL;
        t = not_null(x_86);
        t = foldr_3_0(o_15, r_15, t_15, t);
        c_94 = t;
        t = not_null(j_87);
        t = foldr_3_0(u_15, x_15, z_15, t);
        d_94 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_86), c_94, d_94);
        return(t);
      }
      if(match_cons(t, sym_RDefT_4))
        {
          if(((w_86 != NULL) && (w_86 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            w_86 = ATgetArgument(t, 0);
          if(((x_86 != NULL) && (x_86 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_86 = ATgetArgument(t, 1);
          if(((j_87 != NULL) && (j_87 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            j_87 = ATgetArgument(t, 2);
          if(((l_87 != NULL) && (l_87 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            l_87 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(l_87);
      t = check_constructors_p__2_0(t_14, y_14, t);
    }
  return(t);
}
ATerm c_16 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm i_95 = NULL,k_95 = NULL;
  if(match_cons(t, sym__2))
    {
      i_95 = ATgetArgument(t, 0);
      k_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(i_95, k_95, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_h_49;
  return(t);
}
ATerm k_16 (ATerm t)
{
  t = term_h_49;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm q_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      t_94 = ATgetArgument(t, 0);
      u_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_94;
  if(match_cons(t, sym_FunType_2))
    {
      v_94 = ATgetArgument(t, 0);
      q_94 = ATgetArgument(t, 1);
      {
        ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL;
        t = v_94;
        t = foldr_3_0(c_16, d_16, e_16, t);
        f_95 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, t_94, (ATerm) ATmakeAppl(sym_Keys_1, f_95));
        g_95 = t;
        t = term_v_49;
        h_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, t_94, (ATerm) ATmakeAppl(sym_Keys_1, f_95)), term_v_49);
        t = w_14(f_16, g_95, h_95, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_94, (ATerm) ATmakeAppl(sym_FunType_2, v_94, q_94));
      }
    }
  else
    {
      ATerm n_95 = NULL,u_95 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          v_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, t_94, term_w_49);
      n_95 = t;
      t = term_y_49;
      u_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, t_94, term_w_49), term_y_49);
      t = w_14(k_16, n_95, u_95, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_94, (ATerm) ATmakeAppl(sym_ConstType_1, v_94));
    }
  return(t);
}
ATerm k_13 (ATerm t_82, ATerm v_82, ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(t_82), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_48), term_x_48))), term_b_50);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = v_82;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm c_50 = t;
    int d_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_95 = NULL,a_43 = NULL,b_43 = NULL;
        t = (ATerm) ATempty;
        a_43 = t;
        t = term_o_48;
        b_43 = t;
        t = term_c_49;
        t = v_14(b_43, a_43, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_50 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_50) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            y_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_95;
        ;
        LocalPopChoice(d_50);
      }
    else
      {
        t = c_50;
        t = (ATerm) ATempty;
      }
    v_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_95, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(t_82), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_x_48), term_x_48), term_x_48))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_48), term_x_48))), term_b_50));
    t = conc_0_0(t);
    w_95 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, v_82)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, w_95)))));
  }
  return(t);
}
ATerm l_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_50 = ATgetArgument(t, 0);
      if(((ATgetType(f_50) != AT_LIST) || !(ATisEmpty(f_50))))
        _fail(t);
      {
        ATerm g_50 = ATgetArgument(t, 1);
        if(((ATgetType(g_50) != AT_LIST) || !(ATisEmpty(g_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm n_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_50 = ATgetArgument(t, 0);
      if(((ATgetType(i_50) == AT_LIST) && !(ATisEmpty(i_50))))
        {
          n_45 = ATgetFirst((ATermList) i_50);
          u_45 = (ATerm) ATgetNext((ATermList) i_50);
        }
      else
        _fail(t);
      {
        ATerm m_50 = ATgetArgument(t, 1);
        if(((ATgetType(m_50) == AT_LIST) && !(ATisEmpty(m_50))))
          {
            v_45 = ATgetFirst((ATermList) m_50);
            w_45 = (ATerm) ATgetNext((ATermList) m_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_45, v_45), (ATerm) ATmakeAppl(sym__2, u_45, w_45));
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  if(match_cons(t, sym__2))
    {
      x_45 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_45), x_45);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm k_46 = NULL,m_46 = NULL,p_46 = NULL;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      p_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_46;
  {
    ATerm n_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_46);
      }
    else
      {
        t = n_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_50 = ATgetArgument(t, 0);
            m_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_46, m_46);
      }
  }
  return(t);
}
ATerm q_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_50 = ATgetArgument(t, 0);
      if(((ATgetType(s_50) != AT_LIST) || !(ATisEmpty(s_50))))
        _fail(t);
      {
        ATerm t_50 = ATgetArgument(t, 1);
        if(((ATgetType(t_50) != AT_LIST) || !(ATisEmpty(t_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_50 = ATgetArgument(t, 0);
      if(((ATgetType(u_50) == AT_LIST) && !(ATisEmpty(u_50))))
        {
          p_48 = ATgetFirst((ATermList) u_50);
          q_48 = (ATerm) ATgetNext((ATermList) u_50);
        }
      else
        _fail(t);
      {
        ATerm v_50 = ATgetArgument(t, 1);
        if(((ATgetType(v_50) == AT_LIST) && !(ATisEmpty(v_50))))
          {
            r_48 = ATgetFirst((ATermList) v_50);
            s_48 = (ATerm) ATgetNext((ATermList) v_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_48, r_48), (ATerm) ATmakeAppl(sym__2, q_48, s_48));
  return(t);
}
ATerm u_16 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_48), t_48);
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm w_48 = NULL,y_48 = NULL,z_48 = NULL;
  if(match_cons(t, sym__2))
    {
      w_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_48;
  {
    ATerm x_50 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_51);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_48);
      }
    else
      {
        t = x_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_51 = ATgetArgument(t, 0);
            y_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_48, y_48);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm i_142 (ATerm), ATerm t)
{
  ATerm e_102 = NULL,f_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL;
  e_102 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_102 = ATgetArgument(t, 0);
      h_102 = ATgetArgument(t, 1);
      {
        ATerm s_43 = NULL,v_43 = NULL,a_11 = NULL;
        t = SSLgetAnnotations(e_102);
        s_43 = t;
        t = f_102;
        t = i_142(t);
        v_43 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_43, h_102);
        a_11 = t;
        t = SSLsetAnnotations(a_11, s_43);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          f_102 = ATgetArgument(t, 0);
          h_102 = ATgetArgument(t, 1);
          i_102 = ATgetArgument(t, 2);
          j_102 = ATgetArgument(t, 3);
          {
            ATerm v_44 = NULL,g_45 = NULL,l_45 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(e_102);
            v_44 = t;
            t = i_102;
            t = i_142(t);
            l_45 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_102, l_45);
            t = genzip_4_0(l_16, m_16, n_16, o_16, t);
            g_45 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, f_102, h_102, g_45, j_102);
            b_11 = t;
            t = SSLsetAnnotations(b_11, v_44);
          }
        }
      else
        {
          ATerm u_47 = NULL,k_48 = NULL,n_48 = NULL,c_11 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              f_102 = ATgetArgument(t, 0);
              h_102 = ATgetArgument(t, 1);
              i_102 = ATgetArgument(t, 2);
              j_102 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_102);
          u_47 = t;
          t = i_102;
          t = i_142(t);
          n_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_102, n_48);
          t = genzip_4_0(q_16, r_16, u_16, v_16, t);
          k_48 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, f_102, h_102, k_48, j_102);
          c_11 = t;
          t = SSLsetAnnotations(c_11, u_47);
        }
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm w_102 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_102);
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_51);
    }
  else
    {
      t = g_51;
      {
        ATerm i_51 = t;
        int j_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(j_51);
          }
        else
          {
            t = i_51;
            {
              ATerm y_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_102 = ATgetArgument(t, 0);
                  z_102 = ATgetArgument(t, 1);
                  a_103 = ATgetArgument(t, 2);
                  b_103 = ATgetArgument(t, 3);
                  t = a_103;
                  t = map_1_0(i_17, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_102 = ATgetArgument(t, 0);
                      z_102 = ATgetArgument(t, 1);
                      a_103 = ATgetArgument(t, 2);
                      b_103 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_103;
                  t = map_1_0(j_17, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm w_103 = NULL;
  ATerm k_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_103 = ATgetArgument(t, 0);
          {
            ATerm m_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_51);
      t = w_103;
    }
  else
    {
      t = k_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_103;
    }
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm h_104 = NULL;
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_104 = ATgetArgument(t, 0);
          {
            ATerm p_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_51);
      t = h_104;
    }
  else
    {
      t = n_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_104;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm v_102 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_102;
  t = free_vars_3_0(z_16, g_17, tboundin_3_0, t);
  return(t);
}
ATerm Var_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm p_104 = NULL,w_104 = NULL,z_104 = NULL,b_105 = NULL,h_11 = NULL;
  b_105 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_105);
  p_104 = t;
  t = w_104;
  t = u_99(t);
  z_104 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_104);
  h_11 = t;
  t = SSLsetAnnotations(h_11, p_104);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL;
  p_106 = t;
  if(match_cons(t, sym__2))
    {
      q_106 = ATgetArgument(t, 0);
      s_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_106 = ATgetFirst((ATermList) t);
      u_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_106;
  if(match_cons(t, sym__2))
    {
      m_106 = ATgetArgument(t, 0);
      o_106 = ATgetArgument(t, 1);
      {
        ATerm r_51 = t;
        int v_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_106;
            if((q_106 != t))
              {
                _fail(t);
              }
            t = o_106;
            ;
            LocalPopChoice(v_51);
          }
        else
          {
            t = r_51;
            t = (ATerm) ATmakeAppl(sym__2, q_106, u_106);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_106, u_106);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm n_13 (ATerm t_139 (ATerm), ATerm u_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_72, ATerm n_72, ATerm m_72, ATerm t)
{
  ATerm k_17 (ATerm t)
  {
    ATerm d_105 = NULL;
    d_105 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_105, not_null(m_72));
    t = t_139(t);
    return(t);
  }
  ATerm l_17 (ATerm t)
  {
    ATerm h_105 = NULL;
    h_105 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_105, not_null(n_72));
    t = t_139(t);
    return(t);
  }
  t = not_null(o_72);
  t = u_139(k_17, l_17, _id, t);
  return(t);
}
ATerm q_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_51 = ATgetArgument(t, 0);
      if(((ATgetType(w_51) != AT_LIST) || !(ATisEmpty(w_51))))
        _fail(t);
      {
        ATerm y_51 = ATgetArgument(t, 1);
        if(((ATgetType(y_51) != AT_LIST) || !(ATisEmpty(y_51))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_17 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL,y_105 = NULL,z_105 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_51 = ATgetArgument(t, 0);
      if(((ATgetType(z_51) == AT_LIST) && !(ATisEmpty(z_51))))
        {
          w_105 = ATgetFirst((ATermList) z_51);
          x_105 = (ATerm) ATgetNext((ATermList) z_51);
        }
      else
        _fail(t);
      {
        ATerm a_52 = ATgetArgument(t, 1);
        if(((ATgetType(a_52) == AT_LIST) && !(ATisEmpty(a_52))))
          {
            y_105 = ATgetFirst((ATermList) a_52);
            z_105 = (ATerm) ATgetNext((ATermList) a_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_105, y_105), (ATerm) ATmakeAppl(sym__2, x_105, z_105));
  return(t);
}
ATerm x_17 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL;
  if(match_cons(t, sym__2))
    {
      a_106 = ATgetArgument(t, 0);
      b_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_106), a_106);
  return(t);
}
ATerm o_13 (ATerm n_139 (ATerm), ATerm o_139 (ATerm (ATerm), ATerm), ATerm g_72, ATerm j_72, ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL,r_105 = NULL,t_105 = NULL,v_105 = NULL;
  t = not_null(g_72);
  t = n_139(t);
  if(((o_105 != NULL) && (o_105 != t)))
    _fail(t);
  else
    o_105 = t;
  t = map_1_0(new_0_0, t);
  if(((p_105 != NULL) && (p_105 != t)))
    _fail(t);
  else
    p_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_105), not_null(p_105));
  t = genzip_4_0(q_17, u_17, x_17, _id, t);
  if(((v_105 != NULL) && (v_105 != t)))
    _fail(t);
  else
    v_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_105), not_null(j_72));
  t = conc_0_0(t);
  if(((r_105 != NULL) && (r_105 != t)))
    _fail(t);
  else
    r_105 = t;
  t = not_null(g_72);
  {
    ATerm z_17 (ATerm t)
    {
      t = not_null(p_105);
      return(t);
    }
    t = o_139(z_17, t);
    if(((t_105 != NULL) && (t_105 != t)))
      _fail(t);
    else
      t_105 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(t_105), not_null(j_72), not_null(r_105));
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm z_107 (ATerm t)
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_118(t);
        ;
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        {
          ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL;
          ATerm a_18 (ATerm t)
          {
            ATerm z_49 = NULL;
            z_49 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_49, not_null(y_107));
            t = z_107(t);
            return(t);
          }
          if(((w_107 != NULL) && (w_107 != t)))
            _fail(t);
          else
            w_107 = t;
          if(match_cons(t, sym__2))
            {
              if(((x_107 != NULL) && (x_107 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_107 = ATgetArgument(t, 0);
              if(((y_107 != NULL) && (y_107 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                y_107 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(x_107);
          t = SRTS_all(a_18, t);
        }
      }
    return(t);
  }
  t = z_107(t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_52 = ATgetArgument(t, 0);
      if(((ATgetType(d_52) != AT_LIST) || !(ATisEmpty(d_52))))
        _fail(t);
      {
        ATerm e_52 = ATgetArgument(t, 1);
        if(((ATgetType(e_52) != AT_LIST) || !(ATisEmpty(e_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL,w_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_52 = ATgetArgument(t, 0);
      if(((ATgetType(f_52) == AT_LIST) && !(ATisEmpty(f_52))))
        {
          t_108 = ATgetFirst((ATermList) f_52);
          u_108 = (ATerm) ATgetNext((ATermList) f_52);
        }
      else
        _fail(t);
      {
        ATerm g_52 = ATgetArgument(t, 1);
        if(((ATgetType(g_52) == AT_LIST) && !(ATisEmpty(g_52))))
          {
            v_108 = ATgetFirst((ATermList) g_52);
            w_108 = (ATerm) ATgetNext((ATermList) g_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_108, v_108), (ATerm) ATmakeAppl(sym__2, u_108, w_108));
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm b_109 = NULL,c_109 = NULL;
  if(match_cons(t, sym__2))
    {
      b_109 = ATgetArgument(t, 0);
      c_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_109), b_109);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm g_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL;
  g_108 = t;
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_52 = ATgetArgument(t, 0);
            ATerm k_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(i_52);
        t = g_108;
      }
    else
      {
        t = h_52;
        {
          ATerm s_108 = NULL;
          if(match_cons(t, sym__3))
            {
              i_108 = ATgetArgument(t, 0);
              j_108 = ATgetArgument(t, 1);
              k_108 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, i_108, j_108);
          t = genzip_4_0(b_18, c_18, f_18, _id, t);
          s_108 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_108, k_108);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm z_138 (ATerm), ATerm t)
{
  ATerm q_109 = NULL,r_109 = NULL;
  ATerm t_110 (ATerm t)
  {
    ATerm g_18 (ATerm t)
    {
      ATerm u_110 (ATerm s_109, ATerm t)
      {
        ATerm t_109 = NULL,h_50 = NULL;
        t = SSL_explode_term(s_109);
        if(match_cons(t, sym__2))
          {
            ATerm l_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_52) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_52 = ATgetArgument(t, 1);
              if(((ATgetType(m_52) == AT_LIST) && !(ATisEmpty(m_52))))
                {
                  t_109 = ATgetFirst((ATermList) m_52);
                  {
                    ATerm n_52 = (ATerm) ATgetNext((ATermList) m_52);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_109;
        t = u_138(t);
        h_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_50, not_null(r_109));
        t = lookup_0_0(t);
        t = z_138(t);
        return(t);
      }
      ATerm v_110 (ATerm z_109, ATerm a_110, ATerm b_110, ATerm t)
      {
        ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL;
        t = b_110;
        t = o_13(w_138, y_138, z_109, a_110, t);
        if(match_cons(t, sym__3))
          {
            c_110 = ATgetArgument(t, 0);
            d_110 = ATgetArgument(t, 1);
            e_110 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = n_13(t_110, x_138, c_110, d_110, e_110, t);
        return(t);
      }
      ATerm h_110 = NULL,o_110 = NULL,p_110 = NULL;
      if(((h_110 != NULL) && (h_110 != t)))
        _fail(t);
      else
        h_110 = t;
      if(match_cons(t, sym__2))
        {
          o_110 = ATgetArgument(t, 0);
          p_110 = ATgetArgument(t, 1);
          {
            ATerm p_52 = t;
            int q_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_18 (ATerm t)
                {
                  ATerm s_110 = NULL;
                  s_110 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_110, not_null(p_110));
                  t = lookup_0_0(t);
                  return(t);
                }
                t = not_null(o_110);
                t = v_138(h_18, t);
                ;
                LocalPopChoice(q_52);
              }
            else
              {
                t = p_52;
                {
                  ATerm r_52 = t;
                  int s_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_110(not_null(h_110), t);
                      ;
                      LocalPopChoice(s_52);
                    }
                  else
                    {
                      t = r_52;
                      t = v_110(not_null(o_110), not_null(p_110), not_null(h_110), t);
                    }
                }
              }
          }
        }
      else
        {
          t = u_110(not_null(h_110), t);
        }
      return(t);
    }
    t = env_alltd_1_0(g_18, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((r_109 != NULL) && (r_109 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_109 = ATgetArgument(t, 0);
      if(((q_109 != NULL) && (q_109 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_109), (ATerm) ATempty);
  t = t_110(t);
  return(t);
}
ATerm l_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_52 = ATgetArgument(t, 0);
      if(((ATgetType(u_52) != AT_LIST) || !(ATisEmpty(u_52))))
        _fail(t);
      {
        ATerm y_52 = ATgetArgument(t, 1);
        if(((ATgetType(y_52) != AT_LIST) || !(ATisEmpty(y_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_53 = ATgetArgument(t, 0);
      if(((ATgetType(c_53) == AT_LIST) && !(ATisEmpty(c_53))))
        {
          u_111 = ATgetFirst((ATermList) c_53);
          v_111 = (ATerm) ATgetNext((ATermList) c_53);
        }
      else
        _fail(t);
      {
        ATerm d_53 = ATgetArgument(t, 1);
        if(((ATgetType(d_53) == AT_LIST) && !(ATisEmpty(d_53))))
          {
            w_111 = ATgetFirst((ATermList) d_53);
            x_111 = (ATerm) ATgetNext((ATermList) d_53);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_111, w_111), (ATerm) ATmakeAppl(sym__2, v_111, x_111));
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL;
  if(match_cons(t, sym__2))
    {
      e_112 = ATgetArgument(t, 0);
      f_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_112), e_112);
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm h_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_112;
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_53);
    }
  else
    {
      t = e_53;
      {
        ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_112 = ATgetArgument(t, 0);
            t = k_112;
            t = free_vars_3_0(s_18, t_18, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_112 = ATgetArgument(t, 0);
                l_112 = ATgetArgument(t, 1);
                m_112 = ATgetArgument(t, 2);
                n_112 = ATgetArgument(t, 3);
                t = m_112;
                t = map_1_0(w_18, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_112 = ATgetArgument(t, 0);
                    l_112 = ATgetArgument(t, 1);
                    m_112 = ATgetArgument(t, 2);
                    n_112 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_112;
                t = map_1_0(x_18, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm p_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_112);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm g_53 = t;
  int h_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
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
            ;
            LocalPopChoice(j_53);
          }
        else
          {
            t = i_53;
            {
              ATerm t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_112 = ATgetArgument(t, 0);
                  u_112 = ATgetArgument(t, 1);
                  v_112 = ATgetArgument(t, 2);
                  w_112 = ATgetArgument(t, 3);
                  t = v_112;
                  t = map_1_0(u_18, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_112 = ATgetArgument(t, 0);
                      u_112 = ATgetArgument(t, 1);
                      v_112 = ATgetArgument(t, 2);
                      w_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_112;
                  t = map_1_0(v_18, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm m_113 = NULL;
  ATerm k_53 = t;
  int l_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_113 = ATgetArgument(t, 0);
          {
            ATerm n_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_53);
      t = m_113;
    }
  else
    {
      t = k_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_113;
    }
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm i_114 = NULL;
  ATerm o_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_114 = ATgetArgument(t, 0);
          {
            ATerm w_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_53);
      t = i_114;
    }
  else
    {
      t = o_53;
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
ATerm w_18 (ATerm t)
{
  ATerm x_114 = NULL;
  ATerm x_53 = t;
  int b_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_114 = ATgetArgument(t, 0);
          {
            ATerm c_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_54);
      t = x_114;
    }
  else
    {
      t = x_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_114;
    }
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm l_115 = NULL;
  ATerm d_54 = t;
  int e_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_115 = ATgetArgument(t, 0);
          {
            ATerm f_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_54);
      t = l_115;
    }
  else
    {
      t = d_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_115;
    }
  return(t);
}
ATerm t_13 (ATerm o_141 (ATerm), ATerm e_77, ATerm f_77, ATerm t)
{
  ATerm o_111 = NULL,p_111 = NULL;
  t = o_141(t);
  {
    ATerm k_18 (ATerm t)
    {
      ATerm r_111 = NULL,s_111 = NULL,t_111 = NULL;
      r_111 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if(((e_77 != NULL) && (e_77 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_77 = ATgetArgument(t, 0);
          s_111 = ATgetArgument(t, 1);
          t_111 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_111, not_null(f_77));
      t = genzip_4_0(l_18, n_18, o_18, _id, t);
      if(((o_111 != NULL) && (o_111 != t)))
        _fail(t);
      else
        o_111 = t;
      t = t_111;
      if(((p_111 != NULL) && (p_111 != t)))
        _fail(t);
      else
        p_111 = t;
      t = r_111;
      return(t);
    }
    t = fetch_1_0(k_18, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_111), not_null(p_111));
    t = substitute_6_0(p_18, Var_1_0, r_18, tboundin_3_0, tpaste_1_0, _id, t);
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm x_115 = NULL,z_115 = NULL;
  ATerm g_54 = t;
  int h_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm j_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(h_54);
      t = term_n_35;
    }
  else
    {
      t = g_54;
      if(match_cons(t, sym_Real_1))
        {
          z_115 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, z_115));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              z_115 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, z_115));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  z_115 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, z_115));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      z_115 = ATgetArgument(t, 0);
                      x_115 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_54, (ATerm)ATinsert(ATinsert(ATempty, x_115), z_115), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          z_115 = ATgetArgument(t, 0);
                          x_115 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_115), x_115, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              z_115 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_115), (ATerm)ATempty, (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm trm_to_cong_0_0 (ATerm t)
{
  ATerm d_117 = NULL,h_117 = NULL,i_117 = NULL;
  i_117 = t;
  if(match_cons(t, sym_Op_2))
    {
      d_117 = ATgetArgument(t, 0);
      h_117 = ATgetArgument(t, 1);
      {
        ATerm m_54 = t;
        int n_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_50 = NULL,d_51 = NULL,j_11 = NULL;
            t = SSLgetAnnotations(i_117);
            w_50 = t;
            t = h_117;
            t = map_1_0(trm_to_cong_0_0, t);
            d_51 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, d_117, d_51);
            j_11 = t;
            t = SSLsetAnnotations(j_11, w_50);
            ;
            LocalPopChoice(n_54);
          }
        else
          {
            t = m_54;
            t = i_117;
          }
      }
    }
  else
    {
      t = i_117;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm u_117 = NULL;
  u_117 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_117, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42));
  return(t);
}
ATerm l_13 (ATerm k_77, ATerm m_77, ATerm l_77, ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL;
  t = m_77;
  t = map_1_0(y_18, t);
  r_117 = t;
  t = l_77;
  t = trm_to_cong_0_0(t);
  s_117 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, k_77, r_117, s_117);
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      n_118 = ATgetArgument(t, 0);
      o_118 = ATgetArgument(t, 1);
      p_118 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_13(n_118, o_118, p_118, t);
  return(t);
}
ATerm u_13 (ATerm i_76, ATerm k_76, ATerm j_76, ATerm t)
{
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL;
  t = not_null(k_76);
  {
    ATerm o_54 = t;
    int p_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 (ATerm t)
        {
          ATerm b_19 (ATerm t)
          {
            ATerm j_118 = NULL,k_118 = NULL;
            ATerm c_19 (ATerm t)
            {
              t = not_null(k_76);
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                if(((j_118 != NULL) && (j_118 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_118 = ATgetArgument(t, 0);
                if(((k_118 != NULL) && (k_118 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_118 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_13(c_19, not_null(j_118), not_null(k_118), t);
            return(t);
          }
          t = repeat_1_0(b_19, t);
          return(t);
        }
        ATerm r_54 = t;
        if((PushChoice() == 0))
          {
            t = not_null(k_76);
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_54;
          }
        t = not_null(k_76);
        t = topdown_1_0(a_19, t);
        ;
        LocalPopChoice(p_54);
      }
    else
      {
        t = o_54;
      }
    if(((a_118 != NULL) && (a_118 != t)))
      _fail(t);
    else
      a_118 = t;
    t = not_null(k_76);
    t = map_1_0(f_19, t);
    if(((c_118 != NULL) && (c_118 != t)))
      _fail(t);
    else
      c_118 = t;
    t = not_null(j_76);
    {
      ATerm u_54 = t;
      int v_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_19 (ATerm t)
          {
            ATerm y_54 = t;
            int a_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_51 = NULL,u_51 = NULL;
                ATerm o_19 (ATerm t)
                {
                  t = not_null(a_118);
                  return(t);
                }
                if(match_cons(t, sym_Op_2))
                  {
                    if(((t_51 != NULL) && (t_51 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_51 = ATgetArgument(t, 0);
                    if(((u_51 != NULL) && (u_51 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_13(o_19, not_null(t_51), not_null(u_51), t);
                ;
                LocalPopChoice(a_55);
              }
            else
              {
                t = y_54;
              }
            return(t);
          }
          ATerm d_55 = t;
          if((PushChoice() == 0))
            {
              t = not_null(a_118);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_55;
            }
          t = not_null(j_76);
          t = topdown_1_0(m_19, t);
          ;
          LocalPopChoice(v_54);
        }
      else
        {
          t = u_54;
        }
      if(((d_118 != NULL) && (d_118 != t)))
        _fail(t);
      else
        d_118 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_118), not_null(d_118));
      t = conc_0_0(t);
      if(((b_118 != NULL) && (b_118 != t)))
        _fail(t);
      else
        b_118 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_118))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(i_76))));
    }
  }
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm s_19 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL,q_119 = NULL;
  n_119 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_119);
  o_119 = t;
  t = term_h_55;
  q_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_119), term_h_55);
  t = w_14(t_19, o_119, q_119, t);
  t = n_119;
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm v_13 (ATerm z_81, ATerm a_82, ATerm b_82, ATerm t)
{
  ATerm h_119 = NULL,j_119 = NULL,m_119 = NULL;
  h_119 = t;
  t = (ATerm) ATempty;
  j_119 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_55, z_81);
  m_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_55, z_81));
  t = w_14(r_19, j_119, m_119, t);
  t = a_82;
  t = map_1_0(s_19, t);
  t = b_82;
  t = use_vars_0_0(t);
  t = h_119;
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm v_19 (ATerm t)
{
  ATerm r_121 = NULL;
  ATerm n_55 = t;
  int o_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_121 = ATgetArgument(t, 0);
          {
            ATerm s_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_55);
      t = r_121;
    }
  else
    {
      t = n_55;
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
ATerm w_19 (ATerm t)
{
  ATerm u_121 = NULL,v_121 = NULL,b_122 = NULL;
  u_121 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_121);
  v_121 = t;
  t = term_h_55;
  b_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_121), term_h_55);
  t = w_14(x_19, v_121, b_122, t);
  t = u_121;
  return(t);
}
ATerm x_19 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm y_122 = NULL;
  ATerm t_55 = t;
  int u_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_122 = ATgetArgument(t, 0);
          {
            ATerm v_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_55);
      t = y_122;
    }
  else
    {
      t = t_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_122;
    }
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm i_123 = NULL,m_123 = NULL,o_123 = NULL;
  i_123 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_123);
  m_123 = t;
  t = term_h_55;
  o_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_123), term_h_55);
  t = w_14(d_20, m_123, o_123, t);
  t = i_123;
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm h_20 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm c_120 = NULL,f_120 = NULL,g_120 = NULL,i_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,x_120 = NULL,y_120 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      n_120 = ATgetArgument(t, 0);
      o_120 = ATgetArgument(t, 1);
      p_120 = ATgetArgument(t, 2);
      c_120 = ATgetArgument(t, 3);
      t = c_120;
      if(match_cons(t, sym_StratRule_3))
        {
          f_120 = ATgetArgument(t, 0);
          g_120 = ATgetArgument(t, 1);
          i_120 = ATgetArgument(t, 2);
          {
            ATerm h_121 = NULL,i_121 = NULL;
            t = (ATerm) ATempty;
            h_121 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_55, n_120);
            i_121 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_55, n_120));
            t = w_14(u_19, h_121, i_121, t);
            t = p_120;
            t = map_1_0(v_19, t);
            t = map_1_0(w_19, t);
            t = f_120;
            t = unbound_vars_0_0(t);
            t = g_120;
            t = unbound_vars_0_0(t);
            t = i_120;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, n_120, o_120, p_120, (ATerm) ATmakeAppl(sym_StratRule_3, f_120, g_120, i_120));
          }
        }
      else
        {
          ATerm n_122 = NULL,s_122 = NULL;
          if(match_cons(t, sym_Rule_3))
            {
              f_120 = ATgetArgument(t, 0);
              g_120 = ATgetArgument(t, 1);
              i_120 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          n_122 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_55, n_120);
          s_122 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_55, n_120));
          t = w_14(a_20, n_122, s_122, t);
          t = p_120;
          t = map_1_0(b_20, t);
          t = map_1_0(c_20, t);
          t = f_120;
          t = bind_vars_0_0(t);
          t = i_120;
          t = unbound_vars_0_0(t);
          t = g_120;
          t = use_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_120, o_120, p_120, (ATerm) ATmakeAppl(sym_Rule_3, f_120, g_120, i_120));
        }
    }
  else
    {
      ATerm w_123 = NULL,z_123 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          n_120 = ATgetArgument(t, 0);
          o_120 = ATgetArgument(t, 1);
          p_120 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_120;
      if(match_cons(t, sym_Rule_3))
        {
          q_120 = ATgetArgument(t, 0);
          x_120 = ATgetArgument(t, 1);
          y_120 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      w_123 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_56, n_120);
      z_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_56, n_120));
      t = w_14(h_20, w_123, z_123, t);
      t = q_120;
      t = bind_vars_0_0(t);
      t = y_120;
      t = unbound_vars_0_0(t);
      t = x_120;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, n_120, o_120, (ATerm) ATmakeAppl(sym_Rule_3, q_120, x_120, y_120));
    }
  return(t);
}
ATerm i_20 (ATerm t)
{
  ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL,c_126 = NULL;
  c_126 = t;
  if(match_cons(t, sym__2))
    {
      p_125 = ATgetArgument(t, 0);
      q_125 = ATgetArgument(t, 1);
      t = q_125;
      {
        ATerm c_56 = t;
        int d_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_125 = ATgetFirst((ATermList) t);
                {
                  ATerm f_56 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_56);
            t = r_125;
            {
              ATerm g_56 = t;
              int h_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm i_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_56);
                  t = p_125;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = c_126;
                    }
                  else
                    {
                      ATerm j_56 = t;
                      int k_56 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_126(p_125, c_126, t);
                          ;
                          LocalPopChoice(k_56);
                        }
                      else
                        {
                          t = j_56;
                          t = c_126;
                        }
                    }
                }
              else
                {
                  t = g_56;
                  t = p_125;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = c_126;
                    }
                  else
                    {
                      t = c_126;
                    }
                }
            }
          }
        else
          {
            t = c_56;
            t = p_125;
            if(match_cons(t, sym_Scopes_0))
              {
                t = c_126;
              }
            else
              {
                t = c_126;
              }
          }
      }
    }
  else
    {
      t = c_126;
    }
  return(t);
}
ATerm t_126 (ATerm c_125, ATerm g_125, ATerm t)
{
  t = g_125;
  {
    ATerm l_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_51 = NULL;
        t = term_l_55;
        x_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_55, c_125);
        t = p_15(x_51, c_125, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_56 = ATgetFirst((ATermList) t);
            if(match_cons(n_56, sym_Defined_1))
              {
                ATerm q_56 = ATgetArgument(n_56, 0);
              }
            else
              _fail(t);
            {
              ATerm o_56 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = g_125;
        ;
        LocalPopChoice(m_56);
      }
    else
      {
        t = l_56;
        t = (ATerm) ATmakeAppl(sym__2, c_125, (ATerm) ATinsert(ATempty, term_v_56));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm u_124 = NULL,v_124 = NULL,a_125 = NULL;
  t = map_1_0(i_20, t);
  u_124 = t;
  t = term_l_55;
  a_125 = t;
  t = SSL_table_destroy(a_125);
  t = term_l_55;
  v_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_55, u_124);
  t = w_13(v_124, u_124, t);
  t = u_124;
  return(t);
}
ATerm w_13 (ATerm y_70, ATerm x_70, ATerm t)
{
  ATerm j_20 (ATerm t)
  {
    ATerm w_126 = NULL,x_126 = NULL;
    if(match_cons(t, sym__2))
      {
        w_126 = ATgetArgument(t, 0);
        x_126 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(y_70), w_126, x_126);
    t = (ATerm) ATmakeAppl(sym__3, not_null(y_70), w_126, x_126);
    return(t);
  }
  t = not_null(x_70);
  t = map_1_0(j_20, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_127 = NULL;
  ATerm k_20 (ATerm t)
  {
    ATerm g_127 = NULL,h_127 = NULL;
    g_127 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_127), g_127);
    t = p_15(not_null(f_127), g_127, t);
    h_127 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_127, h_127);
    return(t);
  }
  if(((f_127 != NULL) && (f_127 != t)))
    _fail(t);
  else
    f_127 = t;
  t = SSL_table_keys(not_null(f_127));
  t = map_1_0(k_20, t);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_l_55;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm t)
{
  ATerm n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL;
  r_127 = t;
  t = save_Bound_0_0(t);
  n_127 = t;
  t = r_127;
  t = s_142(t);
  q_127 = t;
  t = save_Bound_0_0(t);
  o_127 = t;
  t = term_l_55;
  t_127 = t;
  t = SSL_table_destroy(t_127);
  t = term_l_55;
  s_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_55, n_127);
  t = w_13(s_127, n_127, t);
  t = q_127;
  t = t_142(t);
  p_127 = t;
  t = o_127;
  t = isect_Bound_0_0(t);
  t = p_127;
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm n_129 = NULL;
  n_129 = t;
  {
    ATerm w_56 = t;
    int x_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_52 = NULL,a_53 = NULL,b_53 = NULL;
        t = (ATerm) ATempty;
        a_53 = t;
        t = term_e_55;
        b_53 = t;
        t = term_y_56;
        t = v_14(b_53, a_53, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_56) != ATmakeSymbol("j_1", 0, ATtrue)))
              _fail(t);
            v_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_129), term_a_48), v_52), term_a_57);
        ;
        LocalPopChoice(x_56);
      }
    else
      {
        t = w_56;
        {
          ATerm b_57 = t;
          int c_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_53 = NULL,p_53 = NULL,u_53 = NULL;
              t = (ATerm) ATempty;
              p_53 = t;
              t = term_e_55;
              u_53 = t;
              t = term_y_56;
              t = v_14(u_53, p_53, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_57 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_57) != ATmakeSymbol("g_1", 0, ATtrue)))
                    _fail(t);
                  m_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_129), term_a_48), m_53), term_e_57);
              ;
              LocalPopChoice(c_57);
            }
          else
            {
              t = b_57;
              {
                ATerm i_57 = t;
                int j_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_53 = NULL,i_54 = NULL,k_54 = NULL;
                    t = (ATerm) ATempty;
                    i_54 = t;
                    t = term_e_55;
                    k_54 = t;
                    t = term_y_56;
                    t = v_14(k_54, i_54, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm k_57 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) k_57) != ATmakeSymbol("d_1", 0, ATtrue)))
                          _fail(t);
                        y_53 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_129), term_a_48), y_53), term_e_57);
                    ;
                    LocalPopChoice(j_57);
                  }
                else
                  {
                    t = i_57;
                    {
                      ATerm o_57 = t;
                      int p_57 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_54 = NULL,s_54 = NULL,t_54 = NULL;
                          t = (ATerm) ATempty;
                          s_54 = t;
                          t = term_e_55;
                          t_54 = t;
                          t = term_y_56;
                          t = v_14(t_54, s_54, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm q_57 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) q_57) != ATmakeSymbol("a_1", 0, ATtrue)))
                                _fail(t);
                              q_54 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_129), term_a_48), q_54), term_e_57);
                          ;
                          LocalPopChoice(p_57);
                        }
                      else
                        {
                          t = o_57;
                          {
                            ATerm r_57 = t;
                            int s_57 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_54 = NULL,b_55 = NULL,c_55 = NULL;
                                t = (ATerm) ATempty;
                                b_55 = t;
                                t = term_e_55;
                                c_55 = t;
                                t = term_y_56;
                                t = v_14(c_55, b_55, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm t_57 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) t_57) != ATmakeSymbol("x_0", 0, ATtrue)))
                                      _fail(t);
                                    z_54 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_129), term_a_48), z_54), term_v_57);
                                ;
                                LocalPopChoice(s_57);
                              }
                            else
                              {
                                t = r_57;
                                {
                                  ATerm g_55 = NULL,i_55 = NULL,k_55 = NULL;
                                  t = (ATerm) ATempty;
                                  i_55 = t;
                                  t = term_e_55;
                                  k_55 = t;
                                  t = term_y_56;
                                  t = v_14(k_55, i_55, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm w_57 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) w_57) != ATmakeSymbol("u_0", 0, ATtrue)))
                                        _fail(t);
                                      g_55 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_129), term_a_48), g_55), term_v_57);
                                }
                              }
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
ATerm x_13 (ATerm i_82, ATerm t)
{
  ATerm z_129 = NULL,c_130 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_57), i_82), term_x_57);
  t = Context_0_0(t);
  z_129 = t;
  t = term_a_34;
  c_130 = t;
  t = SSL_printnl(c_130, z_129);
  t = z_129;
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm x_130 = NULL,y_130 = NULL;
  x_130 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_57 = NULL;
        t = term_l_55;
        f_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_55, x_130);
        t = v_14(f_57, x_130, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm b_58 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_58) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_130);
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        {
          ATerm d_58 = t;
          int e_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_57 = NULL;
              t = term_l_55;
              u_57 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_55, x_130);
              t = v_14(u_57, x_130, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(e_58);
            }
          else
            {
              t = d_58;
              {
                ATerm k_58 = NULL;
                t = term_l_55;
                k_58 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_55, x_130);
                t = v_14(k_58, x_130, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm f_58 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_58) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_130);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm g_58 = t;
  int h_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_131 = NULL,e_131 = NULL,f_131 = NULL,l_11 = NULL;
      f_131 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_131);
      d_131 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_131);
      l_11 = t;
      t = SSLsetAnnotations(l_11, d_131);
      LocalPopChoice(h_58);
      {
        ATerm i_58 = t;
        int j_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(j_58);
          }
        else
          {
            t = i_58;
            {
              ATerm g_131 = NULL,h_131 = NULL;
              g_131 = t;
              if(match_cons(t, sym_Var_1))
                {
                  h_131 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_131;
              t = x_13(h_131, t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = g_58;
      {
        ATerm l_58 = t;
        int m_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL,m_11 = NULL;
            m_131 = t;
            if(match_cons(t, sym_App_2))
              {
                k_131 = ATgetArgument(t, 0);
                l_131 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_131);
            j_131 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, k_131, l_131);
            m_11 = t;
            t = SSLsetAnnotations(m_11, j_131);
            LocalPopChoice(m_58);
            {
              ATerm n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL,n_11 = NULL;
              s_131 = t;
              if(match_cons(t, sym_App_2))
                {
                  o_131 = ATgetArgument(t, 0);
                  p_131 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_131);
              n_131 = t;
              t = o_131;
              t = unbound_vars_0_0(t);
              q_131 = t;
              t = p_131;
              t = use_vars_0_0(t);
              r_131 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, q_131, r_131);
              n_11 = t;
              t = SSLsetAnnotations(n_11, n_131);
            }
          }
        else
          {
            t = l_58;
            {
              ATerm n_58 = t;
              int o_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_131 = NULL,v_131 = NULL,x_131 = NULL,o_11 = NULL;
                  x_131 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_131 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_131);
                  u_131 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_131);
                  o_11 = t;
                  t = SSLsetAnnotations(o_11, u_131);
                  LocalPopChoice(o_58);
                  {
                    ATerm y_131 = NULL,z_131 = NULL,a_132 = NULL,f_132 = NULL,q_11 = NULL;
                    f_132 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        z_131 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_132);
                    y_131 = t;
                    t = z_131;
                    t = unbound_vars_0_0(t);
                    a_132 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, a_132);
                    q_11 = t;
                    t = SSLsetAnnotations(q_11, y_131);
                  }
                }
              else
                {
                  t = n_58;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_13 (ATerm i_70, ATerm j_70, ATerm k_70, ATerm t)
{
  ATerm g_132 = NULL,h_132 = NULL,j_132 = NULL;
  h_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_70, j_70);
  t = p_15(i_70, j_70, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_58 = ATgetFirst((ATermList) t);
      g_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_132), k_70);
  j_132 = t;
  t = SSL_table_put(i_70, j_70, j_132);
  t = h_132;
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm t_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_132 = NULL,m_132 = NULL,n_132 = NULL,w_11 = NULL;
      n_132 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_132);
      l_132 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_132);
      w_11 = t;
      t = SSLsetAnnotations(w_11, l_132);
      LocalPopChoice(v_58);
      {
        ATerm o_132 = NULL,p_132 = NULL,q_132 = NULL,x_132 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            o_132 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_l_55;
        p_132 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, o_132);
        q_132 = t;
        t = term_y_58;
        x_132 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_l_55, (ATerm)ATmakeAppl(sym_Var_1, o_132), term_y_58);
        t = y_13(p_132, q_132, x_132, t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_132);
      }
    }
  else
    {
      t = t_58;
      {
        ATerm z_58 = t;
        int a_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_132 = NULL,z_132 = NULL,a_133 = NULL,b_133 = NULL,y_11 = NULL;
            b_133 = t;
            if(match_cons(t, sym_App_2))
              {
                z_132 = ATgetArgument(t, 0);
                a_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_133);
            y_132 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, z_132, a_133);
            y_11 = t;
            t = SSLsetAnnotations(y_11, y_132);
            LocalPopChoice(a_59);
            {
              ATerm c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL,j_133 = NULL,z_11 = NULL;
              j_133 = t;
              if(match_cons(t, sym_App_2))
                {
                  d_133 = ATgetArgument(t, 0);
                  e_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_133);
              c_133 = t;
              t = d_133;
              t = unbound_vars_0_0(t);
              f_133 = t;
              t = e_133;
              t = use_vars_0_0(t);
              g_133 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, f_133, g_133);
              z_11 = t;
              t = SSLsetAnnotations(z_11, c_133);
            }
          }
        else
          {
            t = z_58;
            {
              ATerm h_59 = t;
              int l_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_133 = NULL,n_133 = NULL,o_133 = NULL,a_12 = NULL;
                  o_133 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      n_133 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_133);
                  k_133 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, n_133);
                  a_12 = t;
                  t = SSLsetAnnotations(a_12, k_133);
                  LocalPopChoice(l_59);
                  {
                    ATerm p_133 = NULL,q_133 = NULL,r_133 = NULL,s_133 = NULL,c_12 = NULL;
                    s_133 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        q_133 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(s_133);
                    p_133 = t;
                    t = q_133;
                    t = unbound_vars_0_0(t);
                    r_133 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, r_133);
                    c_12 = t;
                    t = SSLsetAnnotations(c_12, p_133);
                  }
                }
              else
                {
                  t = h_59;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_20 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm m_20 (ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL,e_134 = NULL,f_134 = NULL,g_134 = NULL,h_134 = NULL,l_12 = NULL;
  h_134 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_134 = ATgetArgument(t, 0);
      e_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_134);
  c_134 = t;
  t = d_134;
  t = map_1_0(n_20, t);
  f_134 = t;
  t = e_134;
  t = unbound_vars_0_0(t);
  g_134 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_134, g_134);
  l_12 = t;
  t = SSLsetAnnotations(l_12, c_134);
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm i_134 = NULL,j_134 = NULL,k_134 = NULL;
  i_134 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_134);
  j_134 = t;
  t = term_v_56;
  k_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_134), term_v_56);
  t = w_14(o_20, j_134, k_134, t);
  t = i_134;
  return(t);
}
ATerm o_20 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm i_136 = NULL,j_136 = NULL,l_136 = NULL,q_136 = NULL,r_136 = NULL,s_13 = NULL;
  r_136 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_136 = ATgetArgument(t, 0);
      l_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_136);
  i_136 = t;
  t = j_136;
  t = unbound_vars_0_0(t);
  q_136 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, q_136, l_136);
  s_13 = t;
  t = SSLsetAnnotations(s_13, i_136);
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm s_136 = NULL,v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL,z_13 = NULL;
  y_136 = t;
  if(match_cons(t, sym_Choice_2))
    {
      v_136 = ATgetArgument(t, 0);
      w_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_136);
  s_136 = t;
  t = w_136;
  t = unbound_vars_0_0(t);
  x_136 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, v_136, x_136);
  z_13 = t;
  t = SSLsetAnnotations(z_13, s_136);
  return(t);
}
ATerm u_20 (ATerm t)
{
  ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL,g_137 = NULL,j_137 = NULL,b_14 = NULL;
  j_137 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      e_137 = ATgetArgument(t, 0);
      f_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_137);
  d_137 = t;
  t = e_137;
  t = unbound_vars_0_0(t);
  g_137 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, g_137, f_137);
  b_14 = t;
  t = SSLsetAnnotations(b_14, d_137);
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL,m_137 = NULL,n_137 = NULL,u_137 = NULL,e_14 = NULL;
  u_137 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      l_137 = ATgetArgument(t, 0);
      m_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_137);
  k_137 = t;
  t = m_137;
  t = unbound_vars_0_0(t);
  n_137 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, l_137, n_137);
  e_14 = t;
  t = SSLsetAnnotations(e_14, k_137);
  return(t);
}
ATerm x_20 (ATerm t)
{
  ATerm c_138 = NULL,f_138 = NULL,g_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL,l_138 = NULL,i_14 = NULL;
  l_138 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      f_138 = ATgetArgument(t, 0);
      g_138 = ATgetArgument(t, 1);
      i_138 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_138);
  c_138 = t;
  t = f_138;
  t = unbound_vars_0_0(t);
  j_138 = t;
  t = g_138;
  t = unbound_vars_0_0(t);
  k_138 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_138, k_138, i_138);
  i_14 = t;
  t = SSLsetAnnotations(i_14, c_138);
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL,s_138 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,j_14 = NULL;
  d_139 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      p_138 = ATgetArgument(t, 0);
      s_138 = ATgetArgument(t, 1);
      b_139 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_139);
  o_138 = t;
  t = b_139;
  t = unbound_vars_0_0(t);
  c_139 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_138, s_138, c_139);
  j_14 = t;
  t = SSLsetAnnotations(j_14, o_138);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm m_59 = t;
  int n_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_133 = NULL,x_133 = NULL,a_134 = NULL,b_134 = NULL,k_12 = NULL;
      b_134 = t;
      if(match_cons(t, sym_Scope_2))
        {
          x_133 = ATgetArgument(t, 0);
          a_134 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_134);
      t_133 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, x_133, a_134);
      k_12 = t;
      t = SSLsetAnnotations(k_12, t_133);
      LocalPopChoice(n_59);
      t = scope_2_0(l_20, m_20, t);
    }
  else
    {
      t = m_59;
      {
        ATerm o_59 = t;
        int p_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_134 = NULL,m_134 = NULL,n_134 = NULL,m_12 = NULL;
            n_134 = t;
            if(match_cons(t, sym_Build_1))
              {
                m_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_134);
            l_134 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, m_134);
            m_12 = t;
            t = SSLsetAnnotations(m_12, l_134);
            LocalPopChoice(p_59);
            {
              ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL,o_12 = NULL;
              r_134 = t;
              if(match_cons(t, sym_Build_1))
                {
                  p_134 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_134);
              o_134 = t;
              t = p_134;
              t = use_vars_0_0(t);
              q_134 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, q_134);
              o_12 = t;
              t = SSLsetAnnotations(o_12, o_134);
            }
          }
        else
          {
            t = o_59;
            {
              ATerm s_59 = t;
              int t_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_134 = NULL,t_134 = NULL,u_134 = NULL,p_12 = NULL;
                  u_134 = t;
                  if(match_cons(t, sym_Match_1))
                    {
                      t_134 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_134);
                  s_134 = t;
                  t = (ATerm) ATmakeAppl(sym_Match_1, t_134);
                  p_12 = t;
                  t = SSLsetAnnotations(p_12, s_134);
                  LocalPopChoice(t_59);
                  {
                    ATerm v_134 = NULL,w_134 = NULL,x_134 = NULL,y_134 = NULL,t_12 = NULL;
                    y_134 = t;
                    if(match_cons(t, sym_Match_1))
                      {
                        w_134 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_134);
                    v_134 = t;
                    t = w_134;
                    t = bind_vars_0_0(t);
                    x_134 = t;
                    t = (ATerm) ATmakeAppl(sym_Match_1, x_134);
                    t_12 = t;
                    t = SSLsetAnnotations(t_12, v_134);
                  }
                }
              else
                {
                  t = s_59;
                  {
                    ATerm u_59 = t;
                    int v_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL,d_135 = NULL,w_12 = NULL;
                        d_135 = t;
                        if(match_cons(t, sym_Rule_3))
                          {
                            a_135 = ATgetArgument(t, 0);
                            b_135 = ATgetArgument(t, 1);
                            c_135 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_135);
                        z_134 = t;
                        t = (ATerm) ATmakeAppl(sym_Rule_3, a_135, b_135, c_135);
                        w_12 = t;
                        t = SSLsetAnnotations(w_12, z_134);
                        LocalPopChoice(v_59);
                        {
                          ATerm e_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL,n_135 = NULL,o_135 = NULL,p_135 = NULL,q_135 = NULL,r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL,b_136 = NULL,c_136 = NULL,q_13 = NULL,p_13 = NULL,m_13 = NULL;
                          c_136 = t;
                          if(match_cons(t, sym_Rule_3))
                            {
                              r_135 = ATgetArgument(t, 0);
                              s_135 = ATgetArgument(t, 1);
                              t_135 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(c_136);
                          q_135 = t;
                          t = r_135;
                          t = bind_vars_0_0(t);
                          u_135 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, u_135, s_135, t_135);
                          m_13 = t;
                          t = SSLsetAnnotations(m_13, q_135);
                          b_136 = t;
                          if(match_cons(t, sym_Rule_3))
                            {
                              k_135 = ATgetArgument(t, 0);
                              l_135 = ATgetArgument(t, 1);
                              n_135 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(b_136);
                          j_135 = t;
                          t = n_135;
                          t = unbound_vars_0_0(t);
                          o_135 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, k_135, l_135, o_135);
                          p_13 = t;
                          t = SSLsetAnnotations(p_13, j_135);
                          p_135 = t;
                          if(match_cons(t, sym_Rule_3))
                            {
                              f_135 = ATgetArgument(t, 0);
                              g_135 = ATgetArgument(t, 1);
                              h_135 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(p_135);
                          e_135 = t;
                          t = g_135;
                          t = use_vars_0_0(t);
                          i_135 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, f_135, i_135, h_135);
                          q_13 = t;
                          t = SSLsetAnnotations(q_13, e_135);
                        }
                      }
                    else
                      {
                        t = u_59;
                        {
                          ATerm w_59 = t;
                          int x_59 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_136 = NULL,e_136 = NULL,g_136 = NULL,h_136 = NULL,r_13 = NULL;
                              h_136 = t;
                              if(match_cons(t, sym_Choice_2))
                                {
                                  e_136 = ATgetArgument(t, 0);
                                  g_136 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(h_136);
                              d_136 = t;
                              t = (ATerm) ATmakeAppl(sym_Choice_2, e_136, g_136);
                              r_13 = t;
                              t = SSLsetAnnotations(r_13, d_136);
                              LocalPopChoice(x_59);
                              t = abstract_choice_2_0(p_20, r_20, t);
                            }
                          else
                            {
                              t = w_59;
                              {
                                ATerm z_59 = t;
                                int a_60 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_136 = NULL,a_137 = NULL,b_137 = NULL,c_137 = NULL,a_14 = NULL;
                                    c_137 = t;
                                    if(match_cons(t, sym_LChoice_2))
                                      {
                                        a_137 = ATgetArgument(t, 0);
                                        b_137 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(c_137);
                                    z_136 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_137, b_137);
                                    a_14 = t;
                                    t = SSLsetAnnotations(a_14, z_136);
                                    LocalPopChoice(a_60);
                                    t = abstract_choice_2_0(u_20, v_20, t);
                                  }
                                else
                                  {
                                    t = z_59;
                                    {
                                      ATerm b_60 = t;
                                      int c_60 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL,y_137 = NULL,z_137 = NULL,h_14 = NULL;
                                          z_137 = t;
                                          if(match_cons(t, sym_GuardedLChoice_3))
                                            {
                                              w_137 = ATgetArgument(t, 0);
                                              x_137 = ATgetArgument(t, 1);
                                              y_137 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(z_137);
                                          v_137 = t;
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_137, x_137, y_137);
                                          h_14 = t;
                                          t = SSLsetAnnotations(h_14, v_137);
                                          LocalPopChoice(c_60);
                                          t = abstract_choice_2_0(x_20, a_21, t);
                                        }
                                      else
                                        {
                                          t = b_60;
                                          t = SRTS_all(unbound_vars_0_0, t);
                                        }
                                    }
                                  }
                              }
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
ATerm b_21 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm n_140 = NULL;
  ATerm d_60 = t;
  int f_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_140 = ATgetArgument(t, 0);
          {
            ATerm m_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_60);
      t = n_140;
    }
  else
    {
      t = d_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_140;
    }
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm q_140 = NULL,r_140 = NULL,c_141 = NULL;
  q_140 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_140);
  r_140 = t;
  t = term_h_55;
  c_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_140), term_h_55);
  t = w_14(e_21, r_140, c_141, t);
  t = q_140;
  return(t);
}
ATerm e_21 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm r_139 = NULL,x_139 = NULL,y_139 = NULL,a_140 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      x_139 = ATgetArgument(t, 0);
      y_139 = ATgetArgument(t, 1);
      a_140 = ATgetArgument(t, 2);
      r_139 = ATgetArgument(t, 3);
      {
        ATerm j_140 = NULL,k_140 = NULL;
        t = (ATerm) ATempty;
        j_140 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_60, x_139);
        k_140 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_60, x_139));
        t = w_14(b_21, j_140, k_140, t);
        t = a_140;
        t = map_1_0(c_21, t);
        t = map_1_0(d_21, t);
        t = r_139;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_139, y_139, a_140, r_139);
      }
    }
  else
    {
      ATerm g_141 = NULL,j_141 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          x_139 = ATgetArgument(t, 0);
          y_139 = ATgetArgument(t, 1);
          a_140 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      g_141 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_60, x_139);
      j_141 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_60, x_139));
      t = w_14(f_21, g_141, j_141, t);
      t = a_140;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, x_139, y_139, a_140);
    }
  return(t);
}
ATerm g_21 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = scope_2_0(j_21, l_21, t);
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm l_21 (ATerm t)
{
  ATerm q_141 = NULL;
  q_141 = t;
  t = free_vars_3_0(n_21, r_21, tboundin_3_0, t);
  t = map_1_0(b_22, t);
  t = q_141;
  {
    ATerm q_60 = t;
    int r_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(r_60);
      }
    else
      {
        t = q_60;
        {
          ATerm s_60 = t;
          int t_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(t_60);
            }
          else
            {
              t = s_60;
              {
                ATerm k_143 = NULL,l_143 = NULL,m_143 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    k_143 = ATgetArgument(t, 0);
                    l_143 = ATgetArgument(t, 1);
                    m_143 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = q_141;
                t = v_13(k_143, l_143, m_143, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_21 (ATerm t)
{
  ATerm r_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_141);
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm u_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_60);
    }
  else
    {
      t = u_60;
      {
        ATerm v_141 = NULL,w_141 = NULL,x_141 = NULL,y_141 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_141 = ATgetArgument(t, 0);
            t = v_141;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_141 = ATgetArgument(t, 0);
                w_141 = ATgetArgument(t, 1);
                x_141 = ATgetArgument(t, 2);
                y_141 = ATgetArgument(t, 3);
                t = x_141;
                t = map_1_0(x_21, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_141 = ATgetArgument(t, 0);
                    w_141 = ATgetArgument(t, 1);
                    x_141 = ATgetArgument(t, 2);
                    y_141 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_141;
                t = map_1_0(y_21, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm g_142 = NULL;
  ATerm w_60 = t;
  int x_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_142 = ATgetArgument(t, 0);
          {
            ATerm y_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_60);
      t = g_142;
    }
  else
    {
      t = w_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_142;
    }
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm d_143 = NULL;
  ATerm z_60 = t;
  int a_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_143 = ATgetArgument(t, 0);
          {
            ATerm c_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_61);
      t = d_143;
    }
  else
    {
      t = z_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_143;
    }
  return(t);
}
ATerm b_22 (ATerm t)
{
  ATerm g_143 = NULL,h_143 = NULL,i_143 = NULL;
  g_143 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_143);
  h_143 = t;
  t = term_v_56;
  i_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_143), term_v_56);
  t = w_14(g_22, h_143, i_143, t);
  t = g_143;
  return(t);
}
ATerm g_22 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(g_21, h_21, t);
  return(t);
}
ATerm j_22 (ATerm t)
{
  ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL,z_19 = NULL;
  f_144 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      e_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_144);
  d_144 = t;
  t = e_144;
  {
    ATerm d_61 = t;
    int e_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_144;
        ;
        LocalPopChoice(e_61);
      }
    else
      {
        t = d_61;
        t = filter_1_0(l_22, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_144;
      }
    t = (ATerm) ATmakeAppl(sym_Overlays_1, e_144);
    z_19 = t;
    t = SSLsetAnnotations(z_19, d_144);
  }
  return(t);
}
ATerm k_22 (ATerm t)
{
  t = Cons_2_0(m_22, n_22, t);
  return(t);
}
ATerm l_22 (ATerm t)
{
  ATerm f_61 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_61;
    }
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL,e_20 = NULL;
  j_144 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_144);
  h_144 = t;
  t = i_144;
  {
    ATerm g_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_144;
        ;
        LocalPopChoice(h_61);
      }
    else
      {
        t = g_61;
        t = filter_1_0(o_22, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_144;
      }
    t = (ATerm) ATmakeAppl(sym_Strategies_1, i_144);
    e_20 = t;
    t = SSLsetAnnotations(e_20, h_144);
  }
  return(t);
}
ATerm n_22 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm i_61 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_61;
    }
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL,y_143 = NULL,z_143 = NULL,a_144 = NULL,b_144 = NULL,c_144 = NULL,g_20 = NULL,f_20 = NULL,y_19 = NULL;
  c_144 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_144);
  s_143 = t;
  t = t_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_143 = ATgetFirst((ATermList) t);
      w_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_143);
  u_143 = t;
  t = v_143;
  if(match_cons(t, sym_Signature_1))
    {
      a_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_143);
  z_143 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, a_144);
  y_19 = t;
  t = SSLsetAnnotations(y_19, z_143);
  b_144 = t;
  t = w_143;
  t = Cons_2_0(j_22, k_22, t);
  x_143 = t;
  t = (ATerm) ATinsert(CheckATermList(x_143), b_144);
  f_20 = t;
  t = SSLsetAnnotations(f_20, u_143);
  y_143 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_143);
  g_20 = t;
  t = SSLsetAnnotations(g_20, s_143);
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL;
  a_145 = t;
  {
    ATerm j_61 = t;
    int k_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm m_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_61);
        t = a_145;
        {
          ATerm n_61 = t;
          if((PushChoice() == 0))
            {
              ATerm q_58 = NULL,r_58 = NULL,w_58 = NULL;
              r_58 = t;
              if(match_cons(t, sym_Var_1))
                {
                  q_58 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_p_61;
              w_58 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_61, r_58);
              t = v_14(w_58, r_58, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm q_61 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_61) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, q_58);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_61;
            }
          t = term_w_61;
        }
      }
    else
      {
        t = j_61;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_w_61;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                b_145 = ATgetArgument(t, 0);
                {
                  ATerm f_145 = NULL;
                  t = b_145;
                  t = free_vars_3_0(q_22, s_22, tboundin_3_0, t);
                  t = map_1_0(v_22, t);
                  f_145 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_x_61, f_145);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    b_145 = ATgetArgument(t, 0);
                    c_145 = ATgetArgument(t, 1);
                    {
                      ATerm i_146 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, b_145, c_145);
                      t = free_vars_3_0(x_22, y_22, tboundin_3_0, t);
                      t = map_1_0(d_23, t);
                      i_146 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_x_61, i_146);
                    }
                  }
                else
                  {
                    ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm y_61 = ATgetArgument(t, 0);
                        ATerm z_61 = ATgetArgument(t, 1);
                        ATerm a_62 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_a_34;
                    d_59 = t;
                    t = (ATerm) ATinsert(ATempty, term_b_62);
                    e_59 = t;
                    t = SSL_printnl(d_59, e_59);
                    t = term_d_34;
                    c_59 = t;
                    t = SSL_exit(c_59);
                    t = (ATerm) ATinsert(ATempty, term_b_62);
                  }
              }
          }
      }
  }
  return(t);
}
ATerm q_22 (ATerm t)
{
  ATerm g_145 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_145);
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm c_62 = t;
  int d_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_62);
    }
  else
    {
      t = c_62;
      {
        ATerm i_145 = NULL,j_145 = NULL,k_145 = NULL,l_145 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_145 = ATgetArgument(t, 0);
            t = i_145;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_145 = ATgetArgument(t, 0);
                j_145 = ATgetArgument(t, 1);
                k_145 = ATgetArgument(t, 2);
                l_145 = ATgetArgument(t, 3);
                t = k_145;
                t = map_1_0(t_22, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_145 = ATgetArgument(t, 0);
                    j_145 = ATgetArgument(t, 1);
                    k_145 = ATgetArgument(t, 2);
                    l_145 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_145;
                t = map_1_0(u_22, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm t_145 = NULL;
  ATerm f_62 = t;
  int g_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_145 = ATgetArgument(t, 0);
          {
            ATerm j_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_62);
      t = t_145;
    }
  else
    {
      t = f_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_145;
    }
  return(t);
}
ATerm u_22 (ATerm t)
{
  ATerm c_146 = NULL;
  ATerm k_62 = t;
  int l_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_146 = ATgetArgument(t, 0);
          {
            ATerm m_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_62);
      t = c_146;
    }
  else
    {
      t = k_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_146;
    }
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm f_146 = NULL;
  f_146 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_146);
  return(t);
}
ATerm x_22 (ATerm t)
{
  ATerm j_146 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_146);
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm n_62 = t;
  int r_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_62);
    }
  else
    {
      t = n_62;
      {
        ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL,o_146 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_146 = ATgetArgument(t, 0);
            t = l_146;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_146 = ATgetArgument(t, 0);
                m_146 = ATgetArgument(t, 1);
                n_146 = ATgetArgument(t, 2);
                o_146 = ATgetArgument(t, 3);
                t = n_146;
                t = map_1_0(a_23, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_146 = ATgetArgument(t, 0);
                    m_146 = ATgetArgument(t, 1);
                    n_146 = ATgetArgument(t, 2);
                    o_146 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_146;
                t = map_1_0(b_23, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm w_146 = NULL;
  ATerm s_62 = t;
  int u_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_146 = ATgetArgument(t, 0);
          {
            ATerm v_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_62);
      t = w_146;
    }
  else
    {
      t = s_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_146;
    }
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm f_147 = NULL;
  ATerm w_62 = t;
  int x_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_147 = ATgetArgument(t, 0);
          {
            ATerm y_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_62);
      t = f_147;
    }
  else
    {
      t = w_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_147;
    }
  return(t);
}
ATerm d_23 (ATerm t)
{
  ATerm i_147 = NULL;
  i_147 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_147);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(p_22, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm q_149 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_149);
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm z_62 = t;
  int b_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_63);
    }
  else
    {
      t = z_62;
      {
        ATerm t_149 = NULL,u_149 = NULL,v_149 = NULL,w_149 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_149 = ATgetArgument(t, 0);
            t = t_149;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_149 = ATgetArgument(t, 0);
                u_149 = ATgetArgument(t, 1);
                v_149 = ATgetArgument(t, 2);
                w_149 = ATgetArgument(t, 3);
                t = v_149;
                t = map_1_0(h_23, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_149 = ATgetArgument(t, 0);
                    u_149 = ATgetArgument(t, 1);
                    v_149 = ATgetArgument(t, 2);
                    w_149 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_149;
                t = map_1_0(i_23, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm l_150 = NULL;
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_150 = ATgetArgument(t, 0);
          {
            ATerm f_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_63);
      t = l_150;
    }
  else
    {
      t = d_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_150;
    }
  return(t);
}
ATerm i_23 (ATerm t)
{
  ATerm u_150 = NULL;
  ATerm g_63 = t;
  int i_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_150 = ATgetArgument(t, 0);
          {
            ATerm s_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_63);
      t = u_150;
    }
  else
    {
      t = g_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_150;
    }
  return(t);
}
ATerm j_23 (ATerm t)
{
  ATerm z_150 = NULL;
  z_150 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_150);
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm a_151 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_151);
  return(t);
}
ATerm n_23 (ATerm t)
{
  ATerm t_63 = t;
  int x_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_63);
    }
  else
    {
      t = t_63;
      {
        ATerm c_151 = NULL,d_151 = NULL,f_151 = NULL,i_151 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_151 = ATgetArgument(t, 0);
            t = c_151;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_151 = ATgetArgument(t, 0);
                d_151 = ATgetArgument(t, 1);
                f_151 = ATgetArgument(t, 2);
                i_151 = ATgetArgument(t, 3);
                t = f_151;
                t = map_1_0(r_23, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_151 = ATgetArgument(t, 0);
                    d_151 = ATgetArgument(t, 1);
                    f_151 = ATgetArgument(t, 2);
                    i_151 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_151;
                t = map_1_0(s_23, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_23 (ATerm t)
{
  ATerm q_151 = NULL;
  ATerm z_63 = t;
  int a_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_151 = ATgetArgument(t, 0);
          {
            ATerm b_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_64);
      t = q_151;
    }
  else
    {
      t = z_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_151;
    }
  return(t);
}
ATerm s_23 (ATerm t)
{
  ATerm b_152 = NULL;
  ATerm c_64 = t;
  int d_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_152 = ATgetArgument(t, 0);
          {
            ATerm e_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_64);
      t = b_152;
    }
  else
    {
      t = c_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_152;
    }
  return(t);
}
ATerm t_23 (ATerm t)
{
  ATerm h_152 = NULL,f_59 = NULL,j_59 = NULL;
  h_152 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_152);
  f_59 = t;
  t = term_p_61;
  j_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_61, (ATerm) ATmakeAppl(sym_Var_1, h_152));
  t = v_14(j_59, f_59, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_64 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_64) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_152);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_152 (ATerm s_148, ATerm t_148, ATerm u_148, ATerm v_148, ATerm w_148, ATerm x_148, ATerm y_148, ATerm t)
  {
    ATerm d_149 = NULL,e_149 = NULL,f_149 = NULL,i_149 = NULL,j_149 = NULL,k_149 = NULL,l_149 = NULL,m_149 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, w_148, term_h_64);
    {
      ATerm i_64 = t;
      if((PushChoice() == 0))
        {
          ATerm n_149 = NULL;
          if(match_cons(t, sym__2))
            {
              n_149 = ATgetArgument(t, 0);
              if((n_149 != ATgetArgument(t, 1)))
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
          t = i_64;
        }
      t = new_0_0(t);
      d_149 = t;
      t = v_148;
      t = dummify_0_0(t);
      f_149 = t;
      {
        ATerm j_64 = t;
        int k_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_149;
            if((v_148 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, d_149);
            ;
            LocalPopChoice(k_64);
          }
        else
          {
            t = j_64;
            t = f_149;
          }
        e_149 = t;
        t = f_149;
        t = free_vars_3_0(e_23, f_23, tboundin_3_0, t);
        t = map_1_0(j_23, t);
        j_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_148, x_148);
        t = free_vars_3_0(k_23, n_23, tboundin_3_0, t);
        t = filter_1_0(t_23, t);
        i_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_149, j_149);
        t = diff_0_0(t);
        k_149 = t;
        t = new_0_0(t);
        l_149 = t;
        t = s_148;
        t = n_0(t);
        m_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_149, (ATerm) ATmakeAppl(sym_Op_2, term_l_64, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_64, (ATerm) ATinsert(CheckATermList(k_149), (ATerm) ATmakeAppl(sym_Str_1, l_149)))), f_149)))), (ATerm) ATmakeAppl(sym_RDefT_4, s_148, t_148, u_148, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_149), v_148), w_148, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_64, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, s_148)))), e_149), (ATerm) ATmakeAppl(sym_Op_2, term_m_64, (ATerm) ATinsert(CheckATermList(k_149), (ATerm) ATmakeAppl(sym_Str_1, l_149)))), x_148))));
      }
    }
    return(t);
  }
  ATerm j_152 = NULL,k_152 = NULL,l_152 = NULL,m_152 = NULL,q_152 = NULL,r_152 = NULL,s_152 = NULL,u_152 = NULL,v_152 = NULL,w_152 = NULL;
  l_152 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      m_152 = ATgetArgument(t, 0);
      q_152 = ATgetArgument(t, 1);
      r_152 = ATgetArgument(t, 2);
      s_152 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_152;
  if(match_cons(t, sym_Rule_3))
    {
      u_152 = ATgetArgument(t, 0);
      v_152 = ATgetArgument(t, 1);
      w_152 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_152;
  if(match_cons(t, sym_Op_2))
    {
      j_152 = ATgetArgument(t, 0);
      k_152 = ATgetArgument(t, 1);
      t = k_152;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_152;
          if(match_string(t, "Undefined"))
            {
              ATerm r_64 = t;
              int s_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_59 = NULL,e_60 = NULL,k_60 = NULL,l_60 = NULL;
                  t = l_152;
                  t = new_0_0(t);
                  e_60 = t;
                  t = u_152;
                  t = dummify_0_0(t);
                  y_59 = t;
                  {
                    ATerm t_64 = t;
                    int u_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_59;
                        if((u_152 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_60);
                        ;
                        LocalPopChoice(u_64);
                      }
                    else
                      {
                        t = t_64;
                        t = y_59;
                      }
                    k_60 = t;
                    t = m_152;
                    t = n_0(t);
                    l_60 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, l_60, (ATerm) ATmakeAppl(sym_Op_2, term_l_64, (ATerm) ATinsert(ATinsert(ATempty, term_h_64), y_59)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_152, q_152, r_152, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_60), u_152), term_h_64, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_64, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_152)))), k_60), term_h_64), (ATerm) ATmakeAppl(sym_Seq_2, w_152, term_f_42)))));
                  }
                  ;
                  LocalPopChoice(s_64);
                }
              else
                {
                  t = r_64;
                  t = z_152(m_152, q_152, r_152, u_152, v_152, w_152, l_152, t);
                }
            }
          else
            {
              t = z_152(m_152, q_152, r_152, u_152, v_152, w_152, l_152, t);
            }
        }
      else
        {
          t = j_152;
          t = z_152(m_152, q_152, r_152, u_152, v_152, w_152, l_152, t);
        }
    }
  else
    {
      t = z_152(m_152, q_152, r_152, u_152, v_152, w_152, l_152, t);
    }
  return(t);
}
ATerm u_23 (ATerm t)
{
  t = SplitDynamicRule_1_0(j_24, t);
  return(t);
}
ATerm j_24 (ATerm t)
{
  ATerm l_153 = NULL;
  l_153 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_64, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_153))));
  return(t);
}
ATerm k_24 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm l_24 (ATerm t)
{
  ATerm m_153 = NULL,n_153 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_153 = ATgetFirst((ATermList) t);
      n_153 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_153, n_153);
  return(t);
}
ATerm o_24 (ATerm t)
{
  ATerm o_153 = NULL,p_153 = NULL,q_153 = NULL,r_153 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_64 = ATgetArgument(t, 0);
      if(match_cons(z_64, sym__2))
        {
          o_153 = ATgetArgument(z_64, 0);
          p_153 = ATgetArgument(z_64, 1);
        }
      else
        _fail(t);
      {
        ATerm d_65 = ATgetArgument(t, 1);
        if(match_cons(d_65, sym__2))
          {
            q_153 = ATgetArgument(d_65, 0);
            r_153 = ATgetArgument(d_65, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_153), o_153), (ATerm) ATinsert(CheckATermList(r_153), p_153));
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = SplitDynamicRule_1_0(r_24, t);
  return(t);
}
ATerm r_24 (ATerm t)
{
  ATerm a_154 = NULL;
  a_154 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_65, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_154))));
  return(t);
}
ATerm s_24 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_35;
  return(t);
}
ATerm t_24 (ATerm t)
{
  ATerm b_154 = NULL,c_154 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_154 = ATgetFirst((ATermList) t);
      c_154 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_154, c_154);
  return(t);
}
ATerm u_24 (ATerm t)
{
  ATerm d_154 = NULL,e_154 = NULL,f_154 = NULL,g_154 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_65 = ATgetArgument(t, 0);
      if(match_cons(h_65, sym__2))
        {
          d_154 = ATgetArgument(h_65, 0);
          e_154 = ATgetArgument(h_65, 1);
        }
      else
        _fail(t);
      {
        ATerm i_65 = ATgetArgument(t, 1);
        if(match_cons(i_65, sym__2))
          {
            f_154 = ATgetArgument(i_65, 0);
            g_154 = ATgetArgument(i_65, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_154), d_154), (ATerm) ATinsert(CheckATermList(g_154), e_154));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm f_153 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      f_153 = ATgetArgument(t, 0);
      t = f_153;
      t = map_1_0(u_23, t);
      t = genzip_4_0(k_24, l_24, o_24, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          f_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_153;
      t = map_1_0(q_24, t);
      t = genzip_4_0(s_24, t_24, u_24, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm i_154 (ATerm t)
  {
    ATerm j_65 = t;
    int k_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_115(t);
        ;
        LocalPopChoice(k_65);
      }
    else
      {
        t = j_65;
        t = SRTS_one(i_154, t);
      }
    return(t);
  }
  t = i_154(t);
  return(t);
}
ATerm w_24 (ATerm t)
{
  t = term_p_61;
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm w_154 = NULL,x_154 = NULL,y_154 = NULL;
  w_154 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_154);
  x_154 = t;
  t = term_m_65;
  y_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_154), term_m_65);
  t = w_14(c_25, x_154, y_154, t);
  t = w_154;
  return(t);
}
ATerm c_25 (ATerm t)
{
  t = term_p_61;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm h_141 (ATerm), ATerm t)
{
  ATerm d_155 (ATerm t)
  {
    ATerm v_24 (ATerm t)
    {
      ATerm n_65 = t;
      int o_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_141(t);
          ;
          LocalPopChoice(o_65);
        }
      else
        {
          t = n_65;
          {
            ATerm p_154 = NULL,q_154 = NULL,v_154 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                if(((p_154 != NULL) && (p_154 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_154 = ATgetArgument(t, 0);
                if(((q_154 != NULL) && (q_154 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_154 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_154), not_null(q_154));
            {
              ATerm y_24 (ATerm t)
              {
                t = not_null(p_154);
                t = map_1_0(b_25, t);
                t = not_null(q_154);
                t = d_155(t);
                if(((v_154 != NULL) && (v_154 != t)))
                  _fail(t);
                else
                  v_154 = t;
                return(t);
              }
              t = scope_2_0(w_24, y_24, t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_154), not_null(v_154));
            }
          }
        }
      return(t);
    }
    t = oncetd_1_0(v_24, t);
    return(t);
  }
  t = d_155(t);
  return(t);
}
ATerm g_25 (ATerm t)
{
  t = term_p_61;
  return(t);
}
ATerm i_25 (ATerm t)
{
  ATerm l_155 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_155);
  return(t);
}
ATerm j_25 (ATerm t)
{
  ATerm p_65 = t;
  int r_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_65);
    }
  else
    {
      t = p_65;
      {
        ATerm t_155 = NULL,u_155 = NULL,v_155 = NULL,w_155 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_155 = ATgetArgument(t, 0);
            t = t_155;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_155 = ATgetArgument(t, 0);
                u_155 = ATgetArgument(t, 1);
                v_155 = ATgetArgument(t, 2);
                w_155 = ATgetArgument(t, 3);
                t = v_155;
                t = map_1_0(o_25, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_155 = ATgetArgument(t, 0);
                    u_155 = ATgetArgument(t, 1);
                    v_155 = ATgetArgument(t, 2);
                    w_155 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_155;
                t = map_1_0(q_25, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_25 (ATerm t)
{
  ATerm g_156 = NULL;
  ATerm u_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_156 = ATgetArgument(t, 0);
          {
            ATerm w_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_65);
      t = g_156;
    }
  else
    {
      t = u_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_156;
    }
  return(t);
}
ATerm q_25 (ATerm t)
{
  ATerm s_156 = NULL;
  ATerm x_65 = t;
  int y_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_156 = ATgetArgument(t, 0);
          {
            ATerm z_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_65);
      t = s_156;
    }
  else
    {
      t = x_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_156;
    }
  return(t);
}
ATerm r_25 (ATerm t)
{
  ATerm v_156 = NULL,y_156 = NULL,z_156 = NULL;
  v_156 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_156);
  y_156 = t;
  t = term_m_65;
  z_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_156), term_m_65);
  t = w_14(s_25, y_156, z_156, t);
  t = v_156;
  return(t);
}
ATerm s_25 (ATerm t)
{
  t = term_p_61;
  return(t);
}
ATerm g_14 (ATerm r_74, ATerm q_74, ATerm t)
{
  ATerm h_155 = NULL,i_155 = NULL,j_155 = NULL;
  ATerm h_25 (ATerm t)
  {
    t = not_null(r_74);
    t = free_vars_3_0(i_25, j_25, tboundin_3_0, t);
    t = map_1_0(r_25, t);
    t = not_null(r_74);
    {
      ATerm t_25 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((i_155 != NULL) && (i_155 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              i_155 = ATgetArgument(t, 0);
            if(((h_155 != NULL) && (h_155 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_155 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_155));
        return(t);
      }
      t = split_dynamic_rule_1_0(t_25, t);
      if(((j_155 != NULL) && (j_155 != t)))
        _fail(t);
      else
        j_155 = t;
    }
    return(t);
  }
  t = scope_2_0(g_25, h_25, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_155)), not_null(j_155)), not_null(q_74));
  t = conc_0_0(t);
  return(t);
}
ATerm listtd_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  ATerm r_157 (ATerm t)
  {
    ATerm m_157 = NULL,n_157 = NULL,o_157 = NULL;
    t = c_121(t);
    m_157 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_157;
      }
    else
      {
        ATerm l_61 = NULL,o_61 = NULL,q_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_157 = ATgetFirst((ATermList) t);
            o_157 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_157);
        l_61 = t;
        t = o_157;
        t = r_157(t);
        o_61 = t;
        t = (ATerm) ATinsert(CheckATermList(o_61), n_157);
        q_20 = t;
        t = SSLsetAnnotations(q_20, l_61);
      }
    return(t);
  }
  t = r_157(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm v_157 = NULL,w_157 = NULL,y_157 = NULL,b_158 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      y_157 = ATgetArgument(t, 0);
      b_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_157;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_157 = ATgetFirst((ATermList) t);
      w_157 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_66, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, w_157, b_158)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_157))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_158;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t)
{
  ATerm t_160 = NULL,u_160 = NULL,w_160 = NULL,x_160 = NULL,z_160 = NULL;
  x_160 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_160 = ATgetArgument(t, 0);
      t_160 = ATgetArgument(t, 1);
      {
        ATerm e_62 = NULL,h_62 = NULL,i_62 = NULL,s_20 = NULL;
        t = SSLgetAnnotations(x_160);
        e_62 = t;
        t = z_160;
        t = l_142(t);
        h_62 = t;
        t = t_160;
        t = j_142(t);
        i_62 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_62, i_62);
        s_20 = t;
        t = SSLsetAnnotations(s_20, e_62);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          z_160 = ATgetArgument(t, 0);
          t_160 = ATgetArgument(t, 1);
          u_160 = ATgetArgument(t, 2);
          w_160 = ATgetArgument(t, 3);
          {
            ATerm c_63 = NULL,j_63 = NULL,k_63 = NULL,m_63 = NULL,n_63 = NULL,t_20 = NULL;
            t = SSLgetAnnotations(x_160);
            c_63 = t;
            t = z_160;
            t = l_142(t);
            j_63 = t;
            t = t_160;
            t = l_142(t);
            k_63 = t;
            t = u_160;
            t = l_142(t);
            m_63 = t;
            t = w_160;
            t = j_142(t);
            n_63 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_63, k_63, m_63, n_63);
            t_20 = t;
            t = SSLsetAnnotations(t_20, c_63);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              z_160 = ATgetArgument(t, 0);
              t_160 = ATgetArgument(t, 1);
              u_160 = ATgetArgument(t, 2);
              w_160 = ATgetArgument(t, 3);
              {
                ATerm o_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,g_65 = NULL,w_20 = NULL;
                t = SSLgetAnnotations(x_160);
                o_64 = t;
                t = z_160;
                t = l_142(t);
                a_65 = t;
                t = t_160;
                t = l_142(t);
                b_65 = t;
                t = u_160;
                t = l_142(t);
                c_65 = t;
                t = w_160;
                t = j_142(t);
                g_65 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, a_65, b_65, c_65, g_65);
                w_20 = t;
                t = SSLsetAnnotations(w_20, o_64);
              }
            }
          else
            {
              ATerm q_65 = NULL,s_65 = NULL,z_20 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_160 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_160);
              q_65 = t;
              t = z_160;
              t = j_142(t);
              s_65 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_65);
              z_20 = t;
              t = SSLsetAnnotations(z_20, q_65);
            }
        }
    }
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm k_161 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_161);
  return(t);
}
ATerm v_25 (ATerm t)
{
  ATerm c_66 = t;
  int e_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_66);
    }
  else
    {
      t = c_66;
      {
        ATerm n_161 = NULL,o_161 = NULL,p_161 = NULL,q_161 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_161 = ATgetArgument(t, 0);
            t = n_161;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_161 = ATgetArgument(t, 0);
                o_161 = ATgetArgument(t, 1);
                p_161 = ATgetArgument(t, 2);
                q_161 = ATgetArgument(t, 3);
                t = p_161;
                t = map_1_0(w_25, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_161 = ATgetArgument(t, 0);
                    o_161 = ATgetArgument(t, 1);
                    p_161 = ATgetArgument(t, 2);
                    q_161 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_161;
                t = map_1_0(x_25, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_25 (ATerm t)
{
  ATerm a_162 = NULL;
  ATerm f_66 = t;
  int i_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_162 = ATgetArgument(t, 0);
          {
            ATerm j_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_66);
      t = a_162;
    }
  else
    {
      t = f_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_162;
    }
  return(t);
}
ATerm x_25 (ATerm t)
{
  ATerm y_162 = NULL;
  ATerm l_66 = t;
  int m_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_162 = ATgetArgument(t, 0);
          {
            ATerm o_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_66);
      t = y_162;
    }
  else
    {
      t = l_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_162;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(u_25, v_25, tboundin_3_0, t);
  return(t);
}
ATerm y_25 (ATerm t)
{
  ATerm t_163 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_163);
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm p_66 = t;
  int q_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_66);
    }
  else
    {
      t = p_66;
      {
        ATerm v_163 = NULL,w_163 = NULL,x_163 = NULL,a_164 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_163 = ATgetArgument(t, 0);
            t = v_163;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_163 = ATgetArgument(t, 0);
                w_163 = ATgetArgument(t, 1);
                x_163 = ATgetArgument(t, 2);
                a_164 = ATgetArgument(t, 3);
                t = x_163;
                t = map_1_0(e_26, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_163 = ATgetArgument(t, 0);
                    w_163 = ATgetArgument(t, 1);
                    x_163 = ATgetArgument(t, 2);
                    a_164 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_163;
                t = map_1_0(f_26, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_26 (ATerm t)
{
  ATerm j_164 = NULL;
  ATerm r_66 = t;
  int v_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_164 = ATgetArgument(t, 0);
          {
            ATerm w_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_66);
      t = j_164;
    }
  else
    {
      t = r_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_164;
    }
  return(t);
}
ATerm f_26 (ATerm t)
{
  ATerm w_164 = NULL;
  ATerm x_66 = t;
  int y_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_164 = ATgetArgument(t, 0);
          {
            ATerm z_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_66);
      t = w_164;
    }
  else
    {
      t = x_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_164;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm m_163 = NULL,q_163 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      q_163 = ATgetArgument(t, 0);
      t = q_163;
      if(match_cons(t, sym_Rule_3))
        {
          m_163 = ATgetArgument(t, 0);
          {
            ATerm a_67 = ATgetArgument(t, 1);
          }
          {
            ATerm b_67 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = m_163;
      t = free_vars_3_0(y_25, z_25, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_163 = ATgetArgument(t, 0);
          {
            ATerm c_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_163;
    }
  return(t);
}
ATerm m_14 (ATerm x_123 (ATerm), ATerm h_47, ATerm g_47, ATerm t)
{
  ATerm r_165 (ATerm t)
  {
    ATerm m_165 = NULL,n_165 = NULL,o_165 = NULL;
    m_165 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(g_47);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_165 = ATgetFirst((ATermList) t);
            o_165 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_67 = t;
          int f_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_165;
              {
                ATerm g_26 (ATerm t)
                {
                  t = not_null(g_47);
                  return(t);
                }
                t = n_14(x_123, g_26, not_null(n_165), not_null(o_165), t);
                t = r_165(t);
              }
              ;
              LocalPopChoice(f_67);
            }
          else
            {
              t = d_67;
              {
                ATerm d_66 = NULL,k_66 = NULL,i_21 = NULL;
                t = SSLgetAnnotations(m_165);
                d_66 = t;
                t = o_165;
                t = r_165(t);
                k_66 = t;
                t = (ATerm) ATinsert(CheckATermList(k_66), n_165);
                i_21 = t;
                t = SSLsetAnnotations(i_21, d_66);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(h_47);
  t = r_165(t);
  return(t);
}
ATerm n_14 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm l_47, ATerm k_47, ATerm t)
{
  t = b_124(t);
  {
    ATerm h_26 (ATerm t)
    {
      ATerm v_165 = NULL;
      v_165 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_47), v_165);
      t = a_124(t);
      return(t);
    }
    t = fetch_1_0(h_26, t);
    t = not_null(k_47);
  }
  return(t);
}
ATerm o_14 (ATerm s_123 (ATerm), ATerm f_47, ATerm e_47, ATerm t)
{
  ATerm r_166 (ATerm t)
  {
    ATerm k_166 = NULL,l_166 = NULL,m_166 = NULL;
    k_166 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_166;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_166 = ATgetFirst((ATermList) t);
            m_166 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_67 = t;
          int h_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_166;
              {
                ATerm i_26 (ATerm t)
                {
                  t = not_null(e_47);
                  return(t);
                }
                t = n_14(s_123, i_26, not_null(l_166), not_null(m_166), t);
                t = r_166(t);
              }
              ;
              LocalPopChoice(h_67);
            }
          else
            {
              t = g_67;
              {
                ATerm m_67 = NULL,t_67 = NULL,k_21 = NULL;
                t = SSLgetAnnotations(k_166);
                m_67 = t;
                t = m_166;
                t = r_166(t);
                t_67 = t;
                t = (ATerm) ATinsert(CheckATermList(t_67), l_166);
                k_21 = t;
                t = SSLsetAnnotations(k_21, m_67);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(f_47);
  t = r_166(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm t)
{
  ATerm i_167 (ATerm t)
  {
    ATerm i_67 = t;
    int j_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_121(t);
        ;
        LocalPopChoice(j_67);
      }
    else
      {
        t = i_67;
        {
          ATerm y_166 = NULL,b_167 = NULL,c_167 = NULL,d_167 = NULL,e_167 = NULL,h_167 = NULL,m_21 = NULL;
          t = x_121(t);
          h_167 = t;
          if(match_cons(t, sym__2))
            {
              b_167 = ATgetArgument(t, 0);
              c_167 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_167);
          y_166 = t;
          t = b_167;
          t = z_121(t);
          d_167 = t;
          t = c_167;
          t = i_167(t);
          e_167 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_167, e_167);
          m_21 = t;
          t = SSLsetAnnotations(m_21, y_166);
          t = y_121(t);
        }
      }
    return(t);
  }
  t = i_167(t);
  return(t);
}
ATerm j_26 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_67 = ATgetArgument(t, 0);
      if(((ATgetType(k_67) != AT_LIST) || !(ATisEmpty(k_67))))
        _fail(t);
      {
        ATerm l_67 = ATgetArgument(t, 1);
        if(((ATgetType(l_67) != AT_LIST) || !(ATisEmpty(l_67))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_26 (ATerm t)
{
  ATerm v_167 = NULL,w_167 = NULL,x_167 = NULL,y_167 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_67 = ATgetArgument(t, 0);
      if(((ATgetType(n_67) == AT_LIST) && !(ATisEmpty(n_67))))
        {
          v_167 = ATgetFirst((ATermList) n_67);
          w_167 = (ATerm) ATgetNext((ATermList) n_67);
        }
      else
        _fail(t);
      {
        ATerm p_67 = ATgetArgument(t, 1);
        if(((ATgetType(p_67) == AT_LIST) && !(ATisEmpty(p_67))))
          {
            x_167 = ATgetFirst((ATermList) p_67);
            y_167 = (ATerm) ATgetNext((ATermList) p_67);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_167, x_167), (ATerm) ATmakeAppl(sym__2, w_167, y_167));
  return(t);
}
ATerm n_26 (ATerm t)
{
  ATerm z_167 = NULL,a_168 = NULL;
  if(match_cons(t, sym__2))
    {
      z_167 = ATgetArgument(t, 0);
      a_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_168), z_167);
  return(t);
}
ATerm s_14 (ATerm q_656, ATerm v_656, ATerm h_74, ATerm t)
{
  ATerm k_167 = NULL,o_167 = NULL,p_167 = NULL,q_167 = NULL;
  t = SSL_explode_term(v_656);
  if(match_cons(t, sym__2))
    {
      k_167 = ATgetArgument(t, 0);
      p_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_656);
  if(match_cons(t, sym__2))
    {
      if((k_167 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_167, p_167);
  t = genzip_4_0(j_26, m_26, n_26, _id, t);
  q_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_167, h_74);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm t)
{
  ATerm d_168 (ATerm t)
  {
    ATerm q_67 = t;
    int r_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_113(t);
        ;
        LocalPopChoice(r_67);
      }
    else
      {
        t = q_67;
        t = u_113(t);
        t = d_168(t);
      }
    return(t);
  }
  t = d_168(t);
  return(t);
}
ATerm for_3_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  t = w_113(t);
  t = while_not_2_0(x_113, y_113, t);
  return(t);
}
ATerm o_26 (ATerm t)
{
  ATerm r_168 = NULL;
  r_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_168);
  return(t);
}
ATerm q_26 (ATerm t)
{
  ATerm u_168 = NULL,w_168 = NULL,x_168 = NULL,y_168 = NULL,o_21 = NULL;
  y_168 = t;
  if(match_cons(t, sym__2))
    {
      w_168 = ATgetArgument(t, 0);
      x_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_168);
  u_168 = t;
  t = x_168;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_168, x_168);
  o_21 = t;
  t = SSLsetAnnotations(o_21, u_168);
  return(t);
}
ATerm r_26 (ATerm t)
{
  ATerm b_170 = NULL,c_170 = NULL,f_170 = NULL,g_170 = NULL,h_170 = NULL;
  b_170 = t;
  if(match_cons(t, sym__2))
    {
      c_170 = ATgetArgument(t, 0);
      f_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_170;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_170 = ATgetFirst((ATermList) t);
      h_170 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_67 = t;
        int u_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_170(c_170, f_170, b_170, t);
            ;
            LocalPopChoice(u_67);
          }
        else
          {
            t = s_67;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_170), g_170), h_170);
          }
      }
    }
  else
    {
      t = s_170(c_170, f_170, b_170, t);
    }
  return(t);
}
ATerm s_170 (ATerm z_168, ATerm a_169, ATerm b_169, ATerm t)
{
  ATerm e_169 = NULL,l_169 = NULL,u_21 = NULL,o_169 = NULL,p_169 = NULL,s_169 = NULL,t_169 = NULL;
  t = SSLgetAnnotations(b_169);
  e_169 = t;
  t = a_169;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_169 = ATgetFirst((ATermList) t);
      t_169 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_169;
  if(match_cons(t, sym__2))
    {
      p_169 = ATgetArgument(t, 0);
      s_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_67 = t;
    int w_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_169;
        if((p_169 != t))
          {
            _fail(t);
          }
        t = t_169;
        ;
        LocalPopChoice(w_67);
      }
    else
      {
        t = v_67;
        t = a_169;
        t = s_14(p_169, s_169, t_169, t);
      }
    l_169 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_168, l_169);
    u_21 = t;
    t = SSLsetAnnotations(u_21, e_169);
  }
  return(t);
}
ATerm t_26 (ATerm t)
{
  ATerm r_170 = NULL;
  if(match_cons(t, sym__2))
    {
      r_170 = ATgetArgument(t, 0);
      if((r_170 != ATgetArgument(t, 1)))
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
  ATerm y_67 = t;
  int b_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_26, q_26, r_26, t);
      ;
      LocalPopChoice(b_68);
    }
  else
    {
      t = y_67;
      {
        ATerm m_170 = NULL,n_170 = NULL,o_170 = NULL;
        m_170 = t;
        if(match_cons(t, sym__2))
          {
            n_170 = ATgetArgument(t, 0);
            o_170 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_170;
        t = o_14(t_26, n_170, o_170, t);
      }
    }
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_26 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym__2))
    {
      m_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(a_27, m_68, n_68, t);
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm o_68 = NULL;
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      if((o_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_27 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL;
  if(match_cons(t, sym__2))
    {
      d_69 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(d_27, d_69, e_69, t);
  return(t);
}
ATerm d_27 (ATerm t)
{
  ATerm f_69 = NULL;
  if(match_cons(t, sym__2))
    {
      f_69 = ATgetArgument(t, 0);
      if((f_69 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm a_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_171 (ATerm t)
  {
    ATerm c_68 = t;
    int e_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_140(t);
        ;
        LocalPopChoice(e_68);
      }
    else
      {
        t = c_68;
        {
          ATerm g_68 = t;
          int k_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_170 = NULL,v_170 = NULL,z_67 = NULL,a_68 = NULL;
              if(((u_170 != NULL) && (u_170 != t)))
                _fail(t);
              else
                u_170 = t;
              t = z_140(t);
              if(((v_170 != NULL) && (v_170 != t)))
                _fail(t);
              else
                v_170 = t;
              t = not_null(u_170);
              {
                ATerm u_26 (ATerm t)
                {
                  ATerm z_170 = NULL;
                  t = j_171(t);
                  z_170 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_170, not_null(v_170));
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_141(u_26, j_171, w_26, t);
                if(((a_68 != NULL) && (a_68 != t)))
                  _fail(t);
                else
                  a_68 = t;
                t = SSL_explode_term(not_null(a_68));
                if(match_cons(t, sym__2))
                  {
                    ATerm l_68 = ATgetArgument(t, 0);
                    if(((z_67 != NULL) && (z_67 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_67 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(z_67);
                t = foldr_3_0(y_26, z_26, _id, t);
              }
              ;
              LocalPopChoice(k_68);
            }
          else
            {
              t = g_68;
              {
                ATerm q_68 = NULL,r_68 = NULL;
                r_68 = t;
                t = SSL_explode_term(r_68);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_68 = ATgetArgument(t, 0);
                    q_68 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_68;
                t = foldr_3_0(b_27, c_27, j_171, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_171(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm d_114 (ATerm), ATerm t)
{
  ATerm f_27 (ATerm t)
  {
    t = bottomup_1_0(d_114, t);
    return(t);
  }
  t = SRTS_all(f_27, t);
  t = d_114(t);
  return(t);
}
ATerm v_14 (ATerm g_70, ATerm h_70, ATerm t)
{
  ATerm k_171 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_70, h_70);
  t = p_15(g_70, h_70, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_171 = ATgetFirst((ATermList) t);
      {
        ATerm s_68 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_171;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm i_172 = NULL,j_172 = NULL;
  i_172 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_68 = t;
    int u_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_70 = NULL;
        t = term_v_68;
        q_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_68, i_172);
        t = v_14(q_70, i_172, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm w_68 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_68) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, j_172, (ATerm) ATempty);
        ;
        LocalPopChoice(u_68);
      }
    else
      {
        t = t_68;
        {
          ATerm t_71 = NULL;
          t = term_v_68;
          t_71 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_68, i_172);
          t = v_14(t_71, i_172, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm x_68 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_68) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, j_172, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm u_115 (ATerm), ATerm t)
{
  ATerm m_172 (ATerm t)
  {
    ATerm y_68 = t;
    int z_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        ;
        LocalPopChoice(z_68);
      }
    else
      {
        t = y_68;
        t = SRTS_all(m_172, t);
      }
    return(t);
  }
  t = m_172(t);
  return(t);
}
ATerm w_14 (ATerm r_130 (ATerm), ATerm u_58, ATerm s_58, ATerm t)
{
  ATerm n_172 = NULL,p_172 = NULL,q_172 = NULL,r_172 = NULL,s_172 = NULL,t_172 = NULL;
  r_172 = t;
  t = r_130(t);
  n_172 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_172, u_58, s_58);
  t = q_15(n_172, u_58, s_58, t);
  {
    ATerm a_69 = t;
    int b_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_172 = NULL;
        t = term_c_69;
        u_172 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_172, term_c_69);
        t = p_15(n_172, u_172, t);
        ;
        LocalPopChoice(b_69);
      }
    else
      {
        t = a_69;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_172 = ATgetFirst((ATermList) t);
        q_172 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_69;
    s_172 = t;
    t = (ATerm) ATinsert(CheckATermList(q_172), (ATerm) ATinsert(CheckATermList(p_172), u_58));
    t_172 = t;
    t = SSL_table_put(n_172, s_172, t_172);
    t = r_172;
  }
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = term_v_68;
  return(t);
}
ATerm j_27 (ATerm t)
{
  t = term_v_68;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm y_172 = NULL,c_173 = NULL,f_173 = NULL,g_173 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      c_173 = ATgetArgument(t, 0);
      f_173 = ATgetArgument(t, 1);
      y_172 = ATgetArgument(t, 2);
      {
        ATerm m_173 = NULL,p_173 = NULL;
        t = f_173;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_173);
        m_173 = t;
        t = term_h_69;
        p_173 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_173), term_h_69);
        t = w_14(h_27, m_173, p_173, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_173, (ATerm)ATempty, y_172);
      }
    }
  else
    {
      ATerm w_173 = NULL,x_173 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          c_173 = ATgetArgument(t, 0);
          f_173 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_173;
      if(match_cons(t, sym_ConstType_1))
        {
          g_173 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_173);
      w_173 = t;
      t = term_j_69;
      x_173 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_173), term_j_69);
      t = w_14(j_27, w_173, x_173, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_173, (ATerm) ATmakeAppl(sym_ConstType_1, g_173));
    }
  return(t);
}
ATerm x_14 (ATerm a_70, ATerm b_70, ATerm t)
{
  ATerm y_173 = NULL,b_174 = NULL;
  b_174 = t;
  {
    ATerm k_69 = t;
    int l_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
        t = p_15(a_70, b_70, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_69 = ATgetFirst((ATermList) t);
            y_173 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_69);
        t = SSL_table_put(a_70, b_70, y_173);
        t = (ATerm) ATmakeAppl(sym__3, a_70, b_70, y_173);
      }
    else
      {
        t = k_69;
        t = SSL_table_remove(a_70, b_70);
        t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
      }
    t = b_174;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm c_174 = NULL,d_174 = NULL,h_174 = NULL,l_174 = NULL,m_174 = NULL;
  if(((l_174 != NULL) && (l_174 != t)))
    _fail(t);
  else
    l_174 = t;
  t = o_130(t);
  if(((h_174 != NULL) && (h_174 != t)))
    _fail(t);
  else
    h_174 = t;
  {
    ATerm n_69 = t;
    int o_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_174 = NULL;
        t = term_c_69;
        n_174 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_174), term_c_69);
        t = p_15(not_null(h_174), n_174, t);
        ;
        LocalPopChoice(o_69);
      }
    else
      {
        t = n_69;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_174 != NULL) && (d_174 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_174 = ATgetFirst((ATermList) t);
        if(((c_174 != NULL) && (c_174 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          c_174 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_69;
    if(((m_174 != NULL) && (m_174 != t)))
      _fail(t);
    else
      m_174 = t;
    t = SSL_table_put(not_null(h_174), not_null(m_174), not_null(c_174));
    t = not_null(d_174);
    {
      ATerm l_27 (ATerm t)
      {
        ATerm o_174 = NULL;
        o_174 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_174), o_174);
        t = x_14(not_null(h_174), o_174, t);
        return(t);
      }
      t = map_1_0(l_27, t);
      t = not_null(l_174);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t)
{
  ATerm p_69 = t;
  int q_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_112(t);
      t = y_112(t);
      ;
      LocalPopChoice(q_69);
    }
  else
    {
      t = p_69;
      t = y_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm q_174 = NULL,r_174 = NULL,s_174 = NULL,t_174 = NULL,u_174 = NULL;
  r_174 = t;
  t = n_130(t);
  q_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_174, term_c_69);
  {
    ATerm r_69 = t;
    int s_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_174 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_69 = ATgetArgument(t, 0);
            ATerm x_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_69;
        y_174 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_174, term_c_69);
        t = p_15(q_174, y_174, t);
        ;
        LocalPopChoice(s_69);
      }
    else
      {
        t = r_69;
        t = (ATerm) ATempty;
      }
    s_174 = t;
    t = term_c_69;
    t_174 = t;
    t = (ATerm) ATinsert(CheckATermList(s_174), (ATerm) ATempty);
    u_174 = t;
    t = SSL_table_put(q_174, t_174, u_174);
    t = r_174;
  }
  return(t);
}
ATerm scope_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t)
{
  ATerm o_27 (ATerm t)
  {
    t = end_scope_1_0(p_130, t);
    return(t);
  }
  t = begin_scope_1_0(p_130, t);
  t = restore_always_2_0(q_130, o_27, t);
  return(t);
}
ATerm u_27 (ATerm t)
{
  t = term_v_68;
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm f_175 = NULL,g_175 = NULL,j_175 = NULL,k_175 = NULL,f_22 = NULL;
  k_175 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_175);
  f_175 = t;
  t = g_175;
  t = map_1_0(y_27, t);
  j_175 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_175);
  f_22 = t;
  t = SSLsetAnnotations(f_22, f_175);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm y_27 (ATerm t)
{
  ATerm c_176 = NULL,d_176 = NULL;
  d_176 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      c_176 = ATgetArgument(t, 0);
      {
        ATerm y_69 = t;
        int z_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_72 = NULL,i_72 = NULL,c_22 = NULL;
            t = SSLgetAnnotations(d_176);
            f_72 = t;
            t = c_176;
            t = map_1_0(z_27, t);
            i_72 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, i_72);
            c_22 = t;
            t = SSLsetAnnotations(c_22, f_72);
            ;
            LocalPopChoice(z_69);
          }
        else
          {
            t = y_69;
            t = d_176;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          c_176 = ATgetArgument(t, 0);
          {
            ATerm c_70 = t;
            int d_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_73 = NULL,o_73 = NULL,d_22 = NULL;
                t = SSLgetAnnotations(d_176);
                l_73 = t;
                t = c_176;
                t = map_1_0(a_28, t);
                o_73 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, o_73);
                d_22 = t;
                t = SSLsetAnnotations(d_22, l_73);
                ;
                LocalPopChoice(d_70);
              }
            else
              {
                t = c_70;
                t = d_176;
              }
          }
        }
      else
        {
          t = d_176;
        }
    }
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm e_70 = t;
  int f_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(f_70);
    }
  else
    {
      t = e_70;
    }
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm l_70 = t;
  int m_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(m_70);
    }
  else
    {
      t = l_70;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(u_27, x_27, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_176 = NULL,l_176 = NULL,m_176 = NULL;
  k_176 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_176;
    }
  else
    {
      ATerm b_28 (ATerm t)
      {
        t = not_null(m_176);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((l_176 != NULL) && (l_176 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            l_176 = ATgetFirst((ATermList) t);
          if(((m_176 != NULL) && (m_176 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_176 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(l_176);
      t = at_end_1_0(b_28, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm z_126 (ATerm), ATerm t)
{
  ATerm b_177 = NULL,c_177 = NULL,d_177 = NULL;
  b_177 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_177;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_177 = ATgetFirst((ATermList) t);
          d_177 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_70 = t;
        int o_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_74 = NULL,j_74 = NULL,k_74 = NULL,r_22 = NULL;
            t = SSLgetAnnotations(b_177);
            e_74 = t;
            t = c_177;
            t = z_126(t);
            j_74 = t;
            t = d_177;
            t = filter_1_0(z_126, t);
            k_74 = t;
            t = (ATerm) ATinsert(CheckATermList(k_74), j_74);
            r_22 = t;
            t = SSLsetAnnotations(r_22, e_74);
            ;
            LocalPopChoice(o_70);
          }
        else
          {
            t = n_70;
            t = d_177;
            t = filter_1_0(z_126, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_120 (ATerm), ATerm t)
{
  ATerm t_177 (ATerm t)
  {
    ATerm q_177 = NULL,r_177 = NULL,s_177 = NULL;
    s_177 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_177 = ATgetFirst((ATermList) t);
        r_177 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_74 = NULL,x_74 = NULL,w_22 = NULL;
          t = SSLgetAnnotations(s_177);
          u_74 = t;
          t = r_177;
          t = t_177(t);
          x_74 = t;
          t = (ATerm) ATinsert(CheckATermList(x_74), q_177);
          w_22 = t;
          t = SSLsetAnnotations(w_22, u_74);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_177;
        t = j_120(t);
      }
    return(t);
  }
  t = t_177(t);
  return(t);
}
ATerm f_178 (ATerm x_177, ATerm t)
{
  ATerm y_177 = NULL;
  t = SSL_explode_term(x_177);
  if(match_cons(t, sym__2))
    {
      ATerm p_70 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_70) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_177 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_177;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_178 = NULL,b_178 = NULL,c_178 = NULL;
  if(((c_178 != NULL) && (c_178 != t)))
    _fail(t);
  else
    c_178 = t;
  if(match_cons(t, sym__2))
    {
      a_178 = ATgetArgument(t, 0);
      b_178 = ATgetArgument(t, 1);
      {
        ATerm r_70 = t;
        int s_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_28 (ATerm t)
            {
              t = not_null(b_178);
              return(t);
            }
            t = not_null(a_178);
            t = at_end_1_0(c_28, t);
            ;
            LocalPopChoice(s_70);
          }
        else
          {
            t = r_70;
            t = f_178(not_null(c_178), t);
          }
      }
    }
  else
    {
      t = f_178(not_null(c_178), t);
    }
  return(t);
}
ATerm a_15 (ATerm m_197, ATerm i_197, ATerm t)
{
  ATerm g_178 = NULL,h_178 = NULL;
  ATerm e_28 (ATerm t)
  {
    ATerm i_178 = NULL,j_178 = NULL,k_178 = NULL,l_178 = NULL;
    l_178 = t;
    t = SSL_explode_term(l_178);
    if(match_cons(t, sym__2))
      {
        if(((g_178 != NULL) && (g_178 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_178 = ATgetArgument(t, 0);
        {
          ATerm t_70 = ATgetArgument(t, 1);
          if(((ATgetType(t_70) == AT_LIST) && !(ATisEmpty(t_70))))
            {
              i_178 = ATgetFirst((ATermList) t_70);
              {
                ATerm u_70 = (ATerm) ATgetNext((ATermList) t_70);
                if(((ATgetType(u_70) != AT_LIST) || !(ATisEmpty(u_70))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, i_178, not_null(h_178));
    t = conc_0_0(t);
    j_178 = t;
    t = (ATerm) ATinsert(ATempty, j_178);
    k_178 = t;
    t = SSL_mkterm(not_null(g_178), k_178);
    return(t);
  }
  t = SSL_explode_term(not_null(m_197));
  if(match_cons(t, sym__2))
    {
      if(((g_178 != NULL) && (g_178 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_178 = ATgetArgument(t, 0);
      {
        ATerm v_70 = ATgetArgument(t, 1);
        if(((ATgetType(v_70) == AT_LIST) && !(ATisEmpty(v_70))))
          {
            if(((h_178 != NULL) && (h_178 != ATgetFirst((ATermList) v_70))))
              _fail(ATgetFirst((ATermList) v_70));
            else
              h_178 = ATgetFirst((ATermList) v_70);
            {
              ATerm w_70 = (ATerm) ATgetNext((ATermList) v_70);
              if(((ATgetType(w_70) != AT_LIST) || !(ATisEmpty(w_70))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(i_197);
  t = fetch_1_0(e_28, t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm t)
{
  ATerm n_178 = NULL,o_178 = NULL,p_178 = NULL;
  n_178 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_178;
      t = y_125(t);
    }
  else
    {
      ATerm s_178 = NULL,t_178 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_178 = ATgetFirst((ATermList) t);
          p_178 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_178;
      t = a_126(t);
      s_178 = t;
      t = p_178;
      t = foldr_3_0(y_125, z_125, a_126, t);
      t_178 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_178, t_178);
      t = z_125(t);
    }
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_71), term_a_71), term_z_70);
  return(t);
}
ATerm g_28 (ATerm t)
{
  ATerm a_179 = NULL,b_179 = NULL;
  if(match_cons(t, sym__2))
    {
      a_179 = ATgetArgument(t, 0);
      b_179 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(a_179, b_179, t);
  return(t);
}
ATerm i_28 (ATerm t)
{
  ATerm c_179 = NULL,d_179 = NULL;
  d_179 = t;
  if(match_cons(t, sym_Signature_1))
    {
      c_179 = ATgetArgument(t, 0);
      {
        ATerm c_71 = t;
        int d_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_179 = NULL;
            t = c_179;
            t = filter_1_0(j_28, t);
            t = concat_0_0(t);
            f_179 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, f_179);
            ;
            LocalPopChoice(d_71);
          }
        else
          {
            t = c_71;
            t = d_179;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          c_179 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, c_179);
        }
      else
        {
          t = d_179;
        }
    }
  return(t);
}
ATerm j_28 (ATerm t)
{
  ATerm g_179 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      g_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_179;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm w_178 = NULL,x_178 = NULL,y_178 = NULL,z_178 = NULL,z_22 = NULL;
  z_178 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_178);
  w_178 = t;
  t = x_178;
  t = foldr_3_0(f_28, g_28, i_28, t);
  y_178 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_178);
  z_22 = t;
  t = SSLsetAnnotations(z_22, w_178);
  return(t);
}
ATerm k_28 (ATerm t)
{
  ATerm e_71 = t;
  int f_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(f_71);
    }
  else
    {
      t = e_71;
    }
  return(t);
}
ATerm o_28 (ATerm t)
{
  ATerm m_180 = NULL,n_180 = NULL,o_180 = NULL,p_180 = NULL,q_180 = NULL;
  q_180 = t;
  if(match_cons(t, sym_LRule_1))
    {
      p_180 = ATgetArgument(t, 0);
      t = p_180;
      if(match_cons(t, sym_Rule_3))
        {
          m_180 = ATgetArgument(t, 0);
          n_180 = ATgetArgument(t, 1);
          o_180 = ATgetArgument(t, 2);
          {
            ATerm l_71 = t;
            int o_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_180 = NULL;
                t = m_180;
                t = free_vars_3_0(p_28, q_28, tboundin_3_0, t);
                u_180 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, u_180, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, m_180, n_180, o_180)));
                ;
                LocalPopChoice(o_71);
              }
            else
              {
                t = l_71;
                t = q_180;
              }
          }
        }
      else
        {
          t = q_180;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          p_180 = ATgetArgument(t, 0);
          {
            ATerm p_71 = t;
            int q_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_181 = NULL;
                t = p_180;
                t = free_vars_3_0(t_28, u_28, tboundin_3_0, t);
                x_181 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, x_181, p_180);
                ;
                LocalPopChoice(q_71);
              }
            else
              {
                t = p_71;
                t = q_180;
              }
          }
        }
      else
        {
          t = q_180;
        }
    }
  return(t);
}
ATerm p_28 (ATerm t)
{
  ATerm v_180 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_180);
  return(t);
}
ATerm q_28 (ATerm t)
{
  ATerm s_71 = t;
  int u_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_71);
    }
  else
    {
      t = s_71;
      {
        ATerm x_180 = NULL,y_180 = NULL,z_180 = NULL,a_181 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_180 = ATgetArgument(t, 0);
            t = x_180;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_180 = ATgetArgument(t, 0);
                y_180 = ATgetArgument(t, 1);
                z_180 = ATgetArgument(t, 2);
                a_181 = ATgetArgument(t, 3);
                t = z_180;
                t = map_1_0(r_28, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_180 = ATgetArgument(t, 0);
                    y_180 = ATgetArgument(t, 1);
                    z_180 = ATgetArgument(t, 2);
                    a_181 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_180;
                t = map_1_0(s_28, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_28 (ATerm t)
{
  ATerm i_181 = NULL;
  ATerm v_71 = t;
  int w_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_181 = ATgetArgument(t, 0);
          {
            ATerm x_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_71);
      t = i_181;
    }
  else
    {
      t = v_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_181 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_181;
    }
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm r_181 = NULL;
  ATerm y_71 = t;
  int z_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_181 = ATgetArgument(t, 0);
          {
            ATerm c_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_71);
      t = r_181;
    }
  else
    {
      t = y_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_181 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_181;
    }
  return(t);
}
ATerm t_28 (ATerm t)
{
  ATerm y_181 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_181);
  return(t);
}
ATerm u_28 (ATerm t)
{
  ATerm d_72 = t;
  int e_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_72);
    }
  else
    {
      t = d_72;
      {
        ATerm a_182 = NULL,b_182 = NULL,c_182 = NULL,d_182 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_182 = ATgetArgument(t, 0);
            t = a_182;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_182 = ATgetArgument(t, 0);
                b_182 = ATgetArgument(t, 1);
                c_182 = ATgetArgument(t, 2);
                d_182 = ATgetArgument(t, 3);
                t = c_182;
                t = map_1_0(v_28, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_182 = ATgetArgument(t, 0);
                    b_182 = ATgetArgument(t, 1);
                    c_182 = ATgetArgument(t, 2);
                    d_182 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_182;
                t = map_1_0(w_28, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_28 (ATerm t)
{
  ATerm l_182 = NULL;
  ATerm h_72 = t;
  int k_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_182 = ATgetArgument(t, 0);
          {
            ATerm p_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_72);
      t = l_182;
    }
  else
    {
      t = h_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_182 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_182;
    }
  return(t);
}
ATerm w_28 (ATerm t)
{
  ATerm u_182 = NULL;
  ATerm q_72 = t;
  int u_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_182 = ATgetArgument(t, 0);
          {
            ATerm v_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_72);
      t = u_182;
    }
  else
    {
      t = q_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_182 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_182;
    }
  return(t);
}
ATerm x_28 (ATerm t)
{
  t = Cons_2_0(z_28, a_29, t);
  return(t);
}
ATerm z_28 (ATerm t)
{
  ATerm a_183 = NULL,b_183 = NULL,c_183 = NULL,d_183 = NULL,c_23 = NULL;
  d_183 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_183);
  a_183 = t;
  t = b_183;
  t = topdown_1_0(b_29, t);
  t = listtd_1_0(c_29, t);
  c_183 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_183);
  c_23 = t;
  t = SSLsetAnnotations(c_23, a_183);
  return(t);
}
ATerm a_29 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_29 (ATerm t)
{
  ATerm w_72 = t;
  int x_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(x_72);
    }
  else
    {
      t = w_72;
    }
  return(t);
}
ATerm c_29 (ATerm t)
{
  t = repeat_1_0(e_29, t);
  return(t);
}
ATerm e_29 (ATerm t)
{
  ATerm g_183 = NULL,h_183 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_183 = ATgetFirst((ATermList) t);
      h_183 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_14(g_183, h_183, t);
  return(t);
}
ATerm g_29 (ATerm t)
{
  ATerm b_73 = t;
  int c_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(c_73);
    }
  else
    {
      t = b_73;
    }
  return(t);
}
ATerm h_29 (ATerm t)
{
  ATerm k_183 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      k_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, k_183)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm y_179 = NULL,z_179 = NULL,a_180 = NULL,b_180 = NULL,c_180 = NULL,d_180 = NULL,e_180 = NULL,f_180 = NULL,g_180 = NULL,h_180 = NULL,i_180 = NULL,j_180 = NULL,q_23 = NULL,p_23 = NULL,o_23 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(k_28, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(o_28, t);
  j_180 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_180);
  c_180 = t;
  t = d_180;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_180 = ATgetFirst((ATermList) t);
      g_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_180);
  e_180 = t;
  t = g_180;
  t = Cons_2_0(_id, x_28, t);
  h_180 = t;
  t = (ATerm) ATinsert(CheckATermList(h_180), f_180);
  o_23 = t;
  t = SSLsetAnnotations(o_23, e_180);
  i_180 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_180);
  p_23 = t;
  t = SSLsetAnnotations(p_23, c_180);
  t = topdown_1_0(g_29, t);
  b_180 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_180);
  y_179 = t;
  t = z_179;
  t = fetch_1_0(h_29, t);
  a_180 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_180);
  q_23 = t;
  t = SSLsetAnnotations(q_23, y_179);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm g_188 = NULL,h_188 = NULL,i_188 = NULL,j_188 = NULL,k_188 = NULL;
  i_188 = t;
  if(match_cons(t, sym_Real_1))
    {
      j_188 = ATgetArgument(t, 0);
      {
        ATerm i_75 = NULL;
        t = SSL_string_to_real(j_188);
        i_75 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, i_75);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          j_188 = ATgetArgument(t, 0);
          {
            ATerm o_75 = NULL;
            t = SSL_string_to_int(j_188);
            o_75 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, o_75);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              j_188 = ATgetArgument(t, 0);
              k_188 = ATgetArgument(t, 1);
              h_188 = ATgetArgument(t, 2);
              t = SSL_is_string(h_188);
              t = (ATerm) ATmakeAppl(sym_Con_3, j_188, k_188, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_188), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  j_188 = ATgetArgument(t, 0);
                  {
                    ATerm f_76 = NULL,m_76 = NULL,n_76 = NULL,v_23 = NULL;
                    t = SSLgetAnnotations(i_188);
                    f_76 = t;
                    t = SSL_explode_string(j_188);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm e_73 = ATgetFirst((ATermList) t);
                        if(((ATgetType(e_73) != AT_INT) || (ATgetInt((ATermInt) e_73) != 39)))
                          _fail(t);
                        m_76 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(m_76);
                    n_76 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_76);
                    v_23 = t;
                    t = SSLsetAnnotations(v_23, f_76);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_188 = ATgetArgument(t, 0);
                      k_188 = ATgetArgument(t, 1);
                      h_188 = ATgetArgument(t, 2);
                      g_188 = ATgetArgument(t, 3);
                      {
                        ATerm w_76 = NULL,b_77 = NULL,c_77 = NULL,y_23 = NULL;
                        t = SSLgetAnnotations(i_188);
                        w_76 = t;
                        t = SSL_explode_string(j_188);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm f_73 = ATgetFirst((ATermList) t);
                            if(((ATgetType(f_73) != AT_INT) || (ATgetInt((ATermInt) f_73) != 39)))
                              _fail(t);
                            b_77 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(b_77);
                        c_77 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_77, k_188, h_188, g_188);
                        y_23 = t;
                        t = SSLsetAnnotations(y_23, w_76);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          j_188 = ATgetArgument(t, 0);
                          k_188 = ATgetArgument(t, 1);
                          h_188 = ATgetArgument(t, 2);
                          {
                            ATerm s_77 = NULL,y_77 = NULL,a_78 = NULL,z_23 = NULL;
                            t = SSLgetAnnotations(i_188);
                            s_77 = t;
                            t = SSL_explode_string(j_188);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm g_73 = ATgetFirst((ATermList) t);
                                if(((ATgetType(g_73) != AT_INT) || (ATgetInt((ATermInt) g_73) != 39)))
                                  _fail(t);
                                y_77 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(y_77);
                            a_78 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, a_78, k_188, h_188);
                            z_23 = t;
                            t = SSLsetAnnotations(z_23, s_77);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              j_188 = ATgetArgument(t, 0);
                              k_188 = ATgetArgument(t, 1);
                              h_188 = ATgetArgument(t, 2);
                              g_188 = ATgetArgument(t, 3);
                              {
                                ATerm p_78 = NULL,u_78 = NULL,v_78 = NULL,a_24 = NULL;
                                t = SSLgetAnnotations(i_188);
                                p_78 = t;
                                t = SSL_explode_string(j_188);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm m_73 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(m_73) != AT_INT) || (ATgetInt((ATermInt) m_73) != 39)))
                                      _fail(t);
                                    u_78 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(u_78);
                                v_78 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_78, k_188, h_188, g_188);
                                a_24 = t;
                                t = SSLsetAnnotations(a_24, p_78);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDef_3))
                                {
                                  j_188 = ATgetArgument(t, 0);
                                  k_188 = ATgetArgument(t, 1);
                                  h_188 = ATgetArgument(t, 2);
                                  {
                                    ATerm x_79 = NULL,e_80 = NULL,f_80 = NULL,b_24 = NULL;
                                    t = SSLgetAnnotations(i_188);
                                    x_79 = t;
                                    t = SSL_explode_string(j_188);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm p_73 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(p_73) != AT_INT) || (ATgetInt((ATermInt) p_73) != 39)))
                                          _fail(t);
                                        e_80 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(e_80);
                                    f_80 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDef_3, f_80, k_188, h_188);
                                    b_24 = t;
                                    t = SSLsetAnnotations(b_24, x_79);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      j_188 = ATgetArgument(t, 0);
                                      k_188 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_80 = NULL,t_80 = NULL,u_80 = NULL,d_24 = NULL;
                                        t = SSLgetAnnotations(i_188);
                                        q_80 = t;
                                        t = SSL_explode_string(j_188);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm r_73 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(r_73) != AT_INT) || (ATgetInt((ATermInt) r_73) != 39)))
                                              _fail(t);
                                            t_80 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(t_80);
                                        u_80 = t;
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_80, k_188);
                                        d_24 = t;
                                        t = SSLsetAnnotations(d_24, q_80);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Var_1))
                                        {
                                          j_188 = ATgetArgument(t, 0);
                                          {
                                            ATerm c_81 = NULL,e_81 = NULL,f_81 = NULL,e_24 = NULL;
                                            t = SSLgetAnnotations(i_188);
                                            c_81 = t;
                                            t = SSL_explode_string(j_188);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm t_73 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(t_73) != AT_INT) || (ATgetInt((ATermInt) t_73) != 39)))
                                                  _fail(t);
                                                e_81 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(e_81);
                                            f_81 = t;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, f_81);
                                            e_24 = t;
                                            t = SSLsetAnnotations(e_24, c_81);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SVar_1))
                                            {
                                              j_188 = ATgetArgument(t, 0);
                                              {
                                                ATerm l_81 = NULL,o_81 = NULL,p_81 = NULL,f_24 = NULL;
                                                t = SSLgetAnnotations(i_188);
                                                l_81 = t;
                                                t = SSL_explode_string(j_188);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm u_73 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(u_73) != AT_INT) || (ATgetInt((ATermInt) u_73) != 39)))
                                                      _fail(t);
                                                    o_81 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(o_81);
                                                p_81 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, p_81);
                                                f_24 = t;
                                                t = SSLsetAnnotations(f_24, l_81);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_OpDecl_2))
                                                {
                                                  j_188 = ATgetArgument(t, 0);
                                                  k_188 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm x_81 = NULL,e_82 = NULL,f_82 = NULL,h_24 = NULL;
                                                    t = SSLgetAnnotations(i_188);
                                                    x_81 = t;
                                                    t = SSL_explode_string(j_188);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm w_73 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(w_73) != AT_INT) || (ATgetInt((ATermInt) w_73) != 39)))
                                                          _fail(t);
                                                        e_82 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(e_82);
                                                    f_82 = t;
                                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, f_82, k_188);
                                                    h_24 = t;
                                                    t = SSLsetAnnotations(h_24, x_81);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm o_82 = NULL,r_82 = NULL,s_82 = NULL,i_24 = NULL;
                                                  if(match_cons(t, sym_Op_2))
                                                    {
                                                      j_188 = ATgetArgument(t, 0);
                                                      k_188 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(i_188);
                                                  o_82 = t;
                                                  t = SSL_explode_string(j_188);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm x_73 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(x_73) != AT_INT) || (ATgetInt((ATermInt) x_73) != 39)))
                                                        _fail(t);
                                                      r_82 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(r_82);
                                                  s_82 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Op_2, s_82, k_188);
                                                  i_24 = t;
                                                  t = SSLsetAnnotations(i_24, o_82);
                                                }
                                            }
                                        }
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
ATerm at_last_1_0 (ATerm u_120 (ATerm), ATerm t)
{
  ATerm t_189 (ATerm t)
  {
    ATerm q_189 = NULL,r_189 = NULL,s_189 = NULL;
    q_189 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_189 = ATgetFirst((ATermList) t);
        s_189 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_74 = t;
      int b_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_83 = NULL,x_24 = NULL;
          t = SSLgetAnnotations(q_189);
          f_83 = t;
          t = s_189;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(s_189), r_189);
          x_24 = t;
          t = SSLsetAnnotations(x_24, f_83);
          t = u_120(t);
          ;
          LocalPopChoice(b_74);
        }
      else
        {
          t = a_74;
          {
            ATerm u_83 = NULL,x_83 = NULL,a_25 = NULL;
            t = SSLgetAnnotations(q_189);
            u_83 = t;
            t = s_189;
            t = t_189(t);
            x_83 = t;
            t = (ATerm) ATinsert(CheckATermList(x_83), r_189);
            a_25 = t;
            t = SSLsetAnnotations(a_25, u_83);
          }
        }
    }
    return(t);
  }
  t = t_189(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_189 = NULL,a_190 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_189 = ATgetFirst((ATermList) t);
      a_190 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_190;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_189;
    }
  else
    {
      t = a_190;
      t = last_0_0(t);
    }
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm i_190 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_74 = ATgetFirst((ATermList) t);
      i_190 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_190;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm x_128 (ATerm), ATerm t)
{
  ATerm f_190 = NULL,g_190 = NULL,h_190 = NULL;
  f_190 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_190 = ATgetFirst((ATermList) t);
      {
        ATerm f_74 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_190;
  t = x_128(t);
  t = f_190;
  t = last_0_0(t);
  t = x_128(t);
  t = f_190;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_74 = ATgetFirst((ATermList) t);
      g_190 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_190;
  t = at_last_1_0(i_29, t);
  return(t);
}
ATerm k_195 (ATerm h_191, ATerm i_191, ATerm t)
{
  t = h_191;
  {
    ATerm l_74 = t;
    if((PushChoice() == 0))
      {
        ATerm k_191 = NULL,l_191 = NULL,m_191 = NULL,n_191 = NULL,d_25 = NULL;
        n_191 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_191 = ATgetFirst((ATermList) t);
            m_191 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_191);
        k_191 = t;
        t = m_191;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_191), l_191);
        d_25 = t;
        t = SSLsetAnnotations(d_25, k_191);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_74;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_i_34, h_191);
  }
  return(t);
}
ATerm l_195 (ATerm o_191, ATerm p_191, ATerm t)
{
  t = o_191;
  {
    ATerm m_74 = t;
    if((PushChoice() == 0))
      {
        ATerm r_191 = NULL,s_191 = NULL,t_191 = NULL,u_191 = NULL,e_25 = NULL;
        u_191 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_191 = ATgetFirst((ATermList) t);
            t_191 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_191);
        r_191 = t;
        t = t_191;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_191), s_191);
        e_25 = t;
        t = SSLsetAnnotations(e_25, r_191);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_74;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_n_74, o_191);
  }
  return(t);
}
ATerm m_195 (ATerm v_191, ATerm w_191, ATerm x_191, ATerm t)
{
  ATerm a_192 = NULL;
  t = v_191;
  {
    ATerm o_74 = t;
    int p_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_84 = NULL;
        t = SSL_explode_string(v_191);
        t = unquote_chars_1_0(j_29, t);
        d_84 = t;
        t = SSL_implode_string(d_84);
        ;
        LocalPopChoice(p_74);
      }
    else
      {
        t = o_74;
      }
    a_192 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, a_192, (ATerm)ATempty, w_191);
  }
  return(t);
}
ATerm n_195 (ATerm d_192, ATerm e_192, ATerm t)
{
  ATerm g_192 = NULL;
  t = d_192;
  {
    ATerm s_74 = t;
    int t_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_84 = NULL;
        t = SSL_explode_string(d_192);
        t = unquote_chars_1_0(n_29, t);
        k_84 = t;
        t = SSL_implode_string(k_84);
        ;
        LocalPopChoice(t_74);
      }
    else
      {
        t = s_74;
      }
    g_192 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, g_192, (ATerm)ATempty, (ATerm) ATempty);
  }
  return(t);
}
ATerm j_29 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm n_29 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm o_29 (ATerm t)
{
  t = term_w_61;
  return(t);
}
ATerm p_29 (ATerm t)
{
  ATerm v_192 = NULL,w_192 = NULL,n_84 = NULL;
  v_192 = t;
  t = SSL_explode_term(v_192);
  if(match_cons(t, sym__2))
    {
      ATerm v_74 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_74) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_74 = ATgetArgument(t, 1);
        if(((ATgetType(w_74) == AT_LIST) && !(ATisEmpty(w_74))))
          {
            w_192 = ATgetFirst((ATermList) w_74);
            {
              ATerm z_74 = (ATerm) ATgetNext((ATermList) w_74);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_192);
  if(match_cons(t, sym__2))
    {
      ATerm b_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_75) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_75 = ATgetArgument(t, 1);
        if(((ATgetType(c_75) == AT_LIST) && !(ATisEmpty(c_75))))
          {
            ATerm e_75 = ATgetFirst((ATermList) c_75);
            ATerm f_75 = (ATerm) ATgetNext((ATermList) c_75);
            if(((ATgetType(f_75) == AT_LIST) && !(ATisEmpty(f_75))))
              {
                n_84 = ATgetFirst((ATermList) f_75);
                {
                  ATerm g_75 = (ATerm) ATgetNext((ATermList) f_75);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_75, (ATerm) ATinsert(ATinsert(ATempty, n_84), w_192));
  return(t);
}
ATerm r_29 (ATerm t)
{
  ATerm i_193 = NULL,j_193 = NULL;
  if(match_cons(t, sym__2))
    {
      i_193 = ATgetArgument(t, 0);
      j_193 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_75, (ATerm) ATinsert(ATinsert(ATempty, j_193), i_193));
  return(t);
}
ATerm s_29 (ATerm t)
{
  t = term_w_61;
  return(t);
}
ATerm t_29 (ATerm t)
{
  ATerm l_193 = NULL,m_193 = NULL;
  if(match_cons(t, sym__2))
    {
      l_193 = ATgetArgument(t, 0);
      m_193 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_75, (ATerm) ATinsert(ATinsert(ATempty, m_193), l_193));
  return(t);
}
ATerm v_29 (ATerm t)
{
  ATerm x_193 = NULL,y_193 = NULL;
  if(match_cons(t, sym__2))
    {
      x_193 = ATgetArgument(t, 0);
      y_193 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_75, (ATerm) ATinsert(ATinsert(ATempty, y_193), x_193));
  return(t);
}
ATerm w_29 (ATerm t)
{
  t = term_l_75;
  return(t);
}
ATerm x_29 (ATerm t)
{
  ATerm a_194 = NULL,b_194 = NULL;
  if(match_cons(t, sym__2))
    {
      a_194 = ATgetArgument(t, 0);
      b_194 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_75, (ATerm) ATinsert(ATinsert(ATempty, b_194), a_194));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm j_192 = NULL,k_192 = NULL,l_192 = NULL,m_192 = NULL,n_192 = NULL,o_192 = NULL,p_192 = NULL,q_192 = NULL;
  o_192 = t;
  if(match_cons(t, sym_Anno_2))
    {
      p_192 = ATgetArgument(t, 0);
      q_192 = ATgetArgument(t, 1);
      {
        ATerm t_192 = NULL;
        t = q_192;
        t = foldr_2_0(o_29, p_29, t);
        t_192 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, p_192, t_192);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          p_192 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, p_192, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              p_192 = ATgetArgument(t, 0);
              {
                ATerm s_84 = NULL;
                t = p_192;
                {
                  ATerm m_75 = t;
                  int n_75 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_p_75;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_q_75;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_r_75;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_s_75;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_t_75;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(n_75);
                    }
                  else
                    {
                      t = m_75;
                      {
                        ATerm u_84 = NULL;
                        t = SSL_explode_string(p_192);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm u_75 = ATgetFirst((ATermList) t);
                            if(((ATgetType(u_75) != AT_INT) || (ATgetInt((ATermInt) u_75) != 39)))
                              _fail(t);
                            {
                              ATerm v_75 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(v_75) == AT_LIST) && !(ATisEmpty(v_75))))
                                {
                                  u_84 = ATgetFirst((ATermList) v_75);
                                  {
                                    ATerm w_75 = (ATerm) ATgetNext((ATermList) v_75);
                                    if(((ATgetType(w_75) == AT_LIST) && !(ATisEmpty(w_75))))
                                      {
                                        ATerm x_75 = ATgetFirst((ATermList) w_75);
                                        if(((ATgetType(x_75) != AT_INT) || (ATgetInt((ATermInt) x_75) != 39)))
                                          _fail(t);
                                        {
                                          ATerm y_75 = (ATerm) ATgetNext((ATermList) w_75);
                                          if(((ATgetType(y_75) != AT_LIST) || !(ATisEmpty(y_75))))
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
                        t = u_84;
                      }
                    }
                  s_84 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, s_84);
                }
              }
            }
          else
            {
              ATerm z_75 = t;
              int a_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      p_192 = ATgetArgument(t, 0);
                      {
                        ATerm b_76 = ATgetArgument(t, 1);
                      }
                      n_192 = ATgetArgument(t, 2);
                      j_192 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_76);
                  t = (ATerm) ATmakeAppl(sym_Con_3, p_192, n_192, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_192), (ATerm) ATempty));
                }
              else
                {
                  t = z_75;
                  {
                    ATerm c_76 = t;
                    int e_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            p_192 = ATgetArgument(t, 0);
                            {
                              ATerm l_76 = ATgetArgument(t, 1);
                            }
                            n_192 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_76);
                        t = (ATerm) ATmakeAppl(sym_Con_3, p_192, n_192, term_q_76);
                      }
                    else
                      {
                        t = c_76;
                        if(match_cons(t, sym_Con1_2))
                          {
                            p_192 = ATgetArgument(t, 0);
                            q_192 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, p_192, q_192, term_q_76);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                p_192 = ATgetArgument(t, 0);
                                q_192 = ATgetArgument(t, 1);
                                {
                                  ATerm q_29 (ATerm t)
                                  {
                                    t = not_null(q_192);
                                    return(t);
                                  }
                                  t = not_null(p_192);
                                  t = foldr_2_0(q_29, r_29, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    p_192 = ATgetArgument(t, 0);
                                    t = p_192;
                                    t = foldr_2_0(s_29, t_29, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        p_192 = ATgetArgument(t, 0);
                                        t = p_192;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            k_192 = ATgetFirst((ATermList) t);
                                            l_192 = (ATerm) ATgetNext((ATermList) t);
                                            t = l_192;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm r_76 = t;
                                                int s_76 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_195(p_192, o_192, t);
                                                    ;
                                                    LocalPopChoice(s_76);
                                                  }
                                                else
                                                  {
                                                    t = r_76;
                                                    t = k_192;
                                                  }
                                              }
                                            else
                                              {
                                                t = k_195(p_192, o_192, t);
                                              }
                                          }
                                        else
                                          {
                                            t = k_195(p_192, o_192, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            p_192 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, p_192));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                p_192 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, p_192));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    p_192 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, p_192));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        p_192 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, p_192));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            p_192 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_192), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                p_192 = ATgetArgument(t, 0);
                                                                q_192 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_192), q_192);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    p_192 = ATgetArgument(t, 0);
                                                                    q_192 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm u_29 (ATerm t)
                                                                      {
                                                                        t = not_null(q_192);
                                                                        return(t);
                                                                      }
                                                                      t = not_null(p_192);
                                                                      t = foldr_2_0(u_29, v_29, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        p_192 = ATgetArgument(t, 0);
                                                                        t = p_192;
                                                                        t = foldr_2_0(w_29, x_29, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            p_192 = ATgetArgument(t, 0);
                                                                            q_192 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_n_74, (ATerm) ATinsert(CheckATermList(q_192), p_192));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                p_192 = ATgetArgument(t, 0);
                                                                                t = p_192;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    k_192 = ATgetFirst((ATermList) t);
                                                                                    l_192 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = l_192;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm t_76 = t;
                                                                                        int u_76 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = l_195(p_192, o_192, t);
                                                                                            ;
                                                                                            LocalPopChoice(u_76);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_76;
                                                                                            t = k_192;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_195(p_192, o_192, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_195(p_192, o_192, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_v_76;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        p_192 = ATgetArgument(t, 0);
                                                                                        q_192 = ATgetArgument(t, 1);
                                                                                        t = q_192;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            m_192 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_l_54, (ATerm) ATinsert(ATinsert(ATempty, m_192), p_192));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            p_192 = ATgetArgument(t, 0);
                                                                                            t = p_192;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                p_192 = ATgetArgument(t, 0);
                                                                                                q_192 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, p_192, q_192, term_n_35);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    p_192 = ATgetArgument(t, 0);
                                                                                                    q_192 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, p_192, q_192, term_n_35);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        p_192 = ATgetArgument(t, 0);
                                                                                                        q_192 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, p_192, (ATerm)ATempty, q_192);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            p_192 = ATgetArgument(t, 0);
                                                                                                            q_192 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, q_192, p_192);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                p_192 = ATgetArgument(t, 0);
                                                                                                                q_192 = ATgetArgument(t, 1);
                                                                                                                t = m_195(p_192, q_192, o_192, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    p_192 = ATgetArgument(t, 0);
                                                                                                                    t = n_195(p_192, o_192, t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        p_192 = ATgetArgument(t, 0);
                                                                                                                        q_192 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, p_192, q_192, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            p_192 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, p_192, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                p_192 = ATgetArgument(t, 0);
                                                                                                                                q_192 = ATgetArgument(t, 1);
                                                                                                                                n_192 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_192, q_192, (ATerm)ATempty, n_192);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    p_192 = ATgetArgument(t, 0);
                                                                                                                                    q_192 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, p_192, (ATerm)ATempty, (ATerm)ATempty, q_192);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        p_192 = ATgetArgument(t, 0);
                                                                                                                                        q_192 = ATgetArgument(t, 1);
                                                                                                                                        n_192 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, p_192, q_192, (ATerm)ATempty, n_192);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            p_192 = ATgetArgument(t, 0);
                                                                                                                                            q_192 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, p_192, (ATerm)ATempty, (ATerm)ATempty, q_192);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                p_192 = ATgetArgument(t, 0);
                                                                                                                                                q_192 = ATgetArgument(t, 1);
                                                                                                                                                n_192 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, p_192, q_192, (ATerm)ATempty, n_192);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    p_192 = ATgetArgument(t, 0);
                                                                                                                                                    q_192 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, p_192, (ATerm)ATempty, (ATerm)ATempty, q_192);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm x_76 = ATgetArgument(t, 0);
                                                                                                                                                        q_192 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, q_192);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm y_29 (ATerm t)
{
  ATerm n_196 = NULL;
  n_196 = t;
  t = dtime_0_0(t);
  t = debug_1_0(z_29, t);
  t = n_196;
  return(t);
}
ATerm z_29 (ATerm t)
{
  t = term_y_76;
  return(t);
}
ATerm b_30 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm z_76 = t;
    int a_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(a_77);
      }
    else
      {
        t = z_76;
      }
  }
  return(t);
}
ATerm c_30 (ATerm t)
{
  ATerm q_196 = NULL;
  q_196 = t;
  t = dtime_0_0(t);
  t = debug_1_0(d_30, t);
  t = q_196;
  return(t);
}
ATerm d_30 (ATerm t)
{
  t = term_d_77;
  return(t);
}
ATerm e_30 (ATerm t)
{
  ATerm r_196 = NULL;
  r_196 = t;
  t = dtime_0_0(t);
  t = debug_1_0(f_30, t);
  t = r_196;
  return(t);
}
ATerm f_30 (ATerm t)
{
  t = term_g_77;
  return(t);
}
ATerm i_30 (ATerm t)
{
  ATerm s_196 = NULL;
  s_196 = t;
  t = dtime_0_0(t);
  t = debug_1_0(j_30, t);
  t = s_196;
  return(t);
}
ATerm j_30 (ATerm t)
{
  t = term_h_77;
  return(t);
}
ATerm k_30 (ATerm t)
{
  ATerm t_196 = NULL;
  t_196 = t;
  t = dtime_0_0(t);
  t = debug_1_0(l_30, t);
  t = t_196;
  return(t);
}
ATerm l_30 (ATerm t)
{
  t = term_i_77;
  return(t);
}
ATerm m_30 (ATerm t)
{
  ATerm u_196 = NULL;
  u_196 = t;
  t = dtime_0_0(t);
  t = debug_1_0(n_30, t);
  t = u_196;
  return(t);
}
ATerm n_30 (ATerm t)
{
  t = term_j_77;
  return(t);
}
ATerm o_30 (ATerm t)
{
  ATerm v_196 = NULL;
  v_196 = t;
  t = dtime_0_0(t);
  t = debug_1_0(p_30, t);
  t = v_196;
  return(t);
}
ATerm p_30 (ATerm t)
{
  t = term_n_77;
  return(t);
}
ATerm q_30 (ATerm t)
{
  ATerm o_77 = t;
  int p_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_77 = t;
      int r_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_196 = NULL,y_196 = NULL,b_197 = NULL;
          if(match_cons(t, sym_Scope_2))
            {
              x_196 = ATgetArgument(t, 0);
              y_196 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_196;
          t = map_1_0(r_30, t);
          b_197 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, b_197, y_196);
          ;
          LocalPopChoice(r_77);
        }
      else
        {
          t = q_77;
          t = desugarRule_0_0(t);
        }
      ;
      LocalPopChoice(p_77);
    }
  else
    {
      t = o_77;
    }
  t = repeat_1_0(s_30, t);
  return(t);
}
ATerm r_30 (ATerm t)
{
  ATerm t_77 = t;
  int u_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_85 = NULL;
      if(match_cons(t, sym_ListVar_1))
        {
          a_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_85;
      ;
      LocalPopChoice(u_77);
    }
  else
    {
      t = t_77;
    }
  return(t);
}
ATerm s_30 (ATerm t)
{
  ATerm v_77 = t;
  int b_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_78 = t;
      int d_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(d_78);
        }
      else
        {
          t = c_78;
          {
            ATerm f_197 = NULL,g_197 = NULL;
            f_197 = t;
            if(match_cons(t, sym_Match_1))
              {
                g_197 = ATgetArgument(t, 0);
                t = f_197;
                t = c_13(g_197, t);
              }
            else
              {
                if(match_cons(t, sym_Build_1))
                  {
                    g_197 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_197;
                t = b_13(g_197, t);
              }
          }
        }
      ;
      LocalPopChoice(b_78);
    }
  else
    {
      t = v_77;
      {
        ATerm l_197 = NULL,n_197 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            l_197 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_197;
        if(match_cons(t, sym_ListVar_1))
          {
            n_197 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, n_197);
      }
    }
  return(t);
}
ATerm t_30 (ATerm t)
{
  ATerm p_197 = NULL;
  p_197 = t;
  t = dtime_0_0(t);
  t = debug_1_0(u_30, t);
  t = p_197;
  return(t);
}
ATerm u_30 (ATerm t)
{
  t = term_e_78;
  return(t);
}
ATerm v_30 (ATerm t)
{
  ATerm q_197 = NULL;
  q_197 = t;
  t = dtime_0_0(t);
  t = debug_1_0(w_30, t);
  t = q_197;
  return(t);
}
ATerm w_30 (ATerm t)
{
  t = term_f_78;
  return(t);
}
ATerm x_30 (ATerm t)
{
  ATerm r_197 = NULL,s_197 = NULL,t_197 = NULL,u_197 = NULL,m_25 = NULL;
  u_197 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_197 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_197);
  r_197 = t;
  t = s_197;
  t = map_1_0(z_30, t);
  t_197 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_197);
  m_25 = t;
  t = SSLsetAnnotations(m_25, r_197);
  return(t);
}
ATerm y_30 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm z_30 (ATerm t)
{
  ATerm g_78 = t;
  int j_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_198 = NULL,t_198 = NULL,u_198 = NULL,v_198 = NULL,w_198 = NULL;
      s_198 = t;
      if(match_cons(t, sym_SDef_3))
        {
          t_198 = ATgetArgument(t, 0);
          u_198 = ATgetArgument(t, 1);
          v_198 = ATgetArgument(t, 2);
          {
            ATerm f_85 = NULL,j_85 = NULL,k_25 = NULL;
            t = SSLgetAnnotations(s_198);
            f_85 = t;
            t = v_198;
            t = desugar_0_0(t);
            j_85 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, t_198, u_198, j_85);
            k_25 = t;
            t = SSLsetAnnotations(k_25, f_85);
          }
        }
      else
        {
          ATerm u_85 = NULL,z_85 = NULL,l_25 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              t_198 = ATgetArgument(t, 0);
              u_198 = ATgetArgument(t, 1);
              v_198 = ATgetArgument(t, 2);
              w_198 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_198);
          u_85 = t;
          t = w_198;
          t = desugar_0_0(t);
          z_85 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, t_198, u_198, v_198, z_85);
          l_25 = t;
          t = SSLsetAnnotations(l_25, u_85);
        }
      ;
      LocalPopChoice(j_78);
    }
  else
    {
      t = g_78;
      t = debug_1_0(a_31, t);
      _fail(t);
    }
  return(t);
}
ATerm a_31 (ATerm t)
{
  t = term_l_78;
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm x_195 = NULL,y_195 = NULL,z_195 = NULL,a_196 = NULL,b_196 = NULL,c_196 = NULL,d_196 = NULL,e_196 = NULL,f_196 = NULL,g_196 = NULL,h_196 = NULL,i_196 = NULL,j_196 = NULL,k_196 = NULL,l_196 = NULL,m_196 = NULL,p_25 = NULL,n_25 = NULL;
  t = if_verbose3_1_0(y_29, t);
  t = topdown_1_0(b_30, t);
  t = if_verbose3_1_0(c_30, t);
  t = normalize_spec_0_0(t);
  t = if_verbose3_1_0(e_30, t);
  x_195 = t;
  t = spec_use_def_0_0(t);
  t = x_195;
  t = if_verbose3_1_0(i_30, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm m_78 = ATgetArgument(t, 0);
      if(((ATgetType(m_78) == AT_LIST) && !(ATisEmpty(m_78))))
        {
          ATerm n_78 = ATgetFirst((ATermList) m_78);
          if(match_cons(n_78, sym_Signature_1))
            {
              c_196 = ATgetArgument(n_78, 0);
            }
          else
            _fail(t);
          {
            ATerm q_78 = (ATerm) ATgetNext((ATermList) m_78);
            if(((ATgetType(q_78) == AT_LIST) && !(ATisEmpty(q_78))))
              {
                ATerm r_78 = ATgetFirst((ATermList) q_78);
                if(match_cons(r_78, sym_Overlays_1))
                  {
                    d_196 = ATgetArgument(r_78, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm s_78 = (ATerm) ATgetNext((ATermList) q_78);
                  if(((ATgetType(s_78) == AT_LIST) && !(ATisEmpty(s_78))))
                    {
                      ATerm t_78 = ATgetFirst((ATermList) s_78);
                      if(match_cons(t_78, sym_Strategies_1))
                        {
                          e_196 = ATgetArgument(t_78, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm w_78 = (ATerm) ATgetNext((ATermList) s_78);
                        if(((ATgetType(w_78) != AT_LIST) || !(ATisEmpty(w_78))))
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
    }
  else
    _fail(t);
  t = u_13(c_196, d_196, e_196, t);
  t = if_verbose3_1_0(k_30, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_78 = ATgetArgument(t, 0);
      if(((ATgetType(x_78) == AT_LIST) && !(ATisEmpty(x_78))))
        {
          ATerm y_78 = ATgetFirst((ATermList) x_78);
          if(match_cons(y_78, sym_Signature_1))
            {
              ATerm a_79 = ATgetArgument(y_78, 0);
              if(((ATgetType(a_79) == AT_LIST) && !(ATisEmpty(a_79))))
                {
                  ATerm b_79 = ATgetFirst((ATermList) a_79);
                  if(match_cons(b_79, sym_Constructors_1))
                    {
                      a_196 = ATgetArgument(b_79, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_79 = (ATerm) ATgetNext((ATermList) a_79);
                    if(((ATgetType(c_79) != AT_LIST) || !(ATisEmpty(c_79))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm z_78 = (ATerm) ATgetNext((ATermList) x_78);
            if(((ATgetType(z_78) == AT_LIST) && !(ATisEmpty(z_78))))
              {
                ATerm d_79 = ATgetFirst((ATermList) z_78);
                if(match_cons(d_79, sym_Strategies_1))
                  {
                    b_196 = ATgetArgument(d_79, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm e_79 = (ATerm) ATgetNext((ATermList) z_78);
                  if(((ATgetType(e_79) != AT_LIST) || !(ATisEmpty(e_79))))
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
  else
    _fail(t);
  t = k_13(a_196, b_196, t);
  t = if_verbose3_1_0(m_30, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm f_79 = ATgetArgument(t, 0);
      if(((ATgetType(f_79) == AT_LIST) && !(ATisEmpty(f_79))))
        {
          ATerm i_79 = ATgetFirst((ATermList) f_79);
          if(match_cons(i_79, sym_Signature_1))
            {
              y_195 = ATgetArgument(i_79, 0);
            }
          else
            _fail(t);
          {
            ATerm j_79 = (ATerm) ATgetNext((ATermList) f_79);
            if(((ATgetType(j_79) == AT_LIST) && !(ATisEmpty(j_79))))
              {
                ATerm k_79 = ATgetFirst((ATermList) j_79);
                if(match_cons(k_79, sym_Strategies_1))
                  {
                    z_195 = ATgetArgument(k_79, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm l_79 = (ATerm) ATgetNext((ATermList) j_79);
                  if(((ATgetType(l_79) != AT_LIST) || !(ATisEmpty(l_79))))
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
  else
    _fail(t);
  t = h_13(y_195, z_195, t);
  t = if_verbose3_1_0(o_30, t);
  t = topdown_1_0(q_30, t);
  t = if_verbose3_1_0(t_30, t);
  t = strename_0_0(t);
  t = if_verbose3_1_0(v_30, t);
  m_196 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_196 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_196);
  f_196 = t;
  t = g_196;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_196 = ATgetFirst((ATermList) t);
      j_196 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_196);
  h_196 = t;
  t = j_196;
  t = Cons_2_0(x_30, y_30, t);
  k_196 = t;
  t = (ATerm) ATinsert(CheckATermList(k_196), i_196);
  n_25 = t;
  t = SSLsetAnnotations(n_25, h_196);
  l_196 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_196);
  p_25 = t;
  t = SSLsetAnnotations(p_25, f_196);
  return(t);
}
ATerm h_15 (ATerm g_60, ATerm h_60, ATerm t)
{
  ATerm z_198 = NULL;
  t = SSL_fputc(g_60, h_60);
  z_198 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_198);
  return(t);
}
ATerm i_15 (ATerm u_63, ATerm v_63, ATerm t)
{
  ATerm a_199 = NULL;
  t = SSL_write_term_to_stream_text(u_63, v_63);
  a_199 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_199);
  return(t);
}
ATerm k_15 (ATerm k_132 (ATerm), ATerm a_501, ATerm y_63, ATerm t)
{
  ATerm b_199 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_501, term_m_79);
  t = open_stream_0_0(t);
  b_199 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_199, y_63);
  t = k_132(t);
  t = fclose_0_0(t);
  t = y_63;
  return(t);
}
ATerm j_15 (ATerm q_63, ATerm r_63, ATerm t)
{
  ATerm c_199 = NULL;
  t = SSL_write_term_to_stream_baf(q_63, r_63);
  c_199 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_199);
  return(t);
}
ATerm c_31 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_31 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_79 = ATgetArgument(t, 0);
      if(match_cons(n_79, sym_Stream_1))
        {
          s_86 = ATgetArgument(n_79, 0);
        }
      else
        _fail(t);
      t_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(s_86, t_86, t);
  return(t);
}
ATerm e_31 (ATerm t)
{
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL,k_87 = NULL,m_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_79 = ATgetArgument(t, 0);
      if(match_cons(o_79, sym_Stream_1))
        {
          k_87 = ATgetArgument(o_79, 0);
        }
      else
        _fail(t);
      m_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_15(k_87, m_87, t);
  g_87 = t;
  t = term_s_75;
  h_87 = t;
  t = g_87;
  if(match_cons(t, sym_Stream_1))
    {
      i_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_75, g_87);
  t = h_15(h_87, i_87, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_199 = NULL,h_199 = NULL,i_199 = NULL,j_199 = NULL,k_199 = NULL,n_199 = NULL,o_199 = NULL,p_199 = NULL,q_199 = NULL,r_199 = NULL,s_200 = NULL,t_200 = NULL,b_26 = NULL,a_26 = NULL;
  if(((h_199 != NULL) && (h_199 != t)))
    _fail(t);
  else
    h_199 = t;
  if(match_cons(t, sym__2))
    {
      if(((p_199 != NULL) && (p_199 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_199 = ATgetArgument(t, 0);
      if(((q_199 != NULL) && (q_199 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_199 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(h_199));
  if(((o_199 != NULL) && (o_199 != t)))
    _fail(t);
  else
    o_199 = t;
  t = not_null(p_199);
  {
    ATerm p_79 = t;
    int q_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_31 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((g_199 != NULL) && (g_199 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_199 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_31, t);
        ;
        LocalPopChoice(q_79);
      }
    else
      {
        t = p_79;
        t = term_r_79;
        if(((g_199 != NULL) && (g_199 != t)))
          _fail(t);
        else
          g_199 = t;
      }
    if(((r_199 != NULL) && (r_199 != t)))
      _fail(t);
    else
      r_199 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_199), not_null(q_199));
    if(((a_26 != NULL) && (a_26 != t)))
      _fail(t);
    else
      a_26 = t;
    t = SSLsetAnnotations(not_null(a_26), not_null(o_199));
    t = not_null(h_199);
    if(match_cons(t, sym__2))
      {
        if(((j_199 != NULL) && (j_199 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_199 = ATgetArgument(t, 0);
        if(((k_199 != NULL) && (k_199 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_199 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(h_199));
    if(((i_199 != NULL) && (i_199 != t)))
      _fail(t);
    else
      i_199 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_199), (ATerm) ATmakeAppl(sym__2, not_null(g_199), not_null(k_199)));
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = SSLsetAnnotations(not_null(b_26), not_null(i_199));
    if(((n_199 != NULL) && (n_199 != t)))
      _fail(t);
    else
      n_199 = t;
    if(match_cons(t, sym__2))
      {
        if(((s_200 != NULL) && (s_200 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          s_200 = ATgetArgument(t, 0);
        if(((t_200 != NULL) && (t_200 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          t_200 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_79 = t;
      int t_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,c_26 = NULL;
          t = SSLgetAnnotations(not_null(n_199));
          l_86 = t;
          t = not_null(s_200);
          t = fetch_1_0(c_31, t);
          o_86 = t;
          t = not_null(t_200);
          if(match_cons(t, sym__2))
            {
              q_86 = ATgetArgument(t, 0);
              r_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_15(d_31, q_86, r_86, t);
          p_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_86, p_86);
          c_26 = t;
          t = SSLsetAnnotations(c_26, l_86);
          ;
          LocalPopChoice(t_79);
        }
      else
        {
          t = s_79;
          {
            ATerm a_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,d_26 = NULL;
            t = SSLgetAnnotations(not_null(n_199));
            a_87 = t;
            t = not_null(t_200);
            if(match_cons(t, sym__2))
              {
                e_87 = ATgetArgument(t, 0);
                f_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_15(e_31, e_87, f_87, t);
            d_87 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_200), d_87);
            d_26 = t;
            t = SSLsetAnnotations(d_26, a_87);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm w_200 = NULL,x_200 = NULL,y_200 = NULL,z_200 = NULL,a_201 = NULL;
  a_201 = t;
  t = dtime_0_0(t);
  t = a_201;
  t = m_135(t);
  z_200 = t;
  t = dtime_0_0(t);
  w_200 = t;
  t = z_200;
  if(match_cons(t, sym__2))
    {
      x_200 = ATgetArgument(t, 0);
      y_200 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_200), (ATerm) ATmakeAppl(sym_Runtime_1, w_200)), y_200);
  return(t);
}
ATerm o_201 (ATerm i_201, ATerm t)
{
  t = SSL_fclose(i_201);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_201 = NULL,m_201 = NULL;
  m_201 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_201 = ATgetArgument(t, 0);
      {
        ATerm u_79 = t;
        int v_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_201);
            ;
            LocalPopChoice(v_79);
          }
        else
          {
            t = u_79;
            t = o_201(m_201, t);
          }
      }
    }
  else
    {
      t = o_201(m_201, t);
    }
  return(t);
}
ATerm l_15 (ATerm w_63, ATerm t)
{
  t = SSL_read_term_from_stream(w_63);
  return(t);
}
ATerm m_15 (ATerm i_60, ATerm j_60, ATerm t)
{
  ATerm p_201 = NULL;
  t = SSL_fopen(i_60, j_60);
  p_201 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_201);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_201 = NULL;
  t = SSL_stdin_stream();
  q_201 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_201);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_201 = NULL;
  t = SSL_stdout_stream();
  r_201 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_201);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_201 = NULL;
  t = SSL_stderr_stream();
  s_201 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_201);
  return(t);
}
ATerm z_202 (ATerm y_201, ATerm t)
{
  ATerm z_201 = NULL;
  t = SSL_explode_term(y_201);
  if(match_cons(t, sym__2))
    {
      ATerm w_79 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_79) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_79 = ATgetArgument(t, 1);
        if(((ATgetType(y_79) == AT_LIST) && !(ATisEmpty(y_79))))
          {
            z_201 = ATgetFirst((ATermList) y_79);
            {
              ATerm z_79 = (ATerm) ATgetNext((ATermList) y_79);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_201;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_201;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_201;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_201;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_203 (ATerm c_202, ATerm d_202, ATerm e_202, ATerm t)
{
  ATerm f_202 = NULL,g_202 = NULL,h_202 = NULL,k_202 = NULL,k_26 = NULL;
  t = SSLgetAnnotations(e_202);
  h_202 = t;
  t = c_202;
  if(match_cons(t, sym_Path_1))
    {
      k_202 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_202, d_202);
  k_26 = t;
  t = SSLsetAnnotations(k_26, h_202);
  if(match_cons(t, sym__2))
    {
      f_202 = ATgetArgument(t, 0);
      g_202 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(f_202, g_202, t);
  return(t);
}
ATerm b_203 (ATerm m_202, ATerm n_202, ATerm o_202, ATerm t)
{
  ATerm p_202 = NULL,q_202 = NULL,r_202 = NULL,u_202 = NULL,l_26 = NULL;
  t = SSLgetAnnotations(o_202);
  r_202 = t;
  t = SSL_is_string(m_202);
  u_202 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_202, n_202);
  l_26 = t;
  t = SSLsetAnnotations(l_26, r_202);
  if(match_cons(t, sym__2))
    {
      p_202 = ATgetArgument(t, 0);
      q_202 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(p_202, q_202, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_202 = NULL,x_202 = NULL,y_202 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_80 = ATgetArgument(t, 0);
      ATerm d_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  w_202 = t;
  if(match_cons(t, sym__2))
    {
      x_202 = ATgetArgument(t, 0);
      y_202 = ATgetArgument(t, 1);
      {
        ATerm g_80 = t;
        int h_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_202(w_202, t);
            ;
            LocalPopChoice(h_80);
          }
        else
          {
            t = g_80;
            {
              ATerm i_80 = t;
              int k_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_203(x_202, y_202, w_202, t);
                  ;
                  LocalPopChoice(k_80);
                }
              else
                {
                  t = i_80;
                  t = b_203(x_202, y_202, w_202, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_202(w_202, t);
    }
  return(t);
}
ATerm f_31 (ATerm t)
{
  t = term_l_80;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_203 = NULL,d_203 = NULL,e_203 = NULL;
  ATerm m_80 = t;
  int n_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_203 = NULL;
      f_203 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_203, term_o_80);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_80);
    }
  else
    {
      t = m_80;
      t = debug_1_0(f_31, t);
      _fail(t);
    }
  d_203 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_203 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_15(e_203, t);
  c_203 = t;
  t = d_203;
  t = fclose_0_0(t);
  t = c_203;
  return(t);
}
ATerm fetch_1_0 (ATerm d_120 (ATerm), ATerm t)
{
  ATerm d_204 (ATerm t)
  {
    ATerm a_204 = NULL,b_204 = NULL,c_204 = NULL;
    a_204 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_204 = ATgetFirst((ATermList) t);
        c_204 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_80 = t;
      int r_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_88 = NULL,e_88 = NULL,v_26 = NULL;
          t = SSLgetAnnotations(a_204);
          b_88 = t;
          t = b_204;
          t = d_120(t);
          e_88 = t;
          t = (ATerm) ATinsert(CheckATermList(c_204), e_88);
          v_26 = t;
          t = SSLsetAnnotations(v_26, b_88);
          ;
          LocalPopChoice(r_80);
        }
      else
        {
          t = p_80;
          {
            ATerm m_88 = NULL,p_88 = NULL,x_26 = NULL;
            t = SSLgetAnnotations(a_204);
            m_88 = t;
            t = c_204;
            t = d_204(t);
            p_88 = t;
            t = (ATerm) ATinsert(CheckATermList(p_88), b_204);
            x_26 = t;
            t = SSLsetAnnotations(x_26, m_88);
          }
        }
    }
    return(t);
  }
  t = d_204(t);
  return(t);
}
ATerm g_15 (ATerm w_54, ATerm x_54, ATerm t)
{
  t = SSL_strcat(w_54, x_54);
  return(t);
}
ATerm debug_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm g_204 = NULL,h_204 = NULL,i_204 = NULL,j_204 = NULL;
  g_204 = t;
  t = i_132(t);
  h_204 = t;
  t = term_a_34;
  i_204 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_204), h_204);
  j_204 = t;
  t = SSL_printnl(i_204, j_204);
  t = g_204;
  return(t);
}
ATerm g_31 (ATerm t)
{
  ATerm s_80 = t;
  int v_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_80);
    }
  else
    {
      t = s_80;
    }
  return(t);
}
ATerm h_31 (ATerm t)
{
  t = term_w_80;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_80 = t;
  int y_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_204 = NULL;
      q_204 = t;
      t = SSL_is_string(q_204);
      ;
      LocalPopChoice(y_80);
    }
  else
    {
      t = x_80;
      {
        ATerm z_80 = t;
        int a_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_31, t);
            ;
            LocalPopChoice(a_81);
          }
        else
          {
            t = z_80;
            {
              ATerm w_204 = NULL,x_204 = NULL,y_204 = NULL;
              w_204 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_204 = ATgetArgument(t, 0);
                  t = x_204;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_204 = ATgetArgument(t, 0);
                      t = x_204;
                      {
                        ATerm b_81 = t;
                        int d_81 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_81);
                          }
                        else
                          {
                            t = b_81;
                            t = debug_1_0(h_31, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_205 = NULL,d_205 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_204 = ATgetArgument(t, 0);
                          y_204 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_204;
                      t = eval_config_0_0(t);
                      c_205 = t;
                      t = y_204;
                      t = eval_config_0_0(t);
                      d_205 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_205, d_205);
                      t = g_15(c_205, d_205, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_205 = NULL,i_205 = NULL;
  h_205 = t;
  t = term_g_81;
  i_205 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_81, h_205);
  t = p_15(i_205, h_205, t);
  {
    ATerm h_81 = t;
    int i_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_205 = NULL,k_205 = NULL;
        t = eval_config_0_0(t);
        j_205 = t;
        t = term_g_81;
        k_205 = t;
        t = SSL_table_put(k_205, h_205, j_205);
        t = j_205;
        ;
        LocalPopChoice(i_81);
      }
    else
      {
        t = h_81;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_133 (ATerm), ATerm t)
{
  ATerm o_205 = NULL;
  o_205 = t;
  {
    ATerm j_81 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_205 = NULL;
        t = term_j_37;
        t = get_config_0_0(t);
        q_205 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_205, term_m_81);
        t = geq_0_0(t);
        t = o_205;
        t = v_133(t);
        ;
        LocalPopChoice(k_81);
      }
    else
      {
        t = j_81;
        t = o_205;
      }
  }
  return(t);
}
ATerm i_31 (ATerm t)
{
  ATerm t_205 = NULL;
  t_205 = t;
  if(match_string(t, "-k"))
    {
      t = t_205;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_205;
    }
  return(t);
}
ATerm m_31 (ATerm t)
{
  ATerm u_205 = NULL,v_205 = NULL,w_205 = NULL;
  u_205 = t;
  t = SSL_string_to_int(u_205);
  v_205 = t;
  t = term_n_81;
  w_205 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_81, v_205);
  t = s_15(w_205, v_205, t);
  t = u_205;
  return(t);
}
ATerm n_31 (ATerm t)
{
  t = term_q_81;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_31, m_31, n_31, t);
  return(t);
}
ATerm o_31 (ATerm t)
{
  ATerm y_205 = NULL;
  y_205 = t;
  if(match_string(t, "-S"))
    {
      t = y_205;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_205;
    }
  return(t);
}
ATerm p_31 (ATerm t)
{
  ATerm z_205 = NULL,a_206 = NULL;
  t = term_j_37;
  z_205 = t;
  t = term_e_46;
  a_206 = t;
  t = term_r_81;
  t = s_15(z_205, a_206, t);
  t = term_s_81;
  return(t);
}
ATerm q_31 (ATerm t)
{
  t = term_t_81;
  return(t);
}
ATerm r_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_31 (ATerm t)
{
  ATerm b_206 = NULL,c_206 = NULL,d_206 = NULL;
  b_206 = t;
  t = SSL_string_to_int(b_206);
  c_206 = t;
  t = term_j_37;
  d_206 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_37, c_206);
  t = s_15(d_206, c_206, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_206);
  return(t);
}
ATerm t_31 (ATerm t)
{
  t = term_u_81;
  return(t);
}
ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_31 (ATerm t)
{
  ATerm e_206 = NULL,f_206 = NULL;
  t = term_v_81;
  e_206 = t;
  t = term_z_33;
  f_206 = t;
  t = term_w_81;
  t = s_15(e_206, f_206, t);
  t = term_y_81;
  return(t);
}
ATerm w_31 (ATerm t)
{
  t = term_d_82;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_82 = t;
  int h_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_31, p_31, q_31, t);
      ;
      LocalPopChoice(h_82);
    }
  else
    {
      t = g_82;
      {
        ATerm j_82 = t;
        int k_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_31, s_31, t_31, t);
            ;
            LocalPopChoice(k_82);
          }
        else
          {
            t = j_82;
            t = Option_3_0(u_31, v_31, w_31, t);
          }
      }
    }
  return(t);
}
ATerm s_15 (ATerm x_64, ATerm y_64, ATerm t)
{
  ATerm g_206 = NULL;
  t = term_g_81;
  g_206 = t;
  t = SSL_table_put(g_206, x_64, y_64);
  t = (ATerm) ATmakeAppl(sym__3, term_g_81, x_64, y_64);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_206 = NULL,k_206 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_206 = NULL,m_206 = NULL,n_206 = NULL;
      t = term_z_33;
      t = d_0(t);
      l_206 = t;
      t = term_l_82;
      m_206 = t;
      t = term_m_82;
      n_206 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_82, term_m_82, l_206);
      t = q_15(m_206, n_206, l_206, t);
      _fail(t);
    }
  else
    {
      ATerm q_206 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_206 = ATgetFirst((ATermList) t);
          k_206 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_206;
      t = a_0(t);
      t = term_z_33;
      t = b_0(t);
      q_206 = t;
      t = (ATerm) ATinsert(CheckATermList(k_206), q_206);
    }
  return(t);
}
ATerm x_31 (ATerm t)
{
  ATerm s_206 = NULL;
  s_206 = t;
  if(match_string(t, "-o"))
    {
      t = s_206;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_206;
    }
  return(t);
}
ATerm y_31 (ATerm t)
{
  ATerm t_206 = NULL,u_206 = NULL;
  t_206 = t;
  t = term_n_82;
  u_206 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_82, t_206);
  t = s_15(u_206, t_206, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_206);
  return(t);
}
ATerm z_31 (ATerm t)
{
  t = term_p_82;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_31, y_31, z_31, t);
  return(t);
}
ATerm q_15 (ATerm v_69, ATerm w_69, ATerm u_69, ATerm t)
{
  ATerm w_206 = NULL,x_206 = NULL,y_206 = NULL;
  w_206 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_69, w_69);
  {
    ATerm q_82 = t;
    int w_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_82 = ATgetArgument(t, 0);
            ATerm y_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_69, w_69);
        t = p_15(v_69, w_69, t);
        ;
        LocalPopChoice(w_82);
      }
    else
      {
        t = q_82;
        t = (ATerm) ATempty;
      }
    x_206 = t;
    t = (ATerm) ATinsert(CheckATermList(x_206), u_69);
    y_206 = t;
    t = SSL_table_put(v_69, w_69, y_206);
    t = w_206;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_207 = NULL,g_207 = NULL,h_207 = NULL,i_207 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_207 = NULL,k_207 = NULL,l_207 = NULL;
      t = term_z_33;
      t = m_0(t);
      j_207 = t;
      t = term_l_82;
      k_207 = t;
      t = term_m_82;
      l_207 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_82, term_m_82, j_207);
      t = q_15(k_207, l_207, j_207, t);
      _fail(t);
    }
  else
    {
      ATerm p_207 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_207 = ATgetFirst((ATermList) t);
          g_207 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_207;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_207 = ATgetFirst((ATermList) t);
          i_207 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_207;
      t = i_0(t);
      t = h_207;
      t = k_0(t);
      p_207 = t;
      t = (ATerm) ATinsert(CheckATermList(i_207), p_207);
    }
  return(t);
}
ATerm a_32 (ATerm t)
{
  ATerm r_207 = NULL;
  r_207 = t;
  if(match_string(t, "-i"))
    {
      t = r_207;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_207;
    }
  return(t);
}
ATerm b_32 (ATerm t)
{
  ATerm s_207 = NULL,t_207 = NULL;
  s_207 = t;
  t = term_b_83;
  t_207 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_83, s_207);
  t = s_15(t_207, s_207, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_207);
  return(t);
}
ATerm c_32 (ATerm t)
{
  t = term_c_83;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_32, b_32, c_32, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_207 = NULL,v_207 = NULL,w_207 = NULL,x_207 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_33;
  t = whoami_0_0(t);
  u_207 = t;
  t = term_a_34;
  w_207 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_83), u_207);
  x_207 = t;
  t = SSL_printnl(w_207, x_207);
  t = term_d_34;
  v_207 = t;
  t = SSL_exit(v_207);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_83;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_15 (ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm g_83 = t;
  int i_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_57, h_57);
      ;
      LocalPopChoice(i_83);
    }
  else
    {
      t = g_83;
      t = SSL_addr(g_57, h_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t)
{
  ATerm z_207 = NULL,a_208 = NULL,b_208 = NULL;
  z_207 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_207;
      t = w_125(t);
    }
  else
    {
      ATerm e_208 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_208 = ATgetFirst((ATermList) t);
          b_208 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_208;
      t = foldr_2_0(w_125, x_125, t);
      e_208 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_208, e_208);
      t = x_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_32 (ATerm t)
{
  t = term_e_46;
  return(t);
}
ATerm g_32 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL;
  if(match_cons(t, sym__2))
    {
      j_89 = ATgetArgument(t, 0);
      k_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(j_89, k_89, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_208 = NULL,f_89 = NULL,g_89 = NULL;
  t = times_0_0(t);
  g_89 = t;
  t = SSL_explode_term(g_89);
  if(match_cons(t, sym__2))
    {
      ATerm j_83 = ATgetArgument(t, 0);
      f_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_89;
  t = foldr_2_0(d_32, g_32, t);
  h_208 = t;
  t = SSL_TicksToSeconds(h_208);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_208 = NULL,t_208 = NULL,u_208 = NULL;
  s_208 = t;
  if(match_cons(t, sym__2))
    {
      t_208 = ATgetArgument(t, 0);
      u_208 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_83 = t;
    int p_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_208;
        if((t_208 != t))
          {
            _fail(t);
          }
        t = s_208;
        ;
        LocalPopChoice(p_83);
      }
    else
      {
        t = m_83;
        t = (ATerm) ATmakeAppl(sym__2, t_208, u_208);
        {
          ATerm q_83 = t;
          int r_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_208, u_208);
              ;
              LocalPopChoice(r_83);
            }
          else
            {
              t = q_83;
              t = SSL_gtr(t_208, u_208);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_208, u_208);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_133 (ATerm), ATerm t)
{
  ATerm y_208 = NULL;
  y_208 = t;
  {
    ATerm s_83 = t;
    int t_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_209 = NULL;
        t = term_j_37;
        t = get_config_0_0(t);
        a_209 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_209, term_d_34);
        t = geq_0_0(t);
        t = y_208;
        t = u_133(t);
        ;
        LocalPopChoice(t_83);
      }
    else
      {
        t = s_83;
        t = y_208;
      }
  }
  return(t);
}
ATerm h_32 (ATerm t)
{
  ATerm c_209 = NULL,d_209 = NULL,f_209 = NULL,g_209 = NULL;
  t = run_time_0_0(t);
  c_209 = t;
  t = term_z_33;
  t = whoami_0_0(t);
  d_209 = t;
  t = term_a_34;
  f_209 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_83), c_209), term_v_83), d_209);
  g_209 = t;
  t = SSL_printnl(f_209, g_209);
  t = (ATerm) ATmakeAppl(sym__2, term_a_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_83), c_209), term_v_83), d_209));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_32, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_209 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_46;
  h_209 = t;
  t = SSL_exit(h_209);
  return(t);
}
ATerm o_32 (ATerm t)
{
  ATerm p_209 = NULL,q_209 = NULL;
  q_209 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_209;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_209 = ATgetArgument(t, 0);
          {
            ATerm w_89 = NULL,g_27 = NULL;
            t = SSLgetAnnotations(q_209);
            w_89 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_209);
            g_27 = t;
            t = SSLsetAnnotations(g_27, w_89);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_209;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm y_83 = t;
  int a_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_84;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_84);
    }
  else
    {
      t = y_83;
      t = fetch_1_0(o_32, t);
    }
  t = k_136(t);
  return(t);
}
ATerm map_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm g_210 (ATerm t)
  {
    ATerm d_210 = NULL,e_210 = NULL,f_210 = NULL;
    d_210 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_210;
      }
    else
      {
        ATerm g_90 = NULL,j_90 = NULL,k_90 = NULL,i_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_210 = ATgetFirst((ATermList) t);
            f_210 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_210);
        g_90 = t;
        t = e_210;
        t = t_119(t);
        j_90 = t;
        t = f_210;
        t = g_210(t);
        k_90 = t;
        t = (ATerm) ATinsert(CheckATermList(k_90), j_90);
        i_27 = t;
        t = SSLsetAnnotations(i_27, g_90);
      }
    return(t);
  }
  t = g_210(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_210 = NULL,k_210 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_210 = ATgetFirst((ATermList) t);
      k_210 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_210 = NULL,p_210 = NULL;
        ATerm p_32 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_210)), not_null(p_210));
          return(t);
        }
        t = not_null(k_210);
        t = g_0(t);
        if(((o_210 != NULL) && (o_210 != t)))
          _fail(t);
        else
          o_210 = t;
        t = not_null(j_210);
        t = f_0(t);
        if(((p_210 != NULL) && (p_210 != t)))
          _fail(t);
        else
          p_210 = t;
        t = not_null(k_210);
        t = reverse_acc_2_0(f_0, p_32, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_33;
      t = g_0(t);
    }
  return(t);
}
ATerm p_15 (ATerm m_71, ATerm n_71, ATerm t)
{
  t = SSL_table_get(m_71, n_71);
  return(t);
}
ATerm r_32 (ATerm t)
{
  ATerm t_210 = NULL,u_210 = NULL,v_210 = NULL,k_27 = NULL;
  v_210 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_210 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_210);
  t_210 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_210);
  k_27 = t;
  t = SSLsetAnnotations(k_27, t_210);
  return(t);
}
ATerm s_32 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_32 (ATerm t)
{
  ATerm x_210 = NULL;
  x_210 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_210), term_c_84);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_210 = NULL,s_210 = NULL;
  ATerm e_84 = t;
  int i_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_83;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_84);
    }
  else
    {
      t = e_84;
      t = fetch_1_0(r_32, t);
    }
  t = term_j_84;
  t = echo_0_0(t);
  t = term_l_82;
  r_210 = t;
  t = term_m_82;
  s_210 = t;
  t = term_l_84;
  t = p_15(r_210, s_210, t);
  t = reverse_acc_2_0(_id, s_32, t);
  t = map_1_0(u_32, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_210 = NULL,a_211 = NULL,b_211 = NULL;
  z_210 = t;
  {
    ATerm m_84 = t;
    int o_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_210;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_84 = ATgetFirst((ATermList) t);
                ATerm q_84 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_210;
          }
        ;
        LocalPopChoice(o_84);
      }
    else
      {
        t = m_84;
        t = (ATerm) ATinsert(ATempty, z_210);
      }
    a_211 = t;
    t = term_r_79;
    b_211 = t;
    t = SSL_printnl(b_211, a_211);
    t = z_210;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_83;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_32 (ATerm t)
{
  ATerm f_211 = NULL,g_211 = NULL;
  t = term_r_84;
  f_211 = t;
  t = term_z_33;
  g_211 = t;
  t = term_t_84;
  t = s_15(f_211, g_211, t);
  return(t);
}
ATerm y_32 (ATerm t)
{
  t = term_v_84;
  return(t);
}
ATerm b_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_33 (ATerm t)
{
  ATerm h_211 = NULL,i_211 = NULL,j_211 = NULL,k_211 = NULL;
  t = term_r_84;
  j_211 = t;
  t = term_z_33;
  k_211 = t;
  t = term_t_84;
  t = s_15(j_211, k_211, t);
  t = term_w_84;
  h_211 = t;
  t = term_z_33;
  i_211 = t;
  t = term_x_84;
  t = s_15(h_211, i_211, t);
  t = term_y_84;
  return(t);
}
ATerm d_33 (ATerm t)
{
  t = term_z_84;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_85 = t;
  int c_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_32, x_32, y_32, t);
      ;
      LocalPopChoice(c_85);
    }
  else
    {
      t = b_85;
      t = Option_3_0(b_33, c_33, d_33, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm l_211 = NULL,m_211 = NULL,n_211 = NULL,o_211 = NULL,p_211 = NULL,q_211 = NULL,t_27 = NULL;
  q_211 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_211 = ATgetFirst((ATermList) t);
      n_211 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_211);
  l_211 = t;
  t = m_211;
  t = n_98(t);
  o_211 = t;
  t = n_211;
  t = o_98(t);
  p_211 = t;
  t = (ATerm) ATinsert(CheckATermList(p_211), o_211);
  t_27 = t;
  t = SSLsetAnnotations(t_27, l_211);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_138 (ATerm), ATerm t)
{
  ATerm v_211 = NULL,w_211 = NULL,x_211 = NULL,y_211 = NULL,a_212 = NULL,b_212 = NULL,w_27 = NULL;
  if(((v_211 != NULL) && (v_211 != t)))
    _fail(t);
  else
    v_211 = t;
  {
    ATerm d_85 = t;
    int e_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_85;
        t = n_138(t);
        ;
        LocalPopChoice(e_85);
      }
    else
      {
        t = d_85;
      }
    t = not_null(v_211);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_211 != NULL) && (x_211 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_211 = ATgetFirst((ATermList) t);
        if(((y_211 != NULL) && (y_211 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_211 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(v_211));
    if(((w_211 != NULL) && (w_211 != t)))
      _fail(t);
    else
      w_211 = t;
    t = term_e_83;
    if(((b_212 != NULL) && (b_212 != t)))
      _fail(t);
    else
      b_212 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_83, not_null(x_211));
    t = s_15(not_null(b_212), not_null(x_211), t);
    t = not_null(y_211);
    {
      ATerm l_212 (ATerm t)
      {
        ATerm h_85 = t;
        int i_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_85 = t;
            int l_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_212 = NULL;
                e_212 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_212;
                ;
                LocalPopChoice(l_85);
              }
            else
              {
                t = k_85;
                t = n_138(t);
                t = Cons_2_0(_id, l_212, t);
              }
            ;
            LocalPopChoice(i_85);
          }
        else
          {
            t = h_85;
            {
              ATerm h_212 = NULL,i_212 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_212 = ATgetFirst((ATermList) t);
                  i_212 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_212), (ATerm) ATmakeAppl(sym_Undefined_1, h_212));
            }
          }
        return(t);
      }
      t = l_212(t);
      if(((a_212 != NULL) && (a_212 != t)))
        _fail(t);
      else
        a_212 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(a_212)), (ATerm) ATmakeAppl(sym_Program_1, not_null(x_211)));
      if(((w_27 != NULL) && (w_27 != t)))
        _fail(t);
      else
        w_27 = t;
      t = SSLsetAnnotations(not_null(w_27), not_null(w_211));
    }
  }
  return(t);
}
ATerm f_33 (ATerm t)
{
  ATerm x_212 = NULL;
  x_212 = t;
  if(match_string(t, "--help"))
    {
      t = x_212;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_212;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_212;
        }
    }
  return(t);
}
ATerm g_33 (ATerm t)
{
  ATerm y_212 = NULL,z_212 = NULL;
  t = term_b_84;
  y_212 = t;
  t = term_z_33;
  z_212 = t;
  t = term_m_85;
  t = s_15(y_212, z_212, t);
  t = term_n_85;
  return(t);
}
ATerm h_33 (ATerm t)
{
  t = term_o_85;
  return(t);
}
ATerm i_33 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm q_212 = NULL,r_212 = NULL,s_212 = NULL,t_212 = NULL,u_212 = NULL,v_212 = NULL,w_212 = NULL;
  if(((s_212 != NULL) && (s_212 != t)))
    _fail(t);
  else
    s_212 = t;
  t = term_l_82;
  if(((u_212 != NULL) && (u_212 != t)))
    _fail(t);
  else
    u_212 = t;
  t = term_m_82;
  if(((v_212 != NULL) && (v_212 != t)))
    _fail(t);
  else
    v_212 = t;
  t = (ATerm) ATempty;
  if(((w_212 != NULL) && (w_212 != t)))
    _fail(t);
  else
    w_212 = t;
  t = SSL_table_put(not_null(u_212), not_null(v_212), not_null(w_212));
  t = not_null(s_212);
  {
    ATerm e_33 (ATerm t)
    {
      ATerm p_85 = t;
      int q_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_138(t);
          ;
          LocalPopChoice(q_85);
        }
      else
        {
          t = p_85;
          {
            ATerm r_85 = t;
            int s_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_33, g_33, h_33, t);
                ;
                LocalPopChoice(s_85);
              }
            else
              {
                t = r_85;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_33, t);
    {
      ATerm t_85 = t;
      int v_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_213 = NULL;
          g_213 = t;
          {
            ATerm w_85 = t;
            int x_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_90 = NULL;
                t = g_213;
                {
                  ATerm y_85 = t;
                  int a_86 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_84;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_86);
                    }
                  else
                    {
                      t = y_85;
                      t = fetch_1_0(i_33, t);
                    }
                  t = g_213;
                  t = default_system_usage_0_0(t);
                  t = term_e_46;
                  x_90 = t;
                  t = SSL_exit(x_90);
                }
                ;
                LocalPopChoice(x_85);
              }
            else
              {
                t = w_85;
                {
                  ATerm b_91 = NULL;
                  t = term_r_84;
                  t = get_config_0_0(t);
                  t = g_213;
                  t = default_system_about_0_0(t);
                  t = term_e_46;
                  b_91 = t;
                  t = SSL_exit(b_91);
                }
              }
          }
          ;
          LocalPopChoice(v_85);
        }
      else
        {
          t = t_85;
          {
            ATerm b_86 = t;
            int c_86 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_213 = NULL,i_213 = NULL,j_213 = NULL;
                ATerm j_33 (ATerm t)
                {
                  ATerm k_213 = NULL,l_213 = NULL,m_213 = NULL,d_28 = NULL;
                  m_213 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_213 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_213);
                  k_213 = t;
                  t = l_213;
                  if(((q_212 != NULL) && (q_212 != t)))
                    _fail(t);
                  else
                    q_212 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_213);
                  d_28 = t;
                  t = SSLsetAnnotations(d_28, k_213);
                  return(t);
                }
                t = fetch_1_0(j_33, t);
                t = term_a_34;
                if(((i_213 != NULL) && (i_213 != t)))
                  _fail(t);
                else
                  i_213 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_212)), term_d_86);
                if(((j_213 != NULL) && (j_213 != t)))
                  _fail(t);
                else
                  j_213 = t;
                t = SSL_printnl(not_null(i_213), not_null(j_213));
                t = (ATerm) ATmakeAppl(sym__2, term_a_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_212)), term_d_86));
                t = default_system_usage_0_0(t);
                t = term_d_34;
                if(((h_213 != NULL) && (h_213 != t)))
                  _fail(t);
                else
                  h_213 = t;
                t = SSL_exit(not_null(h_213));
                ;
                LocalPopChoice(c_86);
              }
            else
              {
                t = b_86;
              }
          }
        }
      if(((r_212 != NULL) && (r_212 != t)))
        _fail(t);
      else
        r_212 = t;
      t = term_l_82;
      if(((t_212 != NULL) && (t_212 != t)))
        _fail(t);
      else
        t_212 = t;
      t = SSL_table_destroy(not_null(t_212));
      t = not_null(r_212);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm t)
{
  ATerm r_213 = NULL,s_213 = NULL,t_213 = NULL,u_213 = NULL;
  t = parse_options_1_0(m_136, t);
  r_213 = t;
  t = term_e_86;
  u_213 = t;
  t = SSL_table_create(u_213);
  t = term_e_86;
  s_213 = t;
  t = term_f_86;
  t_213 = t;
  t = SSL_table_put(s_213, t_213, r_213);
  t = r_213;
  t = o_136(t);
  {
    ATerm g_86 = t;
    int i_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_136, t);
        ;
        LocalPopChoice(i_86);
      }
    else
      {
        t = g_86;
        {
          ATerm j_86 = t;
          int m_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_136(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_86);
            }
          else
            {
              t = j_86;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_33 (ATerm t)
{
  t = if_verbose2_1_0(u_33, t);
  return(t);
}
ATerm n_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_33 (ATerm t)
{
  ATerm v_213 = NULL,w_213 = NULL;
  t = term_n_86;
  v_213 = t;
  t = term_z_33;
  w_213 = t;
  t = term_u_86;
  t = s_15(v_213, w_213, t);
  t = term_v_86;
  return(t);
}
ATerm q_33 (ATerm t)
{
  t = term_y_86;
  return(t);
}
ATerm u_33 (ATerm t)
{
  ATerm x_213 = NULL,y_213 = NULL,z_213 = NULL,a_214 = NULL;
  x_213 = t;
  t = term_e_83;
  t = get_config_0_0(t);
  y_213 = t;
  t = term_a_34;
  z_213 = t;
  t = (ATerm) ATinsert(ATempty, y_213);
  a_214 = t;
  t = SSL_printnl(z_213, a_214);
  t = x_213;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm t)
{
  ATerm k_33 (ATerm t)
  {
    ATerm z_86 = t;
    int b_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_135(t);
        ;
        LocalPopChoice(b_87);
      }
    else
      {
        t = z_86;
        {
          ATerm c_87 = t;
          int n_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(n_87);
            }
          else
            {
              t = c_87;
              {
                ATerm o_87 = t;
                int p_87 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_87);
                  }
                else
                  {
                    t = o_87;
                    {
                      ATerm q_87 = t;
                      int r_87 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_33, p_33, q_33, t);
                          ;
                          LocalPopChoice(r_87);
                        }
                      else
                        {
                          t = q_87;
                          {
                            ATerm s_87 = t;
                            int t_87 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_87);
                              }
                            else
                              {
                                t = s_87;
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
  ATerm m_33 (ATerm t)
  {
    ATerm b_214 = NULL,c_214 = NULL,d_214 = NULL;
    if(((c_214 != NULL) && (c_214 != t)))
      _fail(t);
    else
      c_214 = t;
    {
      ATerm u_87 = t;
      int v_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_33 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_214 != NULL) && (b_214 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_214 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_33, t);
          ;
          LocalPopChoice(v_87);
        }
      else
        {
          t = u_87;
          t = term_w_87;
          if(((b_214 != NULL) && (b_214 != t)))
            _fail(t);
          else
            b_214 = t;
        }
      t = not_null(b_214);
      t = ReadFromFile_0_0(t);
      if(((d_214 != NULL) && (d_214 != t)))
        _fail(t);
      else
        d_214 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_214), not_null(d_214));
      t = apply_strategy_1_0(v_135, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_33, x_135, l_33, m_33, t);
  return(t);
}
ATerm y_33 (ATerm t)
{
  ATerm e_214 = NULL,f_214 = NULL,g_214 = NULL,h_214 = NULL,i_214 = NULL,f_29 = NULL;
  i_214 = t;
  if(match_cons(t, sym__2))
    {
      f_214 = ATgetArgument(t, 0);
      g_214 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_214);
  e_214 = t;
  t = g_214;
  t = frontend_transformation_0_0(t);
  h_214 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_214, h_214);
  f_29 = t;
  t = SSLsetAnnotations(f_29, e_214);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(y_33, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_c_129;
ATerm term_i_128;
ATerm term_h_128;
ATerm term_g_128;
ATerm term_x_127;
ATerm term_w_127;
ATerm term_v_127;
ATerm term_q_126;
ATerm term_l_126;
ATerm term_c_126;
ATerm term_x_125;
ATerm term_w_125;
ATerm term_v_125;
ATerm term_u_125;
ATerm term_t_125;
ATerm term_s_125;
ATerm term_g_125;
ATerm term_x_124;
ATerm term_q_124;
ATerm term_i_124;
ATerm term_f_124;
ATerm term_n_123;
ATerm term_l_123;
ATerm term_k_123;
ATerm term_j_123;
ATerm term_d_123;
ATerm term_c_123;
ATerm term_b_123;
ATerm term_a_123;
ATerm term_h_122;
ATerm term_y_121;
ATerm term_x_121;
ATerm term_q_121;
ATerm term_p_121;
ATerm term_k_121;
ATerm term_f_121;
ATerm term_e_121;
ATerm term_z_120;
ATerm term_k_120;
ATerm term_o_119;
ATerm term_n_119;
ATerm term_q_118;
ATerm term_j_118;
ATerm term_i_118;
ATerm term_a_118;
ATerm term_z_117;
ATerm term_a_117;
ATerm term_z_116;
ATerm term_y_116;
ATerm term_v_116;
ATerm term_u_116;
ATerm term_t_116;
ATerm term_q_116;
ATerm term_o_116;
ATerm term_i_116;
ATerm term_h_116;
ATerm term_g_116;
ATerm term_h_115;
ATerm term_g_115;
ATerm term_f_115;
ATerm term_e_115;
ATerm term_d_115;
ATerm term_w_114;
ATerm term_s_114;
ATerm term_p_114;
ATerm term_o_114;
ATerm term_k_113;
ATerm term_l_109;
ATerm term_j_109;
ATerm term_h_109;
ATerm term_w_106;
ATerm term_u_106;
ATerm term_t_106;
ATerm term_s_106;
ATerm term_r_106;
ATerm term_z_105;
ATerm term_i_97;
ATerm term_h_97;
ATerm term_a_96;
ATerm term_z_95;
ATerm term_w_95;
ATerm term_v_95;
ATerm term_s_95;
ATerm term_r_95;
ATerm term_m_95;
ATerm term_l_95;
ATerm term_k_95;
ATerm term_j_95;
ATerm term_f_95;
ATerm term_e_95;
ATerm term_d_92;
ATerm term_z_91;
ATerm term_y_91;
ATerm term_x_91;
ATerm term_u_91;
ATerm term_p_90;
ATerm term_o_90;
ATerm term_r_89;
ATerm term_q_89;
ATerm term_i_89;
ATerm term_h_89;
ATerm term_r_88;
ATerm term_e_88;
ATerm term_z_87;
ATerm term_u_87;
ATerm term_y_86;
ATerm term_x_86;
ATerm term_w_86;
ATerm term_p_86;
ATerm term_o_86;
ATerm term_n_86;
ATerm term_m_86;
ATerm term_l_86;
ATerm term_t_85;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_t_80;
ATerm term_s_80;
ATerm term_r_80;
ATerm term_q_80;
ATerm term_p_80;
ATerm term_i_80;
ATerm term_d_80;
ATerm term_c_80;
ATerm term_k_79;
ATerm term_y_78;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_f_78;
ATerm term_v_77;
ATerm term_u_77;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_m_77;
ATerm term_l_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_g_77;
ATerm term_f_77;
ATerm term_e_77;
ATerm term_d_77;
ATerm term_c_77;
ATerm term_b_77;
ATerm term_a_77;
ATerm term_z_76;
ATerm term_y_76;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_t_76;
ATerm term_s_76;
ATerm term_r_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_a_76;
ATerm term_x_75;
ATerm term_r_75;
ATerm term_j_75;
ATerm term_e_71;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_e_64;
ATerm term_b_64;
ATerm term_w_63;
ATerm term_z_61;
ATerm term_o_61;
ATerm term_j_61;
ATerm term_b_60;
ATerm term_o_59;
ATerm term_n_59;
ATerm term_i_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_b_59;
ATerm term_m_38;
void init_constant_terms (void)
{
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(sym_Op_2, term_v_70, (ATerm) ATempty);
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(sym_ConstType_1, term_w_70);
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_75);
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_76);
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(sym_Var_1, term_r_76);
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(sym_Var_1, term_t_76);
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(sym_Anno_2, term_s_76, term_u_76);
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_z_76));
  term_z_76 = (ATerm) ATmakeAppl(sym_Var_1, term_y_76);
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym_Var_1, term_a_77);
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(sym_Anno_2, term_z_76, term_b_77);
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_76);
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(sym_Call_2, term_d_77, (ATerm) ATempty);
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(sym_BAM_3, term_e_77, term_s_76, term_z_76);
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_76);
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(sym_Call_2, term_g_77, (ATerm) ATempty);
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(sym_BAM_3, term_h_77, term_u_76, term_b_77);
  ATprotect(&(term_l_77));
  term_l_77 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(sym_Var_1, term_j_78);
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_80);
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(sym_Keys_1, term_r_75);
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_t_80));
  term_t_80 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_80);
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_78);
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, term_d_81);
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_76);
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_86);
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_i_89));
  term_i_89 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_q_89));
  term_q_89 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_r_89));
  term_r_89 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_89);
  ATprotect(&(term_o_90));
  term_o_90 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_u_91));
  term_u_91 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_x_91));
  term_x_91 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_91));
  term_y_91 = (ATerm) ATmakeAppl(sym_Op_2, term_x_91, (ATerm) ATempty);
  ATprotect(&(term_z_91));
  term_z_91 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_d_92));
  term_d_92 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_e_95));
  term_e_95 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_f_95));
  term_f_95 = (ATerm) ATmakeAppl(sym_Op_2, term_e_95, (ATerm) ATempty);
  ATprotect(&(term_j_95));
  term_j_95 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_k_95));
  term_k_95 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_l_95));
  term_l_95 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_m_95));
  term_m_95 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_95);
  ATprotect(&(term_r_95));
  term_r_95 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_s_95));
  term_s_95 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_95);
  ATprotect(&(term_v_95));
  term_v_95 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_w_95));
  term_w_95 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_95);
  ATprotect(&(term_z_95));
  term_z_95 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_a_96));
  term_a_96 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_95);
  ATprotect(&(term_h_97));
  term_h_97 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_i_97));
  term_i_97 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_97);
  ATprotect(&(term_z_105));
  term_z_105 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_r_106));
  term_r_106 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_106));
  term_s_106 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_t_106));
  term_t_106 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_106);
  ATprotect(&(term_u_106));
  term_u_106 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_w_106));
  term_w_106 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_106);
  ATprotect(&(term_h_109));
  term_h_109 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_j_109));
  term_j_109 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_l_109));
  term_l_109 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_k_113));
  term_k_113 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_59);
  ATprotect(&(term_o_114));
  term_o_114 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_114));
  term_p_114 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_114);
  ATprotect(&(term_s_114));
  term_s_114 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_91);
  ATprotect(&(term_w_114));
  term_w_114 = (ATerm) ATmakeAppl(sym_Call_2, term_s_114, (ATerm) ATempty);
  ATprotect(&(term_d_115));
  term_d_115 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_115));
  term_e_115 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_115));
  term_f_115 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_115));
  term_g_115 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_115));
  term_h_115 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_g_116));
  term_g_116 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_h_116));
  term_h_116 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_116);
  ATprotect(&(term_i_116));
  term_i_116 = (ATerm) ATmakeAppl(sym_Call_2, term_h_116, (ATerm) ATempty);
  ATprotect(&(term_o_116));
  term_o_116 = (ATerm) ATmakeAppl(sym_Call_2, term_k_113, (ATerm) ATempty);
  ATprotect(&(term_q_116));
  term_q_116 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_t_116));
  term_t_116 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_u_116));
  term_u_116 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_v_116));
  term_v_116 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_y_116));
  term_y_116 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_z_116));
  term_z_116 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_a_117));
  term_a_117 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_z_117));
  term_z_117 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_a_118));
  term_a_118 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_i_118));
  term_i_118 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_j_118));
  term_j_118 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_118));
  term_q_118 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_119));
  term_n_119 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_119));
  term_o_119 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_120));
  term_k_120 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_120));
  term_z_120 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_121));
  term_e_121 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_121));
  term_f_121 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_121));
  term_k_121 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_75);
  ATprotect(&(term_p_121));
  term_p_121 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_121));
  term_q_121 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_121));
  term_x_121 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_121));
  term_y_121 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_122));
  term_h_122 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_123));
  term_a_123 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_123));
  term_b_123 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_123));
  term_c_123 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_123));
  term_d_123 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_123));
  term_j_123 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_123));
  term_k_123 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_123));
  term_l_123 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_123));
  term_n_123 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_124));
  term_f_124 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_124));
  term_i_124 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_124));
  term_q_124 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_124));
  term_x_124 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_125));
  term_g_125 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_125));
  term_s_125 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_125));
  term_t_125 = (ATerm) ATmakeAppl(sym__3, term_b_64, term_s_125, term_m_38);
  ATprotect(&(term_u_125));
  term_u_125 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_125));
  term_v_125 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_125));
  term_w_125 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_125));
  term_x_125 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_126));
  term_c_126 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_126));
  term_l_126 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_126));
  term_q_126 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_127));
  term_v_127 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_127));
  term_w_127 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_127));
  term_x_127 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_128));
  term_g_128 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_128));
  term_h_128 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_128));
  term_i_128 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_129));
  term_c_129 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm p_142 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm n_30 (ATerm);
ATerm o_30 (ATerm);
ATerm p_30 (ATerm);
ATerm s_30 (ATerm);
ATerm t_30 (ATerm);
ATerm u_30 (ATerm);
ATerm v_30 (ATerm);
ATerm w_30 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm h_7 (ATerm y_6, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm y_30 (ATerm);
ATerm z_30 (ATerm);
ATerm a_31 (ATerm);
ATerm b_31 (ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm g_31 (ATerm);
ATerm h_31 (ATerm);
ATerm j_31 (ATerm);
ATerm k_31 (ATerm);
ATerm m_31 (ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm r_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm u_31 (ATerm);
ATerm v_31 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm q_98 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm l_133 (ATerm), ATerm);
ATerm b_32 (ATerm);
ATerm c_32 (ATerm);
ATerm d_32 (ATerm);
ATerm e_32 (ATerm);
ATerm g_32 (ATerm);
ATerm h_32 (ATerm);
ATerm j_32 (ATerm);
ATerm k_32 (ATerm);
ATerm m_32 (ATerm);
ATerm n_32 (ATerm);
ATerm p_32 (ATerm);
ATerm r_32 (ATerm);
ATerm a_33 (ATerm);
ATerm d_33 (ATerm);
ATerm e_33 (ATerm);
ATerm h_33 (ATerm);
ATerm spaste_1_0 (ATerm b_142 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm c_142 (ATerm), ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm);
ATerm o_33 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm rename_4_0 (ATerm x_138 (ATerm (ATerm), ATerm), ATerm y_138 (ATerm), ATerm z_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_139 (ATerm (ATerm), ATerm), ATerm);
ATerm u_33 (ATerm);
ATerm v_33 (ATerm);
ATerm w_33 (ATerm);
ATerm x_33 (ATerm);
ATerm y_33 (ATerm);
ATerm b_34 (ATerm);
ATerm c_34 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm ListBuild_0_0 (ATerm);
ATerm ListMatch_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm j_34 (ATerm);
ATerm k_34 (ATerm);
ATerm l_34 (ATerm);
ATerm m_34 (ATerm);
ATerm q_34 (ATerm);
ATerm s_34 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_112 (ATerm), ATerm);
ATerm t_34 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm);
ATerm u_34 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm x_34 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_113 (ATerm), ATerm);
ATerm e_35 (ATerm);
ATerm h_35 (ATerm);
ATerm i_35 (ATerm);
ATerm j_35 (ATerm);
ATerm k_35 (ATerm);
ATerm l_35 (ATerm);
ATerm m_35 (ATerm);
ATerm q_35 (ATerm);
ATerm s_35 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm t_35 (ATerm);
ATerm u_35 (ATerm);
ATerm w_35 (ATerm);
ATerm x_35 (ATerm);
ATerm y_35 (ATerm);
ATerm z_35 (ATerm);
ATerm a_36 (ATerm);
ATerm b_36 (ATerm);
ATerm c_36 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm t_46 (ATerm j_46, ATerm);
ATerm u_46 (ATerm m_46, ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm d_36 (ATerm);
ATerm e_36 (ATerm);
ATerm f_36 (ATerm);
ATerm g_36 (ATerm);
ATerm h_36 (ATerm);
ATerm i_36 (ATerm);
ATerm k_36 (ATerm);
ATerm l_36 (ATerm);
ATerm n_36 (ATerm);
ATerm o_36 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm r_36 (ATerm);
ATerm v_36 (ATerm);
ATerm w_36 (ATerm);
ATerm z_36 (ATerm);
ATerm d_37 (ATerm);
ATerm RulesToSdefs_0_0 (ATerm);
ATerm e_37 (ATerm);
ATerm f_37 (ATerm);
ATerm h_37 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm i_37 (ATerm);
ATerm j_37 (ATerm);
ATerm p_37 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm q_37 (ATerm);
ATerm r_37 (ATerm);
ATerm s_37 (ATerm);
ATerm t_37 (ATerm);
ATerm CheckTuple_0_0 (ATerm);
ATerm u_37 (ATerm);
ATerm x_37 (ATerm);
ATerm y_37 (ATerm);
ATerm a_38 (ATerm);
ATerm d_38 (ATerm);
ATerm l_38 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm d_116 (ATerm), ATerm);
ATerm p_38 (ATerm);
ATerm u_38 (ATerm);
ATerm w_38 (ATerm);
ATerm check_constructors_p__2_0 (ATerm m_142 (ATerm), ATerm n_142 (ATerm), ATerm);
ATerm z_38 (ATerm);
ATerm b_39 (ATerm);
ATerm c_39 (ATerm);
ATerm e_39 (ATerm);
ATerm f_39 (ATerm);
ATerm h_39 (ATerm);
ATerm i_39 (ATerm);
ATerm l_39 (ATerm);
ATerm o_39 (ATerm);
ATerm r_39 (ATerm);
ATerm s_39 (ATerm);
ATerm v_39 (ATerm);
ATerm w_39 (ATerm);
ATerm x_39 (ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm y_39 (ATerm);
ATerm z_39 (ATerm);
ATerm a_40 (ATerm);
ATerm b_40 (ATerm);
ATerm c_40 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm e_40 (ATerm);
ATerm f_40 (ATerm);
ATerm g_40 (ATerm);
ATerm j_40 (ATerm);
ATerm m_40 (ATerm);
ATerm n_40 (ATerm);
ATerm o_40 (ATerm);
ATerm p_40 (ATerm);
ATerm tpaste_1_0 (ATerm x_141 (ATerm), ATerm);
ATerm q_40 (ATerm);
ATerm r_40 (ATerm);
ATerm u_40 (ATerm);
ATerm v_40 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm i_139 (ATerm), ATerm j_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm z_40 (ATerm);
ATerm a_41 (ATerm);
ATerm b_41 (ATerm);
ATerm RnBinding_2_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm h_118 (ATerm), ATerm);
ATerm f_41 (ATerm);
ATerm g_41 (ATerm);
ATerm i_41 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm j_138 (ATerm), ATerm k_138 (ATerm (ATerm), ATerm), ATerm l_138 (ATerm), ATerm m_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_138 (ATerm (ATerm), ATerm), ATerm o_138 (ATerm), ATerm);
ATerm m_41 (ATerm);
ATerm o_41 (ATerm);
ATerm p_41 (ATerm);
ATerm q_41 (ATerm);
ATerm s_41 (ATerm);
ATerm t_41 (ATerm);
ATerm u_41 (ATerm);
ATerm v_41 (ATerm);
ATerm w_41 (ATerm);
ATerm x_41 (ATerm);
ATerm z_41 (ATerm);
ATerm ExpOverlay_1_0 (ATerm d_141 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm a_42 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm b_42 (ATerm);
ATerm Overlay_to_Congdef_0_0 (ATerm);
ATerm ExpandOverlays_0_0 (ATerm);
ATerm j_42 (ATerm);
ATerm k_42 (ATerm);
ATerm l_42 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm m_42 (ATerm);
ATerm n_42 (ATerm);
ATerm o_42 (ATerm);
ATerm p_42 (ATerm);
ATerm s_42 (ATerm);
ATerm u_42 (ATerm);
ATerm w_42 (ATerm);
ATerm x_42 (ATerm);
ATerm y_42 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm);
ATerm z_42 (ATerm);
ATerm w_67 (ATerm g_67, ATerm h_67, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm c_43 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm App_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm a_103 (ATerm), ATerm);
ATerm Build_1_0 (ATerm b_103 (ATerm), ATerm);
ATerm d_43 (ATerm);
ATerm e_43 (ATerm);
ATerm f_43 (ATerm);
ATerm g_43 (ATerm);
ATerm i_43 (ATerm);
ATerm j_43 (ATerm);
ATerm k_43 (ATerm);
ATerm l_43 (ATerm);
ATerm m_43 (ATerm);
ATerm n_43 (ATerm);
ATerm o_43 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm r_43 (ATerm);
ATerm t_43 (ATerm);
ATerm x_43 (ATerm);
ATerm y_43 (ATerm);
ATerm z_43 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm a_44 (ATerm);
ATerm e_44 (ATerm);
ATerm f_44 (ATerm);
ATerm h_44 (ATerm);
ATerm i_44 (ATerm);
ATerm k_44 (ATerm);
ATerm m_44 (ATerm);
ATerm o_44 (ATerm);
ATerm p_44 (ATerm);
ATerm q_44 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm r_44 (ATerm);
ATerm s_44 (ATerm);
ATerm u_44 (ATerm);
ATerm v_44 (ATerm);
ATerm w_44 (ATerm);
ATerm x_44 (ATerm);
ATerm y_44 (ATerm);
ATerm a_45 (ATerm);
ATerm b_45 (ATerm);
ATerm c_45 (ATerm);
ATerm d_45 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm e_45 (ATerm);
ATerm h_45 (ATerm);
ATerm j_45 (ATerm);
ATerm l_45 (ATerm);
ATerm m_45 (ATerm);
ATerm n_45 (ATerm);
ATerm o_45 (ATerm);
ATerm p_45 (ATerm);
ATerm r_45 (ATerm);
ATerm s_45 (ATerm);
ATerm t_45 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm u_45 (ATerm);
ATerm v_45 (ATerm);
ATerm w_45 (ATerm);
ATerm x_45 (ATerm);
ATerm y_45 (ATerm);
ATerm z_45 (ATerm);
ATerm b_46 (ATerm);
ATerm c_46 (ATerm);
ATerm e_46 (ATerm);
ATerm f_46 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm g_46 (ATerm);
ATerm h_46 (ATerm);
ATerm l_46 (ATerm);
ATerm n_46 (ATerm);
ATerm q_46 (ATerm);
ATerm s_46 (ATerm);
ATerm v_46 (ATerm);
ATerm y_46 (ATerm);
ATerm z_46 (ATerm);
ATerm a_47 (ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm b_47 (ATerm);
ATerm d_47 (ATerm);
ATerm e_47 (ATerm);
ATerm split_under_scope_1_0 (ATerm y_140 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm v_114 (ATerm), ATerm);
ATerm split_dynamic_rule_1_0 (ATerm w_140 (ATerm), ATerm);
ATerm g_47 (ATerm);
ATerm i_47 (ATerm);
ATerm j_47 (ATerm);
ATerm k_47 (ATerm);
ATerm l_47 (ATerm);
ATerm m_47 (ATerm);
ATerm n_47 (ATerm);
ATerm lift_dynamic_rule_0_0 (ATerm);
ATerm listtd_1_0 (ATerm r_120 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm a_102 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm);
ATerm p_47 (ATerm);
ATerm q_47 (ATerm);
ATerm r_47 (ATerm);
ATerm s_47 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm t_47 (ATerm);
ATerm u_47 (ATerm);
ATerm v_47 (ATerm);
ATerm w_47 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm m_123 (ATerm), ATerm);
ATerm diff_1_0 (ATerm h_123 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm);
ATerm z_47 (ATerm);
ATerm a_48 (ATerm);
ATerm b_48 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm);
ATerm c_48 (ATerm);
ATerm e_48 (ATerm);
ATerm f_48 (ATerm);
ATerm g_48 (ATerm);
ATerm h_48 (ATerm);
ATerm i_48 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm l_48 (ATerm);
ATerm m_48 (ATerm);
ATerm n_48 (ATerm);
ATerm o_48 (ATerm);
ATerm q_48 (ATerm);
ATerm r_48 (ATerm);
ATerm w_48 (ATerm);
ATerm free_vars_3_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm x_48 (ATerm);
ATerm z_48 (ATerm);
ATerm a_49 (ATerm);
ATerm g_49 (ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm s_113 (ATerm), ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm j_115 (ATerm), ATerm);
ATerm assert_1_0 (ATerm g_130 (ATerm), ATerm);
ATerm m_49 (ATerm);
ATerm n_49 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm d_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm);
ATerm r_49 (ATerm);
ATerm u_49 (ATerm);
ATerm b_50 (ATerm);
ATerm h_50 (ATerm);
ATerm i_50 (ATerm);
ATerm r_50 (ATerm);
ATerm s_50 (ATerm);
ATerm t_50 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm o_126 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm y_119 (ATerm), ATerm);
ATerm q_117 (ATerm h_117, ATerm);
ATerm conc_0_0 (ATerm);
ATerm InsertBSpec_0_0 (ATerm);
ATerm foldr_3_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm);
ATerm y_50 (ATerm);
ATerm z_50 (ATerm);
ATerm a_51 (ATerm);
ATerm b_51 (ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm c_51 (ATerm);
ATerm e_51 (ATerm);
ATerm f_51 (ATerm);
ATerm g_51 (ATerm);
ATerm h_51 (ATerm);
ATerm i_51 (ATerm);
ATerm j_51 (ATerm);
ATerm k_51 (ATerm);
ATerm l_51 (ATerm);
ATerm m_51 (ATerm);
ATerm n_51 (ATerm);
ATerm o_51 (ATerm);
ATerm p_51 (ATerm);
ATerm q_51 (ATerm);
ATerm r_51 (ATerm);
ATerm s_51 (ATerm);
ATerm w_51 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm Op_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm Var_1_0 (ATerm j_99 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm x_51 (ATerm);
ATerm y_51 (ATerm);
ATerm e_52 (ATerm);
ATerm j_52 (ATerm);
ATerm k_52 (ATerm);
ATerm l_52 (ATerm);
ATerm m_52 (ATerm);
ATerm n_52 (ATerm);
ATerm u_52 (ATerm);
ATerm v_52 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm w_52 (ATerm);
ATerm at_last_1_0 (ATerm j_120 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm x_52 (ATerm);
ATerm unquote_chars_1_0 (ATerm m_128 (ATerm), ATerm);
ATerm r_130 (ATerm g_126, ATerm h_126, ATerm);
ATerm s_130 (ATerm j_126, ATerm k_126, ATerm);
ATerm t_130 (ATerm m_126, ATerm n_126, ATerm p_126, ATerm);
ATerm u_130 (ATerm t_126, ATerm u_126, ATerm);
ATerm y_52 (ATerm);
ATerm f_53 (ATerm);
ATerm g_53 (ATerm);
ATerm i_53 (ATerm);
ATerm j_53 (ATerm);
ATerm o_53 (ATerm);
ATerm q_53 (ATerm);
ATerm u_53 (ATerm);
ATerm v_53 (ATerm);
ATerm c_54 (ATerm);
ATerm e_54 (ATerm);
ATerm k_54 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm m_54 (ATerm);
ATerm o_54 (ATerm);
ATerm r_54 (ATerm);
ATerm s_54 (ATerm);
ATerm t_54 (ATerm);
ATerm y_54 (ATerm);
ATerm z_54 (ATerm);
ATerm a_55 (ATerm);
ATerm d_55 (ATerm);
ATerm f_55 (ATerm);
ATerm h_55 (ATerm);
ATerm i_55 (ATerm);
ATerm k_55 (ATerm);
ATerm l_55 (ATerm);
ATerm m_55 (ATerm);
ATerm n_55 (ATerm);
ATerm o_55 (ATerm);
ATerm p_55 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm z_131 (ATerm), ATerm);
ATerm v_55 (ATerm);
ATerm w_55 (ATerm);
ATerm x_55 (ATerm);
ATerm z_55 (ATerm);
ATerm a_56 (ATerm);
ATerm b_56 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_135 (ATerm), ATerm);
ATerm c_133 (ATerm w_132, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_56 (ATerm);
ATerm d_56 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_119 (ATerm), ATerm);
ATerm f_56 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_133 (ATerm), ATerm);
ATerm g_56 (ATerm);
ATerm h_56 (ATerm);
ATerm i_56 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_56 (ATerm);
ATerm k_56 (ATerm);
ATerm l_56 (ATerm);
ATerm n_56 (ATerm);
ATerm o_56 (ATerm);
ATerm t_56 (ATerm);
ATerm d_57 (ATerm);
ATerm e_57 (ATerm);
ATerm j_57 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_57 (ATerm);
ATerm m_57 (ATerm);
ATerm n_57 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm o_57 (ATerm);
ATerm p_57 (ATerm);
ATerm q_57 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_57 (ATerm);
ATerm s_57 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_133 (ATerm), ATerm);
ATerm t_57 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_57 (ATerm);
ATerm need_help_1_0 (ATerm z_135 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_110 (ATerm), ATerm);
ATerm y_57 (ATerm);
ATerm z_57 (ATerm);
ATerm d_58 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_111 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_58 (ATerm);
ATerm g_58 (ATerm);
ATerm h_58 (ATerm);
ATerm i_58 (ATerm);
ATerm j_58 (ATerm);
ATerm k_58 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm);
ATerm l_58 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_138 (ATerm), ATerm);
ATerm o_58 (ATerm);
ATerm p_58 (ATerm);
ATerm q_58 (ATerm);
ATerm r_58 (ATerm);
ATerm parse_options_1_0 (ATerm b_138 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm);
ATerm v_58 (ATerm);
ATerm x_58 (ATerm);
ATerm y_58 (ATerm);
ATerm z_58 (ATerm);
ATerm a_59 (ATerm);
ATerm iowrap_3_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm);
ATerm d_59 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL,p_0 = NULL,w_0 = NULL,y_0 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL;
  h_0 = t;
  t = term_m_38;
  t = whoami_0_0(t);
  j_0 = t;
  y_0 = t;
  t = term_b_59;
  p_0 = t;
  t = y_0;
  f_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_59), j_0), term_e_59);
  w_0 = t;
  t = SSL_printnl(p_0, w_0);
  i_1 = t;
  t = term_g_59;
  h_1 = t;
  t = SSL_exit(h_1);
  t = h_0;
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,v_0 = NULL;
  t_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      v_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
      {
        ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL,e_1 = NULL;
        t = t_0;
        t = new_0_0(t);
        z_0 = t;
        t = new_0_0(t);
        b_1 = t;
        t = new_0_0(t);
        c_1 = t;
        t = new_0_0(t);
        e_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_1), c_1), b_1), z_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, c_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, v_0, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, b_1)), (ATerm) ATmakeAppl(sym_BAM_3, s_0, (ATerm)ATmakeAppl(sym_Var_1, c_1), (ATerm) ATmakeAppl(sym_Var_1, e_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_59, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_1)), (ATerm) ATmakeAppl(sym_Var_1, b_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_0 = ATgetArgument(t, 0);
          {
            ATerm r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL;
            t = t_0;
            t = new_0_0(t);
            r_1 = t;
            t = v_0;
            {
              ATerm r_29 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, r_1);
                return(t);
              }
              t = oncetd_1_0(r_29, t);
              v_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_59, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(s_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_Build_1, v_1))));
            }
          }
        }
      else
        {
          ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL,e_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              v_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_0;
          t = new_0_0(t);
          y_1 = t;
          t = new_0_0(t);
          a_2 = t;
          t = v_0;
          {
            ATerm t_29 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((b_2 != NULL) && (b_2 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_2 = ATgetArgument(t, 0);
                  if(((d_2 != NULL) && (d_2 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_1);
              return(t);
            }
            t = oncetd_1_0(t_29, t);
            e_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_2)), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_59, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_2))))), (ATerm)ATmakeAppl(sym_Var_1, y_1), (ATerm) ATmakeAppl(sym_Op_2, term_o_59, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_2)), not_null(b_2)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
        t = g_2;
        t = new_0_0(t);
        j_2 = t;
        t = h_2;
        {
          ATerm u_29 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_2 != NULL) && (l_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_2 = ATgetArgument(t, 0);
                if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_2), not_null(l_2));
            return(t);
          }
          t = pat_td_1_0(u_29, t);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_60, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_2))))));
        }
        ;
        LocalPopChoice(a_60);
      }
    else
      {
        t = p_59;
        {
          ATerm c_60 = t;
          int d_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
              t = g_2;
              t = new_0_0(t);
              q_2 = t;
              t = h_2;
              {
                ATerm v_29 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_2 != NULL) && (r_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_2);
                  return(t);
                }
                t = pat_td_1_0(v_29, t);
                s_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_2)), not_null(r_2))));
              }
              ;
              LocalPopChoice(d_60);
            }
          else
            {
              t = c_60;
              {
                ATerm u_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL;
                t = g_2;
                t = new_0_0(t);
                u_2 = t;
                t = h_2;
                {
                  ATerm x_29 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_2 = ATgetArgument(t, 0);
                        if(((x_2 != NULL) && (x_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_2);
                    return(t);
                  }
                  t = pat_td_1_0(x_29, t);
                  y_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_2)), not_null(v_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,k_1 = NULL,l_1 = NULL;
  i_3 = t;
  if(match_cons(t, sym_As_2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  c_3 = t;
  t = d_3;
  t = a_100(t);
  f_3 = t;
  t = e_3;
  t = b_100(t);
  g_3 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, f_3, g_3);
  k_1 = t;
  t = SSLsetAnnotations(k_1, c_3);
  return(t);
}
ATerm CallT_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL,w_3 = NULL,n_1 = NULL,o_1 = NULL;
  w_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      q_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_3);
  n_3 = t;
  t = o_3;
  t = x_102(t);
  r_3 = t;
  t = p_3;
  t = y_102(t);
  s_3 = t;
  t = q_3;
  t = z_102(t);
  u_3 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, r_3, s_3, u_3);
  n_1 = t;
  t = SSLsetAnnotations(n_1, n_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,x_1 = NULL,i_2 = NULL;
  g_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      c_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_4);
  z_3 = t;
  t = a_4;
  t = z_103(t);
  d_4 = t;
  t = b_4;
  t = a_104(t);
  e_4 = t;
  t = c_4;
  t = b_104(t);
  f_4 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_4, e_4, f_4);
  x_1 = t;
  t = SSLsetAnnotations(x_1, z_3);
  return(t);
}
ATerm Explode_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,p_2 = NULL,t_2 = NULL;
  q_4 = t;
  if(match_cons(t, sym_Explode_2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  j_4 = t;
  t = l_4;
  t = t_99(t);
  o_4 = t;
  t = m_4;
  t = u_99(t);
  p_4 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, o_4, p_4);
  p_2 = t;
  t = SSLsetAnnotations(p_2, j_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm p_142 (ATerm), ATerm t)
{
  ATerm e_60 = t;
  int f_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_142(t);
      ;
      LocalPopChoice(f_60);
    }
  else
    {
      t = e_60;
      {
        ATerm g_60 = t;
        int h_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_29 (ATerm t)
            {
              ATerm a_30 (ATerm t)
              {
                t = pat_td_1_0(p_142, t);
                return(t);
              }
              t = fetch_1_0(a_30, t);
              return(t);
            }
            t = Op_2_0(_id, z_29, t);
            ;
            LocalPopChoice(h_60);
          }
        else
          {
            t = g_60;
            {
              ATerm w_60 = t;
              int y_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_30 (ATerm t)
                  {
                    t = pat_td_1_0(p_142, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, b_30, t);
                  ;
                  LocalPopChoice(y_60);
                }
              else
                {
                  t = w_60;
                  {
                    ATerm z_60 = t;
                    int a_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_30 (ATerm t)
                        {
                          t = pat_td_1_0(p_142, t);
                          return(t);
                        }
                        t = Explode_2_0(c_30, _id, t);
                        ;
                        LocalPopChoice(a_61);
                      }
                    else
                      {
                        t = z_60;
                        {
                          ATerm c_61 = t;
                          int d_61 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_30 (ATerm t)
                              {
                                ATerm e_30 (ATerm t)
                                {
                                  t = pat_td_1_0(p_142, t);
                                  return(t);
                                }
                                t = fetch_1_0(e_30, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, d_30, t);
                              ;
                              LocalPopChoice(d_61);
                            }
                          else
                            {
                              t = c_61;
                              {
                                ATerm e_61 = t;
                                int g_61 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_30 (ATerm t)
                                    {
                                      ATerm h_30 (ATerm t)
                                      {
                                        t = pat_td_1_0(p_142, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(h_30, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, g_30, t);
                                    ;
                                    LocalPopChoice(g_61);
                                  }
                                else
                                  {
                                    t = e_61;
                                    {
                                      ATerm j_30 (ATerm t)
                                      {
                                        t = pat_td_1_0(p_142, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, j_30, t);
                                    }
                                  }
                              }
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
ATerm Bapp_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  u_4 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,c_5 = NULL;
        t = u_4;
        t = new_0_0(t);
        x_4 = t;
        t = v_4;
        {
          ATerm k_30 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_4 != NULL) && (y_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_4 = ATgetArgument(t, 0);
                if(((z_4 != NULL) && (z_4 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_4);
            return(t);
          }
          t = pat_td_1_0(k_30, t);
          c_5 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_61, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_4)), not_null(y_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_4)))), (ATerm) ATmakeAppl(sym_Build_1, c_5)));
        }
        ;
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        {
          ATerm l_61 = t;
          int m_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
              t = u_4;
              t = new_0_0(t);
              h_5 = t;
              t = v_4;
              {
                ATerm l_30 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_5 != NULL) && (i_5 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_5);
                  return(t);
                }
                t = pat_td_1_0(l_30, t);
                j_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_5)))), (ATerm) ATmakeAppl(sym_Build_1, j_5)));
              }
              ;
              LocalPopChoice(m_61);
            }
          else
            {
              t = l_61;
              {
                ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
                t = u_4;
                t = new_0_0(t);
                l_5 = t;
                t = v_4;
                {
                  ATerm m_30 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_5 != NULL) && (m_5 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_5 = ATgetArgument(t, 0);
                        if(((n_5 != NULL) && (n_5 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_5);
                    return(t);
                  }
                  t = pat_td_1_0(m_30, t);
                  o_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_5), not_null(n_5), (ATerm) ATmakeAppl(sym_Var_1, l_5))), (ATerm) ATmakeAppl(sym_Build_1, o_5)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_30 (ATerm t)
{
  ATerm n_61 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_61;
    }
  return(t);
}
ATerm o_30 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm p_30 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_6 = ATgetFirst((ATermList) t);
      b_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_6, b_6);
  return(t);
}
ATerm s_30 (ATerm t)
{
  ATerm c_6 = NULL,e_6 = NULL,h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_61 = ATgetArgument(t, 0);
      if(match_cons(q_61, sym__2))
        {
          c_6 = ATgetArgument(q_61, 0);
          h_6 = ATgetArgument(q_61, 1);
        }
      else
        _fail(t);
      {
        ATerm r_61 = ATgetArgument(t, 1);
        if(match_cons(r_61, sym__2))
          {
            e_6 = ATgetArgument(r_61, 0);
            i_6 = ATgetArgument(r_61, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_6), c_6), (ATerm) ATinsert(CheckATermList(i_6), h_6));
  return(t);
}
ATerm t_30 (ATerm t)
{
  t = genzip_4_0(u_30, v_30, w_30, _id, t);
  return(t);
}
ATerm u_30 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm v_30 (ATerm t)
{
  ATerm k_6 = NULL,m_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_6 = ATgetFirst((ATermList) t);
      m_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_6, m_6);
  return(t);
}
ATerm w_30 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_61 = ATgetArgument(t, 0);
      if(match_cons(s_61, sym__2))
        {
          n_6 = ATgetArgument(s_61, 0);
          r_6 = ATgetArgument(s_61, 1);
        }
      else
        _fail(t);
      {
        ATerm t_61 = ATgetArgument(t, 1);
        if(match_cons(t_61, sym__2))
          {
            o_6 = ATgetArgument(t_61, 0);
            s_6 = ATgetArgument(t_61, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_6), n_6), (ATerm) ATinsert(CheckATermList(s_6), r_6));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
      t_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_5;
  t = fetch_1_0(n_30, t);
  t = t_5;
  t = genzip_4_0(o_30, p_30, s_30, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, t_30, t);
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      {
        ATerm u_61 = ATgetArgument(t, 1);
        if(match_cons(u_61, sym__2))
          {
            v_5 = ATgetArgument(u_61, 0);
            w_5 = ATgetArgument(u_61, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_5), (ATerm) ATmakeAppl(sym_CallT_3, p_5, q_5, w_5)));
  return(t);
}
ATerm h_7 (ATerm y_6, ATerm t)
{
  ATerm d_7 = NULL;
  t = y_6;
  {
    ATerm v_61 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_61;
      }
    t = new_0_0(t);
    d_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_7), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_7)))), (ATerm) ATmakeAppl(sym_Var_1, d_7)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_7 = ATgetArgument(t, 0);
      {
        ATerm x_61 = t;
        int y_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_7(e_7, t);
            ;
            LocalPopChoice(y_61);
          }
        else
          {
            t = x_61;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_61, (ATerm) ATmakeAppl(sym_Var_1, f_7)));
          }
      }
    }
  else
    {
      t = h_7(e_7, t);
    }
  return(t);
}
ATerm y_30 (ATerm t)
{
  ATerm a_62 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_62;
    }
  return(t);
}
ATerm z_30 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm a_31 (ATerm t)
{
  ATerm o_2 = NULL,w_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_2 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_2, w_2);
  return(t);
}
ATerm b_31 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,l_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_62 = ATgetArgument(t, 0);
      if(match_cons(b_62, sym__2))
        {
          h_3 = ATgetArgument(b_62, 0);
          l_3 = ATgetArgument(b_62, 1);
        }
      else
        _fail(t);
      {
        ATerm c_62 = ATgetArgument(t, 1);
        if(match_cons(c_62, sym__2))
          {
            j_3 = ATgetArgument(c_62, 0);
            t_3 = ATgetArgument(c_62, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_3), h_3), (ATerm) ATinsert(CheckATermList(t_3), l_3));
  return(t);
}
ATerm e_31 (ATerm t)
{
  t = genzip_4_0(f_31, g_31, h_31, _id, t);
  return(t);
}
ATerm f_31 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm g_31 (ATerm t)
{
  ATerm v_3 = NULL,k_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_3 = ATgetFirst((ATermList) t);
      k_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_3, k_4);
  return(t);
}
ATerm h_31 (ATerm t)
{
  ATerm n_4 = NULL,t_4 = NULL,a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_62 = ATgetArgument(t, 0);
      if(match_cons(d_62, sym__2))
        {
          n_4 = ATgetArgument(d_62, 0);
          a_5 = ATgetArgument(d_62, 1);
        }
      else
        _fail(t);
      {
        ATerm f_62 = ATgetArgument(t, 1);
        if(match_cons(f_62, sym__2))
          {
            t_4 = ATgetArgument(f_62, 0);
            b_5 = ATgetArgument(f_62, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_4), n_4), (ATerm) ATinsert(CheckATermList(b_5), a_5));
  return(t);
}
ATerm j_31 (ATerm t)
{
  ATerm g_62 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_62;
    }
  return(t);
}
ATerm k_31 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm m_31 (ATerm t)
{
  ATerm l_6 = NULL,p_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_6 = ATgetFirst((ATermList) t);
      p_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_6, p_6);
  return(t);
}
ATerm n_31 (ATerm t)
{
  ATerm q_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_62 = ATgetArgument(t, 0);
      if(match_cons(h_62, sym__2))
        {
          q_6 = ATgetArgument(h_62, 0);
          u_6 = ATgetArgument(h_62, 1);
        }
      else
        _fail(t);
      {
        ATerm i_62 = ATgetArgument(t, 1);
        if(match_cons(i_62, sym__2))
          {
            t_6 = ATgetArgument(i_62, 0);
            v_6 = ATgetArgument(i_62, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_6), q_6), (ATerm) ATinsert(CheckATermList(v_6), u_6));
  return(t);
}
ATerm o_31 (ATerm t)
{
  t = genzip_4_0(r_31, s_31, t_31, _id, t);
  return(t);
}
ATerm r_31 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm s_31 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_6 = ATgetFirst((ATermList) t);
      x_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_6, x_6);
  return(t);
}
ATerm t_31 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_62 = ATgetArgument(t, 0);
      if(match_cons(j_62, sym__2))
        {
          a_7 = ATgetArgument(j_62, 0);
          c_7 = ATgetArgument(j_62, 1);
        }
      else
        _fail(t);
      {
        ATerm k_62 = ATgetArgument(t, 1);
        if(match_cons(k_62, sym__2))
          {
            b_7 = ATgetArgument(k_62, 0);
            i_7 = ATgetArgument(k_62, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_7), a_7), (ATerm) ATinsert(CheckATermList(i_7), c_7));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,l_9 = NULL;
  h_9 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
      {
        ATerm p_1 = NULL,f_2 = NULL,n_2 = NULL;
        t = g_9;
        t = fetch_1_0(y_30, t);
        t = g_9;
        t = genzip_4_0(z_30, a_31, b_31, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, e_31, t);
        if(match_cons(t, sym__2))
          {
            p_1 = ATgetArgument(t, 0);
            {
              ATerm m_62 = ATgetArgument(t, 1);
              if(match_cons(m_62, sym__2))
                {
                  f_2 = ATgetArgument(m_62, 0);
                  n_2 = ATgetArgument(m_62, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_2), (ATerm) ATmakeAppl(sym_PrimT_3, i_9, l_9, n_2)));
      }
    }
  else
    {
      ATerm f_6 = NULL,g_6 = NULL,j_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          i_9 = ATgetArgument(t, 0);
          l_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_9;
      t = fetch_1_0(j_31, t);
      t = l_9;
      t = genzip_4_0(k_31, m_31, n_31, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, o_31, t);
      if(match_cons(t, sym__2))
        {
          f_6 = ATgetArgument(t, 0);
          {
            ATerm n_62 = ATgetArgument(t, 1);
            if(match_cons(n_62, sym__2))
              {
                g_6 = ATgetArgument(n_62, 0);
                j_6 = ATgetArgument(n_62, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_6), (ATerm) ATmakeAppl(sym_PrimT_3, i_9, (ATerm)ATempty, j_6)));
    }
  return(t);
}
ATerm u_31 (ATerm t)
{
  ATerm o_62 = t;
  int p_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(p_62);
    }
  else
    {
      t = o_62;
    }
  t = repeat_1_0(v_31, t);
  return(t);
}
ATerm v_31 (ATerm t)
{
  ATerm q_62 = t;
  int r_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(r_62);
    }
  else
    {
      t = q_62;
      {
        ATerm t_62 = t;
        int v_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(v_62);
          }
        else
          {
            t = t_62;
            {
              ATerm w_62 = t;
              int x_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(x_62);
                }
              else
                {
                  t = w_62;
                  {
                    ATerm y_62 = t;
                    int z_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(z_62);
                      }
                    else
                      {
                        t = y_62;
                        {
                          ATerm a_63 = t;
                          int b_63 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_63 = t;
                              int d_63 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_8 = NULL,j_9 = NULL,k_9 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_8;
                                  {
                                    ATerm w_31 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm e_63 = ATgetArgument(t, 0);
                                          if(match_cons(e_63, sym_Match_1))
                                            {
                                              if(((j_9 != NULL) && (j_9 != ATgetArgument(e_63, 0))))
                                                _fail(ATgetArgument(e_63, 0));
                                              else
                                                j_9 = ATgetArgument(e_63, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(j_9);
                                      return(t);
                                    }
                                    t = pat_td_1_0(w_31, t);
                                    k_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, k_9);
                                  }
                                  ;
                                  LocalPopChoice(d_63);
                                }
                              else
                                {
                                  t = c_63;
                                  {
                                    ATerm g_63 = t;
                                    int s_63 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm z_9 = NULL,f_10 = NULL,g_10 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            z_9 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = z_9;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            t = f_10;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, f_10, g_10);
                                          }
                                        ;
                                        LocalPopChoice(s_63);
                                      }
                                    else
                                      {
                                        t = g_63;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(b_63);
                            }
                          else
                            {
                              t = a_63;
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
  t = topdown_1_0(u_31, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,z_2 = NULL,a_3 = NULL;
  g_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
      x_10 = ATgetArgument(t, 2);
      z_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  t_10 = t;
  t = v_10;
  t = l_105(t);
  a_11 = t;
  t = w_10;
  t = m_105(t);
  c_11 = t;
  t = x_10;
  t = n_105(t);
  d_11 = t;
  t = z_10;
  t = o_105(t);
  f_11 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_11, c_11, d_11, f_11);
  z_2 = t;
  t = SSLsetAnnotations(z_2, t_10);
  return(t);
}
ATerm SDef_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL,q_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,b_3 = NULL,k_3 = NULL;
  u_11 = t;
  if(match_cons(t, sym_SDef_3))
    {
      k_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
      n_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_11);
  j_11 = t;
  t = k_11;
  t = i_105(t);
  q_11 = t;
  t = l_11;
  t = j_105(t);
  s_11 = t;
  t = n_11;
  t = k_105(t);
  t_11 = t;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, q_11, s_11, t_11);
  b_3 = t;
  t = SSLsetAnnotations(b_3, j_11);
  return(t);
}
ATerm Strategies_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,m_3 = NULL,x_3 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  a_12 = t;
  t = b_12;
  t = l_98(t);
  c_12 = t;
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_12);
  m_3 = t;
  t = SSLsetAnnotations(m_3, a_12);
  return(t);
}
ATerm Specification_1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,k_12 = NULL,l_12 = NULL,w_12 = NULL,y_3 = NULL,h_4 = NULL;
  w_12 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_12);
  h_12 = t;
  t = k_12;
  t = q_98(t);
  l_12 = t;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_12);
  y_3 = t;
  t = SSLsetAnnotations(y_3, h_12);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm l_133 (ATerm), ATerm t)
{
  ATerm t_63 = t;
  int v_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_14 = NULL,t_15 = NULL,i_4 = NULL,r_4 = NULL,s_4 = NULL,w_4 = NULL;
      n_14 = t;
      t = term_w_63;
      s_4 = t;
      t = term_b_64;
      i_4 = t;
      t = s_4;
      w_4 = t;
      t = term_w_63;
      r_4 = t;
      t = SSL_table_get(i_4, r_4);
      {
        ATerm c_64 = t;
        int d_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
            t = eval_config_0_0(t);
            r_9 = t;
            f_5 = t;
            t = term_b_64;
            d_5 = t;
            t = f_5;
            g_5 = t;
            t = term_w_63;
            e_5 = t;
            t = SSL_table_put(d_5, e_5, r_9);
            t = r_9;
            ;
            LocalPopChoice(d_64);
          }
        else
          {
            t = c_64;
          }
        t_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_15, term_e_64);
        t = geq_0_0(t);
        t = n_14;
        t = l_133(t);
      }
      ;
      LocalPopChoice(v_63);
    }
  else
    {
      t = t_63;
    }
  return(t);
}
ATerm b_32 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_64 = ATgetArgument(t, 0);
      if(((ATgetType(f_64) != AT_LIST) || !(ATisEmpty(f_64))))
        _fail(t);
      {
        ATerm g_64 = ATgetArgument(t, 1);
        if(((ATgetType(g_64) != AT_LIST) || !(ATisEmpty(g_64))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_32 (ATerm t)
{
  ATerm a_19 = NULL,q_19 = NULL,s_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_64 = ATgetArgument(t, 0);
      if(((ATgetType(l_64) == AT_LIST) && !(ATisEmpty(l_64))))
        {
          a_19 = ATgetFirst((ATermList) l_64);
          s_19 = (ATerm) ATgetNext((ATermList) l_64);
        }
      else
        _fail(t);
      {
        ATerm m_64 = ATgetArgument(t, 1);
        if(((ATgetType(m_64) == AT_LIST) && !(ATisEmpty(m_64))))
          {
            q_19 = ATgetFirst((ATermList) m_64);
            x_19 = (ATerm) ATgetNext((ATermList) m_64);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_19, q_19), (ATerm) ATmakeAppl(sym__2, s_19, x_19));
  return(t);
}
ATerm d_32 (ATerm t)
{
  ATerm e_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_20), e_20);
  return(t);
}
ATerm e_32 (ATerm t)
{
  ATerm b_21 = NULL,p_21 = NULL,y_21 = NULL,f_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_21;
  {
    ATerm n_64 = t;
    int u_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm v_64 = ATgetArgument(t, 0);
            p_21 = ATgetArgument(t, 1);
            y_21 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(u_64);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_22, p_21, y_21);
      }
    else
      {
        t = n_64;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm w_64 = ATgetArgument(t, 0);
            p_21 = ATgetArgument(t, 1);
            y_21 = ATgetArgument(t, 2);
            f_22 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_22, p_21, y_21, f_22);
      }
  }
  return(t);
}
ATerm g_32 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_64 = ATgetArgument(t, 0);
      if(((ATgetType(x_64) != AT_LIST) || !(ATisEmpty(x_64))))
        _fail(t);
      {
        ATerm y_64 = ATgetArgument(t, 1);
        if(((ATgetType(y_64) != AT_LIST) || !(ATisEmpty(y_64))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_32 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,j_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_64 = ATgetArgument(t, 0);
      if(((ATgetType(z_64) == AT_LIST) && !(ATisEmpty(z_64))))
        {
          x_23 = ATgetFirst((ATermList) z_64);
          j_24 = (ATerm) ATgetNext((ATermList) z_64);
        }
      else
        _fail(t);
      {
        ATerm a_65 = ATgetArgument(t, 1);
        if(((ATgetType(a_65) == AT_LIST) && !(ATisEmpty(a_65))))
          {
            y_23 = ATgetFirst((ATermList) a_65);
            k_24 = (ATerm) ATgetNext((ATermList) a_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_23, y_23), (ATerm) ATmakeAppl(sym__2, j_24, k_24));
  return(t);
}
ATerm j_32 (ATerm t)
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
ATerm k_32 (ATerm t)
{
  ATerm p_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_24;
  {
    ATerm b_65 = t;
    int c_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_65);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_25);
      }
    else
      {
        t = b_65;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_65 = ATgetArgument(t, 0);
            a_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_25, a_25);
      }
  }
  return(t);
}
ATerm m_32 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_65 = ATgetArgument(t, 0);
      if(((ATgetType(f_65) != AT_LIST) || !(ATisEmpty(f_65))))
        _fail(t);
      {
        ATerm g_65 = ATgetArgument(t, 1);
        if(((ATgetType(g_65) != AT_LIST) || !(ATisEmpty(g_65))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_32 (ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_65 = ATgetArgument(t, 0);
      if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
        {
          r_25 = ATgetFirst((ATermList) i_65);
          u_25 = (ATerm) ATgetNext((ATermList) i_65);
        }
      else
        _fail(t);
      {
        ATerm j_65 = ATgetArgument(t, 1);
        if(((ATgetType(j_65) == AT_LIST) && !(ATisEmpty(j_65))))
          {
            t_25 = ATgetFirst((ATermList) j_65);
            v_25 = (ATerm) ATgetNext((ATermList) j_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_25, t_25), (ATerm) ATmakeAppl(sym__2, u_25, v_25));
  return(t);
}
ATerm p_32 (ATerm t)
{
  ATerm w_25 = NULL,g_26 = NULL;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_26), w_25);
  return(t);
}
ATerm r_32 (ATerm t)
{
  ATerm j_26 = NULL,l_26 = NULL,m_26 = NULL;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_26;
  {
    ATerm l_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_65);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_26);
      }
    else
      {
        t = l_65;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_65 = ATgetArgument(t, 0);
            l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_26, l_26);
      }
  }
  return(t);
}
ATerm a_33 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_65 = ATgetArgument(t, 0);
      if(((ATgetType(p_65) != AT_LIST) || !(ATisEmpty(p_65))))
        _fail(t);
      {
        ATerm q_65 = ATgetArgument(t, 1);
        if(((ATgetType(q_65) != AT_LIST) || !(ATisEmpty(q_65))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_33 (ATerm t)
{
  ATerm n_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_65 = ATgetArgument(t, 0);
      if(((ATgetType(r_65) == AT_LIST) && !(ATisEmpty(r_65))))
        {
          n_27 = ATgetFirst((ATermList) r_65);
          u_27 = (ATerm) ATgetNext((ATermList) r_65);
        }
      else
        _fail(t);
      {
        ATerm s_65 = ATgetArgument(t, 1);
        if(((ATgetType(s_65) == AT_LIST) && !(ATisEmpty(s_65))))
          {
            s_27 = ATgetFirst((ATermList) s_65);
            v_27 = (ATerm) ATgetNext((ATermList) s_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_27, s_27), (ATerm) ATmakeAppl(sym__2, u_27, v_27));
  return(t);
}
ATerm e_33 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_27), x_27);
  return(t);
}
ATerm h_33 (ATerm t)
{
  ATerm h_28 = NULL,l_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      h_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28;
  {
    ATerm t_65 = t;
    int u_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_65);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_28);
      }
    else
      {
        t = t_65;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_65 = ATgetArgument(t, 0);
            l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_28, l_28);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  ATerm y_65 = t;
  int a_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_32 (ATerm t)
      {
        ATerm s_9 = NULL,v_9 = NULL;
        s_9 = t;
        t = b_142(t);
        v_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, v_9);
        t = genzip_4_0(b_32, c_32, d_32, e_32, t);
        return(t);
      }
      t = Let_2_0(a_32, _id, t);
      ;
      LocalPopChoice(a_66);
    }
  else
    {
      t = y_65;
      {
        ATerm b_66 = t;
        int c_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_32 (ATerm t)
            {
              ATerm y_9 = NULL,b_10 = NULL;
              y_9 = t;
              t = b_142(t);
              b_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_9, b_10);
              t = genzip_4_0(g_32, h_32, j_32, k_32, t);
              return(t);
            }
            t = SDef_3_0(_id, f_32, _id, t);
            ;
            LocalPopChoice(c_66);
          }
        else
          {
            t = b_66;
            {
              ATerm d_66 = t;
              int e_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_32 (ATerm t)
                  {
                    ATerm e_10 = NULL,i_10 = NULL;
                    e_10 = t;
                    t = b_142(t);
                    i_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_10, i_10);
                    t = genzip_4_0(m_32, n_32, p_32, r_32, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, l_32, _id, _id, t);
                  ;
                  LocalPopChoice(e_66);
                }
              else
                {
                  t = d_66;
                  {
                    ATerm f_66 = t;
                    int l_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_32 (ATerm t)
                        {
                          ATerm m_10 = NULL,o_10 = NULL;
                          m_10 = t;
                          t = b_142(t);
                          o_10 = t;
                          t = (ATerm) ATmakeAppl(sym__2, m_10, o_10);
                          t = genzip_4_0(a_33, d_33, e_33, h_33, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, x_32, _id, _id, t);
                        ;
                        LocalPopChoice(l_66);
                      }
                    else
                      {
                        t = f_66;
                        {
                          ATerm m_33 (ATerm t)
                          {
                            ATerm b_29 = NULL;
                            t = b_142(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                b_29 = ATgetFirst((ATermList) t);
                                {
                                  ATerm m_66 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = b_29;
                            return(t);
                          }
                          t = Rec_2_0(m_33, _id, t);
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
ATerm Rec_2_0 (ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,k_5 = NULL,r_5 = NULL;
  h_29 = t;
  if(match_cons(t, sym_Rec_2))
    {
      d_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_29);
  c_29 = t;
  t = d_29;
  t = q_103(t);
  f_29 = t;
  t = e_29;
  t = r_103(t);
  g_29 = t;
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, f_29, g_29);
  k_5 = t;
  t = SSLsetAnnotations(k_5, c_29);
  return(t);
}
ATerm Let_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,s_29 = NULL,s_5 = NULL,x_5 = NULL;
  s_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_29);
  l_29 = t;
  t = m_29;
  t = t_102(t);
  o_29 = t;
  t = n_29;
  t = u_102(t);
  p_29 = t;
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, o_29, p_29);
  s_5 = t;
  t = SSLsetAnnotations(s_5, l_29);
  return(t);
}
ATerm sboundin_3_0 (ATerm c_142 (ATerm), ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm t)
{
  ATerm n_66 = t;
  int o_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(c_142, c_142, t);
      ;
      LocalPopChoice(o_66);
    }
  else
    {
      t = n_66;
      {
        ATerm r_66 = t;
        int s_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(e_142, e_142, c_142, t);
            ;
            LocalPopChoice(s_66);
          }
        else
          {
            t = r_66;
            {
              ATerm u_66 = t;
              int v_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(e_142, e_142, e_142, c_142, t);
                  ;
                  LocalPopChoice(v_66);
                }
              else
                {
                  t = u_66;
                  t = Rec_2_0(e_142, c_142, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_33 (ATerm t)
{
  ATerm y_29 = NULL;
  ATerm w_66 = t;
  int x_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_29 = ATgetArgument(t, 0);
          {
            ATerm y_66 = ATgetArgument(t, 1);
          }
          {
            ATerm z_66 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_66);
      t = y_29;
    }
  else
    {
      t = w_66;
      if(match_cons(t, sym_SDefT_4))
        {
          y_29 = ATgetArgument(t, 0);
          {
            ATerm a_67 = ATgetArgument(t, 1);
          }
          {
            ATerm b_67 = ATgetArgument(t, 2);
          }
          {
            ATerm c_67 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_29;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm w_29 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      w_29 = ATgetArgument(t, 0);
      {
        ATerm d_67 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_29;
  t = map_1_0(o_33, t);
  return(t);
}
ATerm rename_4_0 (ATerm x_138 (ATerm (ATerm), ATerm), ATerm y_138 (ATerm), ATerm z_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, (ATerm) ATempty);
  {
    ATerm i_30 (ATerm t)
    {
      ATerm r_33 (ATerm t)
      {
        ATerm e_67 = t;
        int i_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL,y_10 = NULL;
            ATerm t_33 (ATerm t)
            {
              ATerm e_11 = NULL;
              e_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_11, not_null(y_10));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((u_10 != NULL) && (u_10 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_10 = ATgetArgument(t, 0);
                if(((y_10 != NULL) && (y_10 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(u_10);
            t = x_138(t_33, t);
            ;
            LocalPopChoice(i_67);
          }
        else
          {
            t = e_67;
            t = RnBinding_2_0(y_138, a_139, t);
            t = DistBinding_2_0(i_30, z_138, t);
          }
        return(t);
      }
      t = env_alltd_1_0(r_33, t);
      return(t);
    }
    t = i_30(t);
  }
  return(t);
}
ATerm u_33 (ATerm t)
{
  ATerm j_67 = t;
  int k_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_67);
    }
  else
    {
      t = j_67;
      {
        ATerm x_30 = NULL;
        ATerm l_67 = t;
        int m_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm n_67 = ATgetArgument(t, 0);
                ATerm o_67 = ATgetArgument(t, 1);
                x_30 = ATgetArgument(t, 2);
                {
                  ATerm p_67 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_67);
            t = x_30;
            t = map_1_0(v_33, t);
          }
        else
          {
            t = l_67;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm u_67 = ATgetArgument(t, 0);
                ATerm v_67 = ATgetArgument(t, 1);
                x_30 = ATgetArgument(t, 2);
                {
                  ATerm x_67 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = x_30;
            t = map_1_0(w_33, t);
          }
      }
    }
  return(t);
}
ATerm v_33 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm a_68 = t;
  int d_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_31 = ATgetArgument(t, 0);
          {
            ATerm e_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_68);
      t = d_31;
    }
  else
    {
      t = a_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_31;
    }
  return(t);
}
ATerm w_33 (ATerm t)
{
  ATerm l_31 = NULL;
  ATerm f_68 = t;
  int g_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_31 = ATgetArgument(t, 0);
          {
            ATerm h_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_68);
      t = l_31;
    }
  else
    {
      t = f_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_31;
    }
  return(t);
}
ATerm x_33 (ATerm t)
{
  ATerm q_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(u_68);
    }
  else
    {
      t = q_68;
      {
        ATerm p_31 = NULL,q_31 = NULL;
        ATerm v_68 = t;
        int w_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm x_68 = ATgetArgument(t, 0);
                q_31 = ATgetArgument(t, 1);
                {
                  ATerm a_69 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_68);
            t = q_31;
            t = map_1_0(y_33, t);
          }
        else
          {
            t = v_68;
            {
              ATerm b_69 = t;
              int c_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      p_31 = ATgetArgument(t, 0);
                      {
                        ATerm d_69 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_69);
                  t = (ATerm) ATinsert(ATempty, p_31);
                }
              else
                {
                  t = b_69;
                  {
                    ATerm e_69 = t;
                    int j_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm k_69 = ATgetArgument(t, 0);
                            q_31 = ATgetArgument(t, 1);
                            {
                              ATerm l_69 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm m_69 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_69);
                        t = q_31;
                        t = map_1_0(b_34, t);
                      }
                    else
                      {
                        t = e_69;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm n_69 = ATgetArgument(t, 0);
                            q_31 = ATgetArgument(t, 1);
                            {
                              ATerm o_69 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm p_69 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = q_31;
                        t = map_1_0(c_34, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_33 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm q_69 = t;
  int r_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_31 = ATgetArgument(t, 0);
          {
            ATerm s_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_69);
      t = x_31;
    }
  else
    {
      t = q_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
    }
  return(t);
}
ATerm b_34 (ATerm t)
{
  ATerm i_32 = NULL;
  ATerm t_69 = t;
  int u_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_32 = ATgetArgument(t, 0);
          {
            ATerm v_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_69);
      t = i_32;
    }
  else
    {
      t = t_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_32;
    }
  return(t);
}
ATerm c_34 (ATerm t)
{
  ATerm o_32 = NULL;
  ATerm w_69 = t;
  int x_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_32 = ATgetArgument(t, 0);
          {
            ATerm y_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_69);
      t = o_32;
    }
  else
    {
      t = w_69;
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
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, u_33, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, x_33, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm ListBuild_0_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      s_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_32;
  {
    ATerm d_34 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm z_69 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_69) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm a_70 = ATgetArgument(t, 1);
            if(((ATgetType(a_70) == AT_LIST) && !(ATisEmpty(a_70))))
              {
                ATerm b_70 = ATgetFirst((ATermList) a_70);
                if(match_cons(b_70, sym_Var_1))
                  {
                    ATerm d_70 = ATgetArgument(b_70, 0);
                    if(match_cons(d_70, sym_ListVar_1))
                      {
                        if(((t_32 != NULL) && (t_32 != ATgetArgument(d_70, 0))))
                          _fail(ATgetArgument(d_70, 0));
                        else
                          t_32 = ATgetArgument(d_70, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm c_70 = (ATerm) ATgetNext((ATermList) a_70);
                  if(((ATgetType(c_70) == AT_LIST) && !(ATisEmpty(c_70))))
                    {
                      ATerm e_70 = ATgetFirst((ATermList) c_70);
                      if(match_cons(e_70, sym_Op_2))
                        {
                          ATerm g_70 = ATgetArgument(e_70, 0);
                          if((ATgetSymbol((ATermAppl) g_70) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm h_70 = ATgetArgument(e_70, 1);
                            if(((ATgetType(h_70) != AT_LIST) || !(ATisEmpty(h_70))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm f_70 = (ATerm) ATgetNext((ATermList) c_70);
                        if(((ATgetType(f_70) != AT_LIST) || !(ATisEmpty(f_70))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_32));
      return(t);
    }
    t = oncetd_1_0(d_34, t);
    u_32 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, u_32);
  }
  return(t);
}
ATerm ListMatch_0_0 (ATerm t)
{
  ATerm v_32 = NULL,y_32 = NULL,z_32 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_32;
  {
    ATerm e_34 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm i_70 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_70) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_70 = ATgetArgument(t, 1);
            if(((ATgetType(j_70) == AT_LIST) && !(ATisEmpty(j_70))))
              {
                ATerm k_70 = ATgetFirst((ATermList) j_70);
                if(match_cons(k_70, sym_Var_1))
                  {
                    ATerm m_70 = ATgetArgument(k_70, 0);
                    if(match_cons(m_70, sym_ListVar_1))
                      {
                        if(((y_32 != NULL) && (y_32 != ATgetArgument(m_70, 0))))
                          _fail(ATgetArgument(m_70, 0));
                        else
                          y_32 = ATgetArgument(m_70, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm l_70 = (ATerm) ATgetNext((ATermList) j_70);
                  if(((ATgetType(l_70) == AT_LIST) && !(ATisEmpty(l_70))))
                    {
                      ATerm n_70 = ATgetFirst((ATermList) l_70);
                      if(match_cons(n_70, sym_Op_2))
                        {
                          ATerm p_70 = ATgetArgument(n_70, 0);
                          if((ATgetSymbol((ATermAppl) p_70) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm q_70 = ATgetArgument(n_70, 1);
                            if(((ATgetType(q_70) != AT_LIST) || !(ATisEmpty(q_70))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm o_70 = (ATerm) ATgetNext((ATermList) l_70);
                        if(((ATgetType(o_70) != AT_LIST) || !(ATisEmpty(o_70))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32));
      return(t);
    }
    t = oncetd_1_0(e_34, t);
    z_32 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, z_32);
  }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm r_70 = t;
  int s_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm f_34 (ATerm t)
        {
          ATerm t_70 = t;
          int u_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_0, t);
              ;
              LocalPopChoice(u_70);
            }
          else
            {
              t = t_70;
            }
          return(t);
        }
        t = Cons_2_0(_id, f_34, t);
      }
      ;
      LocalPopChoice(s_70);
    }
  else
    {
      t = r_70;
      {
        ATerm g_34 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, g_34, t);
      }
    }
  return(t);
}
ATerm j_34 (ATerm t)
{
  ATerm p_34 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_70), term_x_70));
  return(t);
}
ATerm k_34 (ATerm t)
{
  ATerm y_70 = t;
  int z_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_34 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_34, term_x_70);
      ;
      LocalPopChoice(z_70);
    }
  else
    {
      t = y_70;
    }
  return(t);
}
ATerm l_34 (ATerm t)
{
  ATerm c_35 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_35, term_x_70);
  return(t);
}
ATerm m_34 (ATerm t)
{
  ATerm a_71 = t;
  int b_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_35 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_70), term_x_70));
      ;
      LocalPopChoice(b_71);
    }
  else
    {
      t = a_71;
    }
  return(t);
}
ATerm q_34 (ATerm t)
{
  ATerm p_35 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_70), term_x_70));
  return(t);
}
ATerm s_34 (ATerm t)
{
  ATerm c_71 = t;
  int d_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_35 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_35, term_x_70);
      ;
      LocalPopChoice(d_71);
    }
  else
    {
      t = c_71;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,p_33 = NULL,s_33 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      p_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, p_33, s_33);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_33 = ATgetArgument(t, 0);
          t = p_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_33 = ATgetFirst((ATermList) t);
              j_33 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_33, (ATerm) ATmakeAppl(sym_LChoices_1, j_33));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_71;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              p_33 = ATgetArgument(t, 0);
              t = p_33;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_33 = ATgetFirst((ATermList) t);
                  j_33 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_33, (ATerm) ATmakeAppl(sym_Choices_1, j_33));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_71;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  p_33 = ATgetArgument(t, 0);
                  t = p_33;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_33 = ATgetFirst((ATermList) t);
                      j_33 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_33, (ATerm) ATmakeAppl(sym_Seqs_1, j_33));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_z_61;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_33 = ATgetArgument(t, 0);
                      s_33 = ATgetArgument(t, 1);
                      l_33 = ATgetArgument(t, 2);
                      k_33 = ATgetArgument(t, 3);
                      {
                        ATerm n_34 = NULL,o_34 = NULL;
                        t = s_33;
                        t = map1_1_0(j_34, t);
                        n_34 = t;
                        t = l_33;
                        t = map1_1_0(k_34, t);
                        o_34 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, p_33, n_34, o_34, k_33);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          p_33 = ATgetArgument(t, 0);
                          s_33 = ATgetArgument(t, 1);
                          l_33 = ATgetArgument(t, 2);
                          k_33 = ATgetArgument(t, 3);
                          {
                            ATerm f_71 = t;
                            int g_71 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_34 = NULL,z_34 = NULL;
                                t = l_33;
                                t = map1_1_0(l_34, t);
                                y_34 = t;
                                t = s_33;
                                t = map_1_0(m_34, t);
                                z_34 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_33, z_34, y_34, k_33);
                                ;
                                LocalPopChoice(g_71);
                              }
                            else
                              {
                                t = f_71;
                                {
                                  ATerm n_35 = NULL,o_35 = NULL;
                                  t = s_33;
                                  t = map1_1_0(q_34, t);
                                  n_35 = t;
                                  t = l_33;
                                  t = map_1_0(s_34, t);
                                  o_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_33, n_35, o_35, k_33);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              p_33 = ATgetArgument(t, 0);
                              s_33 = ATgetArgument(t, 1);
                              l_33 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, s_33, (ATerm) ATmakeAppl(sym_Op_2, term_o_59, (ATerm) ATinsert(ATinsert(ATempty, l_33), p_33)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  p_33 = ATgetArgument(t, 0);
                                  s_33 = ATgetArgument(t, 1);
                                  l_33 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, l_33)), p_33), (ATerm) ATmakeAppl(sym_Build_1, s_33)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      p_33 = ATgetArgument(t, 0);
                                      s_33 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_33, (ATerm) ATmakeAppl(sym_Match_1, s_33));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          p_33 = ATgetArgument(t, 0);
                                          s_33 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_33), s_33);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              p_33 = ATgetArgument(t, 0);
                                              s_33 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_33), p_33);
                                        }
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
ATerm repeat_1_0 (ATerm t_112 (ATerm), ATerm t)
{
  ATerm m_36 (ATerm t)
  {
    ATerm h_71 = t;
    int i_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_112(t);
        t = m_36(t);
        ;
        LocalPopChoice(i_71);
      }
    else
      {
        t = h_71;
      }
    return(t);
  }
  t = m_36(t);
  return(t);
}
ATerm t_34 (ATerm t)
{
  ATerm j_71 = t;
  int l_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(l_71);
    }
  else
    {
      t = j_71;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm m_71 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(t_34, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_71;
    }
  return(t);
}
ATerm Con_3_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,t_36 = NULL,u_36 = NULL,x_36 = NULL,y_36 = NULL,b_37 = NULL,c_37 = NULL,y_5 = NULL,z_5 = NULL;
  c_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      q_36 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
      u_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  p_36 = t;
  t = q_36;
  t = j_100(t);
  x_36 = t;
  t = t_36;
  t = k_100(t);
  y_36 = t;
  t = u_36;
  t = l_100(t);
  b_37 = t;
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, x_36, y_36, b_37);
  y_5 = t;
  t = SSLsetAnnotations(y_5, p_36);
  return(t);
}
ATerm u_34 (ATerm t)
{
  ATerm n_71 = t;
  int o_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(o_71);
    }
  else
    {
      t = n_71;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm p_71 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_34, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_71;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_37;
  if(match_cons(t, sym_StratRule_3))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
      n_37 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_37), (ATerm) ATmakeAppl(sym_Where_1, n_37)), l_37));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          l_37 = ATgetArgument(t, 0);
          m_37 = ATgetArgument(t, 1);
          n_37 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_37;
      t = pureterm_0_0(t);
      t = m_37;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, m_37)), (ATerm) ATmakeAppl(sym_Where_1, n_37)), (ATerm) ATmakeAppl(sym_Match_1, l_37)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,b_38 = NULL,c_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm q_71 = ATgetArgument(t, 0);
      if(match_cons(q_71, sym_Rule_3))
        {
          v_37 = ATgetArgument(q_71, 0);
          w_37 = ATgetArgument(q_71, 1);
          b_38 = ATgetArgument(q_71, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  c_38 = t;
  t = v_37;
  {
    ATerm v_34 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_71 = ATgetArgument(t, 0);
          if(match_cons(r_71, sym_Var_1))
            {
              if(((g_38 != NULL) && (g_38 != ATgetArgument(r_71, 0))))
                _fail(ATgetArgument(r_71, 0));
              else
                g_38 = ATgetArgument(r_71, 0);
            }
          else
            _fail(t);
          if(((f_38 != NULL) && (f_38 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_38 = ATgetArgument(t, 1);
          {
            ATerm s_71 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_38));
      return(t);
    }
    t = oncetd_1_0(v_34, t);
    h_38 = t;
    t = w_37;
    {
      ATerm w_34 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm t_71 = ATgetArgument(t, 0);
            if(match_cons(t_71, sym_Var_1))
              {
                if(((g_38 != NULL) && (g_38 != ATgetArgument(t_71, 0))))
                  _fail(ATgetArgument(t_71, 0));
                else
                  g_38 = ATgetArgument(t_71, 0);
              }
            else
              _fail(t);
            if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              i_38 = ATgetArgument(t, 1);
            {
              ATerm u_71 = ATgetArgument(t, 2);
              if(match_cons(u_71, sym_CallT_3))
                {
                  if(((j_38 != NULL) && (j_38 != ATgetArgument(u_71, 0))))
                    _fail(ATgetArgument(u_71, 0));
                  else
                    j_38 = ATgetArgument(u_71, 0);
                  {
                    ATerm v_71 = ATgetArgument(u_71, 1);
                    if(((ATgetType(v_71) != AT_LIST) || !(ATisEmpty(v_71))))
                      _fail(t);
                  }
                  {
                    ATerm w_71 = ATgetArgument(u_71, 2);
                    if(((ATgetType(w_71) != AT_LIST) || !(ATisEmpty(w_71))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_38);
        return(t);
      }
      t = oncetd_1_0(w_34, t);
      k_38 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, h_38, k_38, (ATerm) ATmakeAppl(sym_Seq_2, b_38, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_38), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_38), not_null(i_38), term_z_61))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_38)), (ATerm) ATmakeAppl(sym_Var_1, c_38))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_71 = t;
  int y_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_71 = t;
      int a_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(a_72);
        }
      else
        {
          t = z_71;
          {
            ATerm b_72 = t;
            int c_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(c_72);
              }
            else
              {
                t = b_72;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(y_71);
    }
  else
    {
      t = x_71;
    }
  return(t);
}
ATerm x_34 (ATerm t)
{
  ATerm d_72 = t;
  int e_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_38 = NULL;
      if(match_cons(t, sym_ListVar_1))
        {
          y_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_38;
      ;
      LocalPopChoice(e_72);
    }
  else
    {
      t = d_72;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_38;
  t = map_1_0(x_34, t);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_38, r_38);
  return(t);
}
ATerm topdown_1_0 (ATerm r_113 (ATerm), ATerm t)
{
  t = r_113(t);
  {
    ATerm d_35 (ATerm t)
    {
      t = topdown_1_0(r_113, t);
      return(t);
    }
    t = SRTS_all(d_35, t);
  }
  return(t);
}
ATerm e_35 (ATerm t)
{
  ATerm e_41 = NULL;
  ATerm f_72 = t;
  int g_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_41 = ATgetArgument(t, 0);
          {
            ATerm h_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_72);
      t = e_41;
    }
  else
    {
      t = f_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_41;
    }
  return(t);
}
ATerm h_35 (ATerm t)
{
  ATerm h_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_41);
  return(t);
}
ATerm i_35 (ATerm t)
{
  ATerm i_72 = t;
  int j_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_72);
    }
  else
    {
      t = i_72;
      {
        ATerm n_41 = NULL,r_41 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_41 = ATgetArgument(t, 0);
            t = n_41;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm k_72 = t;
            int l_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm m_72 = ATgetArgument(t, 0);
                    ATerm n_72 = ATgetArgument(t, 1);
                    r_41 = ATgetArgument(t, 2);
                    {
                      ATerm o_72 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(l_72);
                t = r_41;
                t = map_1_0(j_35, t);
              }
            else
              {
                t = k_72;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm p_72 = ATgetArgument(t, 0);
                    ATerm q_72 = ATgetArgument(t, 1);
                    r_41 = ATgetArgument(t, 2);
                    {
                      ATerm r_72 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = r_41;
                t = map_1_0(k_35, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_35 (ATerm t)
{
  ATerm c_42 = NULL;
  ATerm s_72 = t;
  int t_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_42 = ATgetArgument(t, 0);
          {
            ATerm u_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_72);
      t = c_42;
    }
  else
    {
      t = s_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_42;
    }
  return(t);
}
ATerm k_35 (ATerm t)
{
  ATerm i_42 = NULL;
  ATerm v_72 = t;
  int w_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_42 = ATgetArgument(t, 0);
          {
            ATerm x_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_72);
      t = i_42;
    }
  else
    {
      t = v_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_42;
    }
  return(t);
}
ATerm l_35 (ATerm t)
{
  ATerm r_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_42);
  return(t);
}
ATerm m_35 (ATerm t)
{
  ATerm y_72 = t;
  int z_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_72);
    }
  else
    {
      t = y_72;
      {
        ATerm t_42 = NULL,v_42 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_42 = ATgetArgument(t, 0);
            t = t_42;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm a_73 = t;
            int b_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm c_73 = ATgetArgument(t, 0);
                    ATerm d_73 = ATgetArgument(t, 1);
                    v_42 = ATgetArgument(t, 2);
                    {
                      ATerm e_73 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(b_73);
                t = v_42;
                t = map_1_0(q_35, t);
              }
            else
              {
                t = a_73;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm h_73 = ATgetArgument(t, 0);
                    ATerm i_73 = ATgetArgument(t, 1);
                    v_42 = ATgetArgument(t, 2);
                    {
                      ATerm j_73 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = v_42;
                t = map_1_0(s_35, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_35 (ATerm t)
{
  ATerm b_43 = NULL;
  ATerm k_73 = t;
  int l_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_43 = ATgetArgument(t, 0);
          {
            ATerm m_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_73);
      t = b_43;
    }
  else
    {
      t = k_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_43;
    }
  return(t);
}
ATerm s_35 (ATerm t)
{
  ATerm h_43 = NULL;
  ATerm n_73 = t;
  int o_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_43 = ATgetArgument(t, 0);
          {
            ATerm p_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_73);
      t = h_43;
    }
  else
    {
      t = n_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_43;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm n_39 = NULL,p_39 = NULL,q_39 = NULL,u_39 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
      u_39 = ATgetArgument(t, 2);
      n_39 = ATgetArgument(t, 3);
      {
        ATerm s_40 = NULL,t_40 = NULL,w_40 = NULL;
        t = u_39;
        t = map_1_0(e_35, t);
        s_40 = t;
        t = n_39;
        t = free_vars_3_0(h_35, i_35, tboundin_3_0, t);
        t_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_40, s_40);
        t = diff_0_0(t);
        w_40 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_39, q_39, u_39, (ATerm) ATmakeAppl(sym_Scope_2, w_40, n_39));
      }
    }
  else
    {
      ATerm q_42 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          p_39 = ATgetArgument(t, 0);
          q_39 = ATgetArgument(t, 1);
          u_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_39;
      t = free_vars_3_0(l_35, m_35, tboundin_3_0, t);
      q_42 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_39, q_39, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, q_42, u_39));
    }
  return(t);
}
ATerm t_35 (ATerm t)
{
  ATerm g_44 = NULL;
  ATerm q_73 = t;
  int r_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_44 = ATgetArgument(t, 0);
          {
            ATerm u_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_73);
      t = g_44;
    }
  else
    {
      t = q_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_44;
    }
  return(t);
}
ATerm u_35 (ATerm t)
{
  ATerm j_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_44);
  return(t);
}
ATerm w_35 (ATerm t)
{
  ATerm v_73 = t;
  int y_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_73);
    }
  else
    {
      t = v_73;
      {
        ATerm l_44 = NULL,n_44 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_44 = ATgetArgument(t, 0);
            t = l_44;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm z_73 = t;
            int a_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm b_74 = ATgetArgument(t, 0);
                    ATerm d_74 = ATgetArgument(t, 1);
                    n_44 = ATgetArgument(t, 2);
                    {
                      ATerm e_74 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(a_74);
                t = n_44;
                t = map_1_0(x_35, t);
              }
            else
              {
                t = z_73;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm g_74 = ATgetArgument(t, 0);
                    ATerm h_74 = ATgetArgument(t, 1);
                    n_44 = ATgetArgument(t, 2);
                    {
                      ATerm i_74 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = n_44;
                t = map_1_0(y_35, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_35 (ATerm t)
{
  ATerm t_44 = NULL;
  ATerm j_74 = t;
  int k_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_44 = ATgetArgument(t, 0);
          {
            ATerm l_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_74);
      t = t_44;
    }
  else
    {
      t = j_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_44;
    }
  return(t);
}
ATerm y_35 (ATerm t)
{
  ATerm z_44 = NULL;
  ATerm m_74 = t;
  int n_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_44 = ATgetArgument(t, 0);
          {
            ATerm o_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_74);
      t = z_44;
    }
  else
    {
      t = m_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_44;
    }
  return(t);
}
ATerm z_35 (ATerm t)
{
  ATerm g_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_45);
  return(t);
}
ATerm a_36 (ATerm t)
{
  ATerm p_74 = t;
  int q_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_74);
    }
  else
    {
      t = p_74;
      {
        ATerm i_45 = NULL,k_45 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_45 = ATgetArgument(t, 0);
            t = i_45;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm r_74 = t;
            int v_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm w_74 = ATgetArgument(t, 0);
                    ATerm y_74 = ATgetArgument(t, 1);
                    k_45 = ATgetArgument(t, 2);
                    {
                      ATerm z_74 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(v_74);
                t = k_45;
                t = map_1_0(b_36, t);
              }
            else
              {
                t = r_74;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm a_75 = ATgetArgument(t, 0);
                    ATerm b_75 = ATgetArgument(t, 1);
                    k_45 = ATgetArgument(t, 2);
                    {
                      ATerm c_75 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = k_45;
                t = map_1_0(c_36, t);
              }
          }
      }
    }
  return(t);
}
ATerm b_36 (ATerm t)
{
  ATerm q_45 = NULL;
  ATerm d_75 = t;
  int e_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_45 = ATgetArgument(t, 0);
          {
            ATerm f_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_75);
      t = q_45;
    }
  else
    {
      t = d_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_45;
    }
  return(t);
}
ATerm c_36 (ATerm t)
{
  ATerm a_46 = NULL;
  ATerm g_75 = t;
  int h_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_46 = ATgetArgument(t, 0);
          {
            ATerm i_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_75);
      t = a_46;
    }
  else
    {
      t = g_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_46;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm s_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
      w_43 = ATgetArgument(t, 2);
      s_43 = ATgetArgument(t, 3);
      {
        ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
        t = w_43;
        t = map_1_0(t_35, t);
        b_44 = t;
        t = s_43;
        t = free_vars_3_0(u_35, w_35, tboundin_3_0, t);
        c_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_44, b_44);
        t = diff_0_0(t);
        d_44 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_43, v_43, w_43, (ATerm) ATmakeAppl(sym_Scope_2, d_44, (ATerm) ATmakeAppl(sym_SRule_1, s_43)));
      }
    }
  else
    {
      ATerm f_45 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          u_43 = ATgetArgument(t, 0);
          v_43 = ATgetArgument(t, 1);
          w_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_43;
      t = free_vars_3_0(z_35, a_36, tboundin_3_0, t);
      f_45 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, u_43, v_43, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, f_45, (ATerm) ATmakeAppl(sym_SRule_1, w_43)));
    }
  return(t);
}
ATerm t_46 (ATerm j_46, ATerm t)
{
  ATerm z_11 = NULL,d_6 = NULL,z_6 = NULL;
  t = term_j_75;
  z_6 = t;
  t = term_j_75;
  d_6 = t;
  t = SSL_table_get(d_6, j_46);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_11 = ATgetFirst((ATermList) t);
      {
        ATerm k_75 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_11;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_75) != ATmakeSymbol("r_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_38;
  return(t);
}
ATerm u_46 (ATerm m_46, ATerm t)
{
  ATerm m_12 = NULL,g_7 = NULL,j_7 = NULL;
  t = term_j_75;
  j_7 = t;
  t = term_j_75;
  g_7 = t;
  t = SSL_table_get(g_7, m_46);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_12 = ATgetFirst((ATermList) t);
      {
        ATerm m_75 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_12;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_75) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_38;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm p_46 = NULL,r_46 = NULL;
  p_46 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_75 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_46;
  if(match_int(t, 0))
    {
      ATerm p_75 = t;
      int q_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_46(p_46, t);
          ;
          LocalPopChoice(q_75);
        }
      else
        {
          t = p_75;
          t = u_46(p_46, t);
        }
    }
  else
    {
      t = t_46(p_46, t);
    }
  return(t);
}
ATerm d_36 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm e_36 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_75 = t;
    int t_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_13, b_13);
        ;
        LocalPopChoice(t_75);
      }
    else
      {
        t = s_75;
        t = SSL_addr(a_13, b_13);
      }
  }
  return(t);
}
ATerm f_36 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm g_36 (ATerm t)
{
  t = term_j_75;
  return(t);
}
ATerm h_36 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm i_36 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_13, d_13);
  return(t);
}
ATerm k_36 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_75 = ATgetArgument(t, 0);
      if(match_cons(u_75, sym__2))
        {
          e_13 = ATgetArgument(u_75, 0);
          g_13 = ATgetArgument(u_75, 1);
        }
      else
        _fail(t);
      {
        ATerm v_75 = ATgetArgument(t, 1);
        if(match_cons(v_75, sym__2))
          {
            f_13 = ATgetArgument(v_75, 0);
            h_13 = ATgetArgument(v_75, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_13), e_13), (ATerm) ATinsert(CheckATermList(h_13), g_13));
  return(t);
}
ATerm l_36 (ATerm t)
{
  ATerm i_13 = NULL;
  t = new_0_0(t);
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, i_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_70), term_x_70)), i_13);
  return(t);
}
ATerm n_36 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_13), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm o_36 (ATerm t)
{
  t = term_j_75;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,y_48 = NULL;
  t_48 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      u_48 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_48;
  if(match_cons(t, sym_FunType_2))
    {
      y_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
      {
        ATerm v_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
        t = y_48;
        t = foldr_3_0(d_36, e_36, f_36, t);
        v_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_48, v_12);
        {
          ATerm w_75 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_75;
            }
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_48, v_12), term_a_76);
          t = assert_1_0(g_36, t);
          t = y_48;
          t = genzip_4_0(h_36, i_36, k_36, l_36, t);
          if(match_cons(t, sym__2))
            {
              x_12 = ATgetArgument(t, 0);
              y_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_12;
          t = map_1_0(n_36, t);
          z_12 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, u_48, x_12, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, u_48, z_12));
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm b_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, u_48, term_r_75);
      {
        ATerm c_76 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_76;
          }
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_48, term_r_75), term_e_76);
        t = assert_1_0(o_36, t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_48, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, u_48, (ATerm) ATempty));
      }
    }
  return(t);
}
ATerm r_36 (ATerm t)
{
  t = term_j_75;
  return(t);
}
ATerm v_36 (ATerm t)
{
  t = filter_1_0(w_36, t);
  t = concat_0_0(t);
  return(t);
}
ATerm w_36 (ATerm t)
{
  ATerm i_49 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_49;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm z_36 (ATerm t)
{
  ATerm f_76 = t;
  int g_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RDtoSD_0_0(t);
      ;
      LocalPopChoice(g_76);
    }
  else
    {
      t = f_76;
      t = DeclareVariables_0_0(t);
    }
  t = topdown_1_0(d_37, t);
  return(t);
}
ATerm d_37 (ATerm t)
{
  ATerm h_76 = t;
  int i_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_49 = NULL,l_49 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          k_49 = ATgetArgument(t, 0);
          l_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_CallT_3, k_49, l_49, (ATerm) ATempty);
      ;
      LocalPopChoice(i_76);
    }
  else
    {
      t = h_76;
    }
  return(t);
}
ATerm RulesToSdefs_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,h_49 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm j_76 = ATgetArgument(t, 0);
      if(((ATgetType(j_76) == AT_LIST) && !(ATisEmpty(j_76))))
        {
          ATerm k_76 = ATgetFirst((ATermList) j_76);
          if(match_cons(k_76, sym_Signature_1))
            {
              c_49 = ATgetArgument(k_76, 0);
            }
          else
            _fail(t);
          {
            ATerm l_76 = (ATerm) ATgetNext((ATermList) j_76);
            if(((ATgetType(l_76) == AT_LIST) && !(ATisEmpty(l_76))))
              {
                ATerm m_76 = ATgetFirst((ATermList) l_76);
                if(match_cons(m_76, sym_Strategies_1))
                  {
                    d_49 = ATgetArgument(m_76, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm n_76 = (ATerm) ATgetNext((ATermList) l_76);
                  if(((ATgetType(n_76) != AT_LIST) || !(ATisEmpty(n_76))))
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
  t = c_49;
  t = scope_2_0(r_36, v_36, t);
  e_49 = t;
  t = (ATerm) ATinsert(CheckATermList(d_49), (ATerm) ATmakeAppl(sym_RDefT_4, term_o_76, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_q_76, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_70), term_x_70))), (ATerm) ATmakeAppl(sym_VarDec_2, term_p_76, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_70), term_x_70))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_v_76, term_c_77, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_i_77), term_f_77)))));
  t = map_1_0(z_36, t);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_49, f_49);
  t = conc_0_0(t);
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, h_49)), (ATerm) ATmakeAppl(sym_Signature_1, c_49)));
  return(t);
}
ATerm e_37 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm f_37 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL;
  if(match_cons(t, sym__2))
    {
      y_49 = ATgetArgument(t, 0);
      z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_77 = t;
    int k_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_49, z_49);
        ;
        LocalPopChoice(k_77);
      }
    else
      {
        t = j_77;
        t = SSL_addr(y_49, z_49);
      }
  }
  return(t);
}
ATerm h_37 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm q_49 = NULL,s_49 = NULL,t_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,w_13 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      q_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_77;
  m_7 = t;
  t = term_l_77;
  k_7 = t;
  t = m_7;
  n_7 = t;
  t = term_m_77;
  l_7 = t;
  t = SSL_table_get(k_7, l_7);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_13 = ATgetFirst((ATermList) t);
      {
        ATerm n_77 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_13;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm o_77 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_77) != ATmakeSymbol("c_2", 0, ATtrue)))
        _fail(t);
      t_49 = ATgetArgument(t, 1);
      v_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_49;
  t = foldr_3_0(e_37, f_37, h_37, t);
  x_49 = t;
  t = SSL_int_to_string(x_49);
  w_49 = t;
  q_7 = t;
  t = term_b_59;
  o_7 = t;
  t = q_7;
  r_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_77), w_49), term_u_77), q_49), term_s_77), term_r_77), v_49), term_q_77), t_49), term_p_77);
  p_7 = t;
  t = SSL_printnl(o_7, p_7);
  t = (ATerm) ATmakeAppl(sym_Op_2, q_49, s_49);
  return(t);
}
ATerm i_37 (ATerm t)
{
  ATerm a_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_50, c_50, (ATerm) ATempty);
  return(t);
}
ATerm j_37 (ATerm t)
{
  ATerm d_50 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_77 = ATgetArgument(t, 0);
      if(((ATgetType(w_77) != AT_INT) || (ATgetInt((ATermInt) w_77) != 0)))
        _fail(t);
      {
        ATerm x_77 = ATgetArgument(t, 1);
      }
      d_50 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_50;
  return(t);
}
ATerm p_37 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,j_50 = NULL;
  if(match_cons(t, sym__3))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
      g_50 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_50, term_g_59);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, e_50, term_g_59);
  {
    ATerm y_77 = t;
    int z_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL,t_7 = NULL;
        t_7 = t;
        t = term_g_59;
        s_7 = t;
        t = SSL_subti(e_50, s_7);
        ;
        LocalPopChoice(z_77);
      }
    else
      {
        t = y_77;
        {
          ATerm u_7 = NULL,v_7 = NULL;
          v_7 = t;
          t = term_g_59;
          u_7 = t;
          t = SSL_subtr(e_50, u_7);
        }
      }
    j_50 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_50, f_50, (ATerm) ATinsert(CheckATermList(g_50), f_50));
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(i_37, j_37, p_37, t);
  return(t);
}
ATerm q_37 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm r_37 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  if(match_cons(t, sym__2))
    {
      o_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_78 = t;
    int d_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(o_50, p_50);
        ;
        LocalPopChoice(d_78);
      }
    else
      {
        t = a_78;
        t = SSL_addr(o_50, p_50);
      }
  }
  return(t);
}
ATerm s_37 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm t_37 (ATerm t)
{
  t = term_f_78;
  return(t);
}
ATerm CheckTuple_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      ATerm g_78 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_78) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_50;
  t = foldr_3_0(q_37, r_37, s_37, t);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_50, term_k_78);
  t = copy_0_0(t);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, m_50, term_k_78));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm p_78 = t;
    int q_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_50 = NULL,b_14 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL;
        t = term_f_78;
        y_7 = t;
        t = term_f_78;
        w_7 = t;
        t = y_7;
        z_7 = t;
        t = (ATerm) ATempty;
        x_7 = t;
        t = SSL_table_get(w_7, x_7);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_14 = ATgetFirst((ATermList) t);
            {
              ATerm r_78 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_14;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_78 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_78) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            q_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_50;
        ;
        LocalPopChoice(q_78);
      }
    else
      {
        t = p_78;
        t = (ATerm) ATempty;
      }
    n_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_78, (ATerm) ATinsert(CheckATermList(n_50), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, m_50, term_k_78)))));
    t = assert_1_0(t_37, t);
    t = (ATerm) ATmakeAppl(sym_Op_2, term_o_59, k_50);
  }
  return(t);
}
ATerm u_37 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm x_37 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_78 = t;
    int a_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_14, t_14);
        ;
        LocalPopChoice(a_79);
      }
    else
      {
        t = z_78;
        t = SSL_addr(s_14, t_14);
      }
  }
  return(t);
}
ATerm y_37 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm a_38 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm d_38 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  if(match_cons(t, sym__2))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_79 = t;
    int g_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_15, j_15);
        ;
        LocalPopChoice(g_79);
      }
    else
      {
        t = b_79;
        t = SSL_addr(i_15, j_15);
      }
  }
  return(t);
}
ATerm l_38 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,z_14 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
        t = v_51;
        t = foldr_3_0(u_37, x_37, y_37, t);
        r_14 = t;
        t = term_k_79;
        c_8 = t;
        t = term_k_79;
        a_8 = t;
        t = c_8;
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, u_51, (ATerm) ATmakeAppl(sym_Keys_1, r_14));
        b_8 = t;
        t = SSL_table_get(a_8, b_8);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_14 = ATgetFirst((ATermList) t);
            {
              ATerm l_79 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = z_14;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm n_79 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_79) != ATmakeSymbol("w_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, u_51, (ATerm) ATempty);
        ;
        LocalPopChoice(i_79);
      }
    else
      {
        t = h_79;
        {
          ATerm h_15 = NULL,p_15 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
          t = v_51;
          t = foldr_3_0(a_38, d_38, l_38, t);
          h_15 = t;
          t = term_k_79;
          g_8 = t;
          t = term_k_79;
          e_8 = t;
          t = g_8;
          h_8 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, u_51, (ATerm) ATmakeAppl(sym_Keys_1, h_15));
          f_8 = t;
          t = SSL_table_get(e_8, f_8);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_15 = ATgetFirst((ATermList) t);
              {
                ATerm r_79 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = p_15;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm s_79 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_79) != ATmakeSymbol("t_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, u_51, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm d_116 (ATerm), ATerm t)
{
  ATerm z_51 (ATerm t)
  {
    ATerm t_79 = t;
    int u_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_38 (ATerm t)
        {
          ATerm v_79 = t;
          int w_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_51(t);
              ;
              LocalPopChoice(w_79);
            }
          else
            {
              t = v_79;
            }
          return(t);
        }
        t = d_116(t);
        t = SRTS_all(n_38, t);
        ;
        LocalPopChoice(u_79);
      }
    else
      {
        t = t_79;
        t = SRTS_some(z_51, t);
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm p_38 (ATerm t)
{
  t = term_l_77;
  return(t);
}
ATerm u_38 (ATerm t)
{
  t = term_l_77;
  return(t);
}
ATerm w_38 (ATerm t)
{
  ATerm y_79 = t;
  if((PushChoice() == 0))
    {
      ATerm z_79 = t;
      int a_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = CheckCons_0_0(t);
          ;
          LocalPopChoice(a_80);
        }
      else
        {
          t = z_79;
          t = CheckTuple_0_0(t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_79;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm m_142 (ATerm), ATerm n_142 (ATerm), ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  ATerm t_38 (ATerm t)
  {
    ATerm c_52 = NULL;
    c_52 = t;
    t = m_142(t);
    if(((b_52 != NULL) && (b_52 != t)))
      _fail(t);
    else
      b_52 = t;
    t = n_142(t);
    if(((a_52 != NULL) && (a_52 != t)))
      _fail(t);
    else
      a_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_77, (ATerm) ATmakeAppl(sym_Defined_3, term_c_80, not_null(a_52), not_null(b_52)));
    t = assert_1_0(u_38, t);
    t = c_52;
    t = manytd_1_0(w_38, t);
    return(t);
  }
  t = scope_2_0(p_38, t_38, t);
  return(t);
}
ATerm z_38 (ATerm t)
{
  t = term_d_80;
  return(t);
}
ATerm b_39 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm c_39 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  if(match_cons(t, sym__2))
    {
      q_52 = ATgetArgument(t, 0);
      r_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_80 = t;
    int f_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_52, r_52);
        ;
        LocalPopChoice(f_80);
      }
    else
      {
        t = e_80;
        t = SSL_addr(q_52, r_52);
      }
  }
  return(t);
}
ATerm e_39 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm f_39 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm h_39 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL;
  if(match_cons(t, sym__2))
    {
      s_52 = ATgetArgument(t, 0);
      t_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_80 = t;
    int h_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_52, t_52);
        ;
        LocalPopChoice(h_80);
      }
    else
      {
        t = g_80;
        t = SSL_addr(s_52, t_52);
      }
  }
  return(t);
}
ATerm i_39 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm l_39 (ATerm t)
{
  t = term_i_80;
  return(t);
}
ATerm o_39 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm r_39 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL;
  if(match_cons(t, sym__2))
    {
      b_53 = ATgetArgument(t, 0);
      c_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_80 = t;
    int k_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(b_53, c_53);
        ;
        LocalPopChoice(k_80);
      }
    else
      {
        t = j_80;
        t = SSL_addr(b_53, c_53);
      }
  }
  return(t);
}
ATerm s_39 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm v_39 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm w_39 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym__2))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_80 = t;
    int m_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_53, e_53);
        ;
        LocalPopChoice(m_80);
      }
    else
      {
        t = l_80;
        t = SSL_addr(d_53, e_53);
      }
  }
  return(t);
}
ATerm x_39 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      f_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
      h_52 = ATgetArgument(t, 2);
      i_52 = ATgetArgument(t, 3);
      t = i_52;
      {
        ATerm x_38 (ATerm t)
        {
          ATerm o_52 = NULL,p_52 = NULL;
          t = g_52;
          t = foldr_3_0(b_39, c_39, e_39, t);
          o_52 = t;
          t = h_52;
          t = foldr_3_0(f_39, h_39, i_39, t);
          p_52 = t;
          t = (ATerm) ATmakeAppl(sym__3, f_52, o_52, p_52);
          return(t);
        }
        t = check_constructors_p__2_0(x_38, z_38, t);
      }
    }
  else
    {
      if(match_cons(t, sym_RDefT_4))
        {
          f_52 = ATgetArgument(t, 0);
          g_52 = ATgetArgument(t, 1);
          h_52 = ATgetArgument(t, 2);
          i_52 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_52;
      {
        ATerm k_39 (ATerm t)
        {
          ATerm z_52 = NULL,a_53 = NULL;
          t = g_52;
          t = foldr_3_0(o_39, r_39, s_39, t);
          z_52 = t;
          t = h_52;
          t = foldr_3_0(v_39, w_39, x_39, t);
          a_53 = t;
          t = (ATerm) ATmakeAppl(sym__3, f_52, z_52, a_53);
          return(t);
        }
        t = check_constructors_p__2_0(k_39, l_39, t);
      }
    }
  return(t);
}
ATerm y_39 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm z_39 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  if(match_cons(t, sym__2))
    {
      s_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_80 = t;
    int o_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_53, t_53);
        ;
        LocalPopChoice(o_80);
      }
    else
      {
        t = n_80;
        t = SSL_addr(s_53, t_53);
      }
  }
  return(t);
}
ATerm a_40 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm b_40 (ATerm t)
{
  t = term_k_79;
  return(t);
}
ATerm c_40 (ATerm t)
{
  t = term_k_79;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm h_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_53;
  if(match_cons(t, sym_FunType_2))
    {
      m_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
      {
        ATerm r_53 = NULL;
        t = m_53;
        t = foldr_3_0(y_39, z_39, a_40, t);
        r_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, k_53, (ATerm) ATmakeAppl(sym_Keys_1, r_53)), term_q_80);
        t = assert_1_0(b_40, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_53, (ATerm) ATmakeAppl(sym_FunType_2, m_53, h_53));
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          m_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, k_53, term_r_80), term_t_80);
      t = assert_1_0(c_40, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, k_53, (ATerm) ATmakeAppl(sym_ConstType_1, m_53));
    }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm u_80 = ATgetArgument(t, 0);
      if(((ATgetType(u_80) == AT_LIST) && !(ATisEmpty(u_80))))
        {
          ATerm v_80 = ATgetFirst((ATermList) u_80);
          if(match_cons(v_80, sym_Signature_1))
            {
              ATerm x_80 = ATgetArgument(v_80, 0);
              if(((ATgetType(x_80) == AT_LIST) && !(ATisEmpty(x_80))))
                {
                  ATerm z_80 = ATgetFirst((ATermList) x_80);
                  if(match_cons(z_80, sym_Constructors_1))
                    {
                      w_53 = ATgetArgument(z_80, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_81 = (ATerm) ATgetNext((ATermList) x_80);
                    if(((ATgetType(a_81) != AT_LIST) || !(ATisEmpty(a_81))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm w_80 = (ATerm) ATgetNext((ATermList) u_80);
            if(((ATgetType(w_80) == AT_LIST) && !(ATisEmpty(w_80))))
              {
                ATerm b_81 = ATgetFirst((ATermList) w_80);
                if(match_cons(b_81, sym_Strategies_1))
                  {
                    x_53 = ATgetArgument(b_81, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm c_81 = (ATerm) ATgetNext((ATermList) w_80);
                  if(((ATgetType(c_81) != AT_LIST) || !(ATisEmpty(c_81))))
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(w_53), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_78), term_k_78))), term_e_81);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = x_53;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm f_81 = t;
    int g_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_54 = NULL,u_15 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
        t = term_f_78;
        k_8 = t;
        t = term_f_78;
        i_8 = t;
        t = k_8;
        l_8 = t;
        t = (ATerm) ATempty;
        j_8 = t;
        t = SSL_table_get(i_8, j_8);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_15 = ATgetFirst((ATermList) t);
            {
              ATerm i_81 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_15;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_81 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_81) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            a_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_54;
        ;
        LocalPopChoice(g_81);
      }
    else
      {
        t = f_81;
        t = (ATerm) ATempty;
      }
    y_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_53, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(w_53), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_k_78), term_k_78), term_k_78))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_78), term_k_78))), term_e_81));
    t = conc_0_0(t);
    z_53 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, x_53)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, z_53)))));
  }
  return(t);
}
ATerm e_40 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_81 = ATgetArgument(t, 0);
      if(((ATgetType(k_81) != AT_LIST) || !(ATisEmpty(k_81))))
        _fail(t);
      {
        ATerm l_81 = ATgetArgument(t, 1);
        if(((ATgetType(l_81) != AT_LIST) || !(ATisEmpty(l_81))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_40 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_81 = ATgetArgument(t, 0);
      if(((ATgetType(m_81) == AT_LIST) && !(ATisEmpty(m_81))))
        {
          f_54 = ATgetFirst((ATermList) m_81);
          h_54 = (ATerm) ATgetNext((ATermList) m_81);
        }
      else
        _fail(t);
      {
        ATerm n_81 = ATgetArgument(t, 1);
        if(((ATgetType(n_81) == AT_LIST) && !(ATisEmpty(n_81))))
          {
            g_54 = ATgetFirst((ATermList) n_81);
            i_54 = (ATerm) ATgetNext((ATermList) n_81);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_54, g_54), (ATerm) ATmakeAppl(sym__2, h_54, i_54));
  return(t);
}
ATerm g_40 (ATerm t)
{
  ATerm j_54 = NULL,l_54 = NULL;
  if(match_cons(t, sym__2))
    {
      j_54 = ATgetArgument(t, 0);
      l_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_54), j_54);
  return(t);
}
ATerm j_40 (ATerm t)
{
  ATerm n_54 = NULL,p_54 = NULL,q_54 = NULL;
  if(match_cons(t, sym__2))
    {
      n_54 = ATgetArgument(t, 0);
      q_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_54;
  {
    ATerm o_81 = t;
    int p_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_81);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_54);
      }
    else
      {
        t = o_81;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_81 = ATgetArgument(t, 0);
            p_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_54, p_54);
      }
  }
  return(t);
}
ATerm m_40 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_81 = ATgetArgument(t, 0);
      if(((ATgetType(s_81) != AT_LIST) || !(ATisEmpty(s_81))))
        _fail(t);
      {
        ATerm t_81 = ATgetArgument(t, 1);
        if(((ATgetType(t_81) != AT_LIST) || !(ATisEmpty(t_81))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_40 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_81 = ATgetArgument(t, 0);
      if(((ATgetType(u_81) == AT_LIST) && !(ATisEmpty(u_81))))
        {
          u_54 = ATgetFirst((ATermList) u_81);
          w_54 = (ATerm) ATgetNext((ATermList) u_81);
        }
      else
        _fail(t);
      {
        ATerm v_81 = ATgetArgument(t, 1);
        if(((ATgetType(v_81) == AT_LIST) && !(ATisEmpty(v_81))))
          {
            v_54 = ATgetFirst((ATermList) v_81);
            x_54 = (ATerm) ATgetNext((ATermList) v_81);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_54, v_54), (ATerm) ATmakeAppl(sym__2, w_54, x_54));
  return(t);
}
ATerm o_40 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  if(match_cons(t, sym__2))
    {
      b_55 = ATgetArgument(t, 0);
      c_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_55), b_55);
  return(t);
}
ATerm p_40 (ATerm t)
{
  ATerm e_55 = NULL,g_55 = NULL,j_55 = NULL;
  if(match_cons(t, sym__2))
    {
      e_55 = ATgetArgument(t, 0);
      j_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_55;
  {
    ATerm x_81 = t;
    int y_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_81);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_55);
      }
    else
      {
        t = x_81;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_82 = ATgetArgument(t, 0);
            g_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_55, g_55);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_141 (ATerm), ATerm t)
{
  ATerm b_82 = t;
  int d_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(x_141, _id, t);
      ;
      LocalPopChoice(d_82);
    }
  else
    {
      t = b_82;
      {
        ATerm e_82 = t;
        int f_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_40 (ATerm t)
            {
              ATerm w_15 = NULL,y_15 = NULL;
              w_15 = t;
              t = x_141(t);
              y_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_15, y_15);
              t = genzip_4_0(e_40, f_40, g_40, j_40, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, d_40, _id, t);
            ;
            LocalPopChoice(f_82);
          }
        else
          {
            t = e_82;
            {
              ATerm l_40 (ATerm t)
              {
                ATerm b_16 = NULL,d_16 = NULL;
                b_16 = t;
                t = x_141(t);
                d_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_16, d_16);
                t = genzip_4_0(m_40, n_40, o_40, p_40, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, l_40, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm q_40 (ATerm t)
{
  ATerm u_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_55);
  return(t);
}
ATerm r_40 (ATerm t)
{
  ATerm g_82 = t;
  int h_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_82);
    }
  else
    {
      t = g_82;
      {
        ATerm i_82 = t;
        int j_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(j_82);
          }
        else
          {
            t = i_82;
            {
              ATerm y_55 = NULL;
              ATerm k_82 = t;
              int l_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm m_82 = ATgetArgument(t, 0);
                      ATerm n_82 = ATgetArgument(t, 1);
                      y_55 = ATgetArgument(t, 2);
                      {
                        ATerm p_82 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_82);
                  t = y_55;
                  t = map_1_0(u_40, t);
                }
              else
                {
                  t = k_82;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm q_82 = ATgetArgument(t, 0);
                      ATerm r_82 = ATgetArgument(t, 1);
                      y_55 = ATgetArgument(t, 2);
                      {
                        ATerm s_82 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = y_55;
                  t = map_1_0(v_40, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_40 (ATerm t)
{
  ATerm e_56 = NULL;
  ATerm t_82 = t;
  int u_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_56 = ATgetArgument(t, 0);
          {
            ATerm v_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_82);
      t = e_56;
    }
  else
    {
      t = t_82;
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
ATerm v_40 (ATerm t)
{
  ATerm m_56 = NULL;
  ATerm w_82 = t;
  int x_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_56 = ATgetArgument(t, 0);
          {
            ATerm y_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_82);
      t = m_56;
    }
  else
    {
      t = w_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_56;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_55 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      t_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_55;
  t = free_vars_3_0(q_40, r_40, tboundin_3_0, t);
  return(t);
}
ATerm DistBinding_2_0 (ATerm i_139 (ATerm), ATerm j_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  if(match_cons(t, sym__3))
    {
      p_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
      r_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_56;
  {
    ATerm x_40 (ATerm t)
    {
      ATerm s_56 = NULL;
      s_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_56, r_56);
      t = i_139(t);
      return(t);
    }
    ATerm y_40 (ATerm t)
    {
      ATerm u_56 = NULL;
      u_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_56, q_56);
      t = i_139(t);
      return(t);
    }
    t = j_139(x_40, y_40, _id, t);
  }
  return(t);
}
ATerm z_40 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_82 = ATgetArgument(t, 0);
      if(((ATgetType(z_82) != AT_LIST) || !(ATisEmpty(z_82))))
        _fail(t);
      {
        ATerm a_83 = ATgetArgument(t, 1);
        if(((ATgetType(a_83) != AT_LIST) || !(ATisEmpty(a_83))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_41 (ATerm t)
{
  ATerm c_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_83 = ATgetArgument(t, 0);
      if(((ATgetType(b_83) == AT_LIST) && !(ATisEmpty(b_83))))
        {
          c_57 = ATgetFirst((ATermList) b_83);
          g_57 = (ATerm) ATgetNext((ATermList) b_83);
        }
      else
        _fail(t);
      {
        ATerm c_83 = ATgetArgument(t, 1);
        if(((ATgetType(c_83) == AT_LIST) && !(ATisEmpty(c_83))))
          {
            f_57 = ATgetFirst((ATermList) c_83);
            h_57 = (ATerm) ATgetNext((ATermList) c_83);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_57, f_57), (ATerm) ATmakeAppl(sym__2, g_57, h_57));
  return(t);
}
ATerm b_41 (ATerm t)
{
  ATerm i_57 = NULL,k_57 = NULL;
  if(match_cons(t, sym__2))
    {
      i_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_57), i_57);
  return(t);
}
ATerm RnBinding_2_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  if(match_cons(t, sym__2))
    {
      v_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_56;
  t = c_139(t);
  x_56 = t;
  t = map_1_0(new_0_0, t);
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_56, y_56);
  t = genzip_4_0(z_40, a_41, b_41, _id, t);
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, w_56);
  t = conc_0_0(t);
  a_57 = t;
  t = v_56;
  {
    ATerm c_41 (ATerm t)
    {
      t = y_56;
      return(t);
    }
    t = d_139(c_41, t);
    b_57 = t;
    t = (ATerm) ATmakeAppl(sym__3, b_57, w_56, a_57);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm v_57 = NULL,x_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,e_58 = NULL;
  if(match_cons(t, sym__2))
    {
      a_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_58 = ATgetFirst((ATermList) t);
      e_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_58;
  if(match_cons(t, sym__2))
    {
      v_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
      {
        ATerm d_83 = t;
        int e_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_57;
            if((a_58 != t))
              {
                _fail(t);
              }
            t = x_57;
            ;
            LocalPopChoice(e_83);
          }
        else
          {
            t = d_83;
            t = (ATerm) ATmakeAppl(sym__2, a_58, e_58);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_58, e_58);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm h_118 (ATerm), ATerm t)
{
  ATerm h_59 (ATerm t)
  {
    ATerm f_83 = t;
    int g_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_118(t);
        ;
        LocalPopChoice(g_83);
      }
    else
      {
        t = f_83;
        {
          ATerm l_16 = NULL,m_16 = NULL;
          ATerm d_41 (ATerm t)
          {
            ATerm n_16 = NULL;
            n_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_16, not_null(m_16));
            t = h_59(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((l_16 != NULL) && (l_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_16 = ATgetArgument(t, 0);
              if(((m_16 != NULL) && (m_16 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(l_16);
          t = SRTS_all(d_41, t);
        }
      }
    return(t);
  }
  t = h_59(t);
  return(t);
}
ATerm f_41 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_83 = ATgetArgument(t, 0);
      if(((ATgetType(h_83) != AT_LIST) || !(ATisEmpty(h_83))))
        _fail(t);
      {
        ATerm j_83 = ATgetArgument(t, 1);
        if(((ATgetType(j_83) != AT_LIST) || !(ATisEmpty(j_83))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_41 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_83 = ATgetArgument(t, 0);
      if(((ATgetType(k_83) == AT_LIST) && !(ATisEmpty(k_83))))
        {
          r_59 = ATgetFirst((ATermList) k_83);
          t_59 = (ATerm) ATgetNext((ATermList) k_83);
        }
      else
        _fail(t);
      {
        ATerm l_83 = ATgetArgument(t, 1);
        if(((ATgetType(l_83) == AT_LIST) && !(ATisEmpty(l_83))))
          {
            s_59 = ATgetFirst((ATermList) l_83);
            u_59 = (ATerm) ATgetNext((ATermList) l_83);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_59, s_59), (ATerm) ATmakeAppl(sym__2, t_59, u_59));
  return(t);
}
ATerm i_41 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL;
  if(match_cons(t, sym__2))
    {
      v_59 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_59), v_59);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  j_59 = t;
  {
    ATerm m_83 = t;
    int n_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_83 = ATgetArgument(t, 0);
            ATerm p_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_83);
        t = j_59;
      }
    else
      {
        t = m_83;
        {
          ATerm q_59 = NULL;
          if(match_cons(t, sym__3))
            {
              k_59 = ATgetArgument(t, 0);
              l_59 = ATgetArgument(t, 1);
              m_59 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
          t = genzip_4_0(f_41, g_41, i_41, _id, t);
          q_59 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_59, m_59);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm j_138 (ATerm), ATerm k_138 (ATerm (ATerm), ATerm), ATerm l_138 (ATerm), ATerm m_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_138 (ATerm (ATerm), ATerm), ATerm o_138 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      x_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_59, (ATerm) ATempty);
  {
    ATerm z_59 (ATerm t)
    {
      ATerm j_41 (ATerm t)
      {
        ATerm q_83 = t;
        int r_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL,q_16 = NULL;
            ATerm k_41 (ATerm t)
            {
              ATerm s_16 = NULL;
              s_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_16, not_null(q_16));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((p_16 != NULL) && (p_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_16 = ATgetArgument(t, 0);
                if(((q_16 != NULL) && (q_16 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(p_16);
            t = k_138(k_41, t);
            ;
            LocalPopChoice(r_83);
          }
        else
          {
            t = q_83;
            {
              ATerm s_83 = t;
              int u_83 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_16 = NULL,a_17 = NULL,c_17 = NULL;
                  z_16 = t;
                  t = SSL_explode_term(z_16);
                  if(match_cons(t, sym__2))
                    {
                      ATerm v_83 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) v_83) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm w_83 = ATgetArgument(t, 1);
                        if(((ATgetType(w_83) == AT_LIST) && !(ATisEmpty(w_83))))
                          {
                            a_17 = ATgetFirst((ATermList) w_83);
                            {
                              ATerm x_83 = (ATerm) ATgetNext((ATermList) w_83);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_17;
                  t = j_138(t);
                  c_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_17, y_59);
                  t = lookup_0_0(t);
                  t = o_138(t);
                  ;
                  LocalPopChoice(u_83);
                }
              else
                {
                  t = s_83;
                  t = RnBinding_2_0(l_138, n_138, t);
                  t = DistBinding_2_0(z_59, m_138, t);
                }
            }
          }
        return(t);
      }
      t = env_alltd_1_0(j_41, t);
      return(t);
    }
    t = z_59(t);
  }
  return(t);
}
ATerm m_41 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_83 = ATgetArgument(t, 0);
      if(((ATgetType(z_83) != AT_LIST) || !(ATisEmpty(z_83))))
        _fail(t);
      {
        ATerm a_84 = ATgetArgument(t, 1);
        if(((ATgetType(a_84) != AT_LIST) || !(ATisEmpty(a_84))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_41 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_84 = ATgetArgument(t, 0);
      if(((ATgetType(b_84) == AT_LIST) && !(ATisEmpty(b_84))))
        {
          p_60 = ATgetFirst((ATermList) b_84);
          r_60 = (ATerm) ATgetNext((ATermList) b_84);
        }
      else
        _fail(t);
      {
        ATerm c_84 = ATgetArgument(t, 1);
        if(((ATgetType(c_84) == AT_LIST) && !(ATisEmpty(c_84))))
          {
            q_60 = ATgetFirst((ATermList) c_84);
            s_60 = (ATerm) ATgetNext((ATermList) c_84);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_60, q_60), (ATerm) ATmakeAppl(sym__2, r_60, s_60));
  return(t);
}
ATerm p_41 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  if(match_cons(t, sym__2))
    {
      t_60 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_60), t_60);
  return(t);
}
ATerm q_41 (ATerm t)
{
  ATerm v_60 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_60;
  return(t);
}
ATerm s_41 (ATerm t)
{
  ATerm d_84 = t;
  int e_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_84);
    }
  else
    {
      t = d_84;
      {
        ATerm x_60 = NULL,b_61 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_60 = ATgetArgument(t, 0);
            t = x_60;
            t = free_vars_3_0(t_41, u_41, tboundin_3_0, t);
          }
        else
          {
            ATerm f_84 = t;
            int g_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm h_84 = ATgetArgument(t, 0);
                    ATerm i_84 = ATgetArgument(t, 1);
                    b_61 = ATgetArgument(t, 2);
                    {
                      ATerm m_84 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(g_84);
                t = b_61;
                t = map_1_0(x_41, t);
              }
            else
              {
                t = f_84;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm n_84 = ATgetArgument(t, 0);
                    ATerm p_84 = ATgetArgument(t, 1);
                    b_61 = ATgetArgument(t, 2);
                    {
                      ATerm r_84 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_61;
                t = map_1_0(z_41, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_41 (ATerm t)
{
  ATerm f_61 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_61);
  return(t);
}
ATerm u_41 (ATerm t)
{
  ATerm s_84 = t;
  int t_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_84);
    }
  else
    {
      t = s_84;
      {
        ATerm u_84 = t;
        int v_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(v_84);
          }
        else
          {
            t = u_84;
            {
              ATerm k_61 = NULL;
              ATerm w_84 = t;
              int x_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm y_84 = ATgetArgument(t, 0);
                      ATerm z_84 = ATgetArgument(t, 1);
                      k_61 = ATgetArgument(t, 2);
                      {
                        ATerm a_85 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_84);
                  t = k_61;
                  t = map_1_0(v_41, t);
                }
              else
                {
                  t = w_84;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm b_85 = ATgetArgument(t, 0);
                      ATerm c_85 = ATgetArgument(t, 1);
                      k_61 = ATgetArgument(t, 2);
                      {
                        ATerm d_85 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = k_61;
                  t = map_1_0(w_41, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_41 (ATerm t)
{
  ATerm p_61 = NULL;
  ATerm e_85 = t;
  int f_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_61 = ATgetArgument(t, 0);
          {
            ATerm g_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_85);
      t = p_61;
    }
  else
    {
      t = e_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_61;
    }
  return(t);
}
ATerm w_41 (ATerm t)
{
  ATerm w_61 = NULL;
  ATerm h_85 = t;
  int i_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_61 = ATgetArgument(t, 0);
          {
            ATerm j_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_85);
      t = w_61;
    }
  else
    {
      t = h_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_61;
    }
  return(t);
}
ATerm x_41 (ATerm t)
{
  ATerm e_62 = NULL;
  ATerm k_85 = t;
  int l_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_62 = ATgetArgument(t, 0);
          {
            ATerm m_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_85);
      t = e_62;
    }
  else
    {
      t = k_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_62;
    }
  return(t);
}
ATerm z_41 (ATerm t)
{
  ATerm l_62 = NULL;
  ATerm n_85 = t;
  int o_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_62 = ATgetArgument(t, 0);
          {
            ATerm p_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_85);
      t = l_62;
    }
  else
    {
      t = n_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_62;
    }
  return(t);
}
ATerm ExpOverlay_1_0 (ATerm d_141 (ATerm), ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      i_60 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_141(t);
  {
    ATerm l_41 (ATerm t)
    {
      ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
      m_60 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((i_60 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          n_60 = ATgetArgument(t, 1);
          o_60 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_60, j_60);
      t = genzip_4_0(m_41, o_41, p_41, _id, t);
      if(((k_60 != NULL) && (k_60 != t)))
        _fail(t);
      else
        k_60 = t;
      t = o_60;
      if(((l_60 != NULL) && (l_60 != t)))
        _fail(t);
      else
        l_60 = t;
      t = m_60;
      return(t);
    }
    t = fetch_1_0(l_41, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_60), not_null(l_60));
    t = substitute_6_0(q_41, Var_1_0, s_41, tboundin_3_0, tpaste_1_0, _id, t);
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm s_62 = NULL,u_62 = NULL;
  ATerm q_85 = t;
  int r_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm s_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(r_85);
      t = term_z_61;
    }
  else
    {
      t = q_85;
      if(match_cons(t, sym_Real_1))
        {
          u_62 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_62));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_62 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_62));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  u_62 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_62));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      u_62 = ATgetArgument(t, 0);
                      s_62 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_85, (ATerm)ATinsert(ATinsert(ATempty, s_62), u_62), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          u_62 = ATgetArgument(t, 0);
                          s_62 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_62), s_62, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              u_62 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_62), (ATerm)ATempty, (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm a_42 (ATerm t)
{
  t = map_1_0(trm_to_cong_0_0, t);
  return(t);
}
ATerm trm_to_cong_0_0 (ATerm t)
{
  ATerm u_85 = t;
  int v_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Op_2_0(_id, a_42, t);
      ;
      LocalPopChoice(v_85);
    }
  else
    {
      t = u_85;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm b_42 (ATerm t)
{
  ATerm l_63 = NULL;
  l_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_63, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_70), term_x_70));
  return(t);
}
ATerm Overlay_to_Congdef_0_0 (ATerm t)
{
  ATerm f_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      f_63 = ATgetArgument(t, 0);
      h_63 = ATgetArgument(t, 1);
      i_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_63;
  t = map_1_0(b_42, t);
  j_63 = t;
  t = i_63;
  t = trm_to_cong_0_0(t);
  k_63 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, f_63, j_63, k_63);
  return(t);
}
ATerm ExpandOverlays_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,u_63 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm w_85 = ATgetArgument(t, 0);
      if(((ATgetType(w_85) == AT_LIST) && !(ATisEmpty(w_85))))
        {
          ATerm x_85 = ATgetFirst((ATermList) w_85);
          if(match_cons(x_85, sym_Signature_1))
            {
              m_63 = ATgetArgument(x_85, 0);
            }
          else
            _fail(t);
          {
            ATerm y_85 = (ATerm) ATgetNext((ATermList) w_85);
            if(((ATgetType(y_85) == AT_LIST) && !(ATisEmpty(y_85))))
              {
                ATerm z_85 = ATgetFirst((ATermList) y_85);
                if(match_cons(z_85, sym_Overlays_1))
                  {
                    n_63 = ATgetArgument(z_85, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm a_86 = (ATerm) ATgetNext((ATermList) y_85);
                  if(((ATgetType(a_86) == AT_LIST) && !(ATisEmpty(a_86))))
                    {
                      ATerm b_86 = ATgetFirst((ATermList) a_86);
                      if(match_cons(b_86, sym_Strategies_1))
                        {
                          o_63 = ATgetArgument(b_86, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm c_86 = (ATerm) ATgetNext((ATermList) a_86);
                        if(((ATgetType(c_86) != AT_LIST) || !(ATisEmpty(c_86))))
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
  t = n_63;
  {
    ATerm d_86 = t;
    int e_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_86 = t;
        if((PushChoice() == 0))
          {
            t = n_63;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_86;
          }
        t = n_63;
        {
          ATerm d_42 (ATerm t)
          {
            ATerm e_42 (ATerm t)
            {
              ATerm f_42 (ATerm t)
              {
                t = n_63;
                return(t);
              }
              t = ExpOverlay_1_0(f_42, t);
              return(t);
            }
            t = repeat_1_0(e_42, t);
            return(t);
          }
          t = topdown_1_0(d_42, t);
        }
        ;
        LocalPopChoice(e_86);
      }
    else
      {
        t = d_86;
      }
    p_63 = t;
    t = n_63;
    t = map_1_0(Overlay_to_Congdef_0_0, t);
    q_63 = t;
    t = o_63;
    {
      ATerm g_86 = t;
      int h_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_86 = t;
          if((PushChoice() == 0))
            {
              t = p_63;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_86;
            }
          t = o_63;
          {
            ATerm g_42 (ATerm t)
            {
              ATerm j_86 = t;
              int k_86 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_42 (ATerm t)
                  {
                    t = p_63;
                    return(t);
                  }
                  t = ExpOverlay_1_0(h_42, t);
                  ;
                  LocalPopChoice(k_86);
                }
              else
                {
                  t = j_86;
                }
              return(t);
            }
            t = topdown_1_0(g_42, t);
          }
          ;
          LocalPopChoice(h_86);
        }
      else
        {
          t = g_86;
        }
      r_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
      t = conc_0_0(t);
      u_63 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, u_63)), (ATerm) ATmakeAppl(sym_Signature_1, m_63)));
    }
  }
  return(t);
}
ATerm j_42 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm k_42 (ATerm t)
{
  ATerm a_64 = NULL;
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_64), term_n_86);
  t = assert_1_0(l_42, t);
  t = a_64;
  return(t);
}
ATerm l_42 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      x_63 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
      z_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_86, x_63));
  t = assert_1_0(j_42, t);
  t = y_63;
  t = map_1_0(k_42, t);
  t = z_63;
  t = use_vars_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, x_63, y_63, z_63);
  return(t);
}
ATerm m_42 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm n_42 (ATerm t)
{
  ATerm h_65 = NULL;
  ATerm q_86 = t;
  int r_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_65 = ATgetArgument(t, 0);
          {
            ATerm s_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_86);
      t = h_65;
    }
  else
    {
      t = q_86;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_65;
    }
  return(t);
}
ATerm o_42 (ATerm t)
{
  ATerm k_65 = NULL;
  k_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_65), term_n_86);
  t = assert_1_0(p_42, t);
  t = k_65;
  return(t);
}
ATerm p_42 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm s_42 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm u_42 (ATerm t)
{
  ATerm w_65 = NULL;
  ATerm t_86 = t;
  int u_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_65 = ATgetArgument(t, 0);
          {
            ATerm v_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_86);
      t = w_65;
    }
  else
    {
      t = t_86;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_65;
    }
  return(t);
}
ATerm w_42 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_65), term_n_86);
  t = assert_1_0(x_42, t);
  t = z_65;
  return(t);
}
ATerm x_42 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm y_42 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      o_64 = ATgetArgument(t, 0);
      p_64 = ATgetArgument(t, 1);
      q_64 = ATgetArgument(t, 2);
      h_64 = ATgetArgument(t, 3);
      t = h_64;
      if(match_cons(t, sym_StratRule_3))
        {
          i_64 = ATgetArgument(t, 0);
          j_64 = ATgetArgument(t, 1);
          k_64 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_86, o_64));
          t = assert_1_0(m_42, t);
          t = q_64;
          t = map_1_0(n_42, t);
          t = map_1_0(o_42, t);
          t = i_64;
          t = unbound_vars_0_0(t);
          t = j_64;
          t = unbound_vars_0_0(t);
          t = k_64;
          t = unbound_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, o_64, p_64, q_64, (ATerm) ATmakeAppl(sym_StratRule_3, i_64, j_64, k_64));
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              i_64 = ATgetArgument(t, 0);
              j_64 = ATgetArgument(t, 1);
              k_64 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_86, o_64));
          t = assert_1_0(s_42, t);
          t = q_64;
          t = map_1_0(u_42, t);
          t = map_1_0(w_42, t);
          t = i_64;
          t = bind_vars_0_0(t);
          t = k_64;
          t = unbound_vars_0_0(t);
          t = j_64;
          t = use_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, o_64, p_64, q_64, (ATerm) ATmakeAppl(sym_Rule_3, i_64, j_64, k_64));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          o_64 = ATgetArgument(t, 0);
          p_64 = ATgetArgument(t, 1);
          q_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_64;
      if(match_cons(t, sym_Rule_3))
        {
          r_64 = ATgetArgument(t, 0);
          s_64 = ATgetArgument(t, 1);
          t_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_86, o_64));
      t = assert_1_0(y_42, t);
      t = r_64;
      t = bind_vars_0_0(t);
      t = t_64;
      t = unbound_vars_0_0(t);
      t = s_64;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, o_64, p_64, (ATerm) ATmakeAppl(sym_Rule_3, r_64, s_64, t_64));
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,p_66 = NULL,q_66 = NULL,t_66 = NULL,m_8 = NULL,n_8 = NULL;
  t_66 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      h_66 = ATgetArgument(t, 0);
      i_66 = ATgetArgument(t, 1);
      j_66 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_66);
  g_66 = t;
  t = h_66;
  t = n_103(t);
  k_66 = t;
  t = i_66;
  t = o_103(t);
  p_66 = t;
  t = j_66;
  t = p_103(t);
  q_66 = t;
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_66, p_66, q_66);
  m_8 = t;
  t = SSLsetAnnotations(m_8, g_66);
  return(t);
}
ATerm z_42 (ATerm t)
{
  ATerm z_86 = t;
  int a_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
      q_67 = t;
      if(match_cons(t, sym__2))
        {
          r_67 = ATgetArgument(t, 0);
          s_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_67;
      {
        ATerm e_87 = t;
        int f_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_67 = ATgetFirst((ATermList) t);
                {
                  ATerm h_87 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_87);
            t = t_67;
            {
              ATerm i_87 = t;
              int j_87 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm k_87 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_87);
                  t = r_67;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm l_87 = t;
                      int n_87 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_67;
                          ;
                          LocalPopChoice(n_87);
                        }
                      else
                        {
                          t = l_87;
                          t = w_67(r_67, q_67, t);
                        }
                    }
                  else
                    {
                      t = w_67(r_67, q_67, t);
                    }
                }
              else
                {
                  t = i_87;
                  t = r_67;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = q_67;
                }
            }
          }
        else
          {
            t = e_87;
            t = r_67;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = q_67;
          }
      }
      ;
      LocalPopChoice(a_87);
    }
  else
    {
      t = z_86;
    }
  return(t);
}
ATerm w_67 (ATerm g_67, ATerm h_67, ATerm t)
{
  t = h_67;
  {
    ATerm p_87 = t;
    int q_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_8 = NULL,p_8 = NULL;
        t = h_67;
        p_8 = t;
        t = term_o_86;
        o_8 = t;
        t = SSL_table_get(o_8, g_67);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_87 = ATgetFirst((ATermList) t);
            if(match_cons(r_87, sym_Defined_1))
              {
                ATerm t_87 = ATgetArgument(r_87, 0);
              }
            else
              _fail(t);
            {
              ATerm s_87 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_67;
        ;
        LocalPopChoice(q_87);
      }
    else
      {
        t = p_87;
        t = (ATerm) ATmakeAppl(sym__2, g_67, (ATerm) ATinsert(ATempty, term_u_87));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm f_67 = NULL,q_8 = NULL,r_8 = NULL;
  t = map_1_0(z_42, t);
  f_67 = t;
  r_8 = t;
  t = term_o_86;
  q_8 = t;
  t = SSL_table_destroy(q_8);
  t = (ATerm) ATmakeAppl(sym__2, term_o_86, f_67);
  t = table_putlist_0_0(t);
  t = f_67;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      z_67 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_67;
  {
    ATerm a_43 (ATerm t)
    {
      ATerm b_68 = NULL,c_68 = NULL;
      if(match_cons(t, sym__2))
        {
          b_68 = ATgetArgument(t, 0);
          c_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(z_67, b_68, c_68);
      t = (ATerm) ATmakeAppl(sym__3, z_67, b_68, c_68);
      return(t);
    }
    t = map_1_0(a_43, t);
  }
  return(t);
}
ATerm c_43 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,u_8 = NULL,v_8 = NULL;
  o_17 = t;
  v_8 = t;
  t = term_o_86;
  u_8 = t;
  t = SSL_table_get(u_8, o_17);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_17, p_17);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  t = term_o_86;
  t_8 = t;
  t = term_o_86;
  s_8 = t;
  t = SSL_table_keys(s_8);
  t = map_1_0(c_43, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,w_8 = NULL,x_8 = NULL;
  i_68 = t;
  t = save_Bound_0_0(t);
  j_68 = t;
  t = i_68;
  t = h_142(t);
  k_68 = t;
  t = save_Bound_0_0(t);
  l_68 = t;
  x_8 = t;
  t = term_o_86;
  w_8 = t;
  t = SSL_table_destroy(w_8);
  t = (ATerm) ATmakeAppl(sym__2, term_o_86, j_68);
  t = table_putlist_0_0(t);
  t = k_68;
  t = i_142(t);
  m_68 = t;
  t = l_68;
  t = isect_Bound_0_0(t);
  t = m_68;
  return(t);
}
ATerm LChoice_2_0 (ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,z_8 = NULL,a_9 = NULL;
  t_68 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_68);
  n_68 = t;
  t = o_68;
  t = j_103(t);
  r_68 = t;
  t = p_68;
  t = k_103(t);
  s_68 = t;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_68, s_68);
  z_8 = t;
  t = SSLsetAnnotations(z_8, n_68);
  return(t);
}
ATerm Choice_2_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,b_9 = NULL,c_9 = NULL;
  i_69 = t;
  if(match_cons(t, sym_Choice_2))
    {
      z_68 = ATgetArgument(t, 0);
      f_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_69);
  y_68 = t;
  t = z_68;
  t = h_102(t);
  g_69 = t;
  t = f_69;
  t = i_102(t);
  h_69 = t;
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, g_69, h_69);
  b_9 = t;
  t = SSLsetAnnotations(b_9, y_68);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm k_71 = NULL;
  k_71 = t;
  {
    ATerm v_87 = t;
    int w_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL,u_18 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,m_9 = NULL;
        t = term_l_86;
        f_9 = t;
        t = term_l_86;
        d_9 = t;
        t = f_9;
        m_9 = t;
        t = (ATerm) ATempty;
        e_9 = t;
        t = SSL_table_get(d_9, e_9);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_18 = ATgetFirst((ATermList) t);
            {
              ATerm x_87 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_18;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_87 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_87) != ATmakeSymbol("j_1", 0, ATtrue)))
              _fail(t);
            q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_71), term_r_77), q_18), term_z_87);
        ;
        LocalPopChoice(w_87);
      }
    else
      {
        t = v_87;
        {
          ATerm a_88 = t;
          int b_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_18 = NULL,d_19 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
              t = term_l_86;
              p_9 = t;
              t = term_l_86;
              n_9 = t;
              t = p_9;
              q_9 = t;
              t = (ATerm) ATempty;
              o_9 = t;
              t = SSL_table_get(n_9, o_9);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_19 = ATgetFirst((ATermList) t);
                  {
                    ATerm c_88 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = d_19;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_88 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_88) != ATmakeSymbol("g_1", 0, ATtrue)))
                    _fail(t);
                  y_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_71), term_r_77), y_18), term_e_88);
              ;
              LocalPopChoice(b_88);
            }
          else
            {
              t = a_88;
              {
                ATerm f_88 = t;
                int g_88 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_19 = NULL,l_19 = NULL,t_9 = NULL,u_9 = NULL,w_9 = NULL,x_9 = NULL;
                    t = term_l_86;
                    w_9 = t;
                    t = term_l_86;
                    t_9 = t;
                    t = w_9;
                    x_9 = t;
                    t = (ATerm) ATempty;
                    u_9 = t;
                    t = SSL_table_get(t_9, u_9);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        l_19 = ATgetFirst((ATermList) t);
                        {
                          ATerm h_88 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = l_19;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm i_88 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_88) != ATmakeSymbol("d_1", 0, ATtrue)))
                          _fail(t);
                        h_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_71), term_r_77), h_19), term_e_88);
                    ;
                    LocalPopChoice(g_88);
                  }
                else
                  {
                    t = f_88;
                    {
                      ATerm j_88 = t;
                      int k_88 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_19 = NULL,v_19 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL,h_10 = NULL;
                          t = term_l_86;
                          d_10 = t;
                          t = term_l_86;
                          a_10 = t;
                          t = d_10;
                          h_10 = t;
                          t = (ATerm) ATempty;
                          c_10 = t;
                          t = SSL_table_get(a_10, c_10);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              v_19 = ATgetFirst((ATermList) t);
                              {
                                ATerm l_88 = (ATerm) ATgetNext((ATermList) t);
                              }
                            }
                          else
                            _fail(t);
                          t = v_19;
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm m_88 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) m_88) != ATmakeSymbol("a_1", 0, ATtrue)))
                                _fail(t);
                              p_19 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_71), term_r_77), p_19), term_e_88);
                          ;
                          LocalPopChoice(k_88);
                        }
                      else
                        {
                          t = j_88;
                          {
                            ATerm n_88 = t;
                            int o_88 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_20 = NULL,f_20 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,n_10 = NULL;
                                t = term_l_86;
                                l_10 = t;
                                t = term_l_86;
                                j_10 = t;
                                t = l_10;
                                n_10 = t;
                                t = (ATerm) ATempty;
                                k_10 = t;
                                t = SSL_table_get(j_10, k_10);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    f_20 = ATgetFirst((ATermList) t);
                                    {
                                      ATerm p_88 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = f_20;
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm q_88 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) q_88) != ATmakeSymbol("x_0", 0, ATtrue)))
                                      _fail(t);
                                    a_20 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_71), term_r_77), a_20), term_r_88);
                                ;
                                LocalPopChoice(o_88);
                              }
                            else
                              {
                                t = n_88;
                                {
                                  ATerm j_20 = NULL,o_20 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
                                  t = term_l_86;
                                  r_10 = t;
                                  t = term_l_86;
                                  p_10 = t;
                                  t = r_10;
                                  s_10 = t;
                                  t = (ATerm) ATempty;
                                  q_10 = t;
                                  t = SSL_table_get(p_10, q_10);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      o_20 = ATgetFirst((ATermList) t);
                                      {
                                        ATerm s_88 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = o_20;
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm t_88 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) t_88) != ATmakeSymbol("u_0", 0, ATtrue)))
                                        _fail(t);
                                      j_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_71), term_r_77), j_20), term_r_88);
                                }
                              }
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
ATerm Bound_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  f_73 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_88 = t;
    int v_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,b_11 = NULL,h_11 = NULL;
        t = term_o_86;
        h_11 = t;
        t = term_o_86;
        b_11 = t;
        t = SSL_table_get(b_11, f_73);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_21 = ATgetFirst((ATermList) t);
            {
              ATerm w_88 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_21;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm x_88 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_88) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, g_73);
        ;
        LocalPopChoice(v_88);
      }
    else
      {
        t = u_88;
        {
          ATerm y_88 = t;
          int z_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_21 = NULL,i_11 = NULL,m_11 = NULL;
              t = term_o_86;
              m_11 = t;
              t = term_o_86;
              i_11 = t;
              t = SSL_table_get(i_11, f_73);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_21 = ATgetFirst((ATermList) t);
                  {
                    ATerm a_89 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = v_21;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(z_88);
            }
          else
            {
              t = y_88;
              {
                ATerm h_22 = NULL,o_11 = NULL,p_11 = NULL;
                t = term_o_86;
                p_11 = t;
                t = term_o_86;
                o_11 = t;
                t = SSL_table_get(o_11, f_73);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_22 = ATgetFirst((ATermList) t);
                    {
                      ATerm b_89 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = h_22;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm c_89 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_89) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_73);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm d_89 = t;
  int e_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(e_89);
      {
        ATerm f_89 = t;
        int g_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(g_89);
          }
        else
          {
            t = f_89;
            {
              ATerm s_73 = NULL,t_73 = NULL,n_22 = NULL,r_11 = NULL,v_11 = NULL;
              s_73 = t;
              if(match_cons(t, sym_Var_1))
                {
                  t_73 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_89), t_73), term_h_89);
              t = Context_0_0(t);
              n_22 = t;
              v_11 = t;
              t = term_b_59;
              r_11 = t;
              t = SSL_printnl(r_11, n_22);
              t = n_22;
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = d_89;
      {
        ATerm j_89 = t;
        int k_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(k_89);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = j_89;
            {
              ATerm l_89 = t;
              int m_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(m_89);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = l_89;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,c_74 = NULL,f_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,x_74 = NULL,w_11 = NULL,x_11 = NULL;
  x_74 = t;
  if(match_cons(t, sym_Rule_3))
    {
      x_73 = ATgetArgument(t, 0);
      c_74 = ATgetArgument(t, 1);
      f_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_74);
  w_73 = t;
  t = x_73;
  t = a_101(t);
  s_74 = t;
  t = c_74;
  t = b_101(t);
  t_74 = t;
  t = f_74;
  t = c_101(t);
  u_74 = t;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, s_74, t_74, u_74);
  w_11 = t;
  t = SSLsetAnnotations(w_11, w_73);
  return(t);
}
ATerm RootApp_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,w_76 = NULL,x_76 = NULL,y_11 = NULL,e_12 = NULL;
  x_76 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      z_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_76);
  y_75 = t;
  t = z_75;
  t = z_99(t);
  w_76 = t;
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, w_76);
  y_11 = t;
  t = SSLsetAnnotations(y_11, y_75);
  return(t);
}
ATerm App_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  ATerm t_77 = NULL,b_78 = NULL,c_78 = NULL,e_78 = NULL,h_78 = NULL,i_78 = NULL,f_12 = NULL,g_12 = NULL;
  i_78 = t;
  if(match_cons(t, sym_App_2))
    {
      b_78 = ATgetArgument(t, 0);
      c_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_78);
  t_77 = t;
  t = b_78;
  t = x_99(t);
  e_78 = t;
  t = c_78;
  t = y_99(t);
  h_78 = t;
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, e_78, h_78);
  f_12 = t;
  t = SSLsetAnnotations(f_12, t_77);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__3))
    {
      l_78 = ATgetArgument(t, 0);
      m_78 = ATgetArgument(t, 1);
      n_78 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(l_78, m_78);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_89 = ATgetFirst((ATermList) t);
      o_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  j_12 = t;
  t = (ATerm) ATinsert(CheckATermList(o_78), n_78);
  i_12 = t;
  t = SSL_table_put(l_78, m_78, i_12);
  t = (ATerm) ATmakeAppl(sym__3, l_78, m_78, n_78);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm o_89 = t;
  int p_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(p_89);
      {
        ATerm s_78 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            s_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_o_86, (ATerm)ATmakeAppl(sym_Var_1, s_78), term_r_89);
        t = table_replace_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, s_78);
      }
    }
  else
    {
      t = o_89;
      {
        ATerm s_89 = t;
        int t_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(t_89);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = s_89;
            {
              ATerm u_89 = t;
              int v_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(v_89);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = u_89;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,x_78 = NULL,n_12 = NULL,o_12 = NULL;
  x_78 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_78);
  t_78 = t;
  t = u_78;
  t = a_103(t);
  v_78 = t;
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, v_78);
  n_12 = t;
  t = SSLsetAnnotations(n_12, t_78);
  return(t);
}
ATerm Build_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,p_12 = NULL,q_12 = NULL;
  f_79 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_79);
  c_79 = t;
  t = d_79;
  t = b_103(t);
  e_79 = t;
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, e_79);
  p_12 = t;
  t = SSLsetAnnotations(p_12, c_79);
  return(t);
}
ATerm d_43 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm e_43 (ATerm t)
{
  t = Scope_2_0(f_43, unbound_vars_0_0, t);
  return(t);
}
ATerm f_43 (ATerm t)
{
  t = map_1_0(g_43, t);
  return(t);
}
ATerm g_43 (ATerm t)
{
  ATerm j_79 = NULL;
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_79), term_u_87);
  t = assert_1_0(i_43, t);
  t = j_79;
  return(t);
}
ATerm i_43 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm j_43 (ATerm t)
{
  t = Choice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm k_43 (ATerm t)
{
  t = Choice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm l_43 (ATerm t)
{
  t = LChoice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm m_43 (ATerm t)
{
  t = LChoice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm n_43 (ATerm t)
{
  t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
  return(t);
}
ATerm o_43 (ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm w_89 = t;
  int y_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(y_89);
      t = scope_2_0(d_43, e_43, t);
    }
  else
    {
      t = w_89;
      {
        ATerm z_89 = t;
        int a_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(a_90);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = z_89;
            {
              ATerm b_90 = t;
              int c_90 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(c_90);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = b_90;
                  {
                    ATerm d_90 = t;
                    int e_90 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(e_90);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = d_90;
                        {
                          ATerm f_90 = t;
                          int g_90 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(g_90);
                              t = abstract_choice_2_0(j_43, k_43, t);
                            }
                          else
                            {
                              t = f_90;
                              {
                                ATerm h_90 = t;
                                int i_90 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(i_90);
                                    t = abstract_choice_2_0(l_43, m_43, t);
                                  }
                                else
                                  {
                                    t = h_90;
                                    {
                                      ATerm j_90 = t;
                                      int k_90 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(k_90);
                                          t = abstract_choice_2_0(n_43, o_43, t);
                                        }
                                      else
                                        {
                                          t = j_90;
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
ATerm r_43 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm t_43 (ATerm t)
{
  ATerm x_79 = NULL;
  ATerm l_90 = t;
  int m_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_79 = ATgetArgument(t, 0);
          {
            ATerm n_90 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_90);
      t = x_79;
    }
  else
    {
      t = l_90;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_79;
    }
  return(t);
}
ATerm x_43 (ATerm t)
{
  ATerm b_80 = NULL;
  b_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_80), term_n_86);
  t = assert_1_0(y_43, t);
  t = b_80;
  return(t);
}
ATerm y_43 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm z_43 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm m_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      o_79 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
      q_79 = ATgetArgument(t, 2);
      m_79 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_90, o_79));
      t = assert_1_0(r_43, t);
      t = q_79;
      t = map_1_0(t_43, t);
      t = map_1_0(x_43, t);
      t = m_79;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, o_79, p_79, q_79, m_79);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_79 = ATgetArgument(t, 0);
          p_79 = ATgetArgument(t, 1);
          q_79 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_90, o_79));
      t = assert_1_0(z_43, t);
      t = q_79;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, o_79, p_79, q_79);
    }
  return(t);
}
ATerm a_44 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm e_44 (ATerm t)
{
  t = scope_2_0(f_44, h_44, t);
  return(t);
}
ATerm f_44 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm h_44 (ATerm t)
{
  ATerm y_80 = NULL;
  y_80 = t;
  t = free_vars_3_0(i_44, k_44, tboundin_3_0, t);
  t = map_1_0(p_44, t);
  t = y_80;
  {
    ATerm q_90 = t;
    int r_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(r_90);
      }
    else
      {
        t = q_90;
        {
          ATerm s_90 = t;
          int t_90 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(t_90);
            }
          else
            {
              t = s_90;
              t = overlay_ud_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_44 (ATerm t)
{
  ATerm h_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_81);
  return(t);
}
ATerm k_44 (ATerm t)
{
  ATerm u_90 = t;
  int v_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_90);
    }
  else
    {
      t = u_90;
      {
        ATerm w_81 = NULL,c_82 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_81 = ATgetArgument(t, 0);
            t = w_81;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm w_90 = t;
            int x_90 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm y_90 = ATgetArgument(t, 0);
                    ATerm z_90 = ATgetArgument(t, 1);
                    c_82 = ATgetArgument(t, 2);
                    {
                      ATerm a_91 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(x_90);
                t = c_82;
                t = map_1_0(m_44, t);
              }
            else
              {
                t = w_90;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm b_91 = ATgetArgument(t, 0);
                    ATerm c_91 = ATgetArgument(t, 1);
                    c_82 = ATgetArgument(t, 2);
                    {
                      ATerm d_91 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = c_82;
                t = map_1_0(o_44, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_44 (ATerm t)
{
  ATerm o_82 = NULL;
  ATerm e_91 = t;
  int f_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_82 = ATgetArgument(t, 0);
          {
            ATerm g_91 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_91);
      t = o_82;
    }
  else
    {
      t = e_91;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_82;
    }
  return(t);
}
ATerm o_44 (ATerm t)
{
  ATerm i_83 = NULL;
  ATerm h_91 = t;
  int i_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_83 = ATgetArgument(t, 0);
          {
            ATerm j_91 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_91);
      t = i_83;
    }
  else
    {
      t = h_91;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_83;
    }
  return(t);
}
ATerm p_44 (ATerm t)
{
  ATerm t_83 = NULL;
  t_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_83), term_u_87);
  t = assert_1_0(q_44, t);
  t = t_83;
  return(t);
}
ATerm q_44 (ATerm t)
{
  t = term_o_86;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(a_44, e_44, t);
  return(t);
}
ATerm Signature_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm y_83 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,r_12 = NULL,s_12 = NULL;
  l_84 = t;
  if(match_cons(t, sym_Signature_1))
    {
      j_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_84);
  y_83 = t;
  t = j_84;
  t = m_98(t);
  k_84 = t;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, k_84);
  r_12 = t;
  t = SSLsetAnnotations(r_12, y_83);
  return(t);
}
ATerm r_44 (ATerm t)
{
  t = Cons_2_0(s_44, u_44, t);
  return(t);
}
ATerm s_44 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm u_44 (ATerm t)
{
  t = Cons_2_0(v_44, w_44, t);
  return(t);
}
ATerm v_44 (ATerm t)
{
  t = Overlays_1_0(x_44, t);
  return(t);
}
ATerm w_44 (ATerm t)
{
  t = Cons_2_0(a_45, b_45, t);
  return(t);
}
ATerm x_44 (ATerm t)
{
  ATerm k_91 = t;
  int l_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_91);
    }
  else
    {
      t = k_91;
      {
        ATerm o_84 = NULL;
        o_84 = t;
        t = filter_1_0(y_44, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_84;
      }
    }
  return(t);
}
ATerm y_44 (ATerm t)
{
  ATerm m_91 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_91;
    }
  return(t);
}
ATerm a_45 (ATerm t)
{
  t = Strategies_1_0(c_45, t);
  return(t);
}
ATerm b_45 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm c_45 (ATerm t)
{
  ATerm n_91 = t;
  int o_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_91);
    }
  else
    {
      t = n_91;
      {
        ATerm q_84 = NULL;
        q_84 = t;
        t = filter_1_0(d_45, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_84;
      }
    }
  return(t);
}
ATerm d_45 (ATerm t)
{
  ATerm p_91 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_91;
    }
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  t = Specification_1_0(r_44, t);
  return(t);
}
ATerm e_45 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL;
  b_87 = t;
  {
    ATerm q_91 = t;
    int r_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm s_91 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_91);
        t = b_87;
        {
          ATerm t_91 = t;
          if((PushChoice() == 0))
            {
              ATerm a_23 = NULL,b_23 = NULL,g_23 = NULL,t_12 = NULL,u_12 = NULL;
              a_23 = t;
              if(match_cons(t, sym_Var_1))
                {
                  b_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_u_91;
              u_12 = t;
              t = term_u_91;
              t_12 = t;
              t = SSL_table_get(t_12, a_23);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_23 = ATgetFirst((ATermList) t);
                  {
                    ATerm v_91 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = g_23;
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm w_91 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_91) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, b_23);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_91;
            }
          t = term_y_91;
        }
      }
    else
      {
        t = q_91;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_y_91;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                c_87 = ATgetArgument(t, 0);
                {
                  ATerm g_87 = NULL;
                  t = c_87;
                  t = free_vars_3_0(h_45, j_45, tboundin_3_0, t);
                  t = map_1_0(n_45, t);
                  g_87 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_91, g_87);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    c_87 = ATgetArgument(t, 0);
                    d_87 = ATgetArgument(t, 1);
                    {
                      ATerm d_94 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, c_87, d_87);
                      t = free_vars_3_0(o_45, p_45, tboundin_3_0, t);
                      t = map_1_0(t_45, t);
                      d_94 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_z_91, d_94);
                    }
                  }
                else
                  {
                    ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm a_92 = ATgetArgument(t, 0);
                        ATerm b_92 = ATgetArgument(t, 1);
                        ATerm c_92 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    m_13 = t;
                    t = term_b_59;
                    k_13 = t;
                    t = m_13;
                    n_13 = t;
                    t = (ATerm) ATinsert(ATempty, term_d_92);
                    l_13 = t;
                    t = SSL_printnl(k_13, l_13);
                    p_13 = t;
                    t = term_g_59;
                    o_13 = t;
                    t = SSL_exit(o_13);
                    t = (ATerm) ATinsert(ATempty, term_d_92);
                  }
              }
          }
      }
  }
  return(t);
}
ATerm h_45 (ATerm t)
{
  ATerm m_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_87);
  return(t);
}
ATerm j_45 (ATerm t)
{
  ATerm e_92 = t;
  int f_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_92);
    }
  else
    {
      t = e_92;
      {
        ATerm o_87 = NULL,x_89 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_87 = ATgetArgument(t, 0);
            t = o_87;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm g_92 = t;
            int h_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm i_92 = ATgetArgument(t, 0);
                    ATerm j_92 = ATgetArgument(t, 1);
                    x_89 = ATgetArgument(t, 2);
                    {
                      ATerm k_92 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(h_92);
                t = x_89;
                t = map_1_0(l_45, t);
              }
            else
              {
                t = g_92;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm l_92 = ATgetArgument(t, 0);
                    ATerm m_92 = ATgetArgument(t, 1);
                    x_89 = ATgetArgument(t, 2);
                    {
                      ATerm n_92 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = x_89;
                t = map_1_0(m_45, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_45 (ATerm t)
{
  ATerm i_93 = NULL;
  ATerm o_92 = t;
  int p_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_93 = ATgetArgument(t, 0);
          {
            ATerm q_92 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_92);
      t = i_93;
    }
  else
    {
      t = o_92;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_93;
    }
  return(t);
}
ATerm m_45 (ATerm t)
{
  ATerm x_93 = NULL;
  ATerm r_92 = t;
  int s_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_93 = ATgetArgument(t, 0);
          {
            ATerm t_92 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_92);
      t = x_93;
    }
  else
    {
      t = r_92;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_93;
    }
  return(t);
}
ATerm n_45 (ATerm t)
{
  ATerm a_94 = NULL;
  a_94 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_94);
  return(t);
}
ATerm o_45 (ATerm t)
{
  ATerm e_94 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_94);
  return(t);
}
ATerm p_45 (ATerm t)
{
  ATerm u_92 = t;
  int v_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_92);
    }
  else
    {
      t = u_92;
      {
        ATerm g_94 = NULL,i_94 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_94 = ATgetArgument(t, 0);
            t = g_94;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm w_92 = t;
            int x_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm y_92 = ATgetArgument(t, 0);
                    ATerm z_92 = ATgetArgument(t, 1);
                    i_94 = ATgetArgument(t, 2);
                    {
                      ATerm a_93 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(x_92);
                t = i_94;
                t = map_1_0(r_45, t);
              }
            else
              {
                t = w_92;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm b_93 = ATgetArgument(t, 0);
                    ATerm c_93 = ATgetArgument(t, 1);
                    i_94 = ATgetArgument(t, 2);
                    {
                      ATerm d_93 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = i_94;
                t = map_1_0(s_45, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_45 (ATerm t)
{
  ATerm p_94 = NULL;
  ATerm e_93 = t;
  int f_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_94 = ATgetArgument(t, 0);
          {
            ATerm g_93 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_93);
      t = p_94;
    }
  else
    {
      t = e_93;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_94;
    }
  return(t);
}
ATerm s_45 (ATerm t)
{
  ATerm v_94 = NULL;
  ATerm h_93 = t;
  int j_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_94 = ATgetArgument(t, 0);
          {
            ATerm k_93 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_93);
      t = v_94;
    }
  else
    {
      t = h_93;
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
ATerm t_45 (ATerm t)
{
  ATerm z_94 = NULL;
  z_94 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_94);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(e_45, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm u_45 (ATerm t)
{
  ATerm q_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_97);
  return(t);
}
ATerm v_45 (ATerm t)
{
  ATerm l_93 = t;
  int m_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_93);
    }
  else
    {
      t = l_93;
      {
        ATerm s_97 = NULL,u_97 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_97 = ATgetArgument(t, 0);
            t = s_97;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm n_93 = t;
            int o_93 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm p_93 = ATgetArgument(t, 0);
                    ATerm q_93 = ATgetArgument(t, 1);
                    u_97 = ATgetArgument(t, 2);
                    {
                      ATerm r_93 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(o_93);
                t = u_97;
                t = map_1_0(w_45, t);
              }
            else
              {
                t = n_93;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm u_93 = ATgetArgument(t, 0);
                    ATerm v_93 = ATgetArgument(t, 1);
                    u_97 = ATgetArgument(t, 2);
                    {
                      ATerm w_93 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_97;
                t = map_1_0(x_45, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_45 (ATerm t)
{
  ATerm a_98 = NULL;
  ATerm y_93 = t;
  int z_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_98 = ATgetArgument(t, 0);
          {
            ATerm b_94 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_93);
      t = a_98;
    }
  else
    {
      t = y_93;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_98;
    }
  return(t);
}
ATerm x_45 (ATerm t)
{
  ATerm u_98 = NULL;
  ATerm c_94 = t;
  int f_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_98 = ATgetArgument(t, 0);
          {
            ATerm h_94 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_94);
      t = u_98;
    }
  else
    {
      t = c_94;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_98;
    }
  return(t);
}
ATerm y_45 (ATerm t)
{
  ATerm c_99 = NULL;
  c_99 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_99);
  return(t);
}
ATerm z_45 (ATerm t)
{
  ATerm e_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_99);
  return(t);
}
ATerm b_46 (ATerm t)
{
  ATerm j_94 = t;
  int k_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_94);
    }
  else
    {
      t = j_94;
      {
        ATerm k_99 = NULL,n_99 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_99 = ATgetArgument(t, 0);
            t = k_99;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm l_94 = t;
            int m_94 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm n_94 = ATgetArgument(t, 0);
                    ATerm o_94 = ATgetArgument(t, 1);
                    n_99 = ATgetArgument(t, 2);
                    {
                      ATerm q_94 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_94);
                t = n_99;
                t = map_1_0(c_46, t);
              }
            else
              {
                t = l_94;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm r_94 = ATgetArgument(t, 0);
                    ATerm s_94 = ATgetArgument(t, 1);
                    n_99 = ATgetArgument(t, 2);
                    {
                      ATerm t_94 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = n_99;
                t = map_1_0(e_46, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_46 (ATerm t)
{
  ATerm d_100 = NULL;
  ATerm u_94 = t;
  int w_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_100 = ATgetArgument(t, 0);
          {
            ATerm x_94 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_94);
      t = d_100;
    }
  else
    {
      t = u_94;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_100;
    }
  return(t);
}
ATerm e_46 (ATerm t)
{
  ATerm n_100 = NULL;
  ATerm y_94 = t;
  int a_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_100 = ATgetArgument(t, 0);
          {
            ATerm b_95 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_95);
      t = n_100;
    }
  else
    {
      t = y_94;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_100;
    }
  return(t);
}
ATerm f_46 (ATerm t)
{
  ATerm q_100 = NULL,k_23 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  q_100 = t;
  t = term_u_91;
  s_13 = t;
  t = term_u_91;
  q_13 = t;
  t = s_13;
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_100);
  r_13 = t;
  t = SSL_table_get(q_13, r_13);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_23 = ATgetFirst((ATermList) t);
      {
        ATerm c_95 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_23;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm d_95 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_95) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_100);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_101 (ATerm o_96, ATerm p_96, ATerm q_96, ATerm t_96, ATerm u_96, ATerm v_96, ATerm w_96, ATerm t)
  {
    ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, u_96, term_f_95);
    {
      ATerm g_95 = t;
      if((PushChoice() == 0))
        {
          ATerm o_97 = NULL;
          if(match_cons(t, sym__2))
            {
              o_97 = ATgetArgument(t, 0);
              if((o_97 != ATgetArgument(t, 1)))
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
          t = g_95;
        }
      t = new_0_0(t);
      e_97 = t;
      t = t_96;
      t = dummify_0_0(t);
      f_97 = t;
      {
        ATerm h_95 = t;
        int i_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((t_96 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, e_97);
            ;
            LocalPopChoice(i_95);
          }
        else
          {
            t = h_95;
          }
        g_97 = t;
        t = f_97;
        t = free_vars_3_0(u_45, v_45, tboundin_3_0, t);
        t = map_1_0(y_45, t);
        j_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_96, v_96);
        t = free_vars_3_0(z_45, b_46, tboundin_3_0, t);
        t = filter_1_0(f_46, t);
        k_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_97, j_97);
        t = diff_0_0(t);
        l_97 = t;
        t = new_0_0(t);
        m_97 = t;
        t = o_96;
        t = n_0(t);
        n_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_97, (ATerm) ATmakeAppl(sym_Op_2, term_j_95, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_k_95, (ATerm) ATinsert(CheckATermList(l_97), (ATerm) ATmakeAppl(sym_Str_1, m_97)))), f_97)))), (ATerm) ATmakeAppl(sym_RDefT_4, o_96, p_96, q_96, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_97), t_96), u_96, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_96)))), g_97), (ATerm) ATmakeAppl(sym_Op_2, term_k_95, (ATerm) ATinsert(CheckATermList(l_97), (ATerm) ATmakeAppl(sym_Str_1, m_97)))), v_96))));
      }
    }
    return(t);
  }
  ATerm r_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,d_101 = NULL,e_101 = NULL,g_101 = NULL;
  v_100 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      w_100 = ATgetArgument(t, 0);
      x_100 = ATgetArgument(t, 1);
      y_100 = ATgetArgument(t, 2);
      z_100 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = z_100;
  if(match_cons(t, sym_Rule_3))
    {
      d_101 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
      g_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_101;
  if(match_cons(t, sym_Op_2))
    {
      r_100 = ATgetArgument(t, 0);
      u_100 = ATgetArgument(t, 1);
      t = u_100;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_100;
          if(match_string(t, "Undefined"))
            {
              ATerm n_95 = t;
              int o_95 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
                  t = v_100;
                  t = new_0_0(t);
                  e_24 = t;
                  t = d_101;
                  t = dummify_0_0(t);
                  f_24 = t;
                  {
                    ATerm p_95 = t;
                    int q_95 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if((d_101 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_24);
                        ;
                        LocalPopChoice(q_95);
                      }
                    else
                      {
                        t = p_95;
                      }
                    g_24 = t;
                    t = w_100;
                    t = n_0(t);
                    h_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, h_24, (ATerm) ATmakeAppl(sym_Op_2, term_j_95, (ATerm) ATinsert(ATinsert(ATempty, term_f_95), f_24)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_100, x_100, y_100, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_24), d_101), term_f_95, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_100)))), g_24), term_f_95), (ATerm) ATmakeAppl(sym_Seq_2, g_101, term_e_71)))));
                  }
                  ;
                  LocalPopChoice(o_95);
                }
              else
                {
                  t = n_95;
                  t = i_101(w_100, x_100, y_100, d_101, e_101, g_101, v_100, t);
                }
            }
          else
            {
              t = i_101(w_100, x_100, y_100, d_101, e_101, g_101, v_100, t);
            }
        }
      else
        {
          t = r_100;
          t = i_101(w_100, x_100, y_100, d_101, e_101, g_101, v_100, t);
        }
    }
  else
    {
      t = i_101(w_100, x_100, y_100, d_101, e_101, g_101, v_100, t);
    }
  return(t);
}
ATerm g_46 (ATerm t)
{
  t = SplitDynamicRule_1_0(h_46, t);
  return(t);
}
ATerm h_46 (ATerm t)
{
  ATerm x_101 = NULL;
  x_101 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, x_101))));
  return(t);
}
ATerm l_46 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm n_46 (ATerm t)
{
  ATerm y_101 = NULL,b_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_101 = ATgetFirst((ATermList) t);
      b_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_101, b_102);
  return(t);
}
ATerm q_46 (ATerm t)
{
  ATerm c_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_95 = ATgetArgument(t, 0);
      if(match_cons(t_95, sym__2))
        {
          c_102 = ATgetArgument(t_95, 0);
          e_102 = ATgetArgument(t_95, 1);
        }
      else
        _fail(t);
      {
        ATerm u_95 = ATgetArgument(t, 1);
        if(match_cons(u_95, sym__2))
          {
            d_102 = ATgetArgument(u_95, 0);
            f_102 = ATgetArgument(u_95, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_102), c_102), (ATerm) ATinsert(CheckATermList(f_102), e_102));
  return(t);
}
ATerm s_46 (ATerm t)
{
  t = SplitDynamicRule_1_0(v_46, t);
  return(t);
}
ATerm v_46 (ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_95, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_102))));
  return(t);
}
ATerm y_46 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_61;
  return(t);
}
ATerm z_46 (ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_102 = ATgetFirst((ATermList) t);
      l_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_102, l_102);
  return(t);
}
ATerm a_47 (ATerm t)
{
  ATerm m_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_95 = ATgetArgument(t, 0);
      if(match_cons(x_95, sym__2))
        {
          m_102 = ATgetArgument(x_95, 0);
          p_102 = ATgetArgument(x_95, 1);
        }
      else
        _fail(t);
      {
        ATerm y_95 = ATgetArgument(t, 1);
        if(match_cons(y_95, sym__2))
          {
            o_102 = ATgetArgument(y_95, 0);
            q_102 = ATgetArgument(y_95, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_102), m_102), (ATerm) ATinsert(CheckATermList(q_102), p_102));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm n_101 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      n_101 = ATgetArgument(t, 0);
      t = n_101;
      t = map_1_0(g_46, t);
      t = genzip_4_0(l_46, n_46, q_46, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          n_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_101;
      t = map_1_0(s_46, t);
      t = genzip_4_0(y_46, z_46, a_47, _id, t);
    }
  return(t);
}
ATerm b_47 (ATerm t)
{
  t = term_u_91;
  return(t);
}
ATerm d_47 (ATerm t)
{
  ATerm g_103 = NULL;
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_103), term_a_96);
  t = assert_1_0(e_47, t);
  t = g_103;
  return(t);
}
ATerm e_47 (ATerm t)
{
  t = term_u_91;
  return(t);
}
ATerm split_under_scope_1_0 (ATerm y_140 (ATerm), ATerm t)
{
  ATerm r_102 = NULL,v_102 = NULL,f_103 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      r_102 = ATgetArgument(t, 0);
      v_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_47 (ATerm t)
    {
      t = r_102;
      t = map_1_0(d_47, t);
      t = v_102;
      t = y_140(t);
      if(((f_103 != NULL) && (f_103 != t)))
        _fail(t);
      else
        f_103 = t;
      return(t);
    }
    t = scope_2_0(b_47, c_47, t);
    t = (ATerm) ATmakeAppl(sym_Scope_2, r_102, not_null(f_103));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm h_103 (ATerm t)
  {
    ATerm b_96 = t;
    int c_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_114(t);
        ;
        LocalPopChoice(c_96);
      }
    else
      {
        t = b_96;
        t = SRTS_one(h_103, t);
      }
    return(t);
  }
  t = h_103(t);
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm w_140 (ATerm), ATerm t)
{
  ATerm i_103 (ATerm t)
  {
    ATerm f_47 (ATerm t)
    {
      ATerm d_96 = t;
      int e_96 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_140(t);
          ;
          LocalPopChoice(e_96);
        }
      else
        {
          t = d_96;
          t = split_under_scope_1_0(i_103, t);
        }
      return(t);
    }
    t = oncetd_1_0(f_47, t);
    return(t);
  }
  t = i_103(t);
  return(t);
}
ATerm g_47 (ATerm t)
{
  t = term_u_91;
  return(t);
}
ATerm i_47 (ATerm t)
{
  ATerm c_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_104);
  return(t);
}
ATerm j_47 (ATerm t)
{
  ATerm f_96 = t;
  int g_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_96);
    }
  else
    {
      t = f_96;
      {
        ATerm g_104 = NULL,i_104 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_104 = ATgetArgument(t, 0);
            t = g_104;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm h_96 = t;
            int i_96 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm j_96 = ATgetArgument(t, 0);
                    ATerm k_96 = ATgetArgument(t, 1);
                    i_104 = ATgetArgument(t, 2);
                    {
                      ATerm l_96 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(i_96);
                t = i_104;
                t = map_1_0(k_47, t);
              }
            else
              {
                t = h_96;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm m_96 = ATgetArgument(t, 0);
                    ATerm n_96 = ATgetArgument(t, 1);
                    i_104 = ATgetArgument(t, 2);
                    {
                      ATerm r_96 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = i_104;
                t = map_1_0(l_47, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_47 (ATerm t)
{
  ATerm o_104 = NULL;
  ATerm s_96 = t;
  int x_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_104 = ATgetArgument(t, 0);
          {
            ATerm y_96 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_96);
      t = o_104;
    }
  else
    {
      t = s_96;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_104;
    }
  return(t);
}
ATerm l_47 (ATerm t)
{
  ATerm u_104 = NULL;
  ATerm z_96 = t;
  int a_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_104 = ATgetArgument(t, 0);
          {
            ATerm b_97 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_97);
      t = u_104;
    }
  else
    {
      t = z_96;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_104;
    }
  return(t);
}
ATerm m_47 (ATerm t)
{
  ATerm x_104 = NULL;
  x_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_104), term_a_96);
  t = assert_1_0(n_47, t);
  t = x_104;
  return(t);
}
ATerm n_47 (ATerm t)
{
  t = term_u_91;
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  ATerm t_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_103 = ATgetFirst((ATermList) t);
      v_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm h_47 (ATerm t)
    {
      t = t_103;
      t = free_vars_3_0(i_47, j_47, tboundin_3_0, t);
      t = map_1_0(m_47, t);
      t = t_103;
      {
        ATerm o_47 (ATerm t)
        {
          t = split_dynamic_rules_0_0(t);
          if(match_cons(t, sym__2))
            {
              if(((x_103 != NULL) && (x_103 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_103 = ATgetArgument(t, 0);
              if(((w_103 != NULL) && (w_103 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                w_103 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_103));
          return(t);
        }
        t = split_dynamic_rule_1_0(o_47, t);
        if(((y_103 != NULL) && (y_103 != t)))
          _fail(t);
        else
          y_103 = t;
      }
      return(t);
    }
    t = scope_2_0(g_47, h_47, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_103)), not_null(y_103)), v_103);
    t = conc_0_0(t);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm r_120 (ATerm), ATerm t)
{
  ATerm y_104 (ATerm t)
  {
    t = r_120(t);
    {
      ATerm c_97 = t;
      int d_97 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(d_97);
        }
      else
        {
          t = c_97;
          t = Cons_2_0(_id, y_104, t);
        }
    }
    return(t);
  }
  t = y_104(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL,h_105 = NULL,p_105 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      h_105 = ATgetArgument(t, 0);
      p_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_105 = ATgetFirst((ATermList) t);
      c_105 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_i_97, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, c_105, p_105)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_105))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_105;
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL,u_13 = NULL,v_13 = NULL;
  x_105 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_105);
  u_105 = t;
  t = v_105;
  t = a_102(t);
  w_105 = t;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_105);
  u_13 = t;
  t = SSLsetAnnotations(u_13, u_105);
  return(t);
}
ATerm Scope_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL,x_13 = NULL,y_13 = NULL;
  f_106 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_106 = ATgetArgument(t, 0);
      c_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_106);
  a_106 = t;
  t = b_106;
  t = d_103(t);
  d_106 = t;
  t = c_106;
  t = e_103(t);
  e_106 = t;
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_106, e_106);
  x_13 = t;
  t = SSLsetAnnotations(x_13, a_106);
  return(t);
}
ATerm tboundin_3_0 (ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm t)
{
  ATerm p_97 = t;
  int r_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(a_142, y_141, t);
      ;
      LocalPopChoice(r_97);
    }
  else
    {
      t = p_97;
      {
        ATerm t_97 = t;
        int v_97 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(a_142, a_142, a_142, y_141, t);
            ;
            LocalPopChoice(v_97);
          }
        else
          {
            t = t_97;
            {
              ATerm w_97 = t;
              int x_97 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(a_142, a_142, a_142, y_141, t);
                  ;
                  LocalPopChoice(x_97);
                }
              else
                {
                  t = w_97;
                  t = DynamicRules_1_0(y_141, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_47 (ATerm t)
{
  ATerm l_106 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_106);
  return(t);
}
ATerm q_47 (ATerm t)
{
  ATerm y_97 = t;
  int z_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_97);
    }
  else
    {
      t = y_97;
      {
        ATerm n_106 = NULL,p_106 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_106 = ATgetArgument(t, 0);
            t = n_106;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm b_98 = t;
            int c_98 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm d_98 = ATgetArgument(t, 0);
                    ATerm e_98 = ATgetArgument(t, 1);
                    p_106 = ATgetArgument(t, 2);
                    {
                      ATerm f_98 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(c_98);
                t = p_106;
                t = map_1_0(r_47, t);
              }
            else
              {
                t = b_98;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm g_98 = ATgetArgument(t, 0);
                    ATerm j_98 = ATgetArgument(t, 1);
                    p_106 = ATgetArgument(t, 2);
                    {
                      ATerm k_98 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = p_106;
                t = map_1_0(s_47, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_47 (ATerm t)
{
  ATerm v_106 = NULL;
  ATerm o_98 = t;
  int p_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_106 = ATgetArgument(t, 0);
          {
            ATerm r_98 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_98);
      t = v_106;
    }
  else
    {
      t = o_98;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_106;
    }
  return(t);
}
ATerm s_47 (ATerm t)
{
  ATerm c_107 = NULL;
  ATerm s_98 = t;
  int t_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_107 = ATgetArgument(t, 0);
          {
            ATerm v_98 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_98);
      t = c_107;
    }
  else
    {
      t = s_98;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_107;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(p_47, q_47, tboundin_3_0, t);
  return(t);
}
ATerm t_47 (ATerm t)
{
  ATerm s_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_107);
  return(t);
}
ATerm u_47 (ATerm t)
{
  ATerm w_98 = t;
  int x_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_98);
    }
  else
    {
      t = w_98;
      {
        ATerm u_107 = NULL,w_107 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_107 = ATgetArgument(t, 0);
            t = u_107;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm y_98 = t;
            int b_99 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm d_99 = ATgetArgument(t, 0);
                    ATerm f_99 = ATgetArgument(t, 1);
                    w_107 = ATgetArgument(t, 2);
                    {
                      ATerm g_99 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(b_99);
                t = w_107;
                t = map_1_0(v_47, t);
              }
            else
              {
                t = y_98;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm h_99 = ATgetArgument(t, 0);
                    ATerm l_99 = ATgetArgument(t, 1);
                    w_107 = ATgetArgument(t, 2);
                    {
                      ATerm m_99 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = w_107;
                t = map_1_0(w_47, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_47 (ATerm t)
{
  ATerm c_108 = NULL;
  ATerm o_99 = t;
  int r_99 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_108 = ATgetArgument(t, 0);
          {
            ATerm s_99 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_99);
      t = c_108;
    }
  else
    {
      t = o_99;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_108;
    }
  return(t);
}
ATerm w_47 (ATerm t)
{
  ATerm i_108 = NULL;
  ATerm v_99 = t;
  int w_99 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_108 = ATgetArgument(t, 0);
          {
            ATerm c_100 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_99);
      t = i_108;
    }
  else
    {
      t = v_99;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_108;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm k_107 = NULL,o_107 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      o_107 = ATgetArgument(t, 0);
      t = o_107;
      if(match_cons(t, sym_Rule_3))
        {
          k_107 = ATgetArgument(t, 0);
          {
            ATerm e_100 = ATgetArgument(t, 1);
          }
          {
            ATerm f_100 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_107;
      t = free_vars_3_0(t_47, u_47, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          o_107 = ATgetArgument(t, 0);
          {
            ATerm g_100 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_107;
    }
  return(t);
}
ATerm union_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm m_108 = NULL,n_108 = NULL;
  if(match_cons(t, sym__2))
    {
      m_108 = ATgetArgument(t, 0);
      n_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_108;
  {
    ATerm o_108 (ATerm t)
    {
      ATerm h_100 = t;
      int i_100 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_108;
          ;
          LocalPopChoice(i_100);
        }
      else
        {
          t = h_100;
          {
            ATerm m_100 = t;
            int o_100 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_24 = NULL,w_24 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_24 = ATgetFirst((ATermList) t);
                    w_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_108;
                {
                  ATerm x_47 (ATerm t)
                  {
                    ATerm x_24 = NULL;
                    x_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_24, x_24);
                    t = m_123(t);
                    return(t);
                  }
                  t = fetch_1_0(x_47, t);
                  t = w_24;
                  t = o_108(t);
                }
                ;
                LocalPopChoice(o_100);
              }
            else
              {
                t = m_100;
                t = Cons_2_0(_id, o_108, t);
              }
          }
        }
      return(t);
    }
    t = o_108(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm u_108 = NULL,v_108 = NULL;
  if(match_cons(t, sym__2))
    {
      u_108 = ATgetArgument(t, 0);
      v_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_108;
  {
    ATerm w_108 (ATerm t)
    {
      ATerm p_100 = t;
      int s_100 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_100);
        }
      else
        {
          t = p_100;
          {
            ATerm t_100 = t;
            int f_101 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_25 = NULL,f_25 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_25 = ATgetFirst((ATermList) t);
                    f_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_108;
                {
                  ATerm y_47 (ATerm t)
                  {
                    ATerm g_25 = NULL;
                    g_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_25, g_25);
                    t = h_123(t);
                    return(t);
                  }
                  t = fetch_1_0(y_47, t);
                  t = f_25;
                  t = w_108(t);
                }
                ;
                LocalPopChoice(f_101);
              }
            else
              {
                t = t_100;
                t = Cons_2_0(_id, w_108, t);
              }
          }
        }
      return(t);
    }
    t = w_108(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm t)
{
  ATerm x_108 (ATerm t)
  {
    ATerm h_101 = t;
    int j_101 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_121(t);
        ;
        LocalPopChoice(j_101);
      }
    else
      {
        t = h_101;
        t = m_121(t);
        t = _2_0(o_121, x_108, t);
        t = n_121(t);
      }
    return(t);
  }
  t = x_108(t);
  return(t);
}
ATerm z_47 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_101 = ATgetArgument(t, 0);
      if(((ATgetType(k_101) != AT_LIST) || !(ATisEmpty(k_101))))
        _fail(t);
      {
        ATerm l_101 = ATgetArgument(t, 1);
        if(((ATgetType(l_101) != AT_LIST) || !(ATisEmpty(l_101))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_48 (ATerm t)
{
  ATerm g_109 = NULL,i_109 = NULL,k_109 = NULL,m_109 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_101 = ATgetArgument(t, 0);
      if(((ATgetType(m_101) == AT_LIST) && !(ATisEmpty(m_101))))
        {
          g_109 = ATgetFirst((ATermList) m_101);
          k_109 = (ATerm) ATgetNext((ATermList) m_101);
        }
      else
        _fail(t);
      {
        ATerm v_101 = ATgetArgument(t, 1);
        if(((ATgetType(v_101) == AT_LIST) && !(ATisEmpty(v_101))))
          {
            i_109 = ATgetFirst((ATermList) v_101);
            m_109 = (ATerm) ATgetNext((ATermList) v_101);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_109, i_109), (ATerm) ATmakeAppl(sym__2, k_109, m_109));
  return(t);
}
ATerm b_48 (ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL;
  if(match_cons(t, sym__2))
    {
      n_109 = ATgetArgument(t, 0);
      o_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_109), n_109);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_101 = ATgetFirst((ATermList) t);
      if(match_cons(w_101, sym__2))
        {
          y_108 = ATgetArgument(w_101, 0);
          z_108 = ATgetArgument(w_101, 1);
        }
      else
        _fail(t);
      a_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_108);
  if(match_cons(t, sym__2))
    {
      c_109 = ATgetArgument(t, 0);
      d_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_108);
  if(match_cons(t, sym__2))
    {
      if((c_109 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_109, d_109);
  t = genzip_4_0(z_47, a_48, b_48, _id, t);
  f_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_109, a_109);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t)
{
  ATerm q_109 (ATerm t)
  {
    ATerm z_101 = t;
    int g_102 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_113(t);
        ;
        LocalPopChoice(g_102);
      }
    else
      {
        t = z_101;
        t = j_113(t);
        t = q_109(t);
      }
    return(t);
  }
  t = q_109(t);
  return(t);
}
ATerm for_3_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm t)
{
  t = l_113(t);
  t = while_not_2_0(m_113, n_113, t);
  return(t);
}
ATerm c_48 (ATerm t)
{
  ATerm v_109 = NULL;
  v_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_109);
  return(t);
}
ATerm e_48 (ATerm t)
{
  t = _2_0(_id, g_48, t);
  return(t);
}
ATerm f_48 (ATerm t)
{
  ATerm n_102 = t;
  int w_102 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, h_48, t);
      ;
      LocalPopChoice(w_102);
    }
  else
    {
      t = n_102;
      {
        ATerm f_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL;
        if(match_cons(t, sym__2))
          {
            f_110 = ATgetArgument(t, 0);
            i_110 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_110;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_110 = ATgetFirst((ATermList) t);
            k_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_110), j_110), k_110);
      }
    }
  return(t);
}
ATerm g_48 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm h_48 (ATerm t)
{
  ATerm c_103 = t;
  int l_103 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_109 = NULL,y_109 = NULL,z_109 = NULL,b_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_109 = ATgetFirst((ATermList) t);
          b_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_109;
      if(match_cons(t, sym__2))
        {
          y_109 = ATgetArgument(t, 0);
          z_109 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_109;
      if((y_109 != t))
        {
          _fail(t);
        }
      t = b_110;
      ;
      LocalPopChoice(l_103);
    }
  else
    {
      t = c_103;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm i_48 (ATerm t)
{
  ATerm o_110 = NULL;
  if(match_cons(t, sym__2))
    {
      o_110 = ATgetArgument(t, 0);
      if((o_110 != ATgetArgument(t, 1)))
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
  ATerm m_103 = t;
  int s_103 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_48, e_48, f_48, t);
      ;
      LocalPopChoice(s_103);
    }
  else
    {
      t = m_103;
      t = diff_1_0(i_48, t);
    }
  return(t);
}
ATerm l_48 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_48 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_48 (ATerm t)
{
  t = union_1_0(o_48, t);
  return(t);
}
ATerm o_48 (ATerm t)
{
  ATerm a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      if((a_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_48 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_48 (ATerm t)
{
  t = union_1_0(w_48, t);
  return(t);
}
ATerm w_48 (ATerm t)
{
  ATerm i_26 = NULL;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      if((i_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_110 (ATerm t)
  {
    ATerm u_103 = t;
    int d_104 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_140(t);
        ;
        LocalPopChoice(d_104);
      }
    else
      {
        t = u_103;
        {
          ATerm e_104 = t;
          int f_104 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_110 = NULL,s_110 = NULL,q_25 = NULL,s_25 = NULL;
              p_110 = t;
              t = o_140(t);
              s_110 = t;
              t = p_110;
              {
                ATerm j_48 (ATerm t)
                {
                  ATerm m_25 = NULL;
                  t = v_110(t);
                  m_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_25, s_110);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_140(j_48, v_110, l_48, t);
                q_25 = t;
                t = SSL_explode_term(q_25);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_104 = ATgetArgument(t, 0);
                    s_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_25;
                t = foldr_3_0(m_48, n_48, _id, t);
              }
              ;
              LocalPopChoice(f_104);
            }
          else
            {
              t = e_104;
              {
                ATerm b_26 = NULL,c_26 = NULL;
                b_26 = t;
                t = SSL_explode_term(b_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_104 = ATgetArgument(t, 0);
                    c_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_26;
                t = foldr_3_0(q_48, r_48, v_110, t);
              }
            }
        }
      }
    return(t);
  }
  t = v_110(t);
  return(t);
}
ATerm x_48 (ATerm t)
{
  ATerm h_111 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_111);
  return(t);
}
ATerm z_48 (ATerm t)
{
  ATerm k_104 = t;
  int l_104 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_104);
    }
  else
    {
      t = k_104;
      {
        ATerm j_111 = NULL,l_111 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_111 = ATgetArgument(t, 0);
            t = j_111;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm m_104 = t;
            int n_104 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm p_104 = ATgetArgument(t, 0);
                    ATerm q_104 = ATgetArgument(t, 1);
                    l_111 = ATgetArgument(t, 2);
                    {
                      ATerm r_104 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(n_104);
                t = l_111;
                t = map_1_0(a_49, t);
              }
            else
              {
                t = m_104;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm s_104 = ATgetArgument(t, 0);
                    ATerm t_104 = ATgetArgument(t, 1);
                    l_111 = ATgetArgument(t, 2);
                    {
                      ATerm v_104 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = l_111;
                t = map_1_0(g_49, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_49 (ATerm t)
{
  ATerm u_111 = NULL;
  ATerm w_104 = t;
  int z_104 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_111 = ATgetArgument(t, 0);
          {
            ATerm a_105 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_104);
      t = u_111;
    }
  else
    {
      t = w_104;
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
ATerm g_49 (ATerm t)
{
  ATerm f_112 = NULL;
  ATerm g_105 = t;
  int q_105 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_112 = ATgetArgument(t, 0);
          {
            ATerm r_105 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_105);
      t = f_112;
    }
  else
    {
      t = g_105;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_112;
    }
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm s_105 = ATgetArgument(t, 0);
      if(match_cons(s_105, sym_Rule_3))
        {
          d_111 = ATgetArgument(s_105, 0);
          e_111 = ATgetArgument(s_105, 1);
          f_111 = ATgetArgument(s_105, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = d_111;
  t = free_vars_3_0(x_48, z_48, tboundin_3_0, t);
  g_111 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_111, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_111, e_111, f_111)));
  return(t);
}
ATerm bottomup_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  ATerm j_49 (ATerm t)
  {
    t = bottomup_1_0(s_113, t);
    return(t);
  }
  t = SRTS_all(j_49, t);
  t = s_113(t);
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL;
  t_113 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_105 = t;
    int y_105 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_27 = NULL,z_13 = NULL,a_14 = NULL;
        t = term_z_105;
        a_14 = t;
        t = term_z_105;
        z_13 = t;
        t = SSL_table_get(z_13, t_113);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_27 = ATgetFirst((ATermList) t);
            {
              ATerm g_106 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = e_27;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm h_106 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_106) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, u_113, (ATerm) ATempty);
        ;
        LocalPopChoice(y_105);
      }
    else
      {
        t = t_105;
        {
          ATerm r_27 = NULL,c_14 = NULL,d_14 = NULL;
          t = term_z_105;
          d_14 = t;
          t = term_z_105;
          c_14 = t;
          t = SSL_table_get(c_14, t_113);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_27 = ATgetFirst((ATermList) t);
              {
                ATerm i_106 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = r_27;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm j_106 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_106) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, u_113, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm x_113 (ATerm t)
  {
    ATerm k_106 = t;
    int m_106 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_115(t);
        ;
        LocalPopChoice(m_106);
      }
    else
      {
        t = k_106;
        t = SRTS_all(x_113, t);
      }
    return(t);
  }
  t = x_113(t);
  return(t);
}
ATerm assert_1_0 (ATerm g_130 (ATerm), ATerm t)
{
  ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_113 = ATgetArgument(t, 0);
      z_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_130(t);
  a_114 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_114, y_113, z_113);
  t = table_push_0_0(t);
  {
    ATerm o_106 = t;
    int q_106 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,f_14 = NULL;
        f_14 = t;
        t = term_r_106;
        e_14 = t;
        t = SSL_table_get(a_114, e_14);
        ;
        LocalPopChoice(q_106);
      }
    else
      {
        t = o_106;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_114 = ATgetFirst((ATermList) t);
        c_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    i_14 = t;
    t = term_r_106;
    g_14 = t;
    t = i_14;
    j_14 = t;
    t = (ATerm) ATinsert(CheckATermList(c_114), (ATerm) ATinsert(CheckATermList(b_114), y_113));
    h_14 = t;
    t = SSL_table_put(a_114, g_14, h_14);
    t = (ATerm) ATmakeAppl(sym__2, y_113, z_113);
  }
  return(t);
}
ATerm m_49 (ATerm t)
{
  t = term_z_105;
  return(t);
}
ATerm n_49 (ATerm t)
{
  t = term_z_105;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm g_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      j_114 = ATgetArgument(t, 0);
      k_114 = ATgetArgument(t, 1);
      g_114 = ATgetArgument(t, 2);
      t = k_114;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_114), term_t_106);
      t = assert_1_0(m_49, t);
      t = (ATerm) ATmakeAppl(sym_Overlay_3, j_114, (ATerm)ATempty, g_114);
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          j_114 = ATgetArgument(t, 0);
          k_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_114;
      if(match_cons(t, sym_ConstType_1))
        {
          l_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_114), term_w_106);
      t = assert_1_0(n_49, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, j_114, (ATerm) ATmakeAppl(sym_ConstType_1, l_114));
    }
  return(t);
}
ATerm Overlays_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm q_114 = NULL,r_114 = NULL,t_114 = NULL,u_114 = NULL,k_14 = NULL,l_14 = NULL;
  u_114 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      r_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_114);
  q_114 = t;
  t = r_114;
  t = n_98(t);
  t_114 = t;
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym_Overlays_1, t_114);
  k_14 = t;
  t = SSLsetAnnotations(k_14, q_114);
  return(t);
}
ATerm Constructors_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,m_14 = NULL,o_14 = NULL;
  c_115 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      a_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_115);
  z_114 = t;
  t = a_115;
  t = i_99(t);
  b_115 = t;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, b_115);
  m_14 = t;
  t = SSLsetAnnotations(m_14, z_114);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
  if(match_cons(t, sym__2))
    {
      l_115 = ATgetArgument(t, 0);
      m_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_115, m_115);
  {
    ATerm x_106 = t;
    int y_106 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_106 = ATgetArgument(t, 0);
            ATerm a_107 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_115, m_115);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_107 = ATgetFirst((ATermList) t);
            a_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_28;
        ;
        LocalPopChoice(y_106);
      }
    else
      {
        t = x_106;
        t = (ATerm) ATempty;
      }
    n_115 = t;
    t = SSL_table_put(l_115, m_115, n_115);
    t = (ATerm) ATmakeAppl(sym__2, l_115, m_115);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_130 (ATerm), ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,u_14 = NULL,v_14 = NULL;
  t_115 = t;
  t = d_130(t);
  u_115 = t;
  {
    ATerm d_107 = t;
    int e_107 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_14 = NULL,q_14 = NULL;
        q_14 = t;
        t = term_r_106;
        p_14 = t;
        t = SSL_table_get(u_115, p_14);
        ;
        LocalPopChoice(e_107);
      }
    else
      {
        t = d_107;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_115 = ATgetFirst((ATermList) t);
        v_115 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    v_14 = t;
    t = term_r_106;
    u_14 = t;
    t = SSL_table_put(u_115, u_14, v_115);
    t = w_115;
    {
      ATerm o_49 (ATerm t)
      {
        ATerm x_115 = NULL;
        x_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_115, x_115);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(o_49, t);
      t = t_115;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm t)
{
  ATerm f_107 = t;
  int g_107 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_112(t);
      t = n_112(t);
      ;
      LocalPopChoice(g_107);
    }
  else
    {
      t = f_107;
      t = n_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_130 (ATerm), ATerm t)
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL,y_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_116 = t;
  t = c_130(t);
  b_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_116, term_r_106);
  {
    ATerm h_107 = t;
    int i_107 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_14 = NULL,x_14 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_107 = ATgetArgument(t, 0);
            ATerm l_107 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        x_14 = t;
        t = term_r_106;
        w_14 = t;
        t = SSL_table_get(b_116, w_14);
        ;
        LocalPopChoice(i_107);
      }
    else
      {
        t = h_107;
        t = (ATerm) ATempty;
      }
    c_116 = t;
    b_15 = t;
    t = term_r_106;
    y_14 = t;
    t = b_15;
    c_15 = t;
    t = (ATerm) ATinsert(CheckATermList(c_116), (ATerm) ATempty);
    a_15 = t;
    t = SSL_table_put(b_116, y_14, a_15);
    t = a_116;
  }
  return(t);
}
ATerm scope_2_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(e_130, t);
  {
    ATerm p_49 (ATerm t)
    {
      t = end_scope_1_0(e_130, t);
      return(t);
    }
    t = restore_always_2_0(f_130, p_49, t);
  }
  return(t);
}
ATerm r_49 (ATerm t)
{
  t = term_z_105;
  return(t);
}
ATerm u_49 (ATerm t)
{
  t = Specification_1_0(b_50, t);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm b_50 (ATerm t)
{
  t = map_1_0(h_50, t);
  return(t);
}
ATerm h_50 (ATerm t)
{
  ATerm m_107 = t;
  int n_107 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_107 = t;
      int q_107 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Constructors_1_0(i_50, t);
          ;
          LocalPopChoice(q_107);
        }
      else
        {
          t = p_107;
          t = Overlays_1_0(s_50, t);
        }
      ;
      LocalPopChoice(n_107);
    }
  else
    {
      t = m_107;
    }
  return(t);
}
ATerm i_50 (ATerm t)
{
  t = map_1_0(r_50, t);
  return(t);
}
ATerm r_50 (ATerm t)
{
  ATerm r_107 = t;
  int t_107 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(t_107);
    }
  else
    {
      t = r_107;
    }
  return(t);
}
ATerm s_50 (ATerm t)
{
  t = map_1_0(t_50, t);
  return(t);
}
ATerm t_50 (ATerm t)
{
  ATerm v_107 = t;
  int x_107 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(x_107);
    }
  else
    {
      t = v_107;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(r_49, u_49, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_107 = t;
  int z_107 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_107);
    }
  else
    {
      t = y_107;
      {
        ATerm w_116 = NULL,x_116 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_116 = ATgetFirst((ATermList) t);
            x_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_116;
        {
          ATerm u_50 (ATerm t)
          {
            t = x_116;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_50, t);
        }
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm o_126 (ATerm), ATerm t)
{
  ATerm a_108 = t;
  int b_108 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_108);
    }
  else
    {
      t = a_108;
      {
        ATerm d_108 = t;
        int e_108 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_50 (ATerm t)
            {
              t = filter_1_0(o_126, t);
              return(t);
            }
            t = Cons_2_0(o_126, v_50, t);
            ;
            LocalPopChoice(e_108);
          }
        else
          {
            t = d_108;
            {
              ATerm m_116 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_108 = ATgetFirst((ATermList) t);
                  m_116 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_116;
              t = filter_1_0(o_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm b_117 (ATerm t)
  {
    ATerm g_108 = t;
    int h_108 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_117, t);
        ;
        LocalPopChoice(h_108);
      }
    else
      {
        t = g_108;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_119(t);
      }
    return(t);
  }
  t = b_117(t);
  return(t);
}
ATerm q_117 (ATerm h_117, ATerm t)
{
  ATerm j_117 = NULL;
  t = SSL_explode_term(h_117);
  if(match_cons(t, sym__2))
    {
      ATerm j_108 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_108) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_117;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
  m_117 = t;
  if(match_cons(t, sym__2))
    {
      k_117 = ATgetArgument(t, 0);
      l_117 = ATgetArgument(t, 1);
      {
        ATerm k_108 = t;
        int l_108 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_50 (ATerm t)
            {
              t = l_117;
              return(t);
            }
            t = k_117;
            t = at_end_1_0(w_50, t);
            ;
            LocalPopChoice(l_108);
          }
        else
          {
            t = k_108;
            t = q_117(m_117, t);
          }
      }
    }
  else
    {
      t = q_117(m_117, t);
    }
  return(t);
}
ATerm InsertBSpec_0_0 (ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL;
  if(match_cons(t, sym__2))
    {
      r_117 = ATgetArgument(t, 0);
      s_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_117);
  if(match_cons(t, sym__2))
    {
      t_117 = ATgetArgument(t, 0);
      {
        ATerm p_108 = ATgetArgument(t, 1);
        if(((ATgetType(p_108) == AT_LIST) && !(ATisEmpty(p_108))))
          {
            u_117 = ATgetFirst((ATermList) p_108);
            {
              ATerm q_108 = (ATerm) ATgetNext((ATermList) p_108);
              if(((ATgetType(q_108) != AT_LIST) || !(ATisEmpty(q_108))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_117;
  {
    ATerm x_50 (ATerm t)
    {
      ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL,d_15 = NULL,e_15 = NULL;
      v_117 = t;
      t = SSL_explode_term(v_117);
      if(match_cons(t, sym__2))
        {
          if((t_117 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm r_108 = ATgetArgument(t, 1);
            if(((ATgetType(r_108) == AT_LIST) && !(ATisEmpty(r_108))))
              {
                w_117 = ATgetFirst((ATermList) r_108);
                {
                  ATerm s_108 = (ATerm) ATgetNext((ATermList) r_108);
                  if(((ATgetType(s_108) != AT_LIST) || !(ATisEmpty(s_108))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, w_117, u_117);
      t = conc_0_0(t);
      x_117 = t;
      e_15 = t;
      t = (ATerm) ATinsert(ATempty, x_117);
      d_15 = t;
      t = SSL_mkterm(t_117, d_15);
      return(t);
    }
    t = fetch_1_0(x_50, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm t)
{
  ATerm t_108 = t;
  int b_109 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_125(t);
      ;
      LocalPopChoice(b_109);
    }
  else
    {
      t = t_108;
      {
        ATerm d_118 = NULL,f_118 = NULL,k_118 = NULL,o_118 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_118 = ATgetFirst((ATermList) t);
            f_118 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_118;
        t = p_125(t);
        k_118 = t;
        t = f_118;
        t = foldr_3_0(n_125, o_125, p_125, t);
        o_118 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_118, o_118);
        t = o_125(t);
      }
    }
  return(t);
}
ATerm y_50 (ATerm t)
{
  t = foldr_3_0(z_50, InsertBSpec_0_0, a_51, t);
  return(t);
}
ATerm z_50 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_109), term_j_109), term_h_109);
  return(t);
}
ATerm a_51 (ATerm t)
{
  ATerm p_109 = t;
  int r_109 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_109 = t;
      int t_109 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_28 = NULL,i_28 = NULL;
          if(match_cons(t, sym_Signature_1))
            {
              g_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_28;
          t = filter_1_0(b_51, t);
          t = concat_0_0(t);
          i_28 = t;
          t = (ATerm) ATmakeAppl(sym_Constructors_1, i_28);
          ;
          LocalPopChoice(t_109);
        }
      else
        {
          t = s_109;
          {
            ATerm s_118 = NULL;
            if(match_cons(t, sym_Rules_1))
              {
                s_118 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Strategies_1, s_118);
          }
        }
      ;
      LocalPopChoice(r_109);
    }
  else
    {
      t = p_109;
    }
  return(t);
}
ATerm b_51 (ATerm t)
{
  ATerm j_28 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_28;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  t = Specification_1_0(y_50, t);
  return(t);
}
ATerm c_51 (ATerm t)
{
  ATerm u_109 = t;
  int w_109 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(w_109);
    }
  else
    {
      t = u_109;
    }
  return(t);
}
ATerm e_51 (ATerm t)
{
  ATerm a_110 = t;
  int c_110 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_110 = t;
      int e_110 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(e_110);
        }
      else
        {
          t = d_110;
          {
            ATerm a_119 = NULL,c_119 = NULL;
            if(match_cons(t, sym_ScopeDefault_1))
              {
                a_119 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_119;
            t = free_vars_3_0(f_51, g_51, tboundin_3_0, t);
            c_119 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, c_119, a_119);
          }
        }
      ;
      LocalPopChoice(c_110);
    }
  else
    {
      t = a_110;
    }
  return(t);
}
ATerm f_51 (ATerm t)
{
  ATerm d_119 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_119);
  return(t);
}
ATerm g_51 (ATerm t)
{
  ATerm g_110 = t;
  int h_110 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_110);
    }
  else
    {
      t = g_110;
      {
        ATerm f_119 = NULL,k_119 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_119 = ATgetArgument(t, 0);
            t = f_119;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm l_110 = t;
            int m_110 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm n_110 = ATgetArgument(t, 0);
                    ATerm q_110 = ATgetArgument(t, 1);
                    k_119 = ATgetArgument(t, 2);
                    {
                      ATerm r_110 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_110);
                t = k_119;
                t = map_1_0(h_51, t);
              }
            else
              {
                t = l_110;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm t_110 = ATgetArgument(t, 0);
                    ATerm u_110 = ATgetArgument(t, 1);
                    k_119 = ATgetArgument(t, 2);
                    {
                      ATerm w_110 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = k_119;
                t = map_1_0(i_51, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_51 (ATerm t)
{
  ATerm q_119 = NULL;
  ATerm x_110 = t;
  int y_110 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_119 = ATgetArgument(t, 0);
          {
            ATerm b_111 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_110);
      t = q_119;
    }
  else
    {
      t = x_110;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_119;
    }
  return(t);
}
ATerm i_51 (ATerm t)
{
  ATerm a_120 = NULL;
  ATerm c_111 = t;
  int i_111 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_120 = ATgetArgument(t, 0);
          {
            ATerm k_111 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_111);
      t = a_120;
    }
  else
    {
      t = c_111;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_120;
    }
  return(t);
}
ATerm j_51 (ATerm t)
{
  t = Cons_2_0(_id, k_51, t);
  return(t);
}
ATerm k_51 (ATerm t)
{
  t = Cons_2_0(_id, l_51, t);
  return(t);
}
ATerm l_51 (ATerm t)
{
  t = Cons_2_0(m_51, n_51, t);
  return(t);
}
ATerm m_51 (ATerm t)
{
  t = Strategies_1_0(o_51, t);
  return(t);
}
ATerm n_51 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_51 (ATerm t)
{
  t = topdown_1_0(p_51, t);
  t = listtd_1_0(q_51, t);
  return(t);
}
ATerm p_51 (ATerm t)
{
  ATerm m_111 = t;
  int n_111 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(n_111);
    }
  else
    {
      t = m_111;
    }
  return(t);
}
ATerm q_51 (ATerm t)
{
  t = repeat_1_0(lift_dynamic_rule_0_0, t);
  return(t);
}
ATerm r_51 (ATerm t)
{
  ATerm o_111 = t;
  int p_111 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(p_111);
    }
  else
    {
      t = o_111;
    }
  return(t);
}
ATerm s_51 (ATerm t)
{
  t = fetch_1_0(w_51, t);
  return(t);
}
ATerm w_51 (ATerm t)
{
  ATerm d_120 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      d_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, d_120)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  t = topdown_1_0(c_51, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(e_51, t);
  t = Specification_1_0(j_51, t);
  t = topdown_1_0(r_51, t);
  t = Specification_1_0(s_51, t);
  return(t);
}
ATerm Op_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,f_15 = NULL,g_15 = NULL;
  n_120 = t;
  if(match_cons(t, sym_Op_2))
    {
      h_120 = ATgetArgument(t, 0);
      i_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_120);
  g_120 = t;
  t = h_120;
  t = p_99(t);
  l_120 = t;
  t = i_120;
  t = q_99(t);
  m_120 = t;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, l_120, m_120);
  f_15 = t;
  t = SSLsetAnnotations(f_15, g_120);
  return(t);
}
ATerm OpDecl_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm q_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL,w_120 = NULL,x_120 = NULL,k_15 = NULL,l_15 = NULL;
  x_120 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      t_120 = ATgetArgument(t, 0);
      u_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_120);
  q_120 = t;
  t = t_120;
  t = z_98(t);
  v_120 = t;
  t = u_120;
  t = a_99(t);
  w_120 = t;
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_120, w_120);
  k_15 = t;
  t = SSLsetAnnotations(k_15, q_120);
  return(t);
}
ATerm SVar_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,m_15 = NULL,n_15 = NULL;
  d_121 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_121);
  a_121 = t;
  t = b_121;
  t = s_102(t);
  c_121 = t;
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_121);
  m_15 = t;
  t = SSLsetAnnotations(m_15, a_121);
  return(t);
}
ATerm Var_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm g_121 = NULL,h_121 = NULL,i_121 = NULL,j_121 = NULL,o_15 = NULL,q_15 = NULL;
  j_121 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_121);
  g_121 = t;
  t = h_121;
  t = j_99(t);
  i_121 = t;
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_121);
  o_15 = t;
  t = SSLsetAnnotations(o_15, g_121);
  return(t);
}
ATerm VarDec_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,r_15 = NULL,s_15 = NULL;
  w_121 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_121 = ATgetArgument(t, 0);
      t_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_121);
  r_121 = t;
  t = s_121;
  t = e_105(t);
  u_121 = t;
  t = t_121;
  t = f_105(t);
  v_121 = t;
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_121, v_121);
  r_15 = t;
  t = SSLsetAnnotations(r_15, r_121);
  return(t);
}
ATerm RDef_3_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,v_15 = NULL,x_15 = NULL;
  g_122 = t;
  if(match_cons(t, sym_RDef_3))
    {
      a_122 = ATgetArgument(t, 0);
      b_122 = ATgetArgument(t, 1);
      c_122 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_122);
  z_121 = t;
  t = a_122;
  t = o_101(t);
  d_122 = t;
  t = b_122;
  t = p_101(t);
  e_122 = t;
  t = c_122;
  t = q_101(t);
  f_122 = t;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, d_122, e_122, f_122);
  v_15 = t;
  t = SSLsetAnnotations(v_15, z_121);
  return(t);
}
ATerm RDefT_4_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm t)
{
  ATerm j_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,z_15 = NULL,a_16 = NULL;
  t_122 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      l_122 = ATgetArgument(t, 0);
      m_122 = ATgetArgument(t, 1);
      n_122 = ATgetArgument(t, 2);
      o_122 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_122);
  j_122 = t;
  t = l_122;
  t = r_101(t);
  p_122 = t;
  t = m_122;
  t = s_101(t);
  q_122 = t;
  t = n_122;
  t = t_101(t);
  r_122 = t;
  t = o_122;
  t = u_101(t);
  s_122 = t;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, p_122, q_122, r_122, s_122);
  z_15 = t;
  t = SSLsetAnnotations(z_15, j_122);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm w_122 = NULL,x_122 = NULL,y_122 = NULL,z_122 = NULL,c_16 = NULL,e_16 = NULL;
  z_122 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_122);
  w_122 = t;
  t = x_122;
  t = d_105(t);
  y_122 = t;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_122);
  c_16 = t;
  t = SSLsetAnnotations(c_16, w_122);
  return(t);
}
ATerm x_51 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  t = SSL_explode_string(q_30);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(q_111) != AT_INT) || (ATgetInt((ATermInt) q_111) != 39)))
        _fail(t);
      r_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(r_30);
  return(t);
}
ATerm y_51 (ATerm t)
{
  ATerm c_31 = NULL,i_31 = NULL;
  c_31 = t;
  t = SSL_explode_string(c_31);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_111) != AT_INT) || (ATgetInt((ATermInt) r_111) != 39)))
        _fail(t);
      i_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(i_31);
  return(t);
}
ATerm e_52 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  t = SSL_explode_string(y_31);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_111) != AT_INT) || (ATgetInt((ATermInt) s_111) != 39)))
        _fail(t);
      z_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(z_31);
  return(t);
}
ATerm j_52 (ATerm t)
{
  ATerm q_32 = NULL,w_32 = NULL;
  q_32 = t;
  t = SSL_explode_string(q_32);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_111) != AT_INT) || (ATgetInt((ATermInt) t_111) != 39)))
        _fail(t);
      w_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(w_32);
  return(t);
}
ATerm k_52 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  b_33 = t;
  t = SSL_explode_string(b_33);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(v_111) != AT_INT) || (ATgetInt((ATermInt) v_111) != 39)))
        _fail(t);
      c_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(c_33);
  return(t);
}
ATerm l_52 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  f_33 = t;
  t = SSL_explode_string(f_33);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(w_111) != AT_INT) || (ATgetInt((ATermInt) w_111) != 39)))
        _fail(t);
      g_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(g_33);
  return(t);
}
ATerm m_52 (ATerm t)
{
  ATerm n_33 = NULL,q_33 = NULL;
  n_33 = t;
  t = SSL_explode_string(n_33);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(x_111) != AT_INT) || (ATgetInt((ATermInt) x_111) != 39)))
        _fail(t);
      q_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(q_33);
  return(t);
}
ATerm n_52 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  t = SSL_explode_string(z_33);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_111) != AT_INT) || (ATgetInt((ATermInt) y_111) != 39)))
        _fail(t);
      a_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(a_34);
  return(t);
}
ATerm u_52 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  t = SSL_explode_string(h_34);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_111 = ATgetFirst((ATermList) t);
      if(((ATgetType(z_111) != AT_INT) || (ATgetInt((ATermInt) z_111) != 39)))
        _fail(t);
      i_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(i_34);
  return(t);
}
ATerm v_52 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  a_35 = t;
  t = SSL_explode_string(a_35);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_112 = ATgetFirst((ATermList) t);
      if(((ATgetType(a_112) != AT_INT) || (ATgetInt((ATermInt) a_112) != 39)))
        _fail(t);
      b_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(b_35);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm b_112 = t;
  int c_112 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_124 = NULL,e_124 = NULL,g_124 = NULL,h_124 = NULL;
      b_124 = t;
      if(match_cons(t, sym_Real_1))
        {
          e_124 = ATgetArgument(t, 0);
          {
            ATerm s_28 = NULL;
            t = SSL_string_to_real(e_124);
            s_28 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, s_28);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              e_124 = ATgetArgument(t, 0);
              {
                ATerm y_28 = NULL;
                t = SSL_string_to_int(e_124);
                y_28 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, y_28);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  e_124 = ATgetArgument(t, 0);
                  g_124 = ATgetArgument(t, 1);
                  h_124 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSL_is_string(h_124);
              t = (ATerm) ATmakeAppl(sym_Con_3, e_124, g_124, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_124), (ATerm) ATempty));
            }
        }
      ;
      LocalPopChoice(c_112);
    }
  else
    {
      t = b_112;
      {
        ATerm d_112 = t;
        int e_112 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(x_51, t);
            ;
            LocalPopChoice(e_112);
          }
        else
          {
            t = d_112;
            {
              ATerm g_112 = t;
              int h_112 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(y_51, _id, _id, _id, t);
                  ;
                  LocalPopChoice(h_112);
                }
              else
                {
                  t = g_112;
                  {
                    ATerm i_112 = t;
                    int j_112 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = RDef_3_0(e_52, _id, _id, t);
                        ;
                        LocalPopChoice(j_112);
                      }
                    else
                      {
                        t = i_112;
                        {
                          ATerm k_112 = t;
                          int l_112 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SDefT_4_0(j_52, _id, _id, _id, t);
                              ;
                              LocalPopChoice(l_112);
                            }
                          else
                            {
                              t = k_112;
                              {
                                ATerm o_112 = t;
                                int p_112 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SDef_3_0(k_52, _id, _id, t);
                                    ;
                                    LocalPopChoice(p_112);
                                  }
                                else
                                  {
                                    t = o_112;
                                    {
                                      ATerm q_112 = t;
                                      int r_112 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = VarDec_2_0(l_52, _id, t);
                                          ;
                                          LocalPopChoice(r_112);
                                        }
                                      else
                                        {
                                          t = q_112;
                                          {
                                            ATerm s_112 = t;
                                            int u_112 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Var_1_0(m_52, t);
                                                ;
                                                LocalPopChoice(u_112);
                                              }
                                            else
                                              {
                                                t = s_112;
                                                {
                                                  ATerm v_112 = t;
                                                  int w_112 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = SVar_1_0(n_52, t);
                                                      ;
                                                      LocalPopChoice(w_112);
                                                    }
                                                  else
                                                    {
                                                      t = v_112;
                                                      {
                                                        ATerm x_112 = t;
                                                        int y_112 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = OpDecl_2_0(u_52, _id, t);
                                                            ;
                                                            LocalPopChoice(y_112);
                                                          }
                                                        else
                                                          {
                                                            t = x_112;
                                                            t = Op_2_0(v_52, _id, t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm w_52 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm j_120 (ATerm), ATerm t)
{
  ATerm o_124 (ATerm t)
  {
    ATerm z_112 = t;
    int a_113 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_52, t);
        t = j_120(t);
        ;
        LocalPopChoice(a_113);
      }
    else
      {
        t = z_112;
        t = Cons_2_0(_id, o_124, t);
      }
    return(t);
  }
  t = o_124(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm t_124 = NULL,u_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_124 = ATgetFirst((ATermList) t);
      u_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_124;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm b_113 = t;
      int c_113 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_124;
          ;
          LocalPopChoice(c_113);
        }
      else
        {
          t = b_113;
          t = u_124;
          t = last_0_0(t);
        }
    }
  else
    {
      t = u_124;
      t = last_0_0(t);
    }
  return(t);
}
ATerm x_52 (ATerm t)
{
  ATerm d_125 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_113 = ATgetFirst((ATermList) t);
      d_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_125;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL,c_125 = NULL;
  z_124 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_125 = ATgetFirst((ATermList) t);
      {
        ATerm e_113 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_125;
  t = m_128(t);
  t = z_124;
  t = last_0_0(t);
  t = m_128(t);
  t = z_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_113 = ATgetFirst((ATermList) t);
      c_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_125;
  t = at_last_1_0(x_52, t);
  return(t);
}
ATerm r_130 (ATerm g_126, ATerm h_126, ATerm t)
{
  t = g_126;
  {
    ATerm g_113 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_52, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_113;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_o_59, g_126);
  }
  return(t);
}
ATerm s_130 (ATerm j_126, ATerm k_126, ATerm t)
{
  t = j_126;
  {
    ATerm h_113 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_53, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_113;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_k_113, j_126);
  }
  return(t);
}
ATerm t_130 (ATerm m_126, ATerm n_126, ATerm p_126, ATerm t)
{
  ATerm s_126 = NULL;
  t = m_126;
  {
    ATerm o_113 = t;
    int p_113 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_35 = NULL;
        t = SSL_explode_string(m_126);
        t = unquote_chars_1_0(g_53, t);
        f_35 = t;
        t = SSL_implode_string(f_35);
        ;
        LocalPopChoice(p_113);
      }
    else
      {
        t = o_113;
      }
    s_126 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_126, (ATerm)ATempty, n_126);
  }
  return(t);
}
ATerm u_130 (ATerm t_126, ATerm u_126, ATerm t)
{
  ATerm w_126 = NULL;
  t = t_126;
  {
    ATerm q_113 = t;
    int v_113 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_35 = NULL;
        t = SSL_explode_string(t_126);
        t = unquote_chars_1_0(i_53, t);
        v_35 = t;
        t = SSL_implode_string(v_35);
        ;
        LocalPopChoice(v_113);
      }
    else
      {
        t = q_113;
      }
    w_126 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, w_126, (ATerm)ATempty, (ATerm) ATempty);
  }
  return(t);
}
ATerm y_52 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm f_53 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm g_53 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm i_53 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm j_53 (ATerm t)
{
  t = term_y_91;
  return(t);
}
ATerm o_53 (ATerm t)
{
  ATerm k_127 = NULL,j_36 = NULL,s_36 = NULL;
  k_127 = t;
  t = SSL_explode_term(k_127);
  if(match_cons(t, sym__2))
    {
      ATerm w_113 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_113) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_114 = ATgetArgument(t, 1);
        if(((ATgetType(d_114) == AT_LIST) && !(ATisEmpty(d_114))))
          {
            j_36 = ATgetFirst((ATermList) d_114);
            {
              ATerm e_114 = (ATerm) ATgetNext((ATermList) d_114);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(k_127);
  if(match_cons(t, sym__2))
    {
      ATerm f_114 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_114) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_114 = ATgetArgument(t, 1);
        if(((ATgetType(h_114) == AT_LIST) && !(ATisEmpty(h_114))))
          {
            ATerm i_114 = ATgetFirst((ATermList) h_114);
            ATerm m_114 = (ATerm) ATgetNext((ATermList) h_114);
            if(((ATgetType(m_114) == AT_LIST) && !(ATisEmpty(m_114))))
              {
                s_36 = ATgetFirst((ATermList) m_114);
                {
                  ATerm n_114 = (ATerm) ATgetNext((ATermList) m_114);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_114, (ATerm) ATinsert(ATinsert(ATempty, s_36), j_36));
  return(t);
}
ATerm q_53 (ATerm t)
{
  ATerm y_127 = NULL,z_127 = NULL;
  if(match_cons(t, sym__2))
    {
      y_127 = ATgetArgument(t, 0);
      z_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_114, (ATerm) ATinsert(ATinsert(ATempty, z_127), y_127));
  return(t);
}
ATerm u_53 (ATerm t)
{
  t = term_y_91;
  return(t);
}
ATerm v_53 (ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL;
  if(match_cons(t, sym__2))
    {
      b_128 = ATgetArgument(t, 0);
      c_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_114, (ATerm) ATinsert(ATinsert(ATempty, c_128), b_128));
  return(t);
}
ATerm c_54 (ATerm t)
{
  ATerm p_128 = NULL,q_128 = NULL;
  if(match_cons(t, sym__2))
    {
      p_128 = ATgetArgument(t, 0);
      q_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_114, (ATerm) ATinsert(ATinsert(ATempty, q_128), p_128));
  return(t);
}
ATerm e_54 (ATerm t)
{
  t = term_w_114;
  return(t);
}
ATerm k_54 (ATerm t)
{
  ATerm s_128 = NULL,t_128 = NULL;
  if(match_cons(t, sym__2))
    {
      s_128 = ATgetArgument(t, 0);
      t_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_114, (ATerm) ATinsert(ATinsert(ATempty, t_128), s_128));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL,z_126 = NULL,c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL;
  e_127 = t;
  if(match_cons(t, sym_Anno_2))
    {
      f_127 = ATgetArgument(t, 0);
      g_127 = ATgetArgument(t, 1);
      {
        ATerm j_127 = NULL;
        t = g_127;
        t = foldr_2_0(j_53, o_53, t);
        j_127 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, f_127, j_127);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          f_127 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, f_127, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              f_127 = ATgetArgument(t, 0);
              {
                ATerm a_37 = NULL;
                t = f_127;
                {
                  ATerm x_114 = t;
                  int y_114 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_d_115;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_e_115;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_f_115;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_g_115;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_h_115;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(y_114);
                    }
                  else
                    {
                      t = x_114;
                      {
                        ATerm g_37 = NULL;
                        t = SSL_explode_string(f_127);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm i_115 = ATgetFirst((ATermList) t);
                            if(((ATgetType(i_115) != AT_INT) || (ATgetInt((ATermInt) i_115) != 39)))
                              _fail(t);
                            {
                              ATerm k_115 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(k_115) == AT_LIST) && !(ATisEmpty(k_115))))
                                {
                                  g_37 = ATgetFirst((ATermList) k_115);
                                  {
                                    ATerm o_115 = (ATerm) ATgetNext((ATermList) k_115);
                                    if(((ATgetType(o_115) == AT_LIST) && !(ATisEmpty(o_115))))
                                      {
                                        ATerm p_115 = ATgetFirst((ATermList) o_115);
                                        if(((ATgetType(p_115) != AT_INT) || (ATgetInt((ATermInt) p_115) != 39)))
                                          _fail(t);
                                        {
                                          ATerm q_115 = (ATerm) ATgetNext((ATermList) o_115);
                                          if(((ATgetType(q_115) != AT_LIST) || !(ATisEmpty(q_115))))
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
                        t = g_37;
                      }
                    }
                  a_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, a_37);
                }
              }
            }
          else
            {
              ATerm r_115 = t;
              int s_115 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      f_127 = ATgetArgument(t, 0);
                      {
                        ATerm y_115 = ATgetArgument(t, 1);
                      }
                      d_127 = ATgetArgument(t, 2);
                      x_126 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_115);
                  t = (ATerm) ATmakeAppl(sym_Con_3, f_127, d_127, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_126), (ATerm) ATempty));
                }
              else
                {
                  t = r_115;
                  {
                    ATerm z_115 = t;
                    int e_116 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            f_127 = ATgetArgument(t, 0);
                            {
                              ATerm f_116 = ATgetArgument(t, 1);
                            }
                            d_127 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_116);
                        t = (ATerm) ATmakeAppl(sym_Con_3, f_127, d_127, term_i_116);
                      }
                    else
                      {
                        t = z_115;
                        if(match_cons(t, sym_Con1_2))
                          {
                            f_127 = ATgetArgument(t, 0);
                            g_127 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, f_127, g_127, term_i_116);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                f_127 = ATgetArgument(t, 0);
                                g_127 = ATgetArgument(t, 1);
                                {
                                  ATerm p_53 (ATerm t)
                                  {
                                    t = g_127;
                                    return(t);
                                  }
                                  t = f_127;
                                  t = foldr_2_0(p_53, q_53, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    f_127 = ATgetArgument(t, 0);
                                    t = f_127;
                                    t = foldr_2_0(u_53, v_53, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        f_127 = ATgetArgument(t, 0);
                                        t = f_127;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            y_126 = ATgetFirst((ATermList) t);
                                            z_126 = (ATerm) ATgetNext((ATermList) t);
                                            t = z_126;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm j_116 = t;
                                                int k_116 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = r_130(f_127, e_127, t);
                                                    ;
                                                    LocalPopChoice(k_116);
                                                  }
                                                else
                                                  {
                                                    t = j_116;
                                                    t = y_126;
                                                  }
                                              }
                                            else
                                              {
                                                t = r_130(f_127, e_127, t);
                                              }
                                          }
                                        else
                                          {
                                            t = r_130(f_127, e_127, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            f_127 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, f_127));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                f_127 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, f_127));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    f_127 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, f_127));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        f_127 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, f_127));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            f_127 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_127), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                f_127 = ATgetArgument(t, 0);
                                                                g_127 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_127), g_127);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    f_127 = ATgetArgument(t, 0);
                                                                    g_127 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm b_54 (ATerm t)
                                                                      {
                                                                        t = g_127;
                                                                        return(t);
                                                                      }
                                                                      t = f_127;
                                                                      t = foldr_2_0(b_54, c_54, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        f_127 = ATgetArgument(t, 0);
                                                                        t = f_127;
                                                                        t = foldr_2_0(e_54, k_54, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            f_127 = ATgetArgument(t, 0);
                                                                            g_127 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_k_113, (ATerm) ATinsert(CheckATermList(g_127), f_127));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                f_127 = ATgetArgument(t, 0);
                                                                                t = f_127;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    y_126 = ATgetFirst((ATermList) t);
                                                                                    z_126 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = z_126;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm l_116 = t;
                                                                                        int n_116 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = s_130(f_127, e_127, t);
                                                                                            ;
                                                                                            LocalPopChoice(n_116);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_116;
                                                                                            t = y_126;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_130(f_127, e_127, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_130(f_127, e_127, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_o_116;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        f_127 = ATgetArgument(t, 0);
                                                                                        g_127 = ATgetArgument(t, 1);
                                                                                        t = g_127;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            c_127 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_t_85, (ATerm) ATinsert(ATinsert(ATempty, c_127), f_127));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            f_127 = ATgetArgument(t, 0);
                                                                                            t = f_127;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                f_127 = ATgetArgument(t, 0);
                                                                                                g_127 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, f_127, g_127, term_z_61);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    f_127 = ATgetArgument(t, 0);
                                                                                                    g_127 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, f_127, g_127, term_z_61);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        f_127 = ATgetArgument(t, 0);
                                                                                                        g_127 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, f_127, (ATerm)ATempty, g_127);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            f_127 = ATgetArgument(t, 0);
                                                                                                            g_127 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, g_127, f_127);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                f_127 = ATgetArgument(t, 0);
                                                                                                                g_127 = ATgetArgument(t, 1);
                                                                                                                t = t_130(f_127, g_127, e_127, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    f_127 = ATgetArgument(t, 0);
                                                                                                                    t = u_130(f_127, e_127, t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        f_127 = ATgetArgument(t, 0);
                                                                                                                        g_127 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, f_127, g_127, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            f_127 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, f_127, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                f_127 = ATgetArgument(t, 0);
                                                                                                                                g_127 = ATgetArgument(t, 1);
                                                                                                                                d_127 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_127, g_127, (ATerm)ATempty, d_127);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    f_127 = ATgetArgument(t, 0);
                                                                                                                                    g_127 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, f_127, (ATerm)ATempty, (ATerm)ATempty, g_127);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        f_127 = ATgetArgument(t, 0);
                                                                                                                                        g_127 = ATgetArgument(t, 1);
                                                                                                                                        d_127 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, f_127, g_127, (ATerm)ATempty, d_127);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            f_127 = ATgetArgument(t, 0);
                                                                                                                                            g_127 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, f_127, (ATerm)ATempty, (ATerm)ATempty, g_127);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                f_127 = ATgetArgument(t, 0);
                                                                                                                                                g_127 = ATgetArgument(t, 1);
                                                                                                                                                d_127 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_127, g_127, (ATerm)ATempty, d_127);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    f_127 = ATgetArgument(t, 0);
                                                                                                                                                    g_127 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_127, (ATerm)ATempty, (ATerm)ATempty, g_127);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm p_116 = ATgetArgument(t, 0);
                                                                                                                                                        g_127 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, g_127);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm m_54 (ATerm t)
{
  ATerm y_130 = NULL,o_37 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  y_130 = t;
  t = dtime_0_0(t);
  o_37 = t;
  t = term_q_116;
  h_16 = t;
  t = term_b_59;
  f_16 = t;
  t = h_16;
  i_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_37), term_q_116);
  g_16 = t;
  t = SSL_printnl(f_16, g_16);
  t = y_130;
  return(t);
}
ATerm o_54 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm r_116 = t;
    int s_116 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(s_116);
      }
    else
      {
        t = r_116;
      }
  }
  return(t);
}
ATerm r_54 (ATerm t)
{
  ATerm z_130 = NULL,z_37 = NULL,j_16 = NULL,k_16 = NULL,o_16 = NULL,r_16 = NULL;
  z_130 = t;
  t = dtime_0_0(t);
  z_37 = t;
  t = term_t_116;
  o_16 = t;
  t = term_b_59;
  j_16 = t;
  t = o_16;
  r_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_37), term_t_116);
  k_16 = t;
  t = SSL_printnl(j_16, k_16);
  t = z_130;
  return(t);
}
ATerm s_54 (ATerm t)
{
  ATerm a_131 = NULL,e_38 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  a_131 = t;
  t = dtime_0_0(t);
  e_38 = t;
  t = term_u_116;
  v_16 = t;
  t = term_b_59;
  t_16 = t;
  t = v_16;
  w_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_38), term_u_116);
  u_16 = t;
  t = SSL_printnl(t_16, u_16);
  t = a_131;
  return(t);
}
ATerm t_54 (ATerm t)
{
  ATerm b_131 = NULL,o_38 = NULL,x_16 = NULL,y_16 = NULL,b_17 = NULL,d_17 = NULL;
  b_131 = t;
  t = dtime_0_0(t);
  o_38 = t;
  t = term_v_116;
  b_17 = t;
  t = term_b_59;
  x_16 = t;
  t = b_17;
  d_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_38), term_v_116);
  y_16 = t;
  t = SSL_printnl(x_16, y_16);
  t = b_131;
  return(t);
}
ATerm y_54 (ATerm t)
{
  ATerm c_131 = NULL,v_38 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  c_131 = t;
  t = dtime_0_0(t);
  v_38 = t;
  t = term_y_116;
  g_17 = t;
  t = term_b_59;
  e_17 = t;
  t = g_17;
  h_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_38), term_y_116);
  f_17 = t;
  t = SSL_printnl(e_17, f_17);
  t = c_131;
  return(t);
}
ATerm z_54 (ATerm t)
{
  ATerm f_131 = NULL,a_39 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  f_131 = t;
  t = dtime_0_0(t);
  a_39 = t;
  t = term_z_116;
  k_17 = t;
  t = term_b_59;
  i_17 = t;
  t = k_17;
  l_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_39), term_z_116);
  j_17 = t;
  t = SSL_printnl(i_17, j_17);
  t = f_131;
  return(t);
}
ATerm a_55 (ATerm t)
{
  ATerm g_131 = NULL,d_39 = NULL,m_17 = NULL,n_17 = NULL,q_17 = NULL,r_17 = NULL;
  g_131 = t;
  t = dtime_0_0(t);
  d_39 = t;
  t = term_a_117;
  q_17 = t;
  t = term_b_59;
  m_17 = t;
  t = q_17;
  r_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_39), term_a_117);
  n_17 = t;
  t = SSL_printnl(m_17, n_17);
  t = g_131;
  return(t);
}
ATerm d_55 (ATerm t)
{
  ATerm c_117 = t;
  int d_117 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_117 = t;
      int f_117 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          ;
          LocalPopChoice(f_117);
        }
      else
        {
          t = e_117;
          t = desugarRule_0_0(t);
        }
      ;
      LocalPopChoice(d_117);
    }
  else
    {
      t = c_117;
    }
  t = repeat_1_0(f_55, t);
  return(t);
}
ATerm f_55 (ATerm t)
{
  ATerm g_117 = t;
  int i_117 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_117 = t;
      int o_117 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(o_117);
        }
      else
        {
          t = n_117;
          {
            ATerm p_117 = t;
            int y_117 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = ListMatch_0_0(t);
                ;
                LocalPopChoice(y_117);
              }
            else
              {
                t = p_117;
                t = ListBuild_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(i_117);
    }
  else
    {
      t = g_117;
      {
        ATerm i_131 = NULL,j_131 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            i_131 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_131;
        if(match_cons(t, sym_ListVar_1))
          {
            j_131 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_131);
      }
    }
  return(t);
}
ATerm h_55 (ATerm t)
{
  ATerm l_131 = NULL,g_39 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  l_131 = t;
  t = dtime_0_0(t);
  g_39 = t;
  t = term_z_117;
  u_17 = t;
  t = term_b_59;
  s_17 = t;
  t = u_17;
  v_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_39), term_z_117);
  t_17 = t;
  t = SSL_printnl(s_17, t_17);
  t = l_131;
  return(t);
}
ATerm i_55 (ATerm t)
{
  ATerm m_131 = NULL,j_39 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  m_131 = t;
  t = dtime_0_0(t);
  j_39 = t;
  t = term_a_118;
  y_17 = t;
  t = term_b_59;
  w_17 = t;
  t = y_17;
  z_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_39), term_a_118);
  x_17 = t;
  t = SSL_printnl(w_17, x_17);
  t = m_131;
  return(t);
}
ATerm k_55 (ATerm t)
{
  t = Cons_2_0(_id, l_55, t);
  return(t);
}
ATerm l_55 (ATerm t)
{
  t = Cons_2_0(m_55, n_55, t);
  return(t);
}
ATerm m_55 (ATerm t)
{
  t = Strategies_1_0(o_55, t);
  return(t);
}
ATerm n_55 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_55 (ATerm t)
{
  t = map_1_0(p_55, t);
  return(t);
}
ATerm p_55 (ATerm t)
{
  ATerm b_118 = t;
  int c_118 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(_id, _id, desugar_0_0, t);
      ;
      LocalPopChoice(c_118);
    }
  else
    {
      t = b_118;
      {
        ATerm e_118 = t;
        int g_118 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(_id, _id, _id, desugar_0_0, t);
            ;
            LocalPopChoice(g_118);
          }
        else
          {
            t = e_118;
            {
              ATerm m_39 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
              m_39 = t;
              t = term_i_118;
              c_18 = t;
              t = term_b_59;
              a_18 = t;
              t = c_18;
              d_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_39), term_i_118);
              b_18 = t;
              t = SSL_printnl(a_18, b_18);
              t = m_39;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm x_130 = NULL;
  t = if_verbose3_1_0(m_54, t);
  t = topdown_1_0(o_54, t);
  t = if_verbose3_1_0(r_54, t);
  t = normalize_spec_0_0(t);
  t = if_verbose3_1_0(s_54, t);
  x_130 = t;
  t = spec_use_def_0_0(t);
  t = x_130;
  t = if_verbose3_1_0(t_54, t);
  t = ExpandOverlays_0_0(t);
  t = if_verbose3_1_0(y_54, t);
  t = CheckConstructors_0_0(t);
  t = if_verbose3_1_0(z_54, t);
  t = RulesToSdefs_0_0(t);
  t = if_verbose3_1_0(a_55, t);
  t = topdown_1_0(d_55, t);
  t = if_verbose3_1_0(h_55, t);
  t = strename_0_0(t);
  t = if_verbose3_1_0(i_55, t);
  t = Specification_1_0(k_55, t);
  return(t);
}
ATerm _2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  ATerm n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL,e_18 = NULL,f_18 = NULL;
  s_131 = t;
  if(match_cons(t, sym__2))
    {
      o_131 = ATgetArgument(t, 0);
      p_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_131);
  n_131 = t;
  t = o_131;
  t = s_93(t);
  q_131 = t;
  t = p_131;
  t = t_93(t);
  r_131 = t;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_131, r_131);
  e_18 = t;
  t = SSLsetAnnotations(e_18, n_131);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_131 (ATerm), ATerm t)
{
  ATerm v_131 = NULL,w_131 = NULL,a_132 = NULL;
  if(match_cons(t, sym__2))
    {
      v_131 = ATgetArgument(t, 0);
      w_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_131, term_j_118);
  t = open_stream_0_0(t);
  a_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_132, w_131);
  t = z_131(t);
  t = fclose_0_0(t);
  t = w_131;
  return(t);
}
ATerm v_55 (ATerm t)
{
  t = fetch_1_0(x_55, t);
  return(t);
}
ATerm w_55 (ATerm t)
{
  t = WriteToFile_1_0(z_55, t);
  return(t);
}
ATerm x_55 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm z_55 (ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_118 = ATgetArgument(t, 0);
      if(match_cons(l_118, sym_Stream_1))
        {
          d_132 = ATgetArgument(l_118, 0);
        }
      else
        _fail(t);
      e_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_132, e_132);
  f_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_132);
  return(t);
}
ATerm a_56 (ATerm t)
{
  t = WriteToFile_1_0(b_56, t);
  return(t);
}
ATerm b_56 (ATerm t)
{
  ATerm g_132 = NULL,h_132 = NULL,i_132 = NULL,j_132 = NULL,g_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_118 = ATgetArgument(t, 0);
      if(match_cons(m_118, sym_Stream_1))
        {
          g_132 = ATgetArgument(m_118, 0);
        }
      else
        _fail(t);
      h_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(g_132, h_132);
  i_132 = t;
  h_18 = t;
  t = term_g_115;
  g_18 = t;
  t = SSL_fputc(g_18, i_132);
  j_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_132);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_132 = NULL,c_132 = NULL;
  b_132 = t;
  {
    ATerm q_55 (ATerm t)
    {
      ATerm n_118 = t;
      int p_118 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_55 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_132 != NULL) && (c_132 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_132 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_55, t);
          ;
          LocalPopChoice(p_118);
        }
      else
        {
          t = n_118;
          t = term_q_118;
          if(((c_132 != NULL) && (c_132 != t)))
            _fail(t);
          else
            c_132 = t;
        }
      return(t);
    }
    t = _2_0(q_55, _id, t);
    t = b_132;
    {
      ATerm s_55 (ATerm t)
      {
        ATerm t_39 = NULL;
        t_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_132), t_39);
        return(t);
      }
      t = _2_0(_id, s_55, t);
      {
        ATerm r_118 = t;
        int t_118 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(v_55, w_55, t);
            ;
            LocalPopChoice(t_118);
          }
        else
          {
            t = r_118;
            t = _2_0(_id, a_56, t);
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
ATerm apply_strategy_1_0 (ATerm b_135 (ATerm), ATerm t)
{
  ATerm k_132 = NULL,l_132 = NULL,m_132 = NULL,n_132 = NULL,o_132 = NULL;
  k_132 = t;
  t = dtime_0_0(t);
  t = k_132;
  t = b_135(t);
  l_132 = t;
  t = dtime_0_0(t);
  m_132 = t;
  t = l_132;
  if(match_cons(t, sym__2))
    {
      n_132 = ATgetArgument(t, 0);
      o_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_132), (ATerm) ATmakeAppl(sym_Runtime_1, m_132)), o_132);
  return(t);
}
ATerm c_133 (ATerm w_132, ATerm t)
{
  t = SSL_fclose(w_132);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_132 = NULL,a_133 = NULL;
  a_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_132 = ATgetArgument(t, 0);
      {
        ATerm u_118 = t;
        int v_118 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_132);
            ;
            LocalPopChoice(v_118);
          }
        else
          {
            t = u_118;
            t = c_133(a_133, t);
          }
      }
    }
  else
    {
      t = c_133(a_133, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_133 = NULL;
  t = SSL_stdin_stream();
  d_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_133);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_133 = NULL;
  t = SSL_stdout_stream();
  e_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_133);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_133 = NULL;
  t = SSL_stderr_stream();
  f_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_133);
  return(t);
}
ATerm c_56 (ATerm t)
{
  ATerm s_133 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      s_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_133;
  return(t);
}
ATerm d_56 (ATerm t)
{
  ATerm w_133 = NULL;
  w_133 = t;
  t = SSL_is_string(w_133);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_118 = ATgetArgument(t, 0);
      ATerm x_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_118 = t;
    int z_118 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL,i_40 = NULL;
        h_40 = t;
        t = SSL_explode_term(h_40);
        if(match_cons(t, sym__2))
          {
            ATerm b_119 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_119) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_119 = ATgetArgument(t, 1);
              if(((ATgetType(e_119) == AT_LIST) && !(ATisEmpty(e_119))))
                {
                  i_40 = ATgetFirst((ATermList) e_119);
                  {
                    ATerm g_119 = (ATerm) ATgetNext((ATermList) e_119);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_40;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_40;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_40;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_40;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_118);
      }
    else
      {
        t = y_118;
        {
          ATerm h_119 = t;
          int j_119 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_133 = NULL,q_133 = NULL,r_133 = NULL;
              t = _2_0(c_56, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_133 = ATgetArgument(t, 0);
                  q_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_133, q_133);
              r_133 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_133);
              ;
              LocalPopChoice(j_119);
            }
          else
            {
              t = h_119;
              {
                ATerm t_133 = NULL,u_133 = NULL,v_133 = NULL;
                t = _2_0(d_56, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_133 = ATgetArgument(t, 0);
                    u_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_133, u_133);
                v_133 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_133);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_133 = NULL,y_133 = NULL,z_133 = NULL;
  ATerm l_119 = t;
  int m_119 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_134 = NULL;
      a_134 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_134, term_n_119);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_119);
    }
  else
    {
      t = l_119;
      {
        ATerm k_40 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
        k_40 = t;
        t = term_o_119;
        k_18 = t;
        t = term_b_59;
        i_18 = t;
        t = k_18;
        l_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, k_40), term_o_119);
        j_18 = t;
        t = SSL_printnl(i_18, j_18);
        t = k_40;
        _fail(t);
      }
    }
  x_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_133);
  y_133 = t;
  t = x_133;
  t = fclose_0_0(t);
  t = y_133;
  return(t);
}
ATerm fetch_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  ATerm f_134 (ATerm t)
  {
    ATerm p_119 = t;
    int r_119 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_119, _id, t);
        ;
        LocalPopChoice(r_119);
      }
    else
      {
        t = p_119;
        t = Cons_2_0(_id, f_134, t);
      }
    return(t);
  }
  t = f_134(t);
  return(t);
}
ATerm f_56 (ATerm t)
{
  ATerm t_119 = t;
  int u_119 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_119);
    }
  else
    {
      t = t_119;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_119 = t;
  int w_119 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_134 = NULL;
      q_134 = t;
      t = SSL_is_string(q_134);
      ;
      LocalPopChoice(w_119);
    }
  else
    {
      t = v_119;
      {
        ATerm x_119 = t;
        int z_119 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_56, t);
            ;
            LocalPopChoice(z_119);
          }
        else
          {
            t = x_119;
            {
              ATerm c_135 = NULL,d_135 = NULL,e_135 = NULL;
              c_135 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_135 = ATgetArgument(t, 0);
                  t = d_135;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_135 = ATgetArgument(t, 0);
                      t = d_135;
                      {
                        ATerm b_120 = t;
                        int c_120 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_18 = NULL,n_18 = NULL;
                            n_18 = t;
                            t = term_b_64;
                            m_18 = t;
                            t = SSL_table_get(m_18, d_135);
                            {
                              ATerm e_120 = t;
                              int f_120 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_41 = NULL,o_18 = NULL,p_18 = NULL;
                                  t = eval_config_0_0(t);
                                  y_41 = t;
                                  p_18 = t;
                                  t = term_b_64;
                                  o_18 = t;
                                  t = SSL_table_put(o_18, d_135, y_41);
                                  t = y_41;
                                  ;
                                  LocalPopChoice(f_120);
                                }
                              else
                                {
                                  t = e_120;
                                }
                            }
                            ;
                            LocalPopChoice(c_120);
                          }
                        else
                          {
                            t = b_120;
                            {
                              ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,v_18 = NULL;
                              t = term_k_120;
                              t_18 = t;
                              t = term_b_59;
                              r_18 = t;
                              t = t_18;
                              v_18 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, d_135), term_k_120);
                              s_18 = t;
                              t = SSL_printnl(r_18, s_18);
                              t = d_135;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm p_43 = NULL,q_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_135 = ATgetArgument(t, 0);
                          e_135 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_135;
                      t = eval_config_0_0(t);
                      p_43 = t;
                      t = e_135;
                      t = eval_config_0_0(t);
                      q_43 = t;
                      t = SSL_strcat(p_43, q_43);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_133 (ATerm), ATerm t)
{
  ATerm o_120 = t;
  int p_120 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_135 = NULL,q_135 = NULL,w_18 = NULL,x_18 = NULL,z_18 = NULL,b_19 = NULL;
      o_135 = t;
      t = term_w_63;
      z_18 = t;
      t = term_b_64;
      w_18 = t;
      t = z_18;
      b_19 = t;
      t = term_w_63;
      x_18 = t;
      t = SSL_table_get(w_18, x_18);
      {
        ATerm s_120 = t;
        int y_120 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_46 = NULL,c_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
            t = eval_config_0_0(t);
            d_46 = t;
            f_19 = t;
            t = term_b_64;
            c_19 = t;
            t = f_19;
            g_19 = t;
            t = term_w_63;
            e_19 = t;
            t = SSL_table_put(c_19, e_19, d_46);
            t = d_46;
            ;
            LocalPopChoice(y_120);
          }
        else
          {
            t = s_120;
          }
        q_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_135, term_z_120);
        t = geq_0_0(t);
        t = o_135;
        t = k_133(t);
      }
      ;
      LocalPopChoice(p_120);
    }
  else
    {
      t = o_120;
    }
  return(t);
}
ATerm g_56 (ATerm t)
{
  ATerm s_135 = NULL;
  s_135 = t;
  if(match_string(t, "-k"))
    {
      t = s_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_135;
    }
  return(t);
}
ATerm h_56 (ATerm t)
{
  ATerm t_135 = NULL,u_135 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,m_19 = NULL;
  t_135 = t;
  t = SSL_string_to_int(t_135);
  u_135 = t;
  k_19 = t;
  t = term_b_64;
  i_19 = t;
  t = k_19;
  m_19 = t;
  t = term_e_121;
  j_19 = t;
  t = SSL_table_put(i_19, j_19, u_135);
  t = t_135;
  return(t);
}
ATerm i_56 (ATerm t)
{
  t = term_f_121;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_56, h_56, i_56, t);
  return(t);
}
ATerm j_56 (ATerm t)
{
  ATerm w_135 = NULL;
  w_135 = t;
  if(match_string(t, "-S"))
    {
      t = w_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_135;
    }
  return(t);
}
ATerm k_56 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,r_19 = NULL,t_19 = NULL,u_19 = NULL,w_19 = NULL;
  t_19 = t;
  t = term_b_64;
  n_19 = t;
  t = t_19;
  u_19 = t;
  t = term_w_63;
  o_19 = t;
  t = u_19;
  w_19 = t;
  t = term_r_75;
  r_19 = t;
  t = SSL_table_put(n_19, o_19, r_19);
  t = term_k_121;
  return(t);
}
ATerm l_56 (ATerm t)
{
  t = term_p_121;
  return(t);
}
ATerm n_56 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_56 (ATerm t)
{
  ATerm x_135 = NULL,y_135 = NULL,y_19 = NULL,z_19 = NULL,b_20 = NULL,c_20 = NULL;
  x_135 = t;
  t = SSL_string_to_int(x_135);
  y_135 = t;
  b_20 = t;
  t = term_b_64;
  y_19 = t;
  t = b_20;
  c_20 = t;
  t = term_w_63;
  z_19 = t;
  t = SSL_table_put(y_19, z_19, y_135);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_135);
  return(t);
}
ATerm t_56 (ATerm t)
{
  t = term_q_121;
  return(t);
}
ATerm d_57 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_57 (ATerm t)
{
  ATerm d_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,k_20 = NULL,l_20 = NULL;
  i_20 = t;
  t = term_b_64;
  d_20 = t;
  t = i_20;
  k_20 = t;
  t = term_x_121;
  g_20 = t;
  t = k_20;
  l_20 = t;
  t = term_m_38;
  h_20 = t;
  t = SSL_table_put(d_20, g_20, h_20);
  t = term_y_121;
  return(t);
}
ATerm j_57 (ATerm t)
{
  t = term_h_122;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_122 = t;
  int k_122 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_56, k_56, l_56, t);
      ;
      LocalPopChoice(k_122);
    }
  else
    {
      t = i_122;
      {
        ATerm u_122 = t;
        int v_122 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_56, o_56, t_56, t);
            ;
            LocalPopChoice(v_122);
          }
        else
          {
            t = u_122;
            t = Option_3_0(d_57, e_57, j_57, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_136 = NULL,h_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_136 = NULL;
      t = term_m_38;
      t = d_0(t);
      i_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_123, term_b_123, i_136);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_136 = ATgetFirst((ATermList) t);
          h_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_136;
      t = a_0(t);
      t = term_m_38;
      t = b_0(t);
      l_136 = t;
      t = (ATerm) ATinsert(CheckATermList(h_136), l_136);
    }
  return(t);
}
ATerm l_57 (ATerm t)
{
  ATerm n_136 = NULL;
  n_136 = t;
  if(match_string(t, "-o"))
    {
      t = n_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_136;
    }
  return(t);
}
ATerm m_57 (ATerm t)
{
  ATerm o_136 = NULL,m_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  o_136 = t;
  q_20 = t;
  t = term_b_64;
  m_20 = t;
  t = q_20;
  r_20 = t;
  t = term_c_123;
  p_20 = t;
  t = SSL_table_put(m_20, p_20, o_136);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_136);
  return(t);
}
ATerm n_57 (ATerm t)
{
  t = term_d_123;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_57, m_57, n_57, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_136 = NULL,s_136 = NULL,t_136 = NULL,u_136 = NULL,s_20 = NULL,t_20 = NULL;
  if(match_cons(t, sym__3))
    {
      r_136 = ATgetArgument(t, 0);
      s_136 = ATgetArgument(t, 1);
      t_136 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_136, s_136);
  {
    ATerm e_123 = t;
    int f_123 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_123 = ATgetArgument(t, 0);
            ATerm i_123 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_136, s_136);
        ;
        LocalPopChoice(f_123);
      }
    else
      {
        t = e_123;
        t = (ATerm) ATempty;
      }
    u_136 = t;
    t_20 = t;
    t = (ATerm) ATinsert(CheckATermList(u_136), t_136);
    s_20 = t;
    t = SSL_table_put(r_136, s_136, s_20);
    t = (ATerm) ATmakeAppl(sym__3, r_136, s_136, t_136);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_137 = NULL;
      t = term_m_38;
      t = m_0(t);
      g_137 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_123, term_b_123, g_137);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_137 = ATgetFirst((ATermList) t);
          d_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_137;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_137 = ATgetFirst((ATermList) t);
          f_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_137;
      t = i_0(t);
      t = e_137;
      t = k_0(t);
      k_137 = t;
      t = (ATerm) ATinsert(CheckATermList(f_137), k_137);
    }
  return(t);
}
ATerm o_57 (ATerm t)
{
  ATerm m_137 = NULL;
  m_137 = t;
  if(match_string(t, "-i"))
    {
      t = m_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_137;
    }
  return(t);
}
ATerm p_57 (ATerm t)
{
  ATerm n_137 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  n_137 = t;
  w_20 = t;
  t = term_b_64;
  u_20 = t;
  t = w_20;
  x_20 = t;
  t = term_j_123;
  v_20 = t;
  t = SSL_table_put(u_20, v_20, n_137);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_137);
  return(t);
}
ATerm q_57 (ATerm t)
{
  t = term_k_123;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_57, p_57, q_57, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_137 = NULL,d_21 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,c_21 = NULL,e_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_38;
  t = whoami_0_0(t);
  o_137 = t;
  a_21 = t;
  t = term_b_59;
  y_20 = t;
  t = a_21;
  c_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_123), o_137);
  z_20 = t;
  t = SSL_printnl(y_20, z_20);
  e_21 = t;
  t = term_g_59;
  d_21 = t;
  t = SSL_exit(d_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  t = term_n_123;
  h_21 = t;
  t = term_b_64;
  f_21 = t;
  t = h_21;
  i_21 = t;
  t = term_n_123;
  g_21 = t;
  t = SSL_table_get(f_21, g_21);
  {
    ATerm o_123 = t;
    int p_123 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_46 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
        t = eval_config_0_0(t);
        i_46 = t;
        l_21 = t;
        t = term_b_64;
        j_21 = t;
        t = l_21;
        m_21 = t;
        t = term_n_123;
        k_21 = t;
        t = SSL_table_put(j_21, k_21, i_46);
        t = i_46;
        ;
        LocalPopChoice(p_123);
      }
    else
      {
        t = o_123;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t)
{
  ATerm q_123 = t;
  int r_123 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_125(t);
      ;
      LocalPopChoice(r_123);
    }
  else
    {
      t = q_123;
      {
        ATerm r_137 = NULL,s_137 = NULL,v_137 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_137 = ATgetFirst((ATermList) t);
            s_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_137;
        t = foldr_2_0(l_125, m_125, t);
        v_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_137, v_137);
        t = m_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_57 (ATerm t)
{
  t = term_r_75;
  return(t);
}
ATerm s_57 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  if(match_cons(t, sym__2))
    {
      w_46 = ATgetArgument(t, 0);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_123 = t;
    int t_123 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_46, x_46);
        ;
        LocalPopChoice(t_123);
      }
    else
      {
        t = s_123;
        t = SSL_addr(w_46, x_46);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_137 = NULL,k_46 = NULL,o_46 = NULL;
  t = times_0_0(t);
  k_46 = t;
  t = SSL_explode_term(k_46);
  if(match_cons(t, sym__2))
    {
      ATerm u_123 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_46;
  t = foldr_2_0(r_57, s_57, t);
  y_137 = t;
  t = SSL_TicksToSeconds(y_137);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL,e_139 = NULL;
  t_138 = t;
  if(match_cons(t, sym__2))
    {
      u_138 = ATgetArgument(t, 0);
      e_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_123 = t;
    int w_123 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_139;
        if((u_138 != t))
          {
            _fail(t);
          }
        t = t_138;
        ;
        LocalPopChoice(w_123);
      }
    else
      {
        t = v_123;
        t = t_138;
        {
          ATerm x_123 = t;
          int y_123 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_138, e_139);
              ;
              LocalPopChoice(y_123);
            }
          else
            {
              t = x_123;
              t = SSL_gtr(u_138, e_139);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_138, e_139);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm z_123 = t;
  int a_124 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_139 = NULL,l_139 = NULL,o_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
      h_139 = t;
      t = term_w_63;
      r_21 = t;
      t = term_b_64;
      o_21 = t;
      t = r_21;
      s_21 = t;
      t = term_w_63;
      q_21 = t;
      t = SSL_table_get(o_21, q_21);
      {
        ATerm c_124 = t;
        int d_124 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_48 = NULL,t_21 = NULL,u_21 = NULL,w_21 = NULL,x_21 = NULL;
            t = eval_config_0_0(t);
            d_48 = t;
            w_21 = t;
            t = term_b_64;
            t_21 = t;
            t = w_21;
            x_21 = t;
            t = term_w_63;
            u_21 = t;
            t = SSL_table_put(t_21, u_21, d_48);
            t = d_48;
            ;
            LocalPopChoice(d_124);
          }
        else
          {
            t = c_124;
          }
        l_139 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_139, term_g_59);
        t = geq_0_0(t);
        t = h_139;
        t = j_133(t);
      }
      ;
      LocalPopChoice(a_124);
    }
  else
    {
      t = z_123;
    }
  return(t);
}
ATerm t_57 (ATerm t)
{
  ATerm o_139 = NULL,p_139 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  t = run_time_0_0(t);
  o_139 = t;
  t = term_m_38;
  t = whoami_0_0(t);
  p_139 = t;
  b_22 = t;
  t = term_b_59;
  z_21 = t;
  t = b_22;
  c_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_124), o_139), term_f_124), p_139);
  a_22 = t;
  t = SSL_printnl(z_21, a_22);
  t = (ATerm) ATmakeAppl(sym__2, term_b_59, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_124), o_139), term_f_124), p_139));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_57, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  t = report_run_time_0_0(t);
  e_22 = t;
  t = term_r_75;
  d_22 = t;
  t = SSL_exit(d_22);
  return(t);
}
ATerm u_57 (ATerm t)
{
  ATerm j_124 = t;
  int k_124 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(k_124);
    }
  else
    {
      t = j_124;
      {
        ATerm l_124 = t;
        int m_124 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(m_124);
          }
        else
          {
            t = l_124;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm n_124 = t;
  int p_124 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
      t = term_q_124;
      j_22 = t;
      t = term_b_64;
      g_22 = t;
      t = j_22;
      k_22 = t;
      t = term_q_124;
      i_22 = t;
      t = SSL_table_get(g_22, i_22);
      {
        ATerm r_124 = t;
        int s_124 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_48 = NULL,l_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
            t = eval_config_0_0(t);
            k_48 = t;
            p_22 = t;
            t = term_b_64;
            l_22 = t;
            t = p_22;
            q_22 = t;
            t = term_q_124;
            o_22 = t;
            t = SSL_table_put(l_22, o_22, k_48);
            t = k_48;
            ;
            LocalPopChoice(s_124);
          }
        else
          {
            t = r_124;
          }
      }
      ;
      LocalPopChoice(p_124);
    }
  else
    {
      t = n_124;
      t = fetch_1_0(u_57, t);
    }
  t = z_135(t);
  return(t);
}
ATerm map_1_0 (ATerm i_119 (ATerm), ATerm t)
{
  ATerm q_139 (ATerm t)
  {
    ATerm v_124 = t;
    int w_124 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_124);
      }
    else
      {
        t = v_124;
        t = Cons_2_0(i_119, q_139, t);
      }
    return(t);
  }
  t = q_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_139 = NULL,t_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_139 = ATgetFirst((ATermList) t);
      t_139 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_139 = NULL,y_139 = NULL;
        t = t_139;
        t = g_0(t);
        x_139 = t;
        t = s_139;
        t = f_0(t);
        y_139 = t;
        t = t_139;
        {
          ATerm w_57 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_139), y_139);
            return(t);
          }
          t = reverse_acc_2_0(f_0, w_57, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_38;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL,r_22 = NULL,s_22 = NULL;
  c_140 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_140);
  z_139 = t;
  t = a_140;
  t = z_110(t);
  b_140 = t;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_140);
  r_22 = t;
  t = SSLsetAnnotations(r_22, z_139);
  return(t);
}
ATerm y_57 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_57 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_58 (ATerm t)
{
  ATerm f_140 = NULL;
  f_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_140), term_x_124);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,h_23 = NULL;
  ATerm y_124 = t;
  int b_125 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
      t = term_n_123;
      v_22 = t;
      t = term_b_64;
      t_22 = t;
      t = v_22;
      w_22 = t;
      t = term_n_123;
      u_22 = t;
      t = SSL_table_get(t_22, u_22);
      {
        ATerm e_125 = t;
        int f_125 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_48 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,c_23 = NULL;
            t = eval_config_0_0(t);
            p_48 = t;
            z_22 = t;
            t = term_b_64;
            x_22 = t;
            t = z_22;
            c_23 = t;
            t = term_n_123;
            y_22 = t;
            t = SSL_table_put(x_22, y_22, p_48);
            t = p_48;
            ;
            LocalPopChoice(f_125);
          }
        else
          {
            t = e_125;
          }
      }
      ;
      LocalPopChoice(b_125);
    }
  else
    {
      t = y_124;
      t = fetch_1_0(y_57, t);
    }
  t = term_g_125;
  t = echo_0_0(t);
  f_23 = t;
  t = term_a_123;
  d_23 = t;
  t = f_23;
  h_23 = t;
  t = term_b_123;
  e_23 = t;
  t = SSL_table_get(d_23, e_23);
  t = reverse_acc_2_0(_id, z_57, t);
  t = map_1_0(d_58, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  ATerm g_140 = NULL,h_140 = NULL,i_140 = NULL,j_140 = NULL,i_23 = NULL,j_23 = NULL;
  j_140 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_140);
  g_140 = t;
  t = h_140;
  t = a_111(t);
  i_140 = t;
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_140);
  i_23 = t;
  t = SSLsetAnnotations(i_23, g_140);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_140 = NULL,s_140 = NULL,l_23 = NULL,m_23 = NULL;
  r_140 = t;
  {
    ATerm h_125 = t;
    int i_125 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_140;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_125 = ATgetFirst((ATermList) t);
                ATerm k_125 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_140;
          }
        ;
        LocalPopChoice(i_125);
      }
    else
      {
        t = h_125;
        t = (ATerm) ATinsert(ATempty, r_140);
      }
    s_140 = t;
    m_23 = t;
    t = term_q_118;
    l_23 = t;
    t = SSL_printnl(l_23, s_140);
    t = r_140;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  t = term_n_123;
  p_23 = t;
  t = term_b_64;
  n_23 = t;
  t = p_23;
  q_23 = t;
  t = term_n_123;
  o_23 = t;
  t = SSL_table_get(n_23, o_23);
  {
    ATerm q_125 = t;
    int r_125 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_49 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
        t = eval_config_0_0(t);
        b_49 = t;
        t_23 = t;
        t = term_b_64;
        r_23 = t;
        t = t_23;
        u_23 = t;
        t = term_n_123;
        s_23 = t;
        t = SSL_table_put(r_23, s_23, b_49);
        t = b_49;
        ;
        LocalPopChoice(r_125);
      }
    else
      {
        t = q_125;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm f_58 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_58 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  t = term_b_64;
  v_23 = t;
  t = a_24;
  b_24 = t;
  t = term_s_125;
  w_23 = t;
  t = b_24;
  c_24 = t;
  t = term_m_38;
  z_23 = t;
  t = SSL_table_put(v_23, w_23, z_23);
  t = term_t_125;
  return(t);
}
ATerm h_58 (ATerm t)
{
  t = term_u_125;
  return(t);
}
ATerm i_58 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_58 (ATerm t)
{
  ATerm d_24 = NULL,i_24 = NULL,l_24 = NULL,o_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,y_24 = NULL,z_24 = NULL,c_25 = NULL;
  o_24 = t;
  t = term_b_64;
  d_24 = t;
  t = o_24;
  q_24 = t;
  t = term_s_125;
  i_24 = t;
  t = q_24;
  r_24 = t;
  t = term_m_38;
  l_24 = t;
  t = SSL_table_put(d_24, i_24, l_24);
  y_24 = t;
  t = term_b_64;
  s_24 = t;
  t = y_24;
  z_24 = t;
  t = term_v_125;
  t_24 = t;
  t = z_24;
  c_25 = t;
  t = term_m_38;
  u_24 = t;
  t = SSL_table_put(s_24, t_24, u_24);
  t = term_w_125;
  return(t);
}
ATerm k_58 (ATerm t)
{
  t = term_x_125;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_125 = t;
  int z_125 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_58, g_58, h_58, t);
      ;
      LocalPopChoice(z_125);
    }
  else
    {
      t = y_125;
      t = Option_3_0(i_58, j_58, k_58, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm t)
{
  ATerm z_140 = NULL,a_141 = NULL,b_141 = NULL,c_141 = NULL,f_141 = NULL,g_141 = NULL,d_25 = NULL,h_25 = NULL;
  g_141 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_141 = ATgetFirst((ATermList) t);
      b_141 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_141);
  z_140 = t;
  t = a_141;
  t = h_98(t);
  c_141 = t;
  t = b_141;
  t = i_98(t);
  f_141 = t;
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(f_141), c_141);
  d_25 = t;
  t = SSLsetAnnotations(d_25, z_140);
  return(t);
}
ATerm l_58 (ATerm t)
{
  ATerm l_141 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_141 = t;
  k_25 = t;
  t = term_b_64;
  i_25 = t;
  t = k_25;
  l_25 = t;
  t = term_n_123;
  j_25 = t;
  t = SSL_table_put(i_25, j_25, l_141);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_141);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_138 (ATerm), ATerm t)
{
  ATerm k_141 = NULL;
  k_141 = t;
  {
    ATerm a_126 = t;
    int b_126 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_126;
        t = c_138(t);
        ;
        LocalPopChoice(b_126);
      }
    else
      {
        t = a_126;
      }
    t = k_141;
    {
      ATerm m_58 (ATerm t)
      {
        ATerm d_126 = t;
        int e_126 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_126 = t;
            int i_126 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_126);
              }
            else
              {
                t = f_126;
                t = c_138(t);
                t = Cons_2_0(_id, m_58, t);
              }
            ;
            LocalPopChoice(e_126);
          }
        else
          {
            t = d_126;
            {
              ATerm n_141 = NULL,o_141 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_141 = ATgetFirst((ATermList) t);
                  o_141 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_141), (ATerm) ATmakeAppl(sym_Undefined_1, n_141));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_58, m_58, t);
    }
  }
  return(t);
}
ATerm o_58 (ATerm t)
{
  ATerm g_142 = NULL;
  g_142 = t;
  if(match_string(t, "--help"))
    {
      t = g_142;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_142;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_142;
        }
    }
  return(t);
}
ATerm p_58 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,h_26 = NULL,k_26 = NULL,n_26 = NULL;
  h_26 = t;
  t = term_b_64;
  d_26 = t;
  t = h_26;
  k_26 = t;
  t = term_q_124;
  e_26 = t;
  t = k_26;
  n_26 = t;
  t = term_m_38;
  f_26 = t;
  t = SSL_table_put(d_26, e_26, f_26);
  t = term_l_126;
  return(t);
}
ATerm q_58 (ATerm t)
{
  t = term_q_126;
  return(t);
}
ATerm r_58 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_138 (ATerm), ATerm t)
{
  ATerm v_141 = NULL,w_141 = NULL,f_142 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,q_27 = NULL,t_27 = NULL;
  v_141 = t;
  x_25 = t;
  t = term_a_123;
  n_25 = t;
  t = x_25;
  y_25 = t;
  t = term_b_123;
  o_25 = t;
  t = y_25;
  z_25 = t;
  t = (ATerm) ATempty;
  p_25 = t;
  t = SSL_table_put(n_25, o_25, p_25);
  t = v_141;
  {
    ATerm n_58 (ATerm t)
    {
      ATerm r_126 = t;
      int v_126 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_138(t);
          ;
          LocalPopChoice(v_126);
        }
      else
        {
          t = r_126;
          {
            ATerm a_127 = t;
            int b_127 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_58, p_58, q_58, t);
                ;
                LocalPopChoice(b_127);
              }
            else
              {
                t = a_127;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_58, t);
    {
      ATerm h_127 = t;
      int i_127 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_142 = NULL;
          r_142 = t;
          {
            ATerm l_127 = t;
            int m_127 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_26 = NULL,x_26 = NULL;
                t = r_142;
                {
                  ATerm n_127 = t;
                  int o_127 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
                      t = term_q_124;
                      q_26 = t;
                      t = term_b_64;
                      o_26 = t;
                      t = q_26;
                      r_26 = t;
                      t = term_q_124;
                      p_26 = t;
                      t = SSL_table_get(o_26, p_26);
                      {
                        ATerm p_127 = t;
                        int q_127 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_51 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
                            t = eval_config_0_0(t);
                            d_51 = t;
                            u_26 = t;
                            t = term_b_64;
                            s_26 = t;
                            t = u_26;
                            v_26 = t;
                            t = term_q_124;
                            t_26 = t;
                            t = SSL_table_put(s_26, t_26, d_51);
                            t = d_51;
                            ;
                            LocalPopChoice(q_127);
                          }
                        else
                          {
                            t = p_127;
                          }
                      }
                      ;
                      LocalPopChoice(o_127);
                    }
                  else
                    {
                      t = n_127;
                      t = fetch_1_0(r_58, t);
                    }
                  t = r_142;
                  t = default_system_usage_0_0(t);
                  x_26 = t;
                  t = term_r_75;
                  w_26 = t;
                  t = SSL_exit(w_26);
                }
                ;
                LocalPopChoice(m_127);
              }
            else
              {
                t = l_127;
                {
                  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,h_27 = NULL,i_27 = NULL;
                  t = term_s_125;
                  a_27 = t;
                  t = term_b_64;
                  y_26 = t;
                  t = a_27;
                  b_27 = t;
                  t = term_s_125;
                  z_26 = t;
                  t = SSL_table_get(y_26, z_26);
                  {
                    ATerm r_127 = t;
                    int s_127 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_52 = NULL,c_27 = NULL,d_27 = NULL,f_27 = NULL,g_27 = NULL;
                        t = eval_config_0_0(t);
                        d_52 = t;
                        f_27 = t;
                        t = term_b_64;
                        c_27 = t;
                        t = f_27;
                        g_27 = t;
                        t = term_s_125;
                        d_27 = t;
                        t = SSL_table_put(c_27, d_27, d_52);
                        t = d_52;
                        ;
                        LocalPopChoice(s_127);
                      }
                    else
                      {
                        t = r_127;
                      }
                    t = r_142;
                    t = default_system_about_0_0(t);
                    i_27 = t;
                    t = term_r_75;
                    h_27 = t;
                    t = SSL_exit(h_27);
                  }
                }
              }
          }
          ;
          LocalPopChoice(i_127);
        }
      else
        {
          t = h_127;
          {
            ATerm t_127 = t;
            int u_127 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,o_27 = NULL,p_27 = NULL;
                ATerm s_58 (ATerm t)
                {
                  ATerm t_58 (ATerm t)
                  {
                    if(((w_141 != NULL) && (w_141 != t)))
                      _fail(t);
                    else
                      w_141 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_58, t);
                  return(t);
                }
                t = fetch_1_0(s_58, t);
                l_27 = t;
                t = term_b_59;
                j_27 = t;
                t = l_27;
                m_27 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_141)), term_v_127);
                k_27 = t;
                t = SSL_printnl(j_27, k_27);
                t = (ATerm) ATmakeAppl(sym__2, term_b_59, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_141)), term_v_127));
                t = default_system_usage_0_0(t);
                p_27 = t;
                t = term_g_59;
                o_27 = t;
                t = SSL_exit(o_27);
                ;
                LocalPopChoice(u_127);
              }
            else
              {
                t = t_127;
              }
          }
        }
      f_142 = t;
      t_27 = t;
      t = term_a_123;
      q_27 = t;
      t = SSL_table_destroy(q_27);
      t = f_142;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm t)
{
  ATerm u_142 = NULL,w_27 = NULL,z_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  t = parse_options_1_0(b_136, t);
  u_142 = t;
  z_27 = t;
  t = term_w_127;
  w_27 = t;
  t = SSL_table_create(w_27);
  d_28 = t;
  t = term_w_127;
  b_28 = t;
  t = d_28;
  e_28 = t;
  t = term_x_127;
  c_28 = t;
  t = SSL_table_put(b_28, c_28, u_142);
  t = u_142;
  t = d_136(t);
  {
    ATerm a_128 = t;
    int d_128 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_136, t);
        ;
        LocalPopChoice(d_128);
      }
    else
      {
        t = a_128;
        {
          ATerm e_128 = t;
          int f_128 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_136(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_128);
            }
          else
            {
              t = e_128;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_58 (ATerm t)
{
  t = if_verbose2_1_0(a_59, t);
  return(t);
}
ATerm x_58 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_58 (ATerm t)
{
  ATerm f_28 = NULL,k_28 = NULL,m_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  t = term_b_64;
  f_28 = t;
  t = o_28;
  p_28 = t;
  t = term_g_128;
  k_28 = t;
  t = p_28;
  q_28 = t;
  t = term_m_38;
  m_28 = t;
  t = SSL_table_put(f_28, k_28, m_28);
  t = term_h_128;
  return(t);
}
ATerm z_58 (ATerm t)
{
  t = term_i_128;
  return(t);
}
ATerm a_59 (ATerm t)
{
  ATerm v_142 = NULL,w_142 = NULL,r_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,q_29 = NULL;
  v_142 = t;
  t = term_n_123;
  u_28 = t;
  t = term_b_64;
  r_28 = t;
  t = u_28;
  v_28 = t;
  t = term_n_123;
  t_28 = t;
  t = SSL_table_get(r_28, t_28);
  {
    ATerm j_128 = t;
    int k_128 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_53 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL,a_29 = NULL;
        t = eval_config_0_0(t);
        n_53 = t;
        z_28 = t;
        t = term_b_64;
        w_28 = t;
        t = z_28;
        a_29 = t;
        t = term_n_123;
        x_28 = t;
        t = SSL_table_put(w_28, x_28, n_53);
        t = n_53;
        ;
        LocalPopChoice(k_128);
      }
    else
      {
        t = j_128;
      }
    w_142 = t;
    k_29 = t;
    t = term_b_59;
    i_29 = t;
    t = k_29;
    q_29 = t;
    t = (ATerm) ATinsert(ATempty, w_142);
    j_29 = t;
    t = SSL_printnl(i_29, j_29);
    t = v_142;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm t)
{
  ATerm u_58 (ATerm t)
  {
    ATerm l_128 = t;
    int n_128 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_135(t);
        ;
        LocalPopChoice(n_128);
      }
    else
      {
        t = l_128;
        {
          ATerm o_128 = t;
          int r_128 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_128);
            }
          else
            {
              t = o_128;
              {
                ATerm u_128 = t;
                int v_128 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_128);
                  }
                else
                  {
                    t = u_128;
                    {
                      ATerm w_128 = t;
                      int x_128 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_58, y_58, z_58, t);
                          ;
                          LocalPopChoice(x_128);
                        }
                      else
                        {
                          t = w_128;
                          {
                            ATerm y_128 = t;
                            int z_128 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_128);
                              }
                            else
                              {
                                t = y_128;
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
  ATerm w_58 (ATerm t)
  {
    ATerm x_142 = NULL,y_142 = NULL,d_54 = NULL;
    x_142 = t;
    {
      ATerm a_129 = t;
      int b_129 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_59 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_142 != NULL) && (y_142 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_142 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_59, t);
          ;
          LocalPopChoice(b_129);
        }
      else
        {
          t = a_129;
          t = term_c_129;
          y_142 = t;
        }
      t = not_null(y_142);
      t = ReadFromFile_0_0(t);
      d_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_142, d_54);
      t = apply_strategy_1_0(k_135, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_58, m_135, v_58, w_58, t);
  return(t);
}
ATerm d_59 (ATerm t)
{
  t = _2_0(_id, frontend_transformation_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_59, _fail, default_usage_0_0, t);
  return(t);
}

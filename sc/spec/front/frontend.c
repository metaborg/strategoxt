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
ATerm term_l_103;
ATerm term_x_102;
ATerm term_w_102;
ATerm term_b_102;
ATerm term_x_100;
ATerm term_w_100;
ATerm term_n_100;
ATerm term_h_100;
ATerm term_g_100;
ATerm term_f_100;
ATerm term_e_100;
ATerm term_d_100;
ATerm term_b_100;
ATerm term_a_99;
ATerm term_x_98;
ATerm term_z_97;
ATerm term_y_97;
ATerm term_x_97;
ATerm term_c_97;
ATerm term_x_96;
ATerm term_w_96;
ATerm term_v_96;
ATerm term_r_96;
ATerm term_p_96;
ATerm term_o_96;
ATerm term_k_96;
ATerm term_j_96;
ATerm term_c_96;
ATerm term_b_96;
ATerm term_a_94;
ATerm term_e_93;
ATerm term_b_93;
ATerm term_j_92;
ATerm term_g_92;
ATerm term_f_92;
ATerm term_e_92;
ATerm term_b_92;
ATerm term_a_92;
ATerm term_z_91;
ATerm term_n_91;
ATerm term_m_91;
ATerm term_l_91;
ATerm term_k_91;
ATerm term_j_91;
ATerm term_g_91;
ATerm term_t_90;
ATerm term_y_87;
ATerm term_x_87;
ATerm term_w_87;
ATerm term_t_86;
ATerm term_j_86;
ATerm term_i_86;
ATerm term_h_86;
ATerm term_g_86;
ATerm term_f_86;
ATerm term_s_82;
ATerm term_r_82;
ATerm term_h_81;
ATerm term_g_81;
ATerm term_f_81;
ATerm term_c_81;
ATerm term_b_81;
ATerm term_x_80;
ATerm term_w_80;
ATerm term_r_80;
ATerm term_q_80;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_r_76;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_l_74;
ATerm term_h_74;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_d_73;
ATerm term_a_73;
ATerm term_c_72;
ATerm term_p_71;
ATerm term_z_70;
ATerm term_x_70;
ATerm term_f_70;
ATerm term_x_69;
ATerm term_t_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_l_69;
ATerm term_k_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_i_68;
ATerm term_y_58;
ATerm term_v_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_e_58;
ATerm term_c_58;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_l_56;
ATerm term_i_56;
ATerm term_z_55;
ATerm term_w_55;
ATerm term_v_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_d_53;
ATerm term_v_52;
ATerm term_q_52;
ATerm term_e_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_x_38;
ATerm term_q_36;
ATerm term_h_36;
ATerm term_s_35;
ATerm term_x_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_p_34;
void init_constant_terms (void)
{
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATempty);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_46);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_53);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Var_1, term_z_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym_Var_1, term_b_54);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(sym_Anno_2, term_a_54, term_c_54);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym_Var_1, term_e_54);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_Var_1, term_g_54);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Anno_2, term_f_54, term_h_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_53);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym_Call_2, term_j_54, (ATerm) ATempty);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym_BAM_3, term_k_54, term_a_54, term_f_54);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_53);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Call_2, term_p_54, (ATerm) ATempty);
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_BAM_3, term_q_54, term_c_54, term_h_54);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(sym_Var_1, term_w_55);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_58);
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(sym_Keys_1, term_q_52);
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_58);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_55);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, term_v_58);
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_53);
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_69);
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_73);
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(sym_Op_2, term_v_75, (ATerm) ATempty);
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(sym_Op_2, term_q_77, (ATerm) ATempty);
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_80);
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_x_80));
  term_x_80 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_80);
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_81);
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_h_81));
  term_h_81 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_81);
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_82);
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_86);
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_86);
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_x_87));
  term_x_87 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_t_90));
  term_t_90 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_34);
  ATprotect(&(term_g_91));
  term_g_91 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_91));
  term_j_91 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_k_91));
  term_k_91 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_91));
  term_l_91 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_91));
  term_m_91 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_91));
  term_n_91 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_z_91));
  term_z_91 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_a_92));
  term_a_92 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_91);
  ATprotect(&(term_b_92));
  term_b_92 = (ATerm) ATmakeAppl(sym_Call_2, term_a_92, (ATerm) ATempty);
  ATprotect(&(term_e_92));
  term_e_92 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_91);
  ATprotect(&(term_f_92));
  term_f_92 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_75);
  ATprotect(&(term_g_92));
  term_g_92 = (ATerm) ATmakeAppl(sym_Call_2, term_f_92, (ATerm) ATempty);
  ATprotect(&(term_j_92));
  term_j_92 = (ATerm) ATmakeAppl(sym_Call_2, term_t_90, (ATerm) ATempty);
  ATprotect(&(term_b_93));
  term_b_93 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_93));
  term_e_93 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_94));
  term_a_94 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_96));
  term_b_96 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_96));
  term_c_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_96));
  term_j_96 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_52);
  ATprotect(&(term_k_96));
  term_k_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_96));
  term_o_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_96));
  term_p_96 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_96));
  term_r_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_96));
  term_v_96 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_96));
  term_w_96 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_96));
  term_x_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_97));
  term_c_97 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_97));
  term_x_97 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_97));
  term_y_97 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_97));
  term_z_97 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_98));
  term_x_98 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_99));
  term_a_99 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_100));
  term_b_100 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_100));
  term_d_100 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_100));
  term_e_100 = (ATerm) ATmakeAppl(sym__3, term_b_100, term_d_100, term_p_34);
  ATprotect(&(term_f_100));
  term_f_100 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_100));
  term_g_100 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_100));
  term_h_100 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_100));
  term_n_100 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_100));
  term_w_100 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_100));
  term_x_100 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_102));
  term_b_102 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_102));
  term_w_102 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_102));
  term_x_102 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_103));
  term_l_103 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm n_142 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm k_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm p_98 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm c_133 (ATerm), ATerm);
ATerm spaste_1_0 (ATerm z_141 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm a_142 (ATerm), ATerm b_142 (ATerm), ATerm c_142 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm rename_4_0 (ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm);
ATerm strename_0_0 (ATerm);
ATerm ListBuild_0_0 (ATerm);
ATerm ListMatch_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_112 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm q_113 (ATerm), ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm RulesToSdefs_0_0 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm CheckTuple_0_0 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm c_116 (ATerm), ATerm);
ATerm check_constructors_p__2_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm v_141 (ATerm), ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm g_139 (ATerm), ATerm h_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm a_139 (ATerm), ATerm b_139 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm g_118 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm h_138 (ATerm), ATerm i_138 (ATerm (ATerm), ATerm), ATerm j_138 (ATerm), ATerm k_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_138 (ATerm (ATerm), ATerm), ATerm m_138 (ATerm), ATerm);
ATerm ExpOverlay_1_0 (ATerm b_141 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm Overlay_to_Congdef_0_0 (ATerm);
ATerm ExpandOverlays_0_0 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm y_99 (ATerm), ATerm);
ATerm App_2_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm Build_1_0 (ATerm a_103 (ATerm), ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm split_under_scope_1_0 (ATerm w_140 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm u_114 (ATerm), ATerm);
ATerm split_dynamic_rule_1_0 (ATerm u_140 (ATerm), ATerm);
ATerm lift_dynamic_rule_0_0 (ATerm);
ATerm listtd_1_0 (ATerm r_120 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm z_101 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm l_123 (ATerm), ATerm);
ATerm diff_1_0 (ATerm h_123 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm r_113 (ATerm), ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm assert_1_0 (ATerm e_130 (ATerm), ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm InsertBSpec_0_0 (ATerm);
ATerm foldr_3_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm Op_2_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm r_102 (ATerm), ATerm);
ATerm Var_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm j_120 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm k_128 (ATerm), ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm x_131 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_134 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_119 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_119 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_133 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_133 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_135 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_110 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_138 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm z_137 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL;
  h_0 = t;
  t = term_p_34;
  t = whoami_0_0(t);
  j_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_1), c_1), b_1), z_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, c_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, v_0, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, b_1)), (ATerm) ATmakeAppl(sym_BAM_3, s_0, (ATerm)ATmakeAppl(sym_Var_1, c_1), (ATerm) ATmakeAppl(sym_Var_1, e_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_r_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_1)), (ATerm) ATmakeAppl(sym_Var_1, b_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_0 = ATgetArgument(t, 0);
          {
            ATerm i_1 = NULL,k_1 = NULL,p_1 = NULL,r_1 = NULL;
            t = t_0;
            t = new_0_0(t);
            i_1 = t;
            t = v_0;
            {
              ATerm p_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((k_1 != NULL) && (k_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      k_1 = ATgetArgument(t, 0);
                    if(((p_1 != NULL) && (p_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, i_1);
                return(t);
              }
              t = oncetd_1_0(p_0, t);
              r_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_1)), not_null(k_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_1)), (ATerm) ATmakeAppl(sym_Build_1, r_1))));
            }
          }
        }
      else
        {
          ATerm u_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              v_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_0;
          t = new_0_0(t);
          u_1 = t;
          t = new_0_0(t);
          v_1 = t;
          t = v_0;
          {
            ATerm w_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_1 != NULL) && (x_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_1 = ATgetArgument(t, 0);
                  if(((y_1 != NULL) && (y_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, u_1);
              return(t);
            }
            t = oncetd_1_0(w_0, t);
            a_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_s_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_1))))), (ATerm)ATmakeAppl(sym_Var_1, u_1), (ATerm) ATmakeAppl(sym_Op_2, term_t_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_1)), not_null(x_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
        t = d_2;
        t = new_0_0(t);
        g_2 = t;
        t = e_2;
        {
          ATerm y_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_2 = ATgetArgument(t, 0);
                if(((h_2 != NULL) && (h_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_2), not_null(i_2));
            return(t);
          }
          t = pat_td_1_0(y_0, t);
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_2))))));
        }
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        {
          ATerm y_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
              t = d_2;
              t = new_0_0(t);
              n_2 = t;
              t = e_2;
              {
                ATerm f_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_2 != NULL) && (o_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_2);
                  return(t);
                }
                t = pat_td_1_0(f_1, t);
                p_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_2)), not_null(o_2))));
              }
              ;
              LocalPopChoice(z_34);
            }
          else
            {
              t = y_34;
              {
                ATerm r_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL;
                t = d_2;
                t = new_0_0(t);
                r_2 = t;
                t = e_2;
                {
                  ATerm h_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_2 != NULL) && (s_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_2 = ATgetArgument(t, 0);
                        if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_2);
                    return(t);
                  }
                  t = pat_td_1_0(h_1, t);
                  v_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_2)), not_null(s_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,z_3 = NULL,a_4 = NULL;
  a_4 = t;
  if(match_cons(t, sym_As_2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_4);
  t_3 = t;
  t = u_3;
  t = z_99(t);
  x_3 = t;
  t = v_3;
  t = a_100(t);
  z_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, x_3, z_3), t_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  k_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
      g_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_4);
  d_4 = t;
  t = e_4;
  t = y_103(t);
  h_4 = t;
  t = f_4;
  t = z_103(t);
  i_4 = t;
  t = g_4;
  t = a_104(t);
  j_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, h_4, i_4, j_4), d_4);
  return(t);
}
ATerm Explode_2_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  w_4 = t;
  if(match_cons(t, sym_Explode_2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_4);
  r_4 = t;
  t = s_4;
  t = s_99(t);
  u_4 = t;
  t = t_4;
  t = t_99(t);
  v_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, u_4, v_4), r_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm n_142 (ATerm), ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_142(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm f_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                t = pat_td_1_0(n_142, t);
                return(t);
              }
              t = fetch_1_0(n_1, t);
              return(t);
            }
            t = Op_2_0(_id, l_1, t);
            ;
            LocalPopChoice(j_35);
          }
        else
          {
            t = f_35;
            {
              ATerm k_35 = t;
              int l_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_1 (ATerm t)
                  {
                    t = pat_td_1_0(n_142, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, o_1, t);
                  ;
                  LocalPopChoice(l_35);
                }
              else
                {
                  t = k_35;
                  {
                    ATerm m_35 = t;
                    int n_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = pat_td_1_0(n_142, t);
                          return(t);
                        }
                        t = Explode_2_0(s_1, _id, t);
                        ;
                        LocalPopChoice(n_35);
                      }
                    else
                      {
                        t = m_35;
                        {
                          ATerm o_35 = t;
                          int p_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_2 (ATerm t)
                              {
                                ATerm f_2 (ATerm t)
                                {
                                  t = pat_td_1_0(n_142, t);
                                  return(t);
                                }
                                t = fetch_1_0(f_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, b_2, t);
                              ;
                              LocalPopChoice(p_35);
                            }
                          else
                            {
                              t = o_35;
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = pat_td_1_0(n_142, t);
                                  return(t);
                                }
                                t = As_2_0(_id, k_2, t);
                              }
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
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_Build_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
        t = a_3;
        t = new_0_0(t);
        d_3 = t;
        t = b_3;
        {
          ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((f_3 != NULL) && (f_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_3 = ATgetArgument(t, 0);
                if(((g_3 != NULL) && (g_3 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, d_3);
            return(t);
          }
          t = pat_td_1_0(l_2, t);
          h_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_3)), not_null(f_3))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_3)))), (ATerm) ATmakeAppl(sym_Build_1, h_3)));
        }
        ;
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
              t = a_3;
              t = new_0_0(t);
              j_3 = t;
              t = b_3;
              {
                ATerm q_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((k_3 != NULL) && (k_3 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_3);
                  return(t);
                }
                t = pat_td_1_0(q_2, t);
                l_3 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_3)))), (ATerm) ATmakeAppl(sym_Build_1, l_3)));
              }
              ;
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              {
                ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
                t = a_3;
                t = new_0_0(t);
                p_3 = t;
                t = b_3;
                {
                  ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_3 != NULL) && (q_3 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_3 = ATgetArgument(t, 0);
                        if(((r_3 != NULL) && (r_3 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_3 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_3);
                    return(t);
                  }
                  t = pat_td_1_0(w_2, t);
                  s_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_3), not_null(r_3), (ATerm) ATmakeAppl(sym_Var_1, p_3))), (ATerm) ATmakeAppl(sym_Build_1, s_3)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm b_5 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      b_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_5 = NULL,g_5 = NULL;
        t = b_5;
        {
          ATerm x_2 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm a_36 = ATgetArgument(t, 0);
                if(match_cons(a_36, sym_Build_1))
                  {
                    if(((f_5 != NULL) && (f_5 != ATgetArgument(a_36, 0))))
                      _fail(ATgetArgument(a_36, 0));
                    else
                      f_5 = ATgetArgument(a_36, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(f_5);
            return(t);
          }
          t = pat_td_1_0(x_2, t);
          g_5 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, g_5);
        }
        ;
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        {
          ATerm l_5 = NULL,m_5 = NULL;
          t = b_5;
          {
            ATerm y_2 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm c_36 = ATgetArgument(t, 0);
                  if(match_cons(c_36, sym_Build_1))
                    {
                      if(((l_5 != NULL) && (l_5 != ATgetArgument(c_36, 0))))
                        _fail(ATgetArgument(c_36, 0));
                      else
                        l_5 = ATgetArgument(c_36, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_36 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = not_null(l_5);
              return(t);
            }
            t = pat_td_1_0(y_2, t);
            m_5 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, m_5);
          }
        }
      }
  }
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm n_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      n_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
      t_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_5;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm f_36 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_36;
        }
      return(t);
    }
    t = fetch_1_0(c_3, t);
    t = t_5;
    {
      ATerm i_3 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_h_36;
        return(t);
      }
      ATerm n_3 (ATerm t)
      {
        ATerm z_5 = NULL,c_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_5 = ATgetFirst((ATermList) t);
            c_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_5, c_6);
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        ATerm f_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_36 = ATgetArgument(t, 0);
            if(match_cons(i_36, sym__2))
              {
                f_6 = ATgetArgument(i_36, 0);
                i_6 = ATgetArgument(i_36, 1);
              }
            else
              _fail(t);
            {
              ATerm j_36 = ATgetArgument(t, 1);
              if(match_cons(j_36, sym__2))
                {
                  h_6 = ATgetArgument(j_36, 0);
                  j_6 = ATgetArgument(j_36, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_6), f_6), (ATerm) ATinsert(CheckATermList(j_6), i_6));
        return(t);
      }
      t = genzip_4_0(i_3, n_3, b_4, LiftPrimArg_0_0, t);
      {
        ATerm c_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_h_36;
            return(t);
          }
          ATerm n_4 (ATerm t)
          {
            ATerm k_6 = NULL,l_6 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_6 = ATgetFirst((ATermList) t);
                l_6 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, k_6, l_6);
            return(t);
          }
          ATerm x_4 (ATerm t)
          {
            ATerm m_6 = NULL,n_6 = NULL,p_6 = NULL,r_6 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm k_36 = ATgetArgument(t, 0);
                if(match_cons(k_36, sym__2))
                  {
                    m_6 = ATgetArgument(k_36, 0);
                    p_6 = ATgetArgument(k_36, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm l_36 = ATgetArgument(t, 1);
                  if(match_cons(l_36, sym__2))
                    {
                      n_6 = ATgetArgument(l_36, 0);
                      r_6 = ATgetArgument(l_36, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_6), m_6), (ATerm) ATinsert(CheckATermList(r_6), p_6));
            return(t);
          }
          t = genzip_4_0(l_4, n_4, x_4, _id, t);
          return(t);
        }
        t = _2_0(concat_0_0, c_4, t);
        if(match_cons(t, sym__2))
          {
            v_5 = ATgetArgument(t, 0);
            {
              ATerm m_36 = ATgetArgument(t, 1);
              if(match_cons(m_36, sym__2))
                {
                  x_5 = ATgetArgument(m_36, 0);
                  y_5 = ATgetArgument(m_36, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_5), (ATerm) ATmakeAppl(sym_CallT_3, n_5, s_5, y_5)));
      }
    }
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm c_7 (ATerm u_6, ATerm t)
  {
    ATerm w_6 = NULL;
    t = u_6;
    {
      ATerm n_36 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_36;
        }
      t = new_0_0(t);
      w_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_6), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_6)))), (ATerm) ATmakeAppl(sym_Var_1, w_6)));
    }
    return(t);
  }
  ATerm x_6 = NULL,a_7 = NULL;
  x_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_7 = ATgetArgument(t, 0);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_7(x_6, t);
            ;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_36, (ATerm) ATmakeAppl(sym_Var_1, a_7)));
          }
      }
    }
  else
    {
      t = c_7(x_6, t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm f_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
      f_10 = ATgetArgument(t, 2);
      {
        ATerm m_2 = NULL,t_2 = NULL,z_2 = NULL;
        t = f_10;
        {
          ATerm y_4 (ATerm t)
          {
            ATerm r_36 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_36;
              }
            return(t);
          }
          t = fetch_1_0(y_4, t);
          t = f_10;
          {
            ATerm a_5 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_36;
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              ATerm e_3 = NULL,m_3 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_3 = ATgetFirst((ATermList) t);
                  m_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, e_3, m_3);
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              ATerm o_3 = NULL,w_3 = NULL,y_3 = NULL,m_4 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm s_36 = ATgetArgument(t, 0);
                  if(match_cons(s_36, sym__2))
                    {
                      o_3 = ATgetArgument(s_36, 0);
                      y_3 = ATgetArgument(s_36, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_36 = ATgetArgument(t, 1);
                    if(match_cons(w_36, sym__2))
                      {
                        w_3 = ATgetArgument(w_36, 0);
                        m_4 = ATgetArgument(w_36, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_3), o_3), (ATerm) ATinsert(CheckATermList(m_4), y_3));
              return(t);
            }
            t = genzip_4_0(a_5, e_5, h_5, LiftPrimArg_0_0, t);
            {
              ATerm i_5 (ATerm t)
              {
                ATerm j_5 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_36;
                  return(t);
                }
                ATerm k_5 (ATerm t)
                {
                  ATerm o_4 = NULL,p_4 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_4 = ATgetFirst((ATermList) t);
                      p_4 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
                  return(t);
                }
                ATerm o_5 (ATerm t)
                {
                  ATerm q_4 = NULL,z_4 = NULL,c_5 = NULL,d_5 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_36 = ATgetArgument(t, 0);
                      if(match_cons(y_36, sym__2))
                        {
                          q_4 = ATgetArgument(y_36, 0);
                          c_5 = ATgetArgument(y_36, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm z_36 = ATgetArgument(t, 1);
                        if(match_cons(z_36, sym__2))
                          {
                            z_4 = ATgetArgument(z_36, 0);
                            d_5 = ATgetArgument(z_36, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_4), q_4), (ATerm) ATinsert(CheckATermList(d_5), c_5));
                  return(t);
                }
                t = genzip_4_0(j_5, k_5, o_5, _id, t);
                return(t);
              }
              t = _2_0(concat_0_0, i_5, t);
              if(match_cons(t, sym__2))
                {
                  m_2 = ATgetArgument(t, 0);
                  {
                    ATerm a_37 = ATgetArgument(t, 1);
                    if(match_cons(a_37, sym__2))
                      {
                        t_2 = ATgetArgument(a_37, 0);
                        z_2 = ATgetArgument(a_37, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_2), (ATerm) ATmakeAppl(sym_PrimT_3, k_10, l_10, z_2)));
            }
          }
        }
      }
    }
  else
    {
      ATerm q_5 = NULL,r_5 = NULL,u_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          k_10 = ATgetArgument(t, 0);
          l_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_10;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm b_37 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_37;
            }
          return(t);
        }
        t = fetch_1_0(p_5, t);
        t = l_10;
        {
          ATerm v_6 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_h_36;
            return(t);
          }
          ATerm b_7 (ATerm t)
          {
            ATerm w_5 = NULL,a_6 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_5 = ATgetFirst((ATermList) t);
                a_6 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, w_5, a_6);
            return(t);
          }
          ATerm d_7 (ATerm t)
          {
            ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm c_37 = ATgetArgument(t, 0);
                if(match_cons(c_37, sym__2))
                  {
                    b_6 = ATgetArgument(c_37, 0);
                    e_6 = ATgetArgument(c_37, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm g_37 = ATgetArgument(t, 1);
                  if(match_cons(g_37, sym__2))
                    {
                      d_6 = ATgetArgument(g_37, 0);
                      g_6 = ATgetArgument(g_37, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_6), b_6), (ATerm) ATinsert(CheckATermList(g_6), e_6));
            return(t);
          }
          t = genzip_4_0(v_6, b_7, d_7, LiftPrimArg_0_0, t);
          {
            ATerm e_7 (ATerm t)
            {
              ATerm f_7 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_h_36;
                return(t);
              }
              ATerm g_7 (ATerm t)
              {
                ATerm o_6 = NULL,q_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_6 = ATgetFirst((ATermList) t);
                    q_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, o_6, q_6);
                return(t);
              }
              ATerm h_7 (ATerm t)
              {
                ATerm s_6 = NULL,t_6 = NULL,y_6 = NULL,z_6 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm i_37 = ATgetArgument(t, 0);
                    if(match_cons(i_37, sym__2))
                      {
                        s_6 = ATgetArgument(i_37, 0);
                        y_6 = ATgetArgument(i_37, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm j_37 = ATgetArgument(t, 1);
                      if(match_cons(j_37, sym__2))
                        {
                          t_6 = ATgetArgument(j_37, 0);
                          z_6 = ATgetArgument(j_37, 1);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_6), s_6), (ATerm) ATinsert(CheckATermList(z_6), y_6));
                return(t);
              }
              t = genzip_4_0(f_7, g_7, h_7, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, e_7, t);
            if(match_cons(t, sym__2))
              {
                q_5 = ATgetArgument(t, 0);
                {
                  ATerm k_37 = ATgetArgument(t, 1);
                  if(match_cons(k_37, sym__2))
                    {
                      r_5 = ATgetArgument(k_37, 0);
                      u_5 = ATgetArgument(k_37, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, q_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_5), (ATerm) ATmakeAppl(sym_PrimT_3, k_10, (ATerm)ATempty, u_5)));
          }
        }
      }
    }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
      }
    {
      ATerm j_7 (ATerm t)
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
            {
              ATerm p_37 = t;
              int r_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = LiftCallArgs_0_0(t);
                  ;
                  LocalPopChoice(r_37);
                }
              else
                {
                  t = p_37;
                  {
                    ATerm u_37 = t;
                    int w_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = HL_0_0(t);
                        ;
                        LocalPopChoice(w_37);
                      }
                    else
                      {
                        t = u_37;
                        {
                          ATerm x_37 = t;
                          int y_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_37 = t;
                              int a_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Bapp0_0_0(t);
                                  ;
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
                                        ATerm k_11 = NULL,t_11 = NULL,g_12 = NULL;
                                        if(match_cons(t, sym_Build_1))
                                          {
                                            k_11 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = k_11;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            t_11 = ATgetArgument(t, 0);
                                            t = t_11;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                t_11 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_12), t_11);
                                          }
                                        ;
                                        LocalPopChoice(c_38);
                                      }
                                    else
                                      {
                                        t = b_38;
                                        t = Bapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(y_37);
                            }
                          else
                            {
                              t = x_37;
                              {
                                ATerm d_38 = t;
                                int e_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_38 = t;
                                    int g_38 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm m_7 = NULL,q_7 = NULL,x_7 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            m_7 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = m_7;
                                        {
                                          ATerm k_7 (ATerm t)
                                          {
                                            if(match_cons(t, sym_RootApp_1))
                                              {
                                                ATerm h_38 = ATgetArgument(t, 0);
                                                if(match_cons(h_38, sym_Match_1))
                                                  {
                                                    if(((q_7 != NULL) && (q_7 != ATgetArgument(h_38, 0))))
                                                      _fail(ATgetArgument(h_38, 0));
                                                    else
                                                      q_7 = ATgetArgument(h_38, 0);
                                                  }
                                                else
                                                  _fail(t);
                                              }
                                            else
                                              _fail(t);
                                            t = not_null(q_7);
                                            return(t);
                                          }
                                          t = pat_td_1_0(k_7, t);
                                          x_7 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, x_7);
                                        }
                                        ;
                                        LocalPopChoice(g_38);
                                      }
                                    else
                                      {
                                        t = f_38;
                                        {
                                          ATerm i_38 = t;
                                          int j_38 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm f_15 = NULL,b_16 = NULL,q_16 = NULL;
                                              if(match_cons(t, sym_Match_1))
                                                {
                                                  f_15 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = f_15;
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  b_16 = ATgetArgument(t, 0);
                                                  t = b_16;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_App_2))
                                                    {
                                                      b_16 = ATgetArgument(t, 0);
                                                      q_16 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_BA_2, b_16, q_16);
                                                }
                                              ;
                                              LocalPopChoice(j_38);
                                            }
                                          else
                                            {
                                              t = i_38;
                                              t = Mapp2_0_0(t);
                                            }
                                        }
                                      }
                                    ;
                                    LocalPopChoice(e_38);
                                  }
                                else
                                  {
                                    t = d_38;
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
      t = repeat_1_0(j_7, t);
    }
    return(t);
  }
  t = topdown_1_0(i_7, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,q_17 = NULL,c_18 = NULL,l_18 = NULL,n_18 = NULL,t_18 = NULL,a_19 = NULL,h_19 = NULL,o_19 = NULL,v_19 = NULL;
  v_19 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_17 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
      l_18 = ATgetArgument(t, 2);
      n_18 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  o_17 = t;
  t = q_17;
  t = k_105(t);
  t_18 = t;
  t = c_18;
  t = l_105(t);
  a_19 = t;
  t = l_18;
  t = m_105(t);
  h_19 = t;
  t = n_18;
  t = n_105(t);
  o_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, t_18, a_19, h_19, o_19), o_17);
  return(t);
}
ATerm SDef_3_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,d_21 = NULL,m_21 = NULL,t_21 = NULL,a_22 = NULL,j_22 = NULL,u_22 = NULL,h_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      t_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_23);
  u_20 = t;
  t = d_21;
  t = h_105(t);
  a_22 = t;
  t = m_21;
  t = i_105(t);
  j_22 = t;
  t = t_21;
  t = j_105(t);
  u_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, a_22, j_22, u_22), u_20);
  return(t);
}
ATerm Strategies_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,u_23 = NULL,e_24 = NULL,f_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_24);
  q_23 = t;
  t = u_23;
  t = k_98(t);
  e_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, e_24), q_23);
  return(t);
}
ATerm Specification_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_24);
  r_24 = t;
  t = s_24;
  t = p_98(t);
  t_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, t_24), r_24);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_25 = NULL,p_25 = NULL;
      f_25 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm v_38 = t;
        int w_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_8 = NULL;
            t = eval_config_0_0(t);
            f_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_8);
            t = f_8;
            ;
            LocalPopChoice(w_38);
          }
        else
          {
            t = v_38;
          }
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_25, term_x_38);
        t = geq_0_0(t);
        t = f_25;
        t = c_133(t);
      }
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
    }
  return(t);
}
ATerm spaste_1_0 (ATerm z_141 (ATerm), ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_7 (ATerm t)
      {
        ATerm g_8 = NULL,i_8 = NULL;
        g_8 = t;
        t = z_141(t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_8, i_8);
        {
          ATerm n_7 (ATerm t)
          {
            if(match_cons(t, sym__2))
              {
                ATerm a_39 = ATgetArgument(t, 0);
                if(((ATgetType(a_39) != AT_LIST) || !(ATisEmpty(a_39))))
                  _fail(t);
                {
                  ATerm c_39 = ATgetArgument(t, 1);
                  if(((ATgetType(c_39) != AT_LIST) || !(ATisEmpty(c_39))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm o_7 (ATerm t)
          {
            ATerm i_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm d_39 = ATgetArgument(t, 0);
                if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
                  {
                    i_26 = ATgetFirst((ATermList) d_39);
                    l_26 = (ATerm) ATgetNext((ATermList) d_39);
                  }
                else
                  _fail(t);
                {
                  ATerm h_39 = ATgetArgument(t, 1);
                  if(((ATgetType(h_39) == AT_LIST) && !(ATisEmpty(h_39))))
                    {
                      j_26 = ATgetFirst((ATermList) h_39);
                      m_26 = (ATerm) ATgetNext((ATermList) h_39);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_26, j_26), (ATerm) ATmakeAppl(sym__2, l_26, m_26));
            return(t);
          }
          ATerm p_7 (ATerm t)
          {
            ATerm n_26 = NULL,o_26 = NULL;
            if(match_cons(t, sym__2))
              {
                n_26 = ATgetArgument(t, 0);
                o_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_26), n_26);
            return(t);
          }
          ATerm r_7 (ATerm t)
          {
            ATerm q_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL,y_26 = NULL;
            if(match_cons(t, sym__2))
              {
                q_26 = ATgetArgument(t, 0);
                y_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_26;
            {
              ATerm i_39 = t;
              int j_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm k_39 = ATgetArgument(t, 0);
                      t_26 = ATgetArgument(t, 1);
                      u_26 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_39);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, y_26, t_26, u_26);
                }
              else
                {
                  t = i_39;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm l_39 = ATgetArgument(t, 0);
                      t_26 = ATgetArgument(t, 1);
                      u_26 = ATgetArgument(t, 2);
                      x_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_26, t_26, u_26, x_26);
                }
            }
            return(t);
          }
          t = genzip_4_0(n_7, o_7, p_7, r_7, t);
        }
        return(t);
      }
      t = Let_2_0(l_7, _id, t);
      ;
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm m_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 (ATerm t)
            {
              ATerm n_8 = NULL,p_8 = NULL;
              n_8 = t;
              t = z_141(t);
              p_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_8, p_8);
              {
                ATerm t_7 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm s_39 = ATgetArgument(t, 0);
                      if(((ATgetType(s_39) != AT_LIST) || !(ATisEmpty(s_39))))
                        _fail(t);
                      {
                        ATerm t_39 = ATgetArgument(t, 1);
                        if(((ATgetType(t_39) != AT_LIST) || !(ATisEmpty(t_39))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm u_7 (ATerm t)
                {
                  ATerm j_27 = NULL,k_27 = NULL,m_27 = NULL,n_27 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm v_39 = ATgetArgument(t, 0);
                      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
                        {
                          j_27 = ATgetFirst((ATermList) v_39);
                          m_27 = (ATerm) ATgetNext((ATermList) v_39);
                        }
                      else
                        _fail(t);
                      {
                        ATerm w_39 = ATgetArgument(t, 1);
                        if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
                          {
                            k_27 = ATgetFirst((ATermList) w_39);
                            n_27 = (ATerm) ATgetNext((ATermList) w_39);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_27, k_27), (ATerm) ATmakeAppl(sym__2, m_27, n_27));
                  return(t);
                }
                ATerm v_7 (ATerm t)
                {
                  ATerm o_27 = NULL,p_27 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      o_27 = ATgetArgument(t, 0);
                      p_27 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(p_27), o_27);
                  return(t);
                }
                ATerm w_7 (ATerm t)
                {
                  ATerm r_27 = NULL,t_27 = NULL,u_27 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      r_27 = ATgetArgument(t, 0);
                      u_27 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_27;
                  {
                    ATerm x_39 = t;
                    int y_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm z_39 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_39);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_27);
                      }
                    else
                      {
                        t = x_39;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm a_40 = ATgetArgument(t, 0);
                            t_27 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_27, t_27);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(t_7, u_7, v_7, w_7, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, s_7, _id, t);
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = m_39;
            {
              ATerm b_40 = t;
              int c_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_7 (ATerm t)
                  {
                    ATerm u_8 = NULL,w_8 = NULL;
                    u_8 = t;
                    t = z_141(t);
                    w_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_8, w_8);
                    {
                      ATerm z_7 (ATerm t)
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm d_40 = ATgetArgument(t, 0);
                            if(((ATgetType(d_40) != AT_LIST) || !(ATisEmpty(d_40))))
                              _fail(t);
                            {
                              ATerm e_40 = ATgetArgument(t, 1);
                              if(((ATgetType(e_40) != AT_LIST) || !(ATisEmpty(e_40))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm a_8 (ATerm t)
                      {
                        ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            ATerm f_40 = ATgetArgument(t, 0);
                            if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
                              {
                                b_28 = ATgetFirst((ATermList) f_40);
                                d_28 = (ATerm) ATgetNext((ATermList) f_40);
                              }
                            else
                              _fail(t);
                            {
                              ATerm g_40 = ATgetArgument(t, 1);
                              if(((ATgetType(g_40) == AT_LIST) && !(ATisEmpty(g_40))))
                                {
                                  c_28 = ATgetFirst((ATermList) g_40);
                                  e_28 = (ATerm) ATgetNext((ATermList) g_40);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_28, c_28), (ATerm) ATmakeAppl(sym__2, d_28, e_28));
                        return(t);
                      }
                      ATerm b_8 (ATerm t)
                      {
                        ATerm f_28 = NULL,g_28 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            f_28 = ATgetArgument(t, 0);
                            g_28 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(CheckATermList(g_28), f_28);
                        return(t);
                      }
                      ATerm c_8 (ATerm t)
                      {
                        ATerm k_28 = NULL,n_28 = NULL,o_28 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            k_28 = ATgetArgument(t, 0);
                            o_28 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = k_28;
                        {
                          ATerm h_40 = t;
                          int i_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm n_40 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_40);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_28);
                            }
                          else
                            {
                              t = h_40;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm o_40 = ATgetArgument(t, 0);
                                  n_28 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, o_28, n_28);
                            }
                        }
                        return(t);
                      }
                      t = genzip_4_0(z_7, a_8, b_8, c_8, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, y_7, _id, _id, t);
                  ;
                  LocalPopChoice(c_40);
                }
              else
                {
                  t = b_40;
                  {
                    ATerm q_40 = t;
                    int r_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_8 (ATerm t)
                        {
                          ATerm a_9 = NULL,d_9 = NULL;
                          a_9 = t;
                          t = z_141(t);
                          d_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_9, d_9);
                          {
                            ATerm e_8 (ATerm t)
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm v_40 = ATgetArgument(t, 0);
                                  if(((ATgetType(v_40) != AT_LIST) || !(ATisEmpty(v_40))))
                                    _fail(t);
                                  {
                                    ATerm x_40 = ATgetArgument(t, 1);
                                    if(((ATgetType(x_40) != AT_LIST) || !(ATisEmpty(x_40))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATempty;
                              return(t);
                            }
                            ATerm h_8 (ATerm t)
                            {
                              ATerm s_28 = NULL,u_28 = NULL,v_28 = NULL,y_28 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm y_40 = ATgetArgument(t, 0);
                                  if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
                                    {
                                      s_28 = ATgetFirst((ATermList) y_40);
                                      v_28 = (ATerm) ATgetNext((ATermList) y_40);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm z_40 = ATgetArgument(t, 1);
                                    if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
                                      {
                                        u_28 = ATgetFirst((ATermList) z_40);
                                        y_28 = (ATerm) ATgetNext((ATermList) z_40);
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_28, u_28), (ATerm) ATmakeAppl(sym__2, v_28, y_28));
                              return(t);
                            }
                            ATerm j_8 (ATerm t)
                            {
                              ATerm z_28 = NULL,a_29 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  z_28 = ATgetArgument(t, 0);
                                  a_29 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(a_29), z_28);
                              return(t);
                            }
                            ATerm k_8 (ATerm t)
                            {
                              ATerm c_29 = NULL,e_29 = NULL,g_29 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  c_29 = ATgetArgument(t, 0);
                                  g_29 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = c_29;
                              {
                                ATerm a_41 = t;
                                int b_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm c_41 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(b_41);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_29);
                                  }
                                else
                                  {
                                    t = a_41;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm d_41 = ATgetArgument(t, 0);
                                        e_29 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, g_29, e_29);
                                  }
                              }
                              return(t);
                            }
                            t = genzip_4_0(e_8, h_8, j_8, k_8, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, d_8, _id, _id, t);
                        ;
                        LocalPopChoice(r_40);
                      }
                    else
                      {
                        t = q_40;
                        {
                          ATerm l_8 (ATerm t)
                          {
                            ATerm n_29 = NULL;
                            t = z_141(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                n_29 = ATgetFirst((ATermList) t);
                                {
                                  ATerm e_41 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = n_29;
                            return(t);
                          }
                          t = Rec_2_0(l_8, _id, t);
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
ATerm Rec_2_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,u_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym_Rec_2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_29);
  o_29 = t;
  t = p_29;
  t = p_103(t);
  r_29 = t;
  t = q_29;
  t = q_103(t);
  s_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, r_29, s_29), o_29);
  return(t);
}
ATerm Let_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
  e_30 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_30);
  z_29 = t;
  t = a_30;
  t = s_102(t);
  c_30 = t;
  t = b_30;
  t = t_102(t);
  d_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, c_30, d_30), z_29);
  return(t);
}
ATerm sboundin_3_0 (ATerm a_142 (ATerm), ATerm b_142 (ATerm), ATerm c_142 (ATerm), ATerm t)
{
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(a_142, a_142, t);
      ;
      LocalPopChoice(g_41);
    }
  else
    {
      t = f_41;
      {
        ATerm h_41 = t;
        int i_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(c_142, c_142, a_142, t);
            ;
            LocalPopChoice(i_41);
          }
        else
          {
            t = h_41;
            {
              ATerm k_41 = t;
              int n_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(c_142, c_142, c_142, a_142, t);
                  ;
                  LocalPopChoice(n_41);
                }
              else
                {
                  t = k_41;
                  t = Rec_2_0(c_142, a_142, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm l_30 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      l_30 = ATgetArgument(t, 0);
      {
        ATerm o_41 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_30;
  {
    ATerm m_8 (ATerm t)
    {
      ATerm n_30 = NULL;
      ATerm q_41 = t;
      int r_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              n_30 = ATgetArgument(t, 0);
              {
                ATerm s_41 = ATgetArgument(t, 1);
              }
              {
                ATerm t_41 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(r_41);
          t = n_30;
        }
      else
        {
          t = q_41;
          if(match_cons(t, sym_SDefT_4))
            {
              n_30 = ATgetArgument(t, 0);
              {
                ATerm u_41 = ATgetArgument(t, 1);
              }
              {
                ATerm x_41 = ATgetArgument(t, 2);
              }
              {
                ATerm y_41 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = n_30;
        }
      return(t);
    }
    t = map_1_0(m_8, t);
  }
  return(t);
}
ATerm rename_4_0 (ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_30, (ATerm) ATempty);
  {
    ATerm g_31 (ATerm t)
    {
      ATerm o_8 (ATerm t)
      {
        ATerm z_41 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_31 = NULL,d_31 = NULL;
            if(match_cons(t, sym__2))
              {
                c_31 = ATgetArgument(t, 0);
                d_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_31;
            {
              ATerm q_8 (ATerm t)
              {
                ATerm l_9 = NULL;
                l_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_9, d_31);
                t = lookup_0_0(t);
                return(t);
              }
              t = v_138(q_8, t);
            }
            ;
            LocalPopChoice(b_42);
          }
        else
          {
            t = z_41;
            t = RnBinding_2_0(w_138, y_138, t);
            t = DistBinding_2_0(g_31, x_138, t);
          }
        return(t);
      }
      t = env_alltd_1_0(o_8, t);
      return(t);
    }
    t = g_31(t);
  }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm w_31 = NULL,c_32 = NULL,e_32 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        c_32 = ATgetArgument(t, 0);
        t = c_32;
        if(match_cons(t, sym_Rule_3))
          {
            w_31 = ATgetArgument(t, 0);
            {
              ATerm c_42 = ATgetArgument(t, 1);
            }
            {
              ATerm e_42 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_31;
        {
          ATerm s_8 (ATerm t)
          {
            ATerm i_32 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                i_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, i_32);
            return(t);
          }
          ATerm t_8 (ATerm t)
          {
            ATerm f_42 = t;
            int i_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind0_0_0(t);
                ;
                LocalPopChoice(i_42);
              }
            else
              {
                t = f_42;
                {
                  ATerm m_32 = NULL,p_32 = NULL;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      m_32 = ATgetArgument(t, 0);
                      t = m_32;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm j_42 = t;
                      int k_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm m_42 = ATgetArgument(t, 0);
                              ATerm n_42 = ATgetArgument(t, 1);
                              p_32 = ATgetArgument(t, 2);
                              {
                                ATerm o_42 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_42);
                          t = p_32;
                          {
                            ATerm v_8 (ATerm t)
                            {
                              ATerm w_32 = NULL;
                              ATerm p_42 = t;
                              int r_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      w_32 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_42 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(r_42);
                                  t = w_32;
                                }
                              else
                                {
                                  t = p_42;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      w_32 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_32;
                                }
                              return(t);
                            }
                            t = map_1_0(v_8, t);
                          }
                        }
                      else
                        {
                          t = j_42;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm t_42 = ATgetArgument(t, 0);
                              ATerm u_42 = ATgetArgument(t, 1);
                              p_32 = ATgetArgument(t, 2);
                              {
                                ATerm v_42 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = p_32;
                          {
                            ATerm x_8 (ATerm t)
                            {
                              ATerm e_33 = NULL;
                              ATerm w_42 = t;
                              int x_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      e_33 = ATgetArgument(t, 0);
                                      {
                                        ATerm z_42 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(x_42);
                                  t = e_33;
                                }
                              else
                                {
                                  t = w_42;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      e_33 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = e_33;
                                }
                              return(t);
                            }
                            t = map_1_0(x_8, t);
                          }
                        }
                    }
                }
              }
            return(t);
          }
          t = free_vars_3_0(s_8, t_8, tboundin_3_0, t);
        }
      }
    else
      {
        ATerm a_43 = t;
        int b_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                c_32 = ATgetArgument(t, 0);
                {
                  ATerm c_43 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_43);
            t = c_32;
          }
        else
          {
            t = a_43;
            {
              ATerm d_43 = t;
              int f_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm g_43 = ATgetArgument(t, 0);
                      ATerm h_43 = ATgetArgument(t, 1);
                      e_32 = ATgetArgument(t, 2);
                      {
                        ATerm i_43 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_43);
                  t = e_32;
                  {
                    ATerm y_8 (ATerm t)
                    {
                      ATerm o_33 = NULL;
                      ATerm j_43 = t;
                      int k_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              o_33 = ATgetArgument(t, 0);
                              {
                                ATerm l_43 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_43);
                          t = o_33;
                        }
                      else
                        {
                          t = j_43;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              o_33 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = o_33;
                        }
                      return(t);
                    }
                    t = map_1_0(y_8, t);
                  }
                }
              else
                {
                  t = d_43;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm m_43 = ATgetArgument(t, 0);
                      ATerm n_43 = ATgetArgument(t, 1);
                      e_32 = ATgetArgument(t, 2);
                      {
                        ATerm o_43 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = e_32;
                  {
                    ATerm z_8 (ATerm t)
                    {
                      ATerm v_33 = NULL;
                      ATerm p_43 = t;
                      int t_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              v_33 = ATgetArgument(t, 0);
                              {
                                ATerm u_43 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_43);
                          t = v_33;
                        }
                      else
                        {
                          t = p_43;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              v_33 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = v_33;
                        }
                      return(t);
                    }
                    t = map_1_0(z_8, t);
                  }
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, r_8, tboundin_3_0, tpaste_1_0, t);
  {
    ATerm b_9 (ATerm t)
    {
      ATerm v_43 = t;
      int w_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Bind1_0_0(t);
          ;
          LocalPopChoice(w_43);
        }
      else
        {
          t = v_43;
          {
            ATerm b_34 = NULL,c_34 = NULL;
            ATerm x_43 = t;
            int y_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDef_3))
                  {
                    ATerm a_44 = ATgetArgument(t, 0);
                    c_34 = ATgetArgument(t, 1);
                    {
                      ATerm c_44 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(y_43);
                t = c_34;
                {
                  ATerm c_9 (ATerm t)
                  {
                    ATerm i_34 = NULL;
                    ATerm d_44 = t;
                    int e_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_VarDec_2))
                          {
                            i_34 = ATgetArgument(t, 0);
                            {
                              ATerm f_44 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_44);
                        t = i_34;
                      }
                    else
                      {
                        t = d_44;
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            i_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = i_34;
                      }
                    return(t);
                  }
                  t = map_1_0(c_9, t);
                }
              }
            else
              {
                t = x_43;
                {
                  ATerm g_44 = t;
                  int h_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          b_34 = ATgetArgument(t, 0);
                          {
                            ATerm i_44 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(h_44);
                      t = (ATerm) ATinsert(ATempty, b_34);
                    }
                  else
                    {
                      t = g_44;
                      {
                        ATerm j_44 = t;
                        int k_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_SDefT_4))
                              {
                                ATerm l_44 = ATgetArgument(t, 0);
                                c_34 = ATgetArgument(t, 1);
                                {
                                  ATerm m_44 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm n_44 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(k_44);
                            t = c_34;
                            {
                              ATerm e_9 (ATerm t)
                              {
                                ATerm q_34 = NULL;
                                ATerm o_44 = t;
                                int q_44 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        q_34 = ATgetArgument(t, 0);
                                        {
                                          ATerm r_44 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(q_44);
                                    t = q_34;
                                  }
                                else
                                  {
                                    t = o_44;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        q_34 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = q_34;
                                  }
                                return(t);
                              }
                              t = map_1_0(e_9, t);
                            }
                          }
                        else
                          {
                            t = j_44;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm s_44 = ATgetArgument(t, 0);
                                c_34 = ATgetArgument(t, 1);
                                {
                                  ATerm t_44 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm u_44 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = c_34;
                            {
                              ATerm f_9 (ATerm t)
                              {
                                ATerm w_34 = NULL;
                                ATerm v_44 = t;
                                int x_44 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        w_34 = ATgetArgument(t, 0);
                                        {
                                          ATerm y_44 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(x_44);
                                    t = w_34;
                                  }
                                else
                                  {
                                    t = v_44;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        w_34 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = w_34;
                                  }
                                return(t);
                              }
                              t = map_1_0(f_9, t);
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
    t = rename_4_0(SVar_1_0, b_9, sboundin_3_0, spaste_1_0, t);
  }
  return(t);
}
ATerm ListBuild_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,e_35 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      a_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_35;
  {
    ATerm g_9 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm z_44 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_44) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm a_45 = ATgetArgument(t, 1);
            if(((ATgetType(a_45) == AT_LIST) && !(ATisEmpty(a_45))))
              {
                ATerm b_45 = ATgetFirst((ATermList) a_45);
                if(match_cons(b_45, sym_Var_1))
                  {
                    ATerm d_45 = ATgetArgument(b_45, 0);
                    if(match_cons(d_45, sym_ListVar_1))
                      {
                        if(((b_35 != NULL) && (b_35 != ATgetArgument(d_45, 0))))
                          _fail(ATgetArgument(d_45, 0));
                        else
                          b_35 = ATgetArgument(d_45, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm c_45 = (ATerm) ATgetNext((ATermList) a_45);
                  if(((ATgetType(c_45) == AT_LIST) && !(ATisEmpty(c_45))))
                    {
                      ATerm e_45 = ATgetFirst((ATermList) c_45);
                      if(match_cons(e_45, sym_Op_2))
                        {
                          ATerm g_45 = ATgetArgument(e_45, 0);
                          if((ATgetSymbol((ATermAppl) g_45) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm h_45 = ATgetArgument(e_45, 1);
                            if(((ATgetType(h_45) != AT_LIST) || !(ATisEmpty(h_45))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm f_45 = (ATerm) ATgetNext((ATermList) c_45);
                        if(((ATgetType(f_45) != AT_LIST) || !(ATisEmpty(f_45))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_35));
      return(t);
    }
    t = oncetd_1_0(g_9, t);
    e_35 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, e_35);
  }
  return(t);
}
ATerm ListMatch_0_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      g_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_35;
  {
    ATerm h_9 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm i_45 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_45) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm j_45 = ATgetArgument(t, 1);
            if(((ATgetType(j_45) == AT_LIST) && !(ATisEmpty(j_45))))
              {
                ATerm k_45 = ATgetFirst((ATermList) j_45);
                if(match_cons(k_45, sym_Var_1))
                  {
                    ATerm n_45 = ATgetArgument(k_45, 0);
                    if(match_cons(n_45, sym_ListVar_1))
                      {
                        if(((h_35 != NULL) && (h_35 != ATgetArgument(n_45, 0))))
                          _fail(ATgetArgument(n_45, 0));
                        else
                          h_35 = ATgetArgument(n_45, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm m_45 = (ATerm) ATgetNext((ATermList) j_45);
                  if(((ATgetType(m_45) == AT_LIST) && !(ATisEmpty(m_45))))
                    {
                      ATerm o_45 = ATgetFirst((ATermList) m_45);
                      if(match_cons(o_45, sym_Op_2))
                        {
                          ATerm q_45 = ATgetArgument(o_45, 0);
                          if((ATgetSymbol((ATermAppl) q_45) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm s_45 = ATgetArgument(o_45, 1);
                            if(((ATgetType(s_45) != AT_LIST) || !(ATisEmpty(s_45))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm p_45 = (ATerm) ATgetNext((ATermList) m_45);
                        if(((ATgetType(p_45) != AT_LIST) || !(ATisEmpty(p_45))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_35));
      return(t);
    }
    t = oncetd_1_0(h_9, t);
    i_35 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, i_35);
  }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm t_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm i_9 (ATerm t)
        {
          ATerm x_45 = t;
          int y_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_0, t);
              ;
              LocalPopChoice(y_45);
            }
          else
            {
              t = x_45;
            }
          return(t);
        }
        t = Cons_2_0(_id, i_9, t);
      }
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = t_45;
      {
        ATerm j_9 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, j_9, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,b_36 = NULL,d_36 = NULL,g_36 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_36, g_36);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_36 = ATgetArgument(t, 0);
          t = d_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_35 = ATgetFirst((ATermList) t);
              y_35 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_35, (ATerm) ATmakeAppl(sym_LChoices_1, y_35));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_z_45;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_36 = ATgetArgument(t, 0);
              t = d_36;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_35 = ATgetFirst((ATermList) t);
                  y_35 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_35, (ATerm) ATmakeAppl(sym_Choices_1, y_35));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_z_45;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_36 = ATgetArgument(t, 0);
                  t = d_36;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_35 = ATgetFirst((ATermList) t);
                      y_35 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_35, (ATerm) ATmakeAppl(sym_Seqs_1, y_35));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_36;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_36 = ATgetArgument(t, 0);
                      g_36 = ATgetArgument(t, 1);
                      b_36 = ATgetArgument(t, 2);
                      z_35 = ATgetArgument(t, 3);
                      {
                        ATerm t_36 = NULL,u_36 = NULL;
                        t = g_36;
                        {
                          ATerm k_9 (ATerm t)
                          {
                            ATerm v_36 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                v_36 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, v_36, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_46), term_e_46));
                            return(t);
                          }
                          t = map1_1_0(k_9, t);
                          t_36 = t;
                          t = b_36;
                          {
                            ATerm m_9 (ATerm t)
                            {
                              ATerm f_46 = t;
                              int g_46 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_36 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      x_36 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_36, term_e_46);
                                  ;
                                  LocalPopChoice(g_46);
                                }
                              else
                                {
                                  t = f_46;
                                }
                              return(t);
                            }
                            t = map1_1_0(m_9, t);
                            u_36 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_36, t_36, u_36, z_35);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_36 = ATgetArgument(t, 0);
                          g_36 = ATgetArgument(t, 1);
                          b_36 = ATgetArgument(t, 2);
                          z_35 = ATgetArgument(t, 3);
                          {
                            ATerm h_46 = t;
                            int i_46 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_37 = NULL,e_37 = NULL;
                                t = b_36;
                                {
                                  ATerm n_9 (ATerm t)
                                  {
                                    ATerm f_37 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        f_37 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, f_37, term_e_46);
                                    return(t);
                                  }
                                  t = map1_1_0(n_9, t);
                                  d_37 = t;
                                  t = g_36;
                                  {
                                    ATerm o_9 (ATerm t)
                                    {
                                      ATerm k_46 = t;
                                      int l_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_37 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              h_37 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, h_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_46), term_e_46));
                                          ;
                                          LocalPopChoice(l_46);
                                        }
                                      else
                                        {
                                          t = k_46;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(o_9, t);
                                    e_37 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_36, e_37, d_37, z_35);
                                  }
                                }
                                ;
                                LocalPopChoice(i_46);
                              }
                            else
                              {
                                t = h_46;
                                {
                                  ATerm q_37 = NULL,s_37 = NULL;
                                  t = g_36;
                                  {
                                    ATerm p_9 (ATerm t)
                                    {
                                      ATerm t_37 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          t_37 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_46), term_e_46));
                                      return(t);
                                    }
                                    t = map1_1_0(p_9, t);
                                    q_37 = t;
                                    t = b_36;
                                    {
                                      ATerm q_9 (ATerm t)
                                      {
                                        ATerm n_46 = t;
                                        int o_46 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm v_37 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                v_37 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, v_37, term_e_46);
                                            ;
                                            LocalPopChoice(o_46);
                                          }
                                        else
                                          {
                                            t = n_46;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(q_9, t);
                                      s_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_36, q_37, s_37, z_35);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              d_36 = ATgetArgument(t, 0);
                              g_36 = ATgetArgument(t, 1);
                              b_36 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, g_36, (ATerm) ATmakeAppl(sym_Op_2, term_t_34, (ATerm) ATinsert(ATinsert(ATempty, b_36), d_36)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_36 = ATgetArgument(t, 0);
                                  g_36 = ATgetArgument(t, 1);
                                  b_36 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_36)), d_36), (ATerm) ATmakeAppl(sym_Build_1, g_36)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_36 = ATgetArgument(t, 0);
                                      g_36 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_36, (ATerm) ATmakeAppl(sym_Match_1, g_36));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_36 = ATgetArgument(t, 0);
                                          g_36 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_36), g_36);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_36 = ATgetArgument(t, 0);
                                              g_36 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_36), d_36);
                                        }
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
ATerm repeat_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm m_38 (ATerm t)
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_112(t);
        t = m_38(t);
        ;
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
      }
    return(t);
  }
  t = m_38(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm r_46 = t;
  if((PushChoice() == 0))
    {
      ATerm r_9 (ATerm t)
      {
        ATerm s_46 = t;
        int v_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(v_46);
          }
        else
          {
            t = s_46;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(r_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_46;
    }
  return(t);
}
ATerm Con_3_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  u_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
      q_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_38);
  n_38 = t;
  t = o_38;
  t = i_100(t);
  r_38 = t;
  t = p_38;
  t = j_100(t);
  s_38 = t;
  t = q_38;
  t = k_100(t);
  t_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, r_38, s_38, t_38), n_38);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm w_46 = t;
  if((PushChoice() == 0))
    {
      ATerm s_9 (ATerm t)
      {
        ATerm x_46 = t;
        int y_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(y_46);
          }
        else
          {
            t = x_46;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(s_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_46;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm b_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_39;
  if(match_cons(t, sym_StratRule_3))
    {
      e_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
      g_39 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_39), (ATerm) ATmakeAppl(sym_Where_1, g_39)), e_39));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          e_39 = ATgetArgument(t, 0);
          f_39 = ATgetArgument(t, 1);
          g_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_39;
      t = pureterm_0_0(t);
      t = f_39;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, f_39)), (ATerm) ATmakeAppl(sym_Where_1, g_39)), (ATerm) ATmakeAppl(sym_Match_1, e_39)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,u_39 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,p_40 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm z_46 = ATgetArgument(t, 0);
      if(match_cons(z_46, sym_Rule_3))
        {
          n_39 = ATgetArgument(z_46, 0);
          o_39 = ATgetArgument(z_46, 1);
          p_39 = ATgetArgument(z_46, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  q_39 = t;
  t = n_39;
  {
    ATerm t_9 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm a_47 = ATgetArgument(t, 0);
          if(match_cons(a_47, sym_Var_1))
            {
              if(((j_40 != NULL) && (j_40 != ATgetArgument(a_47, 0))))
                _fail(ATgetArgument(a_47, 0));
              else
                j_40 = ATgetArgument(a_47, 0);
            }
          else
            _fail(t);
          if(((u_39 != NULL) && (u_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_39 = ATgetArgument(t, 1);
          {
            ATerm b_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_40));
      return(t);
    }
    t = oncetd_1_0(t_9, t);
    k_40 = t;
    t = o_39;
    {
      ATerm u_9 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm c_47 = ATgetArgument(t, 0);
            if(match_cons(c_47, sym_Var_1))
              {
                if(((j_40 != NULL) && (j_40 != ATgetArgument(c_47, 0))))
                  _fail(ATgetArgument(c_47, 0));
                else
                  j_40 = ATgetArgument(c_47, 0);
              }
            else
              _fail(t);
            if(((l_40 != NULL) && (l_40 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_40 = ATgetArgument(t, 1);
            {
              ATerm d_47 = ATgetArgument(t, 2);
              if(match_cons(d_47, sym_CallT_3))
                {
                  if(((m_40 != NULL) && (m_40 != ATgetArgument(d_47, 0))))
                    _fail(ATgetArgument(d_47, 0));
                  else
                    m_40 = ATgetArgument(d_47, 0);
                  {
                    ATerm e_47 = ATgetArgument(d_47, 1);
                    if(((ATgetType(e_47) != AT_LIST) || !(ATisEmpty(e_47))))
                      _fail(t);
                  }
                  {
                    ATerm f_47 = ATgetArgument(d_47, 2);
                    if(((ATgetType(f_47) != AT_LIST) || !(ATisEmpty(f_47))))
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
      t = oncetd_1_0(u_9, t);
      p_40 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, k_40, p_40, (ATerm) ATmakeAppl(sym_Seq_2, p_39, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(m_40), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_39), not_null(l_40), term_q_36))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_40)), (ATerm) ATmakeAppl(sym_Var_1, q_39))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_47 = t;
      int k_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(k_47);
        }
      else
        {
          t = i_47;
          {
            ATerm m_47 = t;
            int n_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(n_47);
              }
            else
              {
                t = m_47;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(h_47);
    }
  else
    {
      t = g_47;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_40;
  {
    ATerm v_9 (ATerm t)
    {
      ATerm o_47 = t;
      int p_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_40 = NULL;
          if(match_cons(t, sym_ListVar_1))
            {
              w_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_40;
          ;
          LocalPopChoice(p_47);
        }
      else
        {
          t = o_47;
        }
      return(t);
    }
    t = map_1_0(v_9, t);
    u_40 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, u_40, t_40);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  t = q_113(t);
  {
    ATerm w_9 (ATerm t)
    {
      t = topdown_1_0(q_113, t);
      return(t);
    }
    t = SRTS_all(w_9, t);
  }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm j_41 = NULL,l_41 = NULL,m_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
      p_41 = ATgetArgument(t, 2);
      j_41 = ATgetArgument(t, 3);
      {
        ATerm v_41 = NULL,w_41 = NULL,a_42 = NULL;
        t = p_41;
        {
          ATerm x_9 (ATerm t)
          {
            ATerm d_42 = NULL;
            ATerm q_47 = t;
            int r_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_VarDec_2))
                  {
                    d_42 = ATgetArgument(t, 0);
                    {
                      ATerm s_47 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(r_47);
                t = d_42;
              }
            else
              {
                t = q_47;
                if(match_cons(t, sym_DefaultVarDec_1))
                  {
                    d_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_42;
              }
            return(t);
          }
          t = map_1_0(x_9, t);
          v_41 = t;
          t = j_41;
          {
            ATerm y_9 (ATerm t)
            {
              ATerm g_42 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  g_42 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, g_42);
              return(t);
            }
            ATerm z_9 (ATerm t)
            {
              ATerm h_42 = NULL,l_42 = NULL,q_42 = NULL;
              if(match_cons(t, sym_LRule_1))
                {
                  l_42 = ATgetArgument(t, 0);
                  t = l_42;
                  if(match_cons(t, sym_Rule_3))
                    {
                      h_42 = ATgetArgument(t, 0);
                      {
                        ATerm u_47 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm v_47 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = h_42;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm w_47 = t;
                  int x_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Scope_2))
                        {
                          l_42 = ATgetArgument(t, 0);
                          {
                            ATerm y_47 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(x_47);
                      t = l_42;
                    }
                  else
                    {
                      t = w_47;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          l_42 = ATgetArgument(t, 0);
                          t = l_42;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm a_48 = t;
                          int b_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm c_48 = ATgetArgument(t, 0);
                                  ATerm d_48 = ATgetArgument(t, 1);
                                  q_42 = ATgetArgument(t, 2);
                                  {
                                    ATerm e_48 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(b_48);
                              t = q_42;
                              {
                                ATerm a_10 (ATerm t)
                                {
                                  ATerm y_42 = NULL;
                                  ATerm f_48 = t;
                                  int g_48 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          y_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm h_48 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(g_48);
                                      t = y_42;
                                    }
                                  else
                                    {
                                      t = f_48;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          y_42 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = y_42;
                                    }
                                  return(t);
                                }
                                t = map_1_0(a_10, t);
                              }
                            }
                          else
                            {
                              t = a_48;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm i_48 = ATgetArgument(t, 0);
                                  ATerm j_48 = ATgetArgument(t, 1);
                                  q_42 = ATgetArgument(t, 2);
                                  {
                                    ATerm k_48 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = q_42;
                              {
                                ATerm b_10 (ATerm t)
                                {
                                  ATerm e_43 = NULL;
                                  ATerm m_48 = t;
                                  int n_48 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          e_43 = ATgetArgument(t, 0);
                                          {
                                            ATerm o_48 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(n_48);
                                      t = e_43;
                                    }
                                  else
                                    {
                                      t = m_48;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          e_43 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = e_43;
                                    }
                                  return(t);
                                }
                                t = map_1_0(b_10, t);
                              }
                            }
                        }
                    }
                }
              return(t);
            }
            t = free_vars_3_0(y_9, z_9, tboundin_3_0, t);
            w_41 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_41, v_41);
            t = diff_0_0(t);
            a_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_41, m_41, p_41, (ATerm) ATmakeAppl(sym_Scope_2, a_42, j_41));
          }
        }
      }
    }
  else
    {
      ATerm q_43 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          l_41 = ATgetArgument(t, 0);
          m_41 = ATgetArgument(t, 1);
          p_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_41;
      {
        ATerm c_10 (ATerm t)
        {
          ATerm r_43 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              r_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, r_43);
          return(t);
        }
        ATerm d_10 (ATerm t)
        {
          ATerm s_43 = NULL,z_43 = NULL,b_44 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              z_43 = ATgetArgument(t, 0);
              t = z_43;
              if(match_cons(t, sym_Rule_3))
                {
                  s_43 = ATgetArgument(t, 0);
                  {
                    ATerm p_48 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm s_48 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = s_43;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm t_48 = t;
              int u_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      z_43 = ATgetArgument(t, 0);
                      {
                        ATerm w_48 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_48);
                  t = z_43;
                }
              else
                {
                  t = t_48;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      z_43 = ATgetArgument(t, 0);
                      t = z_43;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm y_48 = t;
                      int z_48 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm a_49 = ATgetArgument(t, 0);
                              ATerm b_49 = ATgetArgument(t, 1);
                              b_44 = ATgetArgument(t, 2);
                              {
                                ATerm c_49 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_48);
                          t = b_44;
                          {
                            ATerm e_10 (ATerm t)
                            {
                              ATerm p_44 = NULL;
                              ATerm d_49 = t;
                              int e_49 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      p_44 = ATgetArgument(t, 0);
                                      {
                                        ATerm g_49 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(e_49);
                                  t = p_44;
                                }
                              else
                                {
                                  t = d_49;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      p_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_44;
                                }
                              return(t);
                            }
                            t = map_1_0(e_10, t);
                          }
                        }
                      else
                        {
                          t = y_48;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm h_49 = ATgetArgument(t, 0);
                              ATerm i_49 = ATgetArgument(t, 1);
                              b_44 = ATgetArgument(t, 2);
                              {
                                ATerm j_49 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = b_44;
                          {
                            ATerm g_10 (ATerm t)
                            {
                              ATerm w_44 = NULL;
                              ATerm k_49 = t;
                              int m_49 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      w_44 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_49 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(m_49);
                                  t = w_44;
                                }
                              else
                                {
                                  t = k_49;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      w_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_44;
                                }
                              return(t);
                            }
                            t = map_1_0(g_10, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(c_10, d_10, tboundin_3_0, t);
        q_43 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_41, m_41, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, q_43, p_41));
      }
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm l_45 = NULL,r_45 = NULL,u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      r_45 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
      v_45 = ATgetArgument(t, 2);
      l_45 = ATgetArgument(t, 3);
      {
        ATerm c_46 = NULL,d_46 = NULL,j_46 = NULL;
        t = v_45;
        {
          ATerm h_10 (ATerm t)
          {
            ATerm m_46 = NULL;
            ATerm o_49 = t;
            int p_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_VarDec_2))
                  {
                    m_46 = ATgetArgument(t, 0);
                    {
                      ATerm q_49 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_49);
                t = m_46;
              }
            else
              {
                t = o_49;
                if(match_cons(t, sym_DefaultVarDec_1))
                  {
                    m_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_46;
              }
            return(t);
          }
          t = map_1_0(h_10, t);
          c_46 = t;
          t = l_45;
          {
            ATerm i_10 (ATerm t)
            {
              ATerm t_46 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  t_46 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, t_46);
              return(t);
            }
            ATerm m_10 (ATerm t)
            {
              ATerm u_46 = NULL,j_47 = NULL,l_47 = NULL;
              if(match_cons(t, sym_LRule_1))
                {
                  j_47 = ATgetArgument(t, 0);
                  t = j_47;
                  if(match_cons(t, sym_Rule_3))
                    {
                      u_46 = ATgetArgument(t, 0);
                      {
                        ATerm r_49 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm s_49 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = u_46;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm u_49 = t;
                  int v_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Scope_2))
                        {
                          j_47 = ATgetArgument(t, 0);
                          {
                            ATerm y_49 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(v_49);
                      t = j_47;
                    }
                  else
                    {
                      t = u_49;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          j_47 = ATgetArgument(t, 0);
                          t = j_47;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm b_50 = t;
                          int f_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm g_50 = ATgetArgument(t, 0);
                                  ATerm h_50 = ATgetArgument(t, 1);
                                  l_47 = ATgetArgument(t, 2);
                                  {
                                    ATerm i_50 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(f_50);
                              t = l_47;
                              {
                                ATerm n_10 (ATerm t)
                                {
                                  ATerm t_47 = NULL;
                                  ATerm j_50 = t;
                                  int k_50 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          t_47 = ATgetArgument(t, 0);
                                          {
                                            ATerm l_50 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(k_50);
                                      t = t_47;
                                    }
                                  else
                                    {
                                      t = j_50;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          t_47 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = t_47;
                                    }
                                  return(t);
                                }
                                t = map_1_0(n_10, t);
                              }
                            }
                          else
                            {
                              t = b_50;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm m_50 = ATgetArgument(t, 0);
                                  ATerm n_50 = ATgetArgument(t, 1);
                                  l_47 = ATgetArgument(t, 2);
                                  {
                                    ATerm o_50 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = l_47;
                              {
                                ATerm o_10 (ATerm t)
                                {
                                  ATerm z_47 = NULL;
                                  ATerm p_50 = t;
                                  int q_50 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          z_47 = ATgetArgument(t, 0);
                                          {
                                            ATerm r_50 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(q_50);
                                      t = z_47;
                                    }
                                  else
                                    {
                                      t = p_50;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          z_47 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = z_47;
                                    }
                                  return(t);
                                }
                                t = map_1_0(o_10, t);
                              }
                            }
                        }
                    }
                }
              return(t);
            }
            t = free_vars_3_0(i_10, m_10, tboundin_3_0, t);
            d_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_46, c_46);
            t = diff_0_0(t);
            j_46 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_45, u_45, v_45, (ATerm) ATmakeAppl(sym_Scope_2, j_46, (ATerm) ATmakeAppl(sym_SRule_1, l_45)));
          }
        }
      }
    }
  else
    {
      ATerm l_48 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          r_45 = ATgetArgument(t, 0);
          u_45 = ATgetArgument(t, 1);
          v_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_45;
      {
        ATerm y_10 (ATerm t)
        {
          ATerm q_48 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              q_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, q_48);
          return(t);
        }
        ATerm e_11 (ATerm t)
        {
          ATerm r_48 = NULL,v_48 = NULL,x_48 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              v_48 = ATgetArgument(t, 0);
              t = v_48;
              if(match_cons(t, sym_Rule_3))
                {
                  r_48 = ATgetArgument(t, 0);
                  {
                    ATerm s_50 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm t_50 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = r_48;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm u_50 = t;
              int v_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      v_48 = ATgetArgument(t, 0);
                      {
                        ATerm w_50 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_50);
                  t = v_48;
                }
              else
                {
                  t = u_50;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      v_48 = ATgetArgument(t, 0);
                      t = v_48;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm x_50 = t;
                      int y_50 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm z_50 = ATgetArgument(t, 0);
                              ATerm a_51 = ATgetArgument(t, 1);
                              x_48 = ATgetArgument(t, 2);
                              {
                                ATerm b_51 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(y_50);
                          t = x_48;
                          {
                            ATerm f_11 (ATerm t)
                            {
                              ATerm f_49 = NULL;
                              ATerm c_51 = t;
                              int d_51 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      f_49 = ATgetArgument(t, 0);
                                      {
                                        ATerm e_51 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(d_51);
                                  t = f_49;
                                }
                              else
                                {
                                  t = c_51;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      f_49 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_49;
                                }
                              return(t);
                            }
                            t = map_1_0(f_11, t);
                          }
                        }
                      else
                        {
                          t = x_50;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm f_51 = ATgetArgument(t, 0);
                              ATerm g_51 = ATgetArgument(t, 1);
                              x_48 = ATgetArgument(t, 2);
                              {
                                ATerm m_51 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = x_48;
                          {
                            ATerm g_11 (ATerm t)
                            {
                              ATerm l_49 = NULL;
                              ATerm n_51 = t;
                              int o_51 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      l_49 = ATgetArgument(t, 0);
                                      {
                                        ATerm p_51 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(o_51);
                                  t = l_49;
                                }
                              else
                                {
                                  t = n_51;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      l_49 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_49;
                                }
                              return(t);
                            }
                            t = map_1_0(g_11, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(y_10, e_11, tboundin_3_0, t);
        l_48 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, r_45, u_45, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, l_48, (ATerm) ATmakeAppl(sym_SRule_1, v_45)));
      }
    }
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm d_50 (ATerm t_49, ATerm t)
  {
    ATerm w_49 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue)), t_49);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_49 = ATgetFirst((ATermList) t);
        {
          ATerm w_51 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_49;
    if(match_cons(t, sym_Defined_1))
      {
        ATerm z_51 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) z_51) != ATmakeSymbol("r_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_p_34;
    return(t);
  }
  ATerm e_50 (ATerm x_49, ATerm t)
  {
    ATerm z_49 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue)), x_49);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_49 = ATgetFirst((ATermList) t);
        {
          ATerm a_52 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_49;
    if(match_cons(t, sym_Defined_1))
      {
        ATerm b_52 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) b_52) != ATmakeSymbol("o_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_p_34;
    return(t);
  }
  ATerm a_50 = NULL,c_50 = NULL;
  a_50 = t;
  if(match_cons(t, sym__2))
    {
      ATerm c_52 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_50;
  if(match_int(t, 0))
    {
      ATerm d_52 = t;
      int p_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_50(a_50, t);
          ;
          LocalPopChoice(p_52);
        }
      else
        {
          t = d_52;
          t = e_50(a_50, t);
        }
    }
  else
    {
      t = d_50(a_50, t);
    }
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
  i_51 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      j_51 = ATgetArgument(t, 0);
      k_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_51;
  if(match_cons(t, sym_FunType_2))
    {
      l_51 = ATgetArgument(t, 0);
      h_51 = ATgetArgument(t, 1);
      {
        ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
        t = l_51;
        {
          ATerm h_11 (ATerm t)
          {
            t = term_q_52;
            return(t);
          }
          ATerm i_11 (ATerm t)
          {
            ATerm t_10 = NULL,u_10 = NULL;
            if(match_cons(t, sym__2))
              {
                t_10 = ATgetArgument(t, 0);
                u_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm r_52 = t;
              int s_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(t_10, u_10);
                  ;
                  LocalPopChoice(s_52);
                }
              else
                {
                  t = r_52;
                  t = SSL_addr(t_10, u_10);
                }
            }
            return(t);
          }
          ATerm j_11 (ATerm t)
          {
            t = term_v_52;
            return(t);
          }
          t = foldr_3_0(h_11, i_11, j_11, t);
          p_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_51, p_10);
          {
            ATerm w_52 = t;
            if((PushChoice() == 0))
              {
                t = CongDefined_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_52;
              }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_51, p_10), term_j_53);
            {
              ATerm m_11 (ATerm t)
              {
                t = term_k_53;
                return(t);
              }
              t = assert_1_0(m_11, t);
              t = l_51;
              {
                ATerm n_11 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_36;
                  return(t);
                }
                ATerm o_11 (ATerm t)
                {
                  ATerm v_10 = NULL,w_10 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_10 = ATgetFirst((ATermList) t);
                      w_10 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
                  return(t);
                }
                ATerm p_11 (ATerm t)
                {
                  ATerm x_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm l_53 = ATgetArgument(t, 0);
                      if(match_cons(l_53, sym__2))
                        {
                          x_10 = ATgetArgument(l_53, 0);
                          a_11 = ATgetArgument(l_53, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm m_53 = ATgetArgument(t, 1);
                        if(match_cons(m_53, sym__2))
                          {
                            z_10 = ATgetArgument(m_53, 0);
                            b_11 = ATgetArgument(m_53, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_10), x_10), (ATerm) ATinsert(CheckATermList(b_11), a_11));
                  return(t);
                }
                ATerm q_11 (ATerm t)
                {
                  ATerm c_11 = NULL;
                  t = new_0_0(t);
                  c_11 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, c_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_46), term_e_46)), c_11);
                  return(t);
                }
                t = genzip_4_0(n_11, o_11, p_11, q_11, t);
                if(match_cons(t, sym__2))
                  {
                    q_10 = ATgetArgument(t, 0);
                    r_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_10;
                {
                  ATerm w_11 (ATerm t)
                  {
                    ATerm d_11 = NULL;
                    d_11 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_11), (ATerm)ATempty, (ATerm) ATempty);
                    return(t);
                  }
                  t = map_1_0(w_11, t);
                  s_10 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_51, q_10, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, j_51, s_10));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm n_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, j_51, term_q_52);
      {
        ATerm o_53 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_53;
          }
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_51, term_q_52), term_q_53);
        {
          ATerm x_11 (ATerm t)
          {
            t = term_k_53;
            return(t);
          }
          t = assert_1_0(x_11, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, j_51, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, j_51, (ATerm) ATempty));
        }
      }
    }
  return(t);
}
ATerm RulesToSdefs_0_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm r_53 = ATgetArgument(t, 0);
      if(((ATgetType(r_53) == AT_LIST) && !(ATisEmpty(r_53))))
        {
          ATerm s_53 = ATgetFirst((ATermList) r_53);
          if(match_cons(s_53, sym_Signature_1))
            {
              q_51 = ATgetArgument(s_53, 0);
            }
          else
            _fail(t);
          {
            ATerm t_53 = (ATerm) ATgetNext((ATermList) r_53);
            if(((ATgetType(t_53) == AT_LIST) && !(ATisEmpty(t_53))))
              {
                ATerm u_53 = ATgetFirst((ATermList) t_53);
                if(match_cons(u_53, sym_Strategies_1))
                  {
                    r_51 = ATgetArgument(u_53, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm v_53 = (ATerm) ATgetNext((ATermList) t_53);
                  if(((ATgetType(v_53) != AT_LIST) || !(ATisEmpty(v_53))))
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
  t = q_51;
  {
    ATerm y_11 (ATerm t)
    {
      t = term_k_53;
      return(t);
    }
    ATerm z_11 (ATerm t)
    {
      ATerm a_12 (ATerm t)
      {
        ATerm v_51 = NULL;
        if(match_cons(t, sym_Constructors_1))
          {
            v_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_51;
        t = filter_1_0(MkCongDef_0_0, t);
        return(t);
      }
      t = filter_1_0(a_12, t);
      t = concat_0_0(t);
      return(t);
    }
    t = scope_2_0(y_11, z_11, t);
    s_51 = t;
    t = (ATerm) ATinsert(CheckATermList(r_51), (ATerm) ATmakeAppl(sym_RDefT_4, term_w_53, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_y_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_46), term_e_46))), (ATerm) ATmakeAppl(sym_VarDec_2, term_x_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_46), term_e_46))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_d_54, term_i_54, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_v_54), term_o_54)))));
    {
      ATerm f_12 (ATerm t)
      {
        ATerm w_54 = t;
        int x_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RDtoSD_0_0(t);
            ;
            LocalPopChoice(x_54);
          }
        else
          {
            t = w_54;
            t = DeclareVariables_0_0(t);
          }
        {
          ATerm h_12 (ATerm t)
          {
            ATerm y_54 = t;
            int z_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_51 = NULL,y_51 = NULL;
                if(match_cons(t, sym_Call_2))
                  {
                    x_51 = ATgetArgument(t, 0);
                    y_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, x_51, y_51, (ATerm) ATempty);
                ;
                LocalPopChoice(z_54);
              }
            else
              {
                t = y_54;
              }
            return(t);
          }
          t = topdown_1_0(h_12, t);
        }
        return(t);
      }
      t = map_1_0(f_12, t);
      t_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_51, t_51);
      {
        ATerm a_55 = t;
        int b_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm d_55 = ATgetArgument(t, 0);
                ATerm e_55 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_51;
            {
              ATerm i_12 (ATerm t)
              {
                t = t_51;
                return(t);
              }
              t = at_end_1_0(i_12, t);
            }
            ;
            LocalPopChoice(b_55);
          }
        else
          {
            t = a_55;
            {
              ATerm l_11 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_51, t_51));
              if(match_cons(t, sym__2))
                {
                  ATerm g_55 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_55) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  l_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_11;
              t = concat_0_0(t);
            }
          }
        u_51 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, u_51)), (ATerm) ATmakeAppl(sym_Signature_1, q_51)));
      }
    }
  }
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      e_52 = ATgetArgument(t, 0);
      f_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_52 = ATgetFirst((ATermList) t);
      {
        ATerm h_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_52;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm i_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_55) != ATmakeSymbol("c_2", 0, ATtrue)))
        _fail(t);
      g_52 = ATgetArgument(t, 1);
      h_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_52;
  {
    ATerm l_12 (ATerm t)
    {
      t = term_q_52;
      return(t);
    }
    ATerm n_12 (ATerm t)
    {
      ATerm l_52 = NULL,m_52 = NULL;
      if(match_cons(t, sym__2))
        {
          l_52 = ATgetArgument(t, 0);
          m_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_55 = t;
        int k_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(l_52, m_52);
            ;
            LocalPopChoice(k_55);
          }
        else
          {
            t = j_55;
            t = SSL_addr(l_52, m_52);
          }
      }
      return(t);
    }
    ATerm o_12 (ATerm t)
    {
      t = term_v_52;
      return(t);
    }
    t = foldr_3_0(l_12, n_12, o_12, t);
    k_52 = t;
    t = SSL_int_to_string(k_52);
    j_52 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue))), j_52), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), e_52), (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue))), h_52), (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue))), g_52), (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym_Op_2, e_52, f_52);
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm q_12 (ATerm t)
  {
    ATerm n_52 = NULL,o_52 = NULL;
    if(match_cons(t, sym__2))
      {
        n_52 = ATgetArgument(t, 0);
        o_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_52, o_52, (ATerm) ATempty);
    return(t);
  }
  ATerm s_12 (ATerm t)
  {
    ATerm t_52 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm l_55 = ATgetArgument(t, 0);
        if(((ATgetType(l_55) != AT_INT) || (ATgetInt((ATermInt) l_55) != 0)))
          _fail(t);
        {
          ATerm m_55 = ATgetArgument(t, 1);
        }
        t_52 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = t_52;
    return(t);
  }
  ATerm t_12 (ATerm t)
  {
    ATerm u_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
    if(match_cons(t, sym__3))
      {
        u_52 = ATgetArgument(t, 0);
        x_52 = ATgetArgument(t, 1);
        y_52 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, u_52, term_v_52);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, u_52, term_v_52);
    {
      ATerm n_55 = t;
      int p_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(u_52, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(p_55);
        }
      else
        {
          t = n_55;
          t = SSL_subtr(u_52, (ATerm) ATmakeInt(1));
        }
      z_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_52, x_52, (ATerm) ATinsert(CheckATermList(y_52), x_52));
    }
    return(t);
  }
  t = for_3_0(q_12, s_12, t_12, t);
  return(t);
}
ATerm CheckTuple_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      ATerm t_55 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_55) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_53;
  {
    ATerm u_12 (ATerm t)
    {
      t = term_q_52;
      return(t);
    }
    ATerm v_12 (ATerm t)
    {
      ATerm f_53 = NULL,g_53 = NULL;
      if(match_cons(t, sym__2))
        {
          f_53 = ATgetArgument(t, 0);
          g_53 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_55 = t;
        int v_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_53, g_53);
            ;
            LocalPopChoice(v_55);
          }
        else
          {
            t = u_55;
            t = SSL_addr(f_53, g_53);
          }
      }
      return(t);
    }
    ATerm w_12 (ATerm t)
    {
      t = term_v_52;
      return(t);
    }
    t = foldr_3_0(u_12, v_12, w_12, t);
    b_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_53, term_z_55);
    t = copy_0_0(t);
    c_53 = t;
    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, c_53, term_z_55));
    t = GenerateCheckRule_0_0(t);
    {
      ATerm a_56 = t;
      int c_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_53 = NULL,i_53 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_53 = ATgetFirst((ATermList) t);
              {
                ATerm d_56 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = i_53;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm e_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_56) != ATmakeSymbol("z_1", 0, ATtrue)))
                _fail(t);
              h_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_53;
          ;
          LocalPopChoice(c_56);
        }
      else
        {
          t = a_56;
          t = (ATerm) ATempty;
        }
      e_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_56, (ATerm) ATinsert(CheckATermList(e_53), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, c_53, term_z_55)))));
      {
        ATerm x_12 (ATerm t)
        {
          t = term_l_56;
          return(t);
        }
        t = assert_1_0(x_12, t);
        t = (ATerm) ATmakeAppl(sym_Op_2, term_t_34, a_53);
      }
    }
  }
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
  l_54 = t;
  if(match_cons(t, sym_Op_2))
    {
      m_54 = ATgetArgument(t, 0);
      n_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_56 = t;
    int o_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL;
        t = n_54;
        {
          ATerm z_12 (ATerm t)
          {
            t = term_q_52;
            return(t);
          }
          ATerm a_13 (ATerm t)
          {
            ATerm u_11 = NULL,v_11 = NULL;
            if(match_cons(t, sym__2))
              {
                u_11 = ATgetArgument(t, 0);
                v_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm p_56 = t;
              int q_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(u_11, v_11);
                  ;
                  LocalPopChoice(q_56);
                }
              else
                {
                  t = p_56;
                  t = SSL_addr(u_11, v_11);
                }
            }
            return(t);
          }
          ATerm b_13 (ATerm t)
          {
            t = term_v_52;
            return(t);
          }
          t = foldr_3_0(z_12, a_13, b_13, t);
          r_11 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, m_54, (ATerm) ATmakeAppl(sym_Keys_1, r_11)));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_11 = ATgetFirst((ATermList) t);
              {
                ATerm r_56 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = s_11;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm s_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_56) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, m_54, (ATerm) ATempty);
        }
        ;
        LocalPopChoice(o_56);
      }
    else
      {
        t = m_56;
        {
          ATerm b_12 = NULL,c_12 = NULL;
          t = n_54;
          {
            ATerm c_13 (ATerm t)
            {
              t = term_q_52;
              return(t);
            }
            ATerm d_13 (ATerm t)
            {
              ATerm d_12 = NULL,e_12 = NULL;
              if(match_cons(t, sym__2))
                {
                  d_12 = ATgetArgument(t, 0);
                  e_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm t_56 = t;
                int u_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(d_12, e_12);
                    ;
                    LocalPopChoice(u_56);
                  }
                else
                  {
                    t = t_56;
                    t = SSL_addr(d_12, e_12);
                  }
              }
              return(t);
            }
            ATerm g_13 (ATerm t)
            {
              t = term_v_52;
              return(t);
            }
            t = foldr_3_0(c_13, d_13, g_13, t);
            b_12 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, m_54, (ATerm) ATmakeAppl(sym_Keys_1, b_12)));
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_12 = ATgetFirst((ATermList) t);
                {
                  ATerm w_56 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = c_12;
            if(match_cons(t, sym_Defined_1))
              {
                ATerm b_57 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_57) != ATmakeSymbol("t_1", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Op_2, m_54, (ATerm) ATempty);
          }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm r_54 (ATerm t)
  {
    ATerm c_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_116(t);
        {
          ATerm h_13 (ATerm t)
          {
            ATerm g_57 = t;
            int j_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_54(t);
                ;
                LocalPopChoice(j_57);
              }
            else
              {
                t = g_57;
              }
            return(t);
          }
          t = SRTS_all(h_13, t);
        }
        ;
        LocalPopChoice(e_57);
      }
    else
      {
        t = c_57;
        t = SRTS_some(r_54, t);
      }
    return(t);
  }
  t = r_54(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  ATerm i_13 (ATerm t)
  {
    t = term_k_57;
    return(t);
  }
  ATerm j_13 (ATerm t)
  {
    ATerm u_54 = NULL;
    u_54 = t;
    t = k_142(t);
    if(((t_54 != NULL) && (t_54 != t)))
      _fail(t);
    else
      t_54 = t;
    t = l_142(t);
    if(((s_54 != NULL) && (s_54 != t)))
      _fail(t);
    else
      s_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_57, (ATerm) ATmakeAppl(sym_Defined_3, term_m_57, not_null(s_54), not_null(t_54)));
    {
      ATerm k_13 (ATerm t)
      {
        t = term_k_57;
        return(t);
      }
      t = assert_1_0(k_13, t);
      t = u_54;
      {
        ATerm l_13 (ATerm t)
        {
          ATerm p_57 = t;
          if((PushChoice() == 0))
            {
              ATerm q_57 = t;
              int v_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0_0(t);
                  ;
                  LocalPopChoice(v_57);
                }
              else
                {
                  t = q_57;
                  t = CheckTuple_0_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_57;
            }
          t = CheckConsError_0_0(t);
          return(t);
        }
        t = manytd_1_0(l_13, t);
      }
    }
    return(t);
  }
  t = scope_2_0(i_13, j_13, t);
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm c_55 = NULL,f_55 = NULL;
  ATerm x_57 = t;
  int a_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_55 = ATgetArgument(t, 0);
          {
            ATerm b_58 = ATgetArgument(t, 1);
          }
          f_55 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(a_58);
      t = f_55;
      {
        ATerm o_13 (ATerm t)
        {
          t = c_55;
          return(t);
        }
        ATerm p_13 (ATerm t)
        {
          t = term_c_58;
          return(t);
        }
        t = check_constructors_p__2_0(o_13, p_13, t);
      }
    }
  else
    {
      t = x_57;
      if(match_cons(t, sym_RDef_3))
        {
          c_55 = ATgetArgument(t, 0);
          {
            ATerm d_58 = ATgetArgument(t, 1);
          }
          f_55 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_55;
      {
        ATerm r_13 (ATerm t)
        {
          t = c_55;
          return(t);
        }
        ATerm s_13 (ATerm t)
        {
          t = term_e_58;
          return(t);
        }
        t = check_constructors_p__2_0(r_13, s_13, t);
      }
    }
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm o_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      q_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_55;
  if(match_cons(t, sym_FunType_2))
    {
      s_55 = ATgetArgument(t, 0);
      o_55 = ATgetArgument(t, 1);
      {
        ATerm x_55 = NULL;
        t = s_55;
        {
          ATerm t_13 (ATerm t)
          {
            t = term_q_52;
            return(t);
          }
          ATerm u_13 (ATerm t)
          {
            ATerm y_55 = NULL,b_56 = NULL;
            if(match_cons(t, sym__2))
              {
                y_55 = ATgetArgument(t, 0);
                b_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm f_58 = t;
              int g_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(y_55, b_56);
                  ;
                  LocalPopChoice(g_58);
                }
              else
                {
                  t = f_58;
                  t = SSL_addr(y_55, b_56);
                }
            }
            return(t);
          }
          ATerm v_13 (ATerm t)
          {
            t = term_v_52;
            return(t);
          }
          t = foldr_3_0(t_13, u_13, v_13, t);
          x_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, q_55, (ATerm) ATmakeAppl(sym_Keys_1, x_55)), term_i_58);
          {
            ATerm w_13 (ATerm t)
            {
              t = term_j_58;
              return(t);
            }
            t = assert_1_0(w_13, t);
            t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_55, (ATerm) ATmakeAppl(sym_FunType_2, s_55, o_55));
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          s_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, q_55, term_k_58), term_m_58);
      {
        ATerm x_13 (ATerm t)
        {
          t = term_j_58;
          return(t);
        }
        t = assert_1_0(x_13, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_55, (ATerm) ATmakeAppl(sym_ConstType_1, s_55));
      }
    }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,j_56 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm n_58 = ATgetArgument(t, 0);
      if(((ATgetType(n_58) == AT_LIST) && !(ATisEmpty(n_58))))
        {
          ATerm o_58 = ATgetFirst((ATermList) n_58);
          if(match_cons(o_58, sym_Signature_1))
            {
              ATerm q_58 = ATgetArgument(o_58, 0);
              if(((ATgetType(q_58) == AT_LIST) && !(ATisEmpty(q_58))))
                {
                  ATerm r_58 = ATgetFirst((ATermList) q_58);
                  if(match_cons(r_58, sym_Constructors_1))
                    {
                      f_56 = ATgetArgument(r_58, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm s_58 = (ATerm) ATgetNext((ATermList) q_58);
                    if(((ATgetType(s_58) != AT_LIST) || !(ATisEmpty(s_58))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm p_58 = (ATerm) ATgetNext((ATermList) n_58);
            if(((ATgetType(p_58) == AT_LIST) && !(ATisEmpty(p_58))))
              {
                ATerm t_58 = ATgetFirst((ATermList) p_58);
                if(match_cons(t_58, sym_Strategies_1))
                  {
                    g_56 = ATgetArgument(t_58, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm u_58 = (ATerm) ATgetNext((ATermList) p_58);
                  if(((ATgetType(u_58) != AT_LIST) || !(ATisEmpty(u_58))))
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_56), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_55), term_z_55))), term_y_58);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = g_56;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm a_59 = t;
    int b_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_56 = NULL,n_56 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_56 = ATgetFirst((ATermList) t);
            {
              ATerm c_59 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_56;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_59 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_59) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            k_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_56;
        ;
        LocalPopChoice(b_59);
      }
    else
      {
        t = a_59;
        t = (ATerm) ATempty;
      }
    h_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_56, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_56), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_55), term_z_55))), term_y_58));
    {
      ATerm e_59 = t;
      int g_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm h_59 = ATgetArgument(t, 0);
              ATerm i_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_56;
          {
            ATerm z_13 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_56), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_z_55), term_z_55), term_z_55))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_55), term_z_55))), term_y_58);
              return(t);
            }
            t = at_end_1_0(z_13, t);
          }
          ;
          LocalPopChoice(g_59);
        }
      else
        {
          t = e_59;
          {
            ATerm j_12 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_56, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_56), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue))))))));
            if(match_cons(t, sym__2))
              {
                ATerm j_59 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_59) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                j_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_12;
            t = concat_0_0(t);
          }
        }
      j_56 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, g_56)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, j_56)))));
    }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(v_141, _id, t);
      ;
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
            ATerm a_14 (ATerm t)
            {
              ATerm k_12 = NULL,m_12 = NULL;
              k_12 = t;
              t = v_141(t);
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_12, m_12);
              {
                ATerm b_14 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm o_59 = ATgetArgument(t, 0);
                      if(((ATgetType(o_59) != AT_LIST) || !(ATisEmpty(o_59))))
                        _fail(t);
                      {
                        ATerm p_59 = ATgetArgument(t, 1);
                        if(((ATgetType(p_59) != AT_LIST) || !(ATisEmpty(p_59))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm c_14 (ATerm t)
                {
                  ATerm v_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm r_59 = ATgetArgument(t, 0);
                      if(((ATgetType(r_59) == AT_LIST) && !(ATisEmpty(r_59))))
                        {
                          v_56 = ATgetFirst((ATermList) r_59);
                          y_56 = (ATerm) ATgetNext((ATermList) r_59);
                        }
                      else
                        _fail(t);
                      {
                        ATerm s_59 = ATgetArgument(t, 1);
                        if(((ATgetType(s_59) == AT_LIST) && !(ATisEmpty(s_59))))
                          {
                            x_56 = ATgetFirst((ATermList) s_59);
                            z_56 = (ATerm) ATgetNext((ATermList) s_59);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_56, x_56), (ATerm) ATmakeAppl(sym__2, y_56, z_56));
                  return(t);
                }
                ATerm d_14 (ATerm t)
                {
                  ATerm a_57 = NULL,d_57 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      a_57 = ATgetArgument(t, 0);
                      d_57 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(d_57), a_57);
                  return(t);
                }
                ATerm e_14 (ATerm t)
                {
                  ATerm f_57 = NULL,h_57 = NULL,i_57 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      f_57 = ATgetArgument(t, 0);
                      i_57 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_57;
                  {
                    ATerm t_59 = t;
                    int u_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm v_59 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_59);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_57);
                      }
                    else
                      {
                        t = t_59;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm w_59 = ATgetArgument(t, 0);
                            h_57 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_57, h_57);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(b_14, c_14, d_14, e_14, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, a_14, _id, t);
            ;
            LocalPopChoice(n_59);
          }
        else
          {
            t = m_59;
            {
              ATerm h_14 (ATerm t)
              {
                ATerm p_12 = NULL,r_12 = NULL;
                p_12 = t;
                t = v_141(t);
                r_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_12, r_12);
                {
                  ATerm i_14 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm y_59 = ATgetArgument(t, 0);
                        if(((ATgetType(y_59) != AT_LIST) || !(ATisEmpty(y_59))))
                          _fail(t);
                        {
                          ATerm z_59 = ATgetArgument(t, 1);
                          if(((ATgetType(z_59) != AT_LIST) || !(ATisEmpty(z_59))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm j_14 (ATerm t)
                  {
                    ATerm n_57 = NULL,o_57 = NULL,r_57 = NULL,s_57 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm a_60 = ATgetArgument(t, 0);
                        if(((ATgetType(a_60) == AT_LIST) && !(ATisEmpty(a_60))))
                          {
                            n_57 = ATgetFirst((ATermList) a_60);
                            r_57 = (ATerm) ATgetNext((ATermList) a_60);
                          }
                        else
                          _fail(t);
                        {
                          ATerm b_60 = ATgetArgument(t, 1);
                          if(((ATgetType(b_60) == AT_LIST) && !(ATisEmpty(b_60))))
                            {
                              o_57 = ATgetFirst((ATermList) b_60);
                              s_57 = (ATerm) ATgetNext((ATermList) b_60);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_57, o_57), (ATerm) ATmakeAppl(sym__2, r_57, s_57));
                    return(t);
                  }
                  ATerm m_14 (ATerm t)
                  {
                    ATerm t_57 = NULL,u_57 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        t_57 = ATgetArgument(t, 0);
                        u_57 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(u_57), t_57);
                    return(t);
                  }
                  ATerm n_14 (ATerm t)
                  {
                    ATerm w_57 = NULL,y_57 = NULL,z_57 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        w_57 = ATgetArgument(t, 0);
                        z_57 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = w_57;
                    {
                      ATerm c_60 = t;
                      int d_60 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm f_60 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(d_60);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_57);
                        }
                      else
                        {
                          t = c_60;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm g_60 = ATgetArgument(t, 0);
                              y_57 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, z_57, y_57);
                        }
                    }
                    return(t);
                  }
                  t = genzip_4_0(i_14, j_14, m_14, n_14, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, h_14, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm w_58 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      w_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_58;
  {
    ATerm q_14 (ATerm t)
    {
      ATerm x_58 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          x_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, x_58);
      return(t);
    }
    ATerm r_14 (ATerm t)
    {
      ATerm h_60 = t;
      int i_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_58 = NULL,f_59 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              f_59 = ATgetArgument(t, 0);
              t = f_59;
              if(match_cons(t, sym_Rule_3))
                {
                  z_58 = ATgetArgument(t, 0);
                  {
                    ATerm j_60 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm k_60 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = z_58;
              t = tvars_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  f_59 = ATgetArgument(t, 0);
                  {
                    ATerm l_60 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = f_59;
            }
          ;
          LocalPopChoice(i_60);
        }
      else
        {
          t = h_60;
          {
            ATerm m_60 = t;
            int n_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind4_0_0(t);
                ;
                LocalPopChoice(n_60);
              }
            else
              {
                t = m_60;
                {
                  ATerm q_59 = NULL;
                  ATerm p_60 = t;
                  int q_60 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          ATerm r_60 = ATgetArgument(t, 0);
                          ATerm t_60 = ATgetArgument(t, 1);
                          q_59 = ATgetArgument(t, 2);
                          {
                            ATerm u_60 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(q_60);
                      t = q_59;
                      {
                        ATerm u_14 (ATerm t)
                        {
                          ATerm x_59 = NULL;
                          ATerm w_60 = t;
                          int y_60 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  x_59 = ATgetArgument(t, 0);
                                  {
                                    ATerm a_61 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(y_60);
                              t = x_59;
                            }
                          else
                            {
                              t = w_60;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  x_59 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = x_59;
                            }
                          return(t);
                        }
                        t = map_1_0(u_14, t);
                      }
                    }
                  else
                    {
                      t = p_60;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm b_61 = ATgetArgument(t, 0);
                          ATerm c_61 = ATgetArgument(t, 1);
                          q_59 = ATgetArgument(t, 2);
                          {
                            ATerm d_61 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      t = q_59;
                      {
                        ATerm v_14 (ATerm t)
                        {
                          ATerm e_60 = NULL;
                          ATerm e_61 = t;
                          int g_61 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  e_60 = ATgetArgument(t, 0);
                                  {
                                    ATerm h_61 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(g_61);
                              t = e_60;
                            }
                          else
                            {
                              t = e_61;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  e_60 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = e_60;
                            }
                          return(t);
                        }
                        t = map_1_0(v_14, t);
                      }
                    }
                }
              }
          }
        }
      return(t);
    }
    t = free_vars_3_0(q_14, r_14, tboundin_3_0, t);
  }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm o_60 = NULL,s_60 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      s_60 = ATgetArgument(t, 0);
      t = s_60;
      if(match_cons(t, sym_Rule_3))
        {
          o_60 = ATgetArgument(t, 0);
          {
            ATerm i_61 = ATgetArgument(t, 1);
          }
          {
            ATerm j_61 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_60;
      {
        ATerm y_14 (ATerm t)
        {
          ATerm v_60 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              v_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, v_60);
          return(t);
        }
        ATerm z_14 (ATerm t)
        {
          ATerm k_61 = t;
          int m_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind0_0_0(t);
              ;
              LocalPopChoice(m_61);
            }
          else
            {
              t = k_61;
              {
                ATerm x_60 = NULL,z_60 = NULL;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    x_60 = ATgetArgument(t, 0);
                    t = x_60;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm n_61 = t;
                    int o_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm t_61 = ATgetArgument(t, 0);
                            ATerm v_61 = ATgetArgument(t, 1);
                            z_60 = ATgetArgument(t, 2);
                            {
                              ATerm h_62 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_61);
                        t = z_60;
                        {
                          ATerm c_15 (ATerm t)
                          {
                            ATerm f_61 = NULL;
                            ATerm k_62 = t;
                            int l_62 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    f_61 = ATgetArgument(t, 0);
                                    {
                                      ATerm m_62 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(l_62);
                                t = f_61;
                              }
                            else
                              {
                                t = k_62;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    f_61 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = f_61;
                              }
                            return(t);
                          }
                          t = map_1_0(c_15, t);
                        }
                      }
                    else
                      {
                        t = n_61;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm n_62 = ATgetArgument(t, 0);
                            ATerm o_62 = ATgetArgument(t, 1);
                            z_60 = ATgetArgument(t, 2);
                            {
                              ATerm p_62 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = z_60;
                        {
                          ATerm d_15 (ATerm t)
                          {
                            ATerm l_61 = NULL;
                            ATerm q_62 = t;
                            int r_62 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    l_61 = ATgetArgument(t, 0);
                                    {
                                      ATerm s_62 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(r_62);
                                t = l_61;
                              }
                            else
                              {
                                t = q_62;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    l_61 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = l_61;
                              }
                            return(t);
                          }
                          t = map_1_0(d_15, t);
                        }
                      }
                  }
              }
            }
          return(t);
        }
        t = free_vars_3_0(y_14, z_14, tboundin_3_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          s_60 = ATgetArgument(t, 0);
          {
            ATerm v_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_60;
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm g_139 (ATerm), ATerm h_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
  if(match_cons(t, sym__3))
    {
      r_61 = ATgetArgument(t, 0);
      q_61 = ATgetArgument(t, 1);
      p_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_61;
  {
    ATerm e_15 (ATerm t)
    {
      ATerm s_61 = NULL;
      s_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_61, p_61);
      t = g_139(t);
      return(t);
    }
    ATerm i_15 (ATerm t)
    {
      ATerm u_61 = NULL;
      u_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_61, q_61);
      t = g_139(t);
      return(t);
    }
    t = h_139(e_15, i_15, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm a_139 (ATerm), ATerm b_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL;
  if(match_cons(t, sym__2))
    {
      w_61 = ATgetArgument(t, 0);
      x_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_61;
  t = a_139(t);
  y_61 = t;
  t = map_1_0(new_0_0, t);
  z_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_61, z_61);
  {
    ATerm j_15 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm w_62 = ATgetArgument(t, 0);
          if(((ATgetType(w_62) != AT_LIST) || !(ATisEmpty(w_62))))
            _fail(t);
          {
            ATerm b_63 = ATgetArgument(t, 1);
            if(((ATgetType(b_63) != AT_LIST) || !(ATisEmpty(b_63))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm k_15 (ATerm t)
    {
      ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm c_63 = ATgetArgument(t, 0);
          if(((ATgetType(c_63) == AT_LIST) && !(ATisEmpty(c_63))))
            {
              d_62 = ATgetFirst((ATermList) c_63);
              f_62 = (ATerm) ATgetNext((ATermList) c_63);
            }
          else
            _fail(t);
          {
            ATerm d_63 = ATgetArgument(t, 1);
            if(((ATgetType(d_63) == AT_LIST) && !(ATisEmpty(d_63))))
              {
                e_62 = ATgetFirst((ATermList) d_63);
                g_62 = (ATerm) ATgetNext((ATermList) d_63);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_62, e_62), (ATerm) ATmakeAppl(sym__2, f_62, g_62));
      return(t);
    }
    ATerm l_15 (ATerm t)
    {
      ATerm i_62 = NULL,j_62 = NULL;
      if(match_cons(t, sym__2))
        {
          i_62 = ATgetArgument(t, 0);
          j_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(j_62), i_62);
      return(t);
    }
    t = genzip_4_0(j_15, k_15, l_15, _id, t);
    a_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_62, x_61);
    {
      ATerm e_63 = t;
      int f_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm g_63 = ATgetArgument(t, 0);
              ATerm h_63 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_62;
          {
            ATerm n_15 (ATerm t)
            {
              t = x_61;
              return(t);
            }
            t = at_end_1_0(n_15, t);
          }
          ;
          LocalPopChoice(f_63);
        }
      else
        {
          t = e_63;
          {
            ATerm y_12 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_62, x_61));
            if(match_cons(t, sym__2))
              {
                ATerm i_63 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_63) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                y_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_12;
            t = concat_0_0(t);
          }
        }
      b_62 = t;
      t = w_61;
      {
        ATerm o_15 (ATerm t)
        {
          t = z_61;
          return(t);
        }
        t = b_139(o_15, t);
        c_62 = t;
        t = (ATerm) ATmakeAppl(sym__3, c_62, x_61, b_62);
      }
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      y_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_62 = ATgetFirst((ATermList) t);
      a_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_62;
  if(match_cons(t, sym__2))
    {
      t_62 = ATgetArgument(t, 0);
      u_62 = ATgetArgument(t, 1);
      {
        ATerm j_63 = t;
        int k_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_62;
            if((x_62 != t))
              {
                _fail(t);
              }
            t = u_62;
            ;
            LocalPopChoice(k_63);
          }
        else
          {
            t = j_63;
            t = (ATerm) ATmakeAppl(sym__2, x_62, a_63);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_62, a_63);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm g_118 (ATerm), ATerm t)
{
  ATerm w_63 (ATerm t)
  {
    ATerm l_63 = t;
    int m_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_118(t);
        ;
        LocalPopChoice(m_63);
      }
    else
      {
        t = l_63;
        {
          ATerm r_63 = NULL,s_63 = NULL,v_63 = NULL;
          r_63 = t;
          if(match_cons(t, sym__2))
            {
              s_63 = ATgetArgument(t, 0);
              v_63 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_63;
          {
            ATerm q_15 (ATerm t)
            {
              ATerm e_13 = NULL;
              e_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_13, v_63);
              t = w_63(t);
              return(t);
            }
            t = SRTS_all(q_15, t);
          }
        }
      }
    return(t);
  }
  t = w_63(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  z_63 = t;
  {
    ATerm n_63 = t;
    int o_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_63 = ATgetArgument(t, 0);
            ATerm q_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_63);
        t = z_63;
      }
    else
      {
        t = n_63;
        {
          ATerm h_64 = NULL;
          if(match_cons(t, sym__3))
            {
              a_64 = ATgetArgument(t, 0);
              b_64 = ATgetArgument(t, 1);
              c_64 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
          {
            ATerm r_15 (ATerm t)
            {
              if(match_cons(t, sym__2))
                {
                  ATerm t_63 = ATgetArgument(t, 0);
                  if(((ATgetType(t_63) != AT_LIST) || !(ATisEmpty(t_63))))
                    _fail(t);
                  {
                    ATerm u_63 = ATgetArgument(t, 1);
                    if(((ATgetType(u_63) != AT_LIST) || !(ATisEmpty(u_63))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm s_15 (ATerm t)
            {
              ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm x_63 = ATgetArgument(t, 0);
                  if(((ATgetType(x_63) == AT_LIST) && !(ATisEmpty(x_63))))
                    {
                      i_64 = ATgetFirst((ATermList) x_63);
                      k_64 = (ATerm) ATgetNext((ATermList) x_63);
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_63 = ATgetArgument(t, 1);
                    if(((ATgetType(y_63) == AT_LIST) && !(ATisEmpty(y_63))))
                      {
                        j_64 = ATgetFirst((ATermList) y_63);
                        l_64 = (ATerm) ATgetNext((ATermList) y_63);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_64, j_64), (ATerm) ATmakeAppl(sym__2, k_64, l_64));
              return(t);
            }
            ATerm t_15 (ATerm t)
            {
              ATerm m_64 = NULL,n_64 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_64 = ATgetArgument(t, 0);
                  n_64 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_64), m_64);
              return(t);
            }
            t = genzip_4_0(r_15, s_15, t_15, _id, t);
            h_64 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_64, c_64);
          }
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm h_138 (ATerm), ATerm i_138 (ATerm (ATerm), ATerm), ATerm j_138 (ATerm), ATerm k_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_138 (ATerm (ATerm), ATerm), ATerm m_138 (ATerm), ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_64 = ATgetArgument(t, 0);
      p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_64, (ATerm) ATempty);
  {
    ATerm x_64 (ATerm t)
    {
      ATerm v_15 (ATerm t)
      {
        ATerm d_64 = t;
        int e_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_64 = NULL,t_64 = NULL;
            if(match_cons(t, sym__2))
              {
                s_64 = ATgetArgument(t, 0);
                t_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_64;
            {
              ATerm w_15 (ATerm t)
              {
                ATerm f_13 = NULL;
                f_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_13, t_64);
                t = lookup_0_0(t);
                return(t);
              }
              t = i_138(w_15, t);
            }
            ;
            LocalPopChoice(e_64);
          }
        else
          {
            t = d_64;
            {
              ATerm f_64 = t;
              int g_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_13 = NULL,n_13 = NULL,q_13 = NULL;
                  m_13 = t;
                  t = SSL_explode_term(m_13);
                  if(match_cons(t, sym__2))
                    {
                      ATerm o_64 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) o_64) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm r_64 = ATgetArgument(t, 1);
                        if(((ATgetType(r_64) == AT_LIST) && !(ATisEmpty(r_64))))
                          {
                            n_13 = ATgetFirst((ATermList) r_64);
                            {
                              ATerm u_64 = (ATerm) ATgetNext((ATermList) r_64);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_13;
                  t = h_138(t);
                  q_13 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_13, q_64);
                  t = lookup_0_0(t);
                  t = m_138(t);
                  ;
                  LocalPopChoice(g_64);
                }
              else
                {
                  t = f_64;
                  t = RnBinding_2_0(j_138, l_138, t);
                  t = DistBinding_2_0(x_64, k_138, t);
                }
            }
          }
        return(t);
      }
      t = env_alltd_1_0(v_15, t);
      return(t);
    }
    t = x_64(t);
  }
  return(t);
}
ATerm ExpOverlay_1_0 (ATerm b_141 (ATerm), ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      p_65 = ATgetArgument(t, 0);
      q_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_141(t);
  {
    ATerm x_15 (ATerm t)
    {
      ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
      t_65 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((p_65 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          u_65 = ATgetArgument(t, 1);
          v_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, u_65, q_65);
      {
        ATerm z_15 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_64 = ATgetArgument(t, 0);
              if(((ATgetType(v_64) != AT_LIST) || !(ATisEmpty(v_64))))
                _fail(t);
              {
                ATerm w_64 = ATgetArgument(t, 1);
                if(((ATgetType(w_64) != AT_LIST) || !(ATisEmpty(w_64))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm a_16 (ATerm t)
        {
          ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm y_64 = ATgetArgument(t, 0);
              if(((ATgetType(y_64) == AT_LIST) && !(ATisEmpty(y_64))))
                {
                  w_65 = ATgetFirst((ATermList) y_64);
                  y_65 = (ATerm) ATgetNext((ATermList) y_64);
                }
              else
                _fail(t);
              {
                ATerm z_64 = ATgetArgument(t, 1);
                if(((ATgetType(z_64) == AT_LIST) && !(ATisEmpty(z_64))))
                  {
                    x_65 = ATgetFirst((ATermList) z_64);
                    z_65 = (ATerm) ATgetNext((ATermList) z_64);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_65, x_65), (ATerm) ATmakeAppl(sym__2, y_65, z_65));
          return(t);
        }
        ATerm c_16 (ATerm t)
        {
          ATerm a_66 = NULL,b_66 = NULL;
          if(match_cons(t, sym__2))
            {
              a_66 = ATgetArgument(t, 0);
              b_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_66), a_66);
          return(t);
        }
        t = genzip_4_0(z_15, a_16, c_16, _id, t);
        if(((r_65 != NULL) && (r_65 != t)))
          _fail(t);
        else
          r_65 = t;
        t = v_65;
        if(((s_65 != NULL) && (s_65 != t)))
          _fail(t);
        else
          s_65 = t;
        t = t_65;
      }
      return(t);
    }
    t = fetch_1_0(x_15, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_65), not_null(s_65));
    {
      ATerm d_16 (ATerm t)
      {
        ATerm d_66 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            d_66 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_66;
        return(t);
      }
      ATerm e_16 (ATerm t)
      {
        ATerm e_66 = NULL,i_66 = NULL,k_66 = NULL;
        if(match_cons(t, sym_LRule_1))
          {
            i_66 = ATgetArgument(t, 0);
            t = i_66;
            if(match_cons(t, sym_Rule_3))
              {
                e_66 = ATgetArgument(t, 0);
                {
                  ATerm a_65 = ATgetArgument(t, 1);
                }
                {
                  ATerm b_65 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = e_66;
            {
              ATerm i_16 (ATerm t)
              {
                ATerm r_66 = NULL;
                if(match_cons(t, sym_Var_1))
                  {
                    r_66 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, r_66);
                return(t);
              }
              ATerm j_16 (ATerm t)
              {
                ATerm c_65 = t;
                int d_65 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind0_0_0(t);
                    ;
                    LocalPopChoice(d_65);
                  }
                else
                  {
                    t = c_65;
                    {
                      ATerm t_66 = NULL,v_66 = NULL;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          t_66 = ATgetArgument(t, 0);
                          t = t_66;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm e_65 = t;
                          int f_65 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm g_65 = ATgetArgument(t, 0);
                                  ATerm h_65 = ATgetArgument(t, 1);
                                  v_66 = ATgetArgument(t, 2);
                                  {
                                    ATerm i_65 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(f_65);
                              t = v_66;
                              {
                                ATerm k_16 (ATerm t)
                                {
                                  ATerm c_67 = NULL;
                                  ATerm j_65 = t;
                                  int k_65 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          c_67 = ATgetArgument(t, 0);
                                          {
                                            ATerm l_65 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(k_65);
                                      t = c_67;
                                    }
                                  else
                                    {
                                      t = j_65;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          c_67 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = c_67;
                                    }
                                  return(t);
                                }
                                t = map_1_0(k_16, t);
                              }
                            }
                          else
                            {
                              t = e_65;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm m_65 = ATgetArgument(t, 0);
                                  ATerm n_65 = ATgetArgument(t, 1);
                                  v_66 = ATgetArgument(t, 2);
                                  {
                                    ATerm o_65 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = v_66;
                              {
                                ATerm l_16 (ATerm t)
                                {
                                  ATerm i_67 = NULL;
                                  ATerm c_66 = t;
                                  int f_66 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          i_67 = ATgetArgument(t, 0);
                                          {
                                            ATerm g_66 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(f_66);
                                      t = i_67;
                                    }
                                  else
                                    {
                                      t = c_66;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          i_67 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = i_67;
                                    }
                                  return(t);
                                }
                                t = map_1_0(l_16, t);
                              }
                            }
                        }
                    }
                  }
                return(t);
              }
              t = free_vars_3_0(i_16, j_16, tboundin_3_0, t);
            }
          }
        else
          {
            ATerm h_66 = t;
            int j_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    i_66 = ATgetArgument(t, 0);
                    {
                      ATerm l_66 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(j_66);
                t = i_66;
              }
            else
              {
                t = h_66;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    i_66 = ATgetArgument(t, 0);
                    t = i_66;
                    {
                      ATerm m_16 (ATerm t)
                      {
                        ATerm p_67 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            p_67 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(ATempty, p_67);
                        return(t);
                      }
                      ATerm n_16 (ATerm t)
                      {
                        ATerm m_66 = t;
                        int n_66 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_67 = NULL,v_67 = NULL;
                            if(match_cons(t, sym_LRule_1))
                              {
                                v_67 = ATgetArgument(t, 0);
                                t = v_67;
                                if(match_cons(t, sym_Rule_3))
                                  {
                                    q_67 = ATgetArgument(t, 0);
                                    {
                                      ATerm o_66 = ATgetArgument(t, 1);
                                    }
                                    {
                                      ATerm p_66 = ATgetArgument(t, 2);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = q_67;
                                t = tvars_0_0(t);
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    v_67 = ATgetArgument(t, 0);
                                    {
                                      ATerm q_66 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = v_67;
                              }
                            ;
                            LocalPopChoice(n_66);
                          }
                        else
                          {
                            t = m_66;
                            {
                              ATerm s_66 = t;
                              int u_66 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Bind4_0_0(t);
                                  ;
                                  LocalPopChoice(u_66);
                                }
                              else
                                {
                                  t = s_66;
                                  {
                                    ATerm c_68 = NULL;
                                    ATerm w_66 = t;
                                    int x_66 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_SDefT_4))
                                          {
                                            ATerm y_66 = ATgetArgument(t, 0);
                                            ATerm z_66 = ATgetArgument(t, 1);
                                            c_68 = ATgetArgument(t, 2);
                                            {
                                              ATerm a_67 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(x_66);
                                        t = c_68;
                                        {
                                          ATerm o_16 (ATerm t)
                                          {
                                            ATerm h_68 = NULL;
                                            ATerm b_67 = t;
                                            int d_67 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    h_68 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm e_67 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(d_67);
                                                t = h_68;
                                              }
                                            else
                                              {
                                                t = b_67;
                                                if(match_cons(t, sym_DefaultVarDec_1))
                                                  {
                                                    h_68 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = h_68;
                                              }
                                            return(t);
                                          }
                                          t = map_1_0(o_16, t);
                                        }
                                      }
                                    else
                                      {
                                        t = w_66;
                                        if(match_cons(t, sym_RDefT_4))
                                          {
                                            ATerm f_67 = ATgetArgument(t, 0);
                                            ATerm g_67 = ATgetArgument(t, 1);
                                            c_68 = ATgetArgument(t, 2);
                                            {
                                              ATerm h_67 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = c_68;
                                        {
                                          ATerm p_16 (ATerm t)
                                          {
                                            ATerm n_68 = NULL;
                                            ATerm j_67 = t;
                                            int k_67 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    n_68 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_67 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(k_67);
                                                t = n_68;
                                              }
                                            else
                                              {
                                                t = j_67;
                                                if(match_cons(t, sym_DefaultVarDec_1))
                                                  {
                                                    n_68 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = n_68;
                                              }
                                            return(t);
                                          }
                                          t = map_1_0(p_16, t);
                                        }
                                      }
                                  }
                                }
                            }
                          }
                        return(t);
                      }
                      t = free_vars_3_0(m_16, n_16, tboundin_3_0, t);
                    }
                  }
                else
                  {
                    ATerm m_67 = t;
                    int n_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm o_67 = ATgetArgument(t, 0);
                            ATerm r_67 = ATgetArgument(t, 1);
                            k_66 = ATgetArgument(t, 2);
                            {
                              ATerm s_67 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(n_67);
                        t = k_66;
                        {
                          ATerm r_16 (ATerm t)
                          {
                            ATerm u_68 = NULL;
                            ATerm t_67 = t;
                            int u_67 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    u_68 = ATgetArgument(t, 0);
                                    {
                                      ATerm w_67 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(u_67);
                                t = u_68;
                              }
                            else
                              {
                                t = t_67;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    u_68 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = u_68;
                              }
                            return(t);
                          }
                          t = map_1_0(r_16, t);
                        }
                      }
                    else
                      {
                        t = m_67;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm x_67 = ATgetArgument(t, 0);
                            ATerm y_67 = ATgetArgument(t, 1);
                            k_66 = ATgetArgument(t, 2);
                            {
                              ATerm z_67 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = k_66;
                        {
                          ATerm s_16 (ATerm t)
                          {
                            ATerm g_69 = NULL;
                            ATerm a_68 = t;
                            int b_68 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    g_69 = ATgetArgument(t, 0);
                                    {
                                      ATerm d_68 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(b_68);
                                t = g_69;
                              }
                            else
                              {
                                t = a_68;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    g_69 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = g_69;
                              }
                            return(t);
                          }
                          t = map_1_0(s_16, t);
                        }
                      }
                  }
              }
          }
        return(t);
      }
      t = substitute_6_0(d_16, Var_1_0, e_16, tboundin_3_0, tpaste_1_0, _id, t);
    }
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm m_69 = NULL,p_69 = NULL;
  ATerm e_68 = t;
  int f_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm g_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(f_68);
      t = term_q_36;
    }
  else
    {
      t = e_68;
      if(match_cons(t, sym_Real_1))
        {
          p_69 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, p_69));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              p_69 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, p_69));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  p_69 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, p_69));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      p_69 = ATgetArgument(t, 0);
                      m_69 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_68, (ATerm)ATinsert(ATinsert(ATempty, m_69), p_69), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          p_69 = ATgetArgument(t, 0);
                          m_69 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_69), m_69, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              p_69 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_69), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm j_68 = t;
  int k_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_16 (ATerm t)
      {
        t = map_1_0(trm_to_cong_0_0, t);
        return(t);
      }
      t = Op_2_0(_id, t_16, t);
      ;
      LocalPopChoice(k_68);
    }
  else
    {
      t = j_68;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0_0 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,o_70 = NULL,w_70 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      k_70 = ATgetArgument(t, 0);
      l_70 = ATgetArgument(t, 1);
      m_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_70;
  {
    ATerm u_16 (ATerm t)
    {
      ATerm y_70 = NULL;
      y_70 = t;
      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_70, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_46), term_e_46));
      return(t);
    }
    t = map_1_0(u_16, t);
    o_70 = t;
    t = m_70;
    t = trm_to_cong_0_0(t);
    w_70 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, k_70, o_70, w_70);
  }
  return(t);
}
ATerm ExpandOverlays_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm l_68 = ATgetArgument(t, 0);
      if(((ATgetType(l_68) == AT_LIST) && !(ATisEmpty(l_68))))
        {
          ATerm m_68 = ATgetFirst((ATermList) l_68);
          if(match_cons(m_68, sym_Signature_1))
            {
              a_71 = ATgetArgument(m_68, 0);
            }
          else
            _fail(t);
          {
            ATerm o_68 = (ATerm) ATgetNext((ATermList) l_68);
            if(((ATgetType(o_68) == AT_LIST) && !(ATisEmpty(o_68))))
              {
                ATerm p_68 = ATgetFirst((ATermList) o_68);
                if(match_cons(p_68, sym_Overlays_1))
                  {
                    b_71 = ATgetArgument(p_68, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm q_68 = (ATerm) ATgetNext((ATermList) o_68);
                  if(((ATgetType(q_68) == AT_LIST) && !(ATisEmpty(q_68))))
                    {
                      ATerm r_68 = ATgetFirst((ATermList) q_68);
                      if(match_cons(r_68, sym_Strategies_1))
                        {
                          c_71 = ATgetArgument(r_68, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm s_68 = (ATerm) ATgetNext((ATermList) q_68);
                        if(((ATgetType(s_68) != AT_LIST) || !(ATisEmpty(s_68))))
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
  t = b_71;
  {
    ATerm t_68 = t;
    int v_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_68 = t;
        if((PushChoice() == 0))
          {
            t = b_71;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_68;
          }
        t = b_71;
        {
          ATerm v_16 (ATerm t)
          {
            ATerm a_17 (ATerm t)
            {
              ATerm b_17 (ATerm t)
              {
                t = b_71;
                return(t);
              }
              t = ExpOverlay_1_0(b_17, t);
              return(t);
            }
            t = repeat_1_0(a_17, t);
            return(t);
          }
          t = topdown_1_0(v_16, t);
        }
        ;
        LocalPopChoice(v_68);
      }
    else
      {
        t = t_68;
      }
    d_71 = t;
    t = b_71;
    t = map_1_0(Overlay_to_Congdef_0_0, t);
    e_71 = t;
    t = c_71;
    {
      ATerm x_68 = t;
      int y_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_68 = t;
          if((PushChoice() == 0))
            {
              t = d_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_68;
            }
          t = c_71;
          {
            ATerm c_17 (ATerm t)
            {
              ATerm a_69 = t;
              int b_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_17 (ATerm t)
                  {
                    t = d_71;
                    return(t);
                  }
                  t = ExpOverlay_1_0(d_17, t);
                  ;
                  LocalPopChoice(b_69);
                }
              else
                {
                  t = a_69;
                }
              return(t);
            }
            t = topdown_1_0(c_17, t);
          }
          ;
          LocalPopChoice(y_68);
        }
      else
        {
          t = x_68;
        }
      f_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_71, f_71);
      {
        ATerm c_69 = t;
        int d_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm e_69 = ATgetArgument(t, 0);
                ATerm f_69 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_71;
            {
              ATerm i_17 (ATerm t)
              {
                t = f_71;
                return(t);
              }
              t = at_end_1_0(i_17, t);
            }
            ;
            LocalPopChoice(d_69);
          }
        else
          {
            t = c_69;
            {
              ATerm y_13 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_71, f_71));
              if(match_cons(t, sym__2))
                {
                  ATerm h_69 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_69) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  y_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_13;
              t = concat_0_0(t);
            }
          }
        g_71 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, g_71)), (ATerm) ATmakeAppl(sym_Signature_1, a_71)));
      }
    }
  }
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      k_71 = ATgetArgument(t, 0);
      l_71 = ATgetArgument(t, 1);
      m_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_69, k_71));
  {
    ATerm j_17 (ATerm t)
    {
      t = term_j_69;
      return(t);
    }
    t = assert_1_0(j_17, t);
    t = l_71;
    {
      ATerm m_17 (ATerm t)
      {
        ATerm o_71 = NULL;
        o_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_71), term_l_69);
        {
          ATerm p_17 (ATerm t)
          {
            t = term_n_69;
            return(t);
          }
          t = assert_1_0(p_17, t);
          t = o_71;
        }
        return(t);
      }
      t = map_1_0(m_17, t);
      t = m_71;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Overlay_3, k_71, l_71, m_71);
    }
  }
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,u_72 = NULL,v_72 = NULL,x_72 = NULL,y_72 = NULL,b_73 = NULL,c_73 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      u_72 = ATgetArgument(t, 0);
      v_72 = ATgetArgument(t, 1);
      x_72 = ATgetArgument(t, 2);
      p_72 = ATgetArgument(t, 3);
      t = p_72;
      if(match_cons(t, sym_StratRule_3))
        {
          q_72 = ATgetArgument(t, 0);
          r_72 = ATgetArgument(t, 1);
          s_72 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_69, u_72));
          {
            ATerm r_17 (ATerm t)
            {
              t = term_j_69;
              return(t);
            }
            t = assert_1_0(r_17, t);
            t = x_72;
            {
              ATerm s_17 (ATerm t)
              {
                ATerm r_73 = NULL;
                ATerm q_69 = t;
                int r_69 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_VarDec_2))
                      {
                        r_73 = ATgetArgument(t, 0);
                        {
                          ATerm s_69 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_69);
                    t = r_73;
                  }
                else
                  {
                    t = q_69;
                    if(match_cons(t, sym_DefaultVarDec_1))
                      {
                        r_73 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_73;
                  }
                return(t);
              }
              t = map_1_0(s_17, t);
              {
                ATerm t_17 (ATerm t)
                {
                  ATerm u_73 = NULL;
                  u_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_73), term_l_69);
                  {
                    ATerm u_17 (ATerm t)
                    {
                      t = term_n_69;
                      return(t);
                    }
                    t = assert_1_0(u_17, t);
                    t = u_73;
                  }
                  return(t);
                }
                t = map_1_0(t_17, t);
                t = q_72;
                t = unbound_vars_0_0(t);
                t = r_72;
                t = unbound_vars_0_0(t);
                t = s_72;
                t = unbound_vars_0_0(t);
                t = (ATerm) ATmakeAppl(sym_RDefT_4, u_72, v_72, x_72, (ATerm) ATmakeAppl(sym_StratRule_3, q_72, r_72, s_72));
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              q_72 = ATgetArgument(t, 0);
              r_72 = ATgetArgument(t, 1);
              s_72 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_69, u_72));
          {
            ATerm w_17 (ATerm t)
            {
              t = term_j_69;
              return(t);
            }
            t = assert_1_0(w_17, t);
            t = x_72;
            {
              ATerm y_17 (ATerm t)
              {
                ATerm x_75 = NULL;
                ATerm u_69 = t;
                int v_69 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_VarDec_2))
                      {
                        x_75 = ATgetArgument(t, 0);
                        {
                          ATerm w_69 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_69);
                    t = x_75;
                  }
                else
                  {
                    t = u_69;
                    if(match_cons(t, sym_DefaultVarDec_1))
                      {
                        x_75 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_75;
                  }
                return(t);
              }
              t = map_1_0(y_17, t);
              {
                ATerm z_17 (ATerm t)
                {
                  ATerm x_76 = NULL;
                  x_76 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_76), term_l_69);
                  {
                    ATerm a_18 (ATerm t)
                    {
                      t = term_n_69;
                      return(t);
                    }
                    t = assert_1_0(a_18, t);
                    t = x_76;
                  }
                  return(t);
                }
                t = map_1_0(z_17, t);
                t = q_72;
                t = bind_vars_0_0(t);
                t = s_72;
                t = unbound_vars_0_0(t);
                t = r_72;
                t = use_vars_0_0(t);
                t = (ATerm) ATmakeAppl(sym_RDefT_4, u_72, v_72, x_72, (ATerm) ATmakeAppl(sym_Rule_3, q_72, r_72, s_72));
              }
            }
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          u_72 = ATgetArgument(t, 0);
          v_72 = ATgetArgument(t, 1);
          x_72 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_72;
      if(match_cons(t, sym_Rule_3))
        {
          y_72 = ATgetArgument(t, 0);
          b_73 = ATgetArgument(t, 1);
          c_73 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_69, u_72));
      {
        ATerm e_18 (ATerm t)
        {
          t = term_j_69;
          return(t);
        }
        t = assert_1_0(e_18, t);
        t = y_72;
        t = bind_vars_0_0(t);
        t = c_73;
        t = unbound_vars_0_0(t);
        t = b_73;
        t = use_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_RDef_3, u_72, v_72, (ATerm) ATmakeAppl(sym_Rule_3, y_72, b_73, c_73));
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm d_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL;
  l_78 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      f_78 = ATgetArgument(t, 0);
      g_78 = ATgetArgument(t, 1);
      h_78 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_78);
  d_78 = t;
  t = f_78;
  t = m_103(t);
  i_78 = t;
  t = g_78;
  t = n_103(t);
  j_78 = t;
  t = h_78;
  t = o_103(t);
  k_78 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, i_78, j_78, k_78), d_78);
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm w_78 = NULL;
  ATerm f_18 (ATerm t)
  {
    ATerm y_69 = t;
    int z_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_79 (ATerm y_78, ATerm z_78, ATerm t)
        {
          t = z_78;
          {
            ATerm a_70 = t;
            int b_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), y_78);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm c_70 = ATgetFirst((ATermList) t);
                    if(match_cons(c_70, sym_Defined_1))
                      {
                        ATerm e_70 = ATgetArgument(c_70, 0);
                      }
                    else
                      _fail(t);
                    {
                      ATerm d_70 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = z_78;
                ;
                LocalPopChoice(b_70);
              }
            else
              {
                t = a_70;
                t = (ATerm) ATmakeAppl(sym__2, y_78, (ATerm) ATinsert(ATempty, term_f_70));
              }
          }
          return(t);
        }
        ATerm g_79 = NULL,h_79 = NULL,j_79 = NULL,k_79 = NULL;
        g_79 = t;
        if(match_cons(t, sym__2))
          {
            h_79 = ATgetArgument(t, 0);
            j_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_79;
        {
          ATerm g_70 = t;
          int h_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_79 = ATgetFirst((ATermList) t);
                  {
                    ATerm i_70 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(h_70);
              t = k_79;
              {
                ATerm j_70 = t;
                int n_70 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm p_70 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_70);
                    t = h_79;
                    if(match_cons(t, sym_Scopes_0))
                      {
                        ATerm q_70 = t;
                        int r_70 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = g_79;
                            ;
                            LocalPopChoice(r_70);
                          }
                        else
                          {
                            t = q_70;
                            t = n_79(h_79, g_79, t);
                          }
                      }
                    else
                      {
                        t = n_79(h_79, g_79, t);
                      }
                  }
                else
                  {
                    t = j_70;
                    t = h_79;
                    if(!(match_cons(t, sym_Scopes_0)))
                      _fail(t);
                    t = g_79;
                  }
              }
            }
          else
            {
              t = g_70;
              t = h_79;
              if(!(match_cons(t, sym_Scopes_0)))
                _fail(t);
              t = g_79;
            }
        }
        ;
        LocalPopChoice(z_69);
      }
    else
      {
        t = y_69;
      }
    return(t);
  }
  t = map_1_0(f_18, t);
  w_78 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_n_69, w_78);
  t = table_putlist_0_0(t);
  t = w_78;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL;
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_79;
  {
    ATerm g_18 (ATerm t)
    {
      ATerm r_79 = NULL,s_79 = NULL;
      if(match_cons(t, sym__2))
        {
          r_79 = ATgetArgument(t, 0);
          s_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(q_79, r_79, s_79);
      t = (ATerm) ATmakeAppl(sym__3, q_79, r_79, s_79);
      return(t);
    }
    t = map_1_0(g_18, t);
  }
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  {
    ATerm k_18 (ATerm t)
    {
      ATerm f_14 = NULL,g_14 = NULL;
      f_14 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), f_14);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_14, g_14);
      return(t);
    }
    t = map_1_0(k_18, t);
  }
  return(t);
}
ATerm abstract_choice_2_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  w_79 = t;
  t = save_Bound_0_0(t);
  x_79 = t;
  t = w_79;
  t = f_142(t);
  y_79 = t;
  t = save_Bound_0_0(t);
  z_79 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_n_69, x_79);
  t = table_putlist_0_0(t);
  t = y_79;
  t = g_142(t);
  a_80 = t;
  t = z_79;
  t = isect_Bound_0_0(t);
  t = a_80;
  return(t);
}
ATerm LChoice_2_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  g_80 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      c_80 = ATgetArgument(t, 0);
      d_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_80);
  b_80 = t;
  t = c_80;
  t = i_103(t);
  e_80 = t;
  t = d_80;
  t = j_103(t);
  f_80 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, e_80, f_80), b_80);
  return(t);
}
ATerm Choice_2_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm t)
{
  ATerm z_80 = NULL,i_81 = NULL,r_81 = NULL,x_81 = NULL,a_82 = NULL,d_82 = NULL;
  d_82 = t;
  if(match_cons(t, sym_Choice_2))
    {
      i_81 = ATgetArgument(t, 0);
      r_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_82);
  z_80 = t;
  t = i_81;
  t = g_102(t);
  x_81 = t;
  t = r_81;
  t = h_102(t);
  a_82 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, x_81, a_82), z_80);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm w_84 = NULL;
  w_84 = t;
  {
    ATerm s_70 = t;
    int t_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_14 = NULL,l_14 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_14 = ATgetFirst((ATermList) t);
            {
              ATerm u_70 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_14;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_70 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_70) != ATmakeSymbol("j_1", 0, ATtrue)))
              _fail(t);
            k_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_84), term_z_70), k_14), term_x_70);
        ;
        LocalPopChoice(t_70);
      }
    else
      {
        t = s_70;
        {
          ATerm h_71 = t;
          int i_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = NULL,p_14 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_14 = ATgetFirst((ATermList) t);
                  {
                    ATerm j_71 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = p_14;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm n_71 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_71) != ATmakeSymbol("g_1", 0, ATtrue)))
                    _fail(t);
                  o_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_84), term_z_70), o_14), term_p_71);
              ;
              LocalPopChoice(i_71);
            }
          else
            {
              t = h_71;
              {
                ATerm q_71 = t;
                int r_71 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_14 = NULL,t_14 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        t_14 = ATgetFirst((ATermList) t);
                        {
                          ATerm s_71 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = t_14;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm t_71 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) t_71) != ATmakeSymbol("d_1", 0, ATtrue)))
                          _fail(t);
                        s_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_84), term_z_70), s_14), term_p_71);
                    ;
                    LocalPopChoice(r_71);
                  }
                else
                  {
                    t = q_71;
                    {
                      ATerm u_71 = t;
                      int v_71 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_14 = NULL,x_14 = NULL;
                          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              x_14 = ATgetFirst((ATermList) t);
                              {
                                ATerm w_71 = (ATerm) ATgetNext((ATermList) t);
                              }
                            }
                          else
                            _fail(t);
                          t = x_14;
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm x_71 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) x_71) != ATmakeSymbol("a_1", 0, ATtrue)))
                                _fail(t);
                              w_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_84), term_z_70), w_14), term_p_71);
                          ;
                          LocalPopChoice(v_71);
                        }
                      else
                        {
                          t = u_71;
                          {
                            ATerm y_71 = t;
                            int z_71 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_15 = NULL,b_15 = NULL;
                                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    b_15 = ATgetFirst((ATermList) t);
                                    {
                                      ATerm a_72 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = b_15;
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm b_72 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) b_72) != ATmakeSymbol("x_0", 0, ATtrue)))
                                      _fail(t);
                                    a_15 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_84), term_z_70), a_15), term_c_72);
                                ;
                                LocalPopChoice(z_71);
                              }
                            else
                              {
                                t = y_71;
                                {
                                  ATerm g_15 = NULL,h_15 = NULL;
                                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      h_15 = ATgetFirst((ATermList) t);
                                      {
                                        ATerm d_72 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = h_15;
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm e_72 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) e_72) != ATmakeSymbol("u_0", 0, ATtrue)))
                                        _fail(t);
                                      g_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_84), term_z_70), g_15), term_c_72);
                                }
                              }
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
  ATerm x_93 = NULL,y_93 = NULL;
  x_93 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_72 = t;
    int g_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), x_93);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_15 = ATgetFirst((ATermList) t);
            {
              ATerm h_72 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = m_15;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm i_72 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_72) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_93);
        ;
        LocalPopChoice(g_72);
      }
    else
      {
        t = f_72;
        {
          ATerm j_72 = t;
          int k_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_15 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), x_93);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_15 = ATgetFirst((ATermList) t);
                  {
                    ATerm l_72 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = p_15;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(k_72);
            }
          else
            {
              t = j_72;
              {
                ATerm u_15 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), x_93);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_15 = ATgetFirst((ATermList) t);
                    {
                      ATerm m_72 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = u_15;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm n_72 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_72) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_93);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm o_72 = t;
  int t_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(t_72);
      {
        ATerm w_72 = t;
        int z_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(z_72);
          }
        else
          {
            t = w_72;
            {
              ATerm i_94 = NULL,j_94 = NULL,y_15 = NULL;
              i_94 = t;
              if(match_cons(t, sym_Var_1))
                {
                  j_94 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_73), j_94), term_a_73);
              t = Context_0_0(t);
              y_15 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), y_15);
              t = y_15;
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = o_72;
      {
        ATerm e_73 = t;
        int f_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(f_73);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = e_73;
            {
              ATerm g_73 = t;
              int h_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(h_73);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = g_73;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  s_94 = t;
  if(match_cons(t, sym_Rule_3))
    {
      m_94 = ATgetArgument(t, 0);
      n_94 = ATgetArgument(t, 1);
      o_94 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_94);
  l_94 = t;
  t = m_94;
  t = z_100(t);
  p_94 = t;
  t = n_94;
  t = a_101(t);
  q_94 = t;
  t = o_94;
  t = b_101(t);
  r_94 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, p_94, q_94, r_94), l_94);
  return(t);
}
ATerm RootApp_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,a_95 = NULL;
  a_95 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      w_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_95);
  v_94 = t;
  t = w_94;
  t = y_99(t);
  x_94 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, x_94), v_94);
  return(t);
}
ATerm App_2_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
  i_95 = t;
  if(match_cons(t, sym_App_2))
    {
      e_95 = ATgetArgument(t, 0);
      f_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_95);
  d_95 = t;
  t = e_95;
  t = w_99(t);
  g_95 = t;
  t = f_95;
  t = x_99(t);
  h_95 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, g_95, h_95), d_95);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,p_95 = NULL;
  if(match_cons(t, sym__3))
    {
      l_95 = ATgetArgument(t, 0);
      m_95 = ATgetArgument(t, 1);
      n_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(l_95, m_95);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_73 = ATgetFirst((ATermList) t);
      p_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(l_95, m_95, (ATerm) ATinsert(CheckATermList(p_95), n_95));
  t = (ATerm) ATmakeAppl(sym__3, l_95, m_95, n_95);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm j_73 = t;
  int k_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(k_73);
      {
        ATerm u_95 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            u_95 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_n_69, (ATerm)ATmakeAppl(sym_Var_1, u_95), term_m_73);
        t = table_replace_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, u_95);
      }
    }
  else
    {
      t = j_73;
      {
        ATerm n_73 = t;
        int o_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(o_73);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = n_73;
            {
              ATerm p_73 = t;
              int q_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(q_73);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = p_73;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,z_95 = NULL;
  z_95 = t;
  if(match_cons(t, sym_Match_1))
    {
      w_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_95);
  v_95 = t;
  t = w_95;
  t = z_102(t);
  x_95 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, x_95), v_95);
  return(t);
}
ATerm Build_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
  h_96 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_96);
  e_96 = t;
  t = f_96;
  t = a_103(t);
  g_96 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, g_96), e_96);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm s_73 = t;
  int t_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(t_73);
      {
        ATerm m_18 (ATerm t)
        {
          t = term_n_69;
          return(t);
        }
        ATerm o_18 (ATerm t)
        {
          ATerm q_18 (ATerm t)
          {
            ATerm r_18 (ATerm t)
            {
              ATerm l_96 = NULL;
              l_96 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_96), term_f_70);
              {
                ATerm s_18 (ATerm t)
                {
                  t = term_n_69;
                  return(t);
                }
                t = assert_1_0(s_18, t);
                t = l_96;
              }
              return(t);
            }
            t = map_1_0(r_18, t);
            return(t);
          }
          t = Scope_2_0(q_18, unbound_vars_0_0, t);
          return(t);
        }
        t = scope_2_0(m_18, o_18, t);
      }
    }
  else
    {
      t = s_73;
      {
        ATerm v_73 = t;
        int w_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(w_73);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = v_73;
            {
              ATerm x_73 = t;
              int y_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(y_73);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = x_73;
                  {
                    ATerm z_73 = t;
                    int a_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(a_74);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = z_73;
                        {
                          ATerm b_74 = t;
                          int c_74 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(c_74);
                              {
                                ATerm u_18 (ATerm t)
                                {
                                  t = Choice_2_0(unbound_vars_0_0, _id, t);
                                  return(t);
                                }
                                ATerm w_18 (ATerm t)
                                {
                                  t = Choice_2_0(_id, unbound_vars_0_0, t);
                                  return(t);
                                }
                                t = abstract_choice_2_0(u_18, w_18, t);
                              }
                            }
                          else
                            {
                              t = b_74;
                              {
                                ATerm d_74 = t;
                                int e_74 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(e_74);
                                    {
                                      ATerm x_18 (ATerm t)
                                      {
                                        t = LChoice_2_0(unbound_vars_0_0, _id, t);
                                        return(t);
                                      }
                                      ATerm y_18 (ATerm t)
                                      {
                                        t = LChoice_2_0(_id, unbound_vars_0_0, t);
                                        return(t);
                                      }
                                      t = abstract_choice_2_0(x_18, y_18, t);
                                    }
                                  }
                                else
                                  {
                                    t = d_74;
                                    {
                                      ATerm f_74 = t;
                                      int g_74 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(g_74);
                                          {
                                            ATerm z_18 (ATerm t)
                                            {
                                              t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
                                              return(t);
                                            }
                                            ATerm c_19 (ATerm t)
                                            {
                                              t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
                                              return(t);
                                            }
                                            t = abstract_choice_2_0(z_18, c_19, t);
                                          }
                                        }
                                      else
                                        {
                                          t = f_74;
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
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm q_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_96 = ATgetArgument(t, 0);
      t_96 = ATgetArgument(t, 1);
      u_96 = ATgetArgument(t, 2);
      q_96 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_74, s_96));
      {
        ATerm e_19 (ATerm t)
        {
          t = term_j_69;
          return(t);
        }
        t = assert_1_0(e_19, t);
        t = u_96;
        {
          ATerm f_19 (ATerm t)
          {
            ATerm f_97 = NULL;
            ATerm i_74 = t;
            int j_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_VarDec_2))
                  {
                    f_97 = ATgetArgument(t, 0);
                    {
                      ATerm k_74 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(j_74);
                t = f_97;
              }
            else
              {
                t = i_74;
                if(match_cons(t, sym_DefaultVarDec_1))
                  {
                    f_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_97;
              }
            return(t);
          }
          t = map_1_0(f_19, t);
          {
            ATerm g_19 (ATerm t)
            {
              ATerm i_97 = NULL;
              i_97 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_97), term_l_69);
              {
                ATerm i_19 (ATerm t)
                {
                  t = term_n_69;
                  return(t);
                }
                t = assert_1_0(i_19, t);
                t = i_97;
              }
              return(t);
            }
            t = map_1_0(g_19, t);
            t = q_96;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_96, t_96, u_96, q_96);
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_96 = ATgetArgument(t, 0);
          t_96 = ATgetArgument(t, 1);
          u_96 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_74, s_96));
      {
        ATerm j_19 (ATerm t)
        {
          t = term_j_69;
          return(t);
        }
        t = assert_1_0(j_19, t);
        t = u_96;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDef_3, s_96, t_96, u_96);
      }
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    t = term_j_69;
    return(t);
  }
  ATerm m_19 (ATerm t)
  {
    ATerm n_19 (ATerm t)
    {
      t = term_n_69;
      return(t);
    }
    ATerm s_19 (ATerm t)
    {
      ATerm t_97 = NULL;
      t_97 = t;
      {
        ATerm t_19 (ATerm t)
        {
          ATerm u_97 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              u_97 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, u_97);
          return(t);
        }
        ATerm u_19 (ATerm t)
        {
          ATerm v_97 = NULL,c_98 = NULL,e_98 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              c_98 = ATgetArgument(t, 0);
              t = c_98;
              if(match_cons(t, sym_Rule_3))
                {
                  v_97 = ATgetArgument(t, 0);
                  {
                    ATerm m_74 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm n_74 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = v_97;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm o_74 = t;
              int p_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      c_98 = ATgetArgument(t, 0);
                      {
                        ATerm q_74 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_74);
                  t = c_98;
                }
              else
                {
                  t = o_74;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      c_98 = ATgetArgument(t, 0);
                      t = c_98;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm r_74 = t;
                      int s_74 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm t_74 = ATgetArgument(t, 0);
                              ATerm u_74 = ATgetArgument(t, 1);
                              e_98 = ATgetArgument(t, 2);
                              {
                                ATerm v_74 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(s_74);
                          t = e_98;
                          {
                            ATerm x_19 (ATerm t)
                            {
                              ATerm v_98 = NULL;
                              ATerm w_74 = t;
                              int x_74 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      v_98 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_74 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(x_74);
                                  t = v_98;
                                }
                              else
                                {
                                  t = w_74;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      v_98 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_98;
                                }
                              return(t);
                            }
                            t = map_1_0(x_19, t);
                          }
                        }
                      else
                        {
                          t = r_74;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm z_74 = ATgetArgument(t, 0);
                              ATerm a_75 = ATgetArgument(t, 1);
                              e_98 = ATgetArgument(t, 2);
                              {
                                ATerm b_75 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = e_98;
                          {
                            ATerm y_19 (ATerm t)
                            {
                              ATerm d_99 = NULL;
                              ATerm c_75 = t;
                              int d_75 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      d_99 = ATgetArgument(t, 0);
                                      {
                                        ATerm e_75 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(d_75);
                                  t = d_99;
                                }
                              else
                                {
                                  t = c_75;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      d_99 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_99;
                                }
                              return(t);
                            }
                            t = map_1_0(y_19, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(t_19, u_19, tboundin_3_0, t);
        {
          ATerm z_19 (ATerm t)
          {
            ATerm g_99 = NULL;
            g_99 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_99), term_f_70);
            {
              ATerm b_20 (ATerm t)
              {
                t = term_n_69;
                return(t);
              }
              t = assert_1_0(b_20, t);
              t = g_99;
            }
            return(t);
          }
          t = map_1_0(z_19, t);
          t = t_97;
          {
            ATerm f_75 = t;
            int g_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = sdef_ud_0_0(t);
                ;
                LocalPopChoice(g_75);
              }
            else
              {
                t = f_75;
                {
                  ATerm h_75 = t;
                  int i_75 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = rdef_ud_0_0(t);
                      ;
                      LocalPopChoice(i_75);
                    }
                  else
                    {
                      t = h_75;
                      t = overlay_ud_0_0(t);
                    }
                }
              }
          }
        }
      }
      return(t);
    }
    t = scope_2_0(n_19, s_19, t);
    return(t);
  }
  t = scope_2_0(l_19, m_19, t);
  return(t);
}
ATerm Signature_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL;
  m_99 = t;
  if(match_cons(t, sym_Signature_1))
    {
      k_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_99);
  j_99 = t;
  t = k_99;
  t = l_98(t);
  l_99 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, l_99), j_99);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm c_20 (ATerm t)
  {
    ATerm d_20 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm e_20 (ATerm t)
    {
      ATerm f_20 (ATerm t)
      {
        ATerm h_20 (ATerm t)
        {
          ATerm j_75 = t;
          int k_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(k_75);
            }
          else
            {
              t = j_75;
              {
                ATerm u_99 = NULL;
                u_99 = t;
                {
                  ATerm i_20 (ATerm t)
                  {
                    ATerm l_75 = t;
                    if((PushChoice() == 0))
                      {
                        t = def_use_def_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = l_75;
                      }
                    return(t);
                  }
                  t = filter_1_0(i_20, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_99;
                }
              }
            }
          return(t);
        }
        t = Overlays_1_0(h_20, t);
        return(t);
      }
      ATerm g_20 (ATerm t)
      {
        ATerm j_20 (ATerm t)
        {
          ATerm l_20 (ATerm t)
          {
            ATerm m_75 = t;
            int n_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_75);
              }
            else
              {
                t = m_75;
                {
                  ATerm c_100 = NULL;
                  c_100 = t;
                  {
                    ATerm o_20 (ATerm t)
                    {
                      ATerm o_75 = t;
                      if((PushChoice() == 0))
                        {
                          t = def_use_def_0_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = o_75;
                        }
                      return(t);
                    }
                    t = filter_1_0(o_20, t);
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = c_100;
                  }
                }
              }
            return(t);
          }
          t = Strategies_1_0(l_20, t);
          return(t);
        }
        ATerm k_20 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(j_20, k_20, t);
        return(t);
      }
      t = Cons_2_0(f_20, g_20, t);
      return(t);
    }
    t = Cons_2_0(d_20, e_20, t);
    return(t);
  }
  t = Specification_1_0(c_20, t);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm p_20 (ATerm t)
  {
    ATerm d_101 = NULL,g_101 = NULL,h_101 = NULL;
    d_101 = t;
    {
      ATerm p_75 = t;
      int q_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Var_1))
            {
              ATerm r_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(q_75);
          t = d_101;
          {
            ATerm s_75 = t;
            if((PushChoice() == 0))
              {
                ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
                f_16 = t;
                if(match_cons(t, sym_Var_1))
                  {
                    g_16 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue)), f_16);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm t_75 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = h_16;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm u_75 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_75) != ATmakeSymbol("l_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_16);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_75;
              }
            t = term_w_75;
          }
        }
      else
        {
          t = p_75;
          if(match_cons(t, sym_Wld_0))
            {
              t = term_w_75;
            }
          else
            {
              if(match_cons(t, sym_RootApp_1))
                {
                  g_101 = ATgetArgument(t, 0);
                  {
                    ATerm k_101 = NULL;
                    t = g_101;
                    {
                      ATerm s_20 (ATerm t)
                      {
                        ATerm l_101 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            l_101 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(ATempty, l_101);
                        return(t);
                      }
                      ATerm t_20 (ATerm t)
                      {
                        ATerm m_101 = NULL,c_102 = NULL,e_102 = NULL;
                        if(match_cons(t, sym_LRule_1))
                          {
                            c_102 = ATgetArgument(t, 0);
                            t = c_102;
                            if(match_cons(t, sym_Rule_3))
                              {
                                m_101 = ATgetArgument(t, 0);
                                {
                                  ATerm y_75 = ATgetArgument(t, 1);
                                }
                                {
                                  ATerm z_75 = ATgetArgument(t, 2);
                                }
                              }
                            else
                              _fail(t);
                            t = m_101;
                            t = tvars_0_0(t);
                          }
                        else
                          {
                            ATerm a_76 = t;
                            int b_76 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    c_102 = ATgetArgument(t, 0);
                                    {
                                      ATerm c_76 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(b_76);
                                t = c_102;
                              }
                            else
                              {
                                t = a_76;
                                if(match_cons(t, sym_DynamicRules_1))
                                  {
                                    c_102 = ATgetArgument(t, 0);
                                    t = c_102;
                                    t = tvars_0_0(t);
                                  }
                                else
                                  {
                                    ATerm d_76 = t;
                                    int e_76 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_SDefT_4))
                                          {
                                            ATerm f_76 = ATgetArgument(t, 0);
                                            ATerm g_76 = ATgetArgument(t, 1);
                                            e_102 = ATgetArgument(t, 2);
                                            {
                                              ATerm h_76 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(e_76);
                                        t = e_102;
                                        {
                                          ATerm x_20 (ATerm t)
                                          {
                                            ATerm u_102 = NULL;
                                            ATerm i_76 = t;
                                            int j_76 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    u_102 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_76 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(j_76);
                                                t = u_102;
                                              }
                                            else
                                              {
                                                t = i_76;
                                                if(match_cons(t, sym_DefaultVarDec_1))
                                                  {
                                                    u_102 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = u_102;
                                              }
                                            return(t);
                                          }
                                          t = map_1_0(x_20, t);
                                        }
                                      }
                                    else
                                      {
                                        t = d_76;
                                        if(match_cons(t, sym_RDefT_4))
                                          {
                                            ATerm l_76 = ATgetArgument(t, 0);
                                            ATerm m_76 = ATgetArgument(t, 1);
                                            e_102 = ATgetArgument(t, 2);
                                            {
                                              ATerm n_76 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = e_102;
                                        {
                                          ATerm y_20 (ATerm t)
                                          {
                                            ATerm f_103 = NULL;
                                            ATerm o_76 = t;
                                            int p_76 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    f_103 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_76 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(p_76);
                                                t = f_103;
                                              }
                                            else
                                              {
                                                t = o_76;
                                                if(match_cons(t, sym_DefaultVarDec_1))
                                                  {
                                                    f_103 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = f_103;
                                              }
                                            return(t);
                                          }
                                          t = map_1_0(y_20, t);
                                        }
                                      }
                                  }
                              }
                          }
                        return(t);
                      }
                      t = free_vars_3_0(s_20, t_20, tboundin_3_0, t);
                      {
                        ATerm b_21 (ATerm t)
                        {
                          ATerm r_103 = NULL;
                          r_103 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, r_103);
                          return(t);
                        }
                        t = map_1_0(b_21, t);
                        k_101 = t;
                        t = (ATerm) ATmakeAppl(sym_Op_2, term_r_76, k_101);
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_App_2))
                    {
                      g_101 = ATgetArgument(t, 0);
                      h_101 = ATgetArgument(t, 1);
                      {
                        ATerm u_103 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, g_101, h_101);
                        {
                          ATerm c_21 (ATerm t)
                          {
                            ATerm v_103 = NULL;
                            if(match_cons(t, sym_Var_1))
                              {
                                v_103 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(ATempty, v_103);
                            return(t);
                          }
                          ATerm g_21 (ATerm t)
                          {
                            ATerm w_103 = NULL,g_104 = NULL,i_104 = NULL;
                            if(match_cons(t, sym_LRule_1))
                              {
                                g_104 = ATgetArgument(t, 0);
                                t = g_104;
                                if(match_cons(t, sym_Rule_3))
                                  {
                                    w_103 = ATgetArgument(t, 0);
                                    {
                                      ATerm s_76 = ATgetArgument(t, 1);
                                    }
                                    {
                                      ATerm t_76 = ATgetArgument(t, 2);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = w_103;
                                t = tvars_0_0(t);
                              }
                            else
                              {
                                ATerm u_76 = t;
                                int v_76 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        g_104 = ATgetArgument(t, 0);
                                        {
                                          ATerm w_76 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(v_76);
                                    t = g_104;
                                  }
                                else
                                  {
                                    t = u_76;
                                    if(match_cons(t, sym_DynamicRules_1))
                                      {
                                        g_104 = ATgetArgument(t, 0);
                                        t = g_104;
                                        t = tvars_0_0(t);
                                      }
                                    else
                                      {
                                        ATerm y_76 = t;
                                        int z_76 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_SDefT_4))
                                              {
                                                ATerm a_77 = ATgetArgument(t, 0);
                                                ATerm b_77 = ATgetArgument(t, 1);
                                                i_104 = ATgetArgument(t, 2);
                                                {
                                                  ATerm c_77 = ATgetArgument(t, 3);
                                                }
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(z_76);
                                            t = i_104;
                                            {
                                              ATerm h_21 (ATerm t)
                                              {
                                                ATerm q_104 = NULL;
                                                ATerm d_77 = t;
                                                int e_77 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_VarDec_2))
                                                      {
                                                        q_104 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm f_77 = ATgetArgument(t, 1);
                                                        }
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_77);
                                                    t = q_104;
                                                  }
                                                else
                                                  {
                                                    t = d_77;
                                                    if(match_cons(t, sym_DefaultVarDec_1))
                                                      {
                                                        q_104 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = q_104;
                                                  }
                                                return(t);
                                              }
                                              t = map_1_0(h_21, t);
                                            }
                                          }
                                        else
                                          {
                                            t = y_76;
                                            if(match_cons(t, sym_RDefT_4))
                                              {
                                                ATerm g_77 = ATgetArgument(t, 0);
                                                ATerm h_77 = ATgetArgument(t, 1);
                                                i_104 = ATgetArgument(t, 2);
                                                {
                                                  ATerm i_77 = ATgetArgument(t, 3);
                                                }
                                              }
                                            else
                                              _fail(t);
                                            t = i_104;
                                            {
                                              ATerm k_21 (ATerm t)
                                              {
                                                ATerm w_104 = NULL;
                                                ATerm j_77 = t;
                                                int k_77 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_VarDec_2))
                                                      {
                                                        w_104 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm l_77 = ATgetArgument(t, 1);
                                                        }
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_77);
                                                    t = w_104;
                                                  }
                                                else
                                                  {
                                                    t = j_77;
                                                    if(match_cons(t, sym_DefaultVarDec_1))
                                                      {
                                                        w_104 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = w_104;
                                                  }
                                                return(t);
                                              }
                                              t = map_1_0(k_21, t);
                                            }
                                          }
                                      }
                                  }
                              }
                            return(t);
                          }
                          t = free_vars_3_0(c_21, g_21, tboundin_3_0, t);
                          {
                            ATerm l_21 (ATerm t)
                            {
                              ATerm a_105 = NULL;
                              a_105 = t;
                              t = (ATerm) ATmakeAppl(sym_Var_1, a_105);
                              return(t);
                            }
                            t = map_1_0(l_21, t);
                            u_103 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, term_r_76, u_103);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Con_3))
                        {
                          ATerm m_77 = ATgetArgument(t, 0);
                          ATerm n_77 = ATgetArgument(t, 1);
                          ATerm o_77 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue))));
                      t = SSL_exit((ATerm) ATmakeInt(1));
                      t = (ATerm) ATinsert(ATempty, term_p_77);
                    }
                }
            }
        }
    }
    return(t);
  }
  t = alltd_1_0(p_20, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_111 (ATerm n_107, ATerm o_107, ATerm p_107, ATerm q_107, ATerm r_107, ATerm s_107, ATerm t_107, ATerm t)
  {
    ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, r_107, term_r_77);
    {
      ATerm s_77 = t;
      if((PushChoice() == 0))
        {
          ATerm m_108 = NULL;
          if(match_cons(t, sym__2))
            {
              m_108 = ATgetArgument(t, 0);
              if((m_108 != ATgetArgument(t, 1)))
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
          t = s_77;
        }
      t = new_0_0(t);
      e_108 = t;
      t = q_107;
      t = dummify_0_0(t);
      f_108 = t;
      {
        ATerm t_77 = t;
        int u_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((q_107 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, e_108);
            ;
            LocalPopChoice(u_77);
          }
        else
          {
            t = t_77;
          }
        g_108 = t;
        t = f_108;
        {
          ATerm p_21 (ATerm t)
          {
            ATerm o_108 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                o_108 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, o_108);
            return(t);
          }
          ATerm q_21 (ATerm t)
          {
            ATerm p_108 = NULL,t_108 = NULL,v_108 = NULL;
            if(match_cons(t, sym_LRule_1))
              {
                t_108 = ATgetArgument(t, 0);
                t = t_108;
                if(match_cons(t, sym_Rule_3))
                  {
                    p_108 = ATgetArgument(t, 0);
                    {
                      ATerm v_77 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm w_77 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                t = p_108;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm x_77 = t;
                int y_77 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        t_108 = ATgetArgument(t, 0);
                        {
                          ATerm z_77 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_77);
                    t = t_108;
                  }
                else
                  {
                    t = x_77;
                    if(match_cons(t, sym_DynamicRules_1))
                      {
                        t_108 = ATgetArgument(t, 0);
                        t = t_108;
                        t = tvars_0_0(t);
                      }
                    else
                      {
                        ATerm a_78 = t;
                        int b_78 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_SDefT_4))
                              {
                                ATerm c_78 = ATgetArgument(t, 0);
                                ATerm e_78 = ATgetArgument(t, 1);
                                v_108 = ATgetArgument(t, 2);
                                {
                                  ATerm m_78 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(b_78);
                            t = v_108;
                            {
                              ATerm u_21 (ATerm t)
                              {
                                ATerm d_109 = NULL;
                                ATerm n_78 = t;
                                int o_78 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        d_109 = ATgetArgument(t, 0);
                                        {
                                          ATerm p_78 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(o_78);
                                    t = d_109;
                                  }
                                else
                                  {
                                    t = n_78;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        d_109 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = d_109;
                                  }
                                return(t);
                              }
                              t = map_1_0(u_21, t);
                            }
                          }
                        else
                          {
                            t = a_78;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm q_78 = ATgetArgument(t, 0);
                                ATerm r_78 = ATgetArgument(t, 1);
                                v_108 = ATgetArgument(t, 2);
                                {
                                  ATerm s_78 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = v_108;
                            {
                              ATerm v_21 (ATerm t)
                              {
                                ATerm j_109 = NULL;
                                ATerm t_78 = t;
                                int u_78 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        j_109 = ATgetArgument(t, 0);
                                        {
                                          ATerm v_78 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(u_78);
                                    t = j_109;
                                  }
                                else
                                  {
                                    t = t_78;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        j_109 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = j_109;
                                  }
                                return(t);
                              }
                              t = map_1_0(v_21, t);
                            }
                          }
                      }
                  }
              }
            return(t);
          }
          t = free_vars_3_0(p_21, q_21, tboundin_3_0, t);
          {
            ATerm y_21 (ATerm t)
            {
              ATerm m_109 = NULL;
              m_109 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, m_109);
              return(t);
            }
            t = map_1_0(y_21, t);
            h_108 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_107, s_107);
            {
              ATerm z_21 (ATerm t)
              {
                ATerm n_109 = NULL;
                if(match_cons(t, sym_Var_1))
                  {
                    n_109 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, n_109);
                return(t);
              }
              ATerm d_22 (ATerm t)
              {
                ATerm o_109 = NULL,s_109 = NULL,u_109 = NULL;
                if(match_cons(t, sym_LRule_1))
                  {
                    s_109 = ATgetArgument(t, 0);
                    t = s_109;
                    if(match_cons(t, sym_Rule_3))
                      {
                        o_109 = ATgetArgument(t, 0);
                        {
                          ATerm x_78 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm a_79 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    t = o_109;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm b_79 = t;
                    int c_79 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            s_109 = ATgetArgument(t, 0);
                            {
                              ATerm d_79 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(c_79);
                        t = s_109;
                      }
                    else
                      {
                        t = b_79;
                        if(match_cons(t, sym_DynamicRules_1))
                          {
                            s_109 = ATgetArgument(t, 0);
                            t = s_109;
                            t = tvars_0_0(t);
                          }
                        else
                          {
                            ATerm e_79 = t;
                            int f_79 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_SDefT_4))
                                  {
                                    ATerm i_79 = ATgetArgument(t, 0);
                                    ATerm l_79 = ATgetArgument(t, 1);
                                    u_109 = ATgetArgument(t, 2);
                                    {
                                      ATerm m_79 = ATgetArgument(t, 3);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(f_79);
                                t = u_109;
                                {
                                  ATerm f_22 (ATerm t)
                                  {
                                    ATerm c_110 = NULL;
                                    ATerm o_79 = t;
                                    int t_79 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_VarDec_2))
                                          {
                                            c_110 = ATgetArgument(t, 0);
                                            {
                                              ATerm u_79 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(t_79);
                                        t = c_110;
                                      }
                                    else
                                      {
                                        t = o_79;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            c_110 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = c_110;
                                      }
                                    return(t);
                                  }
                                  t = map_1_0(f_22, t);
                                }
                              }
                            else
                              {
                                t = e_79;
                                if(match_cons(t, sym_RDefT_4))
                                  {
                                    ATerm v_79 = ATgetArgument(t, 0);
                                    ATerm h_80 = ATgetArgument(t, 1);
                                    u_109 = ATgetArgument(t, 2);
                                    {
                                      ATerm i_80 = ATgetArgument(t, 3);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = u_109;
                                {
                                  ATerm g_22 (ATerm t)
                                  {
                                    ATerm j_110 = NULL;
                                    ATerm j_80 = t;
                                    int k_80 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_VarDec_2))
                                          {
                                            j_110 = ATgetArgument(t, 0);
                                            {
                                              ATerm l_80 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(k_80);
                                        t = j_110;
                                      }
                                    else
                                      {
                                        t = j_80;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            j_110 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = j_110;
                                      }
                                    return(t);
                                  }
                                  t = map_1_0(g_22, t);
                                }
                              }
                          }
                      }
                  }
                return(t);
              }
              t = free_vars_3_0(z_21, d_22, tboundin_3_0, t);
              {
                ATerm i_22 (ATerm t)
                {
                  ATerm n_110 = NULL,p_110 = NULL;
                  n_110 = t;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Var_1, n_110));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_110 = ATgetFirst((ATermList) t);
                      {
                        ATerm m_80 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = p_110;
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm n_80 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) n_80) != ATmakeSymbol("l_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_110);
                  return(t);
                }
                t = filter_1_0(i_22, t);
                i_108 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_108, h_108);
                t = diff_0_0(t);
                j_108 = t;
                t = new_0_0(t);
                k_108 = t;
                t = n_107;
                t = n_0(t);
                l_108 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, l_108, (ATerm) ATmakeAppl(sym_Op_2, term_o_80, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_p_80, (ATerm) ATinsert(CheckATermList(j_108), (ATerm) ATmakeAppl(sym_Str_1, k_108)))), f_108)))), (ATerm) ATmakeAppl(sym_RDefT_4, n_107, o_107, p_107, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_108), q_107), r_107, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_80, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, n_107)))), g_108), (ATerm) ATmakeAppl(sym_Op_2, term_p_80, (ATerm) ATinsert(CheckATermList(j_108), (ATerm) ATmakeAppl(sym_Str_1, k_108)))), s_107))));
              }
            }
          }
        }
      }
    }
    return(t);
  }
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL,w_110 = NULL,a_111 = NULL,b_111 = NULL,e_111 = NULL;
  s_110 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      t_110 = ATgetArgument(t, 0);
      u_110 = ATgetArgument(t, 1);
      v_110 = ATgetArgument(t, 2);
      w_110 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = w_110;
  if(match_cons(t, sym_Rule_3))
    {
      a_111 = ATgetArgument(t, 0);
      b_111 = ATgetArgument(t, 1);
      e_111 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_111;
  if(match_cons(t, sym_Op_2))
    {
      q_110 = ATgetArgument(t, 0);
      r_110 = ATgetArgument(t, 1);
      t = r_110;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_110;
          if(match_string(t, "Undefined"))
            {
              ATerm s_80 = t;
              int t_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
                  t = s_110;
                  t = new_0_0(t);
                  w_16 = t;
                  t = a_111;
                  t = dummify_0_0(t);
                  x_16 = t;
                  {
                    ATerm u_80 = t;
                    int v_80 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if((a_111 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, w_16);
                        ;
                        LocalPopChoice(v_80);
                      }
                    else
                      {
                        t = u_80;
                      }
                    y_16 = t;
                    t = t_110;
                    t = n_0(t);
                    z_16 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_16, (ATerm) ATmakeAppl(sym_Op_2, term_o_80, (ATerm) ATinsert(ATinsert(ATempty, term_r_77), x_16)))), (ATerm) ATmakeAppl(sym_RDefT_4, t_110, u_110, v_110, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_16), a_111), term_r_77, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_80, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_110)))), y_16), term_r_77), (ATerm) ATmakeAppl(sym_Seq_2, e_111, term_z_45)))));
                  }
                  ;
                  LocalPopChoice(t_80);
                }
              else
                {
                  t = s_80;
                  t = g_111(t_110, u_110, v_110, a_111, b_111, e_111, s_110, t);
                }
            }
          else
            {
              t = g_111(t_110, u_110, v_110, a_111, b_111, e_111, s_110, t);
            }
        }
      else
        {
          t = q_110;
          t = g_111(t_110, u_110, v_110, a_111, b_111, e_111, s_110, t);
        }
    }
  else
    {
      t = g_111(t_110, u_110, v_110, a_111, b_111, e_111, s_110, t);
    }
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm j_111 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      j_111 = ATgetArgument(t, 0);
      t = j_111;
      {
        ATerm k_22 (ATerm t)
        {
          ATerm l_22 (ATerm t)
          {
            ATerm m_111 = NULL;
            m_111 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_x_80, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_111))));
            return(t);
          }
          t = SplitDynamicRule_1_0(l_22, t);
          return(t);
        }
        t = map_1_0(k_22, t);
        {
          ATerm m_22 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_h_36;
            return(t);
          }
          ATerm o_22 (ATerm t)
          {
            ATerm n_111 = NULL,q_111 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_111 = ATgetFirst((ATermList) t);
                q_111 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, n_111, q_111);
            return(t);
          }
          ATerm p_22 (ATerm t)
          {
            ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL,v_111 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm y_80 = ATgetArgument(t, 0);
                if(match_cons(y_80, sym__2))
                  {
                    s_111 = ATgetArgument(y_80, 0);
                    u_111 = ATgetArgument(y_80, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm a_81 = ATgetArgument(t, 1);
                  if(match_cons(a_81, sym__2))
                    {
                      t_111 = ATgetArgument(a_81, 0);
                      v_111 = ATgetArgument(a_81, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_111), s_111), (ATerm) ATinsert(CheckATermList(v_111), u_111));
            return(t);
          }
          t = genzip_4_0(m_22, o_22, p_22, _id, t);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          j_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_111;
      {
        ATerm q_22 (ATerm t)
        {
          ATerm s_22 (ATerm t)
          {
            ATerm y_111 = NULL;
            y_111 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_c_81, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_111))));
            return(t);
          }
          t = SplitDynamicRule_1_0(s_22, t);
          return(t);
        }
        t = map_1_0(q_22, t);
        {
          ATerm t_22 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_h_36;
            return(t);
          }
          ATerm v_22 (ATerm t)
          {
            ATerm z_111 = NULL,b_112 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_111 = ATgetFirst((ATermList) t);
                b_112 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, z_111, b_112);
            return(t);
          }
          ATerm x_22 (ATerm t)
          {
            ATerm c_112 = NULL,d_112 = NULL,e_112 = NULL,f_112 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm d_81 = ATgetArgument(t, 0);
                if(match_cons(d_81, sym__2))
                  {
                    c_112 = ATgetArgument(d_81, 0);
                    e_112 = ATgetArgument(d_81, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm e_81 = ATgetArgument(t, 1);
                  if(match_cons(e_81, sym__2))
                    {
                      d_112 = ATgetArgument(e_81, 0);
                      f_112 = ATgetArgument(e_81, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_112), c_112), (ATerm) ATinsert(CheckATermList(f_112), e_112));
            return(t);
          }
          t = genzip_4_0(t_22, v_22, x_22, _id, t);
        }
      }
    }
  return(t);
}
ATerm split_under_scope_1_0 (ATerm w_140 (ATerm), ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,j_112 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      g_112 = ATgetArgument(t, 0);
      h_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_23 (ATerm t)
    {
      t = term_f_81;
      return(t);
    }
    ATerm b_23 (ATerm t)
    {
      t = g_112;
      {
        ATerm d_23 (ATerm t)
        {
          ATerm k_112 = NULL;
          k_112 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_112), term_h_81);
          {
            ATerm e_23 (ATerm t)
            {
              t = term_f_81;
              return(t);
            }
            t = assert_1_0(e_23, t);
            t = k_112;
          }
          return(t);
        }
        t = map_1_0(d_23, t);
        t = h_112;
        t = w_140(t);
        if(((j_112 != NULL) && (j_112 != t)))
          _fail(t);
        else
          j_112 = t;
      }
      return(t);
    }
    t = scope_2_0(a_23, b_23, t);
    t = (ATerm) ATmakeAppl(sym_Scope_2, g_112, not_null(j_112));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm p_112 (ATerm t)
  {
    ATerm j_81 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_114(t);
        ;
        LocalPopChoice(k_81);
      }
    else
      {
        t = j_81;
        t = SRTS_one(p_112, t);
      }
    return(t);
  }
  t = p_112(t);
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm q_112 (ATerm t)
  {
    ATerm g_23 (ATerm t)
    {
      ATerm l_81 = t;
      int m_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_140(t);
          ;
          LocalPopChoice(m_81);
        }
      else
        {
          t = l_81;
          t = split_under_scope_1_0(q_112, t);
        }
      return(t);
    }
    t = oncetd_1_0(g_23, t);
    return(t);
  }
  t = q_112(t);
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_112 = ATgetFirst((ATermList) t);
      a_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm i_23 (ATerm t)
    {
      t = term_f_81;
      return(t);
    }
    ATerm k_23 (ATerm t)
    {
      t = z_112;
      {
        ATerm l_23 (ATerm t)
        {
          ATerm g_113 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              g_113 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, g_113);
          return(t);
        }
        ATerm n_23 (ATerm t)
        {
          ATerm n_113 = NULL,t_113 = NULL,v_113 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              t_113 = ATgetArgument(t, 0);
              t = t_113;
              if(match_cons(t, sym_Rule_3))
                {
                  n_113 = ATgetArgument(t, 0);
                  {
                    ATerm n_81 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm o_81 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = n_113;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm p_81 = t;
              int q_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      t_113 = ATgetArgument(t, 0);
                      {
                        ATerm s_81 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_81);
                  t = t_113;
                }
              else
                {
                  t = p_81;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      t_113 = ATgetArgument(t, 0);
                      t = t_113;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm t_81 = t;
                      int u_81 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm v_81 = ATgetArgument(t, 0);
                              ATerm w_81 = ATgetArgument(t, 1);
                              v_113 = ATgetArgument(t, 2);
                              {
                                ATerm y_81 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(u_81);
                          t = v_113;
                          {
                            ATerm o_23 (ATerm t)
                            {
                              ATerm d_114 = NULL;
                              ATerm z_81 = t;
                              int b_82 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      d_114 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_82 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(b_82);
                                  t = d_114;
                                }
                              else
                                {
                                  t = z_81;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      d_114 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_114;
                                }
                              return(t);
                            }
                            t = map_1_0(o_23, t);
                          }
                        }
                      else
                        {
                          t = t_81;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm e_82 = ATgetArgument(t, 0);
                              ATerm f_82 = ATgetArgument(t, 1);
                              v_113 = ATgetArgument(t, 2);
                              {
                                ATerm g_82 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = v_113;
                          {
                            ATerm p_23 (ATerm t)
                            {
                              ATerm p_114 = NULL;
                              ATerm h_82 = t;
                              int i_82 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      p_114 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_82 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(i_82);
                                  t = p_114;
                                }
                              else
                                {
                                  t = h_82;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      p_114 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_114;
                                }
                              return(t);
                            }
                            t = map_1_0(p_23, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(l_23, n_23, tboundin_3_0, t);
        {
          ATerm r_23 (ATerm t)
          {
            ATerm w_114 = NULL;
            w_114 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_114), term_h_81);
            {
              ATerm t_23 (ATerm t)
              {
                t = term_f_81;
                return(t);
              }
              t = assert_1_0(t_23, t);
              t = w_114;
            }
            return(t);
          }
          t = map_1_0(r_23, t);
          t = z_112;
          {
            ATerm v_23 (ATerm t)
            {
              t = split_dynamic_rules_0_0(t);
              if(match_cons(t, sym__2))
                {
                  if(((e_113 != NULL) && (e_113 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_113 = ATgetArgument(t, 0);
                  if(((d_113 != NULL) && (d_113 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_113));
              return(t);
            }
            t = split_dynamic_rule_1_0(v_23, t);
            if(((f_113 != NULL) && (f_113 != t)))
              _fail(t);
            else
              f_113 = t;
          }
        }
      }
      return(t);
    }
    t = scope_2_0(i_23, k_23, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_113)), not_null(f_113)), a_113);
    {
      ATerm k_82 = t;
      int l_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_82 = ATgetArgument(t, 0);
              ATerm n_82 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(d_113)), not_null(f_113));
          {
            ATerm x_23 (ATerm t)
            {
              t = a_113;
              return(t);
            }
            t = at_end_1_0(x_23, t);
          }
          ;
          LocalPopChoice(l_82);
        }
      else
        {
          t = k_82;
          {
            ATerm e_17 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_113)), not_null(f_113)), a_113));
            if(match_cons(t, sym__2))
              {
                ATerm o_82 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_82) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                e_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_17;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm listtd_1_0 (ATerm r_120 (ATerm), ATerm t)
{
  ATerm e_115 (ATerm t)
  {
    t = r_120(t);
    {
      ATerm p_82 = t;
      int q_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(q_82);
        }
      else
        {
          t = p_82;
          t = Cons_2_0(_id, e_115, t);
        }
    }
    return(t);
  }
  t = e_115(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL,p_115 = NULL,q_115 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      p_115 = ATgetArgument(t, 0);
      q_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_115;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_115 = ATgetFirst((ATermList) t);
      n_115 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_s_82, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, n_115, q_115)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_115))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_115;
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL;
  b_116 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      z_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_116);
  y_115 = t;
  t = z_115;
  t = z_101(t);
  a_116 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, a_116), y_115);
  return(t);
}
ATerm Scope_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm g_116 = NULL,i_116 = NULL,j_116 = NULL,m_116 = NULL,n_116 = NULL,o_116 = NULL;
  o_116 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_116 = ATgetArgument(t, 0);
      j_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_116);
  g_116 = t;
  t = i_116;
  t = c_103(t);
  m_116 = t;
  t = j_116;
  t = d_103(t);
  n_116 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, m_116, n_116), g_116);
  return(t);
}
ATerm tboundin_3_0 (ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm t)
{
  ATerm t_82 = t;
  int u_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(y_141, w_141, t);
      ;
      LocalPopChoice(u_82);
    }
  else
    {
      t = t_82;
      {
        ATerm v_82 = t;
        int w_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(y_141, y_141, y_141, w_141, t);
            ;
            LocalPopChoice(w_82);
          }
        else
          {
            t = v_82;
            {
              ATerm x_82 = t;
              int y_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(y_141, y_141, y_141, w_141, t);
                  ;
                  LocalPopChoice(y_82);
                }
              else
                {
                  t = x_82;
                  t = DynamicRules_1_0(w_141, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm y_23 (ATerm t)
  {
    ATerm y_116 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        y_116 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, y_116);
    return(t);
  }
  ATerm a_24 (ATerm t)
  {
    ATerm a_117 = NULL,e_117 = NULL,g_117 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        e_117 = ATgetArgument(t, 0);
        t = e_117;
        if(match_cons(t, sym_Rule_3))
          {
            a_117 = ATgetArgument(t, 0);
            {
              ATerm z_82 = ATgetArgument(t, 1);
            }
            {
              ATerm a_83 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_117;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm b_83 = t;
        int c_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                e_117 = ATgetArgument(t, 0);
                {
                  ATerm d_83 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_83);
            t = e_117;
          }
        else
          {
            t = b_83;
            if(match_cons(t, sym_DynamicRules_1))
              {
                e_117 = ATgetArgument(t, 0);
                t = e_117;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm e_83 = t;
                int f_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm g_83 = ATgetArgument(t, 0);
                        ATerm h_83 = ATgetArgument(t, 1);
                        g_117 = ATgetArgument(t, 2);
                        {
                          ATerm i_83 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_83);
                    t = g_117;
                    {
                      ATerm b_24 (ATerm t)
                      {
                        ATerm r_117 = NULL;
                        ATerm j_83 = t;
                        int k_83 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                r_117 = ATgetArgument(t, 0);
                                {
                                  ATerm l_83 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(k_83);
                            t = r_117;
                          }
                        else
                          {
                            t = j_83;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                r_117 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_117;
                          }
                        return(t);
                      }
                      t = map_1_0(b_24, t);
                    }
                  }
                else
                  {
                    t = e_83;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm m_83 = ATgetArgument(t, 0);
                        ATerm n_83 = ATgetArgument(t, 1);
                        g_117 = ATgetArgument(t, 2);
                        {
                          ATerm o_83 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = g_117;
                    {
                      ATerm d_24 (ATerm t)
                      {
                        ATerm a_118 = NULL;
                        ATerm p_83 = t;
                        int q_83 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                a_118 = ATgetArgument(t, 0);
                                {
                                  ATerm r_83 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(q_83);
                            t = a_118;
                          }
                        else
                          {
                            t = p_83;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                a_118 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = a_118;
                          }
                        return(t);
                      }
                      t = map_1_0(d_24, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(y_23, a_24, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL;
  if(match_cons(t, sym__2))
    {
      e_118 = ATgetArgument(t, 0);
      d_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_118;
  {
    ATerm i_118 (ATerm t)
    {
      ATerm s_83 = t;
      int t_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_118;
          ;
          LocalPopChoice(t_83);
        }
      else
        {
          t = s_83;
          {
            ATerm u_83 = t;
            int v_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_17 = NULL,g_17 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_17 = ATgetFirst((ATermList) t);
                    g_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_118;
                {
                  ATerm g_24 (ATerm t)
                  {
                    ATerm h_17 = NULL;
                    h_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_17, h_17);
                    t = l_123(t);
                    return(t);
                  }
                  t = fetch_1_0(g_24, t);
                  t = g_17;
                  t = i_118(t);
                }
                ;
                LocalPopChoice(v_83);
              }
            else
              {
                t = u_83;
                t = Cons_2_0(_id, i_118, t);
              }
          }
        }
      return(t);
    }
    t = i_118(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm q_118 = NULL,r_118 = NULL;
  if(match_cons(t, sym__2))
    {
      r_118 = ATgetArgument(t, 0);
      q_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_118;
  {
    ATerm s_118 (ATerm t)
    {
      ATerm w_83 = t;
      int x_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_83);
        }
      else
        {
          t = w_83;
          {
            ATerm y_83 = t;
            int z_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_17 = NULL,l_17 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_17 = ATgetFirst((ATermList) t);
                    l_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_118;
                {
                  ATerm h_24 (ATerm t)
                  {
                    ATerm n_17 = NULL;
                    n_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_17, n_17);
                    t = h_123(t);
                    return(t);
                  }
                  t = fetch_1_0(h_24, t);
                  t = l_17;
                  t = s_118(t);
                }
                ;
                LocalPopChoice(z_83);
              }
            else
              {
                t = y_83;
                t = Cons_2_0(_id, s_118, t);
              }
          }
        }
      return(t);
    }
    t = s_118(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm t)
{
  ATerm t_118 (ATerm t)
  {
    ATerm a_84 = t;
    int b_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_121(t);
        ;
        LocalPopChoice(b_84);
      }
    else
      {
        t = a_84;
        t = m_121(t);
        t = _2_0(o_121, t_118, t);
        t = n_121(t);
      }
    return(t);
  }
  t = t_118(t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,a_119 = NULL,b_119 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_84 = ATgetFirst((ATermList) t);
      if(match_cons(c_84, sym__2))
        {
          v_118 = ATgetArgument(c_84, 0);
          w_118 = ATgetArgument(c_84, 1);
        }
      else
        _fail(t);
      x_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_118);
  if(match_cons(t, sym__2))
    {
      y_118 = ATgetArgument(t, 0);
      z_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_118);
  if(match_cons(t, sym__2))
    {
      if((y_118 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_119, z_118);
  {
    ATerm i_24 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm d_84 = ATgetArgument(t, 0);
          if(((ATgetType(d_84) != AT_LIST) || !(ATisEmpty(d_84))))
            _fail(t);
          {
            ATerm e_84 = ATgetArgument(t, 1);
            if(((ATgetType(e_84) != AT_LIST) || !(ATisEmpty(e_84))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm k_24 (ATerm t)
    {
      ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL,g_119 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm f_84 = ATgetArgument(t, 0);
          if(((ATgetType(f_84) == AT_LIST) && !(ATisEmpty(f_84))))
            {
              c_119 = ATgetFirst((ATermList) f_84);
              e_119 = (ATerm) ATgetNext((ATermList) f_84);
            }
          else
            _fail(t);
          {
            ATerm g_84 = ATgetArgument(t, 1);
            if(((ATgetType(g_84) == AT_LIST) && !(ATisEmpty(g_84))))
              {
                d_119 = ATgetFirst((ATermList) g_84);
                g_119 = (ATerm) ATgetNext((ATermList) g_84);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_119, d_119), (ATerm) ATmakeAppl(sym__2, e_119, g_119));
      return(t);
    }
    ATerm l_24 (ATerm t)
    {
      ATerm j_119 = NULL,k_119 = NULL;
      if(match_cons(t, sym__2))
        {
          j_119 = ATgetArgument(t, 0);
          k_119 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(k_119), j_119);
      return(t);
    }
    t = genzip_4_0(i_24, k_24, l_24, _id, t);
    b_119 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_119, x_118);
    {
      ATerm h_84 = t;
      int i_84 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm j_84 = ATgetArgument(t, 0);
              ATerm k_84 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_119;
          {
            ATerm n_24 (ATerm t)
            {
              t = x_118;
              return(t);
            }
            t = at_end_1_0(n_24, t);
          }
          ;
          LocalPopChoice(i_84);
        }
      else
        {
          t = h_84;
          {
            ATerm v_17 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_119, x_118));
            if(match_cons(t, sym__2))
              {
                ATerm l_84 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_84) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                v_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_17;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t)
{
  ATerm o_119 (ATerm t)
  {
    ATerm m_84 = t;
    int n_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_113(t);
        ;
        LocalPopChoice(n_84);
      }
    else
      {
        t = m_84;
        t = i_113(t);
        t = o_119(t);
      }
    return(t);
  }
  t = o_119(t);
  return(t);
}
ATerm for_3_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t)
{
  t = k_113(t);
  t = while_not_2_0(l_113, m_113, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm o_84 = t;
  int p_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_24 (ATerm t)
      {
        ATerm v_119 = NULL;
        v_119 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_119);
        return(t);
      }
      ATerm p_24 (ATerm t)
      {
        ATerm u_24 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, u_24, t);
        return(t);
      }
      ATerm q_24 (ATerm t)
      {
        ATerm q_84 = t;
        int r_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_24 (ATerm t)
            {
              ATerm s_84 = t;
              int t_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_119 = ATgetFirst((ATermList) t);
                      c_120 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = x_119;
                  if(match_cons(t, sym__2))
                    {
                      a_120 = ATgetArgument(t, 0);
                      b_120 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_120;
                  if((a_120 != t))
                    {
                      _fail(t);
                    }
                  t = c_120;
                  ;
                  LocalPopChoice(t_84);
                }
              else
                {
                  t = s_84;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, w_24, t);
            ;
            LocalPopChoice(r_84);
          }
        else
          {
            t = q_84;
            {
              ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,l_120 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_120 = ATgetArgument(t, 0);
                  h_120 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_120;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_120 = ATgetFirst((ATermList) t);
                  l_120 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_120), i_120), l_120);
            }
          }
        return(t);
      }
      t = for_3_0(o_24, p_24, q_24, t);
      ;
      LocalPopChoice(p_84);
    }
  else
    {
      t = o_84;
      {
        ATerm x_24 (ATerm t)
        {
          ATerm p_120 = NULL;
          if(match_cons(t, sym__2))
            {
              p_120 = ATgetArgument(t, 0);
              if((p_120 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(x_24, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_120 (ATerm t)
  {
    ATerm u_84 = t;
    int v_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_140(t);
        ;
        LocalPopChoice(v_84);
      }
    else
      {
        t = u_84;
        {
          ATerm x_84 = t;
          int y_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_120 = NULL,u_120 = NULL,b_18 = NULL,d_18 = NULL;
              q_120 = t;
              t = m_140(t);
              u_120 = t;
              t = q_120;
              {
                ATerm y_24 (ATerm t)
                {
                  ATerm x_17 = NULL;
                  t = x_120(t);
                  x_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_17, u_120);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm z_24 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = n_140(y_24, x_120, z_24, t);
                b_18 = t;
                t = SSL_explode_term(b_18);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_84 = ATgetArgument(t, 0);
                    d_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_18;
                {
                  ATerm a_25 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm d_25 (ATerm t)
                  {
                    ATerm e_25 (ATerm t)
                    {
                      ATerm h_18 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          h_18 = ATgetArgument(t, 0);
                          if((h_18 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(e_25, t);
                    return(t);
                  }
                  t = foldr_3_0(a_25, d_25, _id, t);
                }
              }
              ;
              LocalPopChoice(y_84);
            }
          else
            {
              t = x_84;
              {
                ATerm i_18 = NULL,j_18 = NULL;
                i_18 = t;
                t = SSL_explode_term(i_18);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_85 = ATgetArgument(t, 0);
                    j_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_18;
                {
                  ATerm h_25 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm i_25 (ATerm t)
                  {
                    ATerm j_25 (ATerm t)
                    {
                      ATerm p_18 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          p_18 = ATgetArgument(t, 0);
                          if((p_18 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(j_25, t);
                    return(t);
                  }
                  t = foldr_3_0(h_25, i_25, x_120, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = x_120(t);
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm b_85 = ATgetArgument(t, 0);
      if(match_cons(b_85, sym_Rule_3))
        {
          c_121 = ATgetArgument(b_85, 0);
          d_121 = ATgetArgument(b_85, 1);
          e_121 = ATgetArgument(b_85, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = c_121;
  {
    ATerm k_25 (ATerm t)
    {
      ATerm g_121 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          g_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, g_121);
      return(t);
    }
    ATerm l_25 (ATerm t)
    {
      ATerm h_121 = NULL,q_121 = NULL,s_121 = NULL;
      if(match_cons(t, sym_LRule_1))
        {
          q_121 = ATgetArgument(t, 0);
          t = q_121;
          if(match_cons(t, sym_Rule_3))
            {
              h_121 = ATgetArgument(t, 0);
              {
                ATerm c_85 = ATgetArgument(t, 1);
              }
              {
                ATerm d_85 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = h_121;
          t = tvars_0_0(t);
        }
      else
        {
          ATerm e_85 = t;
          int f_85 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Scope_2))
                {
                  q_121 = ATgetArgument(t, 0);
                  {
                    ATerm g_85 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(f_85);
              t = q_121;
            }
          else
            {
              t = e_85;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_121 = ATgetArgument(t, 0);
                  t = q_121;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm h_85 = t;
                  int i_85 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          ATerm j_85 = ATgetArgument(t, 0);
                          ATerm k_85 = ATgetArgument(t, 1);
                          s_121 = ATgetArgument(t, 2);
                          {
                            ATerm l_85 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(i_85);
                      t = s_121;
                      {
                        ATerm o_25 (ATerm t)
                        {
                          ATerm a_122 = NULL;
                          ATerm m_85 = t;
                          int n_85 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  a_122 = ATgetArgument(t, 0);
                                  {
                                    ATerm o_85 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_85);
                              t = a_122;
                            }
                          else
                            {
                              t = m_85;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  a_122 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = a_122;
                            }
                          return(t);
                        }
                        t = map_1_0(o_25, t);
                      }
                    }
                  else
                    {
                      t = h_85;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm p_85 = ATgetArgument(t, 0);
                          ATerm q_85 = ATgetArgument(t, 1);
                          s_121 = ATgetArgument(t, 2);
                          {
                            ATerm r_85 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      t = s_121;
                      {
                        ATerm q_25 (ATerm t)
                        {
                          ATerm h_122 = NULL;
                          ATerm s_85 = t;
                          int t_85 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  h_122 = ATgetArgument(t, 0);
                                  {
                                    ATerm u_85 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(t_85);
                              t = h_122;
                            }
                          else
                            {
                              t = s_85;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  h_122 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = h_122;
                            }
                          return(t);
                        }
                        t = map_1_0(q_25, t);
                      }
                    }
                }
            }
        }
      return(t);
    }
    t = free_vars_3_0(k_25, l_25, tboundin_3_0, t);
    f_121 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_121, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_121, d_121, e_121)));
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm r_113 (ATerm), ATerm t)
{
  ATerm r_25 (ATerm t)
  {
    t = bottomup_1_0(r_113, t);
    return(t);
  }
  t = SRTS_all(r_25, t);
  t = r_113(t);
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm y_122 = NULL,z_122 = NULL;
  y_122 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_85 = t;
    int w_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue)), y_122);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_18 = ATgetFirst((ATermList) t);
            {
              ATerm x_85 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_18;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_85 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_85) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, z_122, (ATerm) ATempty);
        ;
        LocalPopChoice(w_85);
      }
    else
      {
        t = v_85;
        {
          ATerm b_19 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue)), y_122);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_19 = ATgetFirst((ATermList) t);
              {
                ATerm z_85 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = b_19;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm a_86 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_86) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, z_122, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm c_123 (ATerm t)
  {
    ATerm b_86 = t;
    int c_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_115(t);
        ;
        LocalPopChoice(c_86);
      }
    else
      {
        t = b_86;
        t = SRTS_all(c_123, t);
      }
    return(t);
  }
  t = c_123(t);
  return(t);
}
ATerm assert_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL,k_123 = NULL;
  if(match_cons(t, sym__2))
    {
      d_123 = ATgetArgument(t, 0);
      e_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_130(t);
  f_123 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_123, d_123, e_123);
  t = table_push_0_0(t);
  {
    ATerm d_86 = t;
    int e_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_123, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_86);
      }
    else
      {
        t = d_86;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_123 = ATgetFirst((ATermList) t);
        k_123 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_123, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_123), (ATerm) ATinsert(CheckATermList(g_123), d_123)));
    t = (ATerm) ATmakeAppl(sym__2, d_123, e_123);
  }
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm s_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      u_123 = ATgetArgument(t, 0);
      v_123 = ATgetArgument(t, 1);
      s_123 = ATgetArgument(t, 2);
      t = v_123;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_123), term_g_86);
      {
        ATerm s_25 (ATerm t)
        {
          t = term_h_86;
          return(t);
        }
        t = assert_1_0(s_25, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, u_123, (ATerm)ATempty, s_123);
      }
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          u_123 = ATgetArgument(t, 0);
          v_123 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_123;
      if(match_cons(t, sym_ConstType_1))
        {
          w_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_123), term_j_86);
      {
        ATerm t_25 (ATerm t)
        {
          t = term_h_86;
          return(t);
        }
        t = assert_1_0(t_25, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_123, (ATerm) ATmakeAppl(sym_ConstType_1, w_123));
      }
    }
  return(t);
}
ATerm Overlays_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL,e_124 = NULL;
  e_124 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      c_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_124);
  b_124 = t;
  t = c_124;
  t = m_98(t);
  d_124 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, d_124), b_124);
  return(t);
}
ATerm Constructors_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm h_124 = NULL,i_124 = NULL,j_124 = NULL,k_124 = NULL;
  k_124 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      i_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_124);
  h_124 = t;
  t = i_124;
  t = h_99(t);
  j_124 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, j_124), h_124);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm p_124 = NULL,q_124 = NULL,r_124 = NULL;
  if(match_cons(t, sym__2))
    {
      p_124 = ATgetArgument(t, 0);
      q_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_86 = t;
    int l_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_86 = ATgetArgument(t, 0);
            ATerm n_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_124, q_124);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_86 = ATgetFirst((ATermList) t);
            d_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_19;
        ;
        LocalPopChoice(l_86);
      }
    else
      {
        t = k_86;
        t = (ATerm) ATempty;
      }
    r_124 = t;
    t = SSL_table_put(p_124, q_124, r_124);
    t = (ATerm) ATmakeAppl(sym__2, p_124, q_124);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm x_124 = NULL,y_124 = NULL,a_125 = NULL,b_125 = NULL;
  x_124 = t;
  t = b_130(t);
  y_124 = t;
  {
    ATerm p_86 = t;
    int q_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(y_124, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_86);
      }
    else
      {
        t = p_86;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_125 = ATgetFirst((ATermList) t);
        a_125 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(y_124, (ATerm)ATmakeAppl(sym_Scopes_0), a_125);
    t = b_125;
    {
      ATerm u_25 (ATerm t)
      {
        ATerm d_125 = NULL;
        d_125 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_124, d_125);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(u_25, t);
      t = x_124;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm r_86 = t;
  int s_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_112(t);
      t = m_112(t);
      ;
      LocalPopChoice(s_86);
    }
  else
    {
      t = r_86;
      t = m_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm g_125 = NULL,h_125 = NULL,o_125 = NULL;
  g_125 = t;
  t = a_130(t);
  h_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_125, term_t_86);
  {
    ATerm u_86 = t;
    int v_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_86 = ATgetArgument(t, 0);
            ATerm x_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_125, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_86);
      }
    else
      {
        t = u_86;
        t = (ATerm) ATempty;
      }
    o_125 = t;
    t = SSL_table_put(h_125, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_125), (ATerm) ATempty));
    t = g_125;
  }
  return(t);
}
ATerm scope_2_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(c_130, t);
  {
    ATerm v_25 (ATerm t)
    {
      t = end_scope_1_0(c_130, t);
      return(t);
    }
    t = restore_always_2_0(d_130, v_25, t);
  }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  ATerm w_25 (ATerm t)
  {
    t = term_h_86;
    return(t);
  }
  ATerm x_25 (ATerm t)
  {
    ATerm y_25 (ATerm t)
    {
      ATerm z_25 (ATerm t)
      {
        ATerm y_86 = t;
        int z_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_87 = t;
            int b_87 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_26 (ATerm t)
                {
                  ATerm b_26 (ATerm t)
                  {
                    ATerm c_87 = t;
                    int d_87 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = DeclareVarToConst_0_0(t);
                        ;
                        LocalPopChoice(d_87);
                      }
                    else
                      {
                        t = c_87;
                      }
                    return(t);
                  }
                  t = map_1_0(b_26, t);
                  return(t);
                }
                t = Constructors_1_0(a_26, t);
                ;
                LocalPopChoice(b_87);
              }
            else
              {
                t = a_87;
                {
                  ATerm c_26 (ATerm t)
                  {
                    ATerm d_26 (ATerm t)
                    {
                      ATerm e_87 = t;
                      int f_87 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = DeclareVarToConst_0_0(t);
                          ;
                          LocalPopChoice(f_87);
                        }
                      else
                        {
                          t = e_87;
                        }
                      return(t);
                    }
                    t = map_1_0(d_26, t);
                    return(t);
                  }
                  t = Overlays_1_0(c_26, t);
                }
              }
            ;
            LocalPopChoice(z_86);
          }
        else
          {
            t = y_86;
          }
        return(t);
      }
      t = map_1_0(z_25, t);
      return(t);
    }
    t = Specification_1_0(y_25, t);
    t = alltd_1_0(VarToConst_0_0, t);
    return(t);
  }
  t = scope_2_0(w_25, x_25, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm g_87 = t;
  int h_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_87);
    }
  else
    {
      t = g_87;
      {
        ATerm i_87 = t;
        int j_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_26 (ATerm t)
            {
              t = filter_1_0(m_126, t);
              return(t);
            }
            t = Cons_2_0(m_126, f_26, t);
            ;
            LocalPopChoice(j_87);
          }
        else
          {
            t = i_87;
            {
              ATerm z_125 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_87 = ATgetFirst((ATermList) t);
                  z_125 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_125;
              t = filter_1_0(m_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm InsertBSpec_0_0 (ATerm t)
{
  ATerm i_126 = NULL,j_126 = NULL,k_126 = NULL,l_126 = NULL;
  if(match_cons(t, sym__2))
    {
      i_126 = ATgetArgument(t, 0);
      j_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_126);
  if(match_cons(t, sym__2))
    {
      k_126 = ATgetArgument(t, 0);
      {
        ATerm l_87 = ATgetArgument(t, 1);
        if(((ATgetType(l_87) == AT_LIST) && !(ATisEmpty(l_87))))
          {
            l_126 = ATgetFirst((ATermList) l_87);
            {
              ATerm m_87 = (ATerm) ATgetNext((ATermList) l_87);
              if(((ATgetType(m_87) != AT_LIST) || !(ATisEmpty(m_87))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_126;
  {
    ATerm g_26 (ATerm t)
    {
      ATerm o_126 = NULL,p_126 = NULL,s_126 = NULL;
      o_126 = t;
      t = SSL_explode_term(o_126);
      if(match_cons(t, sym__2))
        {
          if((k_126 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm n_87 = ATgetArgument(t, 1);
            if(((ATgetType(n_87) == AT_LIST) && !(ATisEmpty(n_87))))
              {
                p_126 = ATgetFirst((ATermList) n_87);
                {
                  ATerm o_87 = (ATerm) ATgetNext((ATermList) n_87);
                  if(((ATgetType(o_87) != AT_LIST) || !(ATisEmpty(o_87))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, p_126, l_126);
      {
        ATerm p_87 = t;
        int q_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm r_87 = ATgetArgument(t, 0);
                ATerm s_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_126;
            {
              ATerm h_26 (ATerm t)
              {
                t = l_126;
                return(t);
              }
              t = at_end_1_0(h_26, t);
            }
            ;
            LocalPopChoice(q_87);
          }
        else
          {
            t = p_87;
            {
              ATerm k_19 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_126, l_126));
              if(match_cons(t, sym__2))
                {
                  ATerm t_87 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_87) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  k_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_19;
              t = concat_0_0(t);
            }
          }
        s_126 = t;
        t = SSL_mkterm(k_126, (ATerm) ATinsert(ATempty, s_126));
      }
      return(t);
    }
    t = fetch_1_0(g_26, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm t)
{
  ATerm u_87 = t;
  int v_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_125(t);
      ;
      LocalPopChoice(v_87);
    }
  else
    {
      t = u_87;
      {
        ATerm a_127 = NULL,c_127 = NULL,h_127 = NULL,i_127 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_127 = ATgetFirst((ATermList) t);
            c_127 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_127;
        t = n_125(t);
        h_127 = t;
        t = c_127;
        t = foldr_3_0(l_125, m_125, n_125, t);
        i_127 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_127, i_127);
        t = m_125(t);
      }
    }
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm k_26 (ATerm t)
  {
    ATerm p_26 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_87), term_x_87), term_w_87);
      return(t);
    }
    ATerm r_26 (ATerm t)
    {
      ATerm z_87 = t;
      int a_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_88 = t;
          int c_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_19 = NULL,q_19 = NULL;
              if(match_cons(t, sym_Signature_1))
                {
                  p_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_19;
              {
                ATerm s_26 (ATerm t)
                {
                  ATerm r_19 = NULL;
                  if(match_cons(t, sym_Constructors_1))
                    {
                      r_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_19;
                  return(t);
                }
                t = filter_1_0(s_26, t);
                t = concat_0_0(t);
                q_19 = t;
                t = (ATerm) ATmakeAppl(sym_Constructors_1, q_19);
              }
              ;
              LocalPopChoice(c_88);
            }
          else
            {
              t = b_88;
              {
                ATerm l_127 = NULL;
                if(match_cons(t, sym_Rules_1))
                  {
                    l_127 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Strategies_1, l_127);
              }
            }
          ;
          LocalPopChoice(a_88);
        }
      else
        {
          t = z_87;
        }
      return(t);
    }
    t = foldr_3_0(p_26, InsertBSpec_0_0, r_26, t);
    return(t);
  }
  t = Specification_1_0(k_26, t);
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  {
    ATerm v_26 (ATerm t)
    {
      ATerm d_88 = t;
      int e_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(e_88);
        }
      else
        {
          t = d_88;
        }
      return(t);
    }
    t = topdown_1_0(v_26, t);
    t = vars_to_consts_0_0(t);
    {
      ATerm z_26 (ATerm t)
      {
        ATerm f_88 = t;
        int g_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_88 = t;
            int i_88 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = DefLRule_0_0(t);
                ;
                LocalPopChoice(i_88);
              }
            else
              {
                t = h_88;
                {
                  ATerm t_127 = NULL,w_127 = NULL;
                  if(match_cons(t, sym_ScopeDefault_1))
                    {
                      t_127 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_127;
                  {
                    ATerm a_27 (ATerm t)
                    {
                      ATerm y_127 = NULL;
                      if(match_cons(t, sym_Var_1))
                        {
                          y_127 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATinsert(ATempty, y_127);
                      return(t);
                    }
                    ATerm b_27 (ATerm t)
                    {
                      ATerm a_128 = NULL,i_128 = NULL,l_128 = NULL;
                      if(match_cons(t, sym_LRule_1))
                        {
                          i_128 = ATgetArgument(t, 0);
                          t = i_128;
                          if(match_cons(t, sym_Rule_3))
                            {
                              a_128 = ATgetArgument(t, 0);
                              {
                                ATerm j_88 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm k_88 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = a_128;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm l_88 = t;
                          int m_88 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Scope_2))
                                {
                                  i_128 = ATgetArgument(t, 0);
                                  {
                                    ATerm n_88 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(m_88);
                              t = i_128;
                            }
                          else
                            {
                              t = l_88;
                              if(match_cons(t, sym_DynamicRules_1))
                                {
                                  i_128 = ATgetArgument(t, 0);
                                  t = i_128;
                                  t = tvars_0_0(t);
                                }
                              else
                                {
                                  ATerm o_88 = t;
                                  int p_88 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          ATerm q_88 = ATgetArgument(t, 0);
                                          ATerm r_88 = ATgetArgument(t, 1);
                                          l_128 = ATgetArgument(t, 2);
                                          {
                                            ATerm s_88 = ATgetArgument(t, 3);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(p_88);
                                      t = l_128;
                                      {
                                        ATerm c_27 (ATerm t)
                                        {
                                          ATerm y_128 = NULL;
                                          ATerm t_88 = t;
                                          int u_88 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  y_128 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm v_88 = ATgetArgument(t, 1);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(u_88);
                                              t = y_128;
                                            }
                                          else
                                            {
                                              t = t_88;
                                              if(match_cons(t, sym_DefaultVarDec_1))
                                                {
                                                  y_128 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = y_128;
                                            }
                                          return(t);
                                        }
                                        t = map_1_0(c_27, t);
                                      }
                                    }
                                  else
                                    {
                                      t = o_88;
                                      if(match_cons(t, sym_RDefT_4))
                                        {
                                          ATerm w_88 = ATgetArgument(t, 0);
                                          ATerm x_88 = ATgetArgument(t, 1);
                                          l_128 = ATgetArgument(t, 2);
                                          {
                                            ATerm y_88 = ATgetArgument(t, 3);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = l_128;
                                      {
                                        ATerm d_27 (ATerm t)
                                        {
                                          ATerm n_129 = NULL;
                                          ATerm z_88 = t;
                                          int a_89 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  n_129 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm b_89 = ATgetArgument(t, 1);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(a_89);
                                              t = n_129;
                                            }
                                          else
                                            {
                                              t = z_88;
                                              if(match_cons(t, sym_DefaultVarDec_1))
                                                {
                                                  n_129 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = n_129;
                                            }
                                          return(t);
                                        }
                                        t = map_1_0(d_27, t);
                                      }
                                    }
                                }
                            }
                        }
                      return(t);
                    }
                    t = free_vars_3_0(a_27, b_27, tboundin_3_0, t);
                    w_127 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, w_127, t_127);
                  }
                }
              }
            ;
            LocalPopChoice(g_88);
          }
        else
          {
            t = f_88;
          }
        return(t);
      }
      t = bottomup_1_0(z_26, t);
      {
        ATerm e_27 (ATerm t)
        {
          ATerm f_27 (ATerm t)
          {
            ATerm g_27 (ATerm t)
            {
              ATerm h_27 (ATerm t)
              {
                ATerm q_27 (ATerm t)
                {
                  ATerm s_27 (ATerm t)
                  {
                    ATerm c_89 = t;
                    int d_89 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = DefDynamicRuleScope_0_0(t);
                        ;
                        LocalPopChoice(d_89);
                      }
                    else
                      {
                        t = c_89;
                      }
                    return(t);
                  }
                  t = topdown_1_0(s_27, t);
                  {
                    ATerm v_27 (ATerm t)
                    {
                      t = repeat_1_0(lift_dynamic_rule_0_0, t);
                      return(t);
                    }
                    t = listtd_1_0(v_27, t);
                  }
                  return(t);
                }
                t = Strategies_1_0(q_27, t);
                return(t);
              }
              ATerm i_27 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(h_27, i_27, t);
              return(t);
            }
            t = Cons_2_0(_id, g_27, t);
            return(t);
          }
          t = Cons_2_0(_id, f_27, t);
          return(t);
        }
        t = Specification_1_0(e_27, t);
        {
          ATerm y_27 (ATerm t)
          {
            ATerm e_89 = t;
            int f_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0_0(t);
                ;
                LocalPopChoice(f_89);
              }
            else
              {
                t = e_89;
              }
            return(t);
          }
          t = topdown_1_0(y_27, t);
          {
            ATerm z_27 (ATerm t)
            {
              ATerm a_28 (ATerm t)
              {
                ATerm t_129 = NULL;
                if(match_cons(t, sym_Constructors_1))
                  {
                    t_129 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, t_129)));
                return(t);
              }
              t = fetch_1_0(a_28, t);
              return(t);
            }
            t = Specification_1_0(z_27, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm Op_2_0 (ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t)
{
  ATerm w_129 = NULL,x_129 = NULL,y_129 = NULL,z_129 = NULL,g_130 = NULL,h_130 = NULL;
  h_130 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_129 = ATgetArgument(t, 0);
      y_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_130);
  w_129 = t;
  t = x_129;
  t = o_99(t);
  z_129 = t;
  t = y_129;
  t = p_99(t);
  g_130 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, z_129, g_130), w_129);
  return(t);
}
ATerm OpDecl_2_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm t)
{
  ATerm k_130 = NULL,l_130 = NULL,m_130 = NULL,o_130 = NULL,q_130 = NULL,r_130 = NULL;
  r_130 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      l_130 = ATgetArgument(t, 0);
      m_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_130);
  k_130 = t;
  t = l_130;
  t = y_98(t);
  o_130 = t;
  t = m_130;
  t = z_98(t);
  q_130 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, o_130, q_130), k_130);
  return(t);
}
ATerm SVar_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL;
  b_131 = t;
  if(match_cons(t, sym_SVar_1))
    {
      z_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_131);
  y_130 = t;
  t = z_130;
  t = r_102(t);
  a_131 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, a_131), y_130);
  return(t);
}
ATerm Var_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm f_131 = NULL,g_131 = NULL,h_131 = NULL,i_131 = NULL;
  i_131 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_131);
  f_131 = t;
  t = g_131;
  t = i_99(t);
  h_131 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, h_131), f_131);
  return(t);
}
ATerm VarDec_2_0 (ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL,s_131 = NULL;
  s_131 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_131 = ATgetArgument(t, 0);
      o_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_131);
  m_131 = t;
  t = n_131;
  t = d_105(t);
  p_131 = t;
  t = o_131;
  t = e_105(t);
  q_131 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, p_131, q_131), m_131);
  return(t);
}
ATerm RDef_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm w_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL,b_132 = NULL,c_132 = NULL,d_132 = NULL,e_132 = NULL;
  e_132 = t;
  if(match_cons(t, sym_RDef_3))
    {
      y_131 = ATgetArgument(t, 0);
      z_131 = ATgetArgument(t, 1);
      a_132 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_132);
  w_131 = t;
  t = y_131;
  t = n_101(t);
  b_132 = t;
  t = z_131;
  t = o_101(t);
  c_132 = t;
  t = a_132;
  t = p_101(t);
  d_132 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, b_132, c_132, d_132), w_131);
  return(t);
}
ATerm RDefT_4_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t)
{
  ATerm h_132 = NULL,i_132 = NULL,j_132 = NULL,k_132 = NULL,l_132 = NULL,m_132 = NULL,n_132 = NULL,o_132 = NULL,p_132 = NULL,q_132 = NULL;
  q_132 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      i_132 = ATgetArgument(t, 0);
      j_132 = ATgetArgument(t, 1);
      k_132 = ATgetArgument(t, 2);
      l_132 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_132);
  h_132 = t;
  t = i_132;
  t = q_101(t);
  m_132 = t;
  t = j_132;
  t = r_101(t);
  n_132 = t;
  t = k_132;
  t = s_101(t);
  o_132 = t;
  t = l_132;
  t = t_101(t);
  p_132 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, m_132, n_132, o_132, p_132), h_132);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm t_132 = NULL,u_132 = NULL,v_132 = NULL,w_132 = NULL;
  w_132 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_132);
  t_132 = t;
  t = u_132;
  t = c_105(t);
  v_132 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, v_132), t_132);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm g_89 = t;
  int h_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_134 = NULL,d_134 = NULL,e_134 = NULL,f_134 = NULL;
      c_134 = t;
      if(match_cons(t, sym_Real_1))
        {
          d_134 = ATgetArgument(t, 0);
          {
            ATerm w_19 = NULL;
            t = SSL_string_to_real(d_134);
            w_19 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, w_19);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              d_134 = ATgetArgument(t, 0);
              {
                ATerm a_20 = NULL;
                t = SSL_string_to_int(d_134);
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, a_20);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  d_134 = ATgetArgument(t, 0);
                  e_134 = ATgetArgument(t, 1);
                  f_134 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSL_is_string(f_134);
              t = (ATerm) ATmakeAppl(sym_Con_3, d_134, e_134, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_134), (ATerm) ATempty));
            }
        }
      ;
      LocalPopChoice(h_89);
    }
  else
    {
      t = g_89;
      {
        ATerm i_89 = t;
        int j_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_28 (ATerm t)
            {
              ATerm m_20 = NULL,n_20 = NULL;
              m_20 = t;
              t = SSL_explode_string(m_20);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_89 = ATgetFirst((ATermList) t);
                  if(((ATgetType(k_89) != AT_INT) || (ATgetInt((ATermInt) k_89) != 39)))
                    _fail(t);
                  n_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSL_implode_string(n_20);
              return(t);
            }
            t = DefaultVarDec_1_0(h_28, t);
            ;
            LocalPopChoice(j_89);
          }
        else
          {
            t = i_89;
            {
              ATerm l_89 = t;
              int m_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_28 (ATerm t)
                  {
                    ATerm q_20 = NULL,r_20 = NULL;
                    q_20 = t;
                    t = SSL_explode_string(q_20);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm n_89 = ATgetFirst((ATermList) t);
                        if(((ATgetType(n_89) != AT_INT) || (ATgetInt((ATermInt) n_89) != 39)))
                          _fail(t);
                        r_20 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(r_20);
                    return(t);
                  }
                  t = RDefT_4_0(i_28, _id, _id, _id, t);
                  ;
                  LocalPopChoice(m_89);
                }
              else
                {
                  t = l_89;
                  {
                    ATerm o_89 = t;
                    int p_89 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_28 (ATerm t)
                        {
                          ATerm v_20 = NULL,w_20 = NULL;
                          v_20 = t;
                          t = SSL_explode_string(v_20);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm q_89 = ATgetFirst((ATermList) t);
                              if(((ATgetType(q_89) != AT_INT) || (ATgetInt((ATermInt) q_89) != 39)))
                                _fail(t);
                              w_20 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = SSL_implode_string(w_20);
                          return(t);
                        }
                        t = RDef_3_0(m_28, _id, _id, t);
                        ;
                        LocalPopChoice(p_89);
                      }
                    else
                      {
                        t = o_89;
                        {
                          ATerm r_89 = t;
                          int s_89 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_28 (ATerm t)
                              {
                                ATerm z_20 = NULL,a_21 = NULL;
                                z_20 = t;
                                t = SSL_explode_string(z_20);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm t_89 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(t_89) != AT_INT) || (ATgetInt((ATermInt) t_89) != 39)))
                                      _fail(t);
                                    a_21 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(a_21);
                                return(t);
                              }
                              t = SDefT_4_0(p_28, _id, _id, _id, t);
                              ;
                              LocalPopChoice(s_89);
                            }
                          else
                            {
                              t = r_89;
                              {
                                ATerm u_89 = t;
                                int v_89 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_28 (ATerm t)
                                    {
                                      ATerm e_21 = NULL,f_21 = NULL;
                                      e_21 = t;
                                      t = SSL_explode_string(e_21);
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          ATerm w_89 = ATgetFirst((ATermList) t);
                                          if(((ATgetType(w_89) != AT_INT) || (ATgetInt((ATermInt) w_89) != 39)))
                                            _fail(t);
                                          f_21 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = SSL_implode_string(f_21);
                                      return(t);
                                    }
                                    t = SDef_3_0(q_28, _id, _id, t);
                                    ;
                                    LocalPopChoice(v_89);
                                  }
                                else
                                  {
                                    t = u_89;
                                    {
                                      ATerm x_89 = t;
                                      int y_89 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_28 (ATerm t)
                                          {
                                            ATerm i_21 = NULL,j_21 = NULL;
                                            i_21 = t;
                                            t = SSL_explode_string(i_21);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm z_89 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(z_89) != AT_INT) || (ATgetInt((ATermInt) z_89) != 39)))
                                                  _fail(t);
                                                j_21 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(j_21);
                                            return(t);
                                          }
                                          t = VarDec_2_0(r_28, _id, t);
                                          ;
                                          LocalPopChoice(y_89);
                                        }
                                      else
                                        {
                                          t = x_89;
                                          {
                                            ATerm a_90 = t;
                                            int b_90 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_28 (ATerm t)
                                                {
                                                  ATerm n_21 = NULL,o_21 = NULL;
                                                  n_21 = t;
                                                  t = SSL_explode_string(n_21);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm c_90 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(c_90) != AT_INT) || (ATgetInt((ATermInt) c_90) != 39)))
                                                        _fail(t);
                                                      o_21 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(o_21);
                                                  return(t);
                                                }
                                                t = Var_1_0(t_28, t);
                                                ;
                                                LocalPopChoice(b_90);
                                              }
                                            else
                                              {
                                                t = a_90;
                                                {
                                                  ATerm d_90 = t;
                                                  int e_90 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_28 (ATerm t)
                                                      {
                                                        ATerm r_21 = NULL,s_21 = NULL;
                                                        r_21 = t;
                                                        t = SSL_explode_string(r_21);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm f_90 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(f_90) != AT_INT) || (ATgetInt((ATermInt) f_90) != 39)))
                                                              _fail(t);
                                                            s_21 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(s_21);
                                                        return(t);
                                                      }
                                                      t = SVar_1_0(w_28, t);
                                                      ;
                                                      LocalPopChoice(e_90);
                                                    }
                                                  else
                                                    {
                                                      t = d_90;
                                                      {
                                                        ATerm g_90 = t;
                                                        int h_90 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm x_28 (ATerm t)
                                                            {
                                                              ATerm w_21 = NULL,x_21 = NULL;
                                                              w_21 = t;
                                                              t = SSL_explode_string(w_21);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm i_90 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(i_90) != AT_INT) || (ATgetInt((ATermInt) i_90) != 39)))
                                                                    _fail(t);
                                                                  x_21 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(x_21);
                                                              return(t);
                                                            }
                                                            t = OpDecl_2_0(x_28, _id, t);
                                                            ;
                                                            LocalPopChoice(h_90);
                                                          }
                                                        else
                                                          {
                                                            t = g_90;
                                                            {
                                                              ATerm b_29 (ATerm t)
                                                              {
                                                                ATerm b_22 = NULL,c_22 = NULL;
                                                                b_22 = t;
                                                                t = SSL_explode_string(b_22);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm j_90 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(j_90) != AT_INT) || (ATgetInt((ATermInt) j_90) != 39)))
                                                                      _fail(t);
                                                                    c_22 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(c_22);
                                                                return(t);
                                                              }
                                                              t = Op_2_0(b_29, _id, t);
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm at_last_1_0 (ATerm j_120 (ATerm), ATerm t)
{
  ATerm j_134 (ATerm t)
  {
    ATerm k_90 = t;
    int l_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_29 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, d_29, t);
        t = j_120(t);
        ;
        LocalPopChoice(l_90);
      }
    else
      {
        t = k_90;
        t = Cons_2_0(_id, j_134, t);
      }
    return(t);
  }
  t = j_134(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_134 = NULL,s_134 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_134 = ATgetFirst((ATermList) t);
      s_134 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_134;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm m_90 = t;
      int n_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_134;
          ;
          LocalPopChoice(n_90);
        }
      else
        {
          t = m_90;
          t = s_134;
          t = last_0_0(t);
        }
    }
  else
    {
      t = s_134;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm k_128 (ATerm), ATerm t)
{
  ATerm c_135 = NULL,d_135 = NULL,e_135 = NULL;
  c_135 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_135 = ATgetFirst((ATermList) t);
      {
        ATerm o_90 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_135;
  t = k_128(t);
  t = c_135;
  t = last_0_0(t);
  t = k_128(t);
  t = c_135;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_90 = ATgetFirst((ATermList) t);
      e_135 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_135;
  {
    ATerm f_29 (ATerm t)
    {
      ATerm f_135 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_90 = ATgetFirst((ATermList) t);
          f_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_135;
      return(t);
    }
    t = at_last_1_0(f_29, t);
  }
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm g_141 (ATerm k_136, ATerm l_136, ATerm t)
  {
    t = k_136;
    {
      ATerm r_90 = t;
      if((PushChoice() == 0))
        {
          ATerm h_29 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, h_29, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_90;
        }
      t = (ATerm) ATmakeAppl(sym_Op_2, term_t_34, k_136);
    }
    return(t);
  }
  ATerm h_141 (ATerm n_136, ATerm o_136, ATerm t)
  {
    t = n_136;
    {
      ATerm s_90 = t;
      if((PushChoice() == 0))
        {
          ATerm i_29 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, i_29, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_90;
        }
      t = (ATerm) ATmakeAppl(sym_Call_2, term_t_90, n_136);
    }
    return(t);
  }
  ATerm i_141 (ATerm q_136, ATerm r_136, ATerm s_136, ATerm t)
  {
    ATerm v_136 = NULL;
    t = q_136;
    {
      ATerm u_90 = t;
      int v_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_22 = NULL;
          t = SSL_explode_string(q_136);
          {
            ATerm j_29 (ATerm t)
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              return(t);
            }
            t = unquote_chars_1_0(j_29, t);
            e_22 = t;
            t = SSL_implode_string(e_22);
          }
          ;
          LocalPopChoice(v_90);
        }
      else
        {
          t = u_90;
        }
      v_136 = t;
      t = (ATerm) ATmakeAppl(sym_PrimT_3, v_136, (ATerm)ATempty, r_136);
    }
    return(t);
  }
  ATerm j_141 (ATerm w_136, ATerm x_136, ATerm t)
  {
    ATerm z_136 = NULL;
    t = w_136;
    {
      ATerm w_90 = t;
      int x_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_22 = NULL;
          t = SSL_explode_string(w_136);
          {
            ATerm k_29 (ATerm t)
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              return(t);
            }
            t = unquote_chars_1_0(k_29, t);
            h_22 = t;
            t = SSL_implode_string(h_22);
          }
          ;
          LocalPopChoice(x_90);
        }
      else
        {
          t = w_90;
        }
      z_136 = t;
      t = (ATerm) ATmakeAppl(sym_PrimT_3, z_136, (ATerm)ATempty, (ATerm) ATempty);
    }
    return(t);
  }
  ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL,g_137 = NULL,h_137 = NULL;
  f_137 = t;
  if(match_cons(t, sym_Anno_2))
    {
      g_137 = ATgetArgument(t, 0);
      h_137 = ATgetArgument(t, 1);
      {
        ATerm k_137 = NULL;
        t = h_137;
        {
          ATerm l_29 (ATerm t)
          {
            t = term_w_75;
            return(t);
          }
          ATerm m_29 (ATerm t)
          {
            ATerm l_137 = NULL,n_22 = NULL,r_22 = NULL;
            l_137 = t;
            t = SSL_explode_term(l_137);
            if(match_cons(t, sym__2))
              {
                ATerm y_90 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_90) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm z_90 = ATgetArgument(t, 1);
                  if(((ATgetType(z_90) == AT_LIST) && !(ATisEmpty(z_90))))
                    {
                      n_22 = ATgetFirst((ATermList) z_90);
                      {
                        ATerm a_91 = (ATerm) ATgetNext((ATermList) z_90);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(l_137);
            if(match_cons(t, sym__2))
              {
                ATerm b_91 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_91) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm c_91 = ATgetArgument(t, 1);
                  if(((ATgetType(c_91) == AT_LIST) && !(ATisEmpty(c_91))))
                    {
                      ATerm d_91 = ATgetFirst((ATermList) c_91);
                      ATerm e_91 = (ATerm) ATgetNext((ATermList) c_91);
                      if(((ATgetType(e_91) == AT_LIST) && !(ATisEmpty(e_91))))
                        {
                          r_22 = ATgetFirst((ATermList) e_91);
                          {
                            ATerm f_91 = (ATerm) ATgetNext((ATermList) e_91);
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
            t = (ATerm) ATmakeAppl(sym_Op_2, term_g_91, (ATerm) ATinsert(ATinsert(ATempty, r_22), n_22));
            return(t);
          }
          t = foldr_2_0(l_29, m_29, t);
          k_137 = t;
          t = (ATerm) ATmakeAppl(sym_Anno_2, g_137, k_137);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          g_137 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, g_137, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              g_137 = ATgetArgument(t, 0);
              {
                ATerm w_22 = NULL;
                t = g_137;
                {
                  ATerm h_91 = t;
                  int i_91 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_j_91;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_k_91;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_l_91;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_m_91;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_n_91;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(i_91);
                    }
                  else
                    {
                      t = h_91;
                      {
                        ATerm y_22 = NULL;
                        t = SSL_explode_string(g_137);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm o_91 = ATgetFirst((ATermList) t);
                            if(((ATgetType(o_91) != AT_INT) || (ATgetInt((ATermInt) o_91) != 39)))
                              _fail(t);
                            {
                              ATerm p_91 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(p_91) == AT_LIST) && !(ATisEmpty(p_91))))
                                {
                                  y_22 = ATgetFirst((ATermList) p_91);
                                  {
                                    ATerm q_91 = (ATerm) ATgetNext((ATermList) p_91);
                                    if(((ATgetType(q_91) == AT_LIST) && !(ATisEmpty(q_91))))
                                      {
                                        ATerm r_91 = ATgetFirst((ATermList) q_91);
                                        if(((ATgetType(r_91) != AT_INT) || (ATgetInt((ATermInt) r_91) != 39)))
                                          _fail(t);
                                        {
                                          ATerm s_91 = (ATerm) ATgetNext((ATermList) q_91);
                                          if(((ATgetType(s_91) != AT_LIST) || !(ATisEmpty(s_91))))
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
                        t = y_22;
                      }
                    }
                  w_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, w_22);
                }
              }
            }
          else
            {
              ATerm t_91 = t;
              int u_91 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      g_137 = ATgetArgument(t, 0);
                      {
                        ATerm v_91 = ATgetArgument(t, 1);
                      }
                      e_137 = ATgetArgument(t, 2);
                      a_137 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_91);
                  t = (ATerm) ATmakeAppl(sym_Con_3, g_137, e_137, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_137), (ATerm) ATempty));
                }
              else
                {
                  t = t_91;
                  {
                    ATerm w_91 = t;
                    int x_91 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            g_137 = ATgetArgument(t, 0);
                            {
                              ATerm y_91 = ATgetArgument(t, 1);
                            }
                            e_137 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_91);
                        t = (ATerm) ATmakeAppl(sym_Con_3, g_137, e_137, term_b_92);
                      }
                    else
                      {
                        t = w_91;
                        if(match_cons(t, sym_Con1_2))
                          {
                            g_137 = ATgetArgument(t, 0);
                            h_137 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, g_137, h_137, term_b_92);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                g_137 = ATgetArgument(t, 0);
                                h_137 = ATgetArgument(t, 1);
                                t = g_137;
                                {
                                  ATerm t_29 (ATerm t)
                                  {
                                    t = h_137;
                                    return(t);
                                  }
                                  ATerm v_29 (ATerm t)
                                  {
                                    ATerm c_138 = NULL,d_138 = NULL;
                                    if(match_cons(t, sym__2))
                                      {
                                        c_138 = ATgetArgument(t, 0);
                                        d_138 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_g_91, (ATerm) ATinsert(ATinsert(ATempty, d_138), c_138));
                                    return(t);
                                  }
                                  t = foldr_2_0(t_29, v_29, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    g_137 = ATgetArgument(t, 0);
                                    t = g_137;
                                    {
                                      ATerm w_29 (ATerm t)
                                      {
                                        t = term_w_75;
                                        return(t);
                                      }
                                      ATerm y_29 (ATerm t)
                                      {
                                        ATerm f_138 = NULL,g_138 = NULL;
                                        if(match_cons(t, sym__2))
                                          {
                                            f_138 = ATgetArgument(t, 0);
                                            g_138 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_g_91, (ATerm) ATinsert(ATinsert(ATempty, g_138), f_138));
                                        return(t);
                                      }
                                      t = foldr_2_0(w_29, y_29, t);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        g_137 = ATgetArgument(t, 0);
                                        t = g_137;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            b_137 = ATgetFirst((ATermList) t);
                                            c_137 = (ATerm) ATgetNext((ATermList) t);
                                            t = c_137;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm c_92 = t;
                                                int d_92 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_141(g_137, f_137, t);
                                                    ;
                                                    LocalPopChoice(d_92);
                                                  }
                                                else
                                                  {
                                                    t = c_92;
                                                    t = b_137;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_141(g_137, f_137, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_141(g_137, f_137, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            g_137 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, g_137));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                g_137 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, g_137));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    g_137 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, g_137));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        g_137 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, g_137));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            g_137 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_137), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                g_137 = ATgetArgument(t, 0);
                                                                h_137 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_137), h_137);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    g_137 = ATgetArgument(t, 0);
                                                                    h_137 = ATgetArgument(t, 1);
                                                                    t = g_137;
                                                                    {
                                                                      ATerm f_30 (ATerm t)
                                                                      {
                                                                        t = h_137;
                                                                        return(t);
                                                                      }
                                                                      ATerm g_30 (ATerm t)
                                                                      {
                                                                        ATerm j_139 = NULL,k_139 = NULL;
                                                                        if(match_cons(t, sym__2))
                                                                          {
                                                                            j_139 = ATgetArgument(t, 0);
                                                                            k_139 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_e_92, (ATerm) ATinsert(ATinsert(ATempty, k_139), j_139));
                                                                        return(t);
                                                                      }
                                                                      t = foldr_2_0(f_30, g_30, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        g_137 = ATgetArgument(t, 0);
                                                                        t = g_137;
                                                                        {
                                                                          ATerm h_30 (ATerm t)
                                                                          {
                                                                            t = term_g_92;
                                                                            return(t);
                                                                          }
                                                                          ATerm i_30 (ATerm t)
                                                                          {
                                                                            ATerm m_139 = NULL,n_139 = NULL;
                                                                            if(match_cons(t, sym__2))
                                                                              {
                                                                                m_139 = ATgetArgument(t, 0);
                                                                                n_139 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_e_92, (ATerm) ATinsert(ATinsert(ATempty, n_139), m_139));
                                                                            return(t);
                                                                          }
                                                                          t = foldr_2_0(h_30, i_30, t);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            g_137 = ATgetArgument(t, 0);
                                                                            h_137 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_t_90, (ATerm) ATinsert(CheckATermList(h_137), g_137));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                g_137 = ATgetArgument(t, 0);
                                                                                t = g_137;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    b_137 = ATgetFirst((ATermList) t);
                                                                                    c_137 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = c_137;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm h_92 = t;
                                                                                        int i_92 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_141(g_137, f_137, t);
                                                                                            ;
                                                                                            LocalPopChoice(i_92);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_92;
                                                                                            t = b_137;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_141(g_137, f_137, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_141(g_137, f_137, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_j_92;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        g_137 = ATgetArgument(t, 0);
                                                                                        h_137 = ATgetArgument(t, 1);
                                                                                        t = h_137;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            d_137 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_i_68, (ATerm) ATinsert(ATinsert(ATempty, d_137), g_137));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            g_137 = ATgetArgument(t, 0);
                                                                                            t = g_137;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                g_137 = ATgetArgument(t, 0);
                                                                                                h_137 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, g_137, h_137, term_q_36);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    g_137 = ATgetArgument(t, 0);
                                                                                                    h_137 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, g_137, h_137, term_q_36);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        g_137 = ATgetArgument(t, 0);
                                                                                                        h_137 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, g_137, (ATerm)ATempty, h_137);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            g_137 = ATgetArgument(t, 0);
                                                                                                            h_137 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, h_137, g_137);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                g_137 = ATgetArgument(t, 0);
                                                                                                                h_137 = ATgetArgument(t, 1);
                                                                                                                t = i_141(g_137, h_137, f_137, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    g_137 = ATgetArgument(t, 0);
                                                                                                                    t = j_141(g_137, f_137, t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        g_137 = ATgetArgument(t, 0);
                                                                                                                        h_137 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, g_137, h_137, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            g_137 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, g_137, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                g_137 = ATgetArgument(t, 0);
                                                                                                                                h_137 = ATgetArgument(t, 1);
                                                                                                                                e_137 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_137, h_137, (ATerm)ATempty, e_137);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    g_137 = ATgetArgument(t, 0);
                                                                                                                                    h_137 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, g_137, (ATerm)ATempty, (ATerm)ATempty, h_137);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        g_137 = ATgetArgument(t, 0);
                                                                                                                                        h_137 = ATgetArgument(t, 1);
                                                                                                                                        e_137 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_137, h_137, (ATerm)ATempty, e_137);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            g_137 = ATgetArgument(t, 0);
                                                                                                                                            h_137 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_137, (ATerm)ATempty, (ATerm)ATempty, h_137);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                g_137 = ATgetArgument(t, 0);
                                                                                                                                                h_137 = ATgetArgument(t, 1);
                                                                                                                                                e_137 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, g_137, h_137, (ATerm)ATempty, e_137);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    g_137 = ATgetArgument(t, 0);
                                                                                                                                                    h_137 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, g_137, (ATerm)ATempty, (ATerm)ATempty, h_137);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm k_92 = ATgetArgument(t, 0);
                                                                                                                                                        h_137 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, h_137);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm m_141 = NULL;
  ATerm j_30 (ATerm t)
  {
    ATerm n_141 = NULL,z_22 = NULL;
    n_141 = t;
    t = dtime_0_0(t);
    z_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_22), (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue))));
    t = n_141;
    return(t);
  }
  t = if_verbose3_1_0(j_30, t);
  {
    ATerm m_30 (ATerm t)
    {
      t = repeat_1_0(Desugar_0_0, t);
      {
        ATerm l_92 = t;
        int m_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DesugarOnce_0_0(t);
            ;
            LocalPopChoice(m_92);
          }
        else
          {
            t = l_92;
          }
      }
      return(t);
    }
    t = topdown_1_0(m_30, t);
    {
      ATerm o_30 (ATerm t)
      {
        ATerm o_141 = NULL,c_23 = NULL;
        o_141 = t;
        t = dtime_0_0(t);
        c_23 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_23), (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue))));
        t = o_141;
        return(t);
      }
      t = if_verbose3_1_0(o_30, t);
      t = normalize_spec_0_0(t);
      {
        ATerm p_30 (ATerm t)
        {
          ATerm p_141 = NULL,f_23 = NULL;
          p_141 = t;
          t = dtime_0_0(t);
          f_23 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_23), (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue))));
          t = p_141;
          return(t);
        }
        t = if_verbose3_1_0(p_30, t);
        m_141 = t;
        t = spec_use_def_0_0(t);
        t = m_141;
        {
          ATerm q_30 (ATerm t)
          {
            ATerm q_141 = NULL,j_23 = NULL;
            q_141 = t;
            t = dtime_0_0(t);
            j_23 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_23), (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue))));
            t = q_141;
            return(t);
          }
          t = if_verbose3_1_0(q_30, t);
          t = ExpandOverlays_0_0(t);
          {
            ATerm r_30 (ATerm t)
            {
              ATerm r_141 = NULL,m_23 = NULL;
              r_141 = t;
              t = dtime_0_0(t);
              m_23 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_23), (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue))));
              t = r_141;
              return(t);
            }
            t = if_verbose3_1_0(r_30, t);
            t = CheckConstructors_0_0(t);
            {
              ATerm s_30 (ATerm t)
              {
                ATerm u_141 = NULL,s_23 = NULL;
                u_141 = t;
                t = dtime_0_0(t);
                s_23 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_23), (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue))));
                t = u_141;
                return(t);
              }
              t = if_verbose3_1_0(s_30, t);
              t = RulesToSdefs_0_0(t);
              {
                ATerm t_30 (ATerm t)
                {
                  ATerm e_142 = NULL,w_23 = NULL;
                  e_142 = t;
                  t = dtime_0_0(t);
                  w_23 = t;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_23), (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue))));
                  t = e_142;
                  return(t);
                }
                t = if_verbose3_1_0(t_30, t);
                {
                  ATerm u_30 (ATerm t)
                  {
                    ATerm n_92 = t;
                    int o_92 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_92 = t;
                        int q_92 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = ListVarScope_0_0(t);
                            ;
                            LocalPopChoice(q_92);
                          }
                        else
                          {
                            t = p_92;
                            t = desugarRule_0_0(t);
                          }
                        ;
                        LocalPopChoice(o_92);
                      }
                    else
                      {
                        t = n_92;
                      }
                    {
                      ATerm v_30 (ATerm t)
                      {
                        ATerm r_92 = t;
                        int s_92 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_92 = t;
                            int u_92 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = HL_0_0(t);
                                ;
                                LocalPopChoice(u_92);
                              }
                            else
                              {
                                t = t_92;
                                {
                                  ATerm v_92 = t;
                                  int w_92 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ListMatch_0_0(t);
                                      ;
                                      LocalPopChoice(w_92);
                                    }
                                  else
                                    {
                                      t = v_92;
                                      t = ListBuild_0_0(t);
                                    }
                                }
                              }
                            ;
                            LocalPopChoice(s_92);
                          }
                        else
                          {
                            t = r_92;
                            {
                              ATerm i_142 = NULL,j_142 = NULL;
                              if(match_cons(t, sym_Var_1))
                                {
                                  i_142 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = i_142;
                              if(match_cons(t, sym_ListVar_1))
                                {
                                  j_142 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Var_1, j_142);
                            }
                          }
                        return(t);
                      }
                      t = repeat_1_0(v_30, t);
                    }
                    return(t);
                  }
                  t = topdown_1_0(u_30, t);
                  {
                    ATerm y_30 (ATerm t)
                    {
                      ATerm p_142 = NULL,z_23 = NULL;
                      p_142 = t;
                      t = dtime_0_0(t);
                      z_23 = t;
                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_23), (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue))));
                      t = p_142;
                      return(t);
                    }
                    t = if_verbose3_1_0(y_30, t);
                    t = strename_0_0(t);
                    {
                      ATerm z_30 (ATerm t)
                      {
                        ATerm q_142 = NULL,c_24 = NULL;
                        q_142 = t;
                        t = dtime_0_0(t);
                        c_24 = t;
                        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_24), (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue))));
                        t = q_142;
                        return(t);
                      }
                      t = if_verbose3_1_0(z_30, t);
                      {
                        ATerm a_31 (ATerm t)
                        {
                          ATerm b_31 (ATerm t)
                          {
                            ATerm e_31 (ATerm t)
                            {
                              ATerm i_31 (ATerm t)
                              {
                                ATerm j_31 (ATerm t)
                                {
                                  ATerm x_92 = t;
                                  int y_92 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = SDef_3_0(_id, _id, desugar_0_0, t);
                                      ;
                                      LocalPopChoice(y_92);
                                    }
                                  else
                                    {
                                      t = x_92;
                                      {
                                        ATerm z_92 = t;
                                        int a_93 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = SDefT_4_0(_id, _id, _id, desugar_0_0, t);
                                            ;
                                            LocalPopChoice(a_93);
                                          }
                                        else
                                          {
                                            t = z_92;
                                            {
                                              ATerm j_24 = NULL;
                                              j_24 = t;
                                              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_24), (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue))));
                                              t = j_24;
                                              _fail(t);
                                            }
                                          }
                                      }
                                    }
                                  return(t);
                                }
                                t = map_1_0(j_31, t);
                                return(t);
                              }
                              t = Strategies_1_0(i_31, t);
                              return(t);
                            }
                            ATerm f_31 (ATerm t)
                            {
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              return(t);
                            }
                            t = Cons_2_0(e_31, f_31, t);
                            return(t);
                          }
                          t = Cons_2_0(_id, b_31, t);
                          return(t);
                        }
                        t = Specification_1_0(a_31, t);
                      }
                    }
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
ATerm _2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t)
{
  ATerm t_142 = NULL,u_142 = NULL,w_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL;
  a_143 = t;
  if(match_cons(t, sym__2))
    {
      u_142 = ATgetArgument(t, 0);
      w_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_143);
  t_142 = t;
  t = u_142;
  t = r_93(t);
  y_142 = t;
  t = w_142;
  t = s_93(t);
  z_142 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_142, z_142), t_142);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_131 (ATerm), ATerm t)
{
  ATerm d_143 = NULL,e_143 = NULL,f_143 = NULL;
  if(match_cons(t, sym__2))
    {
      d_143 = ATgetArgument(t, 0);
      e_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_143, term_b_93);
  t = open_stream_0_0(t);
  f_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_143, e_143);
  t = x_131(t);
  t = fclose_0_0(t);
  t = e_143;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_143 = NULL,h_143 = NULL;
  g_143 = t;
  {
    ATerm k_31 (ATerm t)
    {
      ATerm c_93 = t;
      int d_93 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_31 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((h_143 != NULL) && (h_143 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_143 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_31, t);
          ;
          LocalPopChoice(d_93);
        }
      else
        {
          t = c_93;
          t = term_e_93;
          if(((h_143 != NULL) && (h_143 != t)))
            _fail(t);
          else
            h_143 = t;
        }
      return(t);
    }
    t = _2_0(k_31, _id, t);
    t = g_143;
    {
      ATerm m_31 (ATerm t)
      {
        ATerm m_24 = NULL;
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_143), m_24);
        return(t);
      }
      t = _2_0(_id, m_31, t);
      {
        ATerm f_93 = t;
        int g_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_31 (ATerm t)
            {
              ATerm p_31 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_31, t);
              return(t);
            }
            ATerm o_31 (ATerm t)
            {
              ATerm q_31 (ATerm t)
              {
                ATerm i_143 = NULL,j_143 = NULL,k_143 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm h_93 = ATgetArgument(t, 0);
                    if(match_cons(h_93, sym_Stream_1))
                      {
                        i_143 = ATgetArgument(h_93, 0);
                      }
                    else
                      _fail(t);
                    j_143 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(i_143, j_143);
                k_143 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_143);
                return(t);
              }
              t = WriteToFile_1_0(q_31, t);
              return(t);
            }
            t = _2_0(n_31, o_31, t);
            ;
            LocalPopChoice(g_93);
          }
        else
          {
            t = f_93;
            {
              ATerm r_31 (ATerm t)
              {
                ATerm s_31 (ATerm t)
                {
                  ATerm l_143 = NULL,m_143 = NULL,n_143 = NULL,o_143 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm i_93 = ATgetArgument(t, 0);
                      if(match_cons(i_93, sym_Stream_1))
                        {
                          l_143 = ATgetArgument(i_93, 0);
                        }
                      else
                        _fail(t);
                      m_143 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(l_143, m_143);
                  n_143 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), n_143);
                  o_143 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, o_143);
                  return(t);
                }
                t = WriteToFile_1_0(s_31, t);
                return(t);
              }
              t = _2_0(_id, r_31, t);
            }
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
ATerm apply_strategy_1_0 (ATerm z_134 (ATerm), ATerm t)
{
  ATerm p_143 = NULL,q_143 = NULL,r_143 = NULL,s_143 = NULL,t_143 = NULL;
  p_143 = t;
  t = dtime_0_0(t);
  t = p_143;
  t = z_134(t);
  q_143 = t;
  t = dtime_0_0(t);
  r_143 = t;
  t = q_143;
  if(match_cons(t, sym__2))
    {
      s_143 = ATgetArgument(t, 0);
      t_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_143), (ATerm) ATmakeAppl(sym_Runtime_1, r_143)), t_143);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_144 (ATerm b_144, ATerm t)
  {
    t = SSL_fclose(b_144);
    return(t);
  }
  ATerm e_144 = NULL,f_144 = NULL;
  f_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_144 = ATgetArgument(t, 0);
      {
        ATerm j_93 = t;
        int k_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_144);
            ;
            LocalPopChoice(k_93);
          }
        else
          {
            t = j_93;
            t = h_144(f_144, t);
          }
      }
    }
  else
    {
      t = h_144(f_144, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_144 = NULL;
  t = SSL_stdin_stream();
  i_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_144);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_144 = NULL;
  t = SSL_stdout_stream();
  j_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_144);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_144 = NULL;
  t = SSL_stderr_stream();
  k_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_144);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_93 = ATgetArgument(t, 0);
      ATerm m_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_93 = t;
    int o_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL,c_25 = NULL;
        b_25 = t;
        t = SSL_explode_term(b_25);
        if(match_cons(t, sym__2))
          {
            ATerm p_93 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_93) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_93 = ATgetArgument(t, 1);
              if(((ATgetType(q_93) == AT_LIST) && !(ATisEmpty(q_93))))
                {
                  c_25 = ATgetFirst((ATermList) q_93);
                  {
                    ATerm t_93 = (ATerm) ATgetNext((ATermList) q_93);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_25;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_25;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_25;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_25;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(o_93);
      }
    else
      {
        t = n_93;
        {
          ATerm u_93 = t;
          int v_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_144 = NULL,q_144 = NULL,r_144 = NULL;
              ATerm t_31 (ATerm t)
              {
                ATerm s_144 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_144 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_144;
                return(t);
              }
              t = _2_0(t_31, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_144 = ATgetArgument(t, 0);
                  q_144 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_144, q_144);
              r_144 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_144);
              ;
              LocalPopChoice(v_93);
            }
          else
            {
              t = u_93;
              {
                ATerm t_144 = NULL,u_144 = NULL,v_144 = NULL;
                ATerm u_31 (ATerm t)
                {
                  ATerm w_144 = NULL;
                  w_144 = t;
                  t = SSL_is_string(w_144);
                  return(t);
                }
                t = _2_0(u_31, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_144 = ATgetArgument(t, 0);
                    u_144 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_144, u_144);
                v_144 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_144);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_144 = NULL,y_144 = NULL,z_144 = NULL;
  ATerm w_93 = t;
  int z_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_145 = NULL;
      a_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_145, term_a_94);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_93);
    }
  else
    {
      t = w_93;
      {
        ATerm g_25 = NULL;
        g_25 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_25), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = g_25;
        _fail(t);
      }
    }
  x_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_144);
  y_144 = t;
  t = x_144;
  t = fclose_0_0(t);
  t = y_144;
  return(t);
}
ATerm fetch_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  ATerm f_145 (ATerm t)
  {
    ATerm b_94 = t;
    int c_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_119, _id, t);
        ;
        LocalPopChoice(c_94);
      }
    else
      {
        t = b_94;
        t = Cons_2_0(_id, f_145, t);
      }
    return(t);
  }
  t = f_145(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_94 = t;
  int e_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_94);
    }
  else
    {
      t = d_94;
      {
        ATerm i_145 = NULL,j_145 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_145 = ATgetFirst((ATermList) t);
            j_145 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_145;
        {
          ATerm x_31 (ATerm t)
          {
            t = j_145;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_31, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm p_145 (ATerm t)
  {
    ATerm f_94 = t;
    int g_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_145, t);
        ;
        LocalPopChoice(g_94);
      }
    else
      {
        t = f_94;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_119(t);
      }
    return(t);
  }
  t = p_145(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_145 = NULL;
  ATerm y_31 (ATerm t)
  {
    ATerm s_145 = NULL;
    s_145 = t;
    t = SSL_explode_string(s_145);
    return(t);
  }
  ATerm z_31 (ATerm t)
  {
    ATerm t_145 = NULL;
    t_145 = t;
    t = SSL_explode_string(t_145);
    return(t);
  }
  t = _2_0(y_31, z_31, t);
  {
    ATerm h_94 = t;
    int k_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_145 = NULL,w_145 = NULL;
        if(match_cons(t, sym__2))
          {
            v_145 = ATgetArgument(t, 0);
            w_145 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_145;
        {
          ATerm a_32 (ATerm t)
          {
            t = w_145;
            return(t);
          }
          t = at_end_1_0(a_32, t);
        }
        ;
        LocalPopChoice(k_94);
      }
    else
      {
        t = h_94;
        {
          ATerm m_25 = NULL,n_25 = NULL;
          m_25 = t;
          t = SSL_explode_term(m_25);
          if(match_cons(t, sym__2))
            {
              ATerm t_94 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_94) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_25;
          t = concat_0_0(t);
        }
      }
    r_145 = t;
    t = SSL_implode_string(r_145);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_94 = t;
  int y_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_146 = NULL;
      h_146 = t;
      t = SSL_is_string(h_146);
      ;
      LocalPopChoice(y_94);
    }
  else
    {
      t = u_94;
      {
        ATerm z_94 = t;
        int b_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_32 (ATerm t)
            {
              ATerm c_95 = t;
              int j_95 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(j_95);
                }
              else
                {
                  t = c_95;
                }
              return(t);
            }
            t = map_1_0(b_32, t);
            ;
            LocalPopChoice(b_95);
          }
        else
          {
            t = z_94;
            {
              ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL;
              l_146 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_146 = ATgetArgument(t, 0);
                  t = m_146;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_146 = ATgetArgument(t, 0);
                      t = m_146;
                      {
                        ATerm k_95 = t;
                        int o_95 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_146);
                            {
                              ATerm q_95 = t;
                              int r_95 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_26 = NULL;
                                  t = eval_config_0_0(t);
                                  e_26 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_146, e_26);
                                  t = e_26;
                                  ;
                                  LocalPopChoice(r_95);
                                }
                              else
                                {
                                  t = q_95;
                                }
                            }
                            ;
                            LocalPopChoice(o_95);
                          }
                        else
                          {
                            t = k_95;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_146), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = m_146;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_146 = NULL,s_146 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_146 = ATgetArgument(t, 0);
                          n_146 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_146;
                      t = eval_config_0_0(t);
                      r_146 = t;
                      t = n_146;
                      t = eval_config_0_0(t);
                      s_146 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_146, s_146);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm s_95 = t;
  int t_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_146 = NULL,z_146 = NULL;
      x_146 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_95 = t;
        int a_96 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_26 = NULL;
            t = eval_config_0_0(t);
            w_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_26);
            t = w_26;
            ;
            LocalPopChoice(a_96);
          }
        else
          {
            t = y_95;
          }
        z_146 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_146, term_b_96);
        t = geq_0_0(t);
        t = x_146;
        t = b_133(t);
      }
      ;
      LocalPopChoice(t_95);
    }
  else
    {
      t = s_95;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_32 (ATerm t)
  {
    ATerm b_147 = NULL;
    b_147 = t;
    if(match_string(t, "-k"))
      {
        t = b_147;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_147;
      }
    return(t);
  }
  ATerm f_32 (ATerm t)
  {
    ATerm c_147 = NULL,d_147 = NULL;
    c_147 = t;
    t = SSL_string_to_int(c_147);
    d_147 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_147);
    t = c_147;
    return(t);
  }
  ATerm g_32 (ATerm t)
  {
    t = term_c_96;
    return(t);
  }
  t = ArgOption_3_0(d_32, f_32, g_32, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_96 = t;
  int i_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_32 (ATerm t)
      {
        ATerm f_147 = NULL;
        f_147 = t;
        if(match_string(t, "-S"))
          {
            t = f_147;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_147;
          }
        return(t);
      }
      ATerm j_32 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_j_96;
        return(t);
      }
      ATerm k_32 (ATerm t)
      {
        t = term_k_96;
        return(t);
      }
      t = Option_3_0(h_32, j_32, k_32, t);
      ;
      LocalPopChoice(i_96);
    }
  else
    {
      t = d_96;
      {
        ATerm m_96 = t;
        int n_96 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_32 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_32 (ATerm t)
            {
              ATerm g_147 = NULL,h_147 = NULL;
              g_147 = t;
              t = SSL_string_to_int(g_147);
              h_147 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_147);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_147);
              return(t);
            }
            ATerm q_32 (ATerm t)
            {
              t = term_o_96;
              return(t);
            }
            t = ArgOption_3_0(l_32, o_32, q_32, t);
            ;
            LocalPopChoice(n_96);
          }
        else
          {
            t = m_96;
            {
              ATerm r_32 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm s_32 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_p_96;
                return(t);
              }
              ATerm t_32 (ATerm t)
              {
                t = term_r_96;
                return(t);
              }
              t = Option_3_0(r_32, s_32, t_32, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_147 = NULL,l_147 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_147 = NULL;
      t = term_p_34;
      t = d_0(t);
      m_147 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_96, term_w_96, m_147);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_147 = ATgetFirst((ATermList) t);
          l_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_147;
      t = a_0(t);
      t = term_p_34;
      t = b_0(t);
      p_147 = t;
      t = (ATerm) ATinsert(CheckATermList(l_147), p_147);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_32 (ATerm t)
  {
    ATerm t_147 = NULL;
    t_147 = t;
    if(match_string(t, "-o"))
      {
        t = t_147;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = t_147;
      }
    return(t);
  }
  ATerm v_32 (ATerm t)
  {
    ATerm u_147 = NULL;
    u_147 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_147);
    t = (ATerm) ATmakeAppl(sym_Output_1, u_147);
    return(t);
  }
  ATerm x_32 (ATerm t)
  {
    t = term_x_96;
    return(t);
  }
  t = ArgOption_3_0(u_32, v_32, x_32, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_147 = NULL,y_147 = NULL,z_147 = NULL,a_148 = NULL;
  if(match_cons(t, sym__3))
    {
      x_147 = ATgetArgument(t, 0);
      y_147 = ATgetArgument(t, 1);
      z_147 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_147, y_147);
  {
    ATerm y_96 = t;
    int z_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_97 = ATgetArgument(t, 0);
            ATerm b_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_147, y_147);
        ;
        LocalPopChoice(z_96);
      }
    else
      {
        t = y_96;
        t = (ATerm) ATempty;
      }
    a_148 = t;
    t = SSL_table_put(x_147, y_147, (ATerm) ATinsert(CheckATermList(a_148), z_147));
    t = (ATerm) ATmakeAppl(sym__3, x_147, y_147, z_147);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_148 = NULL,j_148 = NULL,k_148 = NULL,l_148 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_148 = NULL;
      t = term_p_34;
      t = m_0(t);
      m_148 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_96, term_w_96, m_148);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_148 = ATgetFirst((ATermList) t);
          j_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_148;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_148 = ATgetFirst((ATermList) t);
          l_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_148;
      t = i_0(t);
      t = k_148;
      t = k_0(t);
      s_148 = t;
      t = (ATerm) ATinsert(CheckATermList(l_148), s_148);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_32 (ATerm t)
  {
    ATerm u_148 = NULL;
    u_148 = t;
    if(match_string(t, "-i"))
      {
        t = u_148;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_148;
      }
    return(t);
  }
  ATerm z_32 (ATerm t)
  {
    ATerm v_148 = NULL;
    v_148 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_148);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_148);
    return(t);
  }
  ATerm a_33 (ATerm t)
  {
    t = term_c_97;
    return(t);
  }
  t = ArgOption_3_0(y_32, z_32, a_33, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_148 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_34;
  t = whoami_0_0(t);
  w_148 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_148));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_97 = t;
    int e_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL;
        t = eval_config_0_0(t);
        l_27 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_27);
        t = l_27;
        ;
        LocalPopChoice(e_97);
      }
    else
      {
        t = d_97;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t)
{
  ATerm g_97 = t;
  int h_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_125(t);
      ;
      LocalPopChoice(h_97);
    }
  else
    {
      t = g_97;
      {
        ATerm z_148 = NULL,a_149 = NULL,d_149 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_148 = ATgetFirst((ATermList) t);
            a_149 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_149;
        t = foldr_2_0(j_125, k_125, t);
        d_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_148, d_149);
        t = k_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_149 = NULL,w_27 = NULL,x_27 = NULL;
  t = times_0_0(t);
  w_27 = t;
  t = SSL_explode_term(w_27);
  if(match_cons(t, sym__2))
    {
      ATerm j_97 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_27;
  {
    ATerm b_33 (ATerm t)
    {
      t = term_q_52;
      return(t);
    }
    ATerm c_33 (ATerm t)
    {
      ATerm j_28 = NULL,l_28 = NULL;
      if(match_cons(t, sym__2))
        {
          j_28 = ATgetArgument(t, 0);
          l_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_97 = t;
        int l_97 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_28, l_28);
            ;
            LocalPopChoice(l_97);
          }
        else
          {
            t = k_97;
            t = SSL_addr(j_28, l_28);
          }
      }
      return(t);
    }
    t = foldr_2_0(b_33, c_33, t);
    g_149 = t;
    t = SSL_TicksToSeconds(g_149);
  }
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
    ATerm m_97 = t;
    int n_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_149;
        if((t_149 != t))
          {
            _fail(t);
          }
        t = s_149;
        ;
        LocalPopChoice(n_97);
      }
    else
      {
        t = m_97;
        t = s_149;
        {
          ATerm o_97 = t;
          int p_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_149, u_149);
              ;
              LocalPopChoice(p_97);
            }
          else
            {
              t = o_97;
              t = SSL_gtr(t_149, u_149);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_149, u_149);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm q_97 = t;
  int r_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_149 = NULL,z_149 = NULL;
      x_149 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_97 = t;
        int w_97 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_29 = NULL;
            t = eval_config_0_0(t);
            x_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_29);
            t = x_29;
            ;
            LocalPopChoice(w_97);
          }
        else
          {
            t = s_97;
          }
        z_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_149, term_v_52);
        t = geq_0_0(t);
        t = x_149;
        t = a_133(t);
      }
      ;
      LocalPopChoice(r_97);
    }
  else
    {
      t = q_97;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm d_33 (ATerm t)
  {
    ATerm b_150 = NULL,c_150 = NULL;
    t = run_time_0_0(t);
    b_150 = t;
    t = term_p_34;
    t = whoami_0_0(t);
    c_150 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), b_150), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), c_150));
    t = (ATerm) ATmakeAppl(sym__2, term_x_97, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_97), b_150), term_y_97), c_150));
    return(t);
  }
  t = if_verbose1_1_0(d_33, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_135 (ATerm), ATerm t)
{
  ATerm a_98 = t;
  int b_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm d_98 = t;
        int f_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_30 = NULL;
            t = eval_config_0_0(t);
            k_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_30);
            t = k_30;
            ;
            LocalPopChoice(f_98);
          }
        else
          {
            t = d_98;
          }
      }
      ;
      LocalPopChoice(b_98);
    }
  else
    {
      t = a_98;
      {
        ATerm f_33 (ATerm t)
        {
          ATerm i_98 = t;
          int j_98 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(j_98);
            }
          else
            {
              t = i_98;
              {
                ATerm n_98 = t;
                int o_98 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(o_98);
                  }
                else
                  {
                    t = n_98;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(f_33, t);
      }
    }
  t = x_135(t);
  return(t);
}
ATerm map_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm d_150 (ATerm t)
  {
    ATerm q_98 = t;
    int r_98 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_98);
      }
    else
      {
        t = q_98;
        t = Cons_2_0(h_119, d_150, t);
      }
    return(t);
  }
  t = d_150(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_150 = NULL,g_150 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_150 = ATgetFirst((ATermList) t);
      g_150 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_150 = NULL,l_150 = NULL;
        t = g_150;
        t = g_0(t);
        k_150 = t;
        t = f_150;
        t = f_0(t);
        l_150 = t;
        t = g_150;
        {
          ATerm g_33 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_150), l_150);
            return(t);
          }
          t = reverse_acc_2_0(f_0, g_33, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_34;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm m_150 = NULL,n_150 = NULL,o_150 = NULL,p_150 = NULL;
  p_150 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_150);
  m_150 = t;
  t = n_150;
  t = y_110(t);
  o_150 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, o_150), m_150);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_98 = t;
  int t_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm u_98 = t;
        int w_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_30 = NULL;
            t = eval_config_0_0(t);
            w_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_30);
            t = w_30;
            ;
            LocalPopChoice(w_98);
          }
        else
          {
            t = u_98;
          }
      }
      ;
      LocalPopChoice(t_98);
    }
  else
    {
      t = s_98;
      {
        ATerm i_33 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(i_33, t);
      }
    }
  t = term_x_98;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm j_33 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, j_33, t);
    {
      ATerm k_33 (ATerm t)
      {
        ATerm u_150 = NULL;
        u_150 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, u_150), term_a_99);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(k_33, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  ATerm v_150 = NULL,w_150 = NULL,x_150 = NULL,y_150 = NULL;
  y_150 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_150);
  v_150 = t;
  t = w_150;
  t = z_110(t);
  x_150 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, x_150), v_150);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_151 = NULL,d_151 = NULL;
  c_151 = t;
  {
    ATerm b_99 = t;
    int c_99 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_151;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_99 = ATgetFirst((ATermList) t);
                ATerm f_99 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_151;
          }
        ;
        LocalPopChoice(c_99);
      }
    else
      {
        t = b_99;
        t = (ATerm) ATinsert(ATempty, c_151);
      }
    d_151 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_151);
    t = c_151;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_99 = t;
    int q_99 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL;
        t = eval_config_0_0(t);
        h_31 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_31);
        t = h_31;
        ;
        LocalPopChoice(q_99);
      }
    else
      {
        t = n_99;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_99 = t;
  int v_99 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_33 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm m_33 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_e_100;
        return(t);
      }
      ATerm n_33 (ATerm t)
      {
        t = term_f_100;
        return(t);
      }
      t = Option_3_0(l_33, m_33, n_33, t);
      ;
      LocalPopChoice(v_99);
    }
  else
    {
      t = r_99;
      {
        ATerm p_33 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_33 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_100;
          return(t);
        }
        ATerm r_33 (ATerm t)
        {
          t = term_h_100;
          return(t);
        }
        t = Option_3_0(p_33, q_33, r_33, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t)
{
  ATerm h_151 = NULL,i_151 = NULL,j_151 = NULL,k_151 = NULL,l_151 = NULL,m_151 = NULL;
  m_151 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_151 = ATgetFirst((ATermList) t);
      j_151 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_151);
  h_151 = t;
  t = i_151;
  t = g_98(t);
  k_151 = t;
  t = j_151;
  t = h_98(t);
  l_151 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_151), k_151), h_151);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_138 (ATerm), ATerm t)
{
  ATerm s_151 = NULL;
  s_151 = t;
  {
    ATerm l_100 = t;
    int m_100 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_100;
        t = a_138(t);
        ;
        LocalPopChoice(m_100);
      }
    else
      {
        t = l_100;
      }
    t = s_151;
    {
      ATerm s_33 (ATerm t)
      {
        ATerm t_151 = NULL;
        t_151 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_151);
        t = (ATerm) ATmakeAppl(sym_Program_1, t_151);
        return(t);
      }
      ATerm u_33 (ATerm t)
      {
        ATerm o_100 = t;
        int p_100 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_100 = t;
            int r_100 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_100);
              }
            else
              {
                t = q_100;
                t = a_138(t);
                t = Cons_2_0(_id, u_33, t);
              }
            ;
            LocalPopChoice(p_100);
          }
        else
          {
            t = o_100;
            {
              ATerm v_151 = NULL,w_151 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_151 = ATgetFirst((ATermList) t);
                  w_151 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_151), (ATerm) ATmakeAppl(sym_Undefined_1, v_151));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_33, u_33, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm z_137 (ATerm), ATerm t)
{
  ATerm d_152 = NULL,e_152 = NULL,f_152 = NULL;
  d_152 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_152;
  {
    ATerm w_33 (ATerm t)
    {
      ATerm s_100 = t;
      int t_100 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_137(t);
          ;
          LocalPopChoice(t_100);
        }
      else
        {
          t = s_100;
          {
            ATerm u_100 = t;
            int v_100 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_33 (ATerm t)
                {
                  ATerm g_152 = NULL;
                  g_152 = t;
                  if(match_string(t, "--help"))
                    {
                      t = g_152;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = g_152;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = g_152;
                        }
                    }
                  return(t);
                }
                ATerm y_33 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_w_100;
                  return(t);
                }
                ATerm z_33 (ATerm t)
                {
                  t = term_x_100;
                  return(t);
                }
                t = Option_3_0(x_33, y_33, z_33, t);
                ;
                LocalPopChoice(v_100);
              }
            else
              {
                t = u_100;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_33, t);
    {
      ATerm y_100 = t;
      int c_101 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_152 = NULL;
          l_152 = t;
          {
            ATerm e_101 = t;
            int f_101 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_152;
                {
                  ATerm i_101 = t;
                  int j_101 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_101 = t;
                        int v_101 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_31 = NULL;
                            t = eval_config_0_0(t);
                            v_31 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_31);
                            t = v_31;
                            ;
                            LocalPopChoice(v_101);
                          }
                        else
                          {
                            t = u_101;
                          }
                      }
                      ;
                      LocalPopChoice(j_101);
                    }
                  else
                    {
                      t = i_101;
                      {
                        ATerm a_34 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(a_34, t);
                      }
                    }
                  t = l_152;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(f_101);
              }
            else
              {
                t = e_101;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm w_101 = t;
                  int x_101 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_32 = NULL;
                      t = eval_config_0_0(t);
                      n_32 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), n_32);
                      t = n_32;
                      ;
                      LocalPopChoice(x_101);
                    }
                  else
                    {
                      t = w_101;
                    }
                  t = l_152;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(c_101);
        }
      else
        {
          t = y_100;
          {
            ATerm y_101 = t;
            int a_102 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_34 (ATerm t)
                {
                  ATerm e_34 (ATerm t)
                  {
                    if(((e_152 != NULL) && (e_152 != t)))
                      _fail(t);
                    else
                      e_152 = t;
                    return(t);
                  }
                  t = Undefined_1_0(e_34, t);
                  return(t);
                }
                t = fetch_1_0(d_34, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_152)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_x_97, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_152)), term_b_102));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(a_102);
              }
            else
              {
                t = y_101;
              }
          }
        }
      f_152 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_152;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm t)
{
  ATerm o_152 = NULL;
  t = parse_options_1_0(z_135, t);
  o_152 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_152);
  t = o_152;
  t = b_136(t);
  {
    ATerm d_102 = t;
    int f_102 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_136, t);
        ;
        LocalPopChoice(f_102);
      }
    else
      {
        t = d_102;
        {
          ATerm i_102 = t;
          int j_102 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_136(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_102);
            }
          else
            {
              t = i_102;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm t)
{
  ATerm f_34 (ATerm t)
  {
    ATerm k_102 = t;
    int l_102 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_135(t);
        ;
        LocalPopChoice(l_102);
      }
    else
      {
        t = k_102;
        {
          ATerm m_102 = t;
          int n_102 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(n_102);
            }
          else
            {
              t = m_102;
              {
                ATerm o_102 = t;
                int p_102 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_102);
                  }
                else
                  {
                    t = o_102;
                    {
                      ATerm q_102 = t;
                      int v_102 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_34 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm k_34 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_w_102;
                            return(t);
                          }
                          ATerm l_34 (ATerm t)
                          {
                            t = term_x_102;
                            return(t);
                          }
                          t = Option_3_0(j_34, k_34, l_34, t);
                          ;
                          LocalPopChoice(v_102);
                        }
                      else
                        {
                          t = q_102;
                          {
                            ATerm y_102 = t;
                            int b_103 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_103);
                              }
                            else
                              {
                                t = y_102;
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
  ATerm g_34 (ATerm t)
  {
    ATerm m_34 (ATerm t)
    {
      ATerm p_152 = NULL,q_152 = NULL;
      p_152 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm e_103 = t;
        int g_103 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_33 = NULL;
            t = eval_config_0_0(t);
            h_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_33);
            t = h_33;
            ;
            LocalPopChoice(g_103);
          }
        else
          {
            t = e_103;
          }
        q_152 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, q_152));
        t = p_152;
      }
      return(t);
    }
    t = if_verbose2_1_0(m_34, t);
    return(t);
  }
  ATerm h_34 (ATerm t)
  {
    ATerm r_152 = NULL,s_152 = NULL,t_33 = NULL;
    r_152 = t;
    {
      ATerm h_103 = t;
      int k_103 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_34 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_152 != NULL) && (s_152 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_152 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_34, t);
          ;
          LocalPopChoice(k_103);
        }
      else
        {
          t = h_103;
          t = term_l_103;
          s_152 = t;
        }
      t = not_null(s_152);
      t = ReadFromFile_0_0(t);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_152, t_33);
      t = apply_strategy_1_0(i_135, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_34, k_135, g_34, h_34, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm o_34 (ATerm t)
  {
    t = _2_0(_id, frontend_transformation_0_0, t);
    return(t);
  }
  t = iowrap_3_0(o_34, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_d_98;
ATerm term_i_97;
ATerm term_h_97;
ATerm term_b_97;
ATerm term_y_95;
ATerm term_x_95;
ATerm term_l_95;
ATerm term_g_95;
ATerm term_f_95;
ATerm term_e_95;
ATerm term_d_95;
ATerm term_c_95;
ATerm term_b_95;
ATerm term_u_94;
ATerm term_p_94;
ATerm term_d_94;
ATerm term_c_94;
ATerm term_a_94;
ATerm term_h_93;
ATerm term_b_93;
ATerm term_a_93;
ATerm term_z_92;
ATerm term_u_92;
ATerm term_t_92;
ATerm term_s_92;
ATerm term_r_92;
ATerm term_q_92;
ATerm term_p_92;
ATerm term_o_92;
ATerm term_q_91;
ATerm term_a_91;
ATerm term_v_90;
ATerm term_b_90;
ATerm term_v_89;
ATerm term_u_89;
ATerm term_t_89;
ATerm term_h_89;
ATerm term_g_89;
ATerm term_f_89;
ATerm term_e_89;
ATerm term_d_89;
ATerm term_a_89;
ATerm term_z_88;
ATerm term_y_88;
ATerm term_x_88;
ATerm term_k_88;
ATerm term_p_85;
ATerm term_o_85;
ATerm term_n_85;
ATerm term_d_84;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_q_83;
ATerm term_p_83;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_k_77;
ATerm term_j_77;
ATerm term_i_77;
ATerm term_f_77;
ATerm term_e_77;
ATerm term_b_77;
ATerm term_a_77;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_t_76;
ATerm term_s_76;
ATerm term_o_76;
ATerm term_n_76;
ATerm term_c_73;
ATerm term_w_72;
ATerm term_v_72;
ATerm term_u_72;
ATerm term_m_71;
ATerm term_k_71;
ATerm term_o_70;
ATerm term_n_70;
ATerm term_f_70;
ATerm term_e_70;
ATerm term_n_69;
ATerm term_a_69;
ATerm term_v_68;
ATerm term_u_68;
ATerm term_p_68;
ATerm term_i_67;
ATerm term_d_67;
ATerm term_c_67;
ATerm term_q_66;
ATerm term_p_66;
ATerm term_o_66;
ATerm term_n_66;
ATerm term_m_66;
ATerm term_d_65;
ATerm term_d_58;
ATerm term_b_58;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_q_56;
ATerm term_m_56;
ATerm term_e_55;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_v_54;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_o_53;
ATerm term_m_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_i_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_l_51;
ATerm term_h_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_w_50;
ATerm term_q_44;
ATerm term_i_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_36;
ATerm term_f_34;
ATerm term_u_33;
ATerm term_o_33;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_e_32;
void init_constant_terms (void)
{
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_Op_2, term_f_44, (ATerm) ATempty);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_ConstType_1, term_g_44);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_51);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_51);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Var_1, term_i_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Var_1, term_m_52);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Anno_2, term_l_52, term_n_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Var_1, term_s_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Var_1, term_a_53);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_Anno_2, term_z_52, term_b_53);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_52);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_Call_2, term_d_53, (ATerm) ATempty);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_BAM_3, term_e_53, term_l_52, term_z_52);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_52);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_Call_2, term_o_53, (ATerm) ATempty);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_BAM_3, term_r_53, term_n_52, term_b_53);
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(sym_Var_1, term_x_54);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("a_2", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("d_2", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_57);
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym_Keys_1, term_w_50);
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("u_1", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_57);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(sym_ConstType_1, term_y_54);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, term_b_58);
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_52);
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(ATmakeSymbol("r_1", 0, ATtrue));
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_66);
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_70);
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(sym_Op_2, term_u_72, (ATerm) ATempty);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_n_76));
  term_n_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(sym_Op_2, term_n_76, (ATerm) ATempty);
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_76);
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_77);
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_77);
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_77);
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_79);
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_83);
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_83);
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_32);
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_88);
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_72);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(sym_Call_2, term_z_88, (ATerm) ATempty);
  ATprotect(&(term_d_89));
  term_d_89 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_t_89));
  term_t_89 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_u_89));
  term_u_89 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_89);
  ATprotect(&(term_v_89));
  term_v_89 = (ATerm) ATmakeAppl(sym_Call_2, term_u_89, (ATerm) ATempty);
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(sym_Call_2, term_k_88, (ATerm) ATempty);
  ATprotect(&(term_v_90));
  term_v_90 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_91));
  term_a_91 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_91));
  term_q_91 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_92));
  term_o_92 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_92));
  term_p_92 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_92));
  term_q_92 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_50);
  ATprotect(&(term_r_92));
  term_r_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_92));
  term_s_92 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_92));
  term_t_92 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_92));
  term_u_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_92));
  term_z_92 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_93));
  term_a_93 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_93));
  term_b_93 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_93));
  term_h_93 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_94));
  term_a_94 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_94));
  term_c_94 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_94));
  term_p_94 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_95));
  term_b_95 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_95));
  term_c_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_95));
  term_d_95 = (ATerm) ATmakeAppl(sym__3, term_b_95, term_c_95, term_e_32);
  ATprotect(&(term_e_95));
  term_e_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_95));
  term_f_95 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_95));
  term_g_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_95));
  term_l_95 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_95));
  term_x_95 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_95));
  term_y_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_97));
  term_b_97 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_97));
  term_h_97 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_97));
  term_i_97 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_98));
  term_d_98 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm m_142 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm f_7 (ATerm z_6, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm i_133 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm spaste_1_0 (ATerm y_141 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm b_142 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm rename_4_0 (ATerm u_138 (ATerm (ATerm), ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_138 (ATerm (ATerm), ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm ListBuild_0_0 (ATerm);
ATerm ListMatch_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm repeat_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm);
ATerm g_9 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm t_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm e_10 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm g_10 (ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm a_11 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm y_45 (ATerm r_45, ATerm);
ATerm z_45 (ATerm t_45, ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm n_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm RulesToSdefs_0_0 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm s_12 (ATerm);
ATerm h_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm CheckTuple_0_0 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm b_116 (ATerm), ATerm);
ATerm s_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm check_constructors_p__2_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm);
ATerm a_14 (ATerm);
ATerm d_14 (ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm j_14 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm r_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm tpaste_1_0 (ATerm u_141 (ATerm), ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm c_15 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm RnBinding_2_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm f_118 (ATerm), ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm (ATerm), ATerm), ATerm i_138 (ATerm), ATerm j_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_138 (ATerm (ATerm), ATerm), ATerm l_138 (ATerm), ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm c_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm i_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm ExpOverlay_1_0 (ATerm a_141 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm n_16 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm o_16 (ATerm);
ATerm Overlay_to_Congdef_0_0 (ATerm);
ATerm ExpandOverlays_0_0 (ATerm);
ATerm z_16 (ATerm);
ATerm c_17 (ATerm);
ATerm e_17 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm m_17 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm);
ATerm s_17 (ATerm);
ATerm a_67 (ATerm j_66, ATerm k_66, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm u_17 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm e_142 (ATerm), ATerm f_142 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm x_99 (ATerm), ATerm);
ATerm App_2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm Build_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm v_17 (ATerm);
ATerm x_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm k_98 (ATerm), ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm e_19 (ATerm);
ATerm f_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm s_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm y_19 (ATerm);
ATerm a_20 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm b_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm h_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm r_20 (ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm v_20 (ATerm);
ATerm x_20 (ATerm);
ATerm y_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm f_21 (ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm g_21 (ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm split_under_scope_1_0 (ATerm v_140 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm t_114 (ATerm), ATerm);
ATerm split_dynamic_rule_1_0 (ATerm t_140 (ATerm), ATerm);
ATerm l_21 (ATerm);
ATerm n_21 (ATerm);
ATerm o_21 (ATerm);
ATerm p_21 (ATerm);
ATerm q_21 (ATerm);
ATerm r_21 (ATerm);
ATerm s_21 (ATerm);
ATerm lift_dynamic_rule_0_0 (ATerm);
ATerm listtd_1_0 (ATerm q_120 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm y_101 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm a_22 (ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm e_22 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm l_123 (ATerm), ATerm);
ATerm diff_1_0 (ATerm g_123 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm k_22 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm);
ATerm n_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm v_22 (ATerm);
ATerm x_22 (ATerm);
ATerm y_22 (ATerm);
ATerm a_23 (ATerm);
ATerm b_23 (ATerm);
ATerm d_23 (ATerm);
ATerm e_23 (ATerm);
ATerm free_vars_3_0 (ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm h_23 (ATerm);
ATerm i_23 (ATerm);
ATerm j_23 (ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm q_113 (ATerm), ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm h_115 (ATerm), ATerm);
ATerm assert_1_0 (ATerm d_130 (ATerm), ATerm);
ATerm l_23 (ATerm);
ATerm m_23 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm a_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm z_129 (ATerm), ATerm);
ATerm scope_2_0 (ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm);
ATerm p_23 (ATerm);
ATerm q_23 (ATerm);
ATerm r_23 (ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm u_23 (ATerm);
ATerm x_23 (ATerm);
ATerm y_23 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_126 (ATerm), ATerm);
ATerm InsertBSpec_0_0 (ATerm);
ATerm foldr_3_0 (ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm l_24 (ATerm);
ATerm m_24 (ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm n_24 (ATerm);
ATerm o_24 (ATerm);
ATerm p_24 (ATerm);
ATerm q_24 (ATerm);
ATerm r_24 (ATerm);
ATerm s_24 (ATerm);
ATerm t_24 (ATerm);
ATerm v_24 (ATerm);
ATerm w_24 (ATerm);
ATerm y_24 (ATerm);
ATerm z_24 (ATerm);
ATerm a_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm j_25 (ATerm);
ATerm k_25 (ATerm);
ATerm l_25 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm Op_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm q_102 (ATerm), ATerm);
ATerm Var_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm m_25 (ATerm);
ATerm n_25 (ATerm);
ATerm o_25 (ATerm);
ATerm p_25 (ATerm);
ATerm q_25 (ATerm);
ATerm t_25 (ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm a_26 (ATerm);
ATerm c_26 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm h_26 (ATerm);
ATerm at_last_1_0 (ATerm i_120 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm l_26 (ATerm);
ATerm unquote_chars_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm m_129 (ATerm x_124, ATerm z_124, ATerm);
ATerm n_129 (ATerm b_125, ATerm c_125, ATerm);
ATerm o_129 (ATerm e_125, ATerm f_125, ATerm g_125, ATerm);
ATerm p_129 (ATerm p_125, ATerm q_125, ATerm);
ATerm m_26 (ATerm);
ATerm n_26 (ATerm);
ATerm o_26 (ATerm);
ATerm p_26 (ATerm);
ATerm r_26 (ATerm);
ATerm s_26 (ATerm);
ATerm v_26 (ATerm);
ATerm w_26 (ATerm);
ATerm z_26 (ATerm);
ATerm b_27 (ATerm);
ATerm g_27 (ATerm);
ATerm h_27 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm j_27 (ATerm);
ATerm k_27 (ATerm);
ATerm m_27 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm q_27 (ATerm);
ATerm s_27 (ATerm);
ATerm w_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm h_28 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_131 (ATerm), ATerm);
ATerm n_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_134 (ATerm), ATerm);
ATerm e_132 (ATerm v_131, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_28 (ATerm);
ATerm w_28 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_119 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_119 (ATerm), ATerm);
ATerm y_28 (ATerm);
ATerm g_29 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm i_29 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_133 (ATerm), ATerm);
ATerm m_29 (ATerm);
ATerm n_29 (ATerm);
ATerm r_29 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_29 (ATerm);
ATerm v_29 (ATerm);
ATerm w_29 (ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm a_30 (ATerm);
ATerm b_30 (ATerm);
ATerm c_30 (ATerm);
ATerm e_30 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm g_30 (ATerm);
ATerm h_30 (ATerm);
ATerm j_30 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm k_30 (ATerm);
ATerm l_30 (ATerm);
ATerm n_30 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_30 (ATerm);
ATerm p_30 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_133 (ATerm), ATerm);
ATerm s_30 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_30 (ATerm);
ATerm need_help_1_0 (ATerm w_135 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm w_30 (ATerm);
ATerm x_30 (ATerm);
ATerm z_30 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_31 (ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm g_31 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm h_31 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_137 (ATerm), ATerm);
ATerm l_31 (ATerm);
ATerm m_31 (ATerm);
ATerm o_31 (ATerm);
ATerm q_31 (ATerm);
ATerm parse_options_1_0 (ATerm y_137 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm);
ATerm v_31 (ATerm);
ATerm x_31 (ATerm);
ATerm z_31 (ATerm);
ATerm a_32 (ATerm);
ATerm b_32 (ATerm);
ATerm iowrap_3_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm);
ATerm d_32 (ATerm);
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
  t = term_e_32;
  t = whoami_0_0(t);
  j_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = h_0;
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm r_0 = NULL,t_0 = NULL,u_0 = NULL;
  t_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      u_0 = ATgetArgument(t, 0);
      r_0 = ATgetArgument(t, 1);
      {
        ATerm z_0 = NULL,a_1 = NULL,c_1 = NULL,d_1 = NULL;
        t = t_0;
        t = new_0_0(t);
        z_0 = t;
        t = new_0_0(t);
        a_1 = t;
        t = new_0_0(t);
        c_1 = t;
        t = new_0_0(t);
        d_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_1), c_1), a_1), z_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, c_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, u_0, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, a_1)), (ATerm) ATmakeAppl(sym_BAM_3, r_0, (ATerm)ATmakeAppl(sym_Var_1, c_1), (ATerm) ATmakeAppl(sym_Var_1, d_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_32, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_1)), (ATerm) ATmakeAppl(sym_Var_1, a_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_0 = ATgetArgument(t, 0);
          {
            ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL,v_1 = NULL;
            t = t_0;
            t = new_0_0(t);
            q_1 = t;
            t = u_0;
            {
              ATerm o_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((s_1 != NULL) && (s_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_1 = ATgetArgument(t, 0);
                    if(((t_1 != NULL) && (t_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_1);
                return(t);
              }
              t = oncetd_1_0(o_0, t);
              v_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_32, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_1)), not_null(s_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_1)), (ATerm) ATmakeAppl(sym_Build_1, v_1))));
            }
          }
        }
      else
        {
          ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL,e_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              u_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_0;
          t = new_0_0(t);
          y_1 = t;
          t = new_0_0(t);
          z_1 = t;
          t = u_0;
          {
            ATerm w_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((b_2 != NULL) && (b_2 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_2 = ATgetArgument(t, 0);
                  if(((c_2 != NULL) && (c_2 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    c_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_1);
              return(t);
            }
            t = oncetd_1_0(w_0, t);
            e_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_32, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_1))))), (ATerm)ATmakeAppl(sym_Var_1, y_1), (ATerm) ATmakeAppl(sym_Op_2, term_i_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_2)), not_null(b_2)))))));
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
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
        t = g_2;
        t = new_0_0(t);
        j_2 = t;
        t = h_2;
        {
          ATerm x_0 (ATerm t)
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
          t = pat_td_1_0(x_0, t);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_32, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_2))))));
        }
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          ATerm m_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
              t = g_2;
              t = new_0_0(t);
              q_2 = t;
              t = h_2;
              {
                ATerm f_1 (ATerm t)
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
                t = pat_td_1_0(f_1, t);
                s_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_2)), not_null(r_2))));
              }
              ;
              LocalPopChoice(o_32);
            }
          else
            {
              t = m_32;
              {
                ATerm u_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL;
                t = g_2;
                t = new_0_0(t);
                u_2 = t;
                t = h_2;
                {
                  ATerm g_1 (ATerm t)
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
                  t = pat_td_1_0(g_1, t);
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
ATerm As_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL;
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
  t = y_99(t);
  f_3 = t;
  t = e_3;
  t = z_99(t);
  g_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, f_3, g_3), c_3);
  return(t);
}
ATerm CallT_3_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  u_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
      o_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  l_3 = t;
  t = m_3;
  t = v_102(t);
  q_3 = t;
  t = n_3;
  t = w_102(t);
  s_3 = t;
  t = o_3;
  t = x_102(t);
  t_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, q_3, s_3, t_3), l_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  e_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
      a_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  x_3 = t;
  t = y_3;
  t = x_103(t);
  b_4 = t;
  t = z_3;
  t = y_103(t);
  c_4 = t;
  t = a_4;
  t = z_103(t);
  d_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, b_4, c_4, d_4), x_3);
  return(t);
}
ATerm Explode_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_Explode_2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  i_4 = t;
  t = k_4;
  t = r_99(t);
  m_4 = t;
  t = l_4;
  t = s_99(t);
  n_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, m_4, n_4), i_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm p_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_142(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = p_32;
      {
        ATerm y_32 = t;
        int z_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              ATerm j_1 (ATerm t)
              {
                t = pat_td_1_0(m_142, t);
                return(t);
              }
              t = fetch_1_0(j_1, t);
              return(t);
            }
            t = Op_2_0(_id, i_1, t);
            ;
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
                  ATerm l_1 (ATerm t)
                  {
                    t = pat_td_1_0(m_142, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, l_1, t);
                  ;
                  LocalPopChoice(b_33);
                }
              else
                {
                  t = a_33;
                  {
                    ATerm c_33 = t;
                    int d_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_1 (ATerm t)
                        {
                          t = pat_td_1_0(m_142, t);
                          return(t);
                        }
                        t = Explode_2_0(m_1, _id, t);
                        ;
                        LocalPopChoice(d_33);
                      }
                    else
                      {
                        t = c_33;
                        {
                          ATerm e_33 = t;
                          int f_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_1 (ATerm t)
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1_0(m_142, t);
                                  return(t);
                                }
                                t = fetch_1_0(w_1, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, o_1, t);
                              ;
                              LocalPopChoice(f_33);
                            }
                          else
                            {
                              t = e_33;
                              {
                                ATerm i_33 = t;
                                int j_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_2 (ATerm t)
                                    {
                                      ATerm p_2 (ATerm t)
                                      {
                                        t = pat_td_1_0(m_142, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(p_2, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, i_2, t);
                                    ;
                                    LocalPopChoice(j_33);
                                  }
                                else
                                  {
                                    t = i_33;
                                    {
                                      ATerm t_2 (ATerm t)
                                      {
                                        t = pat_td_1_0(m_142, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, t_2, t);
                                    }
                                  }
                              }
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
  ATerm s_4 = NULL,t_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL,y_4 = NULL,c_5 = NULL,d_5 = NULL;
        t = s_4;
        t = new_0_0(t);
        v_4 = t;
        t = t_4;
        {
          ATerm z_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_4 != NULL) && (y_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_4 = ATgetArgument(t, 0);
                if(((c_5 != NULL) && (c_5 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, v_4);
            return(t);
          }
          t = pat_td_1_0(z_2, t);
          d_5 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_33, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_5)), not_null(y_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_4)))), (ATerm) ATmakeAppl(sym_Build_1, d_5)));
        }
        ;
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        {
          ATerm p_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
              t = s_4;
              t = new_0_0(t);
              f_5 = t;
              t = t_4;
              {
                ATerm a_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((g_5 != NULL) && (g_5 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_5);
                  return(t);
                }
                t = pat_td_1_0(a_3, t);
                h_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_5)))), (ATerm) ATmakeAppl(sym_Build_1, h_5)));
              }
              ;
              LocalPopChoice(s_33);
            }
          else
            {
              t = p_33;
              {
                ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
                t = s_4;
                t = new_0_0(t);
                j_5 = t;
                t = t_4;
                {
                  ATerm b_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((k_5 != NULL) && (k_5 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_5 = ATgetArgument(t, 0);
                        if(((l_5 != NULL) && (l_5 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, j_5);
                    return(t);
                  }
                  t = pat_td_1_0(b_3, t);
                  m_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_5), not_null(l_5), (ATerm) ATmakeAppl(sym_Var_1, j_5))), (ATerm) ATmakeAppl(sym_Build_1, m_5)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm t_33 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_33;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm y_5 = NULL,a_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_5 = ATgetFirst((ATermList) t);
      a_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_5, a_6);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,g_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_33 = ATgetArgument(t, 0);
      if(match_cons(v_33, sym__2))
        {
          d_6 = ATgetArgument(v_33, 0);
          g_6 = ATgetArgument(v_33, 1);
        }
      else
        _fail(t);
      {
        ATerm w_33 = ATgetArgument(t, 1);
        if(match_cons(w_33, sym__2))
          {
            e_6 = ATgetArgument(w_33, 0);
            i_6 = ATgetArgument(w_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_6), d_6), (ATerm) ATinsert(CheckATermList(i_6), g_6));
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = genzip_4_0(h_4, p_4, q_4, _id, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_6 = ATgetFirst((ATermList) t);
      k_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_6, k_6);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,q_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if(match_cons(x_33, sym__2))
        {
          n_6 = ATgetArgument(x_33, 0);
          q_6 = ATgetArgument(x_33, 1);
        }
      else
        _fail(t);
      {
        ATerm y_33 = ATgetArgument(t, 1);
        if(match_cons(y_33, sym__2))
          {
            o_6 = ATgetArgument(y_33, 0);
            s_6 = ATgetArgument(y_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_6), n_6), (ATerm) ATinsert(CheckATermList(s_6), q_6));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,w_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
      r_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_5;
  t = fetch_1_0(j_3, t);
  t = r_5;
  t = genzip_4_0(k_3, v_3, w_3, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, f_4, t);
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(match_cons(z_33, sym__2))
          {
            w_5 = ATgetArgument(z_33, 0);
            x_5 = ATgetArgument(z_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_5), (ATerm) ATmakeAppl(sym_CallT_3, p_5, q_5, x_5)));
  return(t);
}
ATerm f_7 (ATerm z_6, ATerm t)
{
  ATerm b_7 = NULL;
  t = z_6;
  {
    ATerm a_34 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_34;
      }
    t = new_0_0(t);
    b_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, b_7), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_7)))), (ATerm) ATmakeAppl(sym_Var_1, b_7)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_7 = ATgetArgument(t, 0);
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_7(c_7, t);
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_f_34, (ATerm) ATmakeAppl(sym_Var_1, d_7)));
          }
      }
    }
  else
    {
      t = f_7(c_7, t);
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm h_34 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_34;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm e_5 (ATerm t)
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
ATerm i_5 (ATerm t)
{
  ATerm h_3 = NULL,p_3 = NULL,r_3 = NULL,g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if(match_cons(i_34, sym__2))
        {
          h_3 = ATgetArgument(i_34, 0);
          r_3 = ATgetArgument(i_34, 1);
        }
      else
        _fail(t);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(match_cons(j_34, sym__2))
          {
            p_3 = ATgetArgument(j_34, 0);
            g_4 = ATgetArgument(j_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_3), h_3), (ATerm) ATinsert(CheckATermList(g_4), r_3));
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = genzip_4_0(o_5, t_5, u_5, _id, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm j_4 = NULL,r_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_4 = ATgetFirst((ATermList) t);
      r_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_4, r_4);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      if(match_cons(k_34, sym__2))
        {
          w_4 = ATgetArgument(k_34, 0);
          z_4 = ATgetArgument(k_34, 1);
        }
      else
        _fail(t);
      {
        ATerm o_34 = ATgetArgument(t, 1);
        if(match_cons(o_34, sym__2))
          {
            x_4 = ATgetArgument(o_34, 0);
            a_5 = ATgetArgument(o_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_4), w_4), (ATerm) ATinsert(CheckATermList(a_5), z_4));
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm r_34 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_34;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm m_6 = NULL,p_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_6 = ATgetFirst((ATermList) t);
      p_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_6, p_6);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm r_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_34 = ATgetArgument(t, 0);
      if(match_cons(s_34, sym__2))
        {
          r_6 = ATgetArgument(s_34, 0);
          u_6 = ATgetArgument(s_34, 1);
        }
      else
        _fail(t);
      {
        ATerm t_34 = ATgetArgument(t, 1);
        if(match_cons(t_34, sym__2))
          {
            t_6 = ATgetArgument(t_34, 0);
            v_6 = ATgetArgument(t_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_6), r_6), (ATerm) ATinsert(CheckATermList(v_6), u_6));
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = genzip_4_0(e_7, j_7, k_7, _id, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm j_7 (ATerm t)
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
ATerm k_7 (ATerm t)
{
  ATerm y_6 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      if(match_cons(u_34, sym__2))
        {
          y_6 = ATgetArgument(u_34, 0);
          h_7 = ATgetArgument(u_34, 1);
        }
      else
        _fail(t);
      {
        ATerm v_34 = ATgetArgument(t, 1);
        if(match_cons(v_34, sym__2))
          {
            g_7 = ATgetArgument(v_34, 0);
            i_7 = ATgetArgument(v_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_7), y_6), (ATerm) ATinsert(CheckATermList(i_7), h_7));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
      h_9 = ATgetArgument(t, 2);
      {
        ATerm p_1 = NULL,f_2 = NULL,n_2 = NULL;
        t = h_9;
        t = fetch_1_0(u_4, t);
        t = h_9;
        t = genzip_4_0(b_5, e_5, i_5, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, n_5, t);
        if(match_cons(t, sym__2))
          {
            p_1 = ATgetArgument(t, 0);
            {
              ATerm w_34 = ATgetArgument(t, 1);
              if(match_cons(w_34, sym__2))
                {
                  f_2 = ATgetArgument(w_34, 0);
                  n_2 = ATgetArgument(w_34, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_2), (ATerm) ATmakeAppl(sym_PrimT_3, k_9, l_9, n_2)));
      }
    }
  else
    {
      ATerm f_6 = NULL,h_6 = NULL,l_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          k_9 = ATgetArgument(t, 0);
          l_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_9;
      t = fetch_1_0(v_5, t);
      t = l_9;
      t = genzip_4_0(z_5, b_6, c_6, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, a_7, t);
      if(match_cons(t, sym__2))
        {
          f_6 = ATgetArgument(t, 0);
          {
            ATerm x_34 = ATgetArgument(t, 1);
            if(match_cons(x_34, sym__2))
              {
                h_6 = ATgetArgument(x_34, 0);
                l_6 = ATgetArgument(x_34, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_6), (ATerm) ATmakeAppl(sym_PrimT_3, k_9, (ATerm)ATempty, l_6)));
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm b_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = b_35;
    }
  t = repeat_1_0(m_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            {
              ATerm l_35 = t;
              int o_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(o_35);
                }
              else
                {
                  t = l_35;
                  {
                    ATerm q_35 = t;
                    int r_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(r_35);
                      }
                    else
                      {
                        t = q_35;
                        {
                          ATerm s_35 = t;
                          int t_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_35 = t;
                              int v_35 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_9 = NULL,e_9 = NULL,i_9 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_9 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_9;
                                  {
                                    ATerm n_7 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm w_35 = ATgetArgument(t, 0);
                                          if(match_cons(w_35, sym_Match_1))
                                            {
                                              if(((e_9 != NULL) && (e_9 != ATgetArgument(w_35, 0))))
                                                _fail(ATgetArgument(w_35, 0));
                                              else
                                                e_9 = ATgetArgument(w_35, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(e_9);
                                      return(t);
                                    }
                                    t = pat_td_1_0(n_7, t);
                                    i_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, i_9);
                                  }
                                  ;
                                  LocalPopChoice(v_35);
                                }
                              else
                                {
                                  t = u_35;
                                  {
                                    ATerm x_35 = t;
                                    int y_35 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_10 = NULL,l_10 = NULL,o_10 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            h_10 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = h_10;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            l_10 = ATgetArgument(t, 0);
                                            t = l_10;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                o_10 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, l_10, o_10);
                                          }
                                        ;
                                        LocalPopChoice(y_35);
                                      }
                                    else
                                      {
                                        t = x_35;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(t_35);
                            }
                          else
                            {
                              t = s_35;
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
  t = topdown_1_0(l_7, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,v_10 = NULL,w_10 = NULL,y_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
      y_10 = ATgetArgument(t, 2);
      z_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_11);
  t_10 = t;
  t = v_10;
  t = j_105(t);
  b_11 = t;
  t = w_10;
  t = k_105(t);
  c_11 = t;
  t = y_10;
  t = l_105(t);
  d_11 = t;
  t = z_10;
  t = m_105(t);
  e_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, b_11, c_11, d_11, e_11), t_10);
  return(t);
}
ATerm SDef_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,w_11 = NULL;
  w_11 = t;
  if(match_cons(t, sym_SDef_3))
    {
      m_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
      p_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_11);
  i_11 = t;
  t = m_11;
  t = g_105(t);
  q_11 = t;
  t = o_11;
  t = h_105(t);
  r_11 = t;
  t = p_11;
  t = i_105(t);
  s_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, q_11, r_11, s_11), i_11);
  return(t);
}
ATerm Strategies_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,c_12 = NULL,d_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  z_11 = t;
  t = a_12;
  t = j_98(t);
  c_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, c_12), z_11);
  return(t);
}
ATerm Specification_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,i_13 = NULL,v_13 = NULL,i_14 = NULL;
  i_14 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_14);
  r_12 = t;
  t = i_13;
  t = o_98(t);
  v_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, v_13), r_12);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL,n_17 = NULL;
      e_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL;
            t = eval_config_0_0(t);
            r_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_9);
            t = r_9;
            ;
            LocalPopChoice(d_36);
          }
        else
          {
            t = c_36;
          }
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_17, term_e_36);
        t = geq_0_0(t);
        t = e_16;
        t = i_133(t);
      }
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(((ATgetType(i_36) != AT_LIST) || !(ATisEmpty(i_36))))
        _fail(t);
      {
        ATerm j_36 = ATgetArgument(t, 1);
        if(((ATgetType(j_36) != AT_LIST) || !(ATisEmpty(j_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm r_19 = NULL,z_19 = NULL,i_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_36 = ATgetArgument(t, 0);
      if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
        {
          r_19 = ATgetFirst((ATermList) t_36);
          i_20 = (ATerm) ATgetNext((ATermList) t_36);
        }
      else
        _fail(t);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
          {
            z_19 = ATgetFirst((ATermList) u_36);
            p_20 = (ATerm) ATgetNext((ATermList) u_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_19, z_19), (ATerm) ATmakeAppl(sym__2, i_20, p_20));
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm w_20 = NULL,d_21 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_21), w_20);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm t_21 = NULL,h_22 = NULL,q_22 = NULL,z_22 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_21;
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm z_36 = ATgetArgument(t, 0);
            h_22 = ATgetArgument(t, 1);
            q_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(w_36);
        t = (ATerm) ATmakeAppl(sym_SDef_3, g_23, h_22, q_22);
      }
    else
      {
        t = v_36;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm c_37 = ATgetArgument(t, 0);
            h_22 = ATgetArgument(t, 1);
            q_22 = ATgetArgument(t, 2);
            z_22 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_23, h_22, q_22, z_22);
      }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_37 = ATgetArgument(t, 0);
      if(((ATgetType(f_37) != AT_LIST) || !(ATisEmpty(f_37))))
        _fail(t);
      {
        ATerm g_37 = ATgetArgument(t, 1);
        if(((ATgetType(g_37) != AT_LIST) || !(ATisEmpty(g_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      if(((ATgetType(h_37) == AT_LIST) && !(ATisEmpty(h_37))))
        {
          f_24 = ATgetFirst((ATermList) h_37);
          i_24 = (ATerm) ATgetNext((ATermList) h_37);
        }
      else
        _fail(t);
      {
        ATerm i_37 = ATgetArgument(t, 1);
        if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
          {
            g_24 = ATgetFirst((ATermList) i_37);
            j_24 = (ATerm) ATgetNext((ATermList) i_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_24, g_24), (ATerm) ATmakeAppl(sym__2, i_24, j_24));
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm k_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_24), k_24);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm x_24 = NULL,e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_24;
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_37);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_25);
      }
    else
      {
        t = j_37;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_37 = ATgetArgument(t, 0);
            e_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_25, e_25);
      }
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if(((ATgetType(z_37) != AT_LIST) || !(ATisEmpty(z_37))))
        _fail(t);
      {
        ATerm b_38 = ATgetArgument(t, 1);
        if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
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
  ATerm r_25 = NULL,s_25 = NULL,b_26 = NULL,d_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(((ATgetType(g_38) == AT_LIST) && !(ATisEmpty(g_38))))
        {
          r_25 = ATgetFirst((ATermList) g_38);
          b_26 = (ATerm) ATgetNext((ATermList) g_38);
        }
      else
        _fail(t);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(((ATgetType(h_38) == AT_LIST) && !(ATisEmpty(h_38))))
          {
            s_25 = ATgetFirst((ATermList) h_38);
            d_26 = (ATerm) ATgetNext((ATermList) h_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_25, s_25), (ATerm) ATmakeAppl(sym__2, b_26, d_26));
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  if(match_cons(t, sym__2))
    {
      f_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_26), f_26);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm i_26 = NULL,c_27 = NULL,i_27 = NULL;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_26;
  {
    ATerm j_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_27);
      }
    else
      {
        t = j_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_38 = ATgetArgument(t, 0);
            c_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_27, c_27);
      }
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if(((ATgetType(r_38) != AT_LIST) || !(ATisEmpty(r_38))))
        _fail(t);
      {
        ATerm t_38 = ATgetArgument(t, 1);
        if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm r_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
        {
          r_27 = ATgetFirst((ATermList) u_38);
          u_27 = (ATerm) ATgetNext((ATermList) u_38);
        }
      else
        _fail(t);
      {
        ATerm w_38 = ATgetArgument(t, 1);
        if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
          {
            t_27 = ATgetFirst((ATermList) w_38);
            v_27 = (ATerm) ATgetNext((ATermList) w_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_27, t_27), (ATerm) ATmakeAppl(sym__2, u_27, v_27));
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm c_28 = NULL,g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_28), c_28);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm j_28 = NULL,l_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_28;
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_38);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_28);
      }
    else
      {
        t = x_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_39 = ATgetArgument(t, 0);
            l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_28, l_28);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm y_141 (ATerm), ATerm t)
{
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_7 (ATerm t)
      {
        ATerm s_9 = NULL,u_9 = NULL;
        s_9 = t;
        t = y_141(t);
        u_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, u_9);
        t = genzip_4_0(p_7, q_7, r_7, s_7, t);
        return(t);
      }
      t = Let_2_0(o_7, _id, t);
      ;
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_7 (ATerm t)
            {
              ATerm x_9 = NULL,z_9 = NULL;
              x_9 = t;
              t = y_141(t);
              z_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_9, z_9);
              t = genzip_4_0(u_7, v_7, w_7, x_7, t);
              return(t);
            }
            t = SDef_3_0(_id, t_7, _id, t);
            ;
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            {
              ATerm k_39 = t;
              int l_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_7 (ATerm t)
                  {
                    ATerm d_10 = NULL,f_10 = NULL;
                    d_10 = t;
                    t = y_141(t);
                    f_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_10, f_10);
                    t = genzip_4_0(z_7, a_8, b_8, c_8, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, y_7, _id, _id, t);
                  ;
                  LocalPopChoice(l_39);
                }
              else
                {
                  t = k_39;
                  {
                    ATerm n_39 = t;
                    int p_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_8 (ATerm t)
                        {
                          ATerm j_10 = NULL,m_10 = NULL;
                          j_10 = t;
                          t = y_141(t);
                          m_10 = t;
                          t = (ATerm) ATmakeAppl(sym__2, j_10, m_10);
                          t = genzip_4_0(e_8, f_8, g_8, h_8, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, d_8, _id, _id, t);
                        ;
                        LocalPopChoice(p_39);
                      }
                    else
                      {
                        t = n_39;
                        {
                          ATerm i_8 (ATerm t)
                          {
                            ATerm z_28 = NULL;
                            t = y_141(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                z_28 = ATgetFirst((ATermList) t);
                                {
                                  ATerm q_39 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = z_28;
                            return(t);
                          }
                          t = Rec_2_0(i_8, _id, t);
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
ATerm Rec_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  f_29 = t;
  if(match_cons(t, sym_Rec_2))
    {
      b_29 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  a_29 = t;
  t = b_29;
  t = o_103(t);
  d_29 = t;
  t = c_29;
  t = p_103(t);
  e_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, d_29, e_29), a_29);
  return(t);
}
ATerm Let_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  q_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_29);
  j_29 = t;
  t = k_29;
  t = r_102(t);
  o_29 = t;
  t = l_29;
  t = s_102(t);
  p_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, o_29, p_29), j_29);
  return(t);
}
ATerm sboundin_3_0 (ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm b_142 (ATerm), ATerm t)
{
  ATerm s_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(z_141, z_141, t);
      ;
      LocalPopChoice(v_39);
    }
  else
    {
      t = s_39;
      {
        ATerm x_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(b_142, b_142, z_141, t);
            ;
            LocalPopChoice(y_39);
          }
        else
          {
            t = x_39;
            {
              ATerm a_40 = t;
              int b_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(b_142, b_142, b_142, z_141, t);
                  ;
                  LocalPopChoice(b_40);
                }
              else
                {
                  t = a_40;
                  t = Rec_2_0(b_142, z_141, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm x_29 = NULL;
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_29 = ATgetArgument(t, 0);
          {
            ATerm g_40 = ATgetArgument(t, 1);
          }
          {
            ATerm h_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_40);
      t = x_29;
    }
  else
    {
      t = d_40;
      if(match_cons(t, sym_SDefT_4))
        {
          x_29 = ATgetArgument(t, 0);
          {
            ATerm j_40 = ATgetArgument(t, 1);
          }
          {
            ATerm k_40 = ATgetArgument(t, 2);
          }
          {
            ATerm m_40 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_29;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm u_29 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      u_29 = ATgetArgument(t, 0);
      {
        ATerm n_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_29;
  t = map_1_0(j_8, t);
  return(t);
}
ATerm rename_4_0 (ATerm u_138 (ATerm (ATerm), ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_138 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, (ATerm) ATempty);
  {
    ATerm i_30 (ATerm t)
    {
      ATerm k_8 (ATerm t)
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 = NULL,x_10 = NULL;
            ATerm l_8 (ATerm t)
            {
              ATerm j_11 = NULL;
              j_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_11, not_null(x_10));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((u_10 != NULL) && (u_10 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_10 = ATgetArgument(t, 0);
                if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(u_10);
            t = u_138(l_8, t);
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            t = RnBinding_2_0(v_138, x_138, t);
            t = DistBinding_2_0(i_30, w_138, t);
          }
        return(t);
      }
      t = env_alltd_1_0(k_8, t);
      return(t);
    }
    t = i_30(t);
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm r_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = r_40;
      {
        ATerm v_30 = NULL;
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm x_40 = ATgetArgument(t, 0);
                ATerm z_40 = ATgetArgument(t, 1);
                v_30 = ATgetArgument(t, 2);
                {
                  ATerm a_41 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_40);
            t = v_30;
            t = map_1_0(n_8, t);
          }
        else
          {
            t = v_40;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm c_41 = ATgetArgument(t, 0);
                ATerm d_41 = ATgetArgument(t, 1);
                v_30 = ATgetArgument(t, 2);
                {
                  ATerm e_41 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = v_30;
            t = map_1_0(o_8, t);
          }
      }
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm b_31 = NULL;
  ATerm f_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_31 = ATgetArgument(t, 0);
          {
            ATerm j_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_41);
      t = b_31;
    }
  else
    {
      t = f_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_31;
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm j_31 = NULL;
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_31 = ATgetArgument(t, 0);
          {
            ATerm m_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_41);
      t = j_31;
    }
  else
    {
      t = k_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_31;
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm n_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(p_41);
    }
  else
    {
      t = n_41;
      {
        ATerm n_31 = NULL,p_31 = NULL;
        ATerm q_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm u_41 = ATgetArgument(t, 0);
                p_31 = ATgetArgument(t, 1);
                {
                  ATerm v_41 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_41);
            t = p_31;
            t = map_1_0(q_8, t);
          }
        else
          {
            t = q_41;
            {
              ATerm w_41 = t;
              int x_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      n_31 = ATgetArgument(t, 0);
                      {
                        ATerm y_41 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_41);
                  t = (ATerm) ATinsert(ATempty, n_31);
                }
              else
                {
                  t = w_41;
                  {
                    ATerm a_42 = t;
                    int b_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm e_42 = ATgetArgument(t, 0);
                            p_31 = ATgetArgument(t, 1);
                            {
                              ATerm g_42 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm i_42 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_42);
                        t = p_31;
                        t = map_1_0(r_8, t);
                      }
                    else
                      {
                        t = a_42;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm j_42 = ATgetArgument(t, 0);
                            p_31 = ATgetArgument(t, 1);
                            {
                              ATerm k_42 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm l_42 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = p_31;
                        t = map_1_0(s_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm y_31 = NULL;
  ATerm m_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_31 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_42);
      t = y_31;
    }
  else
    {
      t = m_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_31;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm g_32 = NULL;
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_32 = ATgetArgument(t, 0);
          {
            ATerm s_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_42);
      t = g_32;
    }
  else
    {
      t = q_42;
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
ATerm s_8 (ATerm t)
{
  ATerm n_32 = NULL;
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_32 = ATgetArgument(t, 0);
          {
            ATerm w_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_42);
      t = n_32;
    }
  else
    {
      t = t_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_32;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, m_8, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, p_8, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm ListBuild_0_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,u_32 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      q_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_32;
  {
    ATerm t_8 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm x_42 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) x_42) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm z_42 = ATgetArgument(t, 1);
            if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
              {
                ATerm a_43 = ATgetFirst((ATermList) z_42);
                if(match_cons(a_43, sym_Var_1))
                  {
                    ATerm c_43 = ATgetArgument(a_43, 0);
                    if(match_cons(c_43, sym_ListVar_1))
                      {
                        if(((r_32 != NULL) && (r_32 != ATgetArgument(c_43, 0))))
                          _fail(ATgetArgument(c_43, 0));
                        else
                          r_32 = ATgetArgument(c_43, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm b_43 = (ATerm) ATgetNext((ATermList) z_42);
                  if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
                    {
                      ATerm d_43 = ATgetFirst((ATermList) b_43);
                      if(match_cons(d_43, sym_Op_2))
                        {
                          ATerm f_43 = ATgetArgument(d_43, 0);
                          if((ATgetSymbol((ATermAppl) f_43) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm h_43 = ATgetArgument(d_43, 1);
                            if(((ATgetType(h_43) != AT_LIST) || !(ATisEmpty(h_43))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm e_43 = (ATerm) ATgetNext((ATermList) b_43);
                        if(((ATgetType(e_43) != AT_LIST) || !(ATisEmpty(e_43))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_32));
      return(t);
    }
    t = oncetd_1_0(t_8, t);
    u_32 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, u_32);
  }
  return(t);
}
ATerm ListMatch_0_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_32;
  {
    ATerm u_8 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm l_43 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) l_43) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm m_43 = ATgetArgument(t, 1);
            if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
              {
                ATerm n_43 = ATgetFirst((ATermList) m_43);
                if(match_cons(n_43, sym_Var_1))
                  {
                    ATerm s_43 = ATgetArgument(n_43, 0);
                    if(match_cons(s_43, sym_ListVar_1))
                      {
                        if(((w_32 != NULL) && (w_32 != ATgetArgument(s_43, 0))))
                          _fail(ATgetArgument(s_43, 0));
                        else
                          w_32 = ATgetArgument(s_43, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm o_43 = (ATerm) ATgetNext((ATermList) m_43);
                  if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
                    {
                      ATerm t_43 = ATgetFirst((ATermList) o_43);
                      if(match_cons(t_43, sym_Op_2))
                        {
                          ATerm w_43 = ATgetArgument(t_43, 0);
                          if((ATgetSymbol((ATermAppl) w_43) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm y_43 = ATgetArgument(t_43, 1);
                            if(((ATgetType(y_43) != AT_LIST) || !(ATisEmpty(y_43))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_43 = (ATerm) ATgetNext((ATermList) o_43);
                        if(((ATgetType(v_43) != AT_LIST) || !(ATisEmpty(v_43))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_32));
      return(t);
    }
    t = oncetd_1_0(u_8, t);
    x_32 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, x_32);
  }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm a_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm v_8 (ATerm t)
        {
          ATerm d_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_0, t);
              ;
              LocalPopChoice(e_44);
            }
          else
            {
              t = d_44;
            }
          return(t);
        }
        t = Cons_2_0(_id, v_8, t);
      }
      ;
      LocalPopChoice(c_44);
    }
  else
    {
      t = a_44;
      {
        ATerm w_8 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, w_8, t);
      }
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm n_34 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_44), term_i_44));
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, p_34, term_i_44);
      ;
      LocalPopChoice(k_44);
    }
  else
    {
      t = j_44;
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm a_35 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_35, term_i_44);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_35 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, c_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_44), term_i_44));
      ;
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm n_35 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_44), term_i_44));
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm o_44 = t;
  int p_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_35 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, p_35, term_i_44);
      ;
      LocalPopChoice(p_44);
    }
  else
    {
      t = o_44;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,k_33 = NULL,l_33 = NULL,q_33 = NULL,r_33 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_33, r_33);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_33 = ATgetArgument(t, 0);
          t = q_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_33 = ATgetFirst((ATermList) t);
              h_33 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_33, (ATerm) ATmakeAppl(sym_LChoices_1, h_33));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_44;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              q_33 = ATgetArgument(t, 0);
              t = q_33;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_33 = ATgetFirst((ATermList) t);
                  h_33 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_33, (ATerm) ATmakeAppl(sym_Choices_1, h_33));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_44;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  q_33 = ATgetArgument(t, 0);
                  t = q_33;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_33 = ATgetFirst((ATermList) t);
                      h_33 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_33, (ATerm) ATmakeAppl(sym_Seqs_1, h_33));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_34;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_33 = ATgetArgument(t, 0);
                      r_33 = ATgetArgument(t, 1);
                      l_33 = ATgetArgument(t, 2);
                      k_33 = ATgetArgument(t, 3);
                      {
                        ATerm l_34 = NULL,m_34 = NULL;
                        t = r_33;
                        t = map1_1_0(x_8, t);
                        l_34 = t;
                        t = l_33;
                        t = map1_1_0(y_8, t);
                        m_34 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_33, l_34, m_34, k_33);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          q_33 = ATgetArgument(t, 0);
                          r_33 = ATgetArgument(t, 1);
                          l_33 = ATgetArgument(t, 2);
                          k_33 = ATgetArgument(t, 3);
                          {
                            ATerm r_44 = t;
                            int s_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_34 = NULL,z_34 = NULL;
                                t = l_33;
                                t = map1_1_0(z_8, t);
                                y_34 = t;
                                t = r_33;
                                t = map_1_0(a_9, t);
                                z_34 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_33, z_34, y_34, k_33);
                                ;
                                LocalPopChoice(s_44);
                              }
                            else
                              {
                                t = r_44;
                                {
                                  ATerm k_35 = NULL,m_35 = NULL;
                                  t = r_33;
                                  t = map1_1_0(b_9, t);
                                  k_35 = t;
                                  t = l_33;
                                  t = map_1_0(d_9, t);
                                  m_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_33, k_35, m_35, k_33);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              q_33 = ATgetArgument(t, 0);
                              r_33 = ATgetArgument(t, 1);
                              l_33 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, r_33, (ATerm) ATmakeAppl(sym_Op_2, term_i_32, (ATerm) ATinsert(ATinsert(ATempty, l_33), q_33)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  q_33 = ATgetArgument(t, 0);
                                  r_33 = ATgetArgument(t, 1);
                                  l_33 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, l_33)), q_33), (ATerm) ATmakeAppl(sym_Build_1, r_33)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      q_33 = ATgetArgument(t, 0);
                                      r_33 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_33, (ATerm) ATmakeAppl(sym_Match_1, r_33));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          q_33 = ATgetArgument(t, 0);
                                          r_33 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_33), r_33);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              q_33 = ATgetArgument(t, 0);
                                              r_33 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_33), q_33);
                                        }
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
ATerm repeat_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm g_36 (ATerm t)
  {
    ATerm v_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_112(t);
        t = g_36(t);
        ;
        LocalPopChoice(x_44);
      }
    else
      {
        t = v_44;
      }
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm b_45 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(f_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_45;
    }
  return(t);
}
ATerm Con_3_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,k_36 = NULL,l_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
      o_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_36);
  h_36 = t;
  t = k_36;
  t = h_100(t);
  p_36 = t;
  t = l_36;
  t = i_100(t);
  q_36 = t;
  t = o_36;
  t = j_100(t);
  r_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, p_36, q_36, r_36), h_36);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm f_45 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_9, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_45;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,d_37 = NULL,e_37 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      a_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_37;
  if(match_cons(t, sym_StratRule_3))
    {
      b_37 = ATgetArgument(t, 0);
      d_37 = ATgetArgument(t, 1);
      e_37 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_37), (ATerm) ATmakeAppl(sym_Where_1, e_37)), b_37));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          b_37 = ATgetArgument(t, 0);
          d_37 = ATgetArgument(t, 1);
          e_37 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_37;
      t = pureterm_0_0(t);
      t = d_37;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, d_37)), (ATerm) ATmakeAppl(sym_Where_1, e_37)), (ATerm) ATmakeAppl(sym_Match_1, b_37)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,x_37 = NULL,y_37 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm g_45 = ATgetArgument(t, 0);
      if(match_cons(g_45, sym_Rule_3))
        {
          l_37 = ATgetArgument(g_45, 0);
          m_37 = ATgetArgument(g_45, 1);
          n_37 = ATgetArgument(g_45, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  o_37 = t;
  t = l_37;
  {
    ATerm m_9 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm h_45 = ATgetArgument(t, 0);
          if(match_cons(h_45, sym_Var_1))
            {
              if(((q_37 != NULL) && (q_37 != ATgetArgument(h_45, 0))))
                _fail(ATgetArgument(h_45, 0));
              else
                q_37 = ATgetArgument(h_45, 0);
            }
          else
            _fail(t);
          if(((p_37 != NULL) && (p_37 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_37 = ATgetArgument(t, 1);
          {
            ATerm i_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_37));
      return(t);
    }
    t = oncetd_1_0(m_9, t);
    r_37 = t;
    t = m_37;
    {
      ATerm n_9 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm j_45 = ATgetArgument(t, 0);
            if(match_cons(j_45, sym_Var_1))
              {
                if(((q_37 != NULL) && (q_37 != ATgetArgument(j_45, 0))))
                  _fail(ATgetArgument(j_45, 0));
                else
                  q_37 = ATgetArgument(j_45, 0);
              }
            else
              _fail(t);
            if(((s_37 != NULL) && (s_37 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              s_37 = ATgetArgument(t, 1);
            {
              ATerm l_45 = ATgetArgument(t, 2);
              if(match_cons(l_45, sym_CallT_3))
                {
                  if(((x_37 != NULL) && (x_37 != ATgetArgument(l_45, 0))))
                    _fail(ATgetArgument(l_45, 0));
                  else
                    x_37 = ATgetArgument(l_45, 0);
                  {
                    ATerm m_45 = ATgetArgument(l_45, 1);
                    if(((ATgetType(m_45) != AT_LIST) || !(ATisEmpty(m_45))))
                      _fail(t);
                  }
                  {
                    ATerm n_45 = ATgetArgument(l_45, 2);
                    if(((ATgetType(n_45) != AT_LIST) || !(ATisEmpty(n_45))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_37);
        return(t);
      }
      t = oncetd_1_0(n_9, t);
      y_37 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_37), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, r_37, y_37, (ATerm) ATmakeAppl(sym_Seq_2, n_37, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(x_37), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_37), not_null(s_37), term_f_34))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_37)), (ATerm) ATmakeAppl(sym_Var_1, o_37))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_45 = t;
      int s_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(s_45);
        }
      else
        {
          t = q_45;
          {
            ATerm u_45 = t;
            int w_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(w_45);
              }
            else
              {
                t = u_45;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(p_45);
    }
  else
    {
      t = o_45;
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm a_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_38 = NULL;
      if(match_cons(t, sym_ListVar_1))
        {
          i_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_38;
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = a_46;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_38;
  t = map_1_0(o_9, t);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_38, e_38);
  return(t);
}
ATerm topdown_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  t = p_113(t);
  {
    ATerm p_9 (ATerm t)
    {
      t = topdown_1_0(p_113, t);
      return(t);
    }
    t = SRTS_all(p_9, t);
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm l_40 = NULL;
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_40 = ATgetArgument(t, 0);
          {
            ATerm h_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_46);
      t = l_40;
    }
  else
    {
      t = f_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_40;
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm q_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_40);
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm k_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_46);
    }
  else
    {
      t = k_46;
      {
        ATerm s_40 = NULL,u_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_40 = ATgetArgument(t, 0);
            t = s_40;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm m_46 = t;
            int n_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm o_46 = ATgetArgument(t, 0);
                    ATerm p_46 = ATgetArgument(t, 1);
                    u_40 = ATgetArgument(t, 2);
                    {
                      ATerm q_46 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(n_46);
                t = u_40;
                t = map_1_0(w_9, t);
              }
            else
              {
                t = m_46;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm r_46 = ATgetArgument(t, 0);
                    ATerm s_46 = ATgetArgument(t, 1);
                    u_40 = ATgetArgument(t, 2);
                    {
                      ATerm t_46 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_40;
                t = map_1_0(y_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm h_41 = NULL;
  ATerm u_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_41 = ATgetArgument(t, 0);
          {
            ATerm w_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_46);
      t = h_41;
    }
  else
    {
      t = u_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_41;
    }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm r_41 = NULL;
  ATerm x_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_41 = ATgetArgument(t, 0);
          {
            ATerm z_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_46);
      t = r_41;
    }
  else
    {
      t = x_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_41;
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm d_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_42);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_47);
    }
  else
    {
      t = a_47;
      {
        ATerm f_42 = NULL,h_42 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_42 = ATgetArgument(t, 0);
            t = f_42;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm c_47 = t;
            int d_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm e_47 = ATgetArgument(t, 0);
                    ATerm f_47 = ATgetArgument(t, 1);
                    h_42 = ATgetArgument(t, 2);
                    {
                      ATerm g_47 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(d_47);
                t = h_42;
                t = map_1_0(c_10, t);
              }
            else
              {
                t = c_47;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm h_47 = ATgetArgument(t, 0);
                    ATerm i_47 = ATgetArgument(t, 1);
                    h_42 = ATgetArgument(t, 2);
                    {
                      ATerm j_47 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = h_42;
                t = map_1_0(e_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm n_42 = NULL;
  ATerm k_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_42 = ATgetArgument(t, 0);
          {
            ATerm m_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_47);
      t = n_42;
    }
  else
    {
      t = k_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_42;
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm v_42 = NULL;
  ATerm n_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_42 = ATgetArgument(t, 0);
          {
            ATerm p_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_47);
      t = v_42;
    }
  else
    {
      t = n_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_42;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm a_39 = NULL,c_39 = NULL,d_39 = NULL,f_39 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
      f_39 = ATgetArgument(t, 2);
      a_39 = ATgetArgument(t, 3);
      {
        ATerm m_39 = NULL,r_39 = NULL,u_39 = NULL;
        t = f_39;
        t = map_1_0(q_9, t);
        m_39 = t;
        t = a_39;
        t = free_vars_3_0(t_9, v_9, tboundin_3_0, t);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_39, m_39);
        t = diff_0_0(t);
        u_39 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, c_39, d_39, f_39, (ATerm) ATmakeAppl(sym_Scope_2, u_39, a_39));
      }
    }
  else
    {
      ATerm c_42 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          c_39 = ATgetArgument(t, 0);
          d_39 = ATgetArgument(t, 1);
          f_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_39;
      t = free_vars_3_0(a_10, b_10, tboundin_3_0, t);
      c_42 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_39, d_39, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, c_42, f_39));
    }
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm u_43 = NULL;
  ATerm q_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_43 = ATgetArgument(t, 0);
          {
            ATerm s_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_47);
      t = u_43;
    }
  else
    {
      t = q_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_43;
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm x_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_43);
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm y_47 = t;
  int z_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_47);
    }
  else
    {
      t = y_47;
      {
        ATerm z_43 = NULL,b_44 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_43 = ATgetArgument(t, 0);
            t = z_43;
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
                    b_44 = ATgetArgument(t, 2);
                    {
                      ATerm e_48 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(b_48);
                t = b_44;
                t = map_1_0(n_10, t);
              }
            else
              {
                t = a_48;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm f_48 = ATgetArgument(t, 0);
                    ATerm g_48 = ATgetArgument(t, 1);
                    b_44 = ATgetArgument(t, 2);
                    {
                      ATerm j_48 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_44;
                t = map_1_0(p_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm h_44 = NULL;
  ATerm k_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_44 = ATgetArgument(t, 0);
          {
            ATerm n_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_48);
      t = h_44;
    }
  else
    {
      t = k_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_44;
    }
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm n_44 = NULL;
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_44 = ATgetArgument(t, 0);
          {
            ATerm v_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_48);
      t = n_44;
    }
  else
    {
      t = o_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_44;
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm u_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_44);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm y_48 = t;
  int z_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_48);
    }
  else
    {
      t = y_48;
      {
        ATerm w_44 = NULL,y_44 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_44 = ATgetArgument(t, 0);
            t = w_44;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm a_49 = t;
            int b_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm c_49 = ATgetArgument(t, 0);
                    ATerm d_49 = ATgetArgument(t, 1);
                    y_44 = ATgetArgument(t, 2);
                    {
                      ATerm e_49 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(b_49);
                t = y_44;
                t = map_1_0(s_10, t);
              }
            else
              {
                t = a_49;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm k_49 = ATgetArgument(t, 0);
                    ATerm w_49 = ATgetArgument(t, 1);
                    y_44 = ATgetArgument(t, 2);
                    {
                      ATerm f_50 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_44;
                t = map_1_0(a_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm e_45 = NULL;
  ATerm j_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_45 = ATgetArgument(t, 0);
          {
            ATerm l_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_50);
      t = e_45;
    }
  else
    {
      t = j_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_45;
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm k_45 = NULL;
  ATerm m_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_45 = ATgetArgument(t, 0);
          {
            ATerm o_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_50);
      t = k_45;
    }
  else
    {
      t = m_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_45;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm g_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      i_43 = ATgetArgument(t, 0);
      j_43 = ATgetArgument(t, 1);
      k_43 = ATgetArgument(t, 2);
      g_43 = ATgetArgument(t, 3);
      {
        ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
        t = k_43;
        t = map_1_0(g_10, t);
        p_43 = t;
        t = g_43;
        t = free_vars_3_0(i_10, k_10, tboundin_3_0, t);
        q_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_43, p_43);
        t = diff_0_0(t);
        r_43 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_43, j_43, k_43, (ATerm) ATmakeAppl(sym_Scope_2, r_43, (ATerm) ATmakeAppl(sym_SRule_1, g_43)));
      }
    }
  else
    {
      ATerm t_44 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          i_43 = ATgetArgument(t, 0);
          j_43 = ATgetArgument(t, 1);
          k_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_43;
      t = free_vars_3_0(q_10, r_10, tboundin_3_0, t);
      t_44 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, i_43, j_43, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, t_44, (ATerm) ATmakeAppl(sym_SRule_1, k_43)));
    }
  return(t);
}
ATerm y_45 (ATerm r_45, ATerm t)
{
  ATerm b_12 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue)), r_45);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_12 = ATgetFirst((ATermList) t);
      {
        ATerm p_50 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_12;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_50) != ATmakeSymbol("s_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_e_32;
  return(t);
}
ATerm z_45 (ATerm t_45, ATerm t)
{
  ATerm j_12 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue)), t_45);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_12 = ATgetFirst((ATermList) t);
      {
        ATerm r_50 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_12;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm s_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_50) != ATmakeSymbol("p_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_e_32;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm v_45 = NULL,x_45 = NULL;
  v_45 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_50 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_45;
  if(match_int(t, 0))
    {
      ATerm u_50 = t;
      int v_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_45(v_45, t);
          ;
          LocalPopChoice(v_50);
        }
      else
        {
          t = u_50;
          t = z_45(v_45, t);
        }
    }
  else
    {
      t = y_45(v_45, t);
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_50 = t;
    int y_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(x_12, y_12);
        ;
        LocalPopChoice(y_50);
      }
    else
      {
        t = x_50;
        t = SSL_addr(x_12, y_12);
      }
  }
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_a_51;
  return(t);
}
ATerm n_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      a_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_12, a_13);
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_51 = ATgetArgument(t, 0);
      if(match_cons(b_51, sym__2))
        {
          b_13 = ATgetArgument(b_51, 0);
          d_13 = ATgetArgument(b_51, 1);
        }
      else
        _fail(t);
      {
        ATerm f_51 = ATgetArgument(t, 1);
        if(match_cons(f_51, sym__2))
          {
            c_13 = ATgetArgument(f_51, 0);
            e_13 = ATgetArgument(f_51, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_13), b_13), (ATerm) ATinsert(CheckATermList(e_13), d_13));
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm f_13 = NULL;
  t = new_0_0(t);
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, f_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_44), term_i_44)), f_13);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_13), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_a_51;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  u_47 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      v_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_47;
  if(match_cons(t, sym_FunType_2))
    {
      x_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
      {
        ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
        t = x_47;
        t = foldr_3_0(g_11, h_11, k_11, t);
        t_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_47, t_12);
        {
          ATerm g_51 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_51;
            }
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_47, t_12), term_l_51);
          t = assert_1_0(l_11, t);
          t = x_47;
          t = genzip_4_0(n_11, t_11, u_11, v_11, t);
          if(match_cons(t, sym__2))
            {
              u_12 = ATgetArgument(t, 0);
              v_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_12;
          t = map_1_0(x_11, t);
          w_12 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, v_47, u_12, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, v_47, w_12));
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm m_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_47, term_w_50);
      {
        ATerm o_51 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_51;
          }
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_47, term_w_50), term_q_51);
        t = assert_1_0(y_11, t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, v_47, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, v_47, (ATerm) ATempty));
      }
    }
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_a_51;
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = filter_1_0(g_12, t);
  t = concat_0_0(t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm t_48 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_48;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm s_51 = t;
  int t_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RDtoSD_0_0(t);
      ;
      LocalPopChoice(t_51);
    }
  else
    {
      t = s_51;
      t = DeclareVariables_0_0(t);
    }
  t = topdown_1_0(i_12, t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm u_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_48 = NULL,x_48 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          w_48 = ATgetArgument(t, 0);
          x_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_CallT_3, w_48, x_48, (ATerm) ATempty);
      ;
      LocalPopChoice(w_51);
    }
  else
    {
      t = u_51;
    }
  return(t);
}
ATerm RulesToSdefs_0_0 (ATerm t)
{
  ATerm i_48 = NULL,l_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_51 = ATgetArgument(t, 0);
      if(((ATgetType(x_51) == AT_LIST) && !(ATisEmpty(x_51))))
        {
          ATerm y_51 = ATgetFirst((ATermList) x_51);
          if(match_cons(y_51, sym_Signature_1))
            {
              i_48 = ATgetArgument(y_51, 0);
            }
          else
            _fail(t);
          {
            ATerm z_51 = (ATerm) ATgetNext((ATermList) x_51);
            if(((ATgetType(z_51) == AT_LIST) && !(ATisEmpty(z_51))))
              {
                ATerm a_52 = ATgetFirst((ATermList) z_51);
                if(match_cons(a_52, sym_Strategies_1))
                  {
                    l_48 = ATgetArgument(a_52, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm c_52 = (ATerm) ATgetNext((ATermList) z_51);
                  if(((ATgetType(c_52) != AT_LIST) || !(ATisEmpty(c_52))))
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
  t = i_48;
  t = scope_2_0(e_12, f_12, t);
  q_48 = t;
  t = (ATerm) ATinsert(CheckATermList(l_48), (ATerm) ATmakeAppl(sym_RDefT_4, term_d_52, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_g_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_44), term_i_44))), (ATerm) ATmakeAppl(sym_VarDec_2, term_e_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_44), term_i_44))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_r_52, term_c_53, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_s_53), term_m_53)))));
  t = map_1_0(h_12, t);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
  {
    ATerm t_53 = t;
    int v_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_53 = ATgetArgument(t, 0);
            ATerm c_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_48;
        {
          ATerm k_12 (ATerm t)
          {
            t = r_48;
            return(t);
          }
          t = at_end_1_0(k_12, t);
        }
        ;
        LocalPopChoice(v_53);
      }
    else
      {
        t = t_53;
        {
          ATerm u_13 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_48, r_48));
          if(match_cons(t, sym__2))
            {
              ATerm e_54 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_54) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_13;
          t = concat_0_0(t);
        }
      }
    s_48 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, s_48)), (ATerm) ATmakeAppl(sym_Signature_1, i_48)));
  }
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  if(match_cons(t, sym__2))
    {
      m_49 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_49, n_49);
        ;
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        t = SSL_addr(m_49, n_49);
      }
  }
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,l_49 = NULL,y_13 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_13 = ATgetFirst((ATermList) t);
      {
        ATerm j_54 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_13;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm k_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_54) != ATmakeSymbol("d_2", 0, ATtrue)))
        _fail(t);
      h_49 = ATgetArgument(t, 1);
      i_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_49;
  t = foldr_3_0(l_12, m_12, n_12, t);
  l_49 = t;
  t = SSL_int_to_string(l_49);
  j_49 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue))), j_49), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), f_49), (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue))), i_49), (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue))), h_49), (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym_Op_2, f_49, g_49);
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym__2))
    {
      o_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_49, p_49, (ATerm) ATempty);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm q_49 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm m_54 = ATgetArgument(t, 0);
      if(((ATgetType(m_54) != AT_INT) || (ATgetInt((ATermInt) m_54) != 0)))
        _fail(t);
      {
        ATerm p_54 = ATgetArgument(t, 1);
      }
      q_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_49;
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,x_49 = NULL,y_49 = NULL;
  if(match_cons(t, sym__3))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
      x_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_49, term_z_50);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, s_49, term_z_50);
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(s_49, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(r_54);
      }
    else
      {
        t = q_54;
        t = SSL_subtr(s_49, (ATerm) ATmakeInt(1));
      }
    y_49 = t;
    t = (ATerm) ATmakeAppl(sym__3, y_49, t_49, (ATerm) ATinsert(CheckATermList(x_49), t_49));
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(o_12, p_12, q_12, t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_54 = t;
    int u_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_50, e_50);
        ;
        LocalPopChoice(u_54);
      }
    else
      {
        t = t_54;
        t = SSL_addr(d_50, e_50);
      }
  }
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_v_54;
  return(t);
}
ATerm CheckTuple_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      ATerm w_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_49;
  t = foldr_3_0(s_12, h_13, j_13, t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_50, term_y_54);
  t = copy_0_0(t);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, b_50, term_y_54));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm a_55 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_50 = NULL,c_14 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_14 = ATgetFirst((ATermList) t);
            {
              ATerm c_55 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_14;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_55) != ATmakeSymbol("a_2", 0, ATtrue)))
              _fail(t);
            g_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_50;
        ;
        LocalPopChoice(b_55);
      }
    else
      {
        t = a_55;
        t = (ATerm) ATempty;
      }
    c_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_55, (ATerm) ATinsert(CheckATermList(c_50), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, b_50, term_y_54)))));
    t = assert_1_0(k_13, t);
    t = (ATerm) ATmakeAppl(sym_Op_2, term_i_32, z_49);
  }
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(t_14, u_14);
        ;
        LocalPopChoice(h_55);
      }
    else
      {
        t = f_55;
        t = SSL_addr(t_14, u_14);
      }
  }
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_15, k_15);
        ;
        LocalPopChoice(k_55);
      }
    else
      {
        t = i_55;
        t = SSL_addr(j_15, k_15);
      }
  }
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  if(match_cons(t, sym_Op_2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,b_15 = NULL;
        t = e_51;
        t = foldr_3_0(l_13, m_13, n_13, t);
        s_14 = t;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, d_51, (ATerm) ATmakeAppl(sym_Keys_1, s_14)));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_15 = ATgetFirst((ATermList) t);
            {
              ATerm s_55 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_15;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm v_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_55) != ATmakeSymbol("x_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, d_51, (ATerm) ATempty);
        ;
        LocalPopChoice(r_55);
      }
    else
      {
        t = p_55;
        {
          ATerm i_15 = NULL,r_15 = NULL;
          t = e_51;
          t = foldr_3_0(o_13, p_13, q_13, t);
          i_15 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, d_51, (ATerm) ATmakeAppl(sym_Keys_1, i_15)));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_15 = ATgetFirst((ATermList) t);
              {
                ATerm y_55 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = r_15;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm c_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_56) != ATmakeSymbol("u_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, d_51, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  ATerm i_51 (ATerm t)
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 (ATerm t)
        {
          ATerm k_56 = t;
          int l_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_51(t);
              ;
              LocalPopChoice(l_56);
            }
          else
            {
              t = k_56;
            }
          return(t);
        }
        t = b_116(t);
        t = SRTS_all(r_13, t);
        ;
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        t = SRTS_some(i_51, t);
      }
    return(t);
  }
  t = i_51(t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_m_56;
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = term_m_56;
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm n_56 = t;
  if((PushChoice() == 0))
    {
      ATerm o_56 = t;
      int p_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = CheckCons_0_0(t);
          ;
          LocalPopChoice(p_56);
        }
      else
        {
          t = o_56;
          t = CheckTuple_0_0(t);
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_56;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  ATerm t_13 (ATerm t)
  {
    ATerm n_51 = NULL;
    n_51 = t;
    t = j_142(t);
    if(((k_51 != NULL) && (k_51 != t)))
      _fail(t);
    else
      k_51 = t;
    t = k_142(t);
    if(((j_51 != NULL) && (j_51 != t)))
      _fail(t);
    else
      j_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_56, (ATerm) ATmakeAppl(sym_Defined_3, term_u_56, not_null(j_51), not_null(k_51)));
    t = assert_1_0(w_13, t);
    t = n_51;
    t = manytd_1_0(x_13, t);
    return(t);
  }
  t = scope_2_0(s_13, t_13, t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_v_56;
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_w_56;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm r_51 = NULL,v_51 = NULL;
  ATerm b_57 = t;
  int c_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_51 = ATgetArgument(t, 0);
          {
            ATerm d_57 = ATgetArgument(t, 1);
          }
          v_51 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(c_57);
      t = v_51;
      {
        ATerm z_13 (ATerm t)
        {
          t = r_51;
          return(t);
        }
        t = check_constructors_p__2_0(z_13, a_14, t);
      }
    }
  else
    {
      t = b_57;
      if(match_cons(t, sym_RDef_3))
        {
          r_51 = ATgetArgument(t, 0);
          {
            ATerm e_57 = ATgetArgument(t, 1);
          }
          v_51 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_51;
      {
        ATerm b_14 (ATerm t)
        {
          t = r_51;
          return(t);
        }
        t = check_constructors_p__2_0(b_14, d_14, t);
      }
    }
  return(t);
}
ATerm e_14 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  if(match_cons(t, sym__2))
    {
      p_52 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_52, q_52);
        ;
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = SSL_addr(p_52, q_52);
      }
  }
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm h_14 (ATerm t)
{
  t = term_h_57;
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_h_57;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm f_52 = NULL,h_52 = NULL,j_52 = NULL,k_52 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      h_52 = ATgetArgument(t, 0);
      j_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_52;
  if(match_cons(t, sym_FunType_2))
    {
      k_52 = ATgetArgument(t, 0);
      f_52 = ATgetArgument(t, 1);
      {
        ATerm o_52 = NULL;
        t = k_52;
        t = foldr_3_0(e_14, f_14, g_14, t);
        o_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, h_52, (ATerm) ATmakeAppl(sym_Keys_1, o_52)), term_j_57);
        t = assert_1_0(h_14, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_52, (ATerm) ATmakeAppl(sym_FunType_2, k_52, f_52));
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          k_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, h_52, term_k_57), term_m_57);
      t = assert_1_0(j_14, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, h_52, (ATerm) ATmakeAppl(sym_ConstType_1, k_52));
    }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm n_57 = ATgetArgument(t, 0);
      if(((ATgetType(n_57) == AT_LIST) && !(ATisEmpty(n_57))))
        {
          ATerm p_57 = ATgetFirst((ATermList) n_57);
          if(match_cons(p_57, sym_Signature_1))
            {
              ATerm r_57 = ATgetArgument(p_57, 0);
              if(((ATgetType(r_57) == AT_LIST) && !(ATisEmpty(r_57))))
                {
                  ATerm w_57 = ATgetFirst((ATermList) r_57);
                  if(match_cons(w_57, sym_Constructors_1))
                    {
                      u_52 = ATgetArgument(w_57, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_57 = (ATerm) ATgetNext((ATermList) r_57);
                    if(((ATgetType(y_57) != AT_LIST) || !(ATisEmpty(y_57))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm q_57 = (ATerm) ATgetNext((ATermList) n_57);
            if(((ATgetType(q_57) == AT_LIST) && !(ATisEmpty(q_57))))
              {
                ATerm z_57 = ATgetFirst((ATermList) q_57);
                if(match_cons(z_57, sym_Strategies_1))
                  {
                    v_52 = ATgetArgument(z_57, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm a_58 = (ATerm) ATgetNext((ATermList) q_57);
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
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(u_52), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_54), term_y_54))), term_d_58);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = v_52;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm f_58 = t;
    int g_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_52 = NULL,v_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_15 = ATgetFirst((ATermList) t);
            {
              ATerm i_58 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_15;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_58 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_58) != ATmakeSymbol("a_2", 0, ATtrue)))
              _fail(t);
            y_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_52;
        ;
        LocalPopChoice(g_58);
      }
    else
      {
        t = f_58;
        t = (ATerm) ATempty;
      }
    w_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_52, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(u_52), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_54), term_y_54))), term_d_58));
    {
      ATerm k_58 = t;
      int l_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_58 = ATgetArgument(t, 0);
              ATerm n_58 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_52;
          {
            ATerm k_14 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(u_52), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_y_54), term_y_54), term_y_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_i_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_54), term_y_54))), term_d_58);
              return(t);
            }
            t = at_end_1_0(k_14, t);
          }
          ;
          LocalPopChoice(l_58);
        }
      else
        {
          t = k_58;
          {
            ATerm a_16 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_52, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(u_52), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue))))))));
            if(match_cons(t, sym__2))
              {
                ATerm o_58 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_58) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                a_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_16;
            t = concat_0_0(t);
          }
        }
      x_52 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, v_52)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, x_52)))));
    }
  }
  return(t);
}
ATerm m_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_58 = ATgetArgument(t, 0);
      if(((ATgetType(p_58) != AT_LIST) || !(ATisEmpty(p_58))))
        _fail(t);
      {
        ATerm q_58 = ATgetArgument(t, 1);
        if(((ATgetType(q_58) != AT_LIST) || !(ATisEmpty(q_58))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_58 = ATgetArgument(t, 0);
      if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
        {
          g_53 = ATgetFirst((ATermList) r_58);
          i_53 = (ATerm) ATgetNext((ATermList) r_58);
        }
      else
        _fail(t);
      {
        ATerm s_58 = ATgetArgument(t, 1);
        if(((ATgetType(s_58) == AT_LIST) && !(ATisEmpty(s_58))))
          {
            h_53 = ATgetFirst((ATermList) s_58);
            j_53 = (ATerm) ATgetNext((ATermList) s_58);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_53, h_53), (ATerm) ATmakeAppl(sym__2, i_53, j_53));
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL;
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_53), k_53);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm n_53 = NULL,p_53 = NULL,q_53 = NULL;
  if(match_cons(t, sym__2))
    {
      n_53 = ATgetArgument(t, 0);
      q_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_53;
  {
    ATerm v_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_58);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_53);
      }
    else
      {
        t = v_58;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_59 = ATgetArgument(t, 0);
            p_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_53, p_53);
      }
  }
  return(t);
}
ATerm r_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_59 = ATgetArgument(t, 0);
      if(((ATgetType(g_59) != AT_LIST) || !(ATisEmpty(g_59))))
        _fail(t);
      {
        ATerm h_59 = ATgetArgument(t, 1);
        if(((ATgetType(h_59) != AT_LIST) || !(ATisEmpty(h_59))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm u_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_59 = ATgetArgument(t, 0);
      if(((ATgetType(i_59) == AT_LIST) && !(ATisEmpty(i_59))))
        {
          u_53 = ATgetFirst((ATermList) i_59);
          x_53 = (ATerm) ATgetNext((ATermList) i_59);
        }
      else
        _fail(t);
      {
        ATerm j_59 = ATgetArgument(t, 1);
        if(((ATgetType(j_59) == AT_LIST) && !(ATisEmpty(j_59))))
          {
            w_53 = ATgetFirst((ATermList) j_59);
            y_53 = (ATerm) ATgetNext((ATermList) j_59);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_53, w_53), (ATerm) ATmakeAppl(sym__2, x_53, y_53));
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  if(match_cons(t, sym__2))
    {
      a_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_54), a_54);
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm d_54 = NULL,f_54 = NULL,g_54 = NULL;
  if(match_cons(t, sym__2))
    {
      d_54 = ATgetArgument(t, 0);
      g_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_54;
  {
    ATerm k_59 = t;
    int l_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_59);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_54);
      }
    else
      {
        t = k_59;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_60 = ATgetArgument(t, 0);
            f_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_54, f_54);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm u_141 (ATerm), ATerm t)
{
  ATerm d_60 = t;
  int f_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(u_141, _id, t);
      ;
      LocalPopChoice(f_60);
    }
  else
    {
      t = d_60;
      {
        ATerm g_60 = t;
        int h_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_14 (ATerm t)
            {
              ATerm b_16 = NULL,d_16 = NULL;
              b_16 = t;
              t = u_141(t);
              d_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_16, d_16);
              t = genzip_4_0(m_14, n_14, o_14, p_14, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, l_14, _id, t);
            ;
            LocalPopChoice(h_60);
          }
        else
          {
            t = g_60;
            {
              ATerm q_14 (ATerm t)
              {
                ATerm h_16 = NULL,j_16 = NULL;
                h_16 = t;
                t = u_141(t);
                j_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_16, j_16);
                t = genzip_4_0(r_14, v_14, w_14, x_14, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, q_14, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm o_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_54);
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm i_60 = t;
  int k_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_60);
    }
  else
    {
      t = i_60;
      {
        ATerm l_60 = t;
        int m_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(m_60);
          }
        else
          {
            t = l_60;
            {
              ATerm s_54 = NULL;
              ATerm o_60 = t;
              int p_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm q_60 = ATgetArgument(t, 0);
                      ATerm r_60 = ATgetArgument(t, 1);
                      s_54 = ATgetArgument(t, 2);
                      {
                        ATerm t_60 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_60);
                  t = s_54;
                  t = map_1_0(a_15, t);
                }
              else
                {
                  t = o_60;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm u_60 = ATgetArgument(t, 0);
                      ATerm v_60 = ATgetArgument(t, 1);
                      s_54 = ATgetArgument(t, 2);
                      {
                        ATerm w_60 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = s_54;
                  t = map_1_0(c_15, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm z_54 = NULL;
  ATerm x_60 = t;
  int z_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_54 = ATgetArgument(t, 0);
          {
            ATerm a_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_60);
      t = z_54;
    }
  else
    {
      t = x_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_54;
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm g_55 = NULL;
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_55 = ATgetArgument(t, 0);
          {
            ATerm d_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_61);
      t = g_55;
    }
  else
    {
      t = b_61;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm n_54 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      n_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_54;
  t = free_vars_3_0(y_14, z_14, tboundin_3_0, t);
  return(t);
}
ATerm DistBinding_2_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_55 = NULL,l_55 = NULL,m_55 = NULL;
  if(match_cons(t, sym__3))
    {
      j_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
      m_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_55;
  {
    ATerm d_15 (ATerm t)
    {
      ATerm n_55 = NULL;
      n_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_55, m_55);
      t = f_139(t);
      return(t);
    }
    ATerm e_15 (ATerm t)
    {
      ATerm o_55 = NULL;
      o_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_55, l_55);
      t = f_139(t);
      return(t);
    }
    t = g_139(d_15, e_15, _id, t);
  }
  return(t);
}
ATerm f_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_61 = ATgetArgument(t, 0);
      if(((ATgetType(f_61) != AT_LIST) || !(ATisEmpty(f_61))))
        _fail(t);
      {
        ATerm g_61 = ATgetArgument(t, 1);
        if(((ATgetType(g_61) != AT_LIST) || !(ATisEmpty(g_61))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm b_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_61 = ATgetArgument(t, 0);
      if(((ATgetType(h_61) == AT_LIST) && !(ATisEmpty(h_61))))
        {
          b_56 = ATgetFirst((ATermList) h_61);
          e_56 = (ATerm) ATgetNext((ATermList) h_61);
        }
      else
        _fail(t);
      {
        ATerm i_61 = ATgetArgument(t, 1);
        if(((ATgetType(i_61) == AT_LIST) && !(ATisEmpty(i_61))))
          {
            d_56 = ATgetFirst((ATermList) i_61);
            f_56 = (ATerm) ATgetNext((ATermList) i_61);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_56, d_56), (ATerm) ATmakeAppl(sym__2, e_56, f_56));
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL;
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_56), g_56);
  return(t);
}
ATerm RnBinding_2_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_55 = NULL,t_55 = NULL,u_55 = NULL,w_55 = NULL,x_55 = NULL,z_55 = NULL,a_56 = NULL;
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      t_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_55;
  t = z_138(t);
  u_55 = t;
  t = map_1_0(new_0_0, t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_55, w_55);
  t = genzip_4_0(f_15, g_15, h_15, _id, t);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_55, t_55);
  {
    ATerm j_61 = t;
    int k_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_61 = ATgetArgument(t, 0);
            ATerm n_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_55;
        {
          ATerm l_15 (ATerm t)
          {
            t = t_55;
            return(t);
          }
          t = at_end_1_0(l_15, t);
        }
        ;
        LocalPopChoice(k_61);
      }
    else
      {
        t = j_61;
        {
          ATerm p_16 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, x_55, t_55));
          if(match_cons(t, sym__2))
            {
              ATerm o_61 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_61) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_16;
          t = concat_0_0(t);
        }
      }
    z_55 = t;
    t = q_55;
    {
      ATerm m_15 (ATerm t)
      {
        t = w_55;
        return(t);
      }
      t = a_139(m_15, t);
      a_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, a_56, t_55, z_55);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  if(match_cons(t, sym__2))
    {
      x_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_56;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_56 = ATgetFirst((ATermList) t);
      a_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_56;
  if(match_cons(t, sym__2))
    {
      s_56 = ATgetArgument(t, 0);
      t_56 = ATgetArgument(t, 1);
      {
        ATerm p_61 = t;
        int q_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_56;
            if((x_56 != t))
              {
                _fail(t);
              }
            t = t_56;
            ;
            LocalPopChoice(q_61);
          }
        else
          {
            t = p_61;
            t = (ATerm) ATmakeAppl(sym__2, x_56, a_57);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_56, a_57);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm o_57 (ATerm t)
  {
    ATerm r_61 = t;
    int t_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_118(t);
        ;
        LocalPopChoice(t_61);
      }
    else
      {
        t = r_61;
        {
          ATerm w_16 = NULL,x_16 = NULL;
          ATerm n_15 (ATerm t)
          {
            ATerm y_16 = NULL;
            y_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_16, not_null(x_16));
            t = o_57(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((w_16 != NULL) && (w_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_16 = ATgetArgument(t, 0);
              if(((x_16 != NULL) && (x_16 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                x_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(w_16);
          t = SRTS_all(n_15, t);
        }
      }
    return(t);
  }
  t = o_57(t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_61 = ATgetArgument(t, 0);
      if(((ATgetType(v_61) != AT_LIST) || !(ATisEmpty(v_61))))
        _fail(t);
      {
        ATerm w_61 = ATgetArgument(t, 1);
        if(((ATgetType(w_61) != AT_LIST) || !(ATisEmpty(w_61))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,w_58 = NULL,y_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_61 = ATgetArgument(t, 0);
      if(((ATgetType(x_61) == AT_LIST) && !(ATisEmpty(x_61))))
        {
          t_58 = ATgetFirst((ATermList) x_61);
          w_58 = (ATerm) ATgetNext((ATermList) x_61);
        }
      else
        _fail(t);
      {
        ATerm y_61 = ATgetArgument(t, 1);
        if(((ATgetType(y_61) == AT_LIST) && !(ATisEmpty(y_61))))
          {
            u_58 = ATgetFirst((ATermList) y_61);
            y_58 = (ATerm) ATgetNext((ATermList) y_61);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_58, u_58), (ATerm) ATmakeAppl(sym__2, w_58, y_58));
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL;
  if(match_cons(t, sym__2))
    {
      z_58 = ATgetArgument(t, 0);
      a_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_59), z_58);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm s_57 = NULL,u_57 = NULL,v_57 = NULL,x_57 = NULL;
  s_57 = t;
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_62 = ATgetArgument(t, 0);
            ATerm c_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_62);
        t = s_57;
      }
    else
      {
        t = z_61;
        {
          ATerm c_58 = NULL;
          if(match_cons(t, sym__3))
            {
              u_57 = ATgetArgument(t, 0);
              v_57 = ATgetArgument(t, 1);
              x_57 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_57, v_57);
          t = genzip_4_0(o_15, p_15, q_15, _id, t);
          c_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_58, x_57);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm (ATerm), ATerm), ATerm i_138 (ATerm), ATerm j_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_138 (ATerm (ATerm), ATerm), ATerm l_138 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,e_59 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_59, (ATerm) ATempty);
  {
    ATerm f_59 (ATerm t)
    {
      ATerm s_15 (ATerm t)
      {
        ATerm d_62 = t;
        int e_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_17 = NULL,b_17 = NULL;
            ATerm t_15 (ATerm t)
            {
              ATerm d_17 = NULL;
              d_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_17, not_null(b_17));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_17 = ATgetArgument(t, 0);
                if(((b_17 != NULL) && (b_17 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  b_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(a_17);
            t = h_138(t_15, t);
            ;
            LocalPopChoice(e_62);
          }
        else
          {
            t = d_62;
            {
              ATerm i_62 = t;
              int j_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_17 = NULL,l_17 = NULL,o_17 = NULL;
                  k_17 = t;
                  t = SSL_explode_term(k_17);
                  if(match_cons(t, sym__2))
                    {
                      ATerm n_62 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) n_62) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm s_62 = ATgetArgument(t, 1);
                        if(((ATgetType(s_62) == AT_LIST) && !(ATisEmpty(s_62))))
                          {
                            l_17 = ATgetFirst((ATermList) s_62);
                            {
                              ATerm w_62 = (ATerm) ATgetNext((ATermList) s_62);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = l_17;
                  t = g_138(t);
                  o_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_17, e_59);
                  t = lookup_0_0(t);
                  t = l_138(t);
                  ;
                  LocalPopChoice(j_62);
                }
              else
                {
                  t = i_62;
                  t = RnBinding_2_0(i_138, k_138, t);
                  t = DistBinding_2_0(f_59, j_138, t);
                }
            }
          }
        return(t);
      }
      t = env_alltd_1_0(s_15, t);
      return(t);
    }
    t = f_59(t);
  }
  return(t);
}
ATerm w_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_62 = ATgetArgument(t, 0);
      if(((ATgetType(x_62) != AT_LIST) || !(ATisEmpty(x_62))))
        _fail(t);
      {
        ATerm y_62 = ATgetArgument(t, 1);
        if(((ATgetType(y_62) != AT_LIST) || !(ATisEmpty(y_62))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_62 = ATgetArgument(t, 0);
      if(((ATgetType(z_62) == AT_LIST) && !(ATisEmpty(z_62))))
        {
          u_59 = ATgetFirst((ATermList) z_62);
          w_59 = (ATerm) ATgetNext((ATermList) z_62);
        }
      else
        _fail(t);
      {
        ATerm a_63 = ATgetArgument(t, 1);
        if(((ATgetType(a_63) == AT_LIST) && !(ATisEmpty(a_63))))
          {
            v_59 = ATgetFirst((ATermList) a_63);
            x_59 = (ATerm) ATgetNext((ATermList) a_63);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_59, v_59), (ATerm) ATmakeAppl(sym__2, w_59, x_59));
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL;
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_59), y_59);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm a_60 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_60;
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm b_63 = t;
  int f_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_63);
    }
  else
    {
      t = b_63;
      {
        ATerm c_60 = NULL,e_60 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_60 = ATgetArgument(t, 0);
            t = c_60;
            t = free_vars_3_0(f_16, g_16, tboundin_3_0, t);
          }
        else
          {
            ATerm h_63 = t;
            int i_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm j_63 = ATgetArgument(t, 0);
                    ATerm k_63 = ATgetArgument(t, 1);
                    e_60 = ATgetArgument(t, 2);
                    {
                      ATerm l_63 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(i_63);
                t = e_60;
                t = map_1_0(l_16, t);
              }
            else
              {
                t = h_63;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm q_63 = ATgetArgument(t, 0);
                    ATerm s_63 = ATgetArgument(t, 1);
                    e_60 = ATgetArgument(t, 2);
                    {
                      ATerm t_63 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = e_60;
                t = map_1_0(m_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm j_60 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_60);
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm z_63 = t;
  int a_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_64);
    }
  else
    {
      t = z_63;
      {
        ATerm b_64 = t;
        int c_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(c_64);
          }
        else
          {
            t = b_64;
            {
              ATerm n_60 = NULL;
              ATerm d_64 = t;
              int e_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm f_64 = ATgetArgument(t, 0);
                      ATerm g_64 = ATgetArgument(t, 1);
                      n_60 = ATgetArgument(t, 2);
                      {
                        ATerm h_64 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_64);
                  t = n_60;
                  t = map_1_0(i_16, t);
                }
              else
                {
                  t = d_64;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm i_64 = ATgetArgument(t, 0);
                      ATerm j_64 = ATgetArgument(t, 1);
                      n_60 = ATgetArgument(t, 2);
                      {
                        ATerm l_64 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = n_60;
                  t = map_1_0(k_16, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm s_60 = NULL;
  ATerm m_64 = t;
  int o_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_60 = ATgetArgument(t, 0);
          {
            ATerm p_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_64);
      t = s_60;
    }
  else
    {
      t = m_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_60;
    }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm y_60 = NULL;
  ATerm q_64 = t;
  int r_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_60 = ATgetArgument(t, 0);
          {
            ATerm s_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_64);
      t = y_60;
    }
  else
    {
      t = q_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_60;
    }
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm e_61 = NULL;
  ATerm t_64 = t;
  int u_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_61 = ATgetArgument(t, 0);
          {
            ATerm v_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_64);
      t = e_61;
    }
  else
    {
      t = t_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_61;
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm m_61 = NULL;
  ATerm w_64 = t;
  int x_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_61 = ATgetArgument(t, 0);
          {
            ATerm y_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_64);
      t = m_61;
    }
  else
    {
      t = w_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_61;
    }
  return(t);
}
ATerm ExpOverlay_1_0 (ATerm a_141 (ATerm), ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      n_59 = ATgetArgument(t, 0);
      o_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_141(t);
  {
    ATerm u_15 (ATerm t)
    {
      ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
      r_59 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((n_59 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          s_59 = ATgetArgument(t, 1);
          t_59 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_59, o_59);
      t = genzip_4_0(w_15, x_15, y_15, _id, t);
      if(((p_59 != NULL) && (p_59 != t)))
        _fail(t);
      else
        p_59 = t;
      t = t_59;
      if(((q_59 != NULL) && (q_59 != t)))
        _fail(t);
      else
        q_59 = t;
      t = r_59;
      return(t);
    }
    t = fetch_1_0(u_15, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_59), not_null(q_59));
    t = substitute_6_0(z_15, Var_1_0, c_16, tboundin_3_0, tpaste_1_0, _id, t);
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm s_61 = NULL,u_61 = NULL;
  ATerm a_65 = t;
  int b_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm c_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(b_65);
      t = term_f_34;
    }
  else
    {
      t = a_65;
      if(match_cons(t, sym_Real_1))
        {
          u_61 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_61));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_61 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_61));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  u_61 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_61));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      u_61 = ATgetArgument(t, 0);
                      s_61 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_65, (ATerm)ATinsert(ATinsert(ATempty, s_61), u_61), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          u_61 = ATgetArgument(t, 0);
                          s_61 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_61), s_61, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              u_61 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_61), (ATerm)ATempty, (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = map_1_0(trm_to_cong_0_0, t);
  return(t);
}
ATerm trm_to_cong_0_0 (ATerm t)
{
  ATerm e_65 = t;
  int f_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Op_2_0(_id, n_16, t);
      ;
      LocalPopChoice(f_65);
    }
  else
    {
      t = e_65;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm m_62 = NULL;
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_44), term_i_44));
  return(t);
}
ATerm Overlay_to_Congdef_0_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,k_62 = NULL,l_62 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      f_62 = ATgetArgument(t, 0);
      g_62 = ATgetArgument(t, 1);
      h_62 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_62;
  t = map_1_0(o_16, t);
  k_62 = t;
  t = h_62;
  t = trm_to_cong_0_0(t);
  l_62 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, f_62, k_62, l_62);
  return(t);
}
ATerm ExpandOverlays_0_0 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm g_65 = ATgetArgument(t, 0);
      if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
        {
          ATerm i_65 = ATgetFirst((ATermList) g_65);
          if(match_cons(i_65, sym_Signature_1))
            {
              o_62 = ATgetArgument(i_65, 0);
            }
          else
            _fail(t);
          {
            ATerm j_65 = (ATerm) ATgetNext((ATermList) g_65);
            if(((ATgetType(j_65) == AT_LIST) && !(ATisEmpty(j_65))))
              {
                ATerm k_65 = ATgetFirst((ATermList) j_65);
                if(match_cons(k_65, sym_Overlays_1))
                  {
                    p_62 = ATgetArgument(k_65, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm l_65 = (ATerm) ATgetNext((ATermList) j_65);
                  if(((ATgetType(l_65) == AT_LIST) && !(ATisEmpty(l_65))))
                    {
                      ATerm m_65 = ATgetFirst((ATermList) l_65);
                      if(match_cons(m_65, sym_Strategies_1))
                        {
                          q_62 = ATgetArgument(m_65, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_65 = (ATerm) ATgetNext((ATermList) l_65);
                        if(((ATgetType(v_65) != AT_LIST) || !(ATisEmpty(v_65))))
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
  t = p_62;
  {
    ATerm w_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_65 = t;
        if((PushChoice() == 0))
          {
            t = p_62;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_65;
          }
        t = p_62;
        {
          ATerm q_16 (ATerm t)
          {
            ATerm r_16 (ATerm t)
            {
              ATerm s_16 (ATerm t)
              {
                t = p_62;
                return(t);
              }
              t = ExpOverlay_1_0(s_16, t);
              return(t);
            }
            t = repeat_1_0(r_16, t);
            return(t);
          }
          t = topdown_1_0(q_16, t);
        }
        ;
        LocalPopChoice(x_65);
      }
    else
      {
        t = w_65;
      }
    r_62 = t;
    t = p_62;
    t = map_1_0(Overlay_to_Congdef_0_0, t);
    t_62 = t;
    t = q_62;
    {
      ATerm z_65 = t;
      int a_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_66 = t;
          if((PushChoice() == 0))
            {
              t = r_62;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_66;
            }
          t = q_62;
          {
            ATerm t_16 (ATerm t)
            {
              ATerm c_66 = t;
              int d_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_16 (ATerm t)
                  {
                    t = r_62;
                    return(t);
                  }
                  t = ExpOverlay_1_0(u_16, t);
                  ;
                  LocalPopChoice(d_66);
                }
              else
                {
                  t = c_66;
                }
              return(t);
            }
            t = topdown_1_0(t_16, t);
          }
          ;
          LocalPopChoice(a_66);
        }
      else
        {
          t = z_65;
        }
      u_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_62, u_62);
      {
        ATerm e_66 = t;
        int f_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm g_66 = ATgetArgument(t, 0);
                ATerm h_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_62;
            {
              ATerm v_16 (ATerm t)
              {
                t = u_62;
                return(t);
              }
              t = at_end_1_0(v_16, t);
            }
            ;
            LocalPopChoice(f_66);
          }
        else
          {
            t = e_66;
            {
              ATerm w_17 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_62, u_62));
              if(match_cons(t, sym__2))
                {
                  ATerm l_66 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_66) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  w_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_17;
              t = concat_0_0(t);
            }
          }
        v_62 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, v_62)), (ATerm) ATmakeAppl(sym_Signature_1, o_62)));
      }
    }
  }
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = term_m_66;
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm g_63 = NULL;
  g_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_63), term_o_66);
  t = assert_1_0(e_17, t);
  t = g_63;
  return(t);
}
ATerm e_17 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      c_63 = ATgetArgument(t, 0);
      d_63 = ATgetArgument(t, 1);
      e_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_66, c_63));
  t = assert_1_0(z_16, t);
  t = d_63;
  t = map_1_0(c_17, t);
  t = e_63;
  t = use_vars_0_0(t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, c_63, d_63, e_63);
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = term_m_66;
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm k_64 = NULL;
  ATerm r_66 = t;
  int s_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_64 = ATgetArgument(t, 0);
          {
            ATerm w_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_66);
      t = k_64;
    }
  else
    {
      t = r_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_64;
    }
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm n_64 = NULL;
  n_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_64), term_o_66);
  t = assert_1_0(i_17, t);
  t = n_64;
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = term_m_66;
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm z_64 = NULL;
  ATerm y_66 = t;
  int z_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_64 = ATgetArgument(t, 0);
          {
            ATerm b_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_66);
      t = z_64;
    }
  else
    {
      t = y_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_64;
    }
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm h_65 = NULL;
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_65), term_o_66);
  t = assert_1_0(q_17, t);
  t = h_65;
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = term_m_66;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,r_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      r_63 = ATgetArgument(t, 0);
      u_63 = ATgetArgument(t, 1);
      v_63 = ATgetArgument(t, 2);
      m_63 = ATgetArgument(t, 3);
      t = m_63;
      if(match_cons(t, sym_StratRule_3))
        {
          n_63 = ATgetArgument(t, 0);
          o_63 = ATgetArgument(t, 1);
          p_63 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_67, r_63));
          t = assert_1_0(f_17, t);
          t = v_63;
          t = map_1_0(g_17, t);
          t = map_1_0(h_17, t);
          t = n_63;
          t = unbound_vars_0_0(t);
          t = o_63;
          t = unbound_vars_0_0(t);
          t = p_63;
          t = unbound_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_63, u_63, v_63, (ATerm) ATmakeAppl(sym_StratRule_3, n_63, o_63, p_63));
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              n_63 = ATgetArgument(t, 0);
              o_63 = ATgetArgument(t, 1);
              p_63 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_67, r_63));
          t = assert_1_0(j_17, t);
          t = v_63;
          t = map_1_0(m_17, t);
          t = map_1_0(p_17, t);
          t = n_63;
          t = bind_vars_0_0(t);
          t = p_63;
          t = unbound_vars_0_0(t);
          t = o_63;
          t = use_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_63, u_63, v_63, (ATerm) ATmakeAppl(sym_Rule_3, n_63, o_63, p_63));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          r_63 = ATgetArgument(t, 0);
          u_63 = ATgetArgument(t, 1);
          v_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_63;
      if(match_cons(t, sym_Rule_3))
        {
          w_63 = ATgetArgument(t, 0);
          x_63 = ATgetArgument(t, 1);
          y_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_67, r_63));
      t = assert_1_0(r_17, t);
      t = w_63;
      t = bind_vars_0_0(t);
      t = y_63;
      t = unbound_vars_0_0(t);
      t = x_63;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, r_63, u_63, (ATerm) ATmakeAppl(sym_Rule_3, w_63, x_63, y_63));
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL;
  u_65 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      o_65 = ATgetArgument(t, 0);
      p_65 = ATgetArgument(t, 1);
      q_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_65);
  n_65 = t;
  t = o_65;
  t = l_103(t);
  r_65 = t;
  t = p_65;
  t = m_103(t);
  s_65 = t;
  t = q_65;
  t = n_103(t);
  t_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, r_65, s_65, t_65), n_65);
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm j_67 = t;
  int k_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,x_66 = NULL;
      t_66 = t;
      if(match_cons(t, sym__2))
        {
          u_66 = ATgetArgument(t, 0);
          v_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_66;
      {
        ATerm m_67 = t;
        int s_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_66 = ATgetFirst((ATermList) t);
                {
                  ATerm t_67 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_67);
            t = x_66;
            {
              ATerm v_67 = t;
              int z_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm b_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_67);
                  t = u_66;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm c_68 = t;
                      int j_68 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_66;
                          ;
                          LocalPopChoice(j_68);
                        }
                      else
                        {
                          t = c_68;
                          t = a_67(u_66, t_66, t);
                        }
                    }
                  else
                    {
                      t = a_67(u_66, t_66, t);
                    }
                }
              else
                {
                  t = v_67;
                  t = u_66;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = t_66;
                }
            }
          }
        else
          {
            t = m_67;
            t = u_66;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = t_66;
          }
      }
      ;
      LocalPopChoice(k_67);
    }
  else
    {
      t = j_67;
    }
  return(t);
}
ATerm a_67 (ATerm j_66, ATerm k_66, ATerm t)
{
  t = k_66;
  {
    ATerm k_68 = t;
    int l_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), j_66);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_68 = ATgetFirst((ATermList) t);
            if(match_cons(m_68, sym_Defined_1))
              {
                ATerm o_68 = ATgetArgument(m_68, 0);
              }
            else
              _fail(t);
            {
              ATerm n_68 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = k_66;
        ;
        LocalPopChoice(l_68);
      }
    else
      {
        t = k_68;
        t = (ATerm) ATmakeAppl(sym__2, j_66, (ATerm) ATinsert(ATempty, term_p_68));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm i_66 = NULL;
  t = map_1_0(s_17, t);
  i_66 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_p_66, i_66);
  t = table_putlist_0_0(t);
  t = i_66;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  if(match_cons(t, sym__2))
    {
      f_67 = ATgetArgument(t, 0);
      e_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_67;
  {
    ATerm t_17 (ATerm t)
    {
      ATerm g_67 = NULL,h_67 = NULL;
      if(match_cons(t, sym__2))
        {
          g_67 = ATgetArgument(t, 0);
          h_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(f_67, g_67, h_67);
      t = (ATerm) ATmakeAppl(sym__3, f_67, g_67, h_67);
      return(t);
    }
    t = map_1_0(t_17, t);
  }
  return(t);
}
ATerm u_17 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  e_18 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), e_18);
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_18, f_18);
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = map_1_0(u_17, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm e_142 (ATerm), ATerm f_142 (ATerm), ATerm t)
{
  ATerm l_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  l_67 = t;
  t = save_Bound_0_0(t);
  n_67 = t;
  t = l_67;
  t = e_142(t);
  o_67 = t;
  t = save_Bound_0_0(t);
  p_67 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_p_66, n_67);
  t = table_putlist_0_0(t);
  t = o_67;
  t = f_142(t);
  q_67 = t;
  t = p_67;
  t = isect_Bound_0_0(t);
  t = q_67;
  return(t);
}
ATerm LChoice_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm r_67 = NULL,u_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,a_68 = NULL;
  a_68 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      u_67 = ATgetArgument(t, 0);
      w_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  r_67 = t;
  t = u_67;
  t = h_103(t);
  x_67 = t;
  t = w_67;
  t = i_103(t);
  y_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, x_67, y_67), r_67);
  return(t);
}
ATerm Choice_2_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  i_68 = t;
  if(match_cons(t, sym_Choice_2))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_68);
  d_68 = t;
  t = e_68;
  t = f_102(t);
  g_68 = t;
  t = f_68;
  t = g_102(t);
  h_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, g_68, h_68), d_68);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm a_70 = NULL;
  a_70 = t;
  {
    ATerm q_68 = t;
    int r_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL,k_19 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_19 = ATgetFirst((ATermList) t);
            {
              ATerm s_68 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = k_19;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_68 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_68) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            g_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_70), term_v_68), g_19), term_u_68);
        ;
        LocalPopChoice(r_68);
      }
    else
      {
        t = q_68;
        {
          ATerm w_68 = t;
          int x_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_19 = NULL,t_19 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_19 = ATgetFirst((ATermList) t);
                  {
                    ATerm y_68 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = t_19;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm z_68 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) z_68) != ATmakeSymbol("h_1", 0, ATtrue)))
                    _fail(t);
                  o_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_70), term_v_68), o_19), term_a_69);
              ;
              LocalPopChoice(x_68);
            }
          else
            {
              t = w_68;
              {
                ATerm b_69 = t;
                int c_69 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_19 = NULL,c_20 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        c_20 = ATgetFirst((ATermList) t);
                        {
                          ATerm d_69 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = c_20;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm e_69 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) e_69) != ATmakeSymbol("e_1", 0, ATtrue)))
                          _fail(t);
                        x_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_70), term_v_68), x_19), term_a_69);
                    ;
                    LocalPopChoice(c_69);
                  }
                else
                  {
                    t = b_69;
                    {
                      ATerm f_69 = t;
                      int g_69 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_20 = NULL,l_20 = NULL;
                          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              l_20 = ATgetFirst((ATermList) t);
                              {
                                ATerm h_69 = (ATerm) ATgetNext((ATermList) t);
                              }
                            }
                          else
                            _fail(t);
                          t = l_20;
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm i_69 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) i_69) != ATmakeSymbol("b_1", 0, ATtrue)))
                                _fail(t);
                              g_20 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_70), term_v_68), g_20), term_a_69);
                          ;
                          LocalPopChoice(g_69);
                        }
                      else
                        {
                          t = f_69;
                          {
                            ATerm j_69 = t;
                            int k_69 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_20 = NULL,u_20 = NULL;
                                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    u_20 = ATgetFirst((ATermList) t);
                                    {
                                      ATerm l_69 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = u_20;
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm m_69 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) m_69) != ATmakeSymbol("y_0", 0, ATtrue)))
                                      _fail(t);
                                    q_20 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_70), term_v_68), q_20), term_n_69);
                                ;
                                LocalPopChoice(k_69);
                              }
                            else
                              {
                                t = j_69;
                                {
                                  ATerm z_20 = NULL,e_21 = NULL;
                                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      e_21 = ATgetFirst((ATermList) t);
                                      {
                                        ATerm o_69 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = e_21;
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm p_69 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) p_69) != ATmakeSymbol("v_0", 0, ATtrue)))
                                        _fail(t);
                                      z_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_70), term_v_68), z_20), term_n_69);
                                }
                              }
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
  ATerm l_71 = NULL,o_71 = NULL;
  l_71 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_71);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_22 = ATgetFirst((ATermList) t);
            {
              ATerm s_69 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = d_22;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm t_69 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_69) != ATmakeSymbol("r_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_71);
        ;
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        {
          ATerm u_69 = t;
          int v_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_22 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_71);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_22 = ATgetFirst((ATermList) t);
                  {
                    ATerm w_69 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = l_22;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(v_69);
            }
          else
            {
              t = u_69;
              {
                ATerm w_22 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_71);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_22 = ATgetFirst((ATermList) t);
                    {
                      ATerm x_69 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = w_22;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm y_69 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) y_69) != ATmakeSymbol("n_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, o_71);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm z_69 = t;
  int b_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(b_70);
      {
        ATerm c_70 = t;
        int d_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(d_70);
          }
        else
          {
            t = c_70;
            {
              ATerm z_72 = NULL,a_73 = NULL,c_23 = NULL;
              z_72 = t;
              if(match_cons(t, sym_Var_1))
                {
                  a_73 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_70), a_73), term_e_70);
              t = Context_0_0(t);
              c_23 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), c_23);
              t = c_23;
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = z_69;
      {
        ATerm g_70 = t;
        int h_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(h_70);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = g_70;
            {
              ATerm i_70 = t;
              int j_70 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(j_70);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = i_70;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
  k_73 = t;
  if(match_cons(t, sym_Rule_3))
    {
      e_73 = ATgetArgument(t, 0);
      f_73 = ATgetArgument(t, 1);
      g_73 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_73);
  d_73 = t;
  t = e_73;
  t = y_100(t);
  h_73 = t;
  t = f_73;
  t = z_100(t);
  i_73 = t;
  t = g_73;
  t = a_101(t);
  j_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, h_73, i_73, j_73), d_73);
  return(t);
}
ATerm RootApp_1_0 (ATerm x_99 (ATerm), ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  r_73 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      p_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_73);
  o_73 = t;
  t = p_73;
  t = x_99(t);
  q_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, q_73), o_73);
  return(t);
}
ATerm App_2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t)
{
  ATerm u_73 = NULL,w_73 = NULL,x_73 = NULL,c_74 = NULL,s_74 = NULL,t_74 = NULL;
  t_74 = t;
  if(match_cons(t, sym_App_2))
    {
      w_73 = ATgetArgument(t, 0);
      x_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_74);
  u_73 = t;
  t = w_73;
  t = v_99(t);
  c_74 = t;
  t = x_73;
  t = w_99(t);
  s_74 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, c_74, s_74), u_73);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  if(match_cons(t, sym__3))
    {
      w_75 = ATgetArgument(t, 0);
      x_75 = ATgetArgument(t, 1);
      y_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(w_75, x_75);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_70 = ATgetFirst((ATermList) t);
      z_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(w_75, x_75, (ATerm) ATinsert(CheckATermList(z_75), y_75));
  t = (ATerm) ATmakeAppl(sym__3, w_75, x_75, y_75);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm l_70 = t;
  int m_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(m_70);
      {
        ATerm r_77 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            r_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_p_66, (ATerm)ATmakeAppl(sym_Var_1, r_77), term_o_70);
        t = table_replace_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_77);
      }
    }
  else
    {
      t = l_70;
      {
        ATerm p_70 = t;
        int q_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(q_70);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = p_70;
            {
              ATerm r_70 = t;
              int s_70 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(s_70);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = r_70;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm t_77 = NULL,b_78 = NULL,c_78 = NULL,e_78 = NULL;
  e_78 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_78);
  t_77 = t;
  t = b_78;
  t = y_102(t);
  c_78 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, c_78), t_77);
  return(t);
}
ATerm Build_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
  k_78 = t;
  if(match_cons(t, sym_Build_1))
    {
      i_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_78);
  h_78 = t;
  t = i_78;
  t = z_102(t);
  j_78 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, j_78), h_78);
  return(t);
}
ATerm v_17 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = Scope_2_0(y_17, unbound_vars_0_0, t);
  return(t);
}
ATerm y_17 (ATerm t)
{
  t = map_1_0(z_17, t);
  return(t);
}
ATerm z_17 (ATerm t)
{
  ATerm n_78 = NULL;
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_78), term_p_68);
  t = assert_1_0(a_18, t);
  t = n_78;
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = Choice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm c_18 (ATerm t)
{
  t = Choice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = LChoice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  t = LChoice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm t_70 = t;
  int u_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(u_70);
      t = scope_2_0(v_17, x_17, t);
    }
  else
    {
      t = t_70;
      {
        ATerm v_70 = t;
        int w_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(w_70);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = v_70;
            {
              ATerm x_70 = t;
              int y_70 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(y_70);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = x_70;
                  {
                    ATerm z_70 = t;
                    int a_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(a_71);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = z_70;
                        {
                          ATerm b_71 = t;
                          int c_71 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(c_71);
                              t = abstract_choice_2_0(b_18, c_18, t);
                            }
                          else
                            {
                              t = b_71;
                              {
                                ATerm d_71 = t;
                                int e_71 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(e_71);
                                    t = abstract_choice_2_0(d_18, g_18, t);
                                  }
                                else
                                  {
                                    t = d_71;
                                    {
                                      ATerm f_71 = t;
                                      int g_71 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(g_71);
                                          t = abstract_choice_2_0(h_18, i_18, t);
                                        }
                                      else
                                        {
                                          t = f_71;
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
ATerm j_18 (ATerm t)
{
  t = term_m_66;
  return(t);
}
ATerm k_18 (ATerm t)
{
  ATerm e_79 = NULL;
  ATerm h_71 = t;
  int i_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_79 = ATgetArgument(t, 0);
          {
            ATerm j_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_71);
      t = e_79;
    }
  else
    {
      t = h_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_79;
    }
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm i_79 = NULL;
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_79), term_o_66);
  t = assert_1_0(m_18, t);
  t = i_79;
  return(t);
}
ATerm m_18 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm n_18 (ATerm t)
{
  t = term_m_66;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm q_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_78 = ATgetArgument(t, 0);
      t_78 = ATgetArgument(t, 1);
      u_78 = ATgetArgument(t, 2);
      q_78 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_71, s_78));
      t = assert_1_0(j_18, t);
      t = u_78;
      t = map_1_0(k_18, t);
      t = map_1_0(l_18, t);
      t = q_78;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_78, t_78, u_78, q_78);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_78 = ATgetArgument(t, 0);
          t_78 = ATgetArgument(t, 1);
          u_78 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_71, s_78));
      t = assert_1_0(n_18, t);
      t = u_78;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, s_78, t_78, u_78);
    }
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = term_m_66;
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = scope_2_0(q_18, r_18, t);
  return(t);
}
ATerm q_18 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm p_79 = NULL;
  p_79 = t;
  t = free_vars_3_0(s_18, t_18, tboundin_3_0, t);
  t = map_1_0(w_18, t);
  t = p_79;
  {
    ATerm n_71 = t;
    int p_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(p_71);
      }
    else
      {
        t = n_71;
        {
          ATerm q_71 = t;
          int r_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(r_71);
            }
          else
            {
              t = q_71;
              t = overlay_ud_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm q_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_79);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm s_71 = t;
  int t_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_71);
    }
  else
    {
      t = s_71;
      {
        ATerm s_79 = NULL,u_79 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_79 = ATgetArgument(t, 0);
            t = s_79;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm u_71 = t;
            int v_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm w_71 = ATgetArgument(t, 0);
                    ATerm x_71 = ATgetArgument(t, 1);
                    u_79 = ATgetArgument(t, 2);
                    {
                      ATerm y_71 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(v_71);
                t = u_79;
                t = map_1_0(u_18, t);
              }
            else
              {
                t = u_71;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm z_71 = ATgetArgument(t, 0);
                    ATerm a_72 = ATgetArgument(t, 1);
                    u_79 = ATgetArgument(t, 2);
                    {
                      ATerm b_72 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_79;
                t = map_1_0(v_18, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm b_80 = NULL;
  ATerm c_72 = t;
  int d_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_80 = ATgetArgument(t, 0);
          {
            ATerm e_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_72);
      t = b_80;
    }
  else
    {
      t = c_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_80;
    }
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm q_80 = NULL;
  ATerm f_72 = t;
  int g_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_80 = ATgetArgument(t, 0);
          {
            ATerm h_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_72);
      t = q_80;
    }
  else
    {
      t = f_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_80;
    }
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm q_81 = NULL;
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_81), term_p_68);
  t = assert_1_0(x_18, t);
  t = q_81;
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = term_p_66;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(o_18, p_18, t);
  return(t);
}
ATerm Signature_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm w_81 = NULL,z_81 = NULL,c_82 = NULL,d_82 = NULL;
  d_82 = t;
  if(match_cons(t, sym_Signature_1))
    {
      z_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_82);
  w_81 = t;
  t = z_81;
  t = k_98(t);
  c_82 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, c_82), w_81);
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = Cons_2_0(z_18, a_19, t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = Cons_2_0(b_19, c_19, t);
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = Overlays_1_0(d_19, t);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = Cons_2_0(f_19, h_19, t);
  return(t);
}
ATerm d_19 (ATerm t)
{
  ATerm i_72 = t;
  int j_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_72);
    }
  else
    {
      t = i_72;
      {
        ATerm l_82 = NULL;
        l_82 = t;
        t = filter_1_0(e_19, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_82;
      }
    }
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm k_72 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_72;
    }
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = Strategies_1_0(i_19, t);
  return(t);
}
ATerm h_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm l_72 = t;
  int m_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_72);
    }
  else
    {
      t = l_72;
      {
        ATerm o_82 = NULL;
        o_82 = t;
        t = filter_1_0(j_19, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_82;
      }
    }
  return(t);
}
ATerm j_19 (ATerm t)
{
  ATerm n_72 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_72;
    }
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  t = Specification_1_0(y_18, t);
  return(t);
}
ATerm l_19 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,n_84 = NULL;
  k_84 = t;
  {
    ATerm o_72 = t;
    int p_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm q_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_72);
        t = k_84;
        {
          ATerm r_72 = t;
          if((PushChoice() == 0))
            {
              ATerm v_23 = NULL,w_23 = NULL,a_24 = NULL;
              v_23 = t;
              if(match_cons(t, sym_Var_1))
                {
                  w_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue)), v_23);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_24 = ATgetFirst((ATermList) t);
                  {
                    ATerm s_72 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = a_24;
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm t_72 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_72) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, w_23);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_72;
            }
          t = term_v_72;
        }
      }
    else
      {
        t = o_72;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_v_72;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                l_84 = ATgetArgument(t, 0);
                {
                  ATerm q_84 = NULL;
                  t = l_84;
                  t = free_vars_3_0(m_19, n_19, tboundin_3_0, t);
                  t = map_1_0(s_19, t);
                  q_84 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_72, q_84);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    l_84 = ATgetArgument(t, 0);
                    n_84 = ATgetArgument(t, 1);
                    {
                      ATerm w_89 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, l_84, n_84);
                      t = free_vars_3_0(u_19, v_19, tboundin_3_0, t);
                      t = map_1_0(a_20, t);
                      w_89 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_w_72, w_89);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm x_72 = ATgetArgument(t, 0);
                        ATerm y_72 = ATgetArgument(t, 1);
                        ATerm b_73 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue))));
                    t = SSL_exit((ATerm) ATmakeInt(1));
                    t = (ATerm) ATinsert(ATempty, term_c_73);
                  }
              }
          }
      }
  }
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm r_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_84);
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm l_73 = t;
  int m_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_73);
    }
  else
    {
      t = l_73;
      {
        ATerm t_84 = NULL,v_84 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_84 = ATgetArgument(t, 0);
            t = t_84;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm n_73 = t;
            int s_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm t_73 = ATgetArgument(t, 0);
                    ATerm v_73 = ATgetArgument(t, 1);
                    v_84 = ATgetArgument(t, 2);
                    {
                      ATerm y_73 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(s_73);
                t = v_84;
                t = map_1_0(p_19, t);
              }
            else
              {
                t = n_73;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm z_73 = ATgetArgument(t, 0);
                    ATerm a_74 = ATgetArgument(t, 1);
                    v_84 = ATgetArgument(t, 2);
                    {
                      ATerm b_74 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = v_84;
                t = map_1_0(q_19, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_19 (ATerm t)
{
  ATerm p_86 = NULL;
  ATerm d_74 = t;
  int e_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_86 = ATgetArgument(t, 0);
          {
            ATerm f_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_74);
      t = p_86;
    }
  else
    {
      t = d_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_86;
    }
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm e_87 = NULL;
  ATerm g_74 = t;
  int h_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_87 = ATgetArgument(t, 0);
          {
            ATerm i_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_74);
      t = e_87;
    }
  else
    {
      t = g_74;
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
ATerm s_19 (ATerm t)
{
  ATerm m_87 = NULL;
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_87);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm f_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_90);
  return(t);
}
ATerm v_19 (ATerm t)
{
  ATerm j_74 = t;
  int k_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_74);
    }
  else
    {
      t = j_74;
      {
        ATerm j_90 = NULL,g_93 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_90 = ATgetArgument(t, 0);
            t = j_90;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm l_74 = t;
            int m_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm n_74 = ATgetArgument(t, 0);
                    ATerm o_74 = ATgetArgument(t, 1);
                    g_93 = ATgetArgument(t, 2);
                    {
                      ATerm p_74 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_74);
                t = g_93;
                t = map_1_0(w_19, t);
              }
            else
              {
                t = l_74;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm q_74 = ATgetArgument(t, 0);
                    ATerm r_74 = ATgetArgument(t, 1);
                    g_93 = ATgetArgument(t, 2);
                    {
                      ATerm u_74 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = g_93;
                t = map_1_0(y_19, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm v_93 = NULL;
  ATerm v_74 = t;
  int w_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_93 = ATgetArgument(t, 0);
          {
            ATerm x_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_74);
      t = v_93;
    }
  else
    {
      t = v_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_93;
    }
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm b_94 = NULL;
  ATerm y_74 = t;
  int z_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_94 = ATgetArgument(t, 0);
          {
            ATerm a_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_74);
      t = b_94;
    }
  else
    {
      t = y_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_94;
    }
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm e_94 = NULL;
  e_94 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_94);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(l_19, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm r_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_96);
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm b_75 = t;
  int c_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_75);
    }
  else
    {
      t = b_75;
      {
        ATerm t_96 = NULL,v_96 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_96 = ATgetArgument(t, 0);
            t = t_96;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm d_75 = t;
            int e_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm f_75 = ATgetArgument(t, 0);
                    ATerm g_75 = ATgetArgument(t, 1);
                    v_96 = ATgetArgument(t, 2);
                    {
                      ATerm h_75 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_75);
                t = v_96;
                t = map_1_0(e_20, t);
              }
            else
              {
                t = d_75;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm i_75 = ATgetArgument(t, 0);
                    ATerm j_75 = ATgetArgument(t, 1);
                    v_96 = ATgetArgument(t, 2);
                    {
                      ATerm k_75 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = v_96;
                t = map_1_0(f_20, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm c_97 = NULL;
  ATerm l_75 = t;
  int m_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_97 = ATgetArgument(t, 0);
          {
            ATerm n_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_75);
      t = c_97;
    }
  else
    {
      t = l_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_97;
    }
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm k_97 = NULL;
  ATerm o_75 = t;
  int p_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_97 = ATgetArgument(t, 0);
          {
            ATerm q_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_75);
      t = k_97;
    }
  else
    {
      t = o_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_97;
    }
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm n_97 = NULL;
  n_97 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_97);
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm o_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_97);
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm r_75 = t;
  int s_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_75);
    }
  else
    {
      t = r_75;
      {
        ATerm q_97 = NULL,t_97 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_97 = ATgetArgument(t, 0);
            t = q_97;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm t_75 = t;
            int u_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm v_75 = ATgetArgument(t, 0);
                    ATerm a_76 = ATgetArgument(t, 1);
                    t_97 = ATgetArgument(t, 2);
                    {
                      ATerm b_76 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(u_75);
                t = t_97;
                t = map_1_0(m_20, t);
              }
            else
              {
                t = t_75;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm c_76 = ATgetArgument(t, 0);
                    ATerm d_76 = ATgetArgument(t, 1);
                    t_97 = ATgetArgument(t, 2);
                    {
                      ATerm e_76 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = t_97;
                t = map_1_0(n_20, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_20 (ATerm t)
{
  ATerm b_98 = NULL;
  ATerm f_76 = t;
  int g_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_98 = ATgetArgument(t, 0);
          {
            ATerm h_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_76);
      t = b_98;
    }
  else
    {
      t = f_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_98;
    }
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm m_98 = NULL;
  ATerm i_76 = t;
  int j_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_98 = ATgetArgument(t, 0);
          {
            ATerm k_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_76);
      t = m_98;
    }
  else
    {
      t = i_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_98;
    }
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm q_98 = NULL,h_24 = NULL;
  q_98 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Var_1, q_98));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_24 = ATgetFirst((ATermList) t);
      {
        ATerm l_76 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_24;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm m_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_76) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_98);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_99 (ATerm m_95, ATerm o_95, ATerm p_95, ATerm q_95, ATerm r_95, ATerm s_95, ATerm v_95, ATerm t)
  {
    ATerm c_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,l_96 = NULL,n_96 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, r_95, term_o_76);
    {
      ATerm p_76 = t;
      if((PushChoice() == 0))
        {
          ATerm o_96 = NULL;
          if(match_cons(t, sym__2))
            {
              o_96 = ATgetArgument(t, 0);
              if((o_96 != ATgetArgument(t, 1)))
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
          t = p_76;
        }
      t = new_0_0(t);
      c_96 = t;
      t = q_95;
      t = dummify_0_0(t);
      e_96 = t;
      {
        ATerm q_76 = t;
        int r_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((q_95 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, c_96);
            ;
            LocalPopChoice(r_76);
          }
        else
          {
            t = q_76;
          }
        f_96 = t;
        t = e_96;
        t = free_vars_3_0(b_20, d_20, tboundin_3_0, t);
        t = map_1_0(h_20, t);
        g_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_95, s_95);
        t = free_vars_3_0(j_20, k_20, tboundin_3_0, t);
        t = filter_1_0(o_20, t);
        h_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_96, g_96);
        t = diff_0_0(t);
        i_96 = t;
        t = new_0_0(t);
        l_96 = t;
        t = m_95;
        t = n_0(t);
        n_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_96, (ATerm) ATmakeAppl(sym_Op_2, term_s_76, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_76, (ATerm) ATinsert(CheckATermList(i_96), (ATerm) ATmakeAppl(sym_Str_1, l_96)))), e_96)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_95, o_95, p_95, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, c_96), q_95), r_95, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_95)))), f_96), (ATerm) ATmakeAppl(sym_Op_2, term_t_76, (ATerm) ATinsert(CheckATermList(i_96), (ATerm) ATmakeAppl(sym_Str_1, l_96)))), s_95))));
      }
    }
    return(t);
  }
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,z_98 = NULL,e_99 = NULL,f_99 = NULL,k_99 = NULL;
  t_98 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      u_98 = ATgetArgument(t, 0);
      v_98 = ATgetArgument(t, 1);
      w_98 = ATgetArgument(t, 2);
      z_98 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = z_98;
  if(match_cons(t, sym_Rule_3))
    {
      e_99 = ATgetArgument(t, 0);
      f_99 = ATgetArgument(t, 1);
      k_99 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_99;
  if(match_cons(t, sym_Op_2))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
      t = s_98;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = r_98;
          if(match_string(t, "Undefined"))
            {
              ATerm w_76 = t;
              int x_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,g_25 = NULL;
                  t = t_98;
                  t = new_0_0(t);
                  b_25 = t;
                  t = e_99;
                  t = dummify_0_0(t);
                  c_25 = t;
                  {
                    ATerm y_76 = t;
                    int z_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if((e_99 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, b_25);
                        ;
                        LocalPopChoice(z_76);
                      }
                    else
                      {
                        t = y_76;
                      }
                    d_25 = t;
                    t = u_98;
                    t = n_0(t);
                    g_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_25, (ATerm) ATmakeAppl(sym_Op_2, term_s_76, (ATerm) ATinsert(ATinsert(ATempty, term_o_76), c_25)))), (ATerm) ATmakeAppl(sym_RDefT_4, u_98, v_98, w_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_25), e_99), term_o_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_v_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_98)))), d_25), term_o_76), (ATerm) ATmakeAppl(sym_Seq_2, k_99, term_q_44)))));
                  }
                  ;
                  LocalPopChoice(x_76);
                }
              else
                {
                  t = w_76;
                  t = m_99(u_98, v_98, w_98, e_99, f_99, k_99, t_98, t);
                }
            }
          else
            {
              t = m_99(u_98, v_98, w_98, e_99, f_99, k_99, t_98, t);
            }
        }
      else
        {
          t = r_98;
          t = m_99(u_98, v_98, w_98, e_99, f_99, k_99, t_98, t);
        }
    }
  else
    {
      t = m_99(u_98, v_98, w_98, e_99, f_99, k_99, t_98, t);
    }
  return(t);
}
ATerm r_20 (ATerm t)
{
  t = SplitDynamicRule_1_0(s_20, t);
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm a_100 = NULL;
  a_100 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_77, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_100))));
  return(t);
}
ATerm t_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_100 = ATgetFirst((ATermList) t);
      c_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_100, c_100);
  return(t);
}
ATerm x_20 (ATerm t)
{
  ATerm f_100 = NULL,g_100 = NULL,k_100 = NULL,o_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_77 = ATgetArgument(t, 0);
      if(match_cons(c_77, sym__2))
        {
          f_100 = ATgetArgument(c_77, 0);
          k_100 = ATgetArgument(c_77, 1);
        }
      else
        _fail(t);
      {
        ATerm d_77 = ATgetArgument(t, 1);
        if(match_cons(d_77, sym__2))
          {
            g_100 = ATgetArgument(d_77, 0);
            o_100 = ATgetArgument(d_77, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_100), f_100), (ATerm) ATinsert(CheckATermList(o_100), k_100));
  return(t);
}
ATerm y_20 (ATerm t)
{
  t = SplitDynamicRule_1_0(a_21, t);
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm s_100 = NULL;
  s_100 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_77, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, s_100))));
  return(t);
}
ATerm b_21 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_33;
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm u_100 = NULL,w_100 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_100 = ATgetFirst((ATermList) t);
      w_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_100, w_100);
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm x_100 = NULL,b_101 = NULL,d_101 = NULL,e_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_77 = ATgetArgument(t, 0);
      if(match_cons(g_77, sym__2))
        {
          x_100 = ATgetArgument(g_77, 0);
          d_101 = ATgetArgument(g_77, 1);
        }
      else
        _fail(t);
      {
        ATerm h_77 = ATgetArgument(t, 1);
        if(match_cons(h_77, sym__2))
          {
            b_101 = ATgetArgument(h_77, 0);
            e_101 = ATgetArgument(h_77, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_101), x_100), (ATerm) ATinsert(CheckATermList(e_101), d_101));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm t_99 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      t_99 = ATgetArgument(t, 0);
      t = t_99;
      t = map_1_0(r_20, t);
      t = genzip_4_0(t_20, v_20, x_20, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          t_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_99;
      t = map_1_0(y_20, t);
      t = genzip_4_0(b_21, c_21, f_21, _id, t);
    }
  return(t);
}
ATerm g_21 (ATerm t)
{
  t = term_i_77;
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm i_101 = NULL;
  i_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_101), term_k_77);
  t = assert_1_0(j_21, t);
  t = i_101;
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = term_i_77;
  return(t);
}
ATerm split_under_scope_1_0 (ATerm v_140 (ATerm), ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      f_101 = ATgetArgument(t, 0);
      g_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_21 (ATerm t)
    {
      t = f_101;
      t = map_1_0(i_21, t);
      t = g_101;
      t = v_140(t);
      if(((h_101 != NULL) && (h_101 != t)))
        _fail(t);
      else
        h_101 = t;
      return(t);
    }
    t = scope_2_0(g_21, h_21, t);
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_101, not_null(h_101));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm j_101 (ATerm t)
  {
    ATerm l_77 = t;
    int m_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_114(t);
        ;
        LocalPopChoice(m_77);
      }
    else
      {
        t = l_77;
        t = SRTS_one(j_101, t);
      }
    return(t);
  }
  t = j_101(t);
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm t_140 (ATerm), ATerm t)
{
  ATerm k_101 (ATerm t)
  {
    ATerm k_21 (ATerm t)
    {
      ATerm n_77 = t;
      int o_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_140(t);
          ;
          LocalPopChoice(o_77);
        }
      else
        {
          t = n_77;
          t = split_under_scope_1_0(k_101, t);
        }
      return(t);
    }
    t = oncetd_1_0(k_21, t);
    return(t);
  }
  t = k_101(t);
  return(t);
}
ATerm l_21 (ATerm t)
{
  t = term_i_77;
  return(t);
}
ATerm n_21 (ATerm t)
{
  ATerm h_102 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_102);
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm p_77 = t;
  int q_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_77);
    }
  else
    {
      t = p_77;
      {
        ATerm j_102 = NULL,l_102 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_102 = ATgetArgument(t, 0);
            t = j_102;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm s_77 = t;
            int u_77 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm v_77 = ATgetArgument(t, 0);
                    ATerm w_77 = ATgetArgument(t, 1);
                    l_102 = ATgetArgument(t, 2);
                    {
                      ATerm x_77 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(u_77);
                t = l_102;
                t = map_1_0(p_21, t);
              }
            else
              {
                t = s_77;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm y_77 = ATgetArgument(t, 0);
                    ATerm z_77 = ATgetArgument(t, 1);
                    l_102 = ATgetArgument(t, 2);
                    {
                      ATerm a_78 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = l_102;
                t = map_1_0(q_21, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_21 (ATerm t)
{
  ATerm a_103 = NULL;
  ATerm d_78 = t;
  int f_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_103 = ATgetArgument(t, 0);
          {
            ATerm g_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_78);
      t = a_103;
    }
  else
    {
      t = d_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_103;
    }
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm t_103 = NULL;
  ATerm l_78 = t;
  int m_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_103 = ATgetArgument(t, 0);
          {
            ATerm o_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_78);
      t = t_103;
    }
  else
    {
      t = l_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_103;
    }
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm w_103 = NULL;
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_103), term_k_77);
  t = assert_1_0(s_21, t);
  t = w_103;
  return(t);
}
ATerm s_21 (ATerm t)
{
  t = term_i_77;
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  ATerm x_101 = NULL,z_101 = NULL,a_102 = NULL,d_102 = NULL,e_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_101 = ATgetFirst((ATermList) t);
      z_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm m_21 (ATerm t)
    {
      t = x_101;
      t = free_vars_3_0(n_21, o_21, tboundin_3_0, t);
      t = map_1_0(r_21, t);
      t = x_101;
      {
        ATerm u_21 (ATerm t)
        {
          t = split_dynamic_rules_0_0(t);
          if(match_cons(t, sym__2))
            {
              if(((d_102 != NULL) && (d_102 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_102 = ATgetArgument(t, 0);
              if(((a_102 != NULL) && (a_102 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                a_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_102));
          return(t);
        }
        t = split_dynamic_rule_1_0(u_21, t);
        if(((e_102 != NULL) && (e_102 != t)))
          _fail(t);
        else
          e_102 = t;
      }
      return(t);
    }
    t = scope_2_0(l_21, m_21, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_102)), not_null(e_102)), z_101);
    {
      ATerm p_78 = t;
      int r_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_78 = ATgetArgument(t, 0);
              ATerm w_78 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(a_102)), not_null(e_102));
          {
            ATerm v_21 (ATerm t)
            {
              t = z_101;
              return(t);
            }
            t = at_end_1_0(v_21, t);
          }
          ;
          LocalPopChoice(r_78);
        }
      else
        {
          t = p_78;
          {
            ATerm w_25 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_102)), not_null(e_102)), z_101));
            if(match_cons(t, sym__2))
              {
                ATerm x_78 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_78) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                w_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_25;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm listtd_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  ATerm d_104 (ATerm t)
  {
    t = q_120(t);
    {
      ATerm y_78 = t;
      int z_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(z_78);
        }
      else
        {
          t = y_78;
          t = Cons_2_0(_id, d_104, t);
        }
    }
    return(t);
  }
  t = d_104(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL,k_104 = NULL,n_104 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      k_104 = ATgetArgument(t, 0);
      n_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_104;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_104 = ATgetFirst((ATermList) t);
      i_104 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_79, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, i_104, n_104)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_104))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_104;
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL,w_104 = NULL;
  w_104 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      t_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_104);
  s_104 = t;
  t = t_104;
  t = y_101(t);
  u_104 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, u_104), s_104);
  return(t);
}
ATerm Scope_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
  q_105 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_105 = ATgetArgument(t, 0);
      n_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_105);
  z_104 = t;
  t = a_105;
  t = b_103(t);
  o_105 = t;
  t = n_105;
  t = c_103(t);
  p_105 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, o_105, p_105), z_104);
  return(t);
}
ATerm tboundin_3_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm t)
{
  ATerm c_79 = t;
  int d_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(x_141, v_141, t);
      ;
      LocalPopChoice(d_79);
    }
  else
    {
      t = c_79;
      {
        ATerm f_79 = t;
        int g_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(x_141, x_141, x_141, v_141, t);
            ;
            LocalPopChoice(g_79);
          }
        else
          {
            t = f_79;
            {
              ATerm h_79 = t;
              int j_79 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(x_141, x_141, x_141, v_141, t);
                  ;
                  LocalPopChoice(j_79);
                }
              else
                {
                  t = h_79;
                  t = DynamicRules_1_0(v_141, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm w_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_105);
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm k_79 = t;
  int l_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_79);
    }
  else
    {
      t = k_79;
      {
        ATerm y_105 = NULL,a_106 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_105 = ATgetArgument(t, 0);
            t = y_105;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm m_79 = t;
            int n_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm o_79 = ATgetArgument(t, 0);
                    ATerm r_79 = ATgetArgument(t, 1);
                    a_106 = ATgetArgument(t, 2);
                    {
                      ATerm t_79 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(n_79);
                t = a_106;
                t = map_1_0(y_21, t);
              }
            else
              {
                t = m_79;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm v_79 = ATgetArgument(t, 0);
                    ATerm w_79 = ATgetArgument(t, 1);
                    a_106 = ATgetArgument(t, 2);
                    {
                      ATerm x_79 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = a_106;
                t = map_1_0(z_21, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm g_106 = NULL;
  ATerm y_79 = t;
  int z_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_106 = ATgetArgument(t, 0);
          {
            ATerm a_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_79);
      t = g_106;
    }
  else
    {
      t = y_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_106;
    }
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm m_106 = NULL;
  ATerm c_80 = t;
  int d_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_106 = ATgetArgument(t, 0);
          {
            ATerm e_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_80);
      t = m_106;
    }
  else
    {
      t = c_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_106;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(w_21, x_21, tboundin_3_0, t);
  return(t);
}
ATerm a_22 (ATerm t)
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
ATerm b_22 (ATerm t)
{
  ATerm f_80 = t;
  int g_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_80);
    }
  else
    {
      t = f_80;
      {
        ATerm d_107 = NULL,f_107 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_107 = ATgetArgument(t, 0);
            t = d_107;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm h_80 = t;
            int i_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm j_80 = ATgetArgument(t, 0);
                    ATerm k_80 = ATgetArgument(t, 1);
                    f_107 = ATgetArgument(t, 2);
                    {
                      ATerm l_80 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(i_80);
                t = f_107;
                t = map_1_0(c_22, t);
              }
            else
              {
                t = h_80;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm m_80 = ATgetArgument(t, 0);
                    ATerm n_80 = ATgetArgument(t, 1);
                    f_107 = ATgetArgument(t, 2);
                    {
                      ATerm o_80 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = f_107;
                t = map_1_0(e_22, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_22 (ATerm t)
{
  ATerm l_107 = NULL;
  ATerm p_80 = t;
  int r_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_107 = ATgetArgument(t, 0);
          {
            ATerm s_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_80);
      t = l_107;
    }
  else
    {
      t = p_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_107;
    }
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm r_107 = NULL;
  ATerm t_80 = t;
  int u_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_107 = ATgetArgument(t, 0);
          {
            ATerm v_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_80);
      t = r_107;
    }
  else
    {
      t = t_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_107;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm u_106 = NULL,y_106 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_106 = ATgetArgument(t, 0);
      t = y_106;
      if(match_cons(t, sym_Rule_3))
        {
          u_106 = ATgetArgument(t, 0);
          {
            ATerm w_80 = ATgetArgument(t, 1);
          }
          {
            ATerm x_80 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_106;
      t = free_vars_3_0(a_22, b_22, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_106 = ATgetArgument(t, 0);
          {
            ATerm y_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_106;
    }
  return(t);
}
ATerm union_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL;
  if(match_cons(t, sym__2))
    {
      v_107 = ATgetArgument(t, 0);
      w_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_107;
  {
    ATerm y_107 (ATerm t)
    {
      ATerm z_80 = t;
      int a_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_107;
          ;
          LocalPopChoice(a_81);
        }
      else
        {
          t = z_80;
          {
            ATerm b_81 = t;
            int c_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_25 = NULL,y_25 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_25 = ATgetFirst((ATermList) t);
                    y_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_107;
                {
                  ATerm f_22 (ATerm t)
                  {
                    ATerm z_25 = NULL;
                    z_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_25, z_25);
                    t = l_123(t);
                    return(t);
                  }
                  t = fetch_1_0(f_22, t);
                  t = y_25;
                  t = y_107(t);
                }
                ;
                LocalPopChoice(c_81);
              }
            else
              {
                t = b_81;
                t = Cons_2_0(_id, y_107, t);
              }
          }
        }
      return(t);
    }
    t = y_107(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  ATerm e_108 = NULL,f_108 = NULL;
  if(match_cons(t, sym__2))
    {
      e_108 = ATgetArgument(t, 0);
      f_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_108;
  {
    ATerm g_108 (ATerm t)
    {
      ATerm d_81 = t;
      int e_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_81);
        }
      else
        {
          t = d_81;
          {
            ATerm f_81 = t;
            int g_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_26 = NULL,j_26 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_26 = ATgetFirst((ATermList) t);
                    j_26 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_108;
                {
                  ATerm g_22 (ATerm t)
                  {
                    ATerm k_26 = NULL;
                    k_26 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_26, k_26);
                    t = g_123(t);
                    return(t);
                  }
                  t = fetch_1_0(g_22, t);
                  t = j_26;
                  t = g_108(t);
                }
                ;
                LocalPopChoice(g_81);
              }
            else
              {
                t = f_81;
                t = Cons_2_0(_id, g_108, t);
              }
          }
        }
      return(t);
    }
    t = g_108(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t)
{
  ATerm h_108 (ATerm t)
  {
    ATerm h_81 = t;
    int i_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_121(t);
        ;
        LocalPopChoice(i_81);
      }
    else
      {
        t = h_81;
        t = l_121(t);
        t = _2_0(n_121, h_108, t);
        t = m_121(t);
      }
    return(t);
  }
  t = h_108(t);
  return(t);
}
ATerm i_22 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_81 = ATgetArgument(t, 0);
      if(((ATgetType(j_81) != AT_LIST) || !(ATisEmpty(j_81))))
        _fail(t);
      {
        ATerm k_81 = ATgetArgument(t, 1);
        if(((ATgetType(k_81) != AT_LIST) || !(ATisEmpty(k_81))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_22 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_81 = ATgetArgument(t, 0);
      if(((ATgetType(l_81) == AT_LIST) && !(ATisEmpty(l_81))))
        {
          r_108 = ATgetFirst((ATermList) l_81);
          t_108 = (ATerm) ATgetNext((ATermList) l_81);
        }
      else
        _fail(t);
      {
        ATerm m_81 = ATgetArgument(t, 1);
        if(((ATgetType(m_81) == AT_LIST) && !(ATisEmpty(m_81))))
          {
            s_108 = ATgetFirst((ATermList) m_81);
            u_108 = (ATerm) ATgetNext((ATermList) m_81);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_108, s_108), (ATerm) ATmakeAppl(sym__2, t_108, u_108));
  return(t);
}
ATerm k_22 (ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL;
  if(match_cons(t, sym__2))
    {
      v_108 = ATgetArgument(t, 0);
      w_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_108), v_108);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,q_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_81 = ATgetFirst((ATermList) t);
      if(match_cons(n_81, sym__2))
        {
          j_108 = ATgetArgument(n_81, 0);
          k_108 = ATgetArgument(n_81, 1);
        }
      else
        _fail(t);
      l_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_108);
  if(match_cons(t, sym__2))
    {
      m_108 = ATgetArgument(t, 0);
      n_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_108);
  if(match_cons(t, sym__2))
    {
      if((m_108 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_108, n_108);
  t = genzip_4_0(i_22, j_22, k_22, _id, t);
  q_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_108, l_108);
  {
    ATerm o_81 = t;
    int p_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_81 = ATgetArgument(t, 0);
            ATerm s_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_108;
        {
          ATerm m_22 (ATerm t)
          {
            t = l_108;
            return(t);
          }
          t = at_end_1_0(m_22, t);
        }
        ;
        LocalPopChoice(p_81);
      }
    else
      {
        t = o_81;
        {
          ATerm q_26 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_108, l_108));
          if(match_cons(t, sym__2))
            {
              ATerm t_81 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_81) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_26;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm a_109 (ATerm t)
  {
    ATerm u_81 = t;
    int v_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_113(t);
        ;
        LocalPopChoice(v_81);
      }
    else
      {
        t = u_81;
        t = h_113(t);
        t = a_109(t);
      }
    return(t);
  }
  t = a_109(t);
  return(t);
}
ATerm for_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t)
{
  t = j_113(t);
  t = while_not_2_0(k_113, l_113, t);
  return(t);
}
ATerm n_22 (ATerm t)
{
  ATerm f_109 = NULL;
  f_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_109);
  return(t);
}
ATerm o_22 (ATerm t)
{
  t = _2_0(_id, r_22, t);
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm x_81 = t;
  int y_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, s_22, t);
      ;
      LocalPopChoice(y_81);
    }
  else
    {
      t = x_81;
      {
        ATerm o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL;
        if(match_cons(t, sym__2))
          {
            o_109 = ATgetArgument(t, 0);
            p_109 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_109;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_109 = ATgetFirst((ATermList) t);
            r_109 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_109), q_109), r_109);
      }
    }
  return(t);
}
ATerm r_22 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm a_82 = t;
  int b_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_109 = ATgetFirst((ATermList) t);
          k_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_109;
      if(match_cons(t, sym__2))
        {
          i_109 = ATgetArgument(t, 0);
          j_109 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_109;
      if((i_109 != t))
        {
          _fail(t);
        }
      t = k_109;
      ;
      LocalPopChoice(b_82);
    }
  else
    {
      t = a_82;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm v_109 = NULL;
  if(match_cons(t, sym__2))
    {
      v_109 = ATgetArgument(t, 0);
      if((v_109 != ATgetArgument(t, 1)))
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
  ATerm e_82 = t;
  int f_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(n_22, o_22, p_22, t);
      ;
      LocalPopChoice(f_82);
    }
  else
    {
      t = e_82;
      t = diff_1_0(t_22, t);
    }
  return(t);
}
ATerm v_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_22 (ATerm t)
{
  t = union_1_0(a_23, t);
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm d_27 = NULL;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      if((d_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_23 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_23 (ATerm t)
{
  t = union_1_0(e_23, t);
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm l_27 = NULL;
  if(match_cons(t, sym__2))
    {
      l_27 = ATgetArgument(t, 0);
      if((l_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_110 (ATerm t)
  {
    ATerm g_82 = t;
    int h_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_140(t);
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
              ATerm w_109 = NULL,y_109 = NULL,x_26 = NULL,y_26 = NULL;
              w_109 = t;
              t = l_140(t);
              y_109 = t;
              t = w_109;
              {
                ATerm u_22 (ATerm t)
                {
                  ATerm t_26 = NULL;
                  t = b_110(t);
                  t_26 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_26, y_109);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_140(u_22, b_110, v_22, t);
                x_26 = t;
                t = SSL_explode_term(x_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_82 = ATgetArgument(t, 0);
                    y_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_26;
                t = foldr_3_0(x_22, y_22, _id, t);
              }
              ;
              LocalPopChoice(j_82);
            }
          else
            {
              t = i_82;
              {
                ATerm e_27 = NULL,f_27 = NULL;
                e_27 = t;
                t = SSL_explode_term(e_27);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_82 = ATgetArgument(t, 0);
                    f_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_27;
                t = foldr_3_0(b_23, d_23, b_110, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_110(t);
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm k_110 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_110);
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm n_82 = t;
  int p_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_82);
    }
  else
    {
      t = n_82;
      {
        ATerm m_110 = NULL,q_110 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_110 = ATgetArgument(t, 0);
            t = m_110;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm q_82 = t;
            int r_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm s_82 = ATgetArgument(t, 0);
                    ATerm t_82 = ATgetArgument(t, 1);
                    q_110 = ATgetArgument(t, 2);
                    {
                      ATerm u_82 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(r_82);
                t = q_110;
                t = map_1_0(i_23, t);
              }
            else
              {
                t = q_82;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm v_82 = ATgetArgument(t, 0);
                    ATerm w_82 = ATgetArgument(t, 1);
                    q_110 = ATgetArgument(t, 2);
                    {
                      ATerm x_82 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = q_110;
                t = map_1_0(j_23, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_23 (ATerm t)
{
  ATerm a_111 = NULL;
  ATerm y_82 = t;
  int z_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_111 = ATgetArgument(t, 0);
          {
            ATerm a_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_82);
      t = a_111;
    }
  else
    {
      t = y_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_111;
    }
  return(t);
}
ATerm j_23 (ATerm t)
{
  ATerm g_111 = NULL;
  ATerm b_83 = t;
  int c_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_111 = ATgetArgument(t, 0);
          {
            ATerm d_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_83);
      t = g_111;
    }
  else
    {
      t = b_83;
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
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL,i_110 = NULL,j_110 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm e_83 = ATgetArgument(t, 0);
      if(match_cons(e_83, sym_Rule_3))
        {
          f_110 = ATgetArgument(e_83, 0);
          g_110 = ATgetArgument(e_83, 1);
          i_110 = ATgetArgument(e_83, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = f_110;
  t = free_vars_3_0(f_23, h_23, tboundin_3_0, t);
  j_110 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_110, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, f_110, g_110, i_110)));
  return(t);
}
ATerm bottomup_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm k_23 (ATerm t)
  {
    t = bottomup_1_0(q_113, t);
    return(t);
  }
  t = SRTS_all(k_23, t);
  t = q_113(t);
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL;
  c_112 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_83 = t;
    int g_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_28 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue)), c_112);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_28 = ATgetFirst((ATermList) t);
            {
              ATerm h_83 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = o_28;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm i_83 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_83) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, d_112, (ATerm) ATempty);
        ;
        LocalPopChoice(g_83);
      }
    else
      {
        t = f_83;
        {
          ATerm t_29 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue)), c_112);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_29 = ATgetFirst((ATermList) t);
              {
                ATerm j_83 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = t_29;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm k_83 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_83) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, d_112, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm h_115 (ATerm), ATerm t)
{
  ATerm i_112 (ATerm t)
  {
    ATerm l_83 = t;
    int m_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_115(t);
        ;
        LocalPopChoice(m_83);
      }
    else
      {
        t = l_83;
        t = SRTS_all(i_112, t);
      }
    return(t);
  }
  t = i_112(t);
  return(t);
}
ATerm assert_1_0 (ATerm d_130 (ATerm), ATerm t)
{
  ATerm j_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL;
  if(match_cons(t, sym__2))
    {
      j_112 = ATgetArgument(t, 0);
      m_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_130(t);
  n_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_112, j_112, m_112);
  t = table_push_0_0(t);
  {
    ATerm n_83 = t;
    int o_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_112, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_83);
      }
    else
      {
        t = n_83;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_112 = ATgetFirst((ATermList) t);
        p_112 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_112, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_112), (ATerm) ATinsert(CheckATermList(o_112), j_112)));
    t = (ATerm) ATmakeAppl(sym__2, j_112, m_112);
  }
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = term_p_83;
  return(t);
}
ATerm m_23 (ATerm t)
{
  t = term_p_83;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm v_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      x_112 = ATgetArgument(t, 0);
      y_112 = ATgetArgument(t, 1);
      v_112 = ATgetArgument(t, 2);
      t = y_112;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_112), term_r_83);
      t = assert_1_0(l_23, t);
      t = (ATerm) ATmakeAppl(sym_Overlay_3, x_112, (ATerm)ATempty, v_112);
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          x_112 = ATgetArgument(t, 0);
          y_112 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_112;
      if(match_cons(t, sym_ConstType_1))
        {
          z_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_112), term_t_83);
      t = assert_1_0(m_23, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_112, (ATerm) ATmakeAppl(sym_ConstType_1, z_112));
    }
  return(t);
}
ATerm Overlays_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm o_113 = NULL,s_113 = NULL,u_113 = NULL,w_113 = NULL;
  w_113 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      s_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_113);
  o_113 = t;
  t = s_113;
  t = l_98(t);
  u_113 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, u_113), o_113);
  return(t);
}
ATerm Constructors_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm a_114 = NULL,b_114 = NULL,c_114 = NULL,d_114 = NULL;
  d_114 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      b_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_114);
  a_114 = t;
  t = b_114;
  t = g_99(t);
  c_114 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, c_114), a_114);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm m_114 = NULL,o_114 = NULL,q_114 = NULL;
  if(match_cons(t, sym__2))
    {
      m_114 = ATgetArgument(t, 0);
      o_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_114, o_114);
  {
    ATerm u_83 = t;
    int v_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_83 = ATgetArgument(t, 0);
            ATerm x_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_114, o_114);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_83 = ATgetFirst((ATermList) t);
            d_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_30;
        ;
        LocalPopChoice(v_83);
      }
    else
      {
        t = u_83;
        t = (ATerm) ATempty;
      }
    q_114 = t;
    t = SSL_table_put(m_114, o_114, q_114);
    t = (ATerm) ATmakeAppl(sym__2, m_114, o_114);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL;
  c_115 = t;
  t = a_130(t);
  d_115 = t;
  {
    ATerm z_83 = t;
    int a_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_115, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_84);
      }
    else
      {
        t = z_83;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_115 = ATgetFirst((ATermList) t);
        e_115 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_115, (ATerm)ATmakeAppl(sym_Scopes_0), e_115);
    t = f_115;
    {
      ATerm n_23 (ATerm t)
      {
        ATerm g_115 = NULL;
        g_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_115, g_115);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(n_23, t);
      t = c_115;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t)
{
  ATerm b_84 = t;
  int c_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_112(t);
      t = l_112(t);
      ;
      LocalPopChoice(c_84);
    }
  else
    {
      t = b_84;
      t = l_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
  l_115 = t;
  t = z_129(t);
  m_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_115, term_d_84);
  {
    ATerm e_84 = t;
    int f_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_84 = ATgetArgument(t, 0);
            ATerm h_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_115, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_84);
      }
    else
      {
        t = e_84;
        t = (ATerm) ATempty;
      }
    n_115 = t;
    t = SSL_table_put(m_115, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_115), (ATerm) ATempty));
    t = l_115;
  }
  return(t);
}
ATerm scope_2_0 (ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(b_130, t);
  {
    ATerm o_23 (ATerm t)
    {
      t = end_scope_1_0(b_130, t);
      return(t);
    }
    t = restore_always_2_0(c_130, o_23, t);
  }
  return(t);
}
ATerm p_23 (ATerm t)
{
  t = term_p_83;
  return(t);
}
ATerm q_23 (ATerm t)
{
  t = Specification_1_0(r_23, t);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm r_23 (ATerm t)
{
  t = map_1_0(s_23, t);
  return(t);
}
ATerm s_23 (ATerm t)
{
  ATerm i_84 = t;
  int j_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_84 = t;
      int o_84 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Constructors_1_0(t_23, t);
          ;
          LocalPopChoice(o_84);
        }
      else
        {
          t = m_84;
          t = Overlays_1_0(x_23, t);
        }
      ;
      LocalPopChoice(j_84);
    }
  else
    {
      t = i_84;
    }
  return(t);
}
ATerm t_23 (ATerm t)
{
  t = map_1_0(u_23, t);
  return(t);
}
ATerm u_23 (ATerm t)
{
  ATerm p_84 = t;
  int s_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(s_84);
    }
  else
    {
      t = p_84;
    }
  return(t);
}
ATerm x_23 (ATerm t)
{
  t = map_1_0(y_23, t);
  return(t);
}
ATerm y_23 (ATerm t)
{
  ATerm u_84 = t;
  int w_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(w_84);
    }
  else
    {
      t = u_84;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(p_23, q_23, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_126 (ATerm), ATerm t)
{
  ATerm x_84 = t;
  int y_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_84);
    }
  else
    {
      t = x_84;
      {
        ATerm z_84 = t;
        int a_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_23 (ATerm t)
            {
              t = filter_1_0(l_126, t);
              return(t);
            }
            t = Cons_2_0(l_126, z_23, t);
            ;
            LocalPopChoice(a_85);
          }
        else
          {
            t = z_84;
            {
              ATerm w_115 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_85 = ATgetFirst((ATermList) t);
                  w_115 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_115;
              t = filter_1_0(l_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm InsertBSpec_0_0 (ATerm t)
{
  ATerm h_116 = NULL,i_116 = NULL,k_116 = NULL,m_116 = NULL;
  if(match_cons(t, sym__2))
    {
      h_116 = ATgetArgument(t, 0);
      i_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_116);
  if(match_cons(t, sym__2))
    {
      k_116 = ATgetArgument(t, 0);
      {
        ATerm c_85 = ATgetArgument(t, 1);
        if(((ATgetType(c_85) == AT_LIST) && !(ATisEmpty(c_85))))
          {
            m_116 = ATgetFirst((ATermList) c_85);
            {
              ATerm d_85 = (ATerm) ATgetNext((ATermList) c_85);
              if(((ATgetType(d_85) != AT_LIST) || !(ATisEmpty(d_85))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_116;
  {
    ATerm b_24 (ATerm t)
    {
      ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
      n_116 = t;
      t = SSL_explode_term(n_116);
      if(match_cons(t, sym__2))
        {
          if((k_116 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm e_85 = ATgetArgument(t, 1);
            if(((ATgetType(e_85) == AT_LIST) && !(ATisEmpty(e_85))))
              {
                o_116 = ATgetFirst((ATermList) e_85);
                {
                  ATerm f_85 = (ATerm) ATgetNext((ATermList) e_85);
                  if(((ATgetType(f_85) != AT_LIST) || !(ATisEmpty(f_85))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, o_116, m_116);
      {
        ATerm g_85 = t;
        int h_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_24 (ATerm t)
            {
              t = m_116;
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                ATerm i_85 = ATgetArgument(t, 0);
                ATerm j_85 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_116;
            t = at_end_1_0(c_24, t);
            ;
            LocalPopChoice(h_85);
          }
        else
          {
            t = g_85;
            {
              ATerm m_30 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_116, m_116));
              if(match_cons(t, sym__2))
                {
                  ATerm k_85 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_85) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  m_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_30;
              t = concat_0_0(t);
            }
          }
        p_116 = t;
        t = SSL_mkterm(k_116, (ATerm) ATinsert(ATempty, p_116));
      }
      return(t);
    }
    t = fetch_1_0(b_24, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t)
{
  ATerm l_85 = t;
  int m_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_125(t);
      ;
      LocalPopChoice(m_85);
    }
  else
    {
      t = l_85;
      {
        ATerm w_116 = NULL,x_116 = NULL,a_117 = NULL,b_117 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_116 = ATgetFirst((ATermList) t);
            x_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_116;
        t = m_125(t);
        a_117 = t;
        t = x_116;
        t = foldr_3_0(k_125, l_125, m_125, t);
        b_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_117, b_117);
        t = l_125(t);
      }
    }
  return(t);
}
ATerm d_24 (ATerm t)
{
  t = foldr_3_0(e_24, InsertBSpec_0_0, l_24, t);
  return(t);
}
ATerm e_24 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_85), term_o_85), term_n_85);
  return(t);
}
ATerm l_24 (ATerm t)
{
  ATerm q_85 = t;
  int r_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_85 = t;
      int t_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_30 = NULL,r_30 = NULL;
          if(match_cons(t, sym_Signature_1))
            {
              q_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_30;
          t = filter_1_0(m_24, t);
          t = concat_0_0(t);
          r_30 = t;
          t = (ATerm) ATmakeAppl(sym_Constructors_1, r_30);
          ;
          LocalPopChoice(t_85);
        }
      else
        {
          t = s_85;
          {
            ATerm f_117 = NULL;
            if(match_cons(t, sym_Rules_1))
              {
                f_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Strategies_1, f_117);
          }
        }
      ;
      LocalPopChoice(r_85);
    }
  else
    {
      t = q_85;
    }
  return(t);
}
ATerm m_24 (ATerm t)
{
  ATerm y_30 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_30;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  t = Specification_1_0(d_24, t);
  return(t);
}
ATerm n_24 (ATerm t)
{
  ATerm u_85 = t;
  int v_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(v_85);
    }
  else
    {
      t = u_85;
    }
  return(t);
}
ATerm o_24 (ATerm t)
{
  ATerm w_85 = t;
  int x_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_85 = t;
      int z_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(z_85);
        }
      else
        {
          t = y_85;
          {
            ATerm n_117 = NULL,p_117 = NULL;
            if(match_cons(t, sym_ScopeDefault_1))
              {
                n_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_117;
            t = free_vars_3_0(p_24, q_24, tboundin_3_0, t);
            p_117 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, p_117, n_117);
          }
        }
      ;
      LocalPopChoice(x_85);
    }
  else
    {
      t = w_85;
    }
  return(t);
}
ATerm p_24 (ATerm t)
{
  ATerm q_117 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_117);
  return(t);
}
ATerm q_24 (ATerm t)
{
  ATerm a_86 = t;
  int b_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_86);
    }
  else
    {
      t = a_86;
      {
        ATerm s_117 = NULL,u_117 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_117 = ATgetArgument(t, 0);
            t = s_117;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm c_86 = t;
            int d_86 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm e_86 = ATgetArgument(t, 0);
                    ATerm f_86 = ATgetArgument(t, 1);
                    u_117 = ATgetArgument(t, 2);
                    {
                      ATerm g_86 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(d_86);
                t = u_117;
                t = map_1_0(r_24, t);
              }
            else
              {
                t = c_86;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm h_86 = ATgetArgument(t, 0);
                    ATerm i_86 = ATgetArgument(t, 1);
                    u_117 = ATgetArgument(t, 2);
                    {
                      ATerm j_86 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_117;
                t = map_1_0(s_24, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_24 (ATerm t)
{
  ATerm a_118 = NULL;
  ATerm k_86 = t;
  int l_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_118 = ATgetArgument(t, 0);
          {
            ATerm m_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_86);
      t = a_118;
    }
  else
    {
      t = k_86;
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
ATerm s_24 (ATerm t)
{
  ATerm i_118 = NULL;
  ATerm n_86 = t;
  int o_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_118 = ATgetArgument(t, 0);
          {
            ATerm q_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_86);
      t = i_118;
    }
  else
    {
      t = n_86;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_118;
    }
  return(t);
}
ATerm t_24 (ATerm t)
{
  t = Cons_2_0(_id, v_24, t);
  return(t);
}
ATerm v_24 (ATerm t)
{
  t = Cons_2_0(_id, w_24, t);
  return(t);
}
ATerm w_24 (ATerm t)
{
  t = Cons_2_0(y_24, z_24, t);
  return(t);
}
ATerm y_24 (ATerm t)
{
  t = Strategies_1_0(a_25, t);
  return(t);
}
ATerm z_24 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_25 (ATerm t)
{
  t = topdown_1_0(h_25, t);
  t = listtd_1_0(i_25, t);
  return(t);
}
ATerm h_25 (ATerm t)
{
  ATerm r_86 = t;
  int s_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(s_86);
    }
  else
    {
      t = r_86;
    }
  return(t);
}
ATerm i_25 (ATerm t)
{
  t = repeat_1_0(lift_dynamic_rule_0_0, t);
  return(t);
}
ATerm j_25 (ATerm t)
{
  ATerm t_86 = t;
  int u_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(u_86);
    }
  else
    {
      t = t_86;
    }
  return(t);
}
ATerm k_25 (ATerm t)
{
  t = fetch_1_0(l_25, t);
  return(t);
}
ATerm l_25 (ATerm t)
{
  ATerm l_118 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      l_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, l_118)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  t = topdown_1_0(n_24, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(o_24, t);
  t = Specification_1_0(t_24, t);
  t = topdown_1_0(j_25, t);
  t = Specification_1_0(k_25, t);
  return(t);
}
ATerm Op_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,w_118 = NULL,x_118 = NULL;
  x_118 = t;
  if(match_cons(t, sym_Op_2))
    {
      s_118 = ATgetArgument(t, 0);
      t_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_118);
  r_118 = t;
  t = s_118;
  t = n_99(t);
  u_118 = t;
  t = t_118;
  t = o_99(t);
  w_118 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, u_118, w_118), r_118);
  return(t);
}
ATerm OpDecl_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  ATerm d_119 = NULL,f_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL;
  l_119 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      f_119 = ATgetArgument(t, 0);
      i_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_119);
  d_119 = t;
  t = f_119;
  t = x_98(t);
  j_119 = t;
  t = i_119;
  t = y_98(t);
  k_119 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, j_119, k_119), d_119);
  return(t);
}
ATerm SVar_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,t_119 = NULL,u_119 = NULL;
  u_119 = t;
  if(match_cons(t, sym_SVar_1))
    {
      q_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_119);
  p_119 = t;
  t = q_119;
  t = q_102(t);
  t_119 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, t_119), p_119);
  return(t);
}
ATerm Var_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL;
  c_120 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_120);
  z_119 = t;
  t = a_120;
  t = h_99(t);
  b_120 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, b_120), z_119);
  return(t);
}
ATerm VarDec_2_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,u_120 = NULL,v_120 = NULL;
  v_120 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_120 = ATgetArgument(t, 0);
      n_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_120);
  l_120 = t;
  t = m_120;
  t = c_105(t);
  o_120 = t;
  t = n_120;
  t = d_105(t);
  u_120 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, o_120, u_120), l_120);
  return(t);
}
ATerm RDef_3_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm t)
{
  ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL;
  g_121 = t;
  if(match_cons(t, sym_RDef_3))
    {
      a_121 = ATgetArgument(t, 0);
      b_121 = ATgetArgument(t, 1);
      c_121 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_121);
  z_120 = t;
  t = a_121;
  t = m_101(t);
  d_121 = t;
  t = b_121;
  t = n_101(t);
  e_121 = t;
  t = c_121;
  t = o_101(t);
  f_121 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, d_121, e_121, f_121), z_120);
  return(t);
}
ATerm RDefT_4_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t)
{
  ATerm j_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL;
  x_121 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      p_121 = ATgetArgument(t, 0);
      q_121 = ATgetArgument(t, 1);
      r_121 = ATgetArgument(t, 2);
      s_121 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_121);
  j_121 = t;
  t = p_121;
  t = p_101(t);
  t_121 = t;
  t = q_121;
  t = q_101(t);
  u_121 = t;
  t = r_121;
  t = r_101(t);
  v_121 = t;
  t = s_121;
  t = s_101(t);
  w_121 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, t_121, u_121, v_121, w_121), j_121);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL;
  d_122 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_122);
  a_122 = t;
  t = b_122;
  t = b_105(t);
  c_122 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, c_122), a_122);
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  t = SSL_explode_string(b_34);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_86 = ATgetFirst((ATermList) t);
      if(((ATgetType(v_86) != AT_INT) || (ATgetInt((ATermInt) v_86) != 39)))
        _fail(t);
      c_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(c_34);
  return(t);
}
ATerm n_25 (ATerm t)
{
  ATerm g_34 = NULL,q_34 = NULL;
  g_34 = t;
  t = SSL_explode_string(g_34);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_86 = ATgetFirst((ATermList) t);
      if(((ATgetType(w_86) != AT_INT) || (ATgetInt((ATermInt) w_86) != 39)))
        _fail(t);
      q_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(q_34);
  return(t);
}
ATerm o_25 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  t = SSL_explode_string(i_35);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_86 = ATgetFirst((ATermList) t);
      if(((ATgetType(x_86) != AT_INT) || (ATgetInt((ATermInt) x_86) != 39)))
        _fail(t);
      j_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(j_35);
  return(t);
}
ATerm p_25 (ATerm t)
{
  ATerm z_35 = NULL,f_36 = NULL;
  z_35 = t;
  t = SSL_explode_string(z_35);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_86 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_86) != AT_INT) || (ATgetInt((ATermInt) y_86) != 39)))
        _fail(t);
      f_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(f_36);
  return(t);
}
ATerm q_25 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  m_36 = t;
  t = SSL_explode_string(m_36);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_86 = ATgetFirst((ATermList) t);
      if(((ATgetType(z_86) != AT_INT) || (ATgetInt((ATermInt) z_86) != 39)))
        _fail(t);
      n_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(n_36);
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  t = SSL_explode_string(x_36);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_87 = ATgetFirst((ATermList) t);
      if(((ATgetType(a_87) != AT_INT) || (ATgetInt((ATermInt) a_87) != 39)))
        _fail(t);
      y_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(y_36);
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL;
  u_37 = t;
  t = SSL_explode_string(u_37);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_87 = ATgetFirst((ATermList) t);
      if(((ATgetType(b_87) != AT_INT) || (ATgetInt((ATermInt) b_87) != 39)))
        _fail(t);
      v_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(v_37);
  return(t);
}
ATerm v_25 (ATerm t)
{
  ATerm a_38 = NULL,c_38 = NULL;
  a_38 = t;
  t = SSL_explode_string(a_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_87 = ATgetFirst((ATermList) t);
      if(((ATgetType(c_87) != AT_INT) || (ATgetInt((ATermInt) c_87) != 39)))
        _fail(t);
      c_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(c_38);
  return(t);
}
ATerm a_26 (ATerm t)
{
  ATerm k_38 = NULL,m_38 = NULL;
  k_38 = t;
  t = SSL_explode_string(k_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_87 = ATgetFirst((ATermList) t);
      if(((ATgetType(d_87) != AT_INT) || (ATgetInt((ATermInt) d_87) != 39)))
        _fail(t);
      m_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(m_38);
  return(t);
}
ATerm c_26 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  p_38 = t;
  t = SSL_explode_string(p_38);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_87 = ATgetFirst((ATermList) t);
      if(((ATgetType(f_87) != AT_INT) || (ATgetInt((ATermInt) f_87) != 39)))
        _fail(t);
      q_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(q_38);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm g_87 = t;
  int h_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL;
      z_122 = t;
      if(match_cons(t, sym_Real_1))
        {
          a_123 = ATgetArgument(t, 0);
          {
            ATerm u_31 = NULL;
            t = SSL_string_to_real(a_123);
            u_31 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, u_31);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              a_123 = ATgetArgument(t, 0);
              {
                ATerm t_32 = NULL;
                t = SSL_string_to_int(a_123);
                t_32 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, t_32);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  a_123 = ATgetArgument(t, 0);
                  b_123 = ATgetArgument(t, 1);
                  c_123 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSL_is_string(c_123);
              t = (ATerm) ATmakeAppl(sym_Con_3, a_123, b_123, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_123), (ATerm) ATempty));
            }
        }
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
            t = DefaultVarDec_1_0(m_25, t);
            ;
            LocalPopChoice(j_87);
          }
        else
          {
            t = i_87;
            {
              ATerm k_87 = t;
              int l_87 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(n_25, _id, _id, _id, t);
                  ;
                  LocalPopChoice(l_87);
                }
              else
                {
                  t = k_87;
                  {
                    ATerm n_87 = t;
                    int o_87 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = RDef_3_0(o_25, _id, _id, t);
                        ;
                        LocalPopChoice(o_87);
                      }
                    else
                      {
                        t = n_87;
                        {
                          ATerm p_87 = t;
                          int q_87 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = SDefT_4_0(p_25, _id, _id, _id, t);
                              ;
                              LocalPopChoice(q_87);
                            }
                          else
                            {
                              t = p_87;
                              {
                                ATerm r_87 = t;
                                int s_87 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SDef_3_0(q_25, _id, _id, t);
                                    ;
                                    LocalPopChoice(s_87);
                                  }
                                else
                                  {
                                    t = r_87;
                                    {
                                      ATerm t_87 = t;
                                      int u_87 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = VarDec_2_0(t_25, _id, t);
                                          ;
                                          LocalPopChoice(u_87);
                                        }
                                      else
                                        {
                                          t = t_87;
                                          {
                                            ATerm v_87 = t;
                                            int w_87 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Var_1_0(u_25, t);
                                                ;
                                                LocalPopChoice(w_87);
                                              }
                                            else
                                              {
                                                t = v_87;
                                                {
                                                  ATerm x_87 = t;
                                                  int y_87 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = SVar_1_0(v_25, t);
                                                      ;
                                                      LocalPopChoice(y_87);
                                                    }
                                                  else
                                                    {
                                                      t = x_87;
                                                      {
                                                        ATerm z_87 = t;
                                                        int a_88 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = OpDecl_2_0(a_26, _id, t);
                                                            ;
                                                            LocalPopChoice(a_88);
                                                          }
                                                        else
                                                          {
                                                            t = z_87;
                                                            t = Op_2_0(c_26, _id, t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm h_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm i_120 (ATerm), ATerm t)
{
  ATerm i_123 (ATerm t)
  {
    ATerm b_88 = t;
    int c_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_26, t);
        t = i_120(t);
        ;
        LocalPopChoice(c_88);
      }
    else
      {
        t = b_88;
        t = Cons_2_0(_id, i_123, t);
      }
    return(t);
  }
  t = i_123(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_123 = ATgetFirst((ATermList) t);
      r_123 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_123;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm d_88 = t;
      int e_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_123;
          ;
          LocalPopChoice(e_88);
        }
      else
        {
          t = d_88;
          t = r_123;
          t = last_0_0(t);
        }
    }
  else
    {
      t = r_123;
      t = last_0_0(t);
    }
  return(t);
}
ATerm l_26 (ATerm t)
{
  ATerm z_123 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_88 = ATgetFirst((ATermList) t);
      z_123 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_123;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm w_123 = NULL,x_123 = NULL,y_123 = NULL;
  w_123 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_123 = ATgetFirst((ATermList) t);
      {
        ATerm g_88 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_123;
  t = j_128(t);
  t = w_123;
  t = last_0_0(t);
  t = j_128(t);
  t = w_123;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_88 = ATgetFirst((ATermList) t);
      y_123 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_123;
  t = at_last_1_0(l_26, t);
  return(t);
}
ATerm m_129 (ATerm x_124, ATerm z_124, ATerm t)
{
  t = x_124;
  {
    ATerm i_88 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_88;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_i_32, x_124);
  }
  return(t);
}
ATerm n_129 (ATerm b_125, ATerm c_125, ATerm t)
{
  t = b_125;
  {
    ATerm j_88 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_88;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_k_88, b_125);
  }
  return(t);
}
ATerm o_129 (ATerm e_125, ATerm f_125, ATerm g_125, ATerm t)
{
  ATerm o_125 = NULL;
  t = e_125;
  {
    ATerm l_88 = t;
    int m_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_38 = NULL;
        t = SSL_explode_string(e_125);
        t = unquote_chars_1_0(o_26, t);
        s_38 = t;
        t = SSL_implode_string(s_38);
        ;
        LocalPopChoice(m_88);
      }
    else
      {
        t = l_88;
      }
    o_125 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, o_125, (ATerm)ATempty, f_125);
  }
  return(t);
}
ATerm p_129 (ATerm p_125, ATerm q_125, ATerm t)
{
  ATerm s_125 = NULL;
  t = p_125;
  {
    ATerm n_88 = t;
    int o_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_38 = NULL;
        t = SSL_explode_string(p_125);
        t = unquote_chars_1_0(p_26, t);
        v_38 = t;
        t = SSL_implode_string(v_38);
        ;
        LocalPopChoice(o_88);
      }
    else
      {
        t = n_88;
      }
    s_125 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_125, (ATerm)ATempty, (ATerm) ATempty);
  }
  return(t);
}
ATerm m_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_26 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm p_26 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm r_26 (ATerm t)
{
  t = term_v_72;
  return(t);
}
ATerm s_26 (ATerm t)
{
  ATerm i_126 = NULL,e_39 = NULL,o_39 = NULL;
  i_126 = t;
  t = SSL_explode_term(i_126);
  if(match_cons(t, sym__2))
    {
      ATerm p_88 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_88) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_88 = ATgetArgument(t, 1);
        if(((ATgetType(q_88) == AT_LIST) && !(ATisEmpty(q_88))))
          {
            e_39 = ATgetFirst((ATermList) q_88);
            {
              ATerm r_88 = (ATerm) ATgetNext((ATermList) q_88);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(i_126);
  if(match_cons(t, sym__2))
    {
      ATerm s_88 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_88) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_88 = ATgetArgument(t, 1);
        if(((ATgetType(t_88) == AT_LIST) && !(ATisEmpty(t_88))))
          {
            ATerm u_88 = ATgetFirst((ATermList) t_88);
            ATerm v_88 = (ATerm) ATgetNext((ATermList) t_88);
            if(((ATgetType(v_88) == AT_LIST) && !(ATisEmpty(v_88))))
              {
                o_39 = ATgetFirst((ATermList) v_88);
                {
                  ATerm w_88 = (ATerm) ATgetNext((ATermList) v_88);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_x_88, (ATerm) ATinsert(ATinsert(ATempty, o_39), e_39));
  return(t);
}
ATerm v_26 (ATerm t)
{
  ATerm d_127 = NULL,e_127 = NULL;
  if(match_cons(t, sym__2))
    {
      d_127 = ATgetArgument(t, 0);
      e_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_x_88, (ATerm) ATinsert(ATinsert(ATempty, e_127), d_127));
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = term_v_72;
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL;
  if(match_cons(t, sym__2))
    {
      g_127 = ATgetArgument(t, 0);
      h_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_x_88, (ATerm) ATinsert(ATinsert(ATempty, h_127), g_127));
  return(t);
}
ATerm b_27 (ATerm t)
{
  ATerm s_127 = NULL,t_127 = NULL;
  if(match_cons(t, sym__2))
    {
      s_127 = ATgetArgument(t, 0);
      t_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_88, (ATerm) ATinsert(ATinsert(ATempty, t_127), s_127));
  return(t);
}
ATerm g_27 (ATerm t)
{
  t = term_a_89;
  return(t);
}
ATerm h_27 (ATerm t)
{
  ATerm v_127 = NULL,w_127 = NULL;
  if(match_cons(t, sym__2))
    {
      v_127 = ATgetArgument(t, 0);
      w_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_88, (ATerm) ATinsert(ATinsert(ATempty, w_127), v_127));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL;
  z_125 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_126 = ATgetArgument(t, 0);
      b_126 = ATgetArgument(t, 1);
      {
        ATerm h_126 = NULL;
        t = b_126;
        t = foldr_2_0(r_26, s_26, t);
        h_126 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_126, h_126);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          a_126 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, a_126, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              a_126 = ATgetArgument(t, 0);
              {
                ATerm t_39 = NULL;
                t = a_126;
                {
                  ATerm b_89 = t;
                  int c_89 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_d_89;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_e_89;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_f_89;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_g_89;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_h_89;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(c_89);
                    }
                  else
                    {
                      t = b_89;
                      {
                        ATerm w_39 = NULL;
                        t = SSL_explode_string(a_126);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm i_89 = ATgetFirst((ATermList) t);
                            if(((ATgetType(i_89) != AT_INT) || (ATgetInt((ATermInt) i_89) != 39)))
                              _fail(t);
                            {
                              ATerm j_89 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(j_89) == AT_LIST) && !(ATisEmpty(j_89))))
                                {
                                  w_39 = ATgetFirst((ATermList) j_89);
                                  {
                                    ATerm k_89 = (ATerm) ATgetNext((ATermList) j_89);
                                    if(((ATgetType(k_89) == AT_LIST) && !(ATisEmpty(k_89))))
                                      {
                                        ATerm l_89 = ATgetFirst((ATermList) k_89);
                                        if(((ATgetType(l_89) != AT_INT) || (ATgetInt((ATermInt) l_89) != 39)))
                                          _fail(t);
                                        {
                                          ATerm m_89 = (ATerm) ATgetNext((ATermList) k_89);
                                          if(((ATgetType(m_89) != AT_LIST) || !(ATisEmpty(m_89))))
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
                        t = w_39;
                      }
                    }
                  t_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, t_39);
                }
              }
            }
          else
            {
              ATerm n_89 = t;
              int o_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      a_126 = ATgetArgument(t, 0);
                      {
                        ATerm p_89 = ATgetArgument(t, 1);
                      }
                      y_125 = ATgetArgument(t, 2);
                      t_125 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_89);
                  t = (ATerm) ATmakeAppl(sym_Con_3, a_126, y_125, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_125), (ATerm) ATempty));
                }
              else
                {
                  t = n_89;
                  {
                    ATerm q_89 = t;
                    int r_89 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            a_126 = ATgetArgument(t, 0);
                            {
                              ATerm s_89 = ATgetArgument(t, 1);
                            }
                            y_125 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_89);
                        t = (ATerm) ATmakeAppl(sym_Con_3, a_126, y_125, term_v_89);
                      }
                    else
                      {
                        t = q_89;
                        if(match_cons(t, sym_Con1_2))
                          {
                            a_126 = ATgetArgument(t, 0);
                            b_126 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, a_126, b_126, term_v_89);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                a_126 = ATgetArgument(t, 0);
                                b_126 = ATgetArgument(t, 1);
                                {
                                  ATerm u_26 (ATerm t)
                                  {
                                    t = b_126;
                                    return(t);
                                  }
                                  t = a_126;
                                  t = foldr_2_0(u_26, v_26, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    a_126 = ATgetArgument(t, 0);
                                    t = a_126;
                                    t = foldr_2_0(w_26, z_26, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        a_126 = ATgetArgument(t, 0);
                                        t = a_126;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            u_125 = ATgetFirst((ATermList) t);
                                            v_125 = (ATerm) ATgetNext((ATermList) t);
                                            t = v_125;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm x_89 = t;
                                                int y_89 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_129(a_126, z_125, t);
                                                    ;
                                                    LocalPopChoice(y_89);
                                                  }
                                                else
                                                  {
                                                    t = x_89;
                                                    t = u_125;
                                                  }
                                              }
                                            else
                                              {
                                                t = m_129(a_126, z_125, t);
                                              }
                                          }
                                        else
                                          {
                                            t = m_129(a_126, z_125, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            a_126 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, a_126));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                a_126 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_126));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    a_126 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_126));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        a_126 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_126));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            a_126 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_126), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                a_126 = ATgetArgument(t, 0);
                                                                b_126 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_126), b_126);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    a_126 = ATgetArgument(t, 0);
                                                                    b_126 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm a_27 (ATerm t)
                                                                      {
                                                                        t = b_126;
                                                                        return(t);
                                                                      }
                                                                      t = a_126;
                                                                      t = foldr_2_0(a_27, b_27, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        a_126 = ATgetArgument(t, 0);
                                                                        t = a_126;
                                                                        t = foldr_2_0(g_27, h_27, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            a_126 = ATgetArgument(t, 0);
                                                                            b_126 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_k_88, (ATerm) ATinsert(CheckATermList(b_126), a_126));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                a_126 = ATgetArgument(t, 0);
                                                                                t = a_126;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    u_125 = ATgetFirst((ATermList) t);
                                                                                    v_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = v_125;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm z_89 = t;
                                                                                        int a_90 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = n_129(a_126, z_125, t);
                                                                                            ;
                                                                                            LocalPopChoice(a_90);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_89;
                                                                                            t = u_125;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_129(a_126, z_125, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_129(a_126, z_125, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_b_90;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        a_126 = ATgetArgument(t, 0);
                                                                                        b_126 = ATgetArgument(t, 1);
                                                                                        t = b_126;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            x_125 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_d_65, (ATerm) ATinsert(ATinsert(ATempty, x_125), a_126));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            a_126 = ATgetArgument(t, 0);
                                                                                            t = a_126;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                a_126 = ATgetArgument(t, 0);
                                                                                                b_126 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, a_126, b_126, term_f_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    a_126 = ATgetArgument(t, 0);
                                                                                                    b_126 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, a_126, b_126, term_f_34);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        a_126 = ATgetArgument(t, 0);
                                                                                                        b_126 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_126, (ATerm)ATempty, b_126);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            a_126 = ATgetArgument(t, 0);
                                                                                                            b_126 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, b_126, a_126);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                a_126 = ATgetArgument(t, 0);
                                                                                                                b_126 = ATgetArgument(t, 1);
                                                                                                                t = o_129(a_126, b_126, z_125, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    a_126 = ATgetArgument(t, 0);
                                                                                                                    t = p_129(a_126, z_125, t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        a_126 = ATgetArgument(t, 0);
                                                                                                                        b_126 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, a_126, b_126, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            a_126 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, a_126, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                a_126 = ATgetArgument(t, 0);
                                                                                                                                b_126 = ATgetArgument(t, 1);
                                                                                                                                y_125 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_126, b_126, (ATerm)ATempty, y_125);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    a_126 = ATgetArgument(t, 0);
                                                                                                                                    b_126 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, a_126, (ATerm)ATempty, (ATerm)ATempty, b_126);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        a_126 = ATgetArgument(t, 0);
                                                                                                                                        b_126 = ATgetArgument(t, 1);
                                                                                                                                        y_125 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_126, b_126, (ATerm)ATempty, y_125);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            a_126 = ATgetArgument(t, 0);
                                                                                                                                            b_126 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_126, (ATerm)ATempty, (ATerm)ATempty, b_126);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                a_126 = ATgetArgument(t, 0);
                                                                                                                                                b_126 = ATgetArgument(t, 1);
                                                                                                                                                y_125 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, a_126, b_126, (ATerm)ATempty, y_125);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    a_126 = ATgetArgument(t, 0);
                                                                                                                                                    b_126 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, a_126, (ATerm)ATempty, (ATerm)ATempty, b_126);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm c_90 = ATgetArgument(t, 0);
                                                                                                                                                        b_126 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, b_126);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm j_27 (ATerm t)
{
  ATerm t_129 = NULL,z_39 = NULL;
  t_129 = t;
  t = dtime_0_0(t);
  z_39 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_39), (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue))));
  t = t_129;
  return(t);
}
ATerm k_27 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm d_90 = t;
    int e_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(e_90);
      }
    else
      {
        t = d_90;
      }
  }
  return(t);
}
ATerm m_27 (ATerm t)
{
  ATerm u_129 = NULL,c_40 = NULL;
  u_129 = t;
  t = dtime_0_0(t);
  c_40 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_40), (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue))));
  t = u_129;
  return(t);
}
ATerm n_27 (ATerm t)
{
  ATerm v_129 = NULL,f_40 = NULL;
  v_129 = t;
  t = dtime_0_0(t);
  f_40 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_40), (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue))));
  t = v_129;
  return(t);
}
ATerm o_27 (ATerm t)
{
  ATerm w_129 = NULL,i_40 = NULL;
  w_129 = t;
  t = dtime_0_0(t);
  i_40 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_40), (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue))));
  t = w_129;
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm x_129 = NULL,y_40 = NULL;
  x_129 = t;
  t = dtime_0_0(t);
  y_40 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_40), (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue))));
  t = x_129;
  return(t);
}
ATerm q_27 (ATerm t)
{
  ATerm y_129 = NULL,b_41 = NULL;
  y_129 = t;
  t = dtime_0_0(t);
  b_41 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_41), (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue))));
  t = y_129;
  return(t);
}
ATerm s_27 (ATerm t)
{
  ATerm g_130 = NULL,g_41 = NULL;
  g_130 = t;
  t = dtime_0_0(t);
  g_41 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_41), (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue))));
  t = g_130;
  return(t);
}
ATerm w_27 (ATerm t)
{
  ATerm g_90 = t;
  int h_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_90 = t;
      int k_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          ;
          LocalPopChoice(k_90);
        }
      else
        {
          t = i_90;
          t = desugarRule_0_0(t);
        }
      ;
      LocalPopChoice(h_90);
    }
  else
    {
      t = g_90;
    }
  t = repeat_1_0(x_27, t);
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm l_90 = t;
  int m_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_90 = t;
      int o_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(o_90);
        }
      else
        {
          t = n_90;
          {
            ATerm p_90 = t;
            int q_90 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = ListMatch_0_0(t);
                ;
                LocalPopChoice(q_90);
              }
            else
              {
                t = p_90;
                t = ListBuild_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(m_90);
    }
  else
    {
      t = l_90;
      {
        ATerm i_130 = NULL,j_130 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            i_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_130;
        if(match_cons(t, sym_ListVar_1))
          {
            j_130 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_130);
      }
    }
  return(t);
}
ATerm y_27 (ATerm t)
{
  ATerm l_130 = NULL,o_41 = NULL;
  l_130 = t;
  t = dtime_0_0(t);
  o_41 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_41), (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue))));
  t = l_130;
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm m_130 = NULL,t_41 = NULL;
  m_130 = t;
  t = dtime_0_0(t);
  t_41 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_41), (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue))));
  t = m_130;
  return(t);
}
ATerm a_28 (ATerm t)
{
  t = Cons_2_0(_id, b_28, t);
  return(t);
}
ATerm b_28 (ATerm t)
{
  t = Cons_2_0(d_28, e_28, t);
  return(t);
}
ATerm d_28 (ATerm t)
{
  t = Strategies_1_0(f_28, t);
  return(t);
}
ATerm e_28 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = map_1_0(h_28, t);
  return(t);
}
ATerm h_28 (ATerm t)
{
  ATerm r_90 = t;
  int s_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(_id, _id, desugar_0_0, t);
      ;
      LocalPopChoice(s_90);
    }
  else
    {
      t = r_90;
      {
        ATerm t_90 = t;
        int u_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(_id, _id, _id, desugar_0_0, t);
            ;
            LocalPopChoice(u_90);
          }
        else
          {
            t = t_90;
            {
              ATerm z_41 = NULL;
              z_41 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_41), (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue))));
              t = z_41;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm s_129 = NULL;
  t = if_verbose3_1_0(j_27, t);
  t = topdown_1_0(k_27, t);
  t = if_verbose3_1_0(m_27, t);
  t = normalize_spec_0_0(t);
  t = if_verbose3_1_0(n_27, t);
  s_129 = t;
  t = spec_use_def_0_0(t);
  t = s_129;
  t = if_verbose3_1_0(o_27, t);
  t = ExpandOverlays_0_0(t);
  t = if_verbose3_1_0(p_27, t);
  t = CheckConstructors_0_0(t);
  t = if_verbose3_1_0(q_27, t);
  t = RulesToSdefs_0_0(t);
  t = if_verbose3_1_0(s_27, t);
  t = topdown_1_0(w_27, t);
  t = if_verbose3_1_0(y_27, t);
  t = strename_0_0(t);
  t = if_verbose3_1_0(z_27, t);
  t = Specification_1_0(a_28, t);
  return(t);
}
ATerm _2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm t)
{
  ATerm n_130 = NULL,o_130 = NULL,q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL;
  t_130 = t;
  if(match_cons(t, sym__2))
    {
      o_130 = ATgetArgument(t, 0);
      q_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_130);
  n_130 = t;
  t = o_130;
  t = q_93(t);
  r_130 = t;
  t = q_130;
  t = r_93(t);
  s_130 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_130, s_130), n_130);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_131 (ATerm), ATerm t)
{
  ATerm w_130 = NULL,x_130 = NULL,y_130 = NULL;
  if(match_cons(t, sym__2))
    {
      w_130 = ATgetArgument(t, 0);
      x_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_130, term_v_90);
  t = open_stream_0_0(t);
  y_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_130, x_130);
  t = w_131(t);
  t = fclose_0_0(t);
  t = x_130;
  return(t);
}
ATerm n_28 (ATerm t)
{
  t = fetch_1_0(q_28, t);
  return(t);
}
ATerm p_28 (ATerm t)
{
  t = WriteToFile_1_0(r_28, t);
  return(t);
}
ATerm q_28 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_28 (ATerm t)
{
  ATerm b_131 = NULL,c_131 = NULL,d_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_90 = ATgetArgument(t, 0);
      if(match_cons(w_90, sym_Stream_1))
        {
          b_131 = ATgetArgument(w_90, 0);
        }
      else
        _fail(t);
      c_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(b_131, c_131);
  d_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_131);
  return(t);
}
ATerm s_28 (ATerm t)
{
  t = WriteToFile_1_0(t_28, t);
  return(t);
}
ATerm t_28 (ATerm t)
{
  ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_90 = ATgetArgument(t, 0);
      if(match_cons(x_90, sym_Stream_1))
        {
          e_131 = ATgetArgument(x_90, 0);
        }
      else
        _fail(t);
      f_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(e_131, f_131);
  g_131 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), g_131);
  h_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_131);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL;
  z_130 = t;
  {
    ATerm i_28 (ATerm t)
    {
      ATerm y_90 = t;
      int z_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_28 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_131 != NULL) && (a_131 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_131 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_28, t);
          ;
          LocalPopChoice(z_90);
        }
      else
        {
          t = y_90;
          t = term_a_91;
          if(((a_131 != NULL) && (a_131 != t)))
            _fail(t);
          else
            a_131 = t;
        }
      return(t);
    }
    t = _2_0(i_28, _id, t);
    t = z_130;
    {
      ATerm m_28 (ATerm t)
      {
        ATerm y_42 = NULL;
        y_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_131), y_42);
        return(t);
      }
      t = _2_0(_id, m_28, t);
      {
        ATerm b_91 = t;
        int c_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_28, p_28, t);
            ;
            LocalPopChoice(c_91);
          }
        else
          {
            t = b_91;
            t = _2_0(_id, s_28, t);
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
ATerm apply_strategy_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm i_131 = NULL,j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL;
  i_131 = t;
  t = dtime_0_0(t);
  t = i_131;
  t = y_134(t);
  j_131 = t;
  t = dtime_0_0(t);
  k_131 = t;
  t = j_131;
  if(match_cons(t, sym__2))
    {
      l_131 = ATgetArgument(t, 0);
      m_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_131), (ATerm) ATmakeAppl(sym_Runtime_1, k_131)), m_131);
  return(t);
}
ATerm e_132 (ATerm v_131, ATerm t)
{
  t = SSL_fclose(v_131);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_131 = NULL,a_132 = NULL;
  a_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_131 = ATgetArgument(t, 0);
      {
        ATerm d_91 = t;
        int e_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_131);
            ;
            LocalPopChoice(e_91);
          }
        else
          {
            t = d_91;
            t = e_132(a_132, t);
          }
      }
    }
  else
    {
      t = e_132(a_132, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_132 = NULL;
  t = SSL_stdin_stream();
  f_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_132);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_132 = NULL;
  t = SSL_stdout_stream();
  g_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_132);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_132 = NULL;
  t = SSL_stderr_stream();
  h_132 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_132);
  return(t);
}
ATerm v_28 (ATerm t)
{
  ATerm p_132 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_132;
  return(t);
}
ATerm w_28 (ATerm t)
{
  ATerm t_132 = NULL;
  t_132 = t;
  t = SSL_is_string(t_132);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_91 = ATgetArgument(t, 0);
      ATerm g_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_91 = t;
    int i_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_46 = NULL,c_46 = NULL;
        b_46 = t;
        t = SSL_explode_term(b_46);
        if(match_cons(t, sym__2))
          {
            ATerm j_91 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_91) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_91 = ATgetArgument(t, 1);
              if(((ATgetType(k_91) == AT_LIST) && !(ATisEmpty(k_91))))
                {
                  c_46 = ATgetFirst((ATermList) k_91);
                  {
                    ATerm l_91 = (ATerm) ATgetNext((ATermList) k_91);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_46;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_46;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_46;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_46;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_91);
      }
    else
      {
        t = h_91;
        {
          ATerm m_91 = t;
          int n_91 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_132 = NULL,n_132 = NULL,o_132 = NULL;
              t = _2_0(v_28, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_132 = ATgetArgument(t, 0);
                  n_132 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_132, n_132);
              o_132 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_132);
              ;
              LocalPopChoice(n_91);
            }
          else
            {
              t = m_91;
              {
                ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL;
                t = _2_0(w_28, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_132 = ATgetArgument(t, 0);
                    r_132 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_132, r_132);
                s_132 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_132);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_132 = NULL,v_132 = NULL,w_132 = NULL;
  ATerm o_91 = t;
  int p_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_132 = NULL;
      x_132 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_132, term_q_91);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_91);
    }
  else
    {
      t = o_91;
      {
        ATerm d_46 = NULL;
        d_46 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_46), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = d_46;
        _fail(t);
      }
    }
  u_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_132);
  v_132 = t;
  t = u_132;
  t = fclose_0_0(t);
  t = v_132;
  return(t);
}
ATerm fetch_1_0 (ATerm r_119 (ATerm), ATerm t)
{
  ATerm e_133 (ATerm t)
  {
    ATerm r_91 = t;
    int s_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_119, _id, t);
        ;
        LocalPopChoice(s_91);
      }
    else
      {
        t = r_91;
        t = Cons_2_0(_id, e_133, t);
      }
    return(t);
  }
  t = e_133(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_91 = t;
  int u_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_91);
    }
  else
    {
      t = t_91;
      {
        ATerm k_133 = NULL,l_133 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_133 = ATgetFirst((ATermList) t);
            l_133 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_133;
        {
          ATerm x_28 (ATerm t)
          {
            t = l_133;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_28, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  ATerm r_133 (ATerm t)
  {
    ATerm v_91 = t;
    int w_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_133, t);
        ;
        LocalPopChoice(w_91);
      }
    else
      {
        t = v_91;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_119(t);
      }
    return(t);
  }
  t = r_133(t);
  return(t);
}
ATerm y_28 (ATerm t)
{
  ATerm u_133 = NULL;
  u_133 = t;
  t = SSL_explode_string(u_133);
  return(t);
}
ATerm g_29 (ATerm t)
{
  ATerm v_133 = NULL;
  v_133 = t;
  t = SSL_explode_string(v_133);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm t_133 = NULL;
  t = _2_0(y_28, g_29, t);
  {
    ATerm x_91 = t;
    int y_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_133 = NULL,z_133 = NULL;
        if(match_cons(t, sym__2))
          {
            y_133 = ATgetArgument(t, 0);
            z_133 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_133;
        {
          ATerm h_29 (ATerm t)
          {
            t = z_133;
            return(t);
          }
          t = at_end_1_0(h_29, t);
        }
        ;
        LocalPopChoice(y_91);
      }
    else
      {
        t = x_91;
        {
          ATerm i_46 = NULL,j_46 = NULL;
          i_46 = t;
          t = SSL_explode_term(i_46);
          if(match_cons(t, sym__2))
            {
              ATerm z_91 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_91) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_46;
          t = concat_0_0(t);
        }
      }
    t_133 = t;
    t = SSL_implode_string(t_133);
  }
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm a_92 = t;
  int b_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_92);
    }
  else
    {
      t = a_92;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_92 = t;
  int d_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_134 = NULL;
      j_134 = t;
      t = SSL_is_string(j_134);
      ;
      LocalPopChoice(d_92);
    }
  else
    {
      t = c_92;
      {
        ATerm e_92 = t;
        int f_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_29, t);
            ;
            LocalPopChoice(f_92);
          }
        else
          {
            t = e_92;
            {
              ATerm n_134 = NULL,o_134 = NULL,p_134 = NULL;
              n_134 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_134 = ATgetArgument(t, 0);
                  t = o_134;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_134 = ATgetArgument(t, 0);
                      t = o_134;
                      {
                        ATerm g_92 = t;
                        int h_92 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_134);
                            {
                              ATerm i_92 = t;
                              int j_92 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_48 = NULL;
                                  t = eval_config_0_0(t);
                                  h_48 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_134, h_48);
                                  t = h_48;
                                  ;
                                  LocalPopChoice(j_92);
                                }
                              else
                                {
                                  t = i_92;
                                }
                            }
                            ;
                            LocalPopChoice(h_92);
                          }
                        else
                          {
                            t = g_92;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_134), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = o_134;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_134 = NULL,u_134 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_134 = ATgetArgument(t, 0);
                          p_134 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_134;
                      t = eval_config_0_0(t);
                      t_134 = t;
                      t = p_134;
                      t = eval_config_0_0(t);
                      u_134 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_134, u_134);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_133 (ATerm), ATerm t)
{
  ATerm k_92 = t;
  int l_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_135 = NULL,c_135 = NULL;
      a_135 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_92 = t;
        int n_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_48 = NULL;
            t = eval_config_0_0(t);
            u_48 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_48);
            t = u_48;
            ;
            LocalPopChoice(n_92);
          }
        else
          {
            t = m_92;
          }
        c_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_135, term_o_92);
        t = geq_0_0(t);
        t = a_135;
        t = h_133(t);
      }
      ;
      LocalPopChoice(l_92);
    }
  else
    {
      t = k_92;
    }
  return(t);
}
ATerm m_29 (ATerm t)
{
  ATerm e_135 = NULL;
  e_135 = t;
  if(match_string(t, "-k"))
    {
      t = e_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_135;
    }
  return(t);
}
ATerm n_29 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL;
  f_135 = t;
  t = SSL_string_to_int(f_135);
  g_135 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_135);
  t = f_135;
  return(t);
}
ATerm r_29 (ATerm t)
{
  t = term_p_92;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_29, n_29, r_29, t);
  return(t);
}
ATerm s_29 (ATerm t)
{
  ATerm l_135 = NULL;
  l_135 = t;
  if(match_string(t, "-S"))
    {
      t = l_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_135;
    }
  return(t);
}
ATerm v_29 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_q_92;
  return(t);
}
ATerm w_29 (ATerm t)
{
  t = term_r_92;
  return(t);
}
ATerm y_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_29 (ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL;
  n_135 = t;
  t = SSL_string_to_int(n_135);
  o_135 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_135);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_135);
  return(t);
}
ATerm a_30 (ATerm t)
{
  t = term_s_92;
  return(t);
}
ATerm b_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_30 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_92;
  return(t);
}
ATerm e_30 (ATerm t)
{
  t = term_u_92;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_92 = t;
  int w_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_29, v_29, w_29, t);
      ;
      LocalPopChoice(w_92);
    }
  else
    {
      t = v_92;
      {
        ATerm x_92 = t;
        int y_92 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_29, z_29, a_30, t);
            ;
            LocalPopChoice(y_92);
          }
        else
          {
            t = x_92;
            t = Option_3_0(b_30, c_30, e_30, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_135 = NULL,t_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_135 = NULL;
      t = term_e_32;
      t = d_0(t);
      u_135 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_92, term_a_93, u_135);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_135 = ATgetFirst((ATermList) t);
          t_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_135;
      t = a_0(t);
      t = term_e_32;
      t = c_0(t);
      c_136 = t;
      t = (ATerm) ATinsert(CheckATermList(t_135), c_136);
    }
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm e_136 = NULL;
  e_136 = t;
  if(match_string(t, "-o"))
    {
      t = e_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_136;
    }
  return(t);
}
ATerm h_30 (ATerm t)
{
  ATerm f_136 = NULL;
  f_136 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_136);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_136);
  return(t);
}
ATerm j_30 (ATerm t)
{
  t = term_b_93;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_30, h_30, j_30, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL;
  if(match_cons(t, sym__3))
    {
      i_136 = ATgetArgument(t, 0);
      j_136 = ATgetArgument(t, 1);
      k_136 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_136, j_136);
  {
    ATerm c_93 = t;
    int d_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_93 = ATgetArgument(t, 0);
            ATerm f_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_136, j_136);
        ;
        LocalPopChoice(d_93);
      }
    else
      {
        t = c_93;
        t = (ATerm) ATempty;
      }
    l_136 = t;
    t = SSL_table_put(i_136, j_136, (ATerm) ATinsert(CheckATermList(l_136), k_136));
    t = (ATerm) ATmakeAppl(sym__3, i_136, j_136, k_136);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_136 = NULL;
      t = term_e_32;
      t = l_0(t);
      z_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_92, term_a_93, z_136);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_136 = ATgetFirst((ATermList) t);
          w_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_136 = ATgetFirst((ATermList) t);
          y_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_136;
      t = i_0(t);
      t = x_136;
      t = k_0(t);
      d_137 = t;
      t = (ATerm) ATinsert(CheckATermList(y_136), d_137);
    }
  return(t);
}
ATerm k_30 (ATerm t)
{
  ATerm f_137 = NULL;
  f_137 = t;
  if(match_string(t, "-i"))
    {
      t = f_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_137;
    }
  return(t);
}
ATerm l_30 (ATerm t)
{
  ATerm g_137 = NULL;
  g_137 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_137);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_137);
  return(t);
}
ATerm n_30 (ATerm t)
{
  t = term_h_93;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_30, l_30, n_30, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_32;
  t = whoami_0_0(t);
  h_137 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_137));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_93 = t;
    int j_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_49 = NULL;
        t = eval_config_0_0(t);
        r_49 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_49);
        t = r_49;
        ;
        LocalPopChoice(j_93);
      }
    else
      {
        t = i_93;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm t)
{
  ATerm k_93 = t;
  int l_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_125(t);
      ;
      LocalPopChoice(l_93);
    }
  else
    {
      t = k_93;
      {
        ATerm k_137 = NULL,l_137 = NULL,o_137 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_137 = ATgetFirst((ATermList) t);
            l_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_137;
        t = foldr_2_0(i_125, j_125, t);
        o_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_137, o_137);
        t = j_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_30 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm p_30 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  if(match_cons(t, sym__2))
    {
      h_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_93 = t;
    int n_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(h_50, i_50);
        ;
        LocalPopChoice(n_93);
      }
    else
      {
        t = m_93;
        t = SSL_addr(h_50, i_50);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_137 = NULL,u_49 = NULL,v_49 = NULL;
  t = times_0_0(t);
  u_49 = t;
  t = SSL_explode_term(u_49);
  if(match_cons(t, sym__2))
    {
      ATerm o_93 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_49;
  t = foldr_2_0(o_30, p_30, t);
  r_137 = t;
  t = SSL_TicksToSeconds(r_137);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_138 = NULL,n_138 = NULL,o_138 = NULL;
  f_138 = t;
  if(match_cons(t, sym__2))
    {
      n_138 = ATgetArgument(t, 0);
      o_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_93 = t;
    int s_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_138;
        if((n_138 != t))
          {
            _fail(t);
          }
        t = f_138;
        ;
        LocalPopChoice(s_93);
      }
    else
      {
        t = p_93;
        t = f_138;
        {
          ATerm t_93 = t;
          int u_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_138, o_138);
              ;
              LocalPopChoice(u_93);
            }
          else
            {
              t = t_93;
              t = SSL_gtr(n_138, o_138);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_138, o_138);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm w_93 = t;
  int x_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_138 = NULL,c_139 = NULL;
      r_138 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_93 = t;
        int z_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_52 = NULL;
            t = eval_config_0_0(t);
            b_52 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_52);
            t = b_52;
            ;
            LocalPopChoice(z_93);
          }
        else
          {
            t = y_93;
          }
        c_139 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_139, term_z_50);
        t = geq_0_0(t);
        t = r_138;
        t = g_133(t);
      }
      ;
      LocalPopChoice(x_93);
    }
  else
    {
      t = w_93;
    }
  return(t);
}
ATerm s_30 (ATerm t)
{
  ATerm e_139 = NULL,h_139 = NULL;
  t = run_time_0_0(t);
  e_139 = t;
  t = term_e_32;
  t = whoami_0_0(t);
  h_139 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), e_139), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), h_139));
  t = (ATerm) ATmakeAppl(sym__2, term_a_94, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_94), e_139), term_c_94), h_139));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_30, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm t_30 (ATerm t)
{
  ATerm f_94 = t;
  int g_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(g_94);
    }
  else
    {
      t = f_94;
      {
        ATerm h_94 = t;
        int i_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(i_94);
          }
        else
          {
            t = h_94;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm j_94 = t;
  int k_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm l_94 = t;
        int m_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_52 = NULL;
            t = eval_config_0_0(t);
            t_52 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_52);
            t = t_52;
            ;
            LocalPopChoice(m_94);
          }
        else
          {
            t = l_94;
          }
      }
      ;
      LocalPopChoice(k_94);
    }
  else
    {
      t = j_94;
      t = fetch_1_0(t_30, t);
    }
  t = w_135(t);
  return(t);
}
ATerm map_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm i_139 (ATerm t)
  {
    ATerm n_94 = t;
    int o_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_94);
      }
    else
      {
        t = n_94;
        t = Cons_2_0(g_119, i_139, t);
      }
    return(t);
  }
  t = i_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_139 = NULL,m_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_139 = ATgetFirst((ATermList) t);
      m_139 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_139 = NULL,r_139 = NULL;
        t = m_139;
        t = g_0(t);
        q_139 = t;
        t = l_139;
        t = e_0(t);
        r_139 = t;
        t = m_139;
        {
          ATerm u_30 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_139), r_139);
            return(t);
          }
          t = reverse_acc_2_0(e_0, u_30, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_32;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm s_139 = NULL,t_139 = NULL,u_139 = NULL,v_139 = NULL;
  v_139 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_139);
  s_139 = t;
  t = t_139;
  t = x_110(t);
  u_139 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_139), s_139);
  return(t);
}
ATerm w_30 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_30 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_30 (ATerm t)
{
  ATerm y_139 = NULL;
  y_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_139), term_p_94);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_94 = t;
  int r_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm s_94 = t;
        int t_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_53 = NULL;
            t = eval_config_0_0(t);
            f_53 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_53);
            t = f_53;
            ;
            LocalPopChoice(t_94);
          }
        else
          {
            t = s_94;
          }
      }
      ;
      LocalPopChoice(r_94);
    }
  else
    {
      t = q_94;
      t = fetch_1_0(w_30, t);
    }
  t = term_u_94;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, x_30, t);
  t = map_1_0(z_30, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL;
  c_140 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_140);
  z_139 = t;
  t = a_140;
  t = y_110(t);
  b_140 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_140), z_139);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_140 = NULL,h_140 = NULL;
  g_140 = t;
  {
    ATerm v_94 = t;
    int w_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_140;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_94 = ATgetFirst((ATermList) t);
                ATerm y_94 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_140;
          }
        ;
        LocalPopChoice(w_94);
      }
    else
      {
        t = v_94;
        t = (ATerm) ATinsert(ATempty, g_140);
      }
    h_140 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_140);
    t = g_140;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm z_94 = t;
    int a_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_54 = NULL;
        t = eval_config_0_0(t);
        l_54 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_54);
        t = l_54;
        ;
        LocalPopChoice(a_95);
      }
    else
      {
        t = z_94;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm a_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_31 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_95;
  return(t);
}
ATerm d_31 (ATerm t)
{
  t = term_e_95;
  return(t);
}
ATerm e_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_31 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_95;
  return(t);
}
ATerm g_31 (ATerm t)
{
  t = term_g_95;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_95 = t;
  int i_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_31, c_31, d_31, t);
      ;
      LocalPopChoice(i_95);
    }
  else
    {
      t = h_95;
      t = Option_3_0(e_31, f_31, g_31, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm p_140 = NULL,q_140 = NULL,r_140 = NULL,s_140 = NULL,w_140 = NULL,x_140 = NULL;
  x_140 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_140 = ATgetFirst((ATermList) t);
      r_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_140);
  p_140 = t;
  t = q_140;
  t = f_98(t);
  s_140 = t;
  t = r_140;
  t = g_98(t);
  w_140 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(w_140), s_140), p_140);
  return(t);
}
ATerm h_31 (ATerm t)
{
  ATerm e_141 = NULL;
  e_141 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_141);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_141);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_137 (ATerm), ATerm t)
{
  ATerm d_141 = NULL;
  d_141 = t;
  {
    ATerm j_95 = t;
    int k_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_95;
        t = z_137(t);
        ;
        LocalPopChoice(k_95);
      }
    else
      {
        t = j_95;
      }
    t = d_141;
    {
      ATerm i_31 (ATerm t)
      {
        ATerm n_95 = t;
        int t_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_95 = t;
            int w_95 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_95);
              }
            else
              {
                t = u_95;
                t = z_137(t);
                t = Cons_2_0(_id, i_31, t);
              }
            ;
            LocalPopChoice(t_95);
          }
        else
          {
            t = n_95;
            {
              ATerm g_141 = NULL,h_141 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_141 = ATgetFirst((ATermList) t);
                  h_141 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_141), (ATerm) ATmakeAppl(sym_Undefined_1, g_141));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_31, i_31, t);
    }
  }
  return(t);
}
ATerm l_31 (ATerm t)
{
  ATerm r_141 = NULL;
  r_141 = t;
  if(match_string(t, "--help"))
    {
      t = r_141;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_141;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_141;
        }
    }
  return(t);
}
ATerm m_31 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_95;
  return(t);
}
ATerm o_31 (ATerm t)
{
  t = term_y_95;
  return(t);
}
ATerm q_31 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_137 (ATerm), ATerm t)
{
  ATerm o_141 = NULL,p_141 = NULL,q_141 = NULL;
  o_141 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_141;
  {
    ATerm k_31 (ATerm t)
    {
      ATerm z_95 = t;
      int a_96 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_137(t);
          ;
          LocalPopChoice(a_96);
        }
      else
        {
          t = z_95;
          {
            ATerm b_96 = t;
            int d_96 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_31, m_31, o_31, t);
                ;
                LocalPopChoice(d_96);
              }
            else
              {
                t = b_96;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_31, t);
    {
      ATerm j_96 = t;
      int k_96 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_142 = NULL;
          g_142 = t;
          {
            ATerm m_96 = t;
            int p_96 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_142;
                {
                  ATerm q_96 = t;
                  int s_96 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_96 = t;
                        int w_96 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_56 = NULL;
                            t = eval_config_0_0(t);
                            r_56 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_56);
                            t = r_56;
                            ;
                            LocalPopChoice(w_96);
                          }
                        else
                          {
                            t = u_96;
                          }
                      }
                      ;
                      LocalPopChoice(s_96);
                    }
                  else
                    {
                      t = q_96;
                      t = fetch_1_0(q_31, t);
                    }
                  t = g_142;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(p_96);
              }
            else
              {
                t = m_96;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm x_96 = t;
                  int y_96 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_57 = NULL;
                      t = eval_config_0_0(t);
                      t_57 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), t_57);
                      t = t_57;
                      ;
                      LocalPopChoice(y_96);
                    }
                  else
                    {
                      t = x_96;
                    }
                  t = g_142;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_96);
        }
      else
        {
          t = j_96;
          {
            ATerm z_96 = t;
            int a_97 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_31 (ATerm t)
                {
                  ATerm s_31 (ATerm t)
                  {
                    if(((p_141 != NULL) && (p_141 != t)))
                      _fail(t);
                    else
                      p_141 = t;
                    return(t);
                  }
                  t = Undefined_1_0(s_31, t);
                  return(t);
                }
                t = fetch_1_0(r_31, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_141)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_a_94, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_141)), term_b_97));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(a_97);
              }
            else
              {
                t = z_96;
              }
          }
        }
      q_141 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_141;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm t)
{
  ATerm n_142 = NULL;
  t = parse_options_1_0(y_135, t);
  n_142 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_142);
  t = n_142;
  t = a_136(t);
  {
    ATerm d_97 = t;
    int e_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_135, t);
        ;
        LocalPopChoice(e_97);
      }
    else
      {
        t = d_97;
        {
          ATerm f_97 = t;
          int g_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_136(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_97);
            }
          else
            {
              t = f_97;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_31 (ATerm t)
{
  t = if_verbose2_1_0(b_32, t);
  return(t);
}
ATerm x_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_31 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_97;
  return(t);
}
ATerm a_32 (ATerm t)
{
  t = term_i_97;
  return(t);
}
ATerm b_32 (ATerm t)
{
  ATerm o_142 = NULL,p_142 = NULL;
  o_142 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_97 = t;
    int l_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_58 = NULL;
        t = eval_config_0_0(t);
        e_58 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_58);
        t = e_58;
        ;
        LocalPopChoice(l_97);
      }
    else
      {
        t = j_97;
      }
    p_142 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_142));
    t = o_142;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm t)
{
  ATerm t_31 (ATerm t)
  {
    ATerm m_97 = t;
    int p_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_135(t);
        ;
        LocalPopChoice(p_97);
      }
    else
      {
        t = m_97;
        {
          ATerm r_97 = t;
          int s_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_97);
            }
          else
            {
              t = r_97;
              {
                ATerm u_97 = t;
                int v_97 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_97);
                  }
                else
                  {
                    t = u_97;
                    {
                      ATerm w_97 = t;
                      int x_97 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_31, z_31, a_32, t);
                          ;
                          LocalPopChoice(x_97);
                        }
                      else
                        {
                          t = w_97;
                          {
                            ATerm y_97 = t;
                            int z_97 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_97);
                              }
                            else
                              {
                                t = y_97;
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
  ATerm w_31 (ATerm t)
  {
    ATerm q_142 = NULL,r_142 = NULL,h_58 = NULL;
    q_142 = t;
    {
      ATerm a_98 = t;
      int c_98 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_32 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_142 != NULL) && (r_142 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_142 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_32, t);
          ;
          LocalPopChoice(c_98);
        }
      else
        {
          t = a_98;
          t = term_d_98;
          r_142 = t;
        }
      t = not_null(r_142);
      t = ReadFromFile_0_0(t);
      h_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_142, h_58);
      t = apply_strategy_1_0(h_135, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_31, j_135, v_31, w_31, t);
  return(t);
}
ATerm d_32 (ATerm t)
{
  t = _2_0(_id, frontend_transformation_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_32, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_m_103;
ATerm term_y_102;
ATerm term_x_102;
ATerm term_d_102;
ATerm term_n_101;
ATerm term_f_101;
ATerm term_r_100;
ATerm term_n_100;
ATerm term_m_100;
ATerm term_l_100;
ATerm term_k_100;
ATerm term_j_100;
ATerm term_i_100;
ATerm term_u_99;
ATerm term_k_99;
ATerm term_l_98;
ATerm term_k_98;
ATerm term_j_98;
ATerm term_f_97;
ATerm term_a_97;
ATerm term_z_96;
ATerm term_y_96;
ATerm term_x_96;
ATerm term_w_96;
ATerm term_v_96;
ATerm term_s_96;
ATerm term_r_96;
ATerm term_o_96;
ATerm term_n_96;
ATerm term_g_95;
ATerm term_h_94;
ATerm term_e_94;
ATerm term_l_91;
ATerm term_i_91;
ATerm term_h_91;
ATerm term_g_91;
ATerm term_d_91;
ATerm term_c_91;
ATerm term_b_91;
ATerm term_p_90;
ATerm term_o_90;
ATerm term_n_90;
ATerm term_m_90;
ATerm term_l_90;
ATerm term_i_90;
ATerm term_u_89;
ATerm term_v_86;
ATerm term_u_86;
ATerm term_t_86;
ATerm term_m_85;
ATerm term_c_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_z_84;
ATerm term_y_84;
ATerm term_u_80;
ATerm term_t_80;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_i_79;
ATerm term_h_79;
ATerm term_e_79;
ATerm term_d_79;
ATerm term_y_78;
ATerm term_x_78;
ATerm term_w_78;
ATerm term_v_78;
ATerm term_t_76;
ATerm term_s_76;
ATerm term_r_76;
ATerm term_r_75;
ATerm term_w_74;
ATerm term_v_74;
ATerm term_z_72;
ATerm term_s_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_q_71;
ATerm term_p_71;
ATerm term_p_70;
ATerm term_c_70;
ATerm term_v_69;
ATerm term_u_69;
ATerm term_h_69;
ATerm term_w_68;
ATerm term_l_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_b_68;
ATerm term_t_67;
ATerm term_q_67;
ATerm term_m_67;
ATerm term_l_66;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_t_56;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_m_56;
ATerm term_j_56;
ATerm term_h_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_v_55;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_h_51;
ATerm term_e_51;
ATerm term_n_39;
ATerm term_f_37;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_u_35;
ATerm term_d_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_h_26;
void init_constant_terms (void)
{
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Op_2, term_n_36, (ATerm) ATempty);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_36);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_51);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_Var_1, term_j_52);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Var_1, term_l_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Anno_2, term_k_52, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_Var_1, term_o_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Var_1, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Anno_2, term_p_52, term_r_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Call_2, term_u_52, (ATerm) ATempty);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_BAM_3, term_v_52, term_k_52, term_p_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_52);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Call_2, term_a_53, (ATerm) ATempty);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_BAM_3, term_b_53, term_m_52, term_r_52);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Var_1, term_p_54);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_56);
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_Keys_1, term_e_51);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_56);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_54);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, term_d_57);
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_52);
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_67);
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_71);
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(sym_Op_2, term_v_74, (ATerm) ATempty);
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(sym_Op_2, term_s_76, (ATerm) ATempty);
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_78);
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_79);
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_79);
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_79);
  ATprotect(&(term_t_80));
  term_t_80 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_80);
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_84);
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_85);
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_u_89));
  term_u_89 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_34);
  ATprotect(&(term_i_90));
  term_i_90 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_l_90));
  term_l_90 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_m_90));
  term_m_90 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_90));
  term_n_90 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_90));
  term_o_90 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_91));
  term_b_91 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_c_91));
  term_c_91 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_91);
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(sym_Call_2, term_c_91, (ATerm) ATempty);
  ATprotect(&(term_g_91));
  term_g_91 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_90);
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_74);
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeAppl(sym_Call_2, term_h_91, (ATerm) ATempty);
  ATprotect(&(term_l_91));
  term_l_91 = (ATerm) ATmakeAppl(sym_Call_2, term_u_89, (ATerm) ATempty);
  ATprotect(&(term_e_94));
  term_e_94 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_94));
  term_h_94 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_95));
  term_g_95 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_96));
  term_n_96 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_96));
  term_o_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_96));
  term_r_96 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_51);
  ATprotect(&(term_s_96));
  term_s_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_96));
  term_v_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_96));
  term_w_96 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_96));
  term_x_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_96));
  term_y_96 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_96));
  term_z_96 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_97));
  term_a_97 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_97));
  term_f_97 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_98));
  term_j_98 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_98));
  term_k_98 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_98));
  term_l_98 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_99));
  term_k_99 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_99));
  term_u_99 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_100));
  term_i_100 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_100));
  term_j_100 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_100));
  term_k_100 = (ATerm) ATmakeAppl(sym__3, term_i_100, term_j_100, term_h_26);
  ATprotect(&(term_l_100));
  term_l_100 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_100));
  term_m_100 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_100));
  term_n_100 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_100));
  term_r_100 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_101));
  term_f_101 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_101));
  term_n_101 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_102));
  term_d_102 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_102));
  term_x_102 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_102));
  term_y_102 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_103));
  term_m_103 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm g_142 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_112 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm d_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm i_98 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm v_132 (ATerm), ATerm);
ATerm spaste_1_0 (ATerm s_141 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm rename_4_0 (ATerm o_138 (ATerm (ATerm), ATerm), ATerm p_138 (ATerm), ATerm q_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_138 (ATerm (ATerm), ATerm), ATerm);
ATerm strename_0_0 (ATerm);
ATerm ListBuild_0_0 (ATerm);
ATerm ListMatch_0_0 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm RulesToSdefs_0_0 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm CheckTuple_0_0 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm v_115 (ATerm), ATerm);
ATerm check_constructors_p__2_0 (ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm o_141 (ATerm), ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm z_117 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm (ATerm), ATerm), ATerm c_138 (ATerm), ATerm d_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_138 (ATerm (ATerm), ATerm), ATerm f_138 (ATerm), ATerm);
ATerm ExpOverlay_1_0 (ATerm u_140 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm Overlay_to_Congdef_0_0 (ATerm);
ATerm ExpandOverlays_0_0 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm App_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm Build_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm e_98 (ATerm), ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm split_under_scope_1_0 (ATerm p_140 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm split_dynamic_rule_1_0 (ATerm n_140 (ATerm), ATerm);
ATerm lift_dynamic_rule_0_0 (ATerm);
ATerm listtd_1_0 (ATerm k_120 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm s_101 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm e_123 (ATerm), ATerm);
ATerm diff_1_0 (ATerm a_123 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm g_121 (ATerm), ATerm h_121 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm g_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm k_113 (ATerm), ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm b_115 (ATerm), ATerm);
ATerm assert_1_0 (ATerm x_129 (ATerm), ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm f_98 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm u_129 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_129 (ATerm), ATerm);
ATerm scope_2_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm filter_1_0 (ATerm f_126 (ATerm), ATerm);
ATerm InsertBSpec_0_0 (ATerm);
ATerm foldr_3_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm Op_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm Var_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm v_104 (ATerm), ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm c_120 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm q_131 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_134 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_119 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_119 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_132 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_132 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_135 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm r_110 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_110 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm t_137 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_137 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm);
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
  t = term_h_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_1), c_1), b_1), z_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, c_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, v_0, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, b_1)), (ATerm) ATmakeAppl(sym_BAM_3, s_0, (ATerm)ATmakeAppl(sym_Var_1, c_1), (ATerm) ATmakeAppl(sym_Var_1, e_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_w_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_1)), (ATerm) ATmakeAppl(sym_Var_1, b_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_0 = ATgetArgument(t, 0);
          {
            ATerm i_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL;
            t = t_0;
            t = new_0_0(t);
            i_1 = t;
            t = v_0;
            {
              ATerm p_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((o_1 != NULL) && (o_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_1 = ATgetArgument(t, 0);
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
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_1)), not_null(o_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_1)), (ATerm) ATmakeAppl(sym_Build_1, r_1))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_1))))), (ATerm)ATmakeAppl(sym_Var_1, u_1), (ATerm) ATmakeAppl(sym_Op_2, term_y_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_1)), not_null(x_1)))))));
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
    ATerm a_35 = t;
    int b_35 = stack_ptr;
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
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_35, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_2))))));
        }
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        {
          ATerm e_35 = t;
          int f_35 = stack_ptr;
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
              LocalPopChoice(f_35);
            }
          else
            {
              t = e_35;
              {
                ATerm r_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
                t = d_2;
                t = new_0_0(t);
                r_2 = t;
                t = e_2;
                {
                  ATerm h_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_2 = ATgetArgument(t, 0);
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
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_2)), not_null(t_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  a_4 = t;
  if(match_cons(t, sym_As_2))
    {
      u_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_4);
  t_3 = t;
  t = u_3;
  t = s_99(t);
  y_3 = t;
  t = w_3;
  t = t_99(t);
  z_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, y_3, z_3), t_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm t)
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
  t = r_103(t);
  h_4 = t;
  t = f_4;
  t = s_103(t);
  i_4 = t;
  t = g_4;
  t = t_103(t);
  j_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, h_4, i_4, j_4), d_4);
  return(t);
}
ATerm Explode_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
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
  t = l_99(t);
  u_4 = t;
  t = t_4;
  t = m_99(t);
  v_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, u_4, v_4), r_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm g_142 (ATerm), ATerm t)
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_142(t);
      ;
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      {
        ATerm j_35 = t;
        int k_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = pat_td_1_0(g_142, t);
                return(t);
              }
              t = fetch_1_0(l_1, t);
              return(t);
            }
            t = Op_2_0(_id, k_1, t);
            ;
            LocalPopChoice(k_35);
          }
        else
          {
            t = j_35;
            {
              ATerm l_35 = t;
              int m_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = pat_td_1_0(g_142, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, n_1, t);
                  ;
                  LocalPopChoice(m_35);
                }
              else
                {
                  t = l_35;
                  {
                    ATerm n_35 = t;
                    int o_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = pat_td_1_0(g_142, t);
                          return(t);
                        }
                        t = Explode_2_0(s_1, _id, t);
                        ;
                        LocalPopChoice(o_35);
                      }
                    else
                      {
                        t = n_35;
                        {
                          ATerm p_35 = t;
                          int q_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_2 (ATerm t)
                              {
                                ATerm f_2 (ATerm t)
                                {
                                  t = pat_td_1_0(g_142, t);
                                  return(t);
                                }
                                t = fetch_1_0(f_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, b_2, t);
                              ;
                              LocalPopChoice(q_35);
                            }
                          else
                            {
                              t = p_35;
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = pat_td_1_0(g_142, t);
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
    ATerm r_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
        t = a_3;
        t = new_0_0(t);
        e_3 = t;
        t = b_3;
        {
          ATerm m_2 (ATerm t)
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
            t = (ATerm) ATmakeAppl(sym_Var_1, e_3);
            return(t);
          }
          t = pat_td_1_0(m_2, t);
          h_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_3)), not_null(f_3))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_3)))), (ATerm) ATmakeAppl(sym_Build_1, h_3)));
        }
        ;
        LocalPopChoice(t_35);
      }
    else
      {
        t = r_35;
        {
          ATerm v_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL,k_3 = NULL,m_3 = NULL;
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
                m_3 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_3)))), (ATerm) ATmakeAppl(sym_Build_1, m_3)));
              }
              ;
              LocalPopChoice(x_35);
            }
          else
            {
              t = v_35;
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
  ATerm d_5 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_5 = NULL,g_5 = NULL;
        t = d_5;
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
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        {
          ATerm l_5 = NULL,m_5 = NULL;
          t = d_5;
          {
            ATerm y_2 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm b_36 = ATgetArgument(t, 0);
                  if(match_cons(b_36, sym_Build_1))
                    {
                      if(((l_5 != NULL) && (l_5 != ATgetArgument(b_36, 0))))
                        _fail(ATgetArgument(b_36, 0));
                      else
                        l_5 = ATgetArgument(b_36, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_36 = ATgetArgument(t, 1);
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
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm e_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm c_3 (ATerm t)
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_0, t);
              ;
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
            }
          return(t);
        }
        t = Cons_2_0(_id, c_3, t);
      }
      ;
      LocalPopChoice(g_36);
    }
  else
    {
      t = e_36;
      {
        ATerm i_3 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, i_3, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_6, l_6);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_6 = ATgetArgument(t, 0);
          t = k_6;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_6 = ATgetFirst((ATermList) t);
              g_6 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_6, (ATerm) ATmakeAppl(sym_LChoices_1, g_6));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_36;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              k_6 = ATgetArgument(t, 0);
              t = k_6;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_6 = ATgetFirst((ATermList) t);
                  g_6 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_6, (ATerm) ATmakeAppl(sym_Choices_1, g_6));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_36;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  k_6 = ATgetArgument(t, 0);
                  t = k_6;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_6 = ATgetFirst((ATermList) t);
                      g_6 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_6, (ATerm) ATmakeAppl(sym_Seqs_1, g_6));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_m_36;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_6 = ATgetArgument(t, 0);
                      l_6 = ATgetArgument(t, 1);
                      i_6 = ATgetArgument(t, 2);
                      h_6 = ATgetArgument(t, 3);
                      {
                        ATerm c_7 = NULL,d_7 = NULL;
                        t = l_6;
                        {
                          ATerm o_3 (ATerm t)
                          {
                            ATerm e_7 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                e_7 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_7, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_36), term_p_36));
                            return(t);
                          }
                          t = map1_1_0(o_3, t);
                          c_7 = t;
                          t = i_6;
                          {
                            ATerm b_4 (ATerm t)
                            {
                              ATerm r_36 = t;
                              int s_36 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_7 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      g_7 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_7, term_p_36);
                                  ;
                                  LocalPopChoice(s_36);
                                }
                              else
                                {
                                  t = r_36;
                                }
                              return(t);
                            }
                            t = map1_1_0(b_4, t);
                            d_7 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_6, c_7, d_7, h_6);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          k_6 = ATgetArgument(t, 0);
                          l_6 = ATgetArgument(t, 1);
                          i_6 = ATgetArgument(t, 2);
                          h_6 = ATgetArgument(t, 3);
                          {
                            ATerm t_36 = t;
                            int u_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_7 = NULL,o_7 = NULL;
                                t = i_6;
                                {
                                  ATerm c_4 (ATerm t)
                                  {
                                    ATerm q_7 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        q_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, q_7, term_p_36);
                                    return(t);
                                  }
                                  t = map1_1_0(c_4, t);
                                  n_7 = t;
                                  t = l_6;
                                  {
                                    ATerm m_4 (ATerm t)
                                    {
                                      ATerm v_36 = t;
                                      int w_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_7 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              s_7 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, s_7, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_36), term_p_36));
                                          ;
                                          LocalPopChoice(w_36);
                                        }
                                      else
                                        {
                                          t = v_36;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(m_4, t);
                                    o_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_6, o_7, n_7, h_6);
                                  }
                                }
                                ;
                                LocalPopChoice(u_36);
                              }
                            else
                              {
                                t = t_36;
                                {
                                  ATerm b_8 = NULL,c_8 = NULL;
                                  t = l_6;
                                  {
                                    ATerm q_4 (ATerm t)
                                    {
                                      ATerm j_8 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          j_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_8, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_36), term_p_36));
                                      return(t);
                                    }
                                    t = map1_1_0(q_4, t);
                                    b_8 = t;
                                    t = i_6;
                                    {
                                      ATerm x_4 (ATerm t)
                                      {
                                        ATerm y_36 = t;
                                        int z_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm r_8 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                r_8 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, r_8, term_p_36);
                                            ;
                                            LocalPopChoice(z_36);
                                          }
                                        else
                                          {
                                            t = y_36;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(x_4, t);
                                      c_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_6, b_8, c_8, h_6);
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
                              k_6 = ATgetArgument(t, 0);
                              l_6 = ATgetArgument(t, 1);
                              i_6 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, l_6, (ATerm) ATmakeAppl(sym_Op_2, term_y_34, (ATerm) ATinsert(ATinsert(ATempty, i_6), k_6)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  k_6 = ATgetArgument(t, 0);
                                  l_6 = ATgetArgument(t, 1);
                                  i_6 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_6)), k_6), (ATerm) ATmakeAppl(sym_Build_1, l_6)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      k_6 = ATgetArgument(t, 0);
                                      l_6 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_6, (ATerm) ATmakeAppl(sym_Match_1, l_6));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          k_6 = ATgetArgument(t, 0);
                                          l_6 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_6), l_6);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              k_6 = ATgetArgument(t, 0);
                                              l_6 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_6), k_6);
                                        }
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
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm i_10 (ATerm u_9, ATerm t)
  {
    ATerm a_10 = NULL;
    t = u_9;
    {
      ATerm a_37 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_37;
        }
      t = new_0_0(t);
      a_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_10), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_9), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_10)))), (ATerm) ATmakeAppl(sym_Var_1, a_10)));
    }
    return(t);
  }
  ATerm c_10 = NULL,d_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_10 = ATgetArgument(t, 0);
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_10(c_10, t);
            ;
            LocalPopChoice(c_37);
          }
        else
          {
            t = b_37;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_m_36, (ATerm) ATmakeAppl(sym_Var_1, d_10)));
          }
      }
    }
  else
    {
      t = i_10(c_10, t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,p_23 = NULL,y_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
      m_23 = ATgetArgument(t, 2);
      {
        ATerm l_2 = NULL,s_2 = NULL,z_2 = NULL;
        t = m_23;
        {
          ATerm y_4 (ATerm t)
          {
            ATerm e_37 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_37;
              }
            return(t);
          }
          t = fetch_1_0(y_4, t);
          t = m_23;
          {
            ATerm a_5 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_37;
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              ATerm d_3 = NULL,l_3 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_3 = ATgetFirst((ATermList) t);
                  l_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_3, l_3);
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              ATerm n_3 = NULL,v_3 = NULL,x_3 = NULL,l_4 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm k_37 = ATgetArgument(t, 0);
                  if(match_cons(k_37, sym__2))
                    {
                      n_3 = ATgetArgument(k_37, 0);
                      x_3 = ATgetArgument(k_37, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_37 = ATgetArgument(t, 1);
                    if(match_cons(o_37, sym__2))
                      {
                        v_3 = ATgetArgument(o_37, 0);
                        l_4 = ATgetArgument(o_37, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_3), n_3), (ATerm) ATinsert(CheckATermList(l_4), x_3));
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
                  t = term_f_37;
                  return(t);
                }
                ATerm k_5 (ATerm t)
                {
                  ATerm n_4 = NULL,o_4 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_4 = ATgetFirst((ATermList) t);
                      o_4 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
                  return(t);
                }
                ATerm n_5 (ATerm t)
                {
                  ATerm p_4 = NULL,z_4 = NULL,b_5 = NULL,c_5 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm p_37 = ATgetArgument(t, 0);
                      if(match_cons(p_37, sym__2))
                        {
                          p_4 = ATgetArgument(p_37, 0);
                          b_5 = ATgetArgument(p_37, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm q_37 = ATgetArgument(t, 1);
                        if(match_cons(q_37, sym__2))
                          {
                            z_4 = ATgetArgument(q_37, 0);
                            c_5 = ATgetArgument(q_37, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_4), p_4), (ATerm) ATinsert(CheckATermList(c_5), b_5));
                  return(t);
                }
                t = genzip_4_0(j_5, k_5, n_5, _id, t);
                return(t);
              }
              t = _2_0(concat_0_0, i_5, t);
              if(match_cons(t, sym__2))
                {
                  l_2 = ATgetArgument(t, 0);
                  {
                    ATerm u_37 = ATgetArgument(t, 1);
                    if(match_cons(u_37, sym__2))
                      {
                        s_2 = ATgetArgument(u_37, 0);
                        z_2 = ATgetArgument(u_37, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, l_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_2), (ATerm) ATmakeAppl(sym_PrimT_3, p_23, y_23, z_2)));
            }
          }
        }
      }
    }
  else
    {
      ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          p_23 = ATgetArgument(t, 0);
          y_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_23;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm w_37 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_37;
            }
          return(t);
        }
        t = fetch_1_0(o_5, t);
        t = y_23;
        {
          ATerm f_6 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_f_37;
            return(t);
          }
          ATerm j_6 (ATerm t)
          {
            ATerm s_5 = NULL,t_5 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_5 = ATgetFirst((ATermList) t);
                t_5 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, s_5, t_5);
            return(t);
          }
          ATerm m_6 (ATerm t)
          {
            ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm x_37 = ATgetArgument(t, 0);
                if(match_cons(x_37, sym__2))
                  {
                    u_5 = ATgetArgument(x_37, 0);
                    w_5 = ATgetArgument(x_37, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm y_37 = ATgetArgument(t, 1);
                  if(match_cons(y_37, sym__2))
                    {
                      v_5 = ATgetArgument(y_37, 0);
                      x_5 = ATgetArgument(y_37, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_5), u_5), (ATerm) ATinsert(CheckATermList(x_5), w_5));
            return(t);
          }
          t = genzip_4_0(f_6, j_6, m_6, LiftPrimArg_0_0, t);
          {
            ATerm n_6 (ATerm t)
            {
              ATerm o_6 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_f_37;
                return(t);
              }
              ATerm p_6 (ATerm t)
              {
                ATerm y_5 = NULL,z_5 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_5 = ATgetFirst((ATermList) t);
                    z_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, y_5, z_5);
                return(t);
              }
              ATerm q_6 (ATerm t)
              {
                ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm z_37 = ATgetArgument(t, 0);
                    if(match_cons(z_37, sym__2))
                      {
                        a_6 = ATgetArgument(z_37, 0);
                        c_6 = ATgetArgument(z_37, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm a_38 = ATgetArgument(t, 1);
                      if(match_cons(a_38, sym__2))
                        {
                          b_6 = ATgetArgument(a_38, 0);
                          d_6 = ATgetArgument(a_38, 1);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_6), a_6), (ATerm) ATinsert(CheckATermList(d_6), c_6));
                return(t);
              }
              t = genzip_4_0(o_6, p_6, q_6, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, n_6, t);
            if(match_cons(t, sym__2))
              {
                p_5 = ATgetArgument(t, 0);
                {
                  ATerm b_38 = ATgetArgument(t, 1);
                  if(match_cons(b_38, sym__2))
                    {
                      q_5 = ATgetArgument(b_38, 0);
                      r_5 = ATgetArgument(b_38, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, p_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_5), (ATerm) ATmakeAppl(sym_PrimT_3, p_23, (ATerm)ATempty, r_5)));
          }
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm g_24 (ATerm t)
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_112(t);
        t = g_24(t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
      }
    return(t);
  }
  t = g_24(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm e_38 = t;
  if((PushChoice() == 0))
    {
      ATerm r_6 (ATerm t)
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(r_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_38;
    }
  return(t);
}
ATerm Con_3_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL,v_24 = NULL,y_24 = NULL;
  y_24 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
      r_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_24);
  o_24 = t;
  t = p_24;
  t = b_100(t);
  s_24 = t;
  t = q_24;
  t = c_100(t);
  u_24 = t;
  t = r_24;
  t = d_100(t);
  v_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, s_24, u_24, v_24), o_24);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm h_38 = t;
  if((PushChoice() == 0))
    {
      ATerm s_6 (ATerm t)
      {
        ATerm i_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(k_38);
          }
        else
          {
            t = i_38;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(s_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_38;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm e_25 = NULL,g_25 = NULL,h_25 = NULL,k_25 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_25;
  if(match_cons(t, sym_StratRule_3))
    {
      g_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
      k_25 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_25), (ATerm) ATmakeAppl(sym_Where_1, k_25)), g_25));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          g_25 = ATgetArgument(t, 0);
          h_25 = ATgetArgument(t, 1);
          k_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_25;
      t = pureterm_0_0(t);
      t = h_25;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, h_25)), (ATerm) ATmakeAppl(sym_Where_1, k_25)), (ATerm) ATmakeAppl(sym_Match_1, g_25)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,c_26 = NULL,d_26 = NULL,g_26 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(match_cons(l_38, sym_Rule_3))
        {
          s_25 = ATgetArgument(l_38, 0);
          t_25 = ATgetArgument(l_38, 1);
          w_25 = ATgetArgument(l_38, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  x_25 = t;
  t = s_25;
  {
    ATerm t_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_38 = ATgetArgument(t, 0);
          if(match_cons(p_38, sym_Var_1))
            {
              if(((z_25 != NULL) && (z_25 != ATgetArgument(p_38, 0))))
                _fail(ATgetArgument(p_38, 0));
              else
                z_25 = ATgetArgument(p_38, 0);
            }
          else
            _fail(t);
          if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_25 = ATgetArgument(t, 1);
          {
            ATerm q_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_25));
      return(t);
    }
    t = oncetd_1_0(t_6, t);
    a_26 = t;
    t = t_25;
    {
      ATerm u_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm r_38 = ATgetArgument(t, 0);
            if(match_cons(r_38, sym_Var_1))
              {
                if(((z_25 != NULL) && (z_25 != ATgetArgument(r_38, 0))))
                  _fail(ATgetArgument(r_38, 0));
                else
                  z_25 = ATgetArgument(r_38, 0);
              }
            else
              _fail(t);
            if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              c_26 = ATgetArgument(t, 1);
            {
              ATerm s_38 = ATgetArgument(t, 2);
              if(match_cons(s_38, sym_CallT_3))
                {
                  if(((d_26 != NULL) && (d_26 != ATgetArgument(s_38, 0))))
                    _fail(ATgetArgument(s_38, 0));
                  else
                    d_26 = ATgetArgument(s_38, 0);
                  {
                    ATerm w_38 = ATgetArgument(s_38, 1);
                    if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
                      _fail(t);
                  }
                  {
                    ATerm x_38 = ATgetArgument(s_38, 2);
                    if(((ATgetType(x_38) != AT_LIST) || !(ATisEmpty(x_38))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, x_25);
        return(t);
      }
      t = oncetd_1_0(u_6, t);
      g_26 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_25), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, a_26, g_26, (ATerm) ATmakeAppl(sym_Seq_2, w_25, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(d_26), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_25), not_null(c_26), term_m_36))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_25)), (ATerm) ATmakeAppl(sym_Var_1, x_25))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm y_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_39 = t;
      int c_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(c_39);
        }
      else
        {
          t = b_39;
          {
            ATerm d_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(g_39);
              }
            else
              {
                t = d_39;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(a_39);
    }
  else
    {
      t = y_38;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  t = j_113(t);
  {
    ATerm v_6 (ATerm t)
    {
      t = topdown_1_0(j_113, t);
      return(t);
    }
    t = SRTS_all(v_6, t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,s_26 = NULL,t_26 = NULL;
  t_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
      m_26 = ATgetArgument(t, 2);
      n_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  i_26 = t;
  t = k_26;
  t = d_105(t);
  o_26 = t;
  t = l_26;
  t = e_105(t);
  p_26 = t;
  t = m_26;
  t = f_105(t);
  q_26 = t;
  t = n_26;
  t = g_105(t);
  s_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, o_26, p_26, q_26, s_26), i_26);
  return(t);
}
ATerm SDef_3_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL,f_27 = NULL,i_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_SDef_3))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
      b_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  y_26 = t;
  t = z_26;
  t = a_105(t);
  c_27 = t;
  t = a_27;
  t = b_105(t);
  e_27 = t;
  t = b_27;
  t = c_105(t);
  f_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, c_27, e_27, f_27), y_26);
  return(t);
}
ATerm Strategies_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  p_27 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_27);
  m_27 = t;
  t = n_27;
  t = d_98(t);
  o_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, o_27), m_27);
  return(t);
}
ATerm Specification_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  s_27 = t;
  t = t_27;
  t = i_98(t);
  u_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, u_27), s_27);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_132 (ATerm), ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = NULL,d_28 = NULL;
      b_28 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 = NULL;
            t = eval_config_0_0(t);
            x_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_6);
            t = x_6;
            ;
            LocalPopChoice(m_39);
          }
        else
          {
            t = k_39;
          }
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_28, term_n_39);
        t = geq_0_0(t);
        t = b_28;
        t = v_132(t);
      }
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
    }
  return(t);
}
ATerm spaste_1_0 (ATerm s_141 (ATerm), ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_6 (ATerm t)
      {
        ATerm y_6 = NULL,p_7 = NULL;
        y_6 = t;
        t = s_141(t);
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_6, p_7);
        {
          ATerm z_6 (ATerm t)
          {
            if(match_cons(t, sym__2))
              {
                ATerm q_39 = ATgetArgument(t, 0);
                if(((ATgetType(q_39) != AT_LIST) || !(ATisEmpty(q_39))))
                  _fail(t);
                {
                  ATerm r_39 = ATgetArgument(t, 1);
                  if(((ATgetType(r_39) != AT_LIST) || !(ATisEmpty(r_39))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm a_7 (ATerm t)
          {
            ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm s_39 = ATgetArgument(t, 0);
                if(((ATgetType(s_39) == AT_LIST) && !(ATisEmpty(s_39))))
                  {
                    p_28 = ATgetFirst((ATermList) s_39);
                    r_28 = (ATerm) ATgetNext((ATermList) s_39);
                  }
                else
                  _fail(t);
                {
                  ATerm t_39 = ATgetArgument(t, 1);
                  if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
                    {
                      q_28 = ATgetFirst((ATermList) t_39);
                      t_28 = (ATerm) ATgetNext((ATermList) t_39);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_28, q_28), (ATerm) ATmakeAppl(sym__2, r_28, t_28));
            return(t);
          }
          ATerm b_7 (ATerm t)
          {
            ATerm u_28 = NULL,x_28 = NULL;
            if(match_cons(t, sym__2))
              {
                u_28 = ATgetArgument(t, 0);
                x_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_28), u_28);
            return(t);
          }
          ATerm f_7 (ATerm t)
          {
            ATerm z_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL;
            if(match_cons(t, sym__2))
              {
                z_28 = ATgetArgument(t, 0);
                f_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_28;
            {
              ATerm u_39 = t;
              int v_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm w_39 = ATgetArgument(t, 0);
                      b_29 = ATgetArgument(t, 1);
                      c_29 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_39);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, f_29, b_29, c_29);
                }
              else
                {
                  t = u_39;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm x_39 = ATgetArgument(t, 0);
                      b_29 = ATgetArgument(t, 1);
                      c_29 = ATgetArgument(t, 2);
                      d_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_29, b_29, c_29, d_29);
                }
            }
            return(t);
          }
          t = genzip_4_0(z_6, a_7, b_7, f_7, t);
        }
        return(t);
      }
      t = Let_2_0(w_6, _id, t);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_7 (ATerm t)
            {
              ATerm z_7 = NULL,e_8 = NULL;
              z_7 = t;
              t = s_141(t);
              e_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_7, e_8);
              {
                ATerm i_7 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_40 = ATgetArgument(t, 0);
                      if(((ATgetType(a_40) != AT_LIST) || !(ATisEmpty(a_40))))
                        _fail(t);
                      {
                        ATerm b_40 = ATgetArgument(t, 1);
                        if(((ATgetType(b_40) != AT_LIST) || !(ATisEmpty(b_40))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm j_7 (ATerm t)
                {
                  ATerm q_29 = NULL,r_29 = NULL,t_29 = NULL,v_29 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm c_40 = ATgetArgument(t, 0);
                      if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
                        {
                          q_29 = ATgetFirst((ATermList) c_40);
                          t_29 = (ATerm) ATgetNext((ATermList) c_40);
                        }
                      else
                        _fail(t);
                      {
                        ATerm d_40 = ATgetArgument(t, 1);
                        if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
                          {
                            r_29 = ATgetFirst((ATermList) d_40);
                            v_29 = (ATerm) ATgetNext((ATermList) d_40);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_29, r_29), (ATerm) ATmakeAppl(sym__2, t_29, v_29));
                  return(t);
                }
                ATerm k_7 (ATerm t)
                {
                  ATerm x_29 = NULL,y_29 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      x_29 = ATgetArgument(t, 0);
                      y_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(y_29), x_29);
                  return(t);
                }
                ATerm l_7 (ATerm t)
                {
                  ATerm a_30 = NULL,c_30 = NULL,d_30 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      a_30 = ATgetArgument(t, 0);
                      d_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_30;
                  {
                    ATerm e_40 = t;
                    int f_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm g_40 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_40);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_30);
                      }
                    else
                      {
                        t = e_40;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm h_40 = ATgetArgument(t, 0);
                            c_30 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_30, c_30);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(i_7, j_7, k_7, l_7, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, h_7, _id, t);
            ;
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
            {
              ATerm i_40 = t;
              int j_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_7 (ATerm t)
                  {
                    ATerm h_8 = NULL,k_8 = NULL;
                    h_8 = t;
                    t = s_141(t);
                    k_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_8, k_8);
                    {
                      ATerm r_7 (ATerm t)
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm l_40 = ATgetArgument(t, 0);
                            if(((ATgetType(l_40) != AT_LIST) || !(ATisEmpty(l_40))))
                              _fail(t);
                            {
                              ATerm m_40 = ATgetArgument(t, 1);
                              if(((ATgetType(m_40) != AT_LIST) || !(ATisEmpty(m_40))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm t_7 (ATerm t)
                      {
                        ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            ATerm n_40 = ATgetArgument(t, 0);
                            if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
                              {
                                k_30 = ATgetFirst((ATermList) n_40);
                                m_30 = (ATerm) ATgetNext((ATermList) n_40);
                              }
                            else
                              _fail(t);
                            {
                              ATerm o_40 = ATgetArgument(t, 1);
                              if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
                                {
                                  l_30 = ATgetFirst((ATermList) o_40);
                                  n_30 = (ATerm) ATgetNext((ATermList) o_40);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_30, l_30), (ATerm) ATmakeAppl(sym__2, m_30, n_30));
                        return(t);
                      }
                      ATerm u_7 (ATerm t)
                      {
                        ATerm o_30 = NULL,p_30 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            o_30 = ATgetArgument(t, 0);
                            p_30 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(CheckATermList(p_30), o_30);
                        return(t);
                      }
                      ATerm v_7 (ATerm t)
                      {
                        ATerm s_30 = NULL,w_30 = NULL,z_30 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            s_30 = ATgetArgument(t, 0);
                            z_30 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = s_30;
                        {
                          ATerm p_40 = t;
                          int q_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm r_40 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(q_40);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_30);
                            }
                          else
                            {
                              t = p_40;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm t_40 = ATgetArgument(t, 0);
                                  w_30 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, z_30, w_30);
                            }
                        }
                        return(t);
                      }
                      t = genzip_4_0(r_7, t_7, u_7, v_7, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_7, _id, _id, t);
                  ;
                  LocalPopChoice(j_40);
                }
              else
                {
                  t = i_40;
                  {
                    ATerm u_40 = t;
                    int v_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_7 (ATerm t)
                        {
                          ATerm o_8 = NULL,q_8 = NULL;
                          o_8 = t;
                          t = s_141(t);
                          q_8 = t;
                          t = (ATerm) ATmakeAppl(sym__2, o_8, q_8);
                          {
                            ATerm x_7 (ATerm t)
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm w_40 = ATgetArgument(t, 0);
                                  if(((ATgetType(w_40) != AT_LIST) || !(ATisEmpty(w_40))))
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
                            ATerm y_7 (ATerm t)
                            {
                              ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm b_41 = ATgetArgument(t, 0);
                                  if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
                                    {
                                      e_31 = ATgetFirst((ATermList) b_41);
                                      g_31 = (ATerm) ATgetNext((ATermList) b_41);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm c_41 = ATgetArgument(t, 1);
                                    if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
                                      {
                                        f_31 = ATgetFirst((ATermList) c_41);
                                        h_31 = (ATerm) ATgetNext((ATermList) c_41);
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_31, f_31), (ATerm) ATmakeAppl(sym__2, g_31, h_31));
                              return(t);
                            }
                            ATerm a_8 (ATerm t)
                            {
                              ATerm j_31 = NULL,l_31 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  j_31 = ATgetArgument(t, 0);
                                  l_31 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(l_31), j_31);
                              return(t);
                            }
                            ATerm d_8 (ATerm t)
                            {
                              ATerm o_31 = NULL,q_31 = NULL,r_31 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  o_31 = ATgetArgument(t, 0);
                                  r_31 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = o_31;
                              {
                                ATerm d_41 = t;
                                int e_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm g_41 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(e_41);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_31);
                                  }
                                else
                                  {
                                    t = d_41;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm i_41 = ATgetArgument(t, 0);
                                        q_31 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, r_31, q_31);
                                  }
                              }
                              return(t);
                            }
                            t = genzip_4_0(x_7, y_7, a_8, d_8, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, w_7, _id, _id, t);
                        ;
                        LocalPopChoice(v_40);
                      }
                    else
                      {
                        t = u_40;
                        {
                          ATerm f_8 (ATerm t)
                          {
                            ATerm w_31 = NULL;
                            t = s_141(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                w_31 = ATgetFirst((ATermList) t);
                                {
                                  ATerm j_41 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = w_31;
                            return(t);
                          }
                          t = Rec_2_0(f_8, _id, t);
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
ATerm Rec_2_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  e_32 = t;
  if(match_cons(t, sym_Rec_2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  z_31 = t;
  t = a_32;
  t = i_103(t);
  c_32 = t;
  t = b_32;
  t = j_103(t);
  d_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, c_32, d_32), z_31);
  return(t);
}
ATerm Let_2_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,l_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  q_32 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_32);
  i_32 = t;
  t = l_32;
  t = l_102(t);
  o_32 = t;
  t = n_32;
  t = m_102(t);
  p_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, o_32, p_32), i_32);
  return(t);
}
ATerm sboundin_3_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t)
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(t_141, t_141, t);
      ;
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      {
        ATerm m_41 = t;
        int n_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(v_141, v_141, t_141, t);
            ;
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
                  t = SDefT_4_0(v_141, v_141, v_141, t_141, t);
                  ;
                  LocalPopChoice(p_41);
                }
              else
                {
                  t = o_41;
                  t = Rec_2_0(v_141, t_141, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm v_32 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      v_32 = ATgetArgument(t, 0);
      {
        ATerm q_41 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_32;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm z_32 = NULL;
      ATerm s_41 = t;
      int t_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              z_32 = ATgetArgument(t, 0);
              {
                ATerm u_41 = ATgetArgument(t, 1);
              }
              {
                ATerm v_41 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(t_41);
          t = z_32;
        }
      else
        {
          t = s_41;
          if(match_cons(t, sym_SDefT_4))
            {
              z_32 = ATgetArgument(t, 0);
              {
                ATerm w_41 = ATgetArgument(t, 1);
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
          t = z_32;
        }
      return(t);
    }
    t = map_1_0(g_8, t);
  }
  return(t);
}
ATerm rename_4_0 (ATerm o_138 (ATerm (ATerm), ATerm), ATerm p_138 (ATerm), ATerm q_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_138 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_33, (ATerm) ATempty);
  {
    ATerm p_33 (ATerm t)
    {
      ATerm i_8 (ATerm t)
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_33 = NULL,m_33 = NULL;
            if(match_cons(t, sym__2))
              {
                l_33 = ATgetArgument(t, 0);
                m_33 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_33;
            {
              ATerm l_8 (ATerm t)
              {
                ATerm v_8 = NULL;
                v_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_8, m_33);
                t = lookup_0_0(t);
                return(t);
              }
              t = o_138(l_8, t);
            }
            ;
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            t = RnBinding_2_0(p_138, r_138, t);
            t = DistBinding_2_0(p_33, q_138, t);
          }
        return(t);
      }
      t = env_alltd_1_0(i_8, t);
      return(t);
    }
    t = p_33(t);
  }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm e_34 = NULL,i_34 = NULL,l_34 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        i_34 = ATgetArgument(t, 0);
        t = i_34;
        if(match_cons(t, sym_Rule_3))
          {
            e_34 = ATgetArgument(t, 0);
            {
              ATerm c_42 = ATgetArgument(t, 1);
            }
            {
              ATerm d_42 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_34;
        {
          ATerm n_8 (ATerm t)
          {
            ATerm o_34 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                o_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, o_34);
            return(t);
          }
          ATerm p_8 (ATerm t)
          {
            ATerm e_42 = t;
            int f_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind0_0_0(t);
                ;
                LocalPopChoice(f_42);
              }
            else
              {
                t = e_42;
                {
                  ATerm q_34 = NULL,s_34 = NULL;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      q_34 = ATgetArgument(t, 0);
                      t = q_34;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm g_42 = t;
                      int h_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm i_42 = ATgetArgument(t, 0);
                              ATerm j_42 = ATgetArgument(t, 1);
                              s_34 = ATgetArgument(t, 2);
                              {
                                ATerm k_42 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_42);
                          t = s_34;
                          {
                            ATerm s_8 (ATerm t)
                            {
                              ATerm z_34 = NULL;
                              ATerm l_42 = t;
                              int m_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      z_34 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_42 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(m_42);
                                  t = z_34;
                                }
                              else
                                {
                                  t = l_42;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      z_34 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_34;
                                }
                              return(t);
                            }
                            t = map_1_0(s_8, t);
                          }
                        }
                      else
                        {
                          t = g_42;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm o_42 = ATgetArgument(t, 0);
                              ATerm p_42 = ATgetArgument(t, 1);
                              s_34 = ATgetArgument(t, 2);
                              {
                                ATerm q_42 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = s_34;
                          {
                            ATerm t_8 (ATerm t)
                            {
                              ATerm i_35 = NULL;
                              ATerm s_42 = t;
                              int w_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      i_35 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_42 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(w_42);
                                  t = i_35;
                                }
                              else
                                {
                                  t = s_42;
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
                            t = map_1_0(t_8, t);
                          }
                        }
                    }
                }
              }
            return(t);
          }
          t = free_vars_3_0(n_8, p_8, tboundin_3_0, t);
        }
      }
    else
      {
        ATerm y_42 = t;
        int z_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                i_34 = ATgetArgument(t, 0);
                {
                  ATerm d_43 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(z_42);
            t = i_34;
          }
        else
          {
            t = y_42;
            {
              ATerm e_43 = t;
              int f_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm g_43 = ATgetArgument(t, 0);
                      ATerm h_43 = ATgetArgument(t, 1);
                      l_34 = ATgetArgument(t, 2);
                      {
                        ATerm i_43 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_43);
                  t = l_34;
                  {
                    ATerm u_8 (ATerm t)
                    {
                      ATerm w_35 = NULL;
                      ATerm k_43 = t;
                      int l_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              w_35 = ATgetArgument(t, 0);
                              {
                                ATerm m_43 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_43);
                          t = w_35;
                        }
                      else
                        {
                          t = k_43;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              w_35 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = w_35;
                        }
                      return(t);
                    }
                    t = map_1_0(u_8, t);
                  }
                }
              else
                {
                  t = e_43;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm n_43 = ATgetArgument(t, 0);
                      ATerm q_43 = ATgetArgument(t, 1);
                      l_34 = ATgetArgument(t, 2);
                      {
                        ATerm r_43 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = l_34;
                  {
                    ATerm w_8 (ATerm t)
                    {
                      ATerm f_36 = NULL;
                      ATerm s_43 = t;
                      int t_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              f_36 = ATgetArgument(t, 0);
                              {
                                ATerm v_43 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_43);
                          t = f_36;
                        }
                      else
                        {
                          t = s_43;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              f_36 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = f_36;
                        }
                      return(t);
                    }
                    t = map_1_0(w_8, t);
                  }
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, m_8, tboundin_3_0, tpaste_1_0, t);
  {
    ATerm x_8 (ATerm t)
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Bind1_0_0(t);
          ;
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm j_36 = NULL,k_36 = NULL;
            ATerm z_43 = t;
            int a_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDef_3))
                  {
                    ATerm b_44 = ATgetArgument(t, 0);
                    k_36 = ATgetArgument(t, 1);
                    {
                      ATerm c_44 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(a_44);
                t = k_36;
                {
                  ATerm y_8 (ATerm t)
                  {
                    ATerm q_36 = NULL;
                    ATerm d_44 = t;
                    int e_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_VarDec_2))
                          {
                            q_36 = ATgetArgument(t, 0);
                            {
                              ATerm f_44 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_44);
                        t = q_36;
                      }
                    else
                      {
                        t = d_44;
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            q_36 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = q_36;
                      }
                    return(t);
                  }
                  t = map_1_0(y_8, t);
                }
              }
            else
              {
                t = z_43;
                {
                  ATerm g_44 = t;
                  int h_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          j_36 = ATgetArgument(t, 0);
                          {
                            ATerm i_44 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(h_44);
                      t = (ATerm) ATinsert(ATempty, j_36);
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
                                k_36 = ATgetArgument(t, 1);
                                {
                                  ATerm n_44 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm o_44 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(k_44);
                            t = k_36;
                            {
                              ATerm z_8 (ATerm t)
                              {
                                ATerm x_36 = NULL;
                                ATerm p_44 = t;
                                int q_44 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        x_36 = ATgetArgument(t, 0);
                                        {
                                          ATerm r_44 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(q_44);
                                    t = x_36;
                                  }
                                else
                                  {
                                    t = p_44;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        x_36 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_36;
                                  }
                                return(t);
                              }
                              t = map_1_0(z_8, t);
                            }
                          }
                        else
                          {
                            t = j_44;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm t_44 = ATgetArgument(t, 0);
                                k_36 = ATgetArgument(t, 1);
                                {
                                  ATerm u_44 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm v_44 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = k_36;
                            {
                              ATerm a_9 (ATerm t)
                              {
                                ATerm d_37 = NULL;
                                ATerm w_44 = t;
                                int x_44 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        d_37 = ATgetArgument(t, 0);
                                        {
                                          ATerm y_44 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(x_44);
                                    t = d_37;
                                  }
                                else
                                  {
                                    t = w_44;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        d_37 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = d_37;
                                  }
                                return(t);
                              }
                              t = map_1_0(a_9, t);
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
    t = rename_4_0(SVar_1_0, x_8, sboundin_3_0, spaste_1_0, t);
  }
  return(t);
}
ATerm ListBuild_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      g_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_37;
  {
    ATerm b_9 (ATerm t)
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
                ATerm e_45 = ATgetFirst((ATermList) a_45);
                if(match_cons(e_45, sym_Var_1))
                  {
                    ATerm g_45 = ATgetArgument(e_45, 0);
                    if(match_cons(g_45, sym_ListVar_1))
                      {
                        if(((h_37 != NULL) && (h_37 != ATgetArgument(g_45, 0))))
                          _fail(ATgetArgument(g_45, 0));
                        else
                          h_37 = ATgetArgument(g_45, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm f_45 = (ATerm) ATgetNext((ATermList) a_45);
                  if(((ATgetType(f_45) == AT_LIST) && !(ATisEmpty(f_45))))
                    {
                      ATerm i_45 = ATgetFirst((ATermList) f_45);
                      if(match_cons(i_45, sym_Op_2))
                        {
                          ATerm l_45 = ATgetArgument(i_45, 0);
                          if((ATgetSymbol((ATermAppl) l_45) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm m_45 = ATgetArgument(i_45, 1);
                            if(((ATgetType(m_45) != AT_LIST) || !(ATisEmpty(m_45))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm k_45 = (ATerm) ATgetNext((ATermList) f_45);
                        if(((ATgetType(k_45) != AT_LIST) || !(ATisEmpty(k_45))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_37));
      return(t);
    }
    t = oncetd_1_0(b_9, t);
    i_37 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, i_37);
  }
  return(t);
}
ATerm ListMatch_0_0 (ATerm t)
{
  ATerm j_37 = NULL,l_37 = NULL,m_37 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      j_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_37;
  {
    ATerm c_9 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm n_45 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) n_45) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm o_45 = ATgetArgument(t, 1);
            if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
              {
                ATerm p_45 = ATgetFirst((ATermList) o_45);
                if(match_cons(p_45, sym_Var_1))
                  {
                    ATerm r_45 = ATgetArgument(p_45, 0);
                    if(match_cons(r_45, sym_ListVar_1))
                      {
                        if(((l_37 != NULL) && (l_37 != ATgetArgument(r_45, 0))))
                          _fail(ATgetArgument(r_45, 0));
                        else
                          l_37 = ATgetArgument(r_45, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm q_45 = (ATerm) ATgetNext((ATermList) o_45);
                  if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
                    {
                      ATerm s_45 = ATgetFirst((ATermList) q_45);
                      if(match_cons(s_45, sym_Op_2))
                        {
                          ATerm u_45 = ATgetArgument(s_45, 0);
                          if((ATgetSymbol((ATermAppl) u_45) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm v_45 = ATgetArgument(s_45, 1);
                            if(((ATgetType(v_45) != AT_LIST) || !(ATisEmpty(v_45))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm t_45 = (ATerm) ATgetNext((ATermList) q_45);
                        if(((ATgetType(t_45) != AT_LIST) || !(ATisEmpty(t_45))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_37));
      return(t);
    }
    t = oncetd_1_0(c_9, t);
    m_37 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, m_37);
  }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      r_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_37;
  {
    ATerm d_9 (ATerm t)
    {
      ATerm w_45 = t;
      int y_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_37 = NULL;
          if(match_cons(t, sym_ListVar_1))
            {
              v_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_37;
          ;
          LocalPopChoice(y_45);
        }
      else
        {
          t = w_45;
        }
      return(t);
    }
    t = map_1_0(d_9, t);
    t_37 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, t_37, s_37);
  }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm j_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
      o_38 = ATgetArgument(t, 2);
      j_38 = ATgetArgument(t, 3);
      {
        ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
        t = o_38;
        {
          ATerm e_9 (ATerm t)
          {
            ATerm z_38 = NULL;
            ATerm z_45 = t;
            int a_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_VarDec_2))
                  {
                    z_38 = ATgetArgument(t, 0);
                    {
                      ATerm b_46 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(a_46);
                t = z_38;
              }
            else
              {
                t = z_45;
                if(match_cons(t, sym_DefaultVarDec_1))
                  {
                    z_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = z_38;
              }
            return(t);
          }
          t = map_1_0(e_9, t);
          t_38 = t;
          t = j_38;
          {
            ATerm f_9 (ATerm t)
            {
              ATerm e_39 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  e_39 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, e_39);
              return(t);
            }
            ATerm g_9 (ATerm t)
            {
              ATerm f_39 = NULL,j_39 = NULL,l_39 = NULL;
              if(match_cons(t, sym_LRule_1))
                {
                  j_39 = ATgetArgument(t, 0);
                  t = j_39;
                  if(match_cons(t, sym_Rule_3))
                    {
                      f_39 = ATgetArgument(t, 0);
                      {
                        ATerm c_46 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm d_46 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = f_39;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm e_46 = t;
                  int f_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Scope_2))
                        {
                          j_39 = ATgetArgument(t, 0);
                          {
                            ATerm g_46 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(f_46);
                      t = j_39;
                    }
                  else
                    {
                      t = e_46;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          j_39 = ATgetArgument(t, 0);
                          t = j_39;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm h_46 = t;
                          int i_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm j_46 = ATgetArgument(t, 0);
                                  ATerm l_46 = ATgetArgument(t, 1);
                                  l_39 = ATgetArgument(t, 2);
                                  {
                                    ATerm m_46 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_46);
                              t = l_39;
                              {
                                ATerm h_9 (ATerm t)
                                {
                                  ATerm k_40 = NULL;
                                  ATerm n_46 = t;
                                  int o_46 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          k_40 = ATgetArgument(t, 0);
                                          {
                                            ATerm p_46 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(o_46);
                                      t = k_40;
                                    }
                                  else
                                    {
                                      t = n_46;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          k_40 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = k_40;
                                    }
                                  return(t);
                                }
                                t = map_1_0(h_9, t);
                              }
                            }
                          else
                            {
                              t = h_46;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm q_46 = ATgetArgument(t, 0);
                                  ATerm r_46 = ATgetArgument(t, 1);
                                  l_39 = ATgetArgument(t, 2);
                                  {
                                    ATerm s_46 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = l_39;
                              {
                                ATerm i_9 (ATerm t)
                                {
                                  ATerm s_40 = NULL;
                                  ATerm t_46 = t;
                                  int u_46 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          s_40 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_46 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(u_46);
                                      t = s_40;
                                    }
                                  else
                                    {
                                      t = t_46;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          s_40 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = s_40;
                                    }
                                  return(t);
                                }
                                t = map_1_0(i_9, t);
                              }
                            }
                        }
                    }
                }
              return(t);
            }
            t = free_vars_3_0(f_9, g_9, tboundin_3_0, t);
            u_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_38, t_38);
            t = diff_0_0(t);
            v_38 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_38, n_38, o_38, (ATerm) ATmakeAppl(sym_Scope_2, v_38, j_38));
          }
        }
      }
    }
  else
    {
      ATerm y_40 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          m_38 = ATgetArgument(t, 0);
          n_38 = ATgetArgument(t, 1);
          o_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_38;
      {
        ATerm j_9 (ATerm t)
        {
          ATerm z_40 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              z_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, z_40);
          return(t);
        }
        ATerm k_9 (ATerm t)
        {
          ATerm a_41 = NULL,f_41 = NULL,h_41 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              f_41 = ATgetArgument(t, 0);
              t = f_41;
              if(match_cons(t, sym_Rule_3))
                {
                  a_41 = ATgetArgument(t, 0);
                  {
                    ATerm w_46 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm x_46 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = a_41;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm y_46 = t;
              int z_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      f_41 = ATgetArgument(t, 0);
                      {
                        ATerm a_47 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_46);
                  t = f_41;
                }
              else
                {
                  t = y_46;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      f_41 = ATgetArgument(t, 0);
                      t = f_41;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm b_47 = t;
                      int c_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm e_47 = ATgetArgument(t, 0);
                              ATerm f_47 = ATgetArgument(t, 1);
                              h_41 = ATgetArgument(t, 2);
                              {
                                ATerm g_47 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(c_47);
                          t = h_41;
                          {
                            ATerm l_9 (ATerm t)
                            {
                              ATerm r_41 = NULL;
                              ATerm h_47 = t;
                              int k_47 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      r_41 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_47 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(k_47);
                                  t = r_41;
                                }
                              else
                                {
                                  t = h_47;
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
                            t = map_1_0(l_9, t);
                          }
                        }
                      else
                        {
                          t = b_47;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm r_47 = ATgetArgument(t, 0);
                              ATerm s_47 = ATgetArgument(t, 1);
                              h_41 = ATgetArgument(t, 2);
                              {
                                ATerm t_47 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = h_41;
                          {
                            ATerm m_9 (ATerm t)
                            {
                              ATerm b_42 = NULL;
                              ATerm u_47 = t;
                              int v_47 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      b_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm w_47 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(v_47);
                                  t = b_42;
                                }
                              else
                                {
                                  t = u_47;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      b_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_42;
                                }
                              return(t);
                            }
                            t = map_1_0(m_9, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(j_9, k_9, tboundin_3_0, t);
        y_40 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_38, n_38, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, y_40, o_38));
      }
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm r_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      t_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
      v_42 = ATgetArgument(t, 2);
      r_42 = ATgetArgument(t, 3);
      {
        ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
        t = v_42;
        {
          ATerm n_9 (ATerm t)
          {
            ATerm j_43 = NULL;
            ATerm x_47 = t;
            int y_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_VarDec_2))
                  {
                    j_43 = ATgetArgument(t, 0);
                    {
                      ATerm z_47 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(y_47);
                t = j_43;
              }
            else
              {
                t = x_47;
                if(match_cons(t, sym_DefaultVarDec_1))
                  {
                    j_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_43;
              }
            return(t);
          }
          t = map_1_0(n_9, t);
          a_43 = t;
          t = r_42;
          {
            ATerm o_9 (ATerm t)
            {
              ATerm o_43 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  o_43 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, o_43);
              return(t);
            }
            ATerm p_9 (ATerm t)
            {
              ATerm p_43 = NULL,u_43 = NULL,y_43 = NULL;
              if(match_cons(t, sym_LRule_1))
                {
                  u_43 = ATgetArgument(t, 0);
                  t = u_43;
                  if(match_cons(t, sym_Rule_3))
                    {
                      p_43 = ATgetArgument(t, 0);
                      {
                        ATerm a_48 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm b_48 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = p_43;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm c_48 = t;
                  int d_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Scope_2))
                        {
                          u_43 = ATgetArgument(t, 0);
                          {
                            ATerm e_48 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(d_48);
                      t = u_43;
                    }
                  else
                    {
                      t = c_48;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          u_43 = ATgetArgument(t, 0);
                          t = u_43;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm f_48 = t;
                          int g_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm h_48 = ATgetArgument(t, 0);
                                  ATerm i_48 = ATgetArgument(t, 1);
                                  y_43 = ATgetArgument(t, 2);
                                  {
                                    ATerm j_48 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(g_48);
                              t = y_43;
                              {
                                ATerm q_9 (ATerm t)
                                {
                                  ATerm m_44 = NULL;
                                  ATerm k_48 = t;
                                  int l_48 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          m_44 = ATgetArgument(t, 0);
                                          {
                                            ATerm m_48 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(l_48);
                                      t = m_44;
                                    }
                                  else
                                    {
                                      t = k_48;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          m_44 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = m_44;
                                    }
                                  return(t);
                                }
                                t = map_1_0(q_9, t);
                              }
                            }
                          else
                            {
                              t = f_48;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm n_48 = ATgetArgument(t, 0);
                                  ATerm o_48 = ATgetArgument(t, 1);
                                  y_43 = ATgetArgument(t, 2);
                                  {
                                    ATerm p_48 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = y_43;
                              {
                                ATerm r_9 (ATerm t)
                                {
                                  ATerm s_44 = NULL;
                                  ATerm q_48 = t;
                                  int r_48 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          s_44 = ATgetArgument(t, 0);
                                          {
                                            ATerm s_48 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(r_48);
                                      t = s_44;
                                    }
                                  else
                                    {
                                      t = q_48;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          s_44 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = s_44;
                                    }
                                  return(t);
                                }
                                t = map_1_0(r_9, t);
                              }
                            }
                        }
                    }
                }
              return(t);
            }
            t = free_vars_3_0(o_9, p_9, tboundin_3_0, t);
            b_43 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_43, a_43);
            t = diff_0_0(t);
            c_43 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_42, u_42, v_42, (ATerm) ATmakeAppl(sym_Scope_2, c_43, (ATerm) ATmakeAppl(sym_SRule_1, r_42)));
          }
        }
      }
    }
  else
    {
      ATerm b_45 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          t_42 = ATgetArgument(t, 0);
          u_42 = ATgetArgument(t, 1);
          v_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_42;
      {
        ATerm s_9 (ATerm t)
        {
          ATerm c_45 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              c_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, c_45);
          return(t);
        }
        ATerm v_9 (ATerm t)
        {
          ATerm d_45 = NULL,h_45 = NULL,j_45 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              h_45 = ATgetArgument(t, 0);
              t = h_45;
              if(match_cons(t, sym_Rule_3))
                {
                  d_45 = ATgetArgument(t, 0);
                  {
                    ATerm t_48 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm u_48 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = d_45;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm v_48 = t;
              int w_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      h_45 = ATgetArgument(t, 0);
                      {
                        ATerm x_48 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_48);
                  t = h_45;
                }
              else
                {
                  t = v_48;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      h_45 = ATgetArgument(t, 0);
                      t = h_45;
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
                              j_45 = ATgetArgument(t, 2);
                              {
                                ATerm c_49 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_48);
                          t = j_45;
                          {
                            ATerm e_10 (ATerm t)
                            {
                              ATerm x_45 = NULL;
                              ATerm i_49 = t;
                              int j_49 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      x_45 = ATgetArgument(t, 0);
                                      {
                                        ATerm k_49 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(j_49);
                                  t = x_45;
                                }
                              else
                                {
                                  t = i_49;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      x_45 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_45;
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
                              ATerm l_49 = ATgetArgument(t, 0);
                              ATerm r_49 = ATgetArgument(t, 1);
                              j_45 = ATgetArgument(t, 2);
                              {
                                ATerm t_49 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = j_45;
                          {
                            ATerm m_10 (ATerm t)
                            {
                              ATerm k_46 = NULL;
                              ATerm u_49 = t;
                              int x_49 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      k_46 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_49 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(x_49);
                                  t = k_46;
                                }
                              else
                                {
                                  t = u_49;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      k_46 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_46;
                                }
                              return(t);
                            }
                            t = map_1_0(m_10, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(s_9, v_9, tboundin_3_0, t);
        b_45 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_42, u_42, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, b_45, (ATerm) ATmakeAppl(sym_SRule_1, v_42)));
      }
    }
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm p_47 (ATerm d_47, ATerm t)
  {
    ATerm i_47 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue)), d_47);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_47 = ATgetFirst((ATermList) t);
        {
          ATerm z_49 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_47;
    if(match_cons(t, sym_Defined_1))
      {
        ATerm a_50 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) a_50) != ATmakeSymbol("r_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_h_26;
    return(t);
  }
  ATerm q_47 (ATerm j_47, ATerm t)
  {
    ATerm l_47 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue)), j_47);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_47 = ATgetFirst((ATermList) t);
        {
          ATerm b_50 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_47;
    if(match_cons(t, sym_Defined_1))
      {
        ATerm a_51 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) a_51) != ATmakeSymbol("o_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = term_h_26;
    return(t);
  }
  ATerm m_47 = NULL,o_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_51 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_47;
  if(match_int(t, 0))
    {
      ATerm c_51 = t;
      int d_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_47(m_47, t);
          ;
          LocalPopChoice(d_51);
        }
      else
        {
          t = c_51;
          t = q_47(m_47, t);
        }
    }
  else
    {
      t = p_47(m_47, t);
    }
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_49;
  if(match_cons(t, sym_FunType_2))
    {
      h_49 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
      {
        ATerm t_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
        t = h_49;
        {
          ATerm o_10 (ATerm t)
          {
            t = term_e_51;
            return(t);
          }
          ATerm p_10 (ATerm t)
          {
            ATerm z_9 = NULL,b_10 = NULL;
            if(match_cons(t, sym__2))
              {
                z_9 = ATgetArgument(t, 0);
                b_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm f_51 = t;
              int g_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(z_9, b_10);
                  ;
                  LocalPopChoice(g_51);
                }
              else
                {
                  t = f_51;
                  t = SSL_addr(z_9, b_10);
                }
            }
            return(t);
          }
          ATerm r_10 (ATerm t)
          {
            t = term_h_51;
            return(t);
          }
          t = foldr_3_0(o_10, p_10, r_10, t);
          t_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_49, t_9);
          {
            ATerm i_51 = t;
            if((PushChoice() == 0))
              {
                t = CongDefined_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_51;
              }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_49, t_9), term_k_51);
            {
              ATerm s_10 (ATerm t)
              {
                t = term_l_51;
                return(t);
              }
              t = assert_1_0(s_10, t);
              t = h_49;
              {
                ATerm t_10 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_37;
                  return(t);
                }
                ATerm u_10 (ATerm t)
                {
                  ATerm f_10 = NULL,g_10 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_10 = ATgetFirst((ATermList) t);
                      g_10 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, f_10, g_10);
                  return(t);
                }
                ATerm v_10 (ATerm t)
                {
                  ATerm h_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm m_51 = ATgetArgument(t, 0);
                      if(match_cons(m_51, sym__2))
                        {
                          h_10 = ATgetArgument(m_51, 0);
                          k_10 = ATgetArgument(m_51, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm n_51 = ATgetArgument(t, 1);
                        if(match_cons(n_51, sym__2))
                          {
                            j_10 = ATgetArgument(n_51, 0);
                            l_10 = ATgetArgument(n_51, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_10), h_10), (ATerm) ATinsert(CheckATermList(l_10), k_10));
                  return(t);
                }
                ATerm w_10 (ATerm t)
                {
                  ATerm n_10 = NULL;
                  t = new_0_0(t);
                  n_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, n_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_36), term_p_36)), n_10);
                  return(t);
                }
                t = genzip_4_0(t_10, u_10, v_10, w_10, t);
                if(match_cons(t, sym__2))
                  {
                    w_9 = ATgetArgument(t, 0);
                    x_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_9;
                {
                  ATerm x_10 (ATerm t)
                  {
                    ATerm q_10 = NULL;
                    q_10 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_10), (ATerm)ATempty, (ATerm) ATempty);
                    return(t);
                  }
                  t = map_1_0(x_10, t);
                  y_9 = t;
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_49, w_9, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, f_49, y_9));
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
          ATerm o_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_49, term_e_51);
      {
        ATerm p_51 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_51;
          }
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_49, term_e_51), term_r_51);
        {
          ATerm y_10 (ATerm t)
          {
            t = term_l_51;
            return(t);
          }
          t = assert_1_0(y_10, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, f_49, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, f_49, (ATerm) ATempty));
        }
      }
    }
  return(t);
}
ATerm RulesToSdefs_0_0 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm s_51 = ATgetArgument(t, 0);
      if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
        {
          ATerm t_51 = ATgetFirst((ATermList) s_51);
          if(match_cons(t_51, sym_Signature_1))
            {
              m_49 = ATgetArgument(t_51, 0);
            }
          else
            _fail(t);
          {
            ATerm u_51 = (ATerm) ATgetNext((ATermList) s_51);
            if(((ATgetType(u_51) == AT_LIST) && !(ATisEmpty(u_51))))
              {
                ATerm y_51 = ATgetFirst((ATermList) u_51);
                if(match_cons(y_51, sym_Strategies_1))
                  {
                    n_49 = ATgetArgument(y_51, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm z_51 = (ATerm) ATgetNext((ATermList) u_51);
                  if(((ATgetType(z_51) != AT_LIST) || !(ATisEmpty(z_51))))
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
  t = m_49;
  {
    ATerm z_10 (ATerm t)
    {
      t = term_l_51;
      return(t);
    }
    ATerm b_11 (ATerm t)
    {
      ATerm c_11 (ATerm t)
      {
        ATerm s_49 = NULL;
        if(match_cons(t, sym_Constructors_1))
          {
            s_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_49;
        t = filter_1_0(MkCongDef_0_0, t);
        return(t);
      }
      t = filter_1_0(c_11, t);
      t = concat_0_0(t);
      return(t);
    }
    t = scope_2_0(z_10, b_11, t);
    o_49 = t;
    t = (ATerm) ATinsert(CheckATermList(n_49), (ATerm) ATmakeAppl(sym_RDefT_4, term_e_52, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_h_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_36), term_p_36))), (ATerm) ATmakeAppl(sym_VarDec_2, term_f_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_36), term_p_36))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_n_52, term_s_52, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_c_53), term_w_52)))));
    {
      ATerm d_11 (ATerm t)
      {
        ATerm d_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RDtoSD_0_0(t);
            ;
            LocalPopChoice(h_53);
          }
        else
          {
            t = d_53;
            t = DeclareVariables_0_0(t);
          }
        {
          ATerm e_11 (ATerm t)
          {
            ATerm i_53 = t;
            int j_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_49 = NULL,w_49 = NULL;
                if(match_cons(t, sym_Call_2))
                  {
                    v_49 = ATgetArgument(t, 0);
                    w_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, v_49, w_49, (ATerm) ATempty);
                ;
                LocalPopChoice(j_53);
              }
            else
              {
                t = i_53;
              }
            return(t);
          }
          t = topdown_1_0(e_11, t);
        }
        return(t);
      }
      t = map_1_0(d_11, t);
      p_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
      {
        ATerm k_53 = t;
        int m_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm o_53 = ATgetArgument(t, 0);
                ATerm t_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_49;
            {
              ATerm f_11 (ATerm t)
              {
                t = p_49;
                return(t);
              }
              t = at_end_1_0(f_11, t);
            }
            ;
            LocalPopChoice(m_53);
          }
        else
          {
            t = k_53;
            {
              ATerm a_11 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_49, p_49));
              if(match_cons(t, sym__2))
                {
                  ATerm u_53 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_53) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  a_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_11;
              t = concat_0_0(t);
            }
          }
        q_49 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, q_49)), (ATerm) ATmakeAppl(sym_Signature_1, m_49)));
      }
    }
  }
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      c_50 = ATgetArgument(t, 0);
      d_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_50 = ATgetFirst((ATermList) t);
      {
        ATerm v_53 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_50;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm w_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_53) != ATmakeSymbol("c_2", 0, ATtrue)))
        _fail(t);
      e_50 = ATgetArgument(t, 1);
      f_50 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_50;
  {
    ATerm j_11 (ATerm t)
    {
      t = term_e_51;
      return(t);
    }
    ATerm l_11 (ATerm t)
    {
      ATerm j_50 = NULL,k_50 = NULL;
      if(match_cons(t, sym__2))
        {
          j_50 = ATgetArgument(t, 0);
          k_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_53 = t;
        int y_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_50, k_50);
            ;
            LocalPopChoice(y_53);
          }
        else
          {
            t = x_53;
            t = SSL_addr(j_50, k_50);
          }
      }
      return(t);
    }
    ATerm m_11 (ATerm t)
    {
      t = term_h_51;
      return(t);
    }
    t = foldr_3_0(j_11, l_11, m_11, t);
    i_50 = t;
    t = SSL_int_to_string(i_50);
    h_50 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue))), h_50), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), c_50), (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue))), f_50), (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue))), e_50), (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym_Op_2, c_50, d_50);
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm l_50 = NULL,m_50 = NULL;
    if(match_cons(t, sym__2))
      {
        l_50 = ATgetArgument(t, 0);
        m_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_50, m_50, (ATerm) ATempty);
    return(t);
  }
  ATerm o_11 (ATerm t)
  {
    ATerm n_50 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm z_53 = ATgetArgument(t, 0);
        if(((ATgetType(z_53) != AT_INT) || (ATgetInt((ATermInt) z_53) != 0)))
          _fail(t);
        {
          ATerm a_54 = ATgetArgument(t, 1);
        }
        n_50 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = n_50;
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
    if(match_cons(t, sym__3))
      {
        o_50 = ATgetArgument(t, 0);
        p_50 = ATgetArgument(t, 1);
        q_50 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, o_50, term_h_51);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, o_50, term_h_51);
    {
      ATerm d_54 = t;
      int g_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(o_50, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(g_54);
        }
      else
        {
          t = d_54;
          t = SSL_subtr(o_50, (ATerm) ATmakeInt(1));
        }
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, r_50, p_50, (ATerm) ATinsert(CheckATermList(q_50), p_50));
    }
    return(t);
  }
  t = for_3_0(n_11, o_11, p_11, t);
  return(t);
}
ATerm CheckTuple_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      ATerm h_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_50;
  {
    ATerm u_11 (ATerm t)
    {
      t = term_e_51;
      return(t);
    }
    ATerm v_11 (ATerm t)
    {
      ATerm w_50 = NULL,x_50 = NULL;
      if(match_cons(t, sym__2))
        {
          w_50 = ATgetArgument(t, 0);
          x_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_54 = t;
        int m_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(w_50, x_50);
            ;
            LocalPopChoice(m_54);
          }
        else
          {
            t = k_54;
            t = SSL_addr(w_50, x_50);
          }
      }
      return(t);
    }
    ATerm w_11 (ATerm t)
    {
      t = term_h_51;
      return(t);
    }
    t = foldr_3_0(u_11, v_11, w_11, t);
    t_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_50, term_q_54);
    t = copy_0_0(t);
    u_50 = t;
    t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, u_50, term_q_54));
    t = GenerateCheckRule_0_0(t);
    {
      ATerm r_54 = t;
      int s_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_50 = NULL,z_50 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue)), (ATerm) ATempty);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_50 = ATgetFirst((ATermList) t);
              {
                ATerm u_54 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = z_50;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm v_54 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_54) != ATmakeSymbol("z_1", 0, ATtrue)))
                _fail(t);
              y_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_50;
          ;
          LocalPopChoice(s_54);
        }
      else
        {
          t = r_54;
          t = (ATerm) ATempty;
        }
      v_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_54, (ATerm) ATinsert(CheckATermList(v_50), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, u_50, term_q_54)))));
      {
        ATerm z_11 (ATerm t)
        {
          t = term_y_54;
          return(t);
        }
        t = assert_1_0(z_11, t);
        t = (ATerm) ATmakeAppl(sym_Op_2, term_y_34, s_50);
      }
    }
  }
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  if(match_cons(t, sym_Op_2))
    {
      w_51 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,h_11 = NULL;
        t = x_51;
        {
          ATerm a_12 (ATerm t)
          {
            t = term_e_51;
            return(t);
          }
          ATerm c_12 (ATerm t)
          {
            ATerm i_11 = NULL,k_11 = NULL;
            if(match_cons(t, sym__2))
              {
                i_11 = ATgetArgument(t, 0);
                k_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm f_55 = t;
              int h_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(i_11, k_11);
                  ;
                  LocalPopChoice(h_55);
                }
              else
                {
                  t = f_55;
                  t = SSL_addr(i_11, k_11);
                }
            }
            return(t);
          }
          ATerm d_12 (ATerm t)
          {
            t = term_h_51;
            return(t);
          }
          t = foldr_3_0(a_12, c_12, d_12, t);
          g_11 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, w_51, (ATerm) ATmakeAppl(sym_Keys_1, g_11)));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_11 = ATgetFirst((ATermList) t);
              {
                ATerm k_55 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = h_11;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm l_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_55) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, w_51, (ATerm) ATempty);
        }
        ;
        LocalPopChoice(c_55);
      }
    else
      {
        t = a_55;
        {
          ATerm q_11 = NULL,r_11 = NULL;
          t = x_51;
          {
            ATerm f_12 (ATerm t)
            {
              t = term_e_51;
              return(t);
            }
            ATerm h_12 (ATerm t)
            {
              ATerm s_11 = NULL,t_11 = NULL;
              if(match_cons(t, sym__2))
                {
                  s_11 = ATgetArgument(t, 0);
                  t_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm m_55 = t;
                int n_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(s_11, t_11);
                    ;
                    LocalPopChoice(n_55);
                  }
                else
                  {
                    t = m_55;
                    t = SSL_addr(s_11, t_11);
                  }
              }
              return(t);
            }
            ATerm i_12 (ATerm t)
            {
              t = term_h_51;
              return(t);
            }
            t = foldr_3_0(f_12, h_12, i_12, t);
            q_11 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Op_2, w_51, (ATerm) ATmakeAppl(sym_Keys_1, q_11)));
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_11 = ATgetFirst((ATermList) t);
                {
                  ATerm o_55 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = r_11;
            if(match_cons(t, sym_Defined_1))
              {
                ATerm p_55 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_55) != ATmakeSymbol("t_1", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Op_2, w_51, (ATerm) ATempty);
          }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  ATerm a_52 (ATerm t)
  {
    ATerm q_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_115(t);
        {
          ATerm j_12 (ATerm t)
          {
            ATerm s_55 = t;
            int t_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_52(t);
                ;
                LocalPopChoice(t_55);
              }
            else
              {
                t = s_55;
              }
            return(t);
          }
          t = SRTS_all(j_12, t);
        }
        ;
        LocalPopChoice(r_55);
      }
    else
      {
        t = q_55;
        t = SRTS_some(a_52, t);
      }
    return(t);
  }
  t = a_52(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL;
  ATerm k_12 (ATerm t)
  {
    t = term_v_55;
    return(t);
  }
  ATerm l_12 (ATerm t)
  {
    ATerm d_52 = NULL;
    d_52 = t;
    t = d_142(t);
    if(((c_52 != NULL) && (c_52 != t)))
      _fail(t);
    else
      c_52 = t;
    t = e_142(t);
    if(((b_52 != NULL) && (b_52 != t)))
      _fail(t);
    else
      b_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_55, (ATerm) ATmakeAppl(sym_Defined_3, term_z_55, not_null(b_52), not_null(c_52)));
    {
      ATerm n_12 (ATerm t)
      {
        t = term_v_55;
        return(t);
      }
      t = assert_1_0(n_12, t);
      t = d_52;
      {
        ATerm o_12 (ATerm t)
        {
          ATerm a_56 = t;
          if((PushChoice() == 0))
            {
              ATerm b_56 = t;
              int c_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0_0(t);
                  ;
                  LocalPopChoice(c_56);
                }
              else
                {
                  t = b_56;
                  t = CheckTuple_0_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_56;
            }
          t = CheckConsError_0_0(t);
          return(t);
        }
        t = manytd_1_0(o_12, t);
      }
    }
    return(t);
  }
  t = scope_2_0(k_12, l_12, t);
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm g_52 = NULL,i_52 = NULL;
  ATerm e_56 = t;
  int f_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_52 = ATgetArgument(t, 0);
          {
            ATerm g_56 = ATgetArgument(t, 1);
          }
          i_52 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(f_56);
      t = i_52;
      {
        ATerm p_12 (ATerm t)
        {
          t = g_52;
          return(t);
        }
        ATerm q_12 (ATerm t)
        {
          t = term_h_56;
          return(t);
        }
        t = check_constructors_p__2_0(p_12, q_12, t);
      }
    }
  else
    {
      t = e_56;
      if(match_cons(t, sym_RDef_3))
        {
          g_52 = ATgetArgument(t, 0);
          {
            ATerm i_56 = ATgetArgument(t, 1);
          }
          i_52 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_52;
      {
        ATerm r_12 (ATerm t)
        {
          t = g_52;
          return(t);
        }
        ATerm s_12 (ATerm t)
        {
          t = term_j_56;
          return(t);
        }
        t = check_constructors_p__2_0(r_12, s_12, t);
      }
    }
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm t_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      x_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_52;
  if(match_cons(t, sym_FunType_2))
    {
      z_52 = ATgetArgument(t, 0);
      t_52 = ATgetArgument(t, 1);
      {
        ATerm e_53 = NULL;
        t = z_52;
        {
          ATerm v_12 (ATerm t)
          {
            t = term_e_51;
            return(t);
          }
          ATerm w_12 (ATerm t)
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
              ATerm k_56 = t;
              int l_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(f_53, g_53);
                  ;
                  LocalPopChoice(l_56);
                }
              else
                {
                  t = k_56;
                  t = SSL_addr(f_53, g_53);
                }
            }
            return(t);
          }
          ATerm x_12 (ATerm t)
          {
            t = term_h_51;
            return(t);
          }
          t = foldr_3_0(v_12, w_12, x_12, t);
          e_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, x_52, (ATerm) ATmakeAppl(sym_Keys_1, e_53)), term_o_56);
          {
            ATerm y_12 (ATerm t)
            {
              t = term_p_56;
              return(t);
            }
            t = assert_1_0(y_12, t);
            t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_52, (ATerm) ATmakeAppl(sym_FunType_2, z_52, t_52));
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          z_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, x_52, term_q_56), term_t_56);
      {
        ATerm z_12 (ATerm t)
        {
          t = term_p_56;
          return(t);
        }
        t = assert_1_0(z_12, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_52, (ATerm) ATmakeAppl(sym_ConstType_1, z_52));
      }
    }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm l_53 = NULL,n_53 = NULL,p_53 = NULL,q_53 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm u_56 = ATgetArgument(t, 0);
      if(((ATgetType(u_56) == AT_LIST) && !(ATisEmpty(u_56))))
        {
          ATerm v_56 = ATgetFirst((ATermList) u_56);
          if(match_cons(v_56, sym_Signature_1))
            {
              ATerm x_56 = ATgetArgument(v_56, 0);
              if(((ATgetType(x_56) == AT_LIST) && !(ATisEmpty(x_56))))
                {
                  ATerm y_56 = ATgetFirst((ATermList) x_56);
                  if(match_cons(y_56, sym_Constructors_1))
                    {
                      l_53 = ATgetArgument(y_56, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_57 = (ATerm) ATgetNext((ATermList) x_56);
                    if(((ATgetType(a_57) != AT_LIST) || !(ATisEmpty(a_57))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm w_56 = (ATerm) ATgetNext((ATermList) u_56);
            if(((ATgetType(w_56) == AT_LIST) && !(ATisEmpty(w_56))))
              {
                ATerm b_57 = ATgetFirst((ATermList) w_56);
                if(match_cons(b_57, sym_Strategies_1))
                  {
                    n_53 = ATgetArgument(b_57, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm c_57 = (ATerm) ATgetNext((ATermList) w_56);
                  if(((ATgetType(c_57) != AT_LIST) || !(ATisEmpty(c_57))))
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(l_53), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_54), term_q_54))), term_e_57);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = n_53;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_53 = NULL,s_53 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_53 = ATgetFirst((ATermList) t);
            {
              ATerm h_57 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_53;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_57 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_57) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            r_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_53;
        ;
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = (ATerm) ATempty;
      }
    p_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_53, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(l_53), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_54), term_q_54))), term_e_57));
    {
      ATerm k_57 = t;
      int l_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_57 = ATgetArgument(t, 0);
              ATerm n_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_53;
          {
            ATerm a_13 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(l_53), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_q_54), term_q_54), term_q_54))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_y_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_54), term_q_54))), term_e_57);
              return(t);
            }
            t = at_end_1_0(a_13, t);
          }
          ;
          LocalPopChoice(l_57);
        }
      else
        {
          t = k_57;
          {
            ATerm x_11 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_53, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(l_53), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue)))))), (ATerm) ATmakeAppl(sym_OpDecl_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATmakeAppl(sym_ConstType_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue))))))));
            if(match_cons(t, sym__2))
              {
                ATerm o_57 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_57) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                x_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_11;
            t = concat_0_0(t);
          }
        }
      q_53 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, n_53)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, q_53)))));
    }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm o_141 (ATerm), ATerm t)
{
  ATerm p_57 = t;
  int r_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(o_141, _id, t);
      ;
      LocalPopChoice(r_57);
    }
  else
    {
      t = p_57;
      {
        ATerm s_57 = t;
        int u_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 (ATerm t)
            {
              ATerm y_11 = NULL,b_12 = NULL;
              y_11 = t;
              t = o_141(t);
              b_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_11, b_12);
              {
                ATerm e_13 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_57 = ATgetArgument(t, 0);
                      if(((ATgetType(w_57) != AT_LIST) || !(ATisEmpty(w_57))))
                        _fail(t);
                      {
                        ATerm y_57 = ATgetArgument(t, 1);
                        if(((ATgetType(y_57) != AT_LIST) || !(ATisEmpty(y_57))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm g_13 (ATerm t)
                {
                  ATerm b_54 = NULL,c_54 = NULL,e_54 = NULL,f_54 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm z_57 = ATgetArgument(t, 0);
                      if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
                        {
                          b_54 = ATgetFirst((ATermList) z_57);
                          e_54 = (ATerm) ATgetNext((ATermList) z_57);
                        }
                      else
                        _fail(t);
                      {
                        ATerm a_58 = ATgetArgument(t, 1);
                        if(((ATgetType(a_58) == AT_LIST) && !(ATisEmpty(a_58))))
                          {
                            c_54 = ATgetFirst((ATermList) a_58);
                            f_54 = (ATerm) ATgetNext((ATermList) a_58);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_54, c_54), (ATerm) ATmakeAppl(sym__2, e_54, f_54));
                  return(t);
                }
                ATerm h_13 (ATerm t)
                {
                  ATerm i_54 = NULL,j_54 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      i_54 = ATgetArgument(t, 0);
                      j_54 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(j_54), i_54);
                  return(t);
                }
                ATerm i_13 (ATerm t)
                {
                  ATerm l_54 = NULL,n_54 = NULL,o_54 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      l_54 = ATgetArgument(t, 0);
                      o_54 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_54;
                  {
                    ATerm b_58 = t;
                    int c_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm d_58 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(c_58);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_54);
                      }
                    else
                      {
                        t = b_58;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm e_58 = ATgetArgument(t, 0);
                            n_54 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_54, n_54);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(e_13, g_13, h_13, i_13, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, b_13, _id, t);
            ;
            LocalPopChoice(u_57);
          }
        else
          {
            t = s_57;
            {
              ATerm j_13 (ATerm t)
              {
                ATerm e_12 = NULL,g_12 = NULL;
                e_12 = t;
                t = o_141(t);
                g_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_12, g_12);
                {
                  ATerm k_13 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm f_58 = ATgetArgument(t, 0);
                        if(((ATgetType(f_58) != AT_LIST) || !(ATisEmpty(f_58))))
                          _fail(t);
                        {
                          ATerm g_58 = ATgetArgument(t, 1);
                          if(((ATgetType(g_58) != AT_LIST) || !(ATisEmpty(g_58))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm l_13 (ATerm t)
                  {
                    ATerm t_54 = NULL,w_54 = NULL,z_54 = NULL,b_55 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm h_58 = ATgetArgument(t, 0);
                        if(((ATgetType(h_58) == AT_LIST) && !(ATisEmpty(h_58))))
                          {
                            t_54 = ATgetFirst((ATermList) h_58);
                            z_54 = (ATerm) ATgetNext((ATermList) h_58);
                          }
                        else
                          _fail(t);
                        {
                          ATerm i_58 = ATgetArgument(t, 1);
                          if(((ATgetType(i_58) == AT_LIST) && !(ATisEmpty(i_58))))
                            {
                              w_54 = ATgetFirst((ATermList) i_58);
                              b_55 = (ATerm) ATgetNext((ATermList) i_58);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_54, w_54), (ATerm) ATmakeAppl(sym__2, z_54, b_55));
                    return(t);
                  }
                  ATerm m_13 (ATerm t)
                  {
                    ATerm d_55 = NULL,e_55 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        d_55 = ATgetArgument(t, 0);
                        e_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(e_55), d_55);
                    return(t);
                  }
                  ATerm o_13 (ATerm t)
                  {
                    ATerm g_55 = NULL,i_55 = NULL,j_55 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        g_55 = ATgetArgument(t, 0);
                        j_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_55;
                    {
                      ATerm j_58 = t;
                      int k_58 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm l_58 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_58);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_55);
                        }
                      else
                        {
                          t = j_58;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm m_58 = ATgetArgument(t, 0);
                              i_55 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, j_55, i_55);
                        }
                    }
                    return(t);
                  }
                  t = genzip_4_0(k_13, l_13, m_13, o_13, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, j_13, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm u_55 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_55;
  {
    ATerm p_13 (ATerm t)
    {
      ATerm w_55 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          w_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, w_55);
      return(t);
    }
    ATerm q_13 (ATerm t)
    {
      ATerm n_58 = t;
      int o_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_55 = NULL,d_56 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              d_56 = ATgetArgument(t, 0);
              t = d_56;
              if(match_cons(t, sym_Rule_3))
                {
                  x_55 = ATgetArgument(t, 0);
                  {
                    ATerm p_58 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm q_58 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = x_55;
              t = tvars_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  d_56 = ATgetArgument(t, 0);
                  {
                    ATerm s_58 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = d_56;
            }
          ;
          LocalPopChoice(o_58);
        }
      else
        {
          t = n_58;
          {
            ATerm t_58 = t;
            int u_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind4_0_0(t);
                ;
                LocalPopChoice(u_58);
              }
            else
              {
                t = t_58;
                {
                  ATerm n_56 = NULL;
                  ATerm v_58 = t;
                  int w_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          ATerm x_58 = ATgetArgument(t, 0);
                          ATerm z_58 = ATgetArgument(t, 1);
                          n_56 = ATgetArgument(t, 2);
                          {
                            ATerm a_59 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(w_58);
                      t = n_56;
                      {
                        ATerm r_13 (ATerm t)
                        {
                          ATerm s_56 = NULL;
                          ATerm b_59 = t;
                          int c_59 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  s_56 = ATgetArgument(t, 0);
                                  {
                                    ATerm d_59 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(c_59);
                              t = s_56;
                            }
                          else
                            {
                              t = b_59;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  s_56 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = s_56;
                            }
                          return(t);
                        }
                        t = map_1_0(r_13, t);
                      }
                    }
                  else
                    {
                      t = v_58;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm g_59 = ATgetArgument(t, 0);
                          ATerm k_59 = ATgetArgument(t, 1);
                          n_56 = ATgetArgument(t, 2);
                          {
                            ATerm l_59 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      t = n_56;
                      {
                        ATerm s_13 (ATerm t)
                        {
                          ATerm z_56 = NULL;
                          ATerm m_59 = t;
                          int o_59 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  z_56 = ATgetArgument(t, 0);
                                  {
                                    ATerm r_59 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(o_59);
                              t = z_56;
                            }
                          else
                            {
                              t = m_59;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  z_56 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = z_56;
                            }
                          return(t);
                        }
                        t = map_1_0(s_13, t);
                      }
                    }
                }
              }
          }
        }
      return(t);
    }
    t = free_vars_3_0(p_13, q_13, tboundin_3_0, t);
  }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_57 = NULL,q_57 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      q_57 = ATgetArgument(t, 0);
      t = q_57;
      if(match_cons(t, sym_Rule_3))
        {
          j_57 = ATgetArgument(t, 0);
          {
            ATerm s_59 = ATgetArgument(t, 1);
          }
          {
            ATerm z_59 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_57;
      {
        ATerm t_13 (ATerm t)
        {
          ATerm t_57 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              t_57 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, t_57);
          return(t);
        }
        ATerm u_13 (ATerm t)
        {
          ATerm e_60 = t;
          int f_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind0_0_0(t);
              ;
              LocalPopChoice(f_60);
            }
          else
            {
              t = e_60;
              {
                ATerm v_57 = NULL,x_57 = NULL;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    v_57 = ATgetArgument(t, 0);
                    t = v_57;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm g_60 = t;
                    int h_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm i_60 = ATgetArgument(t, 0);
                            ATerm j_60 = ATgetArgument(t, 1);
                            x_57 = ATgetArgument(t, 2);
                            {
                              ATerm k_60 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_60);
                        t = x_57;
                        {
                          ATerm x_13 (ATerm t)
                          {
                            ATerm r_58 = NULL;
                            ATerm l_60 = t;
                            int m_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    r_58 = ATgetArgument(t, 0);
                                    {
                                      ATerm n_60 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(m_60);
                                t = r_58;
                              }
                            else
                              {
                                t = l_60;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    r_58 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = r_58;
                              }
                            return(t);
                          }
                          t = map_1_0(x_13, t);
                        }
                      }
                    else
                      {
                        t = g_60;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm o_60 = ATgetArgument(t, 0);
                            ATerm r_60 = ATgetArgument(t, 1);
                            x_57 = ATgetArgument(t, 2);
                            {
                              ATerm w_60 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = x_57;
                        {
                          ATerm y_13 (ATerm t)
                          {
                            ATerm y_58 = NULL;
                            ATerm x_60 = t;
                            int y_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    y_58 = ATgetArgument(t, 0);
                                    {
                                      ATerm z_60 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(y_60);
                                t = y_58;
                              }
                            else
                              {
                                t = x_60;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    y_58 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_58;
                              }
                            return(t);
                          }
                          t = map_1_0(y_13, t);
                        }
                      }
                  }
              }
            }
          return(t);
        }
        t = free_vars_3_0(t_13, u_13, tboundin_3_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_57 = ATgetArgument(t, 0);
          {
            ATerm a_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_57;
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,h_59 = NULL;
  if(match_cons(t, sym__3))
    {
      h_59 = ATgetArgument(t, 0);
      f_59 = ATgetArgument(t, 1);
      e_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_59;
  {
    ATerm z_13 (ATerm t)
    {
      ATerm i_59 = NULL;
      i_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_59, e_59);
      t = z_138(t);
      return(t);
    }
    ATerm c_14 (ATerm t)
    {
      ATerm j_59 = NULL;
      j_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_59, f_59);
      t = z_138(t);
      return(t);
    }
    t = a_139(z_13, c_14, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_59 = NULL,p_59 = NULL,q_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  if(match_cons(t, sym__2))
    {
      n_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_59;
  t = t_138(t);
  q_59 = t;
  t = map_1_0(new_0_0, t);
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_59, t_59);
  {
    ATerm d_14 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm b_61 = ATgetArgument(t, 0);
          if(((ATgetType(b_61) != AT_LIST) || !(ATisEmpty(b_61))))
            _fail(t);
          {
            ATerm c_61 = ATgetArgument(t, 1);
            if(((ATgetType(c_61) != AT_LIST) || !(ATisEmpty(c_61))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm g_14 (ATerm t)
    {
      ATerm x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm d_61 = ATgetArgument(t, 0);
          if(((ATgetType(d_61) == AT_LIST) && !(ATisEmpty(d_61))))
            {
              x_59 = ATgetFirst((ATermList) d_61);
              a_60 = (ATerm) ATgetNext((ATermList) d_61);
            }
          else
            _fail(t);
          {
            ATerm e_61 = ATgetArgument(t, 1);
            if(((ATgetType(e_61) == AT_LIST) && !(ATisEmpty(e_61))))
              {
                y_59 = ATgetFirst((ATermList) e_61);
                b_60 = (ATerm) ATgetNext((ATermList) e_61);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_59, y_59), (ATerm) ATmakeAppl(sym__2, a_60, b_60));
      return(t);
    }
    ATerm h_14 (ATerm t)
    {
      ATerm c_60 = NULL,d_60 = NULL;
      if(match_cons(t, sym__2))
        {
          c_60 = ATgetArgument(t, 0);
          d_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(d_60), c_60);
      return(t);
    }
    t = genzip_4_0(d_14, g_14, h_14, _id, t);
    u_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_59, p_59);
    {
      ATerm f_61 = t;
      int g_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm h_61 = ATgetArgument(t, 0);
              ATerm i_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_59;
          {
            ATerm j_14 (ATerm t)
            {
              t = p_59;
              return(t);
            }
            t = at_end_1_0(j_14, t);
          }
          ;
          LocalPopChoice(g_61);
        }
      else
        {
          t = f_61;
          {
            ATerm m_12 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_59, p_59));
            if(match_cons(t, sym__2))
              {
                ATerm j_61 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_61) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                m_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_12;
            t = concat_0_0(t);
          }
        }
      v_59 = t;
      t = n_59;
      {
        ATerm l_14 (ATerm t)
        {
          t = t_59;
          return(t);
        }
        t = u_138(l_14, t);
        w_59 = t;
        t = (ATerm) ATmakeAppl(sym__3, w_59, p_59, v_59);
      }
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
  if(match_cons(t, sym__2))
    {
      s_60 = ATgetArgument(t, 0);
      t_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_60 = ATgetFirst((ATermList) t);
      v_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_60;
  if(match_cons(t, sym__2))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
      {
        ATerm k_61 = t;
        int p_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_60;
            if((s_60 != t))
              {
                _fail(t);
              }
            t = q_60;
            ;
            LocalPopChoice(p_61);
          }
        else
          {
            t = k_61;
            t = (ATerm) ATmakeAppl(sym__2, s_60, v_60);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, s_60, v_60);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm z_117 (ATerm), ATerm t)
{
  ATerm o_61 (ATerm t)
  {
    ATerm q_61 = t;
    int s_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_117(t);
        ;
        LocalPopChoice(s_61);
      }
    else
      {
        t = q_61;
        {
          ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
          l_61 = t;
          if(match_cons(t, sym__2))
            {
              m_61 = ATgetArgument(t, 0);
              n_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_61;
          {
            ATerm m_14 (ATerm t)
            {
              ATerm t_12 = NULL;
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_12, n_61);
              t = o_61(t);
              return(t);
            }
            t = SRTS_all(m_14, t);
          }
        }
      }
    return(t);
  }
  t = o_61(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm r_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
  r_61 = t;
  {
    ATerm w_61 = t;
    int x_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_61 = ATgetArgument(t, 0);
            ATerm g_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_61);
        t = r_61;
      }
    else
      {
        t = w_61;
        {
          ATerm z_61 = NULL;
          if(match_cons(t, sym__3))
            {
              t_61 = ATgetArgument(t, 0);
              u_61 = ATgetArgument(t, 1);
              v_61 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_61, u_61);
          {
            ATerm p_14 (ATerm t)
            {
              if(match_cons(t, sym__2))
                {
                  ATerm h_62 = ATgetArgument(t, 0);
                  if(((ATgetType(h_62) != AT_LIST) || !(ATisEmpty(h_62))))
                    _fail(t);
                  {
                    ATerm k_62 = ATgetArgument(t, 1);
                    if(((ATgetType(k_62) != AT_LIST) || !(ATisEmpty(k_62))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm q_14 (ATerm t)
            {
              ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm n_62 = ATgetArgument(t, 0);
                  if(((ATgetType(n_62) == AT_LIST) && !(ATisEmpty(n_62))))
                    {
                      a_62 = ATgetFirst((ATermList) n_62);
                      c_62 = (ATerm) ATgetNext((ATermList) n_62);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_62 = ATgetArgument(t, 1);
                    if(((ATgetType(o_62) == AT_LIST) && !(ATisEmpty(o_62))))
                      {
                        b_62 = ATgetFirst((ATermList) o_62);
                        d_62 = (ATerm) ATgetNext((ATermList) o_62);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_62, b_62), (ATerm) ATmakeAppl(sym__2, c_62, d_62));
              return(t);
            }
            ATerm s_14 (ATerm t)
            {
              ATerm e_62 = NULL,f_62 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_62 = ATgetArgument(t, 0);
                  f_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_62), e_62);
              return(t);
            }
            t = genzip_4_0(p_14, q_14, s_14, _id, t);
            z_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_61, v_61);
          }
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm (ATerm), ATerm), ATerm c_138 (ATerm), ATerm d_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_138 (ATerm (ATerm), ATerm), ATerm f_138 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      j_62 = ATgetArgument(t, 0);
      i_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_62, (ATerm) ATempty);
  {
    ATerm p_62 (ATerm t)
    {
      ATerm u_14 (ATerm t)
      {
        ATerm q_62 = t;
        int r_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_62 = NULL,m_62 = NULL;
            if(match_cons(t, sym__2))
              {
                l_62 = ATgetArgument(t, 0);
                m_62 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_62;
            {
              ATerm v_14 (ATerm t)
              {
                ATerm u_12 = NULL;
                u_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_12, m_62);
                t = lookup_0_0(t);
                return(t);
              }
              t = b_138(v_14, t);
            }
            ;
            LocalPopChoice(r_62);
          }
        else
          {
            t = q_62;
            {
              ATerm s_62 = t;
              int t_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_13 = NULL,d_13 = NULL,f_13 = NULL;
                  c_13 = t;
                  t = SSL_explode_term(c_13);
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_62 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) u_62) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm v_62 = ATgetArgument(t, 1);
                        if(((ATgetType(v_62) == AT_LIST) && !(ATisEmpty(v_62))))
                          {
                            d_13 = ATgetFirst((ATermList) v_62);
                            {
                              ATerm w_62 = (ATerm) ATgetNext((ATermList) v_62);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = d_13;
                  t = a_138(t);
                  f_13 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_13, j_62);
                  t = lookup_0_0(t);
                  t = f_138(t);
                  ;
                  LocalPopChoice(t_62);
                }
              else
                {
                  t = s_62;
                  t = RnBinding_2_0(c_138, e_138, t);
                  t = DistBinding_2_0(p_62, d_138, t);
                }
            }
          }
        return(t);
      }
      t = env_alltd_1_0(u_14, t);
      return(t);
    }
    t = p_62(t);
  }
  return(t);
}
ATerm ExpOverlay_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      d_63 = ATgetArgument(t, 0);
      e_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_140(t);
  {
    ATerm y_14 (ATerm t)
    {
      ATerm h_63 = NULL,j_63 = NULL,k_63 = NULL;
      h_63 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((d_63 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          j_63 = ATgetArgument(t, 1);
          k_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, j_63, e_63);
      {
        ATerm z_14 (ATerm t)
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
        ATerm a_15 (ATerm t)
        {
          ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm z_62 = ATgetArgument(t, 0);
              if(((ATgetType(z_62) == AT_LIST) && !(ATisEmpty(z_62))))
                {
                  l_63 = ATgetFirst((ATermList) z_62);
                  n_63 = (ATerm) ATgetNext((ATermList) z_62);
                }
              else
                _fail(t);
              {
                ATerm a_63 = ATgetArgument(t, 1);
                if(((ATgetType(a_63) == AT_LIST) && !(ATisEmpty(a_63))))
                  {
                    m_63 = ATgetFirst((ATermList) a_63);
                    o_63 = (ATerm) ATgetNext((ATermList) a_63);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_63, m_63), (ATerm) ATmakeAppl(sym__2, n_63, o_63));
          return(t);
        }
        ATerm b_15 (ATerm t)
        {
          ATerm p_63 = NULL,q_63 = NULL;
          if(match_cons(t, sym__2))
            {
              p_63 = ATgetArgument(t, 0);
              q_63 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(q_63), p_63);
          return(t);
        }
        t = genzip_4_0(z_14, a_15, b_15, _id, t);
        if(((f_63 != NULL) && (f_63 != t)))
          _fail(t);
        else
          f_63 = t;
        t = k_63;
        if(((g_63 != NULL) && (g_63 != t)))
          _fail(t);
        else
          g_63 = t;
        t = h_63;
      }
      return(t);
    }
    t = fetch_1_0(y_14, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_63), not_null(g_63));
    {
      ATerm c_15 (ATerm t)
      {
        ATerm r_63 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            r_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_63;
        return(t);
      }
      ATerm e_15 (ATerm t)
      {
        ATerm u_63 = NULL,y_63 = NULL,a_64 = NULL;
        if(match_cons(t, sym_LRule_1))
          {
            y_63 = ATgetArgument(t, 0);
            t = y_63;
            if(match_cons(t, sym_Rule_3))
              {
                u_63 = ATgetArgument(t, 0);
                {
                  ATerm b_63 = ATgetArgument(t, 1);
                }
                {
                  ATerm c_63 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_63;
            {
              ATerm f_15 (ATerm t)
              {
                ATerm d_64 = NULL;
                if(match_cons(t, sym_Var_1))
                  {
                    d_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, d_64);
                return(t);
              }
              ATerm g_15 (ATerm t)
              {
                ATerm i_63 = t;
                int s_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind0_0_0(t);
                    ;
                    LocalPopChoice(s_63);
                  }
                else
                  {
                    t = i_63;
                    {
                      ATerm g_64 = NULL,i_64 = NULL;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          g_64 = ATgetArgument(t, 0);
                          t = g_64;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm t_63 = t;
                          int v_63 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm w_63 = ATgetArgument(t, 0);
                                  ATerm x_63 = ATgetArgument(t, 1);
                                  i_64 = ATgetArgument(t, 2);
                                  {
                                    ATerm z_63 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(v_63);
                              t = i_64;
                              {
                                ATerm i_15 (ATerm t)
                                {
                                  ATerm o_64 = NULL;
                                  ATerm b_64 = t;
                                  int c_64 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          o_64 = ATgetArgument(t, 0);
                                          {
                                            ATerm e_64 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(c_64);
                                      t = o_64;
                                    }
                                  else
                                    {
                                      t = b_64;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          o_64 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = o_64;
                                    }
                                  return(t);
                                }
                                t = map_1_0(i_15, t);
                              }
                            }
                          else
                            {
                              t = t_63;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm f_64 = ATgetArgument(t, 0);
                                  ATerm h_64 = ATgetArgument(t, 1);
                                  i_64 = ATgetArgument(t, 2);
                                  {
                                    ATerm j_64 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = i_64;
                              {
                                ATerm j_15 (ATerm t)
                                {
                                  ATerm u_64 = NULL;
                                  ATerm k_64 = t;
                                  int l_64 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          u_64 = ATgetArgument(t, 0);
                                          {
                                            ATerm m_64 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(l_64);
                                      t = u_64;
                                    }
                                  else
                                    {
                                      t = k_64;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          u_64 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = u_64;
                                    }
                                  return(t);
                                }
                                t = map_1_0(j_15, t);
                              }
                            }
                        }
                    }
                  }
                return(t);
              }
              t = free_vars_3_0(f_15, g_15, tboundin_3_0, t);
            }
          }
        else
          {
            ATerm n_64 = t;
            int p_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    y_63 = ATgetArgument(t, 0);
                    {
                      ATerm q_64 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_64);
                t = y_63;
              }
            else
              {
                t = n_64;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    y_63 = ATgetArgument(t, 0);
                    t = y_63;
                    {
                      ATerm k_15 (ATerm t)
                      {
                        ATerm a_65 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            a_65 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(ATempty, a_65);
                        return(t);
                      }
                      ATerm l_15 (ATerm t)
                      {
                        ATerm r_64 = t;
                        int s_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_65 = NULL,k_65 = NULL;
                            if(match_cons(t, sym_LRule_1))
                              {
                                k_65 = ATgetArgument(t, 0);
                                t = k_65;
                                if(match_cons(t, sym_Rule_3))
                                  {
                                    g_65 = ATgetArgument(t, 0);
                                    {
                                      ATerm t_64 = ATgetArgument(t, 1);
                                    }
                                    {
                                      ATerm v_64 = ATgetArgument(t, 2);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = g_65;
                                t = tvars_0_0(t);
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    k_65 = ATgetArgument(t, 0);
                                    {
                                      ATerm w_64 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = k_65;
                              }
                            ;
                            LocalPopChoice(s_64);
                          }
                        else
                          {
                            t = r_64;
                            {
                              ATerm x_64 = t;
                              int y_64 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Bind4_0_0(t);
                                  ;
                                  LocalPopChoice(y_64);
                                }
                              else
                                {
                                  t = x_64;
                                  {
                                    ATerm r_65 = NULL;
                                    ATerm z_64 = t;
                                    int b_65 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_SDefT_4))
                                          {
                                            ATerm c_65 = ATgetArgument(t, 0);
                                            ATerm d_65 = ATgetArgument(t, 1);
                                            r_65 = ATgetArgument(t, 2);
                                            {
                                              ATerm e_65 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(b_65);
                                        t = r_65;
                                        {
                                          ATerm n_15 (ATerm t)
                                          {
                                            ATerm w_65 = NULL;
                                            ATerm f_65 = t;
                                            int h_65 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    w_65 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_65 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(h_65);
                                                t = w_65;
                                              }
                                            else
                                              {
                                                t = f_65;
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
                                          t = map_1_0(n_15, t);
                                        }
                                      }
                                    else
                                      {
                                        t = z_64;
                                        if(match_cons(t, sym_RDefT_4))
                                          {
                                            ATerm j_65 = ATgetArgument(t, 0);
                                            ATerm l_65 = ATgetArgument(t, 1);
                                            r_65 = ATgetArgument(t, 2);
                                            {
                                              ATerm m_65 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = r_65;
                                        {
                                          ATerm o_15 (ATerm t)
                                          {
                                            ATerm d_66 = NULL;
                                            ATerm n_65 = t;
                                            int o_65 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    d_66 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_65 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(o_65);
                                                t = d_66;
                                              }
                                            else
                                              {
                                                t = n_65;
                                                if(match_cons(t, sym_DefaultVarDec_1))
                                                  {
                                                    d_66 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = d_66;
                                              }
                                            return(t);
                                          }
                                          t = map_1_0(o_15, t);
                                        }
                                      }
                                  }
                                }
                            }
                          }
                        return(t);
                      }
                      t = free_vars_3_0(k_15, l_15, tboundin_3_0, t);
                    }
                  }
                else
                  {
                    ATerm q_65 = t;
                    int s_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm t_65 = ATgetArgument(t, 0);
                            ATerm u_65 = ATgetArgument(t, 1);
                            a_64 = ATgetArgument(t, 2);
                            {
                              ATerm v_65 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_65);
                        t = a_64;
                        {
                          ATerm p_15 (ATerm t)
                          {
                            ATerm j_66 = NULL;
                            ATerm x_65 = t;
                            int y_65 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    j_66 = ATgetArgument(t, 0);
                                    {
                                      ATerm z_65 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(y_65);
                                t = j_66;
                              }
                            else
                              {
                                t = x_65;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    j_66 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = j_66;
                              }
                            return(t);
                          }
                          t = map_1_0(p_15, t);
                        }
                      }
                    else
                      {
                        t = q_65;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm a_66 = ATgetArgument(t, 0);
                            ATerm b_66 = ATgetArgument(t, 1);
                            a_64 = ATgetArgument(t, 2);
                            {
                              ATerm c_66 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = a_64;
                        {
                          ATerm r_15 (ATerm t)
                          {
                            ATerm t_66 = NULL;
                            ATerm e_66 = t;
                            int f_66 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    t_66 = ATgetArgument(t, 0);
                                    {
                                      ATerm g_66 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(f_66);
                                t = t_66;
                              }
                            else
                              {
                                t = e_66;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    t_66 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = t_66;
                              }
                            return(t);
                          }
                          t = map_1_0(r_15, t);
                        }
                      }
                  }
              }
          }
        return(t);
      }
      t = substitute_6_0(c_15, Var_1_0, e_15, tboundin_3_0, tpaste_1_0, _id, t);
    }
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm y_66 = NULL,a_67 = NULL;
  ATerm h_66 = t;
  int i_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm k_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(i_66);
      t = term_m_36;
    }
  else
    {
      t = h_66;
      if(match_cons(t, sym_Real_1))
        {
          a_67 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_67));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              a_67 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_67));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  a_67 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_67));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      a_67 = ATgetArgument(t, 0);
                      y_66 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_66, (ATerm)ATinsert(ATinsert(ATempty, y_66), a_67), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          a_67 = ATgetArgument(t, 0);
                          y_66 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_67), y_66, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              a_67 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_67), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm m_66 = t;
  int n_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_15 (ATerm t)
      {
        t = map_1_0(trm_to_cong_0_0, t);
        return(t);
      }
      t = Op_2_0(_id, s_15, t);
      ;
      LocalPopChoice(n_66);
    }
  else
    {
      t = m_66;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0_0 (ATerm t)
{
  ATerm l_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,r_67 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      l_67 = ATgetArgument(t, 0);
      n_67 = ATgetArgument(t, 1);
      o_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_67;
  {
    ATerm t_15 (ATerm t)
    {
      ATerm s_67 = NULL;
      s_67 = t;
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_67, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_36), term_p_36));
      return(t);
    }
    t = map_1_0(t_15, t);
    p_67 = t;
    t = o_67;
    t = trm_to_cong_0_0(t);
    r_67 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, l_67, p_67, r_67);
  }
  return(t);
}
ATerm ExpandOverlays_0_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm o_66 = ATgetArgument(t, 0);
      if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
        {
          ATerm p_66 = ATgetFirst((ATermList) o_66);
          if(match_cons(p_66, sym_Signature_1))
            {
              u_67 = ATgetArgument(p_66, 0);
            }
          else
            _fail(t);
          {
            ATerm q_66 = (ATerm) ATgetNext((ATermList) o_66);
            if(((ATgetType(q_66) == AT_LIST) && !(ATisEmpty(q_66))))
              {
                ATerm r_66 = ATgetFirst((ATermList) q_66);
                if(match_cons(r_66, sym_Overlays_1))
                  {
                    v_67 = ATgetArgument(r_66, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm s_66 = (ATerm) ATgetNext((ATermList) q_66);
                  if(((ATgetType(s_66) == AT_LIST) && !(ATisEmpty(s_66))))
                    {
                      ATerm u_66 = ATgetFirst((ATermList) s_66);
                      if(match_cons(u_66, sym_Strategies_1))
                        {
                          w_67 = ATgetArgument(u_66, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_66 = (ATerm) ATgetNext((ATermList) s_66);
                        if(((ATgetType(v_66) != AT_LIST) || !(ATisEmpty(v_66))))
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
  t = v_67;
  {
    ATerm w_66 = t;
    int x_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_66 = t;
        if((PushChoice() == 0))
          {
            t = v_67;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_66;
          }
        t = v_67;
        {
          ATerm u_15 (ATerm t)
          {
            ATerm v_15 (ATerm t)
            {
              ATerm z_15 (ATerm t)
              {
                t = v_67;
                return(t);
              }
              t = ExpOverlay_1_0(z_15, t);
              return(t);
            }
            t = repeat_1_0(v_15, t);
            return(t);
          }
          t = topdown_1_0(u_15, t);
        }
        ;
        LocalPopChoice(x_66);
      }
    else
      {
        t = w_66;
      }
    x_67 = t;
    t = v_67;
    t = map_1_0(Overlay_to_Congdef_0_0, t);
    y_67 = t;
    t = w_67;
    {
      ATerm b_67 = t;
      int c_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_67 = t;
          if((PushChoice() == 0))
            {
              t = x_67;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_67;
            }
          t = w_67;
          {
            ATerm a_16 (ATerm t)
            {
              ATerm e_67 = t;
              int f_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_16 (ATerm t)
                  {
                    t = x_67;
                    return(t);
                  }
                  t = ExpOverlay_1_0(b_16, t);
                  ;
                  LocalPopChoice(f_67);
                }
              else
                {
                  t = e_67;
                }
              return(t);
            }
            t = topdown_1_0(a_16, t);
          }
          ;
          LocalPopChoice(c_67);
        }
      else
        {
          t = b_67;
        }
      z_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_67, z_67);
      {
        ATerm g_67 = t;
        int h_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm i_67 = ATgetArgument(t, 0);
                ATerm j_67 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_67;
            {
              ATerm c_16 (ATerm t)
              {
                t = z_67;
                return(t);
              }
              t = at_end_1_0(c_16, t);
            }
            ;
            LocalPopChoice(h_67);
          }
        else
          {
            t = g_67;
            {
              ATerm n_13 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_67, z_67));
              if(match_cons(t, sym__2))
                {
                  ATerm k_67 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_67) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  n_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_13;
              t = concat_0_0(t);
            }
          }
        a_68 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_68)), (ATerm) ATmakeAppl(sym_Signature_1, u_67)));
      }
    }
  }
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
      g_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_67, e_68));
  {
    ATerm d_16 (ATerm t)
    {
      t = term_q_67;
      return(t);
    }
    t = assert_1_0(d_16, t);
    t = f_68;
    {
      ATerm e_16 (ATerm t)
      {
        ATerm h_68 = NULL;
        h_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_68), term_b_68);
        {
          ATerm f_16 (ATerm t)
          {
            t = term_c_68;
            return(t);
          }
          t = assert_1_0(f_16, t);
          t = h_68;
        }
        return(t);
      }
      t = map_1_0(e_16, t);
      t = g_68;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Overlay_3, e_68, f_68, g_68);
    }
  }
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
      v_68 = ATgetArgument(t, 2);
      o_68 = ATgetArgument(t, 3);
      t = o_68;
      if(match_cons(t, sym_StratRule_3))
        {
          p_68 = ATgetArgument(t, 0);
          q_68 = ATgetArgument(t, 1);
          r_68 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_68, t_68));
          {
            ATerm g_16 (ATerm t)
            {
              t = term_q_67;
              return(t);
            }
            t = assert_1_0(g_16, t);
            t = v_68;
            {
              ATerm h_16 (ATerm t)
              {
                ATerm w_69 = NULL;
                ATerm i_68 = t;
                int j_68 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_VarDec_2))
                      {
                        w_69 = ATgetArgument(t, 0);
                        {
                          ATerm k_68 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_68);
                    t = w_69;
                  }
                else
                  {
                    t = i_68;
                    if(match_cons(t, sym_DefaultVarDec_1))
                      {
                        w_69 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = w_69;
                  }
                return(t);
              }
              t = map_1_0(h_16, t);
              {
                ATerm i_16 (ATerm t)
                {
                  ATerm a_70 = NULL;
                  a_70 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_70), term_b_68);
                  {
                    ATerm j_16 (ATerm t)
                    {
                      t = term_c_68;
                      return(t);
                    }
                    t = assert_1_0(j_16, t);
                    t = a_70;
                  }
                  return(t);
                }
                t = map_1_0(i_16, t);
                t = p_68;
                t = unbound_vars_0_0(t);
                t = q_68;
                t = unbound_vars_0_0(t);
                t = r_68;
                t = unbound_vars_0_0(t);
                t = (ATerm) ATmakeAppl(sym_RDefT_4, t_68, u_68, v_68, (ATerm) ATmakeAppl(sym_StratRule_3, p_68, q_68, r_68));
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              p_68 = ATgetArgument(t, 0);
              q_68 = ATgetArgument(t, 1);
              r_68 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_68, t_68));
          {
            ATerm k_16 (ATerm t)
            {
              t = term_q_67;
              return(t);
            }
            t = assert_1_0(k_16, t);
            t = v_68;
            {
              ATerm p_16 (ATerm t)
              {
                ATerm v_70 = NULL;
                ATerm m_68 = t;
                int n_68 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_VarDec_2))
                      {
                        v_70 = ATgetArgument(t, 0);
                        {
                          ATerm s_68 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_68);
                    t = v_70;
                  }
                else
                  {
                    t = m_68;
                    if(match_cons(t, sym_DefaultVarDec_1))
                      {
                        v_70 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_70;
                  }
                return(t);
              }
              t = map_1_0(p_16, t);
              {
                ATerm q_16 (ATerm t)
                {
                  ATerm z_70 = NULL;
                  z_70 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_70), term_b_68);
                  {
                    ATerm r_16 (ATerm t)
                    {
                      t = term_c_68;
                      return(t);
                    }
                    t = assert_1_0(r_16, t);
                    t = z_70;
                  }
                  return(t);
                }
                t = map_1_0(q_16, t);
                t = p_68;
                t = bind_vars_0_0(t);
                t = r_68;
                t = unbound_vars_0_0(t);
                t = q_68;
                t = use_vars_0_0(t);
                t = (ATerm) ATmakeAppl(sym_RDefT_4, t_68, u_68, v_68, (ATerm) ATmakeAppl(sym_Rule_3, p_68, q_68, r_68));
              }
            }
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          t_68 = ATgetArgument(t, 0);
          u_68 = ATgetArgument(t, 1);
          v_68 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_68;
      if(match_cons(t, sym_Rule_3))
        {
          x_68 = ATgetArgument(t, 0);
          y_68 = ATgetArgument(t, 1);
          z_68 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_68, t_68));
      {
        ATerm s_16 (ATerm t)
        {
          t = term_q_67;
          return(t);
        }
        t = assert_1_0(s_16, t);
        t = x_68;
        t = bind_vars_0_0(t);
        t = z_68;
        t = unbound_vars_0_0(t);
        t = y_68;
        t = use_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_RDef_3, t_68, u_68, (ATerm) ATmakeAppl(sym_Rule_3, x_68, y_68, z_68));
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,n_71 = NULL;
  n_71 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      g_71 = ATgetArgument(t, 0);
      h_71 = ATgetArgument(t, 1);
      i_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_71);
  f_71 = t;
  t = g_71;
  t = f_103(t);
  j_71 = t;
  t = h_71;
  t = g_103(t);
  k_71 = t;
  t = i_71;
  t = h_103(t);
  l_71 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, j_71, k_71, l_71), f_71);
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm t_72 = NULL;
  ATerm t_16 (ATerm t)
  {
    ATerm a_69 = t;
    int b_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_73 (ATerm u_72, ATerm w_72, ATerm t)
        {
          t = w_72;
          {
            ATerm c_69 = t;
            int d_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), u_72);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm e_69 = ATgetFirst((ATermList) t);
                    if(match_cons(e_69, sym_Defined_1))
                      {
                        ATerm g_69 = ATgetArgument(e_69, 0);
                      }
                    else
                      _fail(t);
                    {
                      ATerm f_69 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = w_72;
                ;
                LocalPopChoice(d_69);
              }
            else
              {
                t = c_69;
                t = (ATerm) ATmakeAppl(sym__2, u_72, (ATerm) ATinsert(ATempty, term_h_69));
              }
          }
          return(t);
        }
        ATerm e_73 = NULL,g_73 = NULL,i_73 = NULL,j_73 = NULL;
        e_73 = t;
        if(match_cons(t, sym__2))
          {
            g_73 = ATgetArgument(t, 0);
            i_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_73;
        {
          ATerm i_69 = t;
          int j_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_73 = ATgetFirst((ATermList) t);
                  {
                    ATerm k_69 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(j_69);
              t = j_73;
              {
                ATerm l_69 = t;
                int m_69 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Defined_1))
                      {
                        ATerm n_69 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_69);
                    t = g_73;
                    if(match_cons(t, sym_Scopes_0))
                      {
                        ATerm o_69 = t;
                        int p_69 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_73;
                            ;
                            LocalPopChoice(p_69);
                          }
                        else
                          {
                            t = o_69;
                            t = o_73(g_73, e_73, t);
                          }
                      }
                    else
                      {
                        t = o_73(g_73, e_73, t);
                      }
                  }
                else
                  {
                    t = l_69;
                    t = g_73;
                    if(!(match_cons(t, sym_Scopes_0)))
                      _fail(t);
                    t = e_73;
                  }
              }
            }
          else
            {
              t = i_69;
              t = g_73;
              if(!(match_cons(t, sym_Scopes_0)))
                _fail(t);
              t = e_73;
            }
        }
        ;
        LocalPopChoice(b_69);
      }
    else
      {
        t = a_69;
      }
    return(t);
  }
  t = map_1_0(t_16, t);
  t_72 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_c_68, t_72);
  t = table_putlist_0_0(t);
  t = t_72;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL;
  if(match_cons(t, sym__2))
    {
      s_73 = ATgetArgument(t, 0);
      r_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_73;
  {
    ATerm u_16 (ATerm t)
    {
      ATerm t_73 = NULL,u_73 = NULL;
      if(match_cons(t, sym__2))
        {
          t_73 = ATgetArgument(t, 0);
          u_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(s_73, t_73, u_73);
      t = (ATerm) ATmakeAppl(sym__3, s_73, t_73, u_73);
      return(t);
    }
    t = map_1_0(u_16, t);
  }
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  {
    ATerm v_16 (ATerm t)
    {
      ATerm v_13 = NULL,w_13 = NULL;
      v_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), v_13);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
      return(t);
    }
    t = map_1_0(v_16, t);
  }
  return(t);
}
ATerm abstract_choice_2_0 (ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,x_74 = NULL,w_75 = NULL;
  s_74 = t;
  t = save_Bound_0_0(t);
  t_74 = t;
  t = s_74;
  t = y_141(t);
  u_74 = t;
  t = save_Bound_0_0(t);
  x_74 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_c_68, t_74);
  t = table_putlist_0_0(t);
  t = u_74;
  t = z_141(t);
  w_75 = t;
  t = x_74;
  t = isect_Bound_0_0(t);
  t = w_75;
  return(t);
}
ATerm LChoice_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm x_75 = NULL,z_75 = NULL,w_76 = NULL,x_76 = NULL,q_77 = NULL,r_77 = NULL;
  r_77 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      z_75 = ATgetArgument(t, 0);
      w_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_77);
  x_75 = t;
  t = z_75;
  t = b_103(t);
  x_76 = t;
  t = w_76;
  t = c_103(t);
  q_77 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, x_76, q_77), x_75);
  return(t);
}
ATerm Choice_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  ATerm c_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL;
  i_78 = t;
  if(match_cons(t, sym_Choice_2))
    {
      e_78 = ATgetArgument(t, 0);
      f_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_78);
  c_78 = t;
  t = e_78;
  t = z_101(t);
  g_78 = t;
  t = f_78;
  t = a_102(t);
  h_78 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, g_78, h_78), c_78);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm t_79 = NULL;
  t_79 = t;
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,b_14 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_14 = ATgetFirst((ATermList) t);
            {
              ATerm s_69 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = b_14;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_69 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_69) != ATmakeSymbol("j_1", 0, ATtrue)))
              _fail(t);
            a_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_79), term_v_69), a_14), term_u_69);
        ;
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        {
          ATerm x_69 = t;
          int y_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL,f_14 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_14 = ATgetFirst((ATermList) t);
                  {
                    ATerm z_69 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = f_14;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_70 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_70) != ATmakeSymbol("g_1", 0, ATtrue)))
                    _fail(t);
                  e_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_79), term_v_69), e_14), term_c_70);
              ;
              LocalPopChoice(y_69);
            }
          else
            {
              t = x_69;
              {
                ATerm d_70 = t;
                int e_70 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_14 = NULL,k_14 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        k_14 = ATgetFirst((ATermList) t);
                        {
                          ATerm f_70 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = k_14;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm g_70 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) g_70) != ATmakeSymbol("d_1", 0, ATtrue)))
                          _fail(t);
                        i_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_79), term_v_69), i_14), term_c_70);
                    ;
                    LocalPopChoice(e_70);
                  }
                else
                  {
                    t = d_70;
                    {
                      ATerm h_70 = t;
                      int i_70 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_14 = NULL,o_14 = NULL;
                          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              o_14 = ATgetFirst((ATermList) t);
                              {
                                ATerm j_70 = (ATerm) ATgetNext((ATermList) t);
                              }
                            }
                          else
                            _fail(t);
                          t = o_14;
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm k_70 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) k_70) != ATmakeSymbol("a_1", 0, ATtrue)))
                                _fail(t);
                              n_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_79), term_v_69), n_14), term_c_70);
                          ;
                          LocalPopChoice(i_70);
                        }
                      else
                        {
                          t = h_70;
                          {
                            ATerm l_70 = t;
                            int m_70 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_14 = NULL,t_14 = NULL;
                                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    t_14 = ATgetFirst((ATermList) t);
                                    {
                                      ATerm n_70 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = t_14;
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm o_70 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) o_70) != ATmakeSymbol("x_0", 0, ATtrue)))
                                      _fail(t);
                                    r_14 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_79), term_v_69), r_14), term_p_70);
                                ;
                                LocalPopChoice(m_70);
                              }
                            else
                              {
                                t = l_70;
                                {
                                  ATerm w_14 = NULL,x_14 = NULL;
                                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue)), (ATerm) ATempty);
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      x_14 = ATgetFirst((ATermList) t);
                                      {
                                        ATerm q_70 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = x_14;
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm r_70 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) r_70) != ATmakeSymbol("u_0", 0, ATtrue)))
                                        _fail(t);
                                      w_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_79), term_v_69), w_14), term_p_70);
                                }
                              }
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
  ATerm l_82 = NULL,m_82 = NULL;
  l_82 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_70 = t;
    int t_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_15 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_82);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_15 = ATgetFirst((ATermList) t);
            {
              ATerm u_70 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = d_15;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm w_70 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_70) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_82);
        ;
        LocalPopChoice(t_70);
      }
    else
      {
        t = s_70;
        {
          ATerm x_70 = t;
          int y_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_15 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_82);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_15 = ATgetFirst((ATermList) t);
                  {
                    ATerm a_71 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = h_15;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(y_70);
            }
          else
            {
              t = x_70;
              {
                ATerm m_15 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), l_82);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_15 = ATgetFirst((ATermList) t);
                    {
                      ATerm b_71 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = m_15;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm c_71 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_71) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_82);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm d_71 = t;
  int e_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(e_71);
      {
        ATerm m_71 = t;
        int o_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(o_71);
          }
        else
          {
            t = m_71;
            {
              ATerm l_83 = NULL,n_83 = NULL,q_15 = NULL;
              l_83 = t;
              if(match_cons(t, sym_Var_1))
                {
                  n_83 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_71), n_83), term_p_71);
              t = Context_0_0(t);
              q_15 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), q_15);
              t = q_15;
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = d_71;
      {
        ATerm r_71 = t;
        int s_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(s_71);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = r_71;
            {
              ATerm t_71 = t;
              int u_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(u_71);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = t_71;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t)
{
  ATerm w_83 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  n_84 = t;
  if(match_cons(t, sym_Rule_3))
    {
      h_84 = ATgetArgument(t, 0);
      i_84 = ATgetArgument(t, 1);
      j_84 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_84);
  w_83 = t;
  t = h_84;
  t = s_100(t);
  k_84 = t;
  t = i_84;
  t = t_100(t);
  l_84 = t;
  t = j_84;
  t = u_100(t);
  m_84 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, k_84, l_84, m_84), w_83);
  return(t);
}
ATerm RootApp_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL;
  t_84 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      r_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_84);
  q_84 = t;
  t = r_84;
  t = r_99(t);
  s_84 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, s_84), q_84);
  return(t);
}
ATerm App_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_85 = NULL,f_86 = NULL,g_86 = NULL,p_86 = NULL;
  p_86 = t;
  if(match_cons(t, sym_App_2))
    {
      x_84 = ATgetArgument(t, 0);
      y_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_86);
  w_84 = t;
  t = x_84;
  t = p_99(t);
  f_86 = t;
  t = y_85;
  t = q_99(t);
  g_86 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, f_86, g_86), w_84);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm e_87 = NULL,n_87 = NULL,p_89 = NULL,q_89 = NULL;
  if(match_cons(t, sym__3))
    {
      e_87 = ATgetArgument(t, 0);
      n_87 = ATgetArgument(t, 1);
      p_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(e_87, n_87);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_71 = ATgetFirst((ATermList) t);
      q_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(e_87, n_87, (ATerm) ATinsert(CheckATermList(q_89), p_89));
  t = (ATerm) ATmakeAppl(sym__3, e_87, n_87, p_89);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm w_71 = t;
  int x_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(x_71);
      {
        ATerm e_90 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            e_90 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_c_68, (ATerm)ATmakeAppl(sym_Var_1, e_90), term_z_71);
        t = table_replace_0_0(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, e_90);
      }
    }
  else
    {
      t = w_71;
      {
        ATerm a_72 = t;
        int b_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(b_72);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = a_72;
            {
              ATerm c_72 = t;
              int d_72 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(d_72);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = c_72;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm a_93 = NULL,i_93 = NULL,j_93 = NULL,m_93 = NULL;
  m_93 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_93);
  a_93 = t;
  t = i_93;
  t = s_102(t);
  j_93 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, j_93), a_93);
  return(t);
}
ATerm Build_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL;
  s_93 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_93);
  p_93 = t;
  t = q_93;
  t = t_102(t);
  r_93 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, r_93), p_93);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm e_72 = t;
  int f_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(f_72);
      {
        ATerm a_17 (ATerm t)
        {
          t = term_c_68;
          return(t);
        }
        ATerm b_17 (ATerm t)
        {
          ATerm f_17 (ATerm t)
          {
            ATerm g_17 (ATerm t)
            {
              ATerm v_93 = NULL;
              v_93 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_93), term_h_69);
              {
                ATerm h_17 (ATerm t)
                {
                  t = term_c_68;
                  return(t);
                }
                t = assert_1_0(h_17, t);
                t = v_93;
              }
              return(t);
            }
            t = map_1_0(g_17, t);
            return(t);
          }
          t = Scope_2_0(f_17, unbound_vars_0_0, t);
          return(t);
        }
        t = scope_2_0(a_17, b_17, t);
      }
    }
  else
    {
      t = e_72;
      {
        ATerm g_72 = t;
        int h_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(h_72);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = g_72;
            {
              ATerm i_72 = t;
              int j_72 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(j_72);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = i_72;
                  {
                    ATerm k_72 = t;
                    int l_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(l_72);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = k_72;
                        {
                          ATerm m_72 = t;
                          int n_72 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(n_72);
                              {
                                ATerm i_17 (ATerm t)
                                {
                                  t = Choice_2_0(unbound_vars_0_0, _id, t);
                                  return(t);
                                }
                                ATerm j_17 (ATerm t)
                                {
                                  t = Choice_2_0(_id, unbound_vars_0_0, t);
                                  return(t);
                                }
                                t = abstract_choice_2_0(i_17, j_17, t);
                              }
                            }
                          else
                            {
                              t = m_72;
                              {
                                ATerm o_72 = t;
                                int p_72 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(p_72);
                                    {
                                      ATerm k_17 (ATerm t)
                                      {
                                        t = LChoice_2_0(unbound_vars_0_0, _id, t);
                                        return(t);
                                      }
                                      ATerm m_17 (ATerm t)
                                      {
                                        t = LChoice_2_0(_id, unbound_vars_0_0, t);
                                        return(t);
                                      }
                                      t = abstract_choice_2_0(k_17, m_17, t);
                                    }
                                  }
                                else
                                  {
                                    t = o_72;
                                    {
                                      ATerm q_72 = t;
                                      int r_72 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(r_72);
                                          {
                                            ATerm n_17 (ATerm t)
                                            {
                                              t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
                                              return(t);
                                            }
                                            ATerm p_17 (ATerm t)
                                            {
                                              t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
                                              return(t);
                                            }
                                            t = abstract_choice_2_0(n_17, p_17, t);
                                          }
                                        }
                                      else
                                        {
                                          t = q_72;
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
  ATerm y_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      a_94 = ATgetArgument(t, 0);
      b_94 = ATgetArgument(t, 1);
      c_94 = ATgetArgument(t, 2);
      y_93 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_72, a_94));
      {
        ATerm q_17 (ATerm t)
        {
          t = term_q_67;
          return(t);
        }
        t = assert_1_0(q_17, t);
        t = c_94;
        {
          ATerm r_17 (ATerm t)
          {
            ATerm j_94 = NULL;
            ATerm v_72 = t;
            int x_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_VarDec_2))
                  {
                    j_94 = ATgetArgument(t, 0);
                    {
                      ATerm y_72 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(x_72);
                t = j_94;
              }
            else
              {
                t = v_72;
                if(match_cons(t, sym_DefaultVarDec_1))
                  {
                    j_94 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_94;
              }
            return(t);
          }
          t = map_1_0(r_17, t);
          {
            ATerm s_17 (ATerm t)
            {
              ATerm m_94 = NULL;
              m_94 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_94), term_b_68);
              {
                ATerm v_17 (ATerm t)
                {
                  t = term_c_68;
                  return(t);
                }
                t = assert_1_0(v_17, t);
                t = m_94;
              }
              return(t);
            }
            t = map_1_0(s_17, t);
            t = y_93;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_94, b_94, c_94, y_93);
          }
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_94 = ATgetArgument(t, 0);
          b_94 = ATgetArgument(t, 1);
          c_94 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_72, a_94));
      {
        ATerm w_17 (ATerm t)
        {
          t = term_q_67;
          return(t);
        }
        t = assert_1_0(w_17, t);
        t = c_94;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDef_3, a_94, b_94, c_94);
      }
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    t = term_q_67;
    return(t);
  }
  ATerm y_17 (ATerm t)
  {
    ATerm c_18 (ATerm t)
    {
      t = term_c_68;
      return(t);
    }
    ATerm d_18 (ATerm t)
    {
      ATerm w_94 = NULL;
      w_94 = t;
      {
        ATerm e_18 (ATerm t)
        {
          ATerm x_94 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              x_94 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, x_94);
          return(t);
        }
        ATerm g_18 (ATerm t)
        {
          ATerm y_94 = NULL,c_95 = NULL,e_95 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              c_95 = ATgetArgument(t, 0);
              t = c_95;
              if(match_cons(t, sym_Rule_3))
                {
                  y_94 = ATgetArgument(t, 0);
                  {
                    ATerm a_73 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_73 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = y_94;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm c_73 = t;
              int d_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      c_95 = ATgetArgument(t, 0);
                      {
                        ATerm f_73 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_73);
                  t = c_95;
                }
              else
                {
                  t = c_73;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      c_95 = ATgetArgument(t, 0);
                      t = c_95;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm h_73 = t;
                      int k_73 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm l_73 = ATgetArgument(t, 0);
                              ATerm m_73 = ATgetArgument(t, 1);
                              e_95 = ATgetArgument(t, 2);
                              {
                                ATerm n_73 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_73);
                          t = e_95;
                          {
                            ATerm h_18 (ATerm t)
                            {
                              ATerm o_95 = NULL;
                              ATerm p_73 = t;
                              int q_73 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      o_95 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_73 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(q_73);
                                  t = o_95;
                                }
                              else
                                {
                                  t = p_73;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      o_95 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = o_95;
                                }
                              return(t);
                            }
                            t = map_1_0(h_18, t);
                          }
                        }
                      else
                        {
                          t = h_73;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm w_73 = ATgetArgument(t, 0);
                              ATerm x_73 = ATgetArgument(t, 1);
                              e_95 = ATgetArgument(t, 2);
                              {
                                ATerm y_73 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = e_95;
                          {
                            ATerm i_18 (ATerm t)
                            {
                              ATerm x_95 = NULL;
                              ATerm z_73 = t;
                              int a_74 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      x_95 = ATgetArgument(t, 0);
                                      {
                                        ATerm b_74 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(a_74);
                                  t = x_95;
                                }
                              else
                                {
                                  t = z_73;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      x_95 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_95;
                                }
                              return(t);
                            }
                            t = map_1_0(i_18, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(e_18, g_18, tboundin_3_0, t);
        {
          ATerm j_18 (ATerm t)
          {
            ATerm a_96 = NULL;
            a_96 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_96), term_h_69);
            {
              ATerm k_18 (ATerm t)
              {
                t = term_c_68;
                return(t);
              }
              t = assert_1_0(k_18, t);
              t = a_96;
            }
            return(t);
          }
          t = map_1_0(j_18, t);
          t = w_94;
          {
            ATerm c_74 = t;
            int d_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = sdef_ud_0_0(t);
                ;
                LocalPopChoice(d_74);
              }
            else
              {
                t = c_74;
                {
                  ATerm e_74 = t;
                  int f_74 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = rdef_ud_0_0(t);
                      ;
                      LocalPopChoice(f_74);
                    }
                  else
                    {
                      t = e_74;
                      t = overlay_ud_0_0(t);
                    }
                }
              }
          }
        }
      }
      return(t);
    }
    t = scope_2_0(c_18, d_18, t);
    return(t);
  }
  t = scope_2_0(x_17, y_17, t);
  return(t);
}
ATerm Signature_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,e_96 = NULL,f_96 = NULL;
  f_96 = t;
  if(match_cons(t, sym_Signature_1))
    {
      c_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_96);
  b_96 = t;
  t = c_96;
  t = e_98(t);
  e_96 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, e_96), b_96);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm l_18 (ATerm t)
  {
    ATerm m_18 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm o_18 (ATerm t)
    {
      ATerm p_18 (ATerm t)
      {
        ATerm r_18 (ATerm t)
        {
          ATerm g_74 = t;
          int h_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(h_74);
            }
          else
            {
              t = g_74;
              {
                ATerm k_96 = NULL;
                k_96 = t;
                {
                  ATerm t_18 (ATerm t)
                  {
                    ATerm i_74 = t;
                    if((PushChoice() == 0))
                      {
                        t = def_use_def_0_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = i_74;
                      }
                    return(t);
                  }
                  t = filter_1_0(t_18, t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_96;
                }
              }
            }
          return(t);
        }
        t = Overlays_1_0(r_18, t);
        return(t);
      }
      ATerm q_18 (ATerm t)
      {
        ATerm v_18 (ATerm t)
        {
          ATerm x_18 (ATerm t)
          {
            ATerm j_74 = t;
            int k_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_74);
              }
            else
              {
                t = j_74;
                {
                  ATerm m_96 = NULL;
                  m_96 = t;
                  {
                    ATerm y_18 (ATerm t)
                    {
                      ATerm l_74 = t;
                      if((PushChoice() == 0))
                        {
                          t = def_use_def_0_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = l_74;
                        }
                      return(t);
                    }
                    t = filter_1_0(y_18, t);
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = m_96;
                  }
                }
              }
            return(t);
          }
          t = Strategies_1_0(x_18, t);
          return(t);
        }
        ATerm w_18 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(v_18, w_18, t);
        return(t);
      }
      t = Cons_2_0(p_18, q_18, t);
      return(t);
    }
    t = Cons_2_0(m_18, o_18, t);
    return(t);
  }
  t = Specification_1_0(l_18, t);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm z_18 (ATerm t)
  {
    ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
    k_97 = t;
    {
      ATerm m_74 = t;
      int n_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Var_1))
            {
              ATerm o_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(n_74);
          t = k_97;
          {
            ATerm p_74 = t;
            if((PushChoice() == 0))
              {
                ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                w_15 = t;
                if(match_cons(t, sym_Var_1))
                  {
                    x_15 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue)), w_15);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_15 = ATgetFirst((ATermList) t);
                    {
                      ATerm q_74 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = y_15;
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm r_74 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_74) != ATmakeSymbol("l_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_15);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_74;
              }
            t = term_w_74;
          }
        }
      else
        {
          t = m_74;
          if(match_cons(t, sym_Wld_0))
            {
              t = term_w_74;
            }
          else
            {
              if(match_cons(t, sym_RootApp_1))
                {
                  l_97 = ATgetArgument(t, 0);
                  {
                    ATerm q_97 = NULL;
                    t = l_97;
                    {
                      ATerm a_19 (ATerm t)
                      {
                        ATerm r_97 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            r_97 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(ATempty, r_97);
                        return(t);
                      }
                      ATerm c_19 (ATerm t)
                      {
                        ATerm u_97 = NULL,y_97 = NULL,c_98 = NULL;
                        if(match_cons(t, sym_LRule_1))
                          {
                            y_97 = ATgetArgument(t, 0);
                            t = y_97;
                            if(match_cons(t, sym_Rule_3))
                              {
                                u_97 = ATgetArgument(t, 0);
                                {
                                  ATerm y_74 = ATgetArgument(t, 1);
                                }
                                {
                                  ATerm z_74 = ATgetArgument(t, 2);
                                }
                              }
                            else
                              _fail(t);
                            t = u_97;
                            t = tvars_0_0(t);
                          }
                        else
                          {
                            ATerm a_75 = t;
                            int b_75 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    y_97 = ATgetArgument(t, 0);
                                    {
                                      ATerm c_75 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(b_75);
                                t = y_97;
                              }
                            else
                              {
                                t = a_75;
                                if(match_cons(t, sym_DynamicRules_1))
                                  {
                                    y_97 = ATgetArgument(t, 0);
                                    t = y_97;
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
                                            c_98 = ATgetArgument(t, 2);
                                            {
                                              ATerm h_75 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(e_75);
                                        t = c_98;
                                        {
                                          ATerm d_19 (ATerm t)
                                          {
                                            ATerm t_98 = NULL;
                                            ATerm i_75 = t;
                                            int j_75 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    t_98 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_75 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(j_75);
                                                t = t_98;
                                              }
                                            else
                                              {
                                                t = i_75;
                                                if(match_cons(t, sym_DefaultVarDec_1))
                                                  {
                                                    t_98 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = t_98;
                                              }
                                            return(t);
                                          }
                                          t = map_1_0(d_19, t);
                                        }
                                      }
                                    else
                                      {
                                        t = d_75;
                                        if(match_cons(t, sym_RDefT_4))
                                          {
                                            ATerm l_75 = ATgetArgument(t, 0);
                                            ATerm m_75 = ATgetArgument(t, 1);
                                            c_98 = ATgetArgument(t, 2);
                                            {
                                              ATerm n_75 = ATgetArgument(t, 3);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        t = c_98;
                                        {
                                          ATerm e_19 (ATerm t)
                                          {
                                            ATerm z_98 = NULL;
                                            ATerm o_75 = t;
                                            int p_75 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_VarDec_2))
                                                  {
                                                    z_98 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_75 = ATgetArgument(t, 1);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(p_75);
                                                t = z_98;
                                              }
                                            else
                                              {
                                                t = o_75;
                                                if(match_cons(t, sym_DefaultVarDec_1))
                                                  {
                                                    z_98 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = z_98;
                                              }
                                            return(t);
                                          }
                                          t = map_1_0(e_19, t);
                                        }
                                      }
                                  }
                              }
                          }
                        return(t);
                      }
                      t = free_vars_3_0(a_19, c_19, tboundin_3_0, t);
                      {
                        ATerm f_19 (ATerm t)
                        {
                          ATerm e_99 = NULL;
                          e_99 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_99);
                          return(t);
                        }
                        t = map_1_0(f_19, t);
                        q_97 = t;
                        t = (ATerm) ATmakeAppl(sym_Op_2, term_r_75, q_97);
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_App_2))
                    {
                      l_97 = ATgetArgument(t, 0);
                      m_97 = ATgetArgument(t, 1);
                      {
                        ATerm j_99 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, l_97, m_97);
                        {
                          ATerm j_19 (ATerm t)
                          {
                            ATerm n_99 = NULL;
                            if(match_cons(t, sym_Var_1))
                              {
                                n_99 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(ATempty, n_99);
                            return(t);
                          }
                          ATerm k_19 (ATerm t)
                          {
                            ATerm o_99 = NULL,y_99 = NULL,a_100 = NULL;
                            if(match_cons(t, sym_LRule_1))
                              {
                                y_99 = ATgetArgument(t, 0);
                                t = y_99;
                                if(match_cons(t, sym_Rule_3))
                                  {
                                    o_99 = ATgetArgument(t, 0);
                                    {
                                      ATerm s_75 = ATgetArgument(t, 1);
                                    }
                                    {
                                      ATerm t_75 = ATgetArgument(t, 2);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = o_99;
                                t = tvars_0_0(t);
                              }
                            else
                              {
                                ATerm u_75 = t;
                                int v_75 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        y_99 = ATgetArgument(t, 0);
                                        {
                                          ATerm y_75 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(v_75);
                                    t = y_99;
                                  }
                                else
                                  {
                                    t = u_75;
                                    if(match_cons(t, sym_DynamicRules_1))
                                      {
                                        y_99 = ATgetArgument(t, 0);
                                        t = y_99;
                                        t = tvars_0_0(t);
                                      }
                                    else
                                      {
                                        ATerm a_76 = t;
                                        int b_76 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_SDefT_4))
                                              {
                                                ATerm c_76 = ATgetArgument(t, 0);
                                                ATerm d_76 = ATgetArgument(t, 1);
                                                a_100 = ATgetArgument(t, 2);
                                                {
                                                  ATerm e_76 = ATgetArgument(t, 3);
                                                }
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(b_76);
                                            t = a_100;
                                            {
                                              ATerm l_19 (ATerm t)
                                              {
                                                ATerm o_100 = NULL;
                                                ATerm f_76 = t;
                                                int g_76 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_VarDec_2))
                                                      {
                                                        o_100 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm h_76 = ATgetArgument(t, 1);
                                                        }
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_76);
                                                    t = o_100;
                                                  }
                                                else
                                                  {
                                                    t = f_76;
                                                    if(match_cons(t, sym_DefaultVarDec_1))
                                                      {
                                                        o_100 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = o_100;
                                                  }
                                                return(t);
                                              }
                                              t = map_1_0(l_19, t);
                                            }
                                          }
                                        else
                                          {
                                            t = a_76;
                                            if(match_cons(t, sym_RDefT_4))
                                              {
                                                ATerm i_76 = ATgetArgument(t, 0);
                                                ATerm j_76 = ATgetArgument(t, 1);
                                                a_100 = ATgetArgument(t, 2);
                                                {
                                                  ATerm k_76 = ATgetArgument(t, 3);
                                                }
                                              }
                                            else
                                              _fail(t);
                                            t = a_100;
                                            {
                                              ATerm m_19 (ATerm t)
                                              {
                                                ATerm a_101 = NULL;
                                                ATerm l_76 = t;
                                                int m_76 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_VarDec_2))
                                                      {
                                                        a_101 = ATgetArgument(t, 0);
                                                        {
                                                          ATerm n_76 = ATgetArgument(t, 1);
                                                        }
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_76);
                                                    t = a_101;
                                                  }
                                                else
                                                  {
                                                    t = l_76;
                                                    if(match_cons(t, sym_DefaultVarDec_1))
                                                      {
                                                        a_101 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = a_101;
                                                  }
                                                return(t);
                                              }
                                              t = map_1_0(m_19, t);
                                            }
                                          }
                                      }
                                  }
                              }
                            return(t);
                          }
                          t = free_vars_3_0(j_19, k_19, tboundin_3_0, t);
                          {
                            ATerm o_19 (ATerm t)
                            {
                              ATerm d_101 = NULL;
                              d_101 = t;
                              t = (ATerm) ATmakeAppl(sym_Var_1, d_101);
                              return(t);
                            }
                            t = map_1_0(o_19, t);
                            j_99 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, term_r_75, j_99);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Con_3))
                        {
                          ATerm o_76 = ATgetArgument(t, 0);
                          ATerm p_76 = ATgetArgument(t, 1);
                          ATerm q_76 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue))));
                      t = SSL_exit((ATerm) ATmakeInt(1));
                      t = (ATerm) ATinsert(ATempty, term_r_76);
                    }
                }
            }
        }
    }
    return(t);
  }
  t = alltd_1_0(z_18, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_108 (ATerm a_104, ATerm b_104, ATerm c_104, ATerm d_104, ATerm e_104, ATerm f_104, ATerm g_104, ATerm t)
  {
    ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,h_105 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, e_104, term_t_76);
    {
      ATerm u_76 = t;
      if((PushChoice() == 0))
        {
          ATerm i_105 = NULL;
          if(match_cons(t, sym__2))
            {
              i_105 = ATgetArgument(t, 0);
              if((i_105 != ATgetArgument(t, 1)))
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
          t = u_76;
        }
      t = new_0_0(t);
      n_104 = t;
      t = d_104;
      t = dummify_0_0(t);
      o_104 = t;
      {
        ATerm v_76 = t;
        int y_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((d_104 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, n_104);
            ;
            LocalPopChoice(y_76);
          }
        else
          {
            t = v_76;
          }
        p_104 = t;
        t = o_104;
        {
          ATerm p_19 (ATerm t)
          {
            ATerm k_105 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                k_105 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, k_105);
            return(t);
          }
          ATerm q_19 (ATerm t)
          {
            ATerm p_105 = NULL,v_105 = NULL,x_105 = NULL;
            if(match_cons(t, sym_LRule_1))
              {
                v_105 = ATgetArgument(t, 0);
                t = v_105;
                if(match_cons(t, sym_Rule_3))
                  {
                    p_105 = ATgetArgument(t, 0);
                    {
                      ATerm z_76 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm a_77 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                t = p_105;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm b_77 = t;
                int c_77 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        v_105 = ATgetArgument(t, 0);
                        {
                          ATerm d_77 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_77);
                    t = v_105;
                  }
                else
                  {
                    t = b_77;
                    if(match_cons(t, sym_DynamicRules_1))
                      {
                        v_105 = ATgetArgument(t, 0);
                        t = v_105;
                        t = tvars_0_0(t);
                      }
                    else
                      {
                        ATerm e_77 = t;
                        int f_77 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_SDefT_4))
                              {
                                ATerm g_77 = ATgetArgument(t, 0);
                                ATerm h_77 = ATgetArgument(t, 1);
                                x_105 = ATgetArgument(t, 2);
                                {
                                  ATerm i_77 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(f_77);
                            t = x_105;
                            {
                              ATerm s_19 (ATerm t)
                              {
                                ATerm l_106 = NULL;
                                ATerm j_77 = t;
                                int k_77 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        l_106 = ATgetArgument(t, 0);
                                        {
                                          ATerm l_77 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(k_77);
                                    t = l_106;
                                  }
                                else
                                  {
                                    t = j_77;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        l_106 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = l_106;
                                  }
                                return(t);
                              }
                              t = map_1_0(s_19, t);
                            }
                          }
                        else
                          {
                            t = e_77;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm m_77 = ATgetArgument(t, 0);
                                ATerm n_77 = ATgetArgument(t, 1);
                                x_105 = ATgetArgument(t, 2);
                                {
                                  ATerm o_77 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = x_105;
                            {
                              ATerm t_19 (ATerm t)
                              {
                                ATerm u_106 = NULL;
                                ATerm p_77 = t;
                                int s_77 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        u_106 = ATgetArgument(t, 0);
                                        {
                                          ATerm t_77 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(s_77);
                                    t = u_106;
                                  }
                                else
                                  {
                                    t = p_77;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        u_106 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_106;
                                  }
                                return(t);
                              }
                              t = map_1_0(t_19, t);
                            }
                          }
                      }
                  }
              }
            return(t);
          }
          t = free_vars_3_0(p_19, q_19, tboundin_3_0, t);
          {
            ATerm u_19 (ATerm t)
            {
              ATerm x_106 = NULL;
              x_106 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, x_106);
              return(t);
            }
            t = map_1_0(u_19, t);
            q_104 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_104, f_104);
            {
              ATerm v_19 (ATerm t)
              {
                ATerm y_106 = NULL;
                if(match_cons(t, sym_Var_1))
                  {
                    y_106 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATempty, y_106);
                return(t);
              }
              ATerm w_19 (ATerm t)
              {
                ATerm z_106 = NULL,g_107 = NULL,i_107 = NULL;
                if(match_cons(t, sym_LRule_1))
                  {
                    g_107 = ATgetArgument(t, 0);
                    t = g_107;
                    if(match_cons(t, sym_Rule_3))
                      {
                        z_106 = ATgetArgument(t, 0);
                        {
                          ATerm u_77 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm v_77 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    t = z_106;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm w_77 = t;
                    int x_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            g_107 = ATgetArgument(t, 0);
                            {
                              ATerm y_77 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_77);
                        t = g_107;
                      }
                    else
                      {
                        t = w_77;
                        if(match_cons(t, sym_DynamicRules_1))
                          {
                            g_107 = ATgetArgument(t, 0);
                            t = g_107;
                            t = tvars_0_0(t);
                          }
                        else
                          {
                            ATerm z_77 = t;
                            int a_78 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_SDefT_4))
                                  {
                                    ATerm b_78 = ATgetArgument(t, 0);
                                    ATerm d_78 = ATgetArgument(t, 1);
                                    i_107 = ATgetArgument(t, 2);
                                    {
                                      ATerm j_78 = ATgetArgument(t, 3);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(a_78);
                                t = i_107;
                                {
                                  ATerm x_19 (ATerm t)
                                  {
                                    ATerm t_107 = NULL;
                                    ATerm k_78 = t;
                                    int l_78 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_VarDec_2))
                                          {
                                            t_107 = ATgetArgument(t, 0);
                                            {
                                              ATerm m_78 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(l_78);
                                        t = t_107;
                                      }
                                    else
                                      {
                                        t = k_78;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            t_107 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = t_107;
                                      }
                                    return(t);
                                  }
                                  t = map_1_0(x_19, t);
                                }
                              }
                            else
                              {
                                t = z_77;
                                if(match_cons(t, sym_RDefT_4))
                                  {
                                    ATerm n_78 = ATgetArgument(t, 0);
                                    ATerm o_78 = ATgetArgument(t, 1);
                                    i_107 = ATgetArgument(t, 2);
                                    {
                                      ATerm p_78 = ATgetArgument(t, 3);
                                    }
                                  }
                                else
                                  _fail(t);
                                t = i_107;
                                {
                                  ATerm y_19 (ATerm t)
                                  {
                                    ATerm a_108 = NULL;
                                    ATerm q_78 = t;
                                    int r_78 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_VarDec_2))
                                          {
                                            a_108 = ATgetArgument(t, 0);
                                            {
                                              ATerm s_78 = ATgetArgument(t, 1);
                                            }
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(r_78);
                                        t = a_108;
                                      }
                                    else
                                      {
                                        t = q_78;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            a_108 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = a_108;
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
              t = free_vars_3_0(v_19, w_19, tboundin_3_0, t);
              {
                ATerm z_19 (ATerm t)
                {
                  ATerm d_108 = NULL,e_108 = NULL;
                  d_108 = t;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Var_1, d_108));
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_108 = ATgetFirst((ATermList) t);
                      {
                        ATerm t_78 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = e_108;
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm u_78 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) u_78) != ATmakeSymbol("l_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_108);
                  return(t);
                }
                t = filter_1_0(z_19, t);
                s_104 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_104, q_104);
                t = diff_0_0(t);
                t_104 = t;
                t = new_0_0(t);
                u_104 = t;
                t = a_104;
                t = n_0(t);
                h_105 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, h_105, (ATerm) ATmakeAppl(sym_Op_2, term_v_78, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_78, (ATerm) ATinsert(CheckATermList(t_104), (ATerm) ATmakeAppl(sym_Str_1, u_104)))), o_104)))), (ATerm) ATmakeAppl(sym_RDefT_4, a_104, b_104, c_104, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_104), d_104), e_104, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_y_78, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_104)))), p_104), (ATerm) ATmakeAppl(sym_Op_2, term_w_78, (ATerm) ATinsert(CheckATermList(t_104), (ATerm) ATmakeAppl(sym_Str_1, u_104)))), f_104))));
              }
            }
          }
        }
      }
    }
    return(t);
  }
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  h_108 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      i_108 = ATgetArgument(t, 0);
      j_108 = ATgetArgument(t, 1);
      k_108 = ATgetArgument(t, 2);
      l_108 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_108;
  if(match_cons(t, sym_Rule_3))
    {
      m_108 = ATgetArgument(t, 0);
      n_108 = ATgetArgument(t, 1);
      o_108 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_108;
  if(match_cons(t, sym_Op_2))
    {
      f_108 = ATgetArgument(t, 0);
      g_108 = ATgetArgument(t, 1);
      t = g_108;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_108;
          if(match_string(t, "Undefined"))
            {
              ATerm z_78 = t;
              int a_79 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
                  t = h_108;
                  t = new_0_0(t);
                  l_16 = t;
                  t = m_108;
                  t = dummify_0_0(t);
                  m_16 = t;
                  {
                    ATerm b_79 = t;
                    int c_79 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if((m_108 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_16);
                        ;
                        LocalPopChoice(c_79);
                      }
                    else
                      {
                        t = b_79;
                      }
                    n_16 = t;
                    t = i_108;
                    t = n_0(t);
                    o_16 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, o_16, (ATerm) ATmakeAppl(sym_Op_2, term_v_78, (ATerm) ATinsert(ATinsert(ATempty, term_t_76), m_16)))), (ATerm) ATmakeAppl(sym_RDefT_4, i_108, j_108, k_108, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_16), m_108), term_t_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_y_78, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_108)))), n_16), term_t_76), (ATerm) ATmakeAppl(sym_Seq_2, o_108, term_l_36)))));
                  }
                  ;
                  LocalPopChoice(a_79);
                }
              else
                {
                  t = z_78;
                  t = q_108(i_108, j_108, k_108, m_108, n_108, o_108, h_108, t);
                }
            }
          else
            {
              t = q_108(i_108, j_108, k_108, m_108, n_108, o_108, h_108, t);
            }
        }
      else
        {
          t = f_108;
          t = q_108(i_108, j_108, k_108, m_108, n_108, o_108, h_108, t);
        }
    }
  else
    {
      t = q_108(i_108, j_108, k_108, m_108, n_108, o_108, h_108, t);
    }
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm t_108 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      t_108 = ATgetArgument(t, 0);
      t = t_108;
      {
        ATerm a_20 (ATerm t)
        {
          ATerm b_20 (ATerm t)
          {
            ATerm v_108 = NULL;
            v_108 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_e_79, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_108))));
            return(t);
          }
          t = SplitDynamicRule_1_0(b_20, t);
          return(t);
        }
        t = map_1_0(a_20, t);
        {
          ATerm c_20 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_f_37;
            return(t);
          }
          ATerm f_20 (ATerm t)
          {
            ATerm w_108 = NULL,x_108 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_108 = ATgetFirst((ATermList) t);
                x_108 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, w_108, x_108);
            return(t);
          }
          ATerm g_20 (ATerm t)
          {
            ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm f_79 = ATgetArgument(t, 0);
                if(match_cons(f_79, sym__2))
                  {
                    y_108 = ATgetArgument(f_79, 0);
                    a_109 = ATgetArgument(f_79, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm g_79 = ATgetArgument(t, 1);
                  if(match_cons(g_79, sym__2))
                    {
                      z_108 = ATgetArgument(g_79, 0);
                      b_109 = ATgetArgument(g_79, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_108), y_108), (ATerm) ATinsert(CheckATermList(b_109), a_109));
            return(t);
          }
          t = genzip_4_0(c_20, f_20, g_20, _id, t);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          t_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_108;
      {
        ATerm i_20 (ATerm t)
        {
          ATerm k_20 (ATerm t)
          {
            ATerm d_109 = NULL;
            d_109 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_i_79, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_109))));
            return(t);
          }
          t = SplitDynamicRule_1_0(k_20, t);
          return(t);
        }
        t = map_1_0(i_20, t);
        {
          ATerm l_20 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_f_37;
            return(t);
          }
          ATerm o_20 (ATerm t)
          {
            ATerm e_109 = NULL,f_109 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_109 = ATgetFirst((ATermList) t);
                f_109 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, e_109, f_109);
            return(t);
          }
          ATerm p_20 (ATerm t)
          {
            ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm j_79 = ATgetArgument(t, 0);
                if(match_cons(j_79, sym__2))
                  {
                    g_109 = ATgetArgument(j_79, 0);
                    i_109 = ATgetArgument(j_79, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm k_79 = ATgetArgument(t, 1);
                  if(match_cons(k_79, sym__2))
                    {
                      h_109 = ATgetArgument(k_79, 0);
                      j_109 = ATgetArgument(k_79, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_109), g_109), (ATerm) ATinsert(CheckATermList(j_109), i_109));
            return(t);
          }
          t = genzip_4_0(l_20, o_20, p_20, _id, t);
        }
      }
    }
  return(t);
}
ATerm split_under_scope_1_0 (ATerm p_140 (ATerm), ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      k_109 = ATgetArgument(t, 0);
      l_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_20 (ATerm t)
    {
      t = term_l_79;
      return(t);
    }
    ATerm t_20 (ATerm t)
    {
      t = k_109;
      {
        ATerm u_20 (ATerm t)
        {
          ATerm n_109 = NULL;
          n_109 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_109), term_n_79);
          {
            ATerm x_20 (ATerm t)
            {
              t = term_l_79;
              return(t);
            }
            t = assert_1_0(x_20, t);
            t = n_109;
          }
          return(t);
        }
        t = map_1_0(u_20, t);
        t = l_109;
        t = p_140(t);
        if(((m_109 != NULL) && (m_109 != t)))
          _fail(t);
        else
          m_109 = t;
      }
      return(t);
    }
    t = scope_2_0(s_20, t_20, t);
    t = (ATerm) ATmakeAppl(sym_Scope_2, k_109, not_null(m_109));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm o_109 (ATerm t)
  {
    ATerm o_79 = t;
    int p_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_114(t);
        ;
        LocalPopChoice(p_79);
      }
    else
      {
        t = o_79;
        t = SRTS_one(o_109, t);
      }
    return(t);
  }
  t = o_109(t);
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm n_140 (ATerm), ATerm t)
{
  ATerm p_109 (ATerm t)
  {
    ATerm y_20 (ATerm t)
    {
      ATerm q_79 = t;
      int r_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_140(t);
          ;
          LocalPopChoice(r_79);
        }
      else
        {
          t = q_79;
          t = split_under_scope_1_0(p_109, t);
        }
      return(t);
    }
    t = oncetd_1_0(y_20, t);
    return(t);
  }
  t = p_109(t);
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL,y_109 = NULL,z_109 = NULL,a_110 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_109 = ATgetFirst((ATermList) t);
      w_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm a_21 (ATerm t)
    {
      t = term_l_79;
      return(t);
    }
    ATerm c_21 (ATerm t)
    {
      t = v_109;
      {
        ATerm d_21 (ATerm t)
        {
          ATerm b_110 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              b_110 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, b_110);
          return(t);
        }
        ATerm g_21 (ATerm t)
        {
          ATerm c_110 = NULL,i_110 = NULL,k_110 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              i_110 = ATgetArgument(t, 0);
              t = i_110;
              if(match_cons(t, sym_Rule_3))
                {
                  c_110 = ATgetArgument(t, 0);
                  {
                    ATerm s_79 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm u_79 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = c_110;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm v_79 = t;
              int w_79 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      i_110 = ATgetArgument(t, 0);
                      {
                        ATerm x_79 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_79);
                  t = i_110;
                }
              else
                {
                  t = v_79;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      i_110 = ATgetArgument(t, 0);
                      t = i_110;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm y_79 = t;
                      int z_79 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm a_80 = ATgetArgument(t, 0);
                              ATerm b_80 = ATgetArgument(t, 1);
                              k_110 = ATgetArgument(t, 2);
                              {
                                ATerm c_80 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_79);
                          t = k_110;
                          {
                            ATerm h_21 (ATerm t)
                            {
                              ATerm x_110 = NULL;
                              ATerm d_80 = t;
                              int e_80 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      x_110 = ATgetArgument(t, 0);
                                      {
                                        ATerm f_80 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(e_80);
                                  t = x_110;
                                }
                              else
                                {
                                  t = d_80;
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
                            t = map_1_0(h_21, t);
                          }
                        }
                      else
                        {
                          t = y_79;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm g_80 = ATgetArgument(t, 0);
                              ATerm h_80 = ATgetArgument(t, 1);
                              k_110 = ATgetArgument(t, 2);
                              {
                                ATerm i_80 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = k_110;
                          {
                            ATerm i_21 (ATerm t)
                            {
                              ATerm d_111 = NULL;
                              ATerm j_80 = t;
                              int k_80 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      d_111 = ATgetArgument(t, 0);
                                      {
                                        ATerm l_80 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(k_80);
                                  t = d_111;
                                }
                              else
                                {
                                  t = j_80;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      d_111 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_111;
                                }
                              return(t);
                            }
                            t = map_1_0(i_21, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(d_21, g_21, tboundin_3_0, t);
        {
          ATerm l_21 (ATerm t)
          {
            ATerm j_111 = NULL;
            j_111 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_111), term_n_79);
            {
              ATerm m_21 (ATerm t)
              {
                t = term_l_79;
                return(t);
              }
              t = assert_1_0(m_21, t);
              t = j_111;
            }
            return(t);
          }
          t = map_1_0(l_21, t);
          t = v_109;
          {
            ATerm p_21 (ATerm t)
            {
              t = split_dynamic_rules_0_0(t);
              if(match_cons(t, sym__2))
                {
                  if(((z_109 != NULL) && (z_109 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    z_109 = ATgetArgument(t, 0);
                  if(((y_109 != NULL) && (y_109 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_109 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_109));
              return(t);
            }
            t = split_dynamic_rule_1_0(p_21, t);
            if(((a_110 != NULL) && (a_110 != t)))
              _fail(t);
            else
              a_110 = t;
          }
        }
      }
      return(t);
    }
    t = scope_2_0(a_21, c_21, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_109)), not_null(a_110)), w_109);
    {
      ATerm m_80 = t;
      int n_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm o_80 = ATgetArgument(t, 0);
              ATerm p_80 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(y_109)), not_null(a_110));
          {
            ATerm q_21 (ATerm t)
            {
              t = w_109;
              return(t);
            }
            t = at_end_1_0(q_21, t);
          }
          ;
          LocalPopChoice(n_80);
        }
      else
        {
          t = m_80;
          {
            ATerm w_16 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_109)), not_null(a_110)), w_109));
            if(match_cons(t, sym__2))
              {
                ATerm q_80 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_80) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                w_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_16;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm listtd_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  ATerm o_111 (ATerm t)
  {
    t = k_120(t);
    {
      ATerm r_80 = t;
      int s_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_80);
        }
      else
        {
          t = r_80;
          t = Cons_2_0(_id, o_111, t);
        }
    }
    return(t);
  }
  t = o_111(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm s_111 = NULL,u_111 = NULL,w_111 = NULL,x_111 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      w_111 = ATgetArgument(t, 0);
      x_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_111;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_111 = ATgetFirst((ATermList) t);
      u_111 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_u_80, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, u_111, x_111)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, s_111))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_111;
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm d_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  k_112 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      i_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_112);
  d_112 = t;
  t = i_112;
  t = s_101(t);
  j_112 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, j_112), d_112);
  return(t);
}
ATerm Scope_2_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL,s_112 = NULL,t_112 = NULL,w_112 = NULL,x_112 = NULL;
  x_112 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_112 = ATgetArgument(t, 0);
      s_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_112);
  p_112 = t;
  t = q_112;
  t = v_102(t);
  t_112 = t;
  t = s_112;
  t = w_102(t);
  w_112 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, t_112, w_112), p_112);
  return(t);
}
ATerm tboundin_3_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm t)
{
  ATerm v_80 = t;
  int w_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(r_141, p_141, t);
      ;
      LocalPopChoice(w_80);
    }
  else
    {
      t = v_80;
      {
        ATerm x_80 = t;
        int y_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(r_141, r_141, r_141, p_141, t);
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
                  t = RDefT_4_0(r_141, r_141, r_141, p_141, t);
                  ;
                  LocalPopChoice(a_81);
                }
              else
                {
                  t = z_80;
                  t = DynamicRules_1_0(p_141, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm r_21 (ATerm t)
  {
    ATerm m_113 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        m_113 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, m_113);
    return(t);
  }
  ATerm u_21 (ATerm t)
  {
    ATerm n_113 = NULL,r_113 = NULL,t_113 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        r_113 = ATgetArgument(t, 0);
        t = r_113;
        if(match_cons(t, sym_Rule_3))
          {
            n_113 = ATgetArgument(t, 0);
            {
              ATerm b_81 = ATgetArgument(t, 1);
            }
            {
              ATerm c_81 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_113;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm d_81 = t;
        int e_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                r_113 = ATgetArgument(t, 0);
                {
                  ATerm f_81 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_81);
            t = r_113;
          }
        else
          {
            t = d_81;
            if(match_cons(t, sym_DynamicRules_1))
              {
                r_113 = ATgetArgument(t, 0);
                t = r_113;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm g_81 = t;
                int h_81 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm i_81 = ATgetArgument(t, 0);
                        ATerm j_81 = ATgetArgument(t, 1);
                        t_113 = ATgetArgument(t, 2);
                        {
                          ATerm k_81 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_81);
                    t = t_113;
                    {
                      ATerm w_21 (ATerm t)
                      {
                        ATerm h_114 = NULL;
                        ATerm l_81 = t;
                        int m_81 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                h_114 = ATgetArgument(t, 0);
                                {
                                  ATerm n_81 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_81);
                            t = h_114;
                          }
                        else
                          {
                            t = l_81;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                h_114 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = h_114;
                          }
                        return(t);
                      }
                      t = map_1_0(w_21, t);
                    }
                  }
                else
                  {
                    t = g_81;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm o_81 = ATgetArgument(t, 0);
                        ATerm p_81 = ATgetArgument(t, 1);
                        t_113 = ATgetArgument(t, 2);
                        {
                          ATerm q_81 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = t_113;
                    {
                      ATerm x_21 (ATerm t)
                      {
                        ATerm r_114 = NULL;
                        ATerm r_81 = t;
                        int s_81 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                r_114 = ATgetArgument(t, 0);
                                {
                                  ATerm t_81 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(s_81);
                            t = r_114;
                          }
                        else
                          {
                            t = r_81;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                r_114 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_114;
                          }
                        return(t);
                      }
                      t = map_1_0(x_21, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(r_21, u_21, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm z_114 = NULL,d_115 = NULL;
  if(match_cons(t, sym__2))
    {
      d_115 = ATgetArgument(t, 0);
      z_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_115;
  {
    ATerm f_115 (ATerm t)
    {
      ATerm u_81 = t;
      int v_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_114;
          ;
          LocalPopChoice(v_81);
        }
      else
        {
          t = u_81;
          {
            ATerm w_81 = t;
            int x_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_16 = NULL,y_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_16 = ATgetFirst((ATermList) t);
                    y_16 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_114;
                {
                  ATerm z_21 (ATerm t)
                  {
                    ATerm z_16 = NULL;
                    z_16 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_16, z_16);
                    t = e_123(t);
                    return(t);
                  }
                  t = fetch_1_0(z_21, t);
                  t = y_16;
                  t = f_115(t);
                }
                ;
                LocalPopChoice(x_81);
              }
            else
              {
                t = w_81;
                t = Cons_2_0(_id, f_115, t);
              }
          }
        }
      return(t);
    }
    t = f_115(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  ATerm l_115 = NULL,n_115 = NULL;
  if(match_cons(t, sym__2))
    {
      n_115 = ATgetArgument(t, 0);
      l_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_115;
  {
    ATerm p_115 (ATerm t)
    {
      ATerm y_81 = t;
      int z_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(z_81);
        }
      else
        {
          t = y_81;
          {
            ATerm a_82 = t;
            int b_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_17 = NULL,d_17 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_17 = ATgetFirst((ATermList) t);
                    d_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_115;
                {
                  ATerm a_22 (ATerm t)
                  {
                    ATerm e_17 = NULL;
                    e_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_17, e_17);
                    t = a_123(t);
                    return(t);
                  }
                  t = fetch_1_0(a_22, t);
                  t = d_17;
                  t = p_115(t);
                }
                ;
                LocalPopChoice(b_82);
              }
            else
              {
                t = a_82;
                t = Cons_2_0(_id, p_115, t);
              }
          }
        }
      return(t);
    }
    t = p_115(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm g_121 (ATerm), ATerm h_121 (ATerm), ATerm t)
{
  ATerm r_115 (ATerm t)
  {
    ATerm c_82 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_121(t);
        ;
        LocalPopChoice(d_82);
      }
    else
      {
        t = c_82;
        t = f_121(t);
        t = _2_0(h_121, r_115, t);
        t = g_121(t);
      }
    return(t);
  }
  t = r_115(t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,b_116 = NULL,c_116 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_82 = ATgetFirst((ATermList) t);
      if(match_cons(e_82, sym__2))
        {
          t_115 = ATgetArgument(e_82, 0);
          u_115 = ATgetArgument(e_82, 1);
        }
      else
        _fail(t);
      x_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_115);
  if(match_cons(t, sym__2))
    {
      y_115 = ATgetArgument(t, 0);
      z_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_115);
  if(match_cons(t, sym__2))
    {
      if((y_115 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_116, z_115);
  {
    ATerm b_22 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm f_82 = ATgetArgument(t, 0);
          if(((ATgetType(f_82) != AT_LIST) || !(ATisEmpty(f_82))))
            _fail(t);
          {
            ATerm g_82 = ATgetArgument(t, 1);
            if(((ATgetType(g_82) != AT_LIST) || !(ATisEmpty(g_82))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm c_22 (ATerm t)
    {
      ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm h_82 = ATgetArgument(t, 0);
          if(((ATgetType(h_82) == AT_LIST) && !(ATisEmpty(h_82))))
            {
              f_116 = ATgetFirst((ATermList) h_82);
              h_116 = (ATerm) ATgetNext((ATermList) h_82);
            }
          else
            _fail(t);
          {
            ATerm i_82 = ATgetArgument(t, 1);
            if(((ATgetType(i_82) == AT_LIST) && !(ATisEmpty(i_82))))
              {
                g_116 = ATgetFirst((ATermList) i_82);
                i_116 = (ATerm) ATgetNext((ATermList) i_82);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_116, g_116), (ATerm) ATmakeAppl(sym__2, h_116, i_116));
      return(t);
    }
    ATerm d_22 (ATerm t)
    {
      ATerm j_116 = NULL,k_116 = NULL;
      if(match_cons(t, sym__2))
        {
          j_116 = ATgetArgument(t, 0);
          k_116 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(k_116), j_116);
      return(t);
    }
    t = genzip_4_0(b_22, c_22, d_22, _id, t);
    c_116 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_116, x_115);
    {
      ATerm j_82 = t;
      int k_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm n_82 = ATgetArgument(t, 0);
              ATerm o_82 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_116;
          {
            ATerm f_22 (ATerm t)
            {
              t = x_115;
              return(t);
            }
            t = at_end_1_0(f_22, t);
          }
          ;
          LocalPopChoice(k_82);
        }
      else
        {
          t = j_82;
          {
            ATerm l_17 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_116, x_115));
            if(match_cons(t, sym__2))
              {
                ATerm p_82 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_82) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                l_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_17;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm t)
{
  ATerm r_116 (ATerm t)
  {
    ATerm q_82 = t;
    int r_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_113(t);
        ;
        LocalPopChoice(r_82);
      }
    else
      {
        t = q_82;
        t = b_113(t);
        t = r_116(t);
      }
    return(t);
  }
  t = r_116(t);
  return(t);
}
ATerm for_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t)
{
  t = d_113(t);
  t = while_not_2_0(e_113, f_113, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm s_82 = t;
  int t_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 (ATerm t)
      {
        ATerm x_116 = NULL;
        x_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_116);
        return(t);
      }
      ATerm h_22 (ATerm t)
      {
        ATerm k_22 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, k_22, t);
        return(t);
      }
      ATerm j_22 (ATerm t)
      {
        ATerm u_82 = t;
        int v_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_22 (ATerm t)
            {
              ATerm w_82 = t;
              int x_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_116 = NULL,b_117 = NULL,d_117 = NULL,f_117 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_116 = ATgetFirst((ATermList) t);
                      f_117 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = z_116;
                  if(match_cons(t, sym__2))
                    {
                      b_117 = ATgetArgument(t, 0);
                      d_117 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_117;
                  if((b_117 != t))
                    {
                      _fail(t);
                    }
                  t = f_117;
                  ;
                  LocalPopChoice(x_82);
                }
              else
                {
                  t = w_82;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, l_22, t);
            ;
            LocalPopChoice(v_82);
          }
        else
          {
            t = u_82;
            {
              ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,n_117 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_117 = ATgetArgument(t, 0);
                  k_117 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_117;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_117 = ATgetFirst((ATermList) t);
                  n_117 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_117), l_117), n_117);
            }
          }
        return(t);
      }
      t = for_3_0(g_22, h_22, j_22, t);
      ;
      LocalPopChoice(t_82);
    }
  else
    {
      t = s_82;
      {
        ATerm n_22 (ATerm t)
        {
          ATerm t_117 = NULL;
          if(match_cons(t, sym__2))
            {
              t_117 = ATgetArgument(t, 0);
              if((t_117 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(n_22, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm g_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_118 (ATerm t)
  {
    ATerm y_82 = t;
    int z_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_140(t);
        ;
        LocalPopChoice(z_82);
      }
    else
      {
        t = y_82;
        {
          ATerm a_83 = t;
          int b_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_117 = NULL,w_117 = NULL,t_17 = NULL,u_17 = NULL;
              u_117 = t;
              t = f_140(t);
              w_117 = t;
              t = u_117;
              {
                ATerm o_22 (ATerm t)
                {
                  ATerm o_17 = NULL;
                  t = c_118(t);
                  o_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_17, w_117);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm r_22 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = g_140(o_22, c_118, r_22, t);
                t_17 = t;
                t = SSL_explode_term(t_17);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_83 = ATgetArgument(t, 0);
                    u_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_17;
                {
                  ATerm s_22 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm u_22 (ATerm t)
                  {
                    ATerm v_22 (ATerm t)
                    {
                      ATerm z_17 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          z_17 = ATgetArgument(t, 0);
                          if((z_17 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(v_22, t);
                    return(t);
                  }
                  t = foldr_3_0(s_22, u_22, _id, t);
                }
              }
              ;
              LocalPopChoice(b_83);
            }
          else
            {
              t = a_83;
              {
                ATerm a_18 = NULL,b_18 = NULL;
                a_18 = t;
                t = SSL_explode_term(a_18);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_83 = ATgetArgument(t, 0);
                    b_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_18;
                {
                  ATerm w_22 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm y_22 (ATerm t)
                  {
                    ATerm z_22 (ATerm t)
                    {
                      ATerm f_18 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          f_18 = ATgetArgument(t, 0);
                          if((f_18 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(z_22, t);
                    return(t);
                  }
                  t = foldr_3_0(w_22, y_22, c_118, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = c_118(t);
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm e_83 = ATgetArgument(t, 0);
      if(match_cons(e_83, sym_Rule_3))
        {
          j_118 = ATgetArgument(e_83, 0);
          k_118 = ATgetArgument(e_83, 1);
          l_118 = ATgetArgument(e_83, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = j_118;
  {
    ATerm b_23 (ATerm t)
    {
      ATerm n_118 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          n_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, n_118);
      return(t);
    }
    ATerm c_23 (ATerm t)
    {
      ATerm o_118 = NULL,s_118 = NULL,u_118 = NULL;
      if(match_cons(t, sym_LRule_1))
        {
          s_118 = ATgetArgument(t, 0);
          t = s_118;
          if(match_cons(t, sym_Rule_3))
            {
              o_118 = ATgetArgument(t, 0);
              {
                ATerm f_83 = ATgetArgument(t, 1);
              }
              {
                ATerm g_83 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = o_118;
          t = tvars_0_0(t);
        }
      else
        {
          ATerm h_83 = t;
          int i_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Scope_2))
                {
                  s_118 = ATgetArgument(t, 0);
                  {
                    ATerm j_83 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(i_83);
              t = s_118;
            }
          else
            {
              t = h_83;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_118 = ATgetArgument(t, 0);
                  t = s_118;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm k_83 = t;
                  int m_83 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          ATerm o_83 = ATgetArgument(t, 0);
                          ATerm p_83 = ATgetArgument(t, 1);
                          u_118 = ATgetArgument(t, 2);
                          {
                            ATerm q_83 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(m_83);
                      t = u_118;
                      {
                        ATerm e_23 (ATerm t)
                        {
                          ATerm f_119 = NULL;
                          ATerm r_83 = t;
                          int s_83 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  f_119 = ATgetArgument(t, 0);
                                  {
                                    ATerm t_83 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(s_83);
                              t = f_119;
                            }
                          else
                            {
                              t = r_83;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  f_119 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = f_119;
                            }
                          return(t);
                        }
                        t = map_1_0(e_23, t);
                      }
                    }
                  else
                    {
                      t = k_83;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm u_83 = ATgetArgument(t, 0);
                          ATerm v_83 = ATgetArgument(t, 1);
                          u_118 = ATgetArgument(t, 2);
                          {
                            ATerm x_83 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      t = u_118;
                      {
                        ATerm f_23 (ATerm t)
                        {
                          ATerm n_119 = NULL;
                          ATerm y_83 = t;
                          int z_83 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  n_119 = ATgetArgument(t, 0);
                                  {
                                    ATerm a_84 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_83);
                              t = n_119;
                            }
                          else
                            {
                              t = y_83;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  n_119 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = n_119;
                            }
                          return(t);
                        }
                        t = map_1_0(f_23, t);
                      }
                    }
                }
            }
        }
      return(t);
    }
    t = free_vars_3_0(b_23, c_23, tboundin_3_0, t);
    m_118 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, m_118, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_118, k_118, l_118)));
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  ATerm g_23 (ATerm t)
  {
    t = bottomup_1_0(k_113, t);
    return(t);
  }
  t = SRTS_all(g_23, t);
  t = k_113(t);
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL;
  h_120 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_84 = t;
    int c_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_18 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue)), h_120);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_18 = ATgetFirst((ATermList) t);
            {
              ATerm d_84 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_18;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_84 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_84) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, i_120, (ATerm) ATempty);
        ;
        LocalPopChoice(c_84);
      }
    else
      {
        t = b_84;
        {
          ATerm s_18 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue)), h_120);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_18 = ATgetFirst((ATermList) t);
              {
                ATerm f_84 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = s_18;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm g_84 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_84) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, i_120, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm n_120 (ATerm t)
  {
    ATerm o_84 = t;
    int p_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_115(t);
        ;
        LocalPopChoice(p_84);
      }
    else
      {
        t = o_84;
        t = SRTS_all(n_120, t);
      }
    return(t);
  }
  t = n_120(t);
  return(t);
}
ATerm assert_1_0 (ATerm x_129 (ATerm), ATerm t)
{
  ATerm o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL;
  if(match_cons(t, sym__2))
    {
      o_120 = ATgetArgument(t, 0);
      p_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_129(t);
  q_120 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_120, o_120, p_120);
  t = table_push_0_0(t);
  {
    ATerm u_84 = t;
    int v_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(q_120, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_84);
      }
    else
      {
        t = u_84;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_120 = ATgetFirst((ATermList) t);
        s_120 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(q_120, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_120), (ATerm) ATinsert(CheckATermList(r_120), o_120)));
    t = (ATerm) ATmakeAppl(sym__2, o_120, p_120);
  }
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm w_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      y_120 = ATgetArgument(t, 0);
      z_120 = ATgetArgument(t, 1);
      w_120 = ATgetArgument(t, 2);
      t = z_120;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_120), term_z_84);
      {
        ATerm i_23 (ATerm t)
        {
          t = term_a_85;
          return(t);
        }
        t = assert_1_0(i_23, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, y_120, (ATerm)ATempty, w_120);
      }
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          y_120 = ATgetArgument(t, 0);
          z_120 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_120;
      if(match_cons(t, sym_ConstType_1))
        {
          a_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_120), term_c_85);
      {
        ATerm j_23 (ATerm t)
        {
          t = term_a_85;
          return(t);
        }
        t = assert_1_0(j_23, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, y_120, (ATerm) ATmakeAppl(sym_ConstType_1, a_121));
      }
    }
  return(t);
}
ATerm Overlays_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL,n_121 = NULL;
  n_121 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      l_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_121);
  k_121 = t;
  t = l_121;
  t = f_98(t);
  m_121 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, m_121), k_121);
  return(t);
}
ATerm Constructors_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL;
  t_121 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      r_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_121);
  q_121 = t;
  t = r_121;
  t = a_99(t);
  s_121 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, s_121), q_121);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL;
  if(match_cons(t, sym__2))
    {
      z_121 = ATgetArgument(t, 0);
      a_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_85 = t;
    int e_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_85 = ATgetArgument(t, 0);
            ATerm g_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_121, a_122);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_85 = ATgetFirst((ATermList) t);
            u_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_18;
        ;
        LocalPopChoice(e_85);
      }
    else
      {
        t = d_85;
        t = (ATerm) ATempty;
      }
    b_122 = t;
    t = SSL_table_put(z_121, a_122, b_122);
    t = (ATerm) ATmakeAppl(sym__2, z_121, a_122);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm h_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
  h_122 = t;
  t = u_129(t);
  j_122 = t;
  {
    ATerm i_85 = t;
    int j_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(j_122, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_85);
      }
    else
      {
        t = i_85;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_122 = ATgetFirst((ATermList) t);
        k_122 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(j_122, (ATerm)ATmakeAppl(sym_Scopes_0), k_122);
    t = l_122;
    {
      ATerm l_23 (ATerm t)
      {
        ATerm m_122 = NULL;
        m_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_122, m_122);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_23, t);
      t = h_122;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t)
{
  ATerm k_85 = t;
  int l_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_112(t);
      t = f_112(t);
      ;
      LocalPopChoice(l_85);
    }
  else
    {
      t = k_85;
      t = f_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_129 (ATerm), ATerm t)
{
  ATerm p_122 = NULL,q_122 = NULL,r_122 = NULL;
  p_122 = t;
  t = t_129(t);
  q_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_122, term_m_85);
  {
    ATerm n_85 = t;
    int o_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_85 = ATgetArgument(t, 0);
            ATerm q_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_122, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_85);
      }
    else
      {
        t = n_85;
        t = (ATerm) ATempty;
      }
    r_122 = t;
    t = SSL_table_put(q_122, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(r_122), (ATerm) ATempty));
    t = p_122;
  }
  return(t);
}
ATerm scope_2_0 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm t)
{
  t = begin_scope_1_0(v_129, t);
  {
    ATerm o_23 (ATerm t)
    {
      t = end_scope_1_0(v_129, t);
      return(t);
    }
    t = restore_always_2_0(w_129, o_23, t);
  }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  ATerm q_23 (ATerm t)
  {
    t = term_a_85;
    return(t);
  }
  ATerm s_23 (ATerm t)
  {
    ATerm t_23 (ATerm t)
    {
      ATerm v_23 (ATerm t)
      {
        ATerm r_85 = t;
        int s_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_85 = t;
            int u_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_23 (ATerm t)
                {
                  ATerm x_23 (ATerm t)
                  {
                    ATerm v_85 = t;
                    int w_85 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = DeclareVarToConst_0_0(t);
                        ;
                        LocalPopChoice(w_85);
                      }
                    else
                      {
                        t = v_85;
                      }
                    return(t);
                  }
                  t = map_1_0(x_23, t);
                  return(t);
                }
                t = Constructors_1_0(w_23, t);
                ;
                LocalPopChoice(u_85);
              }
            else
              {
                t = t_85;
                {
                  ATerm z_23 (ATerm t)
                  {
                    ATerm a_24 (ATerm t)
                    {
                      ATerm x_85 = t;
                      int z_85 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = DeclareVarToConst_0_0(t);
                          ;
                          LocalPopChoice(z_85);
                        }
                      else
                        {
                          t = x_85;
                        }
                      return(t);
                    }
                    t = map_1_0(a_24, t);
                    return(t);
                  }
                  t = Overlays_1_0(z_23, t);
                }
              }
            ;
            LocalPopChoice(s_85);
          }
        else
          {
            t = r_85;
          }
        return(t);
      }
      t = map_1_0(v_23, t);
      return(t);
    }
    t = Specification_1_0(t_23, t);
    t = alltd_1_0(VarToConst_0_0, t);
    return(t);
  }
  t = scope_2_0(q_23, s_23, t);
  return(t);
}
ATerm filter_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm a_86 = t;
  int b_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_86);
    }
  else
    {
      t = a_86;
      {
        ATerm c_86 = t;
        int d_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 (ATerm t)
            {
              t = filter_1_0(f_126, t);
              return(t);
            }
            t = Cons_2_0(f_126, e_24, t);
            ;
            LocalPopChoice(d_86);
          }
        else
          {
            t = c_86;
            {
              ATerm z_122 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_86 = ATgetFirst((ATermList) t);
                  z_122 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_122;
              t = filter_1_0(f_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm InsertBSpec_0_0 (ATerm t)
{
  ATerm m_123 = NULL,n_123 = NULL,o_123 = NULL,p_123 = NULL;
  if(match_cons(t, sym__2))
    {
      m_123 = ATgetArgument(t, 0);
      n_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_123);
  if(match_cons(t, sym__2))
    {
      o_123 = ATgetArgument(t, 0);
      {
        ATerm h_86 = ATgetArgument(t, 1);
        if(((ATgetType(h_86) == AT_LIST) && !(ATisEmpty(h_86))))
          {
            p_123 = ATgetFirst((ATermList) h_86);
            {
              ATerm i_86 = (ATerm) ATgetNext((ATermList) h_86);
              if(((ATgetType(i_86) != AT_LIST) || !(ATisEmpty(i_86))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_123;
  {
    ATerm f_24 (ATerm t)
    {
      ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL;
      q_123 = t;
      t = SSL_explode_term(q_123);
      if(match_cons(t, sym__2))
        {
          if((o_123 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm j_86 = ATgetArgument(t, 1);
            if(((ATgetType(j_86) == AT_LIST) && !(ATisEmpty(j_86))))
              {
                r_123 = ATgetFirst((ATermList) j_86);
                {
                  ATerm k_86 = (ATerm) ATgetNext((ATermList) j_86);
                  if(((ATgetType(k_86) != AT_LIST) || !(ATisEmpty(k_86))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, r_123, p_123);
      {
        ATerm l_86 = t;
        int m_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm n_86 = ATgetArgument(t, 0);
                ATerm o_86 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_123;
            {
              ATerm h_24 (ATerm t)
              {
                t = p_123;
                return(t);
              }
              t = at_end_1_0(h_24, t);
            }
            ;
            LocalPopChoice(m_86);
          }
        else
          {
            t = l_86;
            {
              ATerm b_19 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_123, p_123));
              if(match_cons(t, sym__2))
                {
                  ATerm q_86 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_86) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  b_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_19;
              t = concat_0_0(t);
            }
          }
        s_123 = t;
        t = SSL_mkterm(o_123, (ATerm) ATinsert(ATempty, s_123));
      }
      return(t);
    }
    t = fetch_1_0(f_24, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm t)
{
  ATerm r_86 = t;
  int s_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_125(t);
      ;
      LocalPopChoice(s_86);
    }
  else
    {
      t = r_86;
      {
        ATerm y_123 = NULL,z_123 = NULL,c_124 = NULL,d_124 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_123 = ATgetFirst((ATermList) t);
            z_123 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_123;
        t = g_125(t);
        c_124 = t;
        t = z_123;
        t = foldr_3_0(e_125, f_125, g_125, t);
        d_124 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_124, d_124);
        t = f_125(t);
      }
    }
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm i_24 (ATerm t)
  {
    ATerm j_24 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_86), term_u_86), term_t_86);
      return(t);
    }
    ATerm t_24 (ATerm t)
    {
      ATerm w_86 = t;
      int x_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_86 = t;
          int z_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_19 = NULL,h_19 = NULL;
              if(match_cons(t, sym_Signature_1))
                {
                  g_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_19;
              {
                ATerm w_24 (ATerm t)
                {
                  ATerm i_19 = NULL;
                  if(match_cons(t, sym_Constructors_1))
                    {
                      i_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_19;
                  return(t);
                }
                t = filter_1_0(w_24, t);
                t = concat_0_0(t);
                h_19 = t;
                t = (ATerm) ATmakeAppl(sym_Constructors_1, h_19);
              }
              ;
              LocalPopChoice(z_86);
            }
          else
            {
              t = y_86;
              {
                ATerm g_124 = NULL;
                if(match_cons(t, sym_Rules_1))
                  {
                    g_124 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Strategies_1, g_124);
              }
            }
          ;
          LocalPopChoice(x_86);
        }
      else
        {
          t = w_86;
        }
      return(t);
    }
    t = foldr_3_0(j_24, InsertBSpec_0_0, t_24, t);
    return(t);
  }
  t = Specification_1_0(i_24, t);
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  {
    ATerm z_24 (ATerm t)
    {
      ATerm a_87 = t;
      int b_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(b_87);
        }
      else
        {
          t = a_87;
        }
      return(t);
    }
    t = topdown_1_0(z_24, t);
    t = vars_to_consts_0_0(t);
    {
      ATerm a_25 (ATerm t)
      {
        ATerm c_87 = t;
        int d_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_87 = t;
            int g_87 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = DefLRule_0_0(t);
                ;
                LocalPopChoice(g_87);
              }
            else
              {
                t = f_87;
                {
                  ATerm o_124 = NULL,q_124 = NULL;
                  if(match_cons(t, sym_ScopeDefault_1))
                    {
                      o_124 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_124;
                  {
                    ATerm b_25 (ATerm t)
                    {
                      ATerm r_124 = NULL;
                      if(match_cons(t, sym_Var_1))
                        {
                          r_124 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATinsert(ATempty, r_124);
                      return(t);
                    }
                    ATerm c_25 (ATerm t)
                    {
                      ATerm t_124 = NULL,y_124 = NULL,a_125 = NULL;
                      if(match_cons(t, sym_LRule_1))
                        {
                          y_124 = ATgetArgument(t, 0);
                          t = y_124;
                          if(match_cons(t, sym_Rule_3))
                            {
                              t_124 = ATgetArgument(t, 0);
                              {
                                ATerm h_87 = ATgetArgument(t, 1);
                              }
                              {
                                ATerm i_87 = ATgetArgument(t, 2);
                              }
                            }
                          else
                            _fail(t);
                          t = t_124;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm j_87 = t;
                          int k_87 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Scope_2))
                                {
                                  y_124 = ATgetArgument(t, 0);
                                  {
                                    ATerm l_87 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_87);
                              t = y_124;
                            }
                          else
                            {
                              t = j_87;
                              if(match_cons(t, sym_DynamicRules_1))
                                {
                                  y_124 = ATgetArgument(t, 0);
                                  t = y_124;
                                  t = tvars_0_0(t);
                                }
                              else
                                {
                                  ATerm m_87 = t;
                                  int o_87 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          ATerm p_87 = ATgetArgument(t, 0);
                                          ATerm q_87 = ATgetArgument(t, 1);
                                          a_125 = ATgetArgument(t, 2);
                                          {
                                            ATerm r_87 = ATgetArgument(t, 3);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(o_87);
                                      t = a_125;
                                      {
                                        ATerm d_25 (ATerm t)
                                        {
                                          ATerm r_125 = NULL;
                                          ATerm s_87 = t;
                                          int t_87 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  r_125 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm u_87 = ATgetArgument(t, 1);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(t_87);
                                              t = r_125;
                                            }
                                          else
                                            {
                                              t = s_87;
                                              if(match_cons(t, sym_DefaultVarDec_1))
                                                {
                                                  r_125 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = r_125;
                                            }
                                          return(t);
                                        }
                                        t = map_1_0(d_25, t);
                                      }
                                    }
                                  else
                                    {
                                      t = m_87;
                                      if(match_cons(t, sym_RDefT_4))
                                        {
                                          ATerm v_87 = ATgetArgument(t, 0);
                                          ATerm w_87 = ATgetArgument(t, 1);
                                          a_125 = ATgetArgument(t, 2);
                                          {
                                            ATerm x_87 = ATgetArgument(t, 3);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = a_125;
                                      {
                                        ATerm f_25 (ATerm t)
                                        {
                                          ATerm a_126 = NULL;
                                          ATerm y_87 = t;
                                          int z_87 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  a_126 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm a_88 = ATgetArgument(t, 1);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(z_87);
                                              t = a_126;
                                            }
                                          else
                                            {
                                              t = y_87;
                                              if(match_cons(t, sym_DefaultVarDec_1))
                                                {
                                                  a_126 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = a_126;
                                            }
                                          return(t);
                                        }
                                        t = map_1_0(f_25, t);
                                      }
                                    }
                                }
                            }
                        }
                      return(t);
                    }
                    t = free_vars_3_0(b_25, c_25, tboundin_3_0, t);
                    q_124 = t;
                    t = (ATerm) ATmakeAppl(sym_Scope_2, q_124, o_124);
                  }
                }
              }
            ;
            LocalPopChoice(d_87);
          }
        else
          {
            t = c_87;
          }
        return(t);
      }
      t = bottomup_1_0(a_25, t);
      {
        ATerm i_25 (ATerm t)
        {
          ATerm j_25 (ATerm t)
          {
            ATerm l_25 (ATerm t)
            {
              ATerm m_25 (ATerm t)
              {
                ATerm o_25 (ATerm t)
                {
                  ATerm p_25 (ATerm t)
                  {
                    ATerm b_88 = t;
                    int c_88 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = DefDynamicRuleScope_0_0(t);
                        ;
                        LocalPopChoice(c_88);
                      }
                    else
                      {
                        t = b_88;
                      }
                    return(t);
                  }
                  t = topdown_1_0(p_25, t);
                  {
                    ATerm q_25 (ATerm t)
                    {
                      t = repeat_1_0(lift_dynamic_rule_0_0, t);
                      return(t);
                    }
                    t = listtd_1_0(q_25, t);
                  }
                  return(t);
                }
                t = Strategies_1_0(o_25, t);
                return(t);
              }
              ATerm n_25 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(m_25, n_25, t);
              return(t);
            }
            t = Cons_2_0(_id, l_25, t);
            return(t);
          }
          t = Cons_2_0(_id, j_25, t);
          return(t);
        }
        t = Specification_1_0(i_25, t);
        {
          ATerm r_25 (ATerm t)
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
          t = topdown_1_0(r_25, t);
          {
            ATerm u_25 (ATerm t)
            {
              ATerm v_25 (ATerm t)
              {
                ATerm d_126 = NULL;
                if(match_cons(t, sym_Constructors_1))
                  {
                    d_126 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, d_126)));
                return(t);
              }
              t = fetch_1_0(v_25, t);
              return(t);
            }
            t = Specification_1_0(u_25, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm Op_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t)
{
  ATerm i_126 = NULL,l_126 = NULL,m_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL;
  p_126 = t;
  if(match_cons(t, sym_Op_2))
    {
      l_126 = ATgetArgument(t, 0);
      m_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_126);
  i_126 = t;
  t = l_126;
  t = h_99(t);
  n_126 = t;
  t = m_126;
  t = i_99(t);
  o_126 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, n_126, o_126), i_126);
  return(t);
}
ATerm OpDecl_2_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL,z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL;
  c_127 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      w_126 = ATgetArgument(t, 0);
      z_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_127);
  v_126 = t;
  t = w_126;
  t = r_98(t);
  a_127 = t;
  t = z_126;
  t = s_98(t);
  b_127 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, a_127, b_127), v_126);
  return(t);
}
ATerm SVar_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL;
  i_127 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_127);
  f_127 = t;
  t = g_127;
  t = k_102(t);
  h_127 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, h_127), f_127);
  return(t);
}
ATerm Var_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL,p_127 = NULL;
  p_127 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_127);
  l_127 = t;
  t = m_127;
  t = b_99(t);
  n_127 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, n_127), l_127);
  return(t);
}
ATerm VarDec_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  ATerm v_127 = NULL,x_127 = NULL,z_127 = NULL,b_128 = NULL,c_128 = NULL,e_128 = NULL;
  e_128 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_127 = ATgetArgument(t, 0);
      z_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_128);
  v_127 = t;
  t = x_127;
  t = w_104(t);
  b_128 = t;
  t = z_127;
  t = x_104(t);
  c_128 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, b_128, c_128), v_127);
  return(t);
}
ATerm RDef_3_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL,l_128 = NULL,m_128 = NULL,p_128 = NULL,r_128 = NULL,t_128 = NULL,a_129 = NULL;
  a_129 = t;
  if(match_cons(t, sym_RDef_3))
    {
      j_128 = ATgetArgument(t, 0);
      l_128 = ATgetArgument(t, 1);
      m_128 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_129);
  i_128 = t;
  t = j_128;
  t = g_101(t);
  p_128 = t;
  t = l_128;
  t = h_101(t);
  r_128 = t;
  t = m_128;
  t = i_101(t);
  t_128 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, p_128, r_128, t_128), i_128);
  return(t);
}
ATerm RDefT_4_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL,j_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL,z_129 = NULL,a_130 = NULL;
  a_130 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      g_129 = ATgetArgument(t, 0);
      j_129 = ATgetArgument(t, 1);
      l_129 = ATgetArgument(t, 2);
      m_129 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_130);
  f_129 = t;
  t = g_129;
  t = j_101(t);
  n_129 = t;
  t = j_129;
  t = k_101(t);
  o_129 = t;
  t = l_129;
  t = l_101(t);
  p_129 = t;
  t = m_129;
  t = m_101(t);
  z_129 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, n_129, o_129, p_129, z_129), f_129);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL;
  j_130 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_130);
  g_130 = t;
  t = h_130;
  t = v_104(t);
  i_130 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, i_130), g_130);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm f_88 = t;
  int g_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL,w_131 = NULL;
      t_131 = t;
      if(match_cons(t, sym_Real_1))
        {
          u_131 = ATgetArgument(t, 0);
          {
            ATerm n_19 = NULL;
            t = SSL_string_to_real(u_131);
            n_19 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, n_19);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_131 = ATgetArgument(t, 0);
              {
                ATerm r_19 = NULL;
                t = SSL_string_to_int(u_131);
                r_19 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, r_19);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  u_131 = ATgetArgument(t, 0);
                  v_131 = ATgetArgument(t, 1);
                  w_131 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSL_is_string(w_131);
              t = (ATerm) ATmakeAppl(sym_Con_3, u_131, v_131, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_131), (ATerm) ATempty));
            }
        }
      ;
      LocalPopChoice(g_88);
    }
  else
    {
      t = f_88;
      {
        ATerm h_88 = t;
        int i_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_26 (ATerm t)
            {
              ATerm d_20 = NULL,e_20 = NULL;
              d_20 = t;
              t = SSL_explode_string(d_20);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_88 = ATgetFirst((ATermList) t);
                  if(((ATgetType(j_88) != AT_INT) || (ATgetInt((ATermInt) j_88) != 39)))
                    _fail(t);
                  e_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSL_implode_string(e_20);
              return(t);
            }
            t = DefaultVarDec_1_0(b_26, t);
            ;
            LocalPopChoice(i_88);
          }
        else
          {
            t = h_88;
            {
              ATerm k_88 = t;
              int l_88 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_26 (ATerm t)
                  {
                    ATerm h_20 = NULL,j_20 = NULL;
                    h_20 = t;
                    t = SSL_explode_string(h_20);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm m_88 = ATgetFirst((ATermList) t);
                        if(((ATgetType(m_88) != AT_INT) || (ATgetInt((ATermInt) m_88) != 39)))
                          _fail(t);
                        j_20 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(j_20);
                    return(t);
                  }
                  t = RDefT_4_0(e_26, _id, _id, _id, t);
                  ;
                  LocalPopChoice(l_88);
                }
              else
                {
                  t = k_88;
                  {
                    ATerm n_88 = t;
                    int o_88 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_26 (ATerm t)
                        {
                          ATerm m_20 = NULL,n_20 = NULL;
                          m_20 = t;
                          t = SSL_explode_string(m_20);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm p_88 = ATgetFirst((ATermList) t);
                              if(((ATgetType(p_88) != AT_INT) || (ATgetInt((ATermInt) p_88) != 39)))
                                _fail(t);
                              n_20 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = SSL_implode_string(n_20);
                          return(t);
                        }
                        t = RDef_3_0(u_26, _id, _id, t);
                        ;
                        LocalPopChoice(o_88);
                      }
                    else
                      {
                        t = n_88;
                        {
                          ATerm q_88 = t;
                          int r_88 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_26 (ATerm t)
                              {
                                ATerm q_20 = NULL,r_20 = NULL;
                                q_20 = t;
                                t = SSL_explode_string(q_20);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm s_88 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(s_88) != AT_INT) || (ATgetInt((ATermInt) s_88) != 39)))
                                      _fail(t);
                                    r_20 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(r_20);
                                return(t);
                              }
                              t = SDefT_4_0(v_26, _id, _id, _id, t);
                              ;
                              LocalPopChoice(r_88);
                            }
                          else
                            {
                              t = q_88;
                              {
                                ATerm t_88 = t;
                                int u_88 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_26 (ATerm t)
                                    {
                                      ATerm v_20 = NULL,w_20 = NULL;
                                      v_20 = t;
                                      t = SSL_explode_string(v_20);
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          ATerm v_88 = ATgetFirst((ATermList) t);
                                          if(((ATgetType(v_88) != AT_INT) || (ATgetInt((ATermInt) v_88) != 39)))
                                            _fail(t);
                                          w_20 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = SSL_implode_string(w_20);
                                      return(t);
                                    }
                                    t = SDef_3_0(w_26, _id, _id, t);
                                    ;
                                    LocalPopChoice(u_88);
                                  }
                                else
                                  {
                                    t = t_88;
                                    {
                                      ATerm w_88 = t;
                                      int x_88 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_26 (ATerm t)
                                          {
                                            ATerm z_20 = NULL,b_21 = NULL;
                                            z_20 = t;
                                            t = SSL_explode_string(z_20);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm y_88 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(y_88) != AT_INT) || (ATgetInt((ATermInt) y_88) != 39)))
                                                  _fail(t);
                                                b_21 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(b_21);
                                            return(t);
                                          }
                                          t = VarDec_2_0(x_26, _id, t);
                                          ;
                                          LocalPopChoice(x_88);
                                        }
                                      else
                                        {
                                          t = w_88;
                                          {
                                            ATerm z_88 = t;
                                            int a_89 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_27 (ATerm t)
                                                {
                                                  ATerm e_21 = NULL,f_21 = NULL;
                                                  e_21 = t;
                                                  t = SSL_explode_string(e_21);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm b_89 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(b_89) != AT_INT) || (ATgetInt((ATermInt) b_89) != 39)))
                                                        _fail(t);
                                                      f_21 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(f_21);
                                                  return(t);
                                                }
                                                t = Var_1_0(d_27, t);
                                                ;
                                                LocalPopChoice(a_89);
                                              }
                                            else
                                              {
                                                t = z_88;
                                                {
                                                  ATerm c_89 = t;
                                                  int d_89 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_27 (ATerm t)
                                                      {
                                                        ATerm j_21 = NULL,k_21 = NULL;
                                                        j_21 = t;
                                                        t = SSL_explode_string(j_21);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm e_89 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(e_89) != AT_INT) || (ATgetInt((ATermInt) e_89) != 39)))
                                                              _fail(t);
                                                            k_21 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(k_21);
                                                        return(t);
                                                      }
                                                      t = SVar_1_0(g_27, t);
                                                      ;
                                                      LocalPopChoice(d_89);
                                                    }
                                                  else
                                                    {
                                                      t = c_89;
                                                      {
                                                        ATerm f_89 = t;
                                                        int g_89 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_27 (ATerm t)
                                                            {
                                                              ATerm n_21 = NULL,o_21 = NULL;
                                                              n_21 = t;
                                                              t = SSL_explode_string(n_21);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm h_89 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(h_89) != AT_INT) || (ATgetInt((ATermInt) h_89) != 39)))
                                                                    _fail(t);
                                                                  o_21 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(o_21);
                                                              return(t);
                                                            }
                                                            t = OpDecl_2_0(j_27, _id, t);
                                                            ;
                                                            LocalPopChoice(g_89);
                                                          }
                                                        else
                                                          {
                                                            t = f_89;
                                                            {
                                                              ATerm l_27 (ATerm t)
                                                              {
                                                                ATerm s_21 = NULL,t_21 = NULL;
                                                                s_21 = t;
                                                                t = SSL_explode_string(s_21);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm i_89 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(i_89) != AT_INT) || (ATgetInt((ATermInt) i_89) != 39)))
                                                                      _fail(t);
                                                                    t_21 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(t_21);
                                                                return(t);
                                                              }
                                                              t = Op_2_0(l_27, _id, t);
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm at_last_1_0 (ATerm c_120 (ATerm), ATerm t)
{
  ATerm b_132 (ATerm t)
  {
    ATerm j_89 = t;
    int k_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, q_27, t);
        t = c_120(t);
        ;
        LocalPopChoice(k_89);
      }
    else
      {
        t = j_89;
        t = Cons_2_0(_id, b_132, t);
      }
    return(t);
  }
  t = b_132(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_132 = NULL,g_132 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_132 = ATgetFirst((ATermList) t);
      g_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_132;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm l_89 = t;
      int m_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_132;
          ;
          LocalPopChoice(m_89);
        }
      else
        {
          t = l_89;
          t = g_132;
          t = last_0_0(t);
        }
    }
  else
    {
      t = g_132;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm m_132 = NULL,o_132 = NULL,p_132 = NULL;
  m_132 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_132 = ATgetFirst((ATermList) t);
      {
        ATerm n_89 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_132;
  t = d_128(t);
  t = m_132;
  t = last_0_0(t);
  t = d_128(t);
  t = m_132;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_89 = ATgetFirst((ATermList) t);
      p_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_132;
  {
    ATerm r_27 (ATerm t)
    {
      ATerm q_132 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm r_89 = ATgetFirst((ATermList) t);
          q_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_132;
      return(t);
    }
    t = at_last_1_0(r_27, t);
  }
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm y_138 (ATerm q_133, ATerm r_133, ATerm t)
  {
    t = q_133;
    {
      ATerm s_89 = t;
      if((PushChoice() == 0))
        {
          ATerm v_27 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, v_27, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_89;
        }
      t = (ATerm) ATmakeAppl(sym_Op_2, term_y_34, q_133);
    }
    return(t);
  }
  ATerm b_139 (ATerm t_133, ATerm u_133, ATerm t)
  {
    t = t_133;
    {
      ATerm t_89 = t;
      if((PushChoice() == 0))
        {
          ATerm w_27 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, w_27, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_89;
        }
      t = (ATerm) ATmakeAppl(sym_Call_2, term_u_89, t_133);
    }
    return(t);
  }
  ATerm c_139 (ATerm z_133, ATerm a_134, ATerm b_134, ATerm t)
  {
    ATerm e_134 = NULL;
    t = z_133;
    {
      ATerm v_89 = t;
      int w_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_21 = NULL;
          t = SSL_explode_string(z_133);
          {
            ATerm y_27 (ATerm t)
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              return(t);
            }
            t = unquote_chars_1_0(y_27, t);
            v_21 = t;
            t = SSL_implode_string(v_21);
          }
          ;
          LocalPopChoice(w_89);
        }
      else
        {
          t = v_89;
        }
      e_134 = t;
      t = (ATerm) ATmakeAppl(sym_PrimT_3, e_134, (ATerm)ATempty, a_134);
    }
    return(t);
  }
  ATerm d_139 (ATerm f_134, ATerm g_134, ATerm t)
  {
    ATerm l_134 = NULL;
    t = f_134;
    {
      ATerm x_89 = t;
      int y_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_21 = NULL;
          t = SSL_explode_string(f_134);
          {
            ATerm z_27 (ATerm t)
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                _fail(t);
              return(t);
            }
            t = unquote_chars_1_0(z_27, t);
            y_21 = t;
            t = SSL_implode_string(y_21);
          }
          ;
          LocalPopChoice(y_89);
        }
      else
        {
          t = x_89;
        }
      l_134 = t;
      t = (ATerm) ATmakeAppl(sym_PrimT_3, l_134, (ATerm)ATempty, (ATerm) ATempty);
    }
    return(t);
  }
  ATerm m_134 = NULL,n_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL,t_134 = NULL,u_134 = NULL,v_134 = NULL;
  t_134 = t;
  if(match_cons(t, sym_Anno_2))
    {
      u_134 = ATgetArgument(t, 0);
      v_134 = ATgetArgument(t, 1);
      {
        ATerm y_134 = NULL;
        t = v_134;
        {
          ATerm a_28 (ATerm t)
          {
            t = term_w_74;
            return(t);
          }
          ATerm c_28 (ATerm t)
          {
            ATerm z_134 = NULL,e_22 = NULL,i_22 = NULL;
            z_134 = t;
            t = SSL_explode_term(z_134);
            if(match_cons(t, sym__2))
              {
                ATerm z_89 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_89) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm a_90 = ATgetArgument(t, 1);
                  if(((ATgetType(a_90) == AT_LIST) && !(ATisEmpty(a_90))))
                    {
                      e_22 = ATgetFirst((ATermList) a_90);
                      {
                        ATerm b_90 = (ATerm) ATgetNext((ATermList) a_90);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(z_134);
            if(match_cons(t, sym__2))
              {
                ATerm c_90 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_90) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_90 = ATgetArgument(t, 1);
                  if(((ATgetType(d_90) == AT_LIST) && !(ATisEmpty(d_90))))
                    {
                      ATerm f_90 = ATgetFirst((ATermList) d_90);
                      ATerm g_90 = (ATerm) ATgetNext((ATermList) d_90);
                      if(((ATgetType(g_90) == AT_LIST) && !(ATisEmpty(g_90))))
                        {
                          i_22 = ATgetFirst((ATermList) g_90);
                          {
                            ATerm h_90 = (ATerm) ATgetNext((ATermList) g_90);
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
            t = (ATerm) ATmakeAppl(sym_Op_2, term_i_90, (ATerm) ATinsert(ATinsert(ATempty, i_22), e_22));
            return(t);
          }
          t = foldr_2_0(a_28, c_28, t);
          y_134 = t;
          t = (ATerm) ATmakeAppl(sym_Anno_2, u_134, y_134);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          u_134 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, u_134, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              u_134 = ATgetArgument(t, 0);
              {
                ATerm m_22 = NULL;
                t = u_134;
                {
                  ATerm j_90 = t;
                  int k_90 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_l_90;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_m_90;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_n_90;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_o_90;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_p_90;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(k_90);
                    }
                  else
                    {
                      t = j_90;
                      {
                        ATerm p_22 = NULL;
                        t = SSL_explode_string(u_134);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm q_90 = ATgetFirst((ATermList) t);
                            if(((ATgetType(q_90) != AT_INT) || (ATgetInt((ATermInt) q_90) != 39)))
                              _fail(t);
                            {
                              ATerm r_90 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(r_90) == AT_LIST) && !(ATisEmpty(r_90))))
                                {
                                  p_22 = ATgetFirst((ATermList) r_90);
                                  {
                                    ATerm s_90 = (ATerm) ATgetNext((ATermList) r_90);
                                    if(((ATgetType(s_90) == AT_LIST) && !(ATisEmpty(s_90))))
                                      {
                                        ATerm t_90 = ATgetFirst((ATermList) s_90);
                                        if(((ATgetType(t_90) != AT_INT) || (ATgetInt((ATermInt) t_90) != 39)))
                                          _fail(t);
                                        {
                                          ATerm u_90 = (ATerm) ATgetNext((ATermList) s_90);
                                          if(((ATgetType(u_90) != AT_LIST) || !(ATisEmpty(u_90))))
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
                        t = p_22;
                      }
                    }
                  m_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, m_22);
                }
              }
            }
          else
            {
              ATerm v_90 = t;
              int w_90 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      u_134 = ATgetArgument(t, 0);
                      {
                        ATerm x_90 = ATgetArgument(t, 1);
                      }
                      q_134 = ATgetArgument(t, 2);
                      m_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_90);
                  t = (ATerm) ATmakeAppl(sym_Con_3, u_134, q_134, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_134), (ATerm) ATempty));
                }
              else
                {
                  t = v_90;
                  {
                    ATerm y_90 = t;
                    int z_90 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            u_134 = ATgetArgument(t, 0);
                            {
                              ATerm a_91 = ATgetArgument(t, 1);
                            }
                            q_134 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_90);
                        t = (ATerm) ATmakeAppl(sym_Con_3, u_134, q_134, term_d_91);
                      }
                    else
                      {
                        t = y_90;
                        if(match_cons(t, sym_Con1_2))
                          {
                            u_134 = ATgetArgument(t, 0);
                            v_134 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, u_134, v_134, term_d_91);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                u_134 = ATgetArgument(t, 0);
                                v_134 = ATgetArgument(t, 1);
                                t = u_134;
                                {
                                  ATerm e_28 (ATerm t)
                                  {
                                    t = v_134;
                                    return(t);
                                  }
                                  ATerm f_28 (ATerm t)
                                  {
                                    ATerm z_135 = NULL,a_136 = NULL;
                                    if(match_cons(t, sym__2))
                                      {
                                        z_135 = ATgetArgument(t, 0);
                                        a_136 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_i_90, (ATerm) ATinsert(ATinsert(ATempty, a_136), z_135));
                                    return(t);
                                  }
                                  t = foldr_2_0(e_28, f_28, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    u_134 = ATgetArgument(t, 0);
                                    t = u_134;
                                    {
                                      ATerm g_28 (ATerm t)
                                      {
                                        t = term_w_74;
                                        return(t);
                                      }
                                      ATerm h_28 (ATerm t)
                                      {
                                        ATerm c_136 = NULL,g_136 = NULL;
                                        if(match_cons(t, sym__2))
                                          {
                                            c_136 = ATgetArgument(t, 0);
                                            g_136 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_i_90, (ATerm) ATinsert(ATinsert(ATempty, g_136), c_136));
                                        return(t);
                                      }
                                      t = foldr_2_0(g_28, h_28, t);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        u_134 = ATgetArgument(t, 0);
                                        t = u_134;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            n_134 = ATgetFirst((ATermList) t);
                                            o_134 = (ATerm) ATgetNext((ATermList) t);
                                            t = o_134;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm e_91 = t;
                                                int f_91 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = y_138(u_134, t_134, t);
                                                    ;
                                                    LocalPopChoice(f_91);
                                                  }
                                                else
                                                  {
                                                    t = e_91;
                                                    t = n_134;
                                                  }
                                              }
                                            else
                                              {
                                                t = y_138(u_134, t_134, t);
                                              }
                                          }
                                        else
                                          {
                                            t = y_138(u_134, t_134, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            u_134 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, u_134));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                u_134 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_134));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    u_134 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_134));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        u_134 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_134));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            u_134 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_134), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                u_134 = ATgetArgument(t, 0);
                                                                v_134 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_134), v_134);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    u_134 = ATgetArgument(t, 0);
                                                                    v_134 = ATgetArgument(t, 1);
                                                                    t = u_134;
                                                                    {
                                                                      ATerm i_28 (ATerm t)
                                                                      {
                                                                        t = v_134;
                                                                        return(t);
                                                                      }
                                                                      ATerm j_28 (ATerm t)
                                                                      {
                                                                        ATerm s_136 = NULL,t_136 = NULL;
                                                                        if(match_cons(t, sym__2))
                                                                          {
                                                                            s_136 = ATgetArgument(t, 0);
                                                                            t_136 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_g_91, (ATerm) ATinsert(ATinsert(ATempty, t_136), s_136));
                                                                        return(t);
                                                                      }
                                                                      t = foldr_2_0(i_28, j_28, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        u_134 = ATgetArgument(t, 0);
                                                                        t = u_134;
                                                                        {
                                                                          ATerm k_28 (ATerm t)
                                                                          {
                                                                            t = term_i_91;
                                                                            return(t);
                                                                          }
                                                                          ATerm l_28 (ATerm t)
                                                                          {
                                                                            ATerm v_136 = NULL,w_136 = NULL;
                                                                            if(match_cons(t, sym__2))
                                                                              {
                                                                                v_136 = ATgetArgument(t, 0);
                                                                                w_136 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_g_91, (ATerm) ATinsert(ATinsert(ATempty, w_136), v_136));
                                                                            return(t);
                                                                          }
                                                                          t = foldr_2_0(k_28, l_28, t);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            u_134 = ATgetArgument(t, 0);
                                                                            v_134 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_u_89, (ATerm) ATinsert(CheckATermList(v_134), u_134));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                u_134 = ATgetArgument(t, 0);
                                                                                t = u_134;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    n_134 = ATgetFirst((ATermList) t);
                                                                                    o_134 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = o_134;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm j_91 = t;
                                                                                        int k_91 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = b_139(u_134, t_134, t);
                                                                                            ;
                                                                                            LocalPopChoice(k_91);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_91;
                                                                                            t = n_134;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_139(u_134, t_134, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_139(u_134, t_134, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_l_91;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        u_134 = ATgetArgument(t, 0);
                                                                                        v_134 = ATgetArgument(t, 1);
                                                                                        t = v_134;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            p_134 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_l_66, (ATerm) ATinsert(ATinsert(ATempty, p_134), u_134));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            u_134 = ATgetArgument(t, 0);
                                                                                            t = u_134;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                u_134 = ATgetArgument(t, 0);
                                                                                                v_134 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, u_134, v_134, term_m_36);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    u_134 = ATgetArgument(t, 0);
                                                                                                    v_134 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, u_134, v_134, term_m_36);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        u_134 = ATgetArgument(t, 0);
                                                                                                        v_134 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, u_134, (ATerm)ATempty, v_134);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            u_134 = ATgetArgument(t, 0);
                                                                                                            v_134 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, v_134, u_134);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                u_134 = ATgetArgument(t, 0);
                                                                                                                v_134 = ATgetArgument(t, 1);
                                                                                                                t = c_139(u_134, v_134, t_134, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    u_134 = ATgetArgument(t, 0);
                                                                                                                    t = d_139(u_134, t_134, t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        u_134 = ATgetArgument(t, 0);
                                                                                                                        v_134 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, u_134, v_134, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            u_134 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, u_134, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                u_134 = ATgetArgument(t, 0);
                                                                                                                                v_134 = ATgetArgument(t, 1);
                                                                                                                                q_134 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_134, v_134, (ATerm)ATempty, q_134);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    u_134 = ATgetArgument(t, 0);
                                                                                                                                    v_134 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, u_134, (ATerm)ATempty, (ATerm)ATempty, v_134);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        u_134 = ATgetArgument(t, 0);
                                                                                                                                        v_134 = ATgetArgument(t, 1);
                                                                                                                                        q_134 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_134, v_134, (ATerm)ATempty, q_134);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            u_134 = ATgetArgument(t, 0);
                                                                                                                                            v_134 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_134, (ATerm)ATempty, (ATerm)ATempty, v_134);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                u_134 = ATgetArgument(t, 0);
                                                                                                                                                v_134 = ATgetArgument(t, 1);
                                                                                                                                                q_134 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, u_134, v_134, (ATerm)ATempty, q_134);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    u_134 = ATgetArgument(t, 0);
                                                                                                                                                    v_134 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_134, (ATerm)ATempty, (ATerm)ATempty, v_134);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm m_91 = ATgetArgument(t, 0);
                                                                                                                                                        v_134 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, v_134);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm o_139 = NULL;
  ATerm m_28 (ATerm t)
  {
    ATerm p_139 = NULL,q_22 = NULL;
    p_139 = t;
    t = dtime_0_0(t);
    q_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_22), (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue))));
    t = p_139;
    return(t);
  }
  t = if_verbose3_1_0(m_28, t);
  {
    ATerm n_28 (ATerm t)
    {
      t = repeat_1_0(Desugar_0_0, t);
      {
        ATerm n_91 = t;
        int o_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DesugarOnce_0_0(t);
            ;
            LocalPopChoice(o_91);
          }
        else
          {
            t = n_91;
          }
      }
      return(t);
    }
    t = topdown_1_0(n_28, t);
    {
      ATerm o_28 (ATerm t)
      {
        ATerm q_139 = NULL,t_22 = NULL;
        q_139 = t;
        t = dtime_0_0(t);
        t_22 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_22), (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue))));
        t = q_139;
        return(t);
      }
      t = if_verbose3_1_0(o_28, t);
      t = normalize_spec_0_0(t);
      {
        ATerm s_28 (ATerm t)
        {
          ATerm r_139 = NULL,x_22 = NULL;
          r_139 = t;
          t = dtime_0_0(t);
          x_22 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_22), (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue))));
          t = r_139;
          return(t);
        }
        t = if_verbose3_1_0(s_28, t);
        o_139 = t;
        t = spec_use_def_0_0(t);
        t = o_139;
        {
          ATerm w_28 (ATerm t)
          {
            ATerm s_139 = NULL,a_23 = NULL;
            s_139 = t;
            t = dtime_0_0(t);
            a_23 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_23), (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue))));
            t = s_139;
            return(t);
          }
          t = if_verbose3_1_0(w_28, t);
          t = ExpandOverlays_0_0(t);
          {
            ATerm y_28 (ATerm t)
            {
              ATerm t_139 = NULL,d_23 = NULL;
              t_139 = t;
              t = dtime_0_0(t);
              d_23 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_23), (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue))));
              t = t_139;
              return(t);
            }
            t = if_verbose3_1_0(y_28, t);
            t = CheckConstructors_0_0(t);
            {
              ATerm a_29 (ATerm t)
              {
                ATerm u_139 = NULL,h_23 = NULL;
                u_139 = t;
                t = dtime_0_0(t);
                h_23 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_23), (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue))));
                t = u_139;
                return(t);
              }
              t = if_verbose3_1_0(a_29, t);
              t = RulesToSdefs_0_0(t);
              {
                ATerm e_29 (ATerm t)
                {
                  ATerm v_139 = NULL,k_23 = NULL;
                  v_139 = t;
                  t = dtime_0_0(t);
                  k_23 = t;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_23), (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue))));
                  t = v_139;
                  return(t);
                }
                t = if_verbose3_1_0(e_29, t);
                {
                  ATerm g_29 (ATerm t)
                  {
                    ATerm p_91 = t;
                    int q_91 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_91 = t;
                        int s_91 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = ListVarScope_0_0(t);
                            ;
                            LocalPopChoice(s_91);
                          }
                        else
                          {
                            t = r_91;
                            t = desugarRule_0_0(t);
                          }
                        ;
                        LocalPopChoice(q_91);
                      }
                    else
                      {
                        t = p_91;
                      }
                    {
                      ATerm h_29 (ATerm t)
                      {
                        ATerm t_91 = t;
                        int u_91 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_91 = t;
                            int w_91 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = HL_0_0(t);
                                ;
                                LocalPopChoice(w_91);
                              }
                            else
                              {
                                t = v_91;
                                {
                                  ATerm x_91 = t;
                                  int y_91 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = ListMatch_0_0(t);
                                      ;
                                      LocalPopChoice(y_91);
                                    }
                                  else
                                    {
                                      t = x_91;
                                      t = ListBuild_0_0(t);
                                    }
                                }
                              }
                            ;
                            LocalPopChoice(u_91);
                          }
                        else
                          {
                            t = t_91;
                            {
                              ATerm x_139 = NULL,y_139 = NULL;
                              if(match_cons(t, sym_Var_1))
                                {
                                  x_139 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = x_139;
                              if(match_cons(t, sym_ListVar_1))
                                {
                                  y_139 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Var_1, y_139);
                            }
                          }
                        return(t);
                      }
                      t = repeat_1_0(h_29, t);
                    }
                    return(t);
                  }
                  t = topdown_1_0(g_29, t);
                  {
                    ATerm i_29 (ATerm t)
                    {
                      ATerm a_140 = NULL,r_23 = NULL;
                      a_140 = t;
                      t = dtime_0_0(t);
                      r_23 = t;
                      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_23), (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue))));
                      t = a_140;
                      return(t);
                    }
                    t = if_verbose3_1_0(i_29, t);
                    t = strename_0_0(t);
                    {
                      ATerm j_29 (ATerm t)
                      {
                        ATerm b_140 = NULL,u_23 = NULL;
                        b_140 = t;
                        t = dtime_0_0(t);
                        u_23 = t;
                        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_23), (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue))));
                        t = b_140;
                        return(t);
                      }
                      t = if_verbose3_1_0(j_29, t);
                      {
                        ATerm k_29 (ATerm t)
                        {
                          ATerm l_29 (ATerm t)
                          {
                            ATerm m_29 (ATerm t)
                            {
                              ATerm o_29 (ATerm t)
                              {
                                ATerm p_29 (ATerm t)
                                {
                                  ATerm z_91 = t;
                                  int a_92 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm s_29 (ATerm t)
                                      {
                                        ATerm w_29 (ATerm t)
                                        {
                                          ATerm b_92 = t;
                                          int c_92 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = desugarRule_0_0(t);
                                              ;
                                              LocalPopChoice(c_92);
                                            }
                                          else
                                            {
                                              t = b_92;
                                            }
                                          {
                                            ATerm z_29 (ATerm t)
                                            {
                                              ATerm d_92 = t;
                                              int e_92 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = LiftPrimArgs_0_0(t);
                                                  ;
                                                  LocalPopChoice(e_92);
                                                }
                                              else
                                                {
                                                  t = d_92;
                                                  {
                                                    ATerm f_92 = t;
                                                    int g_92 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = HL_0_0(t);
                                                        ;
                                                        LocalPopChoice(g_92);
                                                      }
                                                    else
                                                      {
                                                        t = f_92;
                                                        {
                                                          ATerm h_92 = t;
                                                          int i_92 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_92 = t;
                                                              int k_92 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Bapp0_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(k_92);
                                                                }
                                                              else
                                                                {
                                                                  t = j_92;
                                                                  {
                                                                    ATerm l_92 = t;
                                                                    int m_92 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm d_140 = NULL,i_140 = NULL,j_140 = NULL;
                                                                        if(match_cons(t, sym_Build_1))
                                                                          {
                                                                            d_140 = ATgetArgument(t, 0);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = d_140;
                                                                        if(match_cons(t, sym_RootApp_1))
                                                                          {
                                                                            i_140 = ATgetArgument(t, 0);
                                                                            t = i_140;
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_App_2))
                                                                              {
                                                                                i_140 = ATgetArgument(t, 0);
                                                                                j_140 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_140), i_140);
                                                                          }
                                                                        ;
                                                                        LocalPopChoice(m_92);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_92;
                                                                        t = Bapp2_0_0(t);
                                                                      }
                                                                  }
                                                                }
                                                              ;
                                                              LocalPopChoice(i_92);
                                                            }
                                                          else
                                                            {
                                                              t = h_92;
                                                              {
                                                                ATerm n_92 = t;
                                                                int o_92 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm p_92 = t;
                                                                    int q_92 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
                                                                        if(match_cons(t, sym_Match_1))
                                                                          {
                                                                            b_24 = ATgetArgument(t, 0);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = b_24;
                                                                        {
                                                                          ATerm b_30 (ATerm t)
                                                                          {
                                                                            if(match_cons(t, sym_RootApp_1))
                                                                              {
                                                                                ATerm r_92 = ATgetArgument(t, 0);
                                                                                if(match_cons(r_92, sym_Match_1))
                                                                                  {
                                                                                    if(((c_24 != NULL) && (c_24 != ATgetArgument(r_92, 0))))
                                                                                      _fail(ATgetArgument(r_92, 0));
                                                                                    else
                                                                                      c_24 = ATgetArgument(r_92, 0);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = not_null(c_24);
                                                                            return(t);
                                                                          }
                                                                          t = pat_td_1_0(b_30, t);
                                                                          d_24 = t;
                                                                          t = (ATerm) ATmakeAppl(sym_Match_1, d_24);
                                                                        }
                                                                        ;
                                                                        LocalPopChoice(q_92);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_92;
                                                                        {
                                                                          ATerm s_92 = t;
                                                                          int t_92 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm r_140 = NULL,s_140 = NULL,t_140 = NULL;
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  r_140 = ATgetArgument(t, 0);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = r_140;
                                                                              if(match_cons(t, sym_RootApp_1))
                                                                                {
                                                                                  s_140 = ATgetArgument(t, 0);
                                                                                  t = s_140;
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_App_2))
                                                                                    {
                                                                                      s_140 = ATgetArgument(t, 0);
                                                                                      t_140 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = (ATerm) ATmakeAppl(sym_BA_2, s_140, t_140);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(t_92);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_92;
                                                                              t = Mapp2_0_0(t);
                                                                            }
                                                                        }
                                                                      }
                                                                    ;
                                                                    LocalPopChoice(o_92);
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_92;
                                                                    t = Expl_0_0(t);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              return(t);
                                            }
                                            t = repeat_1_0(z_29, t);
                                          }
                                          return(t);
                                        }
                                        t = topdown_1_0(w_29, t);
                                        return(t);
                                      }
                                      t = SDef_3_0(_id, _id, s_29, t);
                                      ;
                                      LocalPopChoice(a_92);
                                    }
                                  else
                                    {
                                      t = z_91;
                                      {
                                        ATerm u_92 = t;
                                        int v_92 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm e_30 (ATerm t)
                                            {
                                              ATerm f_30 (ATerm t)
                                              {
                                                ATerm w_92 = t;
                                                int x_92 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = desugarRule_0_0(t);
                                                    ;
                                                    LocalPopChoice(x_92);
                                                  }
                                                else
                                                  {
                                                    t = w_92;
                                                  }
                                                {
                                                  ATerm g_30 (ATerm t)
                                                  {
                                                    ATerm y_92 = t;
                                                    int z_92 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = LiftPrimArgs_0_0(t);
                                                        ;
                                                        LocalPopChoice(z_92);
                                                      }
                                                    else
                                                      {
                                                        t = y_92;
                                                        {
                                                          ATerm b_93 = t;
                                                          int c_93 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = HL_0_0(t);
                                                              ;
                                                              LocalPopChoice(c_93);
                                                            }
                                                          else
                                                            {
                                                              t = b_93;
                                                              {
                                                                ATerm d_93 = t;
                                                                int e_93 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm f_93 = t;
                                                                    int g_93 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Bapp0_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(g_93);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_93;
                                                                        {
                                                                          ATerm h_93 = t;
                                                                          int n_93 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm b_141 = NULL,c_141 = NULL,d_141 = NULL;
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  b_141 = ATgetArgument(t, 0);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = b_141;
                                                                              if(match_cons(t, sym_RootApp_1))
                                                                                {
                                                                                  c_141 = ATgetArgument(t, 0);
                                                                                  t = c_141;
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_App_2))
                                                                                    {
                                                                                      c_141 = ATgetArgument(t, 0);
                                                                                      d_141 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_141), c_141);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(n_93);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_93;
                                                                              t = Bapp2_0_0(t);
                                                                            }
                                                                        }
                                                                      }
                                                                    ;
                                                                    LocalPopChoice(e_93);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_93;
                                                                    {
                                                                      ATerm o_93 = t;
                                                                      int t_93 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          ATerm u_93 = t;
                                                                          int w_93 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  k_24 = ATgetArgument(t, 0);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = k_24;
                                                                              {
                                                                                ATerm h_30 (ATerm t)
                                                                                {
                                                                                  if(match_cons(t, sym_RootApp_1))
                                                                                    {
                                                                                      ATerm x_93 = ATgetArgument(t, 0);
                                                                                      if(match_cons(x_93, sym_Match_1))
                                                                                        {
                                                                                          if(((l_24 != NULL) && (l_24 != ATgetArgument(x_93, 0))))
                                                                                            _fail(ATgetArgument(x_93, 0));
                                                                                          else
                                                                                            l_24 = ATgetArgument(x_93, 0);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = not_null(l_24);
                                                                                  return(t);
                                                                                }
                                                                                t = pat_td_1_0(h_30, t);
                                                                                m_24 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_24);
                                                                              }
                                                                              ;
                                                                              LocalPopChoice(w_93);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_93;
                                                                              {
                                                                                ATerm z_93 = t;
                                                                                int d_94 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm i_141 = NULL,j_141 = NULL,k_141 = NULL;
                                                                                    if(match_cons(t, sym_Match_1))
                                                                                      {
                                                                                        i_141 = ATgetArgument(t, 0);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    t = i_141;
                                                                                    if(match_cons(t, sym_RootApp_1))
                                                                                      {
                                                                                        j_141 = ATgetArgument(t, 0);
                                                                                        t = j_141;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_App_2))
                                                                                          {
                                                                                            j_141 = ATgetArgument(t, 0);
                                                                                            k_141 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_BA_2, j_141, k_141);
                                                                                      }
                                                                                    ;
                                                                                    LocalPopChoice(d_94);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_93;
                                                                                    t = Mapp2_0_0(t);
                                                                                  }
                                                                              }
                                                                            }
                                                                          ;
                                                                          LocalPopChoice(t_93);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = o_93;
                                                                          t = Expl_0_0(t);
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    return(t);
                                                  }
                                                  t = repeat_1_0(g_30, t);
                                                }
                                                return(t);
                                              }
                                              t = topdown_1_0(f_30, t);
                                              return(t);
                                            }
                                            t = SDefT_4_0(_id, _id, _id, e_30, t);
                                            ;
                                            LocalPopChoice(v_92);
                                          }
                                        else
                                          {
                                            t = u_92;
                                            {
                                              ATerm n_24 = NULL;
                                              n_24 = t;
                                              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_24), (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue))));
                                              t = n_24;
                                              _fail(t);
                                            }
                                          }
                                      }
                                    }
                                  return(t);
                                }
                                t = map_1_0(p_29, t);
                                return(t);
                              }
                              t = Strategies_1_0(o_29, t);
                              return(t);
                            }
                            ATerm n_29 (ATerm t)
                            {
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              return(t);
                            }
                            t = Cons_2_0(m_29, n_29, t);
                            return(t);
                          }
                          t = Cons_2_0(_id, l_29, t);
                          return(t);
                        }
                        t = Specification_1_0(k_29, t);
                      }
                    }
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
ATerm _2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm t)
{
  ATerm w_141 = NULL,x_141 = NULL,a_142 = NULL,b_142 = NULL,c_142 = NULL,h_142 = NULL;
  h_142 = t;
  if(match_cons(t, sym__2))
    {
      x_141 = ATgetArgument(t, 0);
      a_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_142);
  w_141 = t;
  t = x_141;
  t = k_93(t);
  b_142 = t;
  t = a_142;
  t = l_93(t);
  c_142 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, b_142, c_142), w_141);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL,m_142 = NULL;
  if(match_cons(t, sym__2))
    {
      k_142 = ATgetArgument(t, 0);
      l_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_142, term_e_94);
  t = open_stream_0_0(t);
  m_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_142, l_142);
  t = q_131(t);
  t = fclose_0_0(t);
  t = l_142;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL;
  n_142 = t;
  {
    ATerm j_30 (ATerm t)
    {
      ATerm f_94 = t;
      int g_94 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_30 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((o_142 != NULL) && (o_142 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_142 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_30, t);
          ;
          LocalPopChoice(g_94);
        }
      else
        {
          t = f_94;
          t = term_h_94;
          if(((o_142 != NULL) && (o_142 != t)))
            _fail(t);
          else
            o_142 = t;
        }
      return(t);
    }
    t = _2_0(j_30, _id, t);
    t = n_142;
    {
      ATerm u_30 (ATerm t)
      {
        ATerm x_24 = NULL;
        x_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_142), x_24);
        return(t);
      }
      t = _2_0(_id, u_30, t);
      {
        ATerm i_94 = t;
        int k_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 (ATerm t)
            {
              ATerm b_31 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(b_31, t);
              return(t);
            }
            ATerm x_30 (ATerm t)
            {
              ATerm c_31 (ATerm t)
              {
                ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm l_94 = ATgetArgument(t, 0);
                    if(match_cons(l_94, sym_Stream_1))
                      {
                        p_142 = ATgetArgument(l_94, 0);
                      }
                    else
                      _fail(t);
                    q_142 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(p_142, q_142);
                r_142 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_142);
                return(t);
              }
              t = WriteToFile_1_0(c_31, t);
              return(t);
            }
            t = _2_0(v_30, x_30, t);
            ;
            LocalPopChoice(k_94);
          }
        else
          {
            t = i_94;
            {
              ATerm d_31 (ATerm t)
              {
                ATerm i_31 (ATerm t)
                {
                  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm n_94 = ATgetArgument(t, 0);
                      if(match_cons(n_94, sym_Stream_1))
                        {
                          s_142 = ATgetArgument(n_94, 0);
                        }
                      else
                        _fail(t);
                      t_142 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(s_142, t_142);
                  u_142 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), u_142);
                  v_142 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, v_142);
                  return(t);
                }
                t = WriteToFile_1_0(i_31, t);
                return(t);
              }
              t = _2_0(_id, d_31, t);
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
ATerm apply_strategy_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL;
  w_142 = t;
  t = dtime_0_0(t);
  t = w_142;
  t = s_134(t);
  x_142 = t;
  t = dtime_0_0(t);
  y_142 = t;
  t = x_142;
  if(match_cons(t, sym__2))
    {
      z_142 = ATgetArgument(t, 0);
      a_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_142), (ATerm) ATmakeAppl(sym_Runtime_1, y_142)), a_143);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_143 (ATerm n_143, ATerm t)
  {
    t = SSL_fclose(n_143);
    return(t);
  }
  ATerm s_143 = NULL,t_143 = NULL;
  t_143 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_143 = ATgetArgument(t, 0);
      {
        ATerm o_94 = t;
        int p_94 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_143);
            ;
            LocalPopChoice(p_94);
          }
        else
          {
            t = o_94;
            t = v_143(t_143, t);
          }
      }
    }
  else
    {
      t = v_143(t_143, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_143 = NULL;
  t = SSL_stdin_stream();
  w_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_143);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_143 = NULL;
  t = SSL_stdout_stream();
  x_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_143);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_143 = NULL;
  t = SSL_stderr_stream();
  y_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_143);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_94 = ATgetArgument(t, 0);
      ATerm r_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_94 = t;
    int t_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL,j_26 = NULL;
        f_26 = t;
        t = SSL_explode_term(f_26);
        if(match_cons(t, sym__2))
          {
            ATerm u_94 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_94) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_94 = ATgetArgument(t, 1);
              if(((ATgetType(v_94) == AT_LIST) && !(ATisEmpty(v_94))))
                {
                  j_26 = ATgetFirst((ATermList) v_94);
                  {
                    ATerm z_94 = (ATerm) ATgetNext((ATermList) v_94);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_26;
        if(match_cons(t, sym_stderr_0))
          {
            t = j_26;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = j_26;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_26;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(t_94);
      }
    else
      {
        t = s_94;
        {
          ATerm a_95 = t;
          int b_95 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL;
              ATerm k_31 (ATerm t)
              {
                ATerm g_144 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    g_144 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_144;
                return(t);
              }
              t = _2_0(k_31, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_144 = ATgetArgument(t, 0);
                  e_144 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(d_144, e_144);
              f_144 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, f_144);
              ;
              LocalPopChoice(b_95);
            }
          else
            {
              t = a_95;
              {
                ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL;
                ATerm m_31 (ATerm t)
                {
                  ATerm k_144 = NULL;
                  k_144 = t;
                  t = SSL_is_string(k_144);
                  return(t);
                }
                t = _2_0(m_31, _id, t);
                if(match_cons(t, sym__2))
                  {
                    h_144 = ATgetArgument(t, 0);
                    i_144 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(h_144, i_144);
                j_144 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, j_144);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_144 = NULL,m_144 = NULL,n_144 = NULL;
  ATerm d_95 = t;
  int f_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_144 = NULL;
      o_144 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_144, term_g_95);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_95);
    }
  else
    {
      t = d_95;
      {
        ATerm r_26 = NULL;
        r_26 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_26), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = r_26;
        _fail(t);
      }
    }
  l_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(n_144);
  m_144 = t;
  t = l_144;
  t = fclose_0_0(t);
  t = m_144;
  return(t);
}
ATerm fetch_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  ATerm t_144 (ATerm t)
  {
    ATerm h_95 = t;
    int i_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_119, _id, t);
        ;
        LocalPopChoice(i_95);
      }
    else
      {
        t = h_95;
        t = Cons_2_0(_id, t_144, t);
      }
    return(t);
  }
  t = t_144(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_95 = t;
  int k_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_95);
    }
  else
    {
      t = j_95;
      {
        ATerm w_144 = NULL,x_144 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_144 = ATgetFirst((ATermList) t);
            x_144 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_144;
        {
          ATerm n_31 (ATerm t)
          {
            t = x_144;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_31, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_119 (ATerm), ATerm t)
{
  ATerm d_145 (ATerm t)
  {
    ATerm l_95 = t;
    int m_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_145, t);
        ;
        LocalPopChoice(m_95);
      }
    else
      {
        t = l_95;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_119(t);
      }
    return(t);
  }
  t = d_145(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm f_145 = NULL;
  ATerm p_31 (ATerm t)
  {
    ATerm g_145 = NULL;
    g_145 = t;
    t = SSL_explode_string(g_145);
    return(t);
  }
  ATerm s_31 (ATerm t)
  {
    ATerm h_145 = NULL;
    h_145 = t;
    t = SSL_explode_string(h_145);
    return(t);
  }
  t = _2_0(p_31, s_31, t);
  {
    ATerm n_95 = t;
    int p_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_145 = NULL,k_145 = NULL;
        if(match_cons(t, sym__2))
          {
            j_145 = ATgetArgument(t, 0);
            k_145 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_145;
        {
          ATerm t_31 (ATerm t)
          {
            t = k_145;
            return(t);
          }
          t = at_end_1_0(t_31, t);
        }
        ;
        LocalPopChoice(p_95);
      }
    else
      {
        t = n_95;
        {
          ATerm h_27 = NULL,k_27 = NULL;
          h_27 = t;
          t = SSL_explode_term(h_27);
          if(match_cons(t, sym__2))
            {
              ATerm q_95 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_95) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_27;
          t = concat_0_0(t);
        }
      }
    f_145 = t;
    t = SSL_implode_string(f_145);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_95 = t;
  int s_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_145 = NULL;
      u_145 = t;
      t = SSL_is_string(u_145);
      ;
      LocalPopChoice(s_95);
    }
  else
    {
      t = r_95;
      {
        ATerm t_95 = t;
        int u_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_31 (ATerm t)
            {
              ATerm v_95 = t;
              int w_95 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(w_95);
                }
              else
                {
                  t = v_95;
                }
              return(t);
            }
            t = map_1_0(u_31, t);
            ;
            LocalPopChoice(u_95);
          }
        else
          {
            t = t_95;
            {
              ATerm y_145 = NULL,z_145 = NULL,a_146 = NULL;
              y_145 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_145 = ATgetArgument(t, 0);
                  t = z_145;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_145 = ATgetArgument(t, 0);
                      t = z_145;
                      {
                        ATerm y_95 = t;
                        int z_95 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_145);
                            {
                              ATerm d_96 = t;
                              int g_96 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_28 = NULL;
                                  t = eval_config_0_0(t);
                                  v_28 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_145, v_28);
                                  t = v_28;
                                  ;
                                  LocalPopChoice(g_96);
                                }
                              else
                                {
                                  t = d_96;
                                }
                            }
                            ;
                            LocalPopChoice(z_95);
                          }
                        else
                          {
                            t = y_95;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_145), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = z_145;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_146 = NULL,f_146 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_145 = ATgetArgument(t, 0);
                          a_146 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_145;
                      t = eval_config_0_0(t);
                      e_146 = t;
                      t = a_146;
                      t = eval_config_0_0(t);
                      f_146 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_146, f_146);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_132 (ATerm), ATerm t)
{
  ATerm h_96 = t;
  int i_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_146 = NULL,m_146 = NULL;
      k_146 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_96 = t;
        int l_96 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_29 = NULL;
            t = eval_config_0_0(t);
            u_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_29);
            t = u_29;
            ;
            LocalPopChoice(l_96);
          }
        else
          {
            t = j_96;
          }
        m_146 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_146, term_n_96);
        t = geq_0_0(t);
        t = k_146;
        t = u_132(t);
      }
      ;
      LocalPopChoice(i_96);
    }
  else
    {
      t = h_96;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm v_31 (ATerm t)
  {
    ATerm o_146 = NULL;
    o_146 = t;
    if(match_string(t, "-k"))
      {
        t = o_146;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = o_146;
      }
    return(t);
  }
  ATerm x_31 (ATerm t)
  {
    ATerm p_146 = NULL,q_146 = NULL;
    p_146 = t;
    t = SSL_string_to_int(p_146);
    q_146 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_146);
    t = p_146;
    return(t);
  }
  ATerm y_31 (ATerm t)
  {
    t = term_o_96;
    return(t);
  }
  t = ArgOption_3_0(v_31, x_31, y_31, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_96 = t;
  int q_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_32 (ATerm t)
      {
        ATerm s_146 = NULL;
        s_146 = t;
        if(match_string(t, "-S"))
          {
            t = s_146;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = s_146;
          }
        return(t);
      }
      ATerm g_32 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_r_96;
        return(t);
      }
      ATerm h_32 (ATerm t)
      {
        t = term_s_96;
        return(t);
      }
      t = Option_3_0(f_32, g_32, h_32, t);
      ;
      LocalPopChoice(q_96);
    }
  else
    {
      t = p_96;
      {
        ATerm t_96 = t;
        int u_96 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm k_32 (ATerm t)
            {
              ATerm t_146 = NULL,u_146 = NULL;
              t_146 = t;
              t = SSL_string_to_int(t_146);
              u_146 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_146);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, t_146);
              return(t);
            }
            ATerm r_32 (ATerm t)
            {
              t = term_v_96;
              return(t);
            }
            t = ArgOption_3_0(j_32, k_32, r_32, t);
            ;
            LocalPopChoice(u_96);
          }
        else
          {
            t = t_96;
            {
              ATerm s_32 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_32 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_w_96;
                return(t);
              }
              ATerm u_32 (ATerm t)
              {
                t = term_x_96;
                return(t);
              }
              t = Option_3_0(s_32, t_32, u_32, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_146 = NULL,z_146 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_147 = NULL;
      t = term_h_26;
      t = d_0(t);
      a_147 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_96, term_z_96, a_147);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_146 = ATgetFirst((ATermList) t);
          z_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_146;
      t = a_0(t);
      t = term_h_26;
      t = b_0(t);
      d_147 = t;
      t = (ATerm) ATinsert(CheckATermList(z_146), d_147);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_32 (ATerm t)
  {
    ATerm f_147 = NULL;
    f_147 = t;
    if(match_string(t, "-o"))
      {
        t = f_147;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_147;
      }
    return(t);
  }
  ATerm x_32 (ATerm t)
  {
    ATerm g_147 = NULL;
    g_147 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), g_147);
    t = (ATerm) ATmakeAppl(sym_Output_1, g_147);
    return(t);
  }
  ATerm a_33 (ATerm t)
  {
    t = term_a_97;
    return(t);
  }
  t = ArgOption_3_0(w_32, x_32, a_33, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL,m_147 = NULL;
  if(match_cons(t, sym__3))
    {
      j_147 = ATgetArgument(t, 0);
      k_147 = ATgetArgument(t, 1);
      l_147 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_147, k_147);
  {
    ATerm b_97 = t;
    int c_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_97 = ATgetArgument(t, 0);
            ATerm e_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_147, k_147);
        ;
        LocalPopChoice(c_97);
      }
    else
      {
        t = b_97;
        t = (ATerm) ATempty;
      }
    m_147 = t;
    t = SSL_table_put(j_147, k_147, (ATerm) ATinsert(CheckATermList(m_147), l_147));
    t = (ATerm) ATmakeAppl(sym__3, j_147, k_147, l_147);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_147 = NULL,v_147 = NULL,w_147 = NULL,x_147 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_147 = NULL;
      t = term_h_26;
      t = m_0(t);
      y_147 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_96, term_z_96, y_147);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_147 = ATgetFirst((ATermList) t);
          v_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_147;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_147 = ATgetFirst((ATermList) t);
          x_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_147;
      t = i_0(t);
      t = w_147;
      t = k_0(t);
      c_148 = t;
      t = (ATerm) ATinsert(CheckATermList(x_147), c_148);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_33 (ATerm t)
  {
    ATerm e_148 = NULL;
    e_148 = t;
    if(match_string(t, "-i"))
      {
        t = e_148;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_148;
      }
    return(t);
  }
  ATerm c_33 (ATerm t)
  {
    ATerm f_148 = NULL;
    f_148 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_148);
    t = (ATerm) ATmakeAppl(sym_Input_1, f_148);
    return(t);
  }
  ATerm d_33 (ATerm t)
  {
    t = term_f_97;
    return(t);
  }
  t = ArgOption_3_0(b_33, c_33, d_33, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_148 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_26;
  t = whoami_0_0(t);
  g_148 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_148));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_97 = t;
    int h_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL;
        t = eval_config_0_0(t);
        i_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_30);
        t = i_30;
        ;
        LocalPopChoice(h_97);
      }
    else
      {
        t = g_97;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t)
{
  ATerm i_97 = t;
  int j_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_125(t);
      ;
      LocalPopChoice(j_97);
    }
  else
    {
      t = i_97;
      {
        ATerm l_148 = NULL,m_148 = NULL,p_148 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_148 = ATgetFirst((ATermList) t);
            m_148 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_148;
        t = foldr_2_0(c_125, d_125, t);
        p_148 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_148, p_148);
        t = d_125(t);
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
  ATerm s_148 = NULL,q_30 = NULL,t_30 = NULL;
  t = times_0_0(t);
  q_30 = t;
  t = SSL_explode_term(q_30);
  if(match_cons(t, sym__2))
    {
      ATerm n_97 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_30;
  {
    ATerm e_33 (ATerm t)
    {
      t = term_e_51;
      return(t);
    }
    ATerm f_33 (ATerm t)
    {
      ATerm y_30 = NULL,a_31 = NULL;
      if(match_cons(t, sym__2))
        {
          y_30 = ATgetArgument(t, 0);
          a_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_97 = t;
        int p_97 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(y_30, a_31);
            ;
            LocalPopChoice(p_97);
          }
        else
          {
            t = o_97;
            t = SSL_addr(y_30, a_31);
          }
      }
      return(t);
    }
    t = foldr_2_0(e_33, f_33, t);
    s_148 = t;
    t = SSL_TicksToSeconds(s_148);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_149 = NULL,e_149 = NULL,f_149 = NULL;
  d_149 = t;
  if(match_cons(t, sym__2))
    {
      e_149 = ATgetArgument(t, 0);
      f_149 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_97 = t;
    int t_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_149;
        if((e_149 != t))
          {
            _fail(t);
          }
        t = d_149;
        ;
        LocalPopChoice(t_97);
      }
    else
      {
        t = s_97;
        t = d_149;
        {
          ATerm v_97 = t;
          int w_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_149, f_149);
              ;
              LocalPopChoice(w_97);
            }
          else
            {
              t = v_97;
              t = SSL_gtr(e_149, f_149);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_149, f_149);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_132 (ATerm), ATerm t)
{
  ATerm x_97 = t;
  int b_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_149 = NULL,m_149 = NULL;
      k_149 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm g_98 = t;
        int h_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_32 = NULL;
            t = eval_config_0_0(t);
            m_32 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_32);
            t = m_32;
            ;
            LocalPopChoice(h_98);
          }
        else
          {
            t = g_98;
          }
        m_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_149, term_h_51);
        t = geq_0_0(t);
        t = k_149;
        t = t_132(t);
      }
      ;
      LocalPopChoice(b_98);
    }
  else
    {
      t = x_97;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_33 (ATerm t)
  {
    ATerm o_149 = NULL,p_149 = NULL;
    t = run_time_0_0(t);
    o_149 = t;
    t = term_h_26;
    t = whoami_0_0(t);
    p_149 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_149), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_149));
    t = (ATerm) ATmakeAppl(sym__2, term_j_98, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_98), o_149), term_k_98), p_149));
    return(t);
  }
  t = if_verbose1_1_0(g_33, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_135 (ATerm), ATerm t)
{
  ATerm m_98 = t;
  int n_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm o_98 = t;
        int p_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_32 = NULL;
            t = eval_config_0_0(t);
            y_32 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), y_32);
            t = y_32;
            ;
            LocalPopChoice(p_98);
          }
        else
          {
            t = o_98;
          }
      }
      ;
      LocalPopChoice(n_98);
    }
  else
    {
      t = m_98;
      {
        ATerm i_33 (ATerm t)
        {
          ATerm q_98 = t;
          int u_98 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(u_98);
            }
          else
            {
              t = q_98;
              {
                ATerm v_98 = t;
                int w_98 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(w_98);
                  }
                else
                  {
                    t = v_98;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(i_33, t);
      }
    }
  t = q_135(t);
  return(t);
}
ATerm map_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm q_149 (ATerm t)
  {
    ATerm x_98 = t;
    int y_98 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_98);
      }
    else
      {
        t = x_98;
        t = Cons_2_0(a_119, q_149, t);
      }
    return(t);
  }
  t = q_149(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_149 = NULL,t_149 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_149 = ATgetFirst((ATermList) t);
      t_149 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_149 = NULL,y_149 = NULL;
        t = t_149;
        t = g_0(t);
        x_149 = t;
        t = s_149;
        t = f_0(t);
        y_149 = t;
        t = t_149;
        {
          ATerm j_33 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_149), y_149);
            return(t);
          }
          t = reverse_acc_2_0(f_0, j_33, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_26;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm z_149 = NULL,b_150 = NULL,c_150 = NULL,d_150 = NULL;
  d_150 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_150);
  z_149 = t;
  t = b_150;
  t = r_110(t);
  c_150 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_150), z_149);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_99 = t;
  int d_99 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm f_99 = t;
        int g_99 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_33 = NULL;
            t = eval_config_0_0(t);
            k_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_33);
            t = k_33;
            ;
            LocalPopChoice(g_99);
          }
        else
          {
            t = f_99;
          }
      }
      ;
      LocalPopChoice(d_99);
    }
  else
    {
      t = c_99;
      {
        ATerm n_33 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(n_33, t);
      }
    }
  t = term_k_99;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm o_33 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, o_33, t);
    {
      ATerm q_33 (ATerm t)
      {
        ATerm g_150 = NULL;
        g_150 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, g_150), term_u_99);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(q_33, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  ATerm h_150 = NULL,i_150 = NULL,j_150 = NULL,k_150 = NULL;
  k_150 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_150);
  h_150 = t;
  t = i_150;
  t = s_110(t);
  j_150 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, j_150), h_150);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_150 = NULL,p_150 = NULL;
  o_150 = t;
  {
    ATerm v_99 = t;
    int w_99 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_150;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_99 = ATgetFirst((ATermList) t);
                ATerm z_99 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_150;
          }
        ;
        LocalPopChoice(w_99);
      }
    else
      {
        t = v_99;
        t = (ATerm) ATinsert(ATempty, o_150);
      }
    p_150 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_150);
    t = o_150;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm e_100 = t;
    int f_100 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_33 = NULL;
        t = eval_config_0_0(t);
        t_33 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_33);
        t = t_33;
        ;
        LocalPopChoice(f_100);
      }
    else
      {
        t = e_100;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_100 = t;
  int h_100 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_33 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm s_33 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_100;
        return(t);
      }
      ATerm u_33 (ATerm t)
      {
        t = term_l_100;
        return(t);
      }
      t = Option_3_0(r_33, s_33, u_33, t);
      ;
      LocalPopChoice(h_100);
    }
  else
    {
      t = g_100;
      {
        ATerm v_33 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm w_33 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_m_100;
          return(t);
        }
        ATerm x_33 (ATerm t)
        {
          t = term_n_100;
          return(t);
        }
        t = Option_3_0(v_33, w_33, x_33, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm t_150 = NULL,u_150 = NULL,v_150 = NULL,w_150 = NULL,x_150 = NULL,y_150 = NULL;
  y_150 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_150 = ATgetFirst((ATermList) t);
      v_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_150);
  t_150 = t;
  t = u_150;
  t = z_97(t);
  w_150 = t;
  t = v_150;
  t = a_98(t);
  x_150 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_150), w_150), t_150);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_137 (ATerm), ATerm t)
{
  ATerm c_151 = NULL;
  c_151 = t;
  {
    ATerm p_100 = t;
    int q_100 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_100;
        t = t_137(t);
        ;
        LocalPopChoice(q_100);
      }
    else
      {
        t = p_100;
      }
    t = c_151;
    {
      ATerm y_33 (ATerm t)
      {
        ATerm d_151 = NULL;
        d_151 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_151);
        t = (ATerm) ATmakeAppl(sym_Program_1, d_151);
        return(t);
      }
      ATerm z_33 (ATerm t)
      {
        ATerm v_100 = t;
        int w_100 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_100 = t;
            int y_100 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_100);
              }
            else
              {
                t = x_100;
                t = t_137(t);
                t = Cons_2_0(_id, z_33, t);
              }
            ;
            LocalPopChoice(w_100);
          }
        else
          {
            t = v_100;
            {
              ATerm f_151 = NULL,g_151 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_151 = ATgetFirst((ATermList) t);
                  g_151 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_151), (ATerm) ATmakeAppl(sym_Undefined_1, f_151));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_33, z_33, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_137 (ATerm), ATerm t)
{
  ATerm p_151 = NULL,q_151 = NULL,r_151 = NULL;
  p_151 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_151;
  {
    ATerm a_34 (ATerm t)
    {
      ATerm z_100 = t;
      int b_101 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_137(t);
          ;
          LocalPopChoice(b_101);
        }
      else
        {
          t = z_100;
          {
            ATerm c_101 = t;
            int e_101 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_34 (ATerm t)
                {
                  ATerm s_151 = NULL;
                  s_151 = t;
                  if(match_string(t, "--help"))
                    {
                      t = s_151;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = s_151;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = s_151;
                        }
                    }
                  return(t);
                }
                ATerm c_34 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_f_101;
                  return(t);
                }
                ATerm d_34 (ATerm t)
                {
                  t = term_n_101;
                  return(t);
                }
                t = Option_3_0(b_34, c_34, d_34, t);
                ;
                LocalPopChoice(e_101);
              }
            else
              {
                t = c_101;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_34, t);
    {
      ATerm o_101 = t;
      int p_101 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_151 = NULL;
          x_151 = t;
          {
            ATerm q_101 = t;
            int r_101 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_151;
                {
                  ATerm t_101 = t;
                  int u_101 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm v_101 = t;
                        int w_101 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_35 = NULL;
                            t = eval_config_0_0(t);
                            c_35 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), c_35);
                            t = c_35;
                            ;
                            LocalPopChoice(w_101);
                          }
                        else
                          {
                            t = v_101;
                          }
                      }
                      ;
                      LocalPopChoice(u_101);
                    }
                  else
                    {
                      t = t_101;
                      {
                        ATerm f_34 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(f_34, t);
                      }
                    }
                  t = x_151;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(r_101);
              }
            else
              {
                t = q_101;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm x_101 = t;
                  int y_101 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_35 = NULL;
                      t = eval_config_0_0(t);
                      s_35 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), s_35);
                      t = s_35;
                      ;
                      LocalPopChoice(y_101);
                    }
                  else
                    {
                      t = x_101;
                    }
                  t = x_151;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(p_101);
        }
      else
        {
          t = o_101;
          {
            ATerm b_102 = t;
            int c_102 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_34 (ATerm t)
                {
                  ATerm h_34 (ATerm t)
                  {
                    if(((q_151 != NULL) && (q_151 != t)))
                      _fail(t);
                    else
                      q_151 = t;
                    return(t);
                  }
                  t = Undefined_1_0(h_34, t);
                  return(t);
                }
                t = fetch_1_0(g_34, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_151)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_j_98, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_151)), term_d_102));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(c_102);
              }
            else
              {
                t = b_102;
              }
          }
        }
      r_151 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_151;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t)
{
  ATerm a_152 = NULL;
  t = parse_options_1_0(s_135, t);
  a_152 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), a_152);
  t = a_152;
  t = u_135(t);
  {
    ATerm e_102 = t;
    int f_102 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_135, t);
        ;
        LocalPopChoice(f_102);
      }
    else
      {
        t = e_102;
        {
          ATerm g_102 = t;
          int h_102 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_135(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_102);
            }
          else
            {
              t = g_102;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm j_34 (ATerm t)
  {
    ATerm i_102 = t;
    int j_102 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_135(t);
        ;
        LocalPopChoice(j_102);
      }
    else
      {
        t = i_102;
        {
          ATerm n_102 = t;
          int o_102 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_102);
            }
          else
            {
              t = n_102;
              {
                ATerm p_102 = t;
                int q_102 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_102);
                  }
                else
                  {
                    t = p_102;
                    {
                      ATerm r_102 = t;
                      int u_102 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_34 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm p_34 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_x_102;
                            return(t);
                          }
                          ATerm r_34 (ATerm t)
                          {
                            t = term_y_102;
                            return(t);
                          }
                          t = Option_3_0(n_34, p_34, r_34, t);
                          ;
                          LocalPopChoice(u_102);
                        }
                      else
                        {
                          t = r_102;
                          {
                            ATerm z_102 = t;
                            int a_103 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(a_103);
                              }
                            else
                              {
                                t = z_102;
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
  ATerm k_34 (ATerm t)
  {
    ATerm t_34 (ATerm t)
    {
      ATerm b_152 = NULL,c_152 = NULL;
      b_152 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_103 = t;
        int e_103 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_36 = NULL;
            t = eval_config_0_0(t);
            d_36 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_36);
            t = d_36;
            ;
            LocalPopChoice(e_103);
          }
        else
          {
            t = d_103;
          }
        c_152 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_152));
        t = b_152;
      }
      return(t);
    }
    t = if_verbose2_1_0(t_34, t);
    return(t);
  }
  ATerm m_34 (ATerm t)
  {
    ATerm d_152 = NULL,e_152 = NULL,n_37 = NULL;
    d_152 = t;
    {
      ATerm k_103 = t;
      int l_103 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_34 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_152 != NULL) && (e_152 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_152 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_34, t);
          ;
          LocalPopChoice(l_103);
        }
      else
        {
          t = k_103;
          t = term_m_103;
          e_152 = t;
        }
      t = not_null(e_152);
      t = ReadFromFile_0_0(t);
      n_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_152, n_37);
      t = apply_strategy_1_0(b_135, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_34, d_135, k_34, m_34, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm v_34 (ATerm t)
  {
    t = _2_0(_id, frontend_transformation_0_0, t);
    return(t);
  }
  t = iowrap_3_0(v_34, _fail, default_usage_0_0, t);
  return(t);
}

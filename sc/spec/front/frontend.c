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
ATerm term_y_92;
ATerm term_l_92;
ATerm term_k_92;
ATerm term_j_92;
ATerm term_i_92;
ATerm term_d_92;
ATerm term_c_92;
ATerm term_b_92;
ATerm term_o_91;
ATerm term_n_91;
ATerm term_m_91;
ATerm term_h_91;
ATerm term_c_91;
ATerm term_b_91;
ATerm term_a_91;
ATerm term_z_90;
ATerm term_y_90;
ATerm term_x_90;
ATerm term_w_90;
ATerm term_p_90;
ATerm term_o_90;
ATerm term_l_90;
ATerm term_i_90;
ATerm term_b_90;
ATerm term_a_90;
ATerm term_o_89;
ATerm term_n_89;
ATerm term_m_89;
ATerm term_l_89;
ATerm term_g_89;
ATerm term_f_89;
ATerm term_e_89;
ATerm term_d_89;
ATerm term_y_88;
ATerm term_x_88;
ATerm term_w_88;
ATerm term_v_88;
ATerm term_u_88;
ATerm term_t_88;
ATerm term_p_88;
ATerm term_o_88;
ATerm term_n_88;
ATerm term_m_88;
ATerm term_l_88;
ATerm term_g_88;
ATerm term_z_87;
ATerm term_s_87;
ATerm term_p_87;
ATerm term_x_86;
ATerm term_p_86;
ATerm term_r_85;
ATerm term_m_85;
ATerm term_l_85;
ATerm term_o_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_c_84;
ATerm term_a_84;
ATerm term_u_83;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_b_83;
ATerm term_a_83;
ATerm term_z_82;
ATerm term_y_82;
ATerm term_x_82;
ATerm term_s_82;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_x_81;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_r_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_n_76;
ATerm term_y_75;
ATerm term_k_72;
ATerm term_i_72;
ATerm term_r_71;
ATerm term_q_71;
ATerm term_j_71;
ATerm term_i_71;
ATerm term_f_71;
ATerm term_e_71;
ATerm term_z_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_p_70;
ATerm term_o_70;
ATerm term_e_68;
ATerm term_z_67;
ATerm term_y_67;
ATerm term_x_67;
ATerm term_v_67;
ATerm term_w_66;
ATerm term_u_66;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_z_63;
ATerm term_e_63;
ATerm term_v_62;
ATerm term_t_62;
ATerm term_n_62;
ATerm term_k_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_s_59;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_t_53;
ATerm term_q_53;
ATerm term_i_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_x_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_r_50;
ATerm term_l_50;
ATerm term_u_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_j_47;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_k_40;
ATerm term_b_40;
ATerm term_x_39;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
void init_constant_terms (void)
{
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Sort_2, term_j_47, (ATerm) ATempty);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_47);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_50);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym_Op_2, term_j_47, (ATerm) ATempty);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(sym_Var_1, term_s_51);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(sym_Var_1, term_u_51);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym_Anno_2, term_t_51, term_v_51);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_Var_1, term_c_52);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Var_1, term_e_52);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_Anno_2, term_d_52, term_f_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_51);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_Call_2, term_h_52, (ATerm) ATempty);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_BAM_3, term_i_52, term_t_51, term_d_52);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_51);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Call_2, term_k_52, (ATerm) ATempty);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_BAM_3, term_l_52, term_v_51, term_f_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym__2, term_p_52, term_n_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Var_1, term_e_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym__2, term_d_53, (ATerm) ATempty);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Keys_1, term_r_50);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_54);
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_ConstType_1, term_f_53);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, term_n_54);
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_51);
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_60);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(sym__2, term_d_60, (ATerm) ATempty);
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_65);
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(sym_Op_2, term_x_67, (ATerm) ATempty);
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(sym_Op_2, term_o_70, (ATerm) ATempty);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_70);
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_71);
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_71);
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_71);
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_72);
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_n_76));
  term_n_76 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_76);
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_76);
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_38);
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_82);
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_67);
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(sym_Call_2, term_r_82, (ATerm) ATempty);
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_82));
  term_y_82 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_82));
  term_z_82 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_83);
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(sym_Call_2, term_t_83, (ATerm) ATempty);
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(sym_Call_2, term_x_81, (ATerm) ATempty);
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_87));
  term_p_87 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_88));
  term_n_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(sym__2, term_z_41, term_r_50);
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_50);
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_88));
  term_v_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_88));
  term_w_88 = (ATerm) ATmakeAppl(sym__2, term_v_88, term_o_38);
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_89));
  term_d_89 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_89));
  term_o_89 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_90));
  term_a_90 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_90));
  term_i_90 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_90));
  term_l_90 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_90));
  term_o_90 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeAppl(sym__2, term_d_89, term_e_89);
  ATprotect(&(term_w_90));
  term_w_90 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_90));
  term_x_90 = (ATerm) ATmakeAppl(sym__2, term_w_90, term_o_38);
  ATprotect(&(term_y_90));
  term_y_90 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_90));
  term_z_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_91));
  term_a_91 = (ATerm) ATmakeAppl(sym__2, term_z_90, term_o_38);
  ATprotect(&(term_b_91));
  term_b_91 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_91));
  term_c_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_91));
  term_m_91 = (ATerm) ATmakeAppl(sym__2, term_i_90, term_o_38);
  ATprotect(&(term_n_91));
  term_n_91 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_91));
  term_o_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_92));
  term_b_92 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_92));
  term_c_92 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_92));
  term_d_92 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_92));
  term_i_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_92));
  term_j_92 = (ATerm) ATmakeAppl(sym__2, term_i_92, term_o_38);
  ATprotect(&(term_k_92));
  term_k_92 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_92));
  term_y_92 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm a_143 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm u_12 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm);
ATerm d_8 (ATerm s_7, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm j_11 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm r_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm w_133 (ATerm), ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm k_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm q_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm spaste_1_0 (ATerm m_142 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm);
ATerm Let_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm z_12 (ATerm h_79, ATerm g_79, ATerm);
ATerm rename_4_0 (ATerm i_139 (ATerm (ATerm), ATerm), ATerm j_139 (ATerm), ATerm k_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_139 (ATerm (ATerm), ATerm), ATerm);
ATerm s_13 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm h_14 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm b_13 (ATerm k_86, ATerm);
ATerm c_13 (ATerm h_86, ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm r_14 (ATerm);
ATerm u_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm b_15 (ATerm);
ATerm f_15 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm repeat_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm o_15 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm);
ATerm t_15 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm d_13 (ATerm f_84, ATerm g_84, ATerm h_84, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_114 (ATerm), ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm c_55 (ATerm t_54, ATerm);
ATerm f_55 (ATerm v_54, ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm r_16 (ATerm);
ATerm a_17 (ATerm);
ATerm c_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm t_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm x_17 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm h_13 (ATerm g_76, ATerm h_76, ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm p_18 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm i_13 (ATerm m_57, ATerm n_57, ATerm);
ATerm r_18 (ATerm);
ATerm t_18 (ATerm);
ATerm w_18 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm a_19 (ATerm);
ATerm d_19 (ATerm);
ATerm j_13 (ATerm k_83, ATerm);
ATerm e_19 (ATerm);
ATerm f_19 (ATerm);
ATerm h_19 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm u_19 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm o_116 (ATerm), ATerm);
ATerm y_19 (ATerm);
ATerm e_20 (ATerm);
ATerm h_20 (ATerm);
ATerm check_constructors_p__2_0 (ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm r_20 (ATerm);
ATerm t_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm h_21 (ATerm);
ATerm i_21 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm k_13 (ATerm t_82, ATerm v_82, ATerm);
ATerm n_21 (ATerm);
ATerm o_21 (ATerm);
ATerm p_21 (ATerm);
ATerm q_21 (ATerm);
ATerm t_21 (ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm tpaste_1_0 (ATerm i_142 (ATerm), ATerm);
ATerm x_21 (ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm a_22 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm n_13 (ATerm t_139 (ATerm), ATerm u_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_72, ATerm n_72, ATerm m_72, ATerm);
ATerm g_22 (ATerm);
ATerm h_22 (ATerm);
ATerm i_22 (ATerm);
ATerm o_13 (ATerm n_139 (ATerm), ATerm o_139 (ATerm (ATerm), ATerm), ATerm g_72, ATerm j_72, ATerm);
ATerm env_alltd_1_0 (ATerm s_118 (ATerm), ATerm);
ATerm s_22 (ATerm);
ATerm u_22 (ATerm);
ATerm v_22 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm z_138 (ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm j_23 (ATerm);
ATerm o_23 (ATerm);
ATerm x_23 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm a_24 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm t_13 (ATerm o_141 (ATerm), ATerm e_77, ATerm f_77, ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm e_24 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm g_24 (ATerm);
ATerm l_13 (ATerm k_77, ATerm m_77, ATerm l_77, ATerm);
ATerm m_24 (ATerm);
ATerm u_13 (ATerm i_76, ATerm k_76, ATerm j_76, ATerm);
ATerm u_24 (ATerm);
ATerm v_24 (ATerm);
ATerm w_24 (ATerm);
ATerm v_13 (ATerm z_81, ATerm a_82, ATerm b_82, ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm p_25 (ATerm);
ATerm q_25 (ATerm);
ATerm r_25 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm);
ATerm s_25 (ATerm);
ATerm u_97 (ATerm f_97, ATerm g_97, ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm w_13 (ATerm y_70, ATerm x_70, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm x_13 (ATerm i_82, ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm k_100 (ATerm), ATerm);
ATerm App_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm);
ATerm y_13 (ATerm i_70, ATerm j_70, ATerm k_70, ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm l_103 (ATerm), ATerm);
ATerm Build_1_0 (ATerm m_103 (ATerm), ATerm);
ATerm x_25 (ATerm);
ATerm z_25 (ATerm);
ATerm a_26 (ATerm);
ATerm b_26 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm k_26 (ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm p_26 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm r_26 (ATerm);
ATerm s_26 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm v_26 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm w_26 (ATerm);
ATerm x_26 (ATerm);
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm d_27 (ATerm);
ATerm f_27 (ATerm);
ATerm g_27 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm j_27 (ATerm);
ATerm k_27 (ATerm);
ATerm l_27 (ATerm);
ATerm n_27 (ATerm);
ATerm p_27 (ATerm);
ATerm q_27 (ATerm);
ATerm r_27 (ATerm);
ATerm s_27 (ATerm);
ATerm t_27 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm u_27 (ATerm);
ATerm v_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm c_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm g_28 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm h_28 (ATerm);
ATerm i_28 (ATerm);
ATerm j_28 (ATerm);
ATerm k_28 (ATerm);
ATerm l_28 (ATerm);
ATerm m_28 (ATerm);
ATerm n_28 (ATerm);
ATerm o_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm v_28 (ATerm);
ATerm w_28 (ATerm);
ATerm x_28 (ATerm);
ATerm z_28 (ATerm);
ATerm a_29 (ATerm);
ATerm c_29 (ATerm);
ATerm d_29 (ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm g_115 (ATerm), ATerm);
ATerm f_29 (ATerm);
ATerm j_29 (ATerm);
ATerm k_29 (ATerm);
ATerm split_dynamic_rule_1_0 (ATerm h_141 (ATerm), ATerm);
ATerm l_29 (ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm q_29 (ATerm);
ATerm r_29 (ATerm);
ATerm s_29 (ATerm);
ATerm t_29 (ATerm);
ATerm g_14 (ATerm r_74, ATerm q_74, ATerm);
ATerm listtd_1_0 (ATerm c_121 (ATerm), ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm);
ATerm v_29 (ATerm);
ATerm x_29 (ATerm);
ATerm y_29 (ATerm);
ATerm c_30 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm d_30 (ATerm);
ATerm e_30 (ATerm);
ATerm g_30 (ATerm);
ATerm i_30 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm m_14 (ATerm x_123 (ATerm), ATerm h_47, ATerm g_47, ATerm);
ATerm n_14 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm l_47, ATerm k_47, ATerm);
ATerm o_14 (ATerm s_123 (ATerm), ATerm f_47, ATerm e_47, ATerm);
ATerm genzip_4_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm);
ATerm m_30 (ATerm);
ATerm n_30 (ATerm);
ATerm o_30 (ATerm);
ATerm s_14 (ATerm q_656, ATerm v_656, ATerm h_74, ATerm);
ATerm while_not_2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm);
ATerm p_30 (ATerm);
ATerm s_30 (ATerm);
ATerm t_30 (ATerm);
ATerm w_30 (ATerm);
ATerm x_30 (ATerm);
ATerm y_30 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm a_31 (ATerm);
ATerm b_31 (ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm g_31 (ATerm);
ATerm free_vars_3_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm a_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm d_114 (ATerm), ATerm);
ATerm v_14 (ATerm g_70, ATerm h_70, ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm u_115 (ATerm), ATerm);
ATerm w_14 (ATerm r_130 (ATerm), ATerm u_58, ATerm s_58, ATerm);
ATerm j_31 (ATerm);
ATerm k_31 (ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm x_14 (ATerm a_70, ATerm b_70, ATerm);
ATerm end_scope_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm r_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm u_31 (ATerm);
ATerm v_31 (ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_126 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm j_120 (ATerm), ATerm);
ATerm v_137 (ATerm n_137, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_15 (ATerm m_197, ATerm i_197, ATerm);
ATerm foldr_3_0 (ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm);
ATerm a_32 (ATerm);
ATerm b_32 (ATerm);
ATerm c_32 (ATerm);
ATerm d_32 (ATerm);
ATerm e_32 (ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm f_32 (ATerm);
ATerm g_32 (ATerm);
ATerm h_32 (ATerm);
ATerm m_32 (ATerm);
ATerm n_32 (ATerm);
ATerm o_32 (ATerm);
ATerm p_32 (ATerm);
ATerm q_32 (ATerm);
ATerm r_32 (ATerm);
ATerm s_32 (ATerm);
ATerm t_32 (ATerm);
ATerm u_32 (ATerm);
ATerm v_32 (ATerm);
ATerm w_32 (ATerm);
ATerm x_32 (ATerm);
ATerm z_32 (ATerm);
ATerm a_33 (ATerm);
ATerm b_33 (ATerm);
ATerm c_33 (ATerm);
ATerm d_33 (ATerm);
ATerm e_33 (ATerm);
ATerm f_33 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm Op_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm d_103 (ATerm), ATerm);
ATerm Var_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm g_33 (ATerm);
ATerm h_33 (ATerm);
ATerm i_33 (ATerm);
ATerm j_33 (ATerm);
ATerm k_33 (ATerm);
ATerm l_33 (ATerm);
ATerm m_33 (ATerm);
ATerm n_33 (ATerm);
ATerm p_33 (ATerm);
ATerm q_33 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm u_33 (ATerm);
ATerm at_last_1_0 (ATerm u_120 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm v_33 (ATerm);
ATerm unquote_chars_1_0 (ATerm x_128 (ATerm), ATerm);
ATerm x_157 (ATerm y_151, ATerm z_151, ATerm);
ATerm b_158 (ATerm d_152, ATerm e_152, ATerm);
ATerm c_158 (ATerm g_152, ATerm h_152, ATerm i_152, ATerm);
ATerm d_158 (ATerm p_152, ATerm r_152, ATerm);
ATerm w_33 (ATerm);
ATerm x_33 (ATerm);
ATerm a_34 (ATerm);
ATerm b_34 (ATerm);
ATerm c_34 (ATerm);
ATerm d_34 (ATerm);
ATerm f_34 (ATerm);
ATerm g_34 (ATerm);
ATerm h_34 (ATerm);
ATerm j_34 (ATerm);
ATerm k_34 (ATerm);
ATerm m_34 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm n_34 (ATerm);
ATerm o_34 (ATerm);
ATerm p_34 (ATerm);
ATerm q_34 (ATerm);
ATerm r_34 (ATerm);
ATerm s_34 (ATerm);
ATerm t_34 (ATerm);
ATerm u_34 (ATerm);
ATerm v_34 (ATerm);
ATerm w_34 (ATerm);
ATerm x_34 (ATerm);
ATerm y_34 (ATerm);
ATerm z_34 (ATerm);
ATerm a_35 (ATerm);
ATerm b_35 (ATerm);
ATerm d_35 (ATerm);
ATerm e_35 (ATerm);
ATerm f_35 (ATerm);
ATerm g_35 (ATerm);
ATerm h_35 (ATerm);
ATerm i_35 (ATerm);
ATerm j_35 (ATerm);
ATerm k_35 (ATerm);
ATerm l_35 (ATerm);
ATerm m_35 (ATerm);
ATerm n_35 (ATerm);
ATerm o_35 (ATerm);
ATerm p_35 (ATerm);
ATerm q_35 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm);
ATerm h_15 (ATerm g_60, ATerm h_60, ATerm);
ATerm i_15 (ATerm u_63, ATerm v_63, ATerm);
ATerm k_15 (ATerm k_132 (ATerm), ATerm a_501, ATerm y_63, ATerm);
ATerm j_15 (ATerm q_63, ATerm r_63, ATerm);
ATerm u_35 (ATerm);
ATerm v_35 (ATerm);
ATerm w_35 (ATerm);
ATerm x_35 (ATerm);
ATerm y_35 (ATerm);
ATerm z_35 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_135 (ATerm), ATerm);
ATerm z_162 (ATerm i_162, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_15 (ATerm w_63, ATerm);
ATerm m_15 (ATerm i_60, ATerm j_60, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_36 (ATerm);
ATerm b_36 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_36 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_120 (ATerm), ATerm);
ATerm g_15 (ATerm w_54, ATerm x_54, ATerm);
ATerm debug_1_0 (ATerm i_132 (ATerm), ATerm);
ATerm d_36 (ATerm);
ATerm e_36 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_133 (ATerm), ATerm);
ATerm f_36 (ATerm);
ATerm g_36 (ATerm);
ATerm h_36 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_36 (ATerm);
ATerm j_36 (ATerm);
ATerm k_36 (ATerm);
ATerm l_36 (ATerm);
ATerm m_36 (ATerm);
ATerm n_36 (ATerm);
ATerm o_36 (ATerm);
ATerm p_36 (ATerm);
ATerm q_36 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_15 (ATerm x_64, ATerm y_64, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_36 (ATerm);
ATerm s_36 (ATerm);
ATerm t_36 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_15 (ATerm v_69, ATerm w_69, ATerm u_69, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm u_36 (ATerm);
ATerm v_36 (ATerm);
ATerm w_36 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_15 (ATerm g_57, ATerm h_57, ATerm);
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_36 (ATerm);
ATerm y_36 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_133 (ATerm), ATerm);
ATerm z_36 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_37 (ATerm);
ATerm need_help_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm p_15 (ATerm m_71, ATerm n_71, ATerm);
ATerm Program_1_0 (ATerm k_111 (ATerm), ATerm);
ATerm d_37 (ATerm);
ATerm e_37 (ATerm);
ATerm f_37 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_111 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_37 (ATerm);
ATerm k_37 (ATerm);
ATerm l_37 (ATerm);
ATerm m_37 (ATerm);
ATerm o_37 (ATerm);
ATerm p_37 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm q_37 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_138 (ATerm), ATerm);
ATerm t_37 (ATerm);
ATerm u_37 (ATerm);
ATerm x_37 (ATerm);
ATerm y_37 (ATerm);
ATerm parse_options_1_0 (ATerm m_138 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm);
ATerm c_38 (ATerm);
ATerm i_38 (ATerm);
ATerm j_38 (ATerm);
ATerm k_38 (ATerm);
ATerm l_38 (ATerm);
ATerm iowrap_3_0 (ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm);
ATerm n_38 (ATerm);
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
  t = term_o_38;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_p_38;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_38), j_0), term_q_38);
  s_0 = t;
  t = SSL_printnl(p_0, s_0);
  t = term_s_38;
  t_0 = t;
  t = SSL_exit(t_0);
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
        ATerm h_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL;
        t = z_0;
        t = new_0_0(t);
        h_1 = t;
        t = new_0_0(t);
        r_1 = t;
        t = new_0_0(t);
        s_1 = t;
        t = new_0_0(t);
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_1), s_1), r_1), h_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, h_1), (ATerm) ATmakeAppl(sym_Var_1, s_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, b_1, (ATerm)ATmakeAppl(sym_Var_1, h_1), (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_BAM_3, y_0, (ATerm)ATmakeAppl(sym_Var_1, s_1), (ATerm) ATmakeAppl(sym_Var_1, u_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_t_38, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_1)), (ATerm) ATmakeAppl(sym_Var_1, r_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_1 = ATgetArgument(t, 0);
          {
            ATerm x_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL;
            t = z_0;
            t = new_0_0(t);
            x_1 = t;
            t = b_1;
            {
              ATerm z_8 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((a_2 != NULL) && (a_2 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      a_2 = ATgetArgument(t, 0);
                    if(((b_2 != NULL) && (b_2 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      b_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_1);
                return(t);
              }
              t = oncetd_1_0(z_8, t);
              d_2 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_38, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_2)), not_null(a_2))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_1)), (ATerm) ATmakeAppl(sym_Build_1, d_2))));
            }
          }
        }
      else
        {
          ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              b_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_0;
          t = new_0_0(t);
          f_2 = t;
          t = new_0_0(t);
          g_2 = t;
          t = b_1;
          {
            ATerm a_9 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((h_2 != NULL) && (h_2 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    h_2 = ATgetArgument(t, 0);
                  if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    i_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_2);
              return(t);
            }
            t = oncetd_1_0(a_9, t);
            j_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_2)), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_38, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_2))))), (ATerm)ATmakeAppl(sym_Var_1, f_2), (ATerm) ATmakeAppl(sym_Op_2, term_v_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_2)), not_null(h_2)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  l_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      m_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,u_2 = NULL;
        t = l_2;
        t = new_0_0(t);
        p_2 = t;
        t = m_2;
        {
          ATerm b_9 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_2 != NULL) && (r_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_2 = ATgetArgument(t, 0);
                if(((q_2 != NULL) && (q_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_2), not_null(r_2));
            return(t);
          }
          t = pat_td_1_0(b_9, t);
          u_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_38, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_2))))));
        }
        ;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        {
          ATerm z_38 = t;
          int a_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
              t = l_2;
              t = new_0_0(t);
              x_2 = t;
              t = m_2;
              {
                ATerm c_9 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_2 != NULL) && (y_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, x_2);
                  return(t);
                }
                t = pat_td_1_0(c_9, t);
                z_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_2)), not_null(y_2))));
              }
              ;
              LocalPopChoice(a_39);
            }
          else
            {
              t = z_38;
              {
                ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
                t = l_2;
                t = new_0_0(t);
                c_3 = t;
                t = m_2;
                {
                  ATerm d_9 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((d_3 != NULL) && (d_3 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_3 = ATgetArgument(t, 0);
                        if(((e_3 != NULL) && (e_3 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_3 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_3);
                    return(t);
                  }
                  t = pat_td_1_0(d_9, t);
                  f_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_3)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_3)), not_null(d_3)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,v_0 = NULL,w_0 = NULL;
  o_3 = t;
  if(match_cons(t, sym_As_2))
    {
      i_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  g_3 = t;
  t = i_3;
  t = l_100(t);
  m_3 = t;
  t = k_3;
  t = m_100(t);
  n_3 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, m_3, n_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, g_3);
  return(t);
}
ATerm CallT_3_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,c_1 = NULL,e_1 = NULL;
  d_4 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
      y_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_4);
  s_3 = t;
  t = w_3;
  t = i_103(t);
  z_3 = t;
  t = x_3;
  t = j_103(t);
  b_4 = t;
  t = y_3;
  t = k_103(t);
  c_4 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, z_3, b_4, c_4);
  c_1 = t;
  t = SSLsetAnnotations(c_1, s_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,f_1 = NULL,i_1 = NULL;
  v_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
      q_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_4);
  l_4 = t;
  t = m_4;
  t = k_104(t);
  r_4 = t;
  t = p_4;
  t = l_104(t);
  t_4 = t;
  t = q_4;
  t = m_104(t);
  u_4 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, r_4, t_4, u_4);
  f_1 = t;
  t = SSLsetAnnotations(f_1, l_4);
  return(t);
}
ATerm Explode_2_0 (ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,c_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,k_1 = NULL,l_1 = NULL;
  i_5 = t;
  if(match_cons(t, sym_Explode_2))
    {
      z_4 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_5);
  y_4 = t;
  t = z_4;
  t = e_100(t);
  g_5 = t;
  t = c_5;
  t = f_100(t);
  h_5 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, g_5, h_5);
  k_1 = t;
  t = SSLsetAnnotations(k_1, y_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm a_143 (ATerm), ATerm t)
{
  ATerm b_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_143(t);
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = b_39;
      {
        ATerm h_39 = t;
        int i_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_9 (ATerm t)
            {
              ATerm f_9 (ATerm t)
              {
                t = pat_td_1_0(a_143, t);
                return(t);
              }
              t = fetch_1_0(f_9, t);
              return(t);
            }
            t = Op_2_0(_id, e_9, t);
            ;
            LocalPopChoice(i_39);
          }
        else
          {
            t = h_39;
            {
              ATerm j_39 = t;
              int k_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_9 (ATerm t)
                  {
                    t = pat_td_1_0(a_143, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, g_9, t);
                  ;
                  LocalPopChoice(k_39);
                }
              else
                {
                  t = j_39;
                  {
                    ATerm l_39 = t;
                    int m_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_9 (ATerm t)
                        {
                          t = pat_td_1_0(a_143, t);
                          return(t);
                        }
                        t = Explode_2_0(h_9, _id, t);
                        ;
                        LocalPopChoice(m_39);
                      }
                    else
                      {
                        t = l_39;
                        {
                          ATerm n_39 = t;
                          int o_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_9 (ATerm t)
                              {
                                ATerm l_9 (ATerm t)
                                {
                                  t = pat_td_1_0(a_143, t);
                                  return(t);
                                }
                                t = fetch_1_0(l_9, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, i_9, t);
                              ;
                              LocalPopChoice(o_39);
                            }
                          else
                            {
                              t = n_39;
                              {
                                ATerm p_39 = t;
                                int q_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_9 (ATerm t)
                                    {
                                      ATerm o_9 (ATerm t)
                                      {
                                        t = pat_td_1_0(a_143, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(o_9, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, n_9, t);
                                    ;
                                    LocalPopChoice(q_39);
                                  }
                                else
                                  {
                                    t = p_39;
                                    {
                                      ATerm p_9 (ATerm t)
                                      {
                                        t = pat_td_1_0(a_143, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, p_9, t);
                                    }
                                  }
                              }
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
  ATerm m_5 = NULL,n_5 = NULL;
  m_5 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
        t = m_5;
        t = new_0_0(t);
        q_5 = t;
        t = n_5;
        {
          ATerm q_9 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_5 != NULL) && (t_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_5 = ATgetArgument(t, 0);
                if(((u_5 != NULL) && (u_5 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, q_5);
            return(t);
          }
          t = pat_td_1_0(q_9, t);
          v_5 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_39, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_5)), not_null(t_5))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_5)))), (ATerm) ATmakeAppl(sym_Build_1, v_5)));
        }
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = r_39;
        {
          ATerm y_39 = t;
          int z_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
              t = m_5;
              t = new_0_0(t);
              a_6 = t;
              t = n_5;
              {
                ATerm r_9 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_6 != NULL) && (b_6 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_6 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_6);
                  return(t);
                }
                t = pat_td_1_0(r_9, t);
                c_6 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_6)))), (ATerm) ATmakeAppl(sym_Build_1, c_6)));
              }
              ;
              LocalPopChoice(z_39);
            }
          else
            {
              t = y_39;
              {
                ATerm i_6 = NULL,k_6 = NULL,m_6 = NULL,n_6 = NULL;
                t = m_5;
                t = new_0_0(t);
                i_6 = t;
                t = n_5;
                {
                  ATerm z_9 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((k_6 != NULL) && (k_6 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_6 = ATgetArgument(t, 0);
                        if(((m_6 != NULL) && (m_6 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_6);
                    return(t);
                  }
                  t = pat_td_1_0(z_9, t);
                  n_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_6), not_null(m_6), (ATerm) ATmakeAppl(sym_Var_1, i_6))), (ATerm) ATmakeAppl(sym_Build_1, n_6)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm a_40 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_40;
    }
  return(t);
}
ATerm d_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm u_6 = NULL,z_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_6 = ATgetFirst((ATermList) t);
      z_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_6, z_6);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm a_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_40 = ATgetArgument(t, 0);
      if(match_cons(c_40, sym__2))
        {
          a_7 = ATgetArgument(c_40, 0);
          e_7 = ATgetArgument(c_40, 1);
        }
      else
        _fail(t);
      {
        ATerm d_40 = ATgetArgument(t, 1);
        if(match_cons(d_40, sym__2))
          {
            f_7 = ATgetArgument(d_40, 0);
            g_7 = ATgetArgument(d_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_7), a_7), (ATerm) ATinsert(CheckATermList(g_7), e_7));
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = genzip_4_0(h_10, i_10, j_10, _id, t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_7 = ATgetFirst((ATermList) t);
      i_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_7, i_7);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_40 = ATgetArgument(t, 0);
      if(match_cons(e_40, sym__2))
        {
          j_7 = ATgetArgument(e_40, 0);
          k_7 = ATgetArgument(e_40, 1);
        }
      else
        _fail(t);
      {
        ATerm f_40 = ATgetArgument(t, 1);
        if(match_cons(f_40, sym__2))
          {
            m_7 = ATgetArgument(f_40, 0);
            n_7 = ATgetArgument(f_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_7), j_7), (ATerm) ATinsert(CheckATermList(n_7), k_7));
  return(t);
}
ATerm u_12 (ATerm q_88, ATerm r_88, ATerm s_88, ATerm t)
{
  ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL;
  t = s_88;
  t = fetch_1_0(c_10, t);
  t = s_88;
  t = genzip_4_0(d_10, e_10, f_10, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, g_10, t);
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      {
        ATerm g_40 = ATgetArgument(t, 1);
        if(match_cons(g_40, sym__2))
          {
            r_6 = ATgetArgument(g_40, 0);
            s_6 = ATgetArgument(g_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_6), (ATerm) ATmakeAppl(sym_CallT_3, q_88, r_88, s_6)));
  return(t);
}
ATerm d_8 (ATerm s_7, ATerm t)
{
  ATerm u_7 = NULL;
  t = s_7;
  {
    ATerm h_40 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_40;
      }
    t = new_0_0(t);
    u_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_7), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_7)))), (ATerm) ATmakeAppl(sym_Var_1, u_7)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_7 = ATgetArgument(t, 0);
      {
        ATerm i_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_8(w_7, t);
            ;
            LocalPopChoice(j_40);
          }
        else
          {
            t = i_40;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_40, (ATerm) ATmakeAppl(sym_Var_1, x_7)));
          }
      }
    }
  else
    {
      t = d_8(w_7, t);
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm l_40 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_40;
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm k_2 = NULL,o_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_2 = ATgetFirst((ATermList) t);
      o_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_2, o_2);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,w_2 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_40 = ATgetArgument(t, 0);
      if(match_cons(m_40, sym__2))
        {
          s_2 = ATgetArgument(m_40, 0);
          t_2 = ATgetArgument(m_40, 1);
        }
      else
        _fail(t);
      {
        ATerm n_40 = ATgetArgument(t, 1);
        if(match_cons(n_40, sym__2))
          {
            w_2 = ATgetArgument(n_40, 0);
            b_3 = ATgetArgument(n_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_2), s_2), (ATerm) ATinsert(CheckATermList(b_3), t_2));
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = genzip_4_0(t_10, v_10, w_10, _id, t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_3 = ATgetFirst((ATermList) t);
      j_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_3, j_3);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm l_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_40 = ATgetArgument(t, 0);
      if(match_cons(o_40, sym__2))
        {
          l_3 = ATgetArgument(o_40, 0);
          r_3 = ATgetArgument(o_40, 1);
        }
      else
        _fail(t);
      {
        ATerm p_40 = ATgetArgument(t, 1);
        if(match_cons(p_40, sym__2))
          {
            t_3 = ATgetArgument(p_40, 0);
            u_3 = ATgetArgument(p_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_3), l_3), (ATerm) ATinsert(CheckATermList(u_3), r_3));
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm q_40 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_40;
    }
  return(t);
}
ATerm z_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_5 = ATgetFirst((ATermList) t);
      e_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_5, e_5);
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm f_5 = NULL,l_5 = NULL,p_5 = NULL,r_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_40 = ATgetArgument(t, 0);
      if(match_cons(r_40, sym__2))
        {
          f_5 = ATgetArgument(r_40, 0);
          l_5 = ATgetArgument(r_40, 1);
        }
      else
        _fail(t);
      {
        ATerm s_40 = ATgetArgument(t, 1);
        if(match_cons(s_40, sym__2))
          {
            p_5 = ATgetArgument(s_40, 0);
            r_5 = ATgetArgument(s_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_5), f_5), (ATerm) ATinsert(CheckATermList(r_5), l_5));
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = genzip_4_0(d_11, e_11, j_11, _id, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm s_5 = NULL,x_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_5 = ATgetFirst((ATermList) t);
      x_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_5, x_5);
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,d_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_40 = ATgetArgument(t, 0);
      if(match_cons(t_40, sym__2))
        {
          y_5 = ATgetArgument(t_40, 0);
          z_5 = ATgetArgument(t_40, 1);
        }
      else
        _fail(t);
      {
        ATerm u_40 = ATgetArgument(t, 1);
        if(match_cons(u_40, sym__2))
          {
            d_6 = ATgetArgument(u_40, 0);
            e_6 = ATgetArgument(u_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_6), y_5), (ATerm) ATinsert(CheckATermList(e_6), z_5));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      f_11 = ATgetArgument(t, 2);
      {
        ATerm o_1 = NULL,p_1 = NULL,y_1 = NULL;
        t = f_11;
        t = fetch_1_0(k_10, t);
        t = f_11;
        t = genzip_4_0(n_10, o_10, r_10, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, s_10, t);
        if(match_cons(t, sym__2))
          {
            o_1 = ATgetArgument(t, 0);
            {
              ATerm v_40 = ATgetArgument(t, 1);
              if(match_cons(v_40, sym__2))
                {
                  p_1 = ATgetArgument(v_40, 0);
                  y_1 = ATgetArgument(v_40, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_1), (ATerm) ATmakeAppl(sym_PrimT_3, h_11, i_11, y_1)));
      }
    }
  else
    {
      ATerm s_4 = NULL,a_5 = NULL,b_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_11 = ATgetArgument(t, 0);
          i_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_11;
      t = fetch_1_0(x_10, t);
      t = i_11;
      t = genzip_4_0(z_10, a_11, b_11, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, c_11, t);
      if(match_cons(t, sym__2))
        {
          s_4 = ATgetArgument(t, 0);
          {
            ATerm w_40 = ATgetArgument(t, 1);
            if(match_cons(w_40, sym__2))
              {
                a_5 = ATgetArgument(w_40, 0);
                b_5 = ATgetArgument(w_40, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_5), (ATerm) ATmakeAppl(sym_PrimT_3, h_11, (ATerm)ATempty, b_5)));
    }
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
    }
  t = repeat_1_0(l_11, t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm b_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = b_41;
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
            s_11 = t;
            if(match_cons(t, sym_CallT_3))
              {
                t_11 = ATgetArgument(t, 0);
                u_11 = ATgetArgument(t, 1);
                v_11 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_11;
            t = u_12(t_11, u_11, v_11, t);
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
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_41);
                }
              else
                {
                  t = h_41;
                  {
                    ATerm j_41 = t;
                    int k_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(k_41);
                      }
                    else
                      {
                        t = j_41;
                        {
                          ATerm l_41 = t;
                          int m_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_41 = t;
                              int o_41 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_12 = NULL,g_12 = NULL,h_12 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      e_12 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = e_12;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      g_12 = ATgetArgument(t, 0);
                                      {
                                        ATerm p_41 = t;
                                        int q_41 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm l_12 = NULL,x_12 = NULL;
                                            t = e_12;
                                            {
                                              ATerm m_11 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm r_41 = ATgetArgument(t, 0);
                                                    if(match_cons(r_41, sym_Match_1))
                                                      {
                                                        if(((l_12 != NULL) && (l_12 != ATgetArgument(r_41, 0))))
                                                          _fail(ATgetArgument(r_41, 0));
                                                        else
                                                          l_12 = ATgetArgument(r_41, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(l_12);
                                                return(t);
                                              }
                                              t = pat_td_1_0(m_11, t);
                                              x_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                                            }
                                            ;
                                            LocalPopChoice(q_41);
                                          }
                                        else
                                          {
                                            t = p_41;
                                            t = g_12;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          g_12 = ATgetArgument(t, 0);
                                          h_12 = ATgetArgument(t, 1);
                                          {
                                            ATerm s_41 = t;
                                            int t_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_14 = NULL,d_15 = NULL;
                                                t = e_12;
                                                {
                                                  ATerm n_11 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm u_41 = ATgetArgument(t, 0);
                                                        if(match_cons(u_41, sym_Match_1))
                                                          {
                                                            if(((p_14 != NULL) && (p_14 != ATgetArgument(u_41, 0))))
                                                              _fail(ATgetArgument(u_41, 0));
                                                            else
                                                              p_14 = ATgetArgument(u_41, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(p_14);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(n_11, t);
                                                  d_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, d_15);
                                                }
                                                ;
                                                LocalPopChoice(t_41);
                                              }
                                            else
                                              {
                                                t = s_41;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, g_12, h_12);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm m_16 = NULL,n_16 = NULL;
                                          t = e_12;
                                          {
                                            ATerm o_11 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm v_41 = ATgetArgument(t, 0);
                                                  if(match_cons(v_41, sym_Match_1))
                                                    {
                                                      if(((m_16 != NULL) && (m_16 != ATgetArgument(v_41, 0))))
                                                        _fail(ATgetArgument(v_41, 0));
                                                      else
                                                        m_16 = ATgetArgument(v_41, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(m_16);
                                              return(t);
                                            }
                                            t = pat_td_1_0(o_11, t);
                                            n_16 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, n_16);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(o_41);
                                }
                              else
                                {
                                  t = n_41;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(m_41);
                            }
                          else
                            {
                              t = l_41;
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
  t = topdown_1_0(k_11, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,d_17 = NULL,e_17 = NULL,n_1 = NULL,v_1 = NULL;
  e_17 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
      v_16 = ATgetArgument(t, 2);
      w_16 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_17);
  s_16 = t;
  t = t_16;
  t = w_105(t);
  x_16 = t;
  t = u_16;
  t = x_105(t);
  y_16 = t;
  t = v_16;
  t = y_105(t);
  z_16 = t;
  t = w_16;
  t = z_105(t);
  d_17 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_16, y_16, z_16, d_17);
  n_1 = t;
  t = SSLsetAnnotations(n_1, s_16);
  return(t);
}
ATerm SDef_3_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,e_2 = NULL,n_2 = NULL;
  s_17 = t;
  if(match_cons(t, sym_SDef_3))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
      o_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_17);
  l_17 = t;
  t = m_17;
  t = t_105(t);
  p_17 = t;
  t = n_17;
  t = u_105(t);
  q_17 = t;
  t = o_17;
  t = v_105(t);
  r_17 = t;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, p_17, q_17, r_17);
  e_2 = t;
  t = SSLsetAnnotations(e_2, l_17);
  return(t);
}
ATerm Strategies_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,e_18 = NULL,f_18 = NULL,v_2 = NULL,a_3 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  y_17 = t;
  t = z_17;
  t = r_98(t);
  e_18 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_18);
  v_2 = t;
  t = SSLsetAnnotations(v_2, y_17);
  return(t);
}
ATerm Specification_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,p_3 = NULL,q_3 = NULL;
  l_18 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_18);
  i_18 = t;
  t = j_18;
  t = w_98(t);
  k_18 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_18);
  p_3 = t;
  t = SSLsetAnnotations(p_3, i_18);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm w_133 (ATerm), ATerm t)
{
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_18 = NULL,s_18 = NULL;
      q_18 = t;
      t = term_z_41;
      t = get_config_0_0(t);
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_18, term_a_42);
      t = geq_0_0(t);
      t = q_18;
      t = w_133(t);
      ;
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
    }
  return(t);
}
ATerm q_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if(((ATgetType(b_42) != AT_LIST) || !(ATisEmpty(b_42))))
        _fail(t);
      {
        ATerm c_42 = ATgetArgument(t, 1);
        if(((ATgetType(c_42) != AT_LIST) || !(ATisEmpty(c_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_42 = ATgetArgument(t, 0);
      if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
        {
          k_19 = ATgetFirst((ATermList) d_42);
          l_19 = (ATerm) ATgetNext((ATermList) d_42);
        }
      else
        _fail(t);
      {
        ATerm e_42 = ATgetArgument(t, 1);
        if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
          {
            q_19 = ATgetFirst((ATermList) e_42);
            r_19 = (ATerm) ATgetNext((ATermList) e_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_19, q_19), (ATerm) ATmakeAppl(sym__2, l_19, r_19));
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_19), s_19);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm v_19 = NULL,x_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_19;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm h_42 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
            b_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(g_42);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_20, x_19, b_20);
      }
    else
      {
        t = f_42;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm q_42 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
            b_20 = ATgetArgument(t, 2);
            c_20 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_20, x_19, b_20, c_20);
      }
  }
  return(t);
}
ATerm z_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_42 = ATgetArgument(t, 0);
      if(((ATgetType(r_42) != AT_LIST) || !(ATisEmpty(r_42))))
        _fail(t);
      {
        ATerm s_42 = ATgetArgument(t, 1);
        if(((ATgetType(s_42) != AT_LIST) || !(ATisEmpty(s_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_42 = ATgetArgument(t, 0);
      if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
        {
          w_20 = ATgetFirst((ATermList) t_42);
          x_20 = (ATerm) ATgetNext((ATermList) t_42);
        }
      else
        _fail(t);
      {
        ATerm u_42 = ATgetArgument(t, 1);
        if(((ATgetType(u_42) == AT_LIST) && !(ATisEmpty(u_42))))
          {
            a_21 = ATgetFirst((ATermList) u_42);
            g_21 = (ATerm) ATgetNext((ATermList) u_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_20, a_21), (ATerm) ATmakeAppl(sym__2, x_20, g_21));
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_21), j_21);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_22;
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_22);
      }
    else
      {
        t = v_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_42 = ATgetArgument(t, 0);
            d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_22, d_22);
      }
  }
  return(t);
}
ATerm k_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
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
ATerm m_12 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_43 = ATgetArgument(t, 0);
      if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
        {
          m_22 = ATgetFirst((ATermList) f_43);
          n_22 = (ATerm) ATgetNext((ATermList) f_43);
        }
      else
        _fail(t);
      {
        ATerm g_43 = ATgetArgument(t, 1);
        if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
          {
            p_22 = ATgetFirst((ATermList) g_43);
            q_22 = (ATerm) ATgetNext((ATermList) g_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_22, p_22), (ATerm) ATmakeAppl(sym__2, n_22, q_22));
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm t_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_22), t_22);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm b_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_23;
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_23);
      }
    else
      {
        t = h_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_43 = ATgetArgument(t, 0);
            d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_23, d_23);
      }
  }
  return(t);
}
ATerm s_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      if(((ATgetType(l_43) != AT_LIST) || !(ATisEmpty(l_43))))
        _fail(t);
      {
        ATerm m_43 = ATgetArgument(t, 1);
        if(((ATgetType(m_43) != AT_LIST) || !(ATisEmpty(m_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,p_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_43 = ATgetArgument(t, 0);
      if(((ATgetType(n_43) == AT_LIST) && !(ATisEmpty(n_43))))
        {
          m_23 = ATgetFirst((ATermList) n_43);
          n_23 = (ATerm) ATgetNext((ATermList) n_43);
        }
      else
        _fail(t);
      {
        ATerm o_43 = ATgetArgument(t, 1);
        if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
          {
            p_23 = ATgetFirst((ATermList) o_43);
            t_23 = (ATerm) ATgetNext((ATermList) o_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_23, p_23), (ATerm) ATmakeAppl(sym__2, n_23, t_23));
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm u_23 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_24), u_23);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm f_24 = NULL,h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      f_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_24;
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_24);
      }
    else
      {
        t = w_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_43 = ATgetArgument(t, 0);
            h_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_24, h_24);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm a_44 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11 (ATerm t)
      {
        ATerm i_19 = NULL,j_19 = NULL;
        i_19 = t;
        t = m_142(t);
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_19, j_19);
        t = genzip_4_0(q_11, r_11, w_11, x_11, t);
        return(t);
      }
      t = Let_2_0(p_11, _id, t);
      ;
      LocalPopChoice(b_44);
    }
  else
    {
      t = a_44;
      {
        ATerm c_44 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_11 (ATerm t)
            {
              ATerm p_20 = NULL,q_20 = NULL;
              p_20 = t;
              t = m_142(t);
              q_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
              t = genzip_4_0(z_11, a_12, b_12, c_12, t);
              return(t);
            }
            t = SDef_3_0(_id, y_11, _id, t);
            ;
            LocalPopChoice(d_44);
          }
        else
          {
            t = c_44;
            {
              ATerm j_44 = t;
              int k_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_12 (ATerm t)
                  {
                    ATerm k_22 = NULL,l_22 = NULL;
                    k_22 = t;
                    t = m_142(t);
                    l_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_22, l_22);
                    t = genzip_4_0(k_12, m_12, n_12, q_12, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, j_12, _id, _id, t);
                  ;
                  LocalPopChoice(k_44);
                }
              else
                {
                  t = j_44;
                  {
                    ATerm l_44 = t;
                    int m_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_12 (ATerm t)
                        {
                          ATerm k_23 = NULL,l_23 = NULL;
                          k_23 = t;
                          t = m_142(t);
                          l_23 = t;
                          t = (ATerm) ATmakeAppl(sym__2, k_23, l_23);
                          t = genzip_4_0(s_12, t_12, v_12, w_12, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, r_12, _id, _id, t);
                        ;
                        LocalPopChoice(m_44);
                      }
                    else
                      {
                        t = l_44;
                        {
                          ATerm f_13 (ATerm t)
                          {
                            ATerm o_24 = NULL;
                            t = m_142(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                o_24 = ATgetFirst((ATermList) t);
                                {
                                  ATerm n_44 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = o_24;
                            return(t);
                          }
                          t = Rec_2_0(f_13, _id, t);
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
ATerm Rec_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,t_24 = NULL,x_24 = NULL,y_24 = NULL,v_3 = NULL,a_4 = NULL;
  y_24 = t;
  if(match_cons(t, sym_Rec_2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_24);
  p_24 = t;
  t = q_24;
  t = b_104(t);
  t_24 = t;
  t = r_24;
  t = c_104(t);
  x_24 = t;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, t_24, x_24);
  v_3 = t;
  t = SSLsetAnnotations(v_3, p_24);
  return(t);
}
ATerm Let_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,e_4 = NULL,f_4 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_25 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  j_25 = t;
  t = k_25;
  t = e_103(t);
  m_25 = t;
  t = l_25;
  t = f_103(t);
  n_25 = t;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_25, n_25);
  e_4 = t;
  t = SSLsetAnnotations(e_4, j_25);
  return(t);
}
ATerm sboundin_3_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm t)
{
  ATerm o_44 = t;
  int p_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(n_142, n_142, t);
      ;
      LocalPopChoice(p_44);
    }
  else
    {
      t = o_44;
      {
        ATerm q_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(p_142, p_142, n_142, t);
            ;
            LocalPopChoice(r_44);
          }
        else
          {
            t = q_44;
            {
              ATerm s_44 = t;
              int t_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(p_142, p_142, p_142, n_142, t);
                  ;
                  LocalPopChoice(t_44);
                }
              else
                {
                  t = s_44;
                  t = Rec_2_0(p_142, n_142, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm v_25 = NULL;
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_25 = ATgetArgument(t, 0);
          {
            ATerm w_44 = ATgetArgument(t, 1);
          }
          {
            ATerm x_44 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_44);
      t = v_25;
    }
  else
    {
      t = u_44;
      if(match_cons(t, sym_SDefT_4))
        {
          v_25 = ATgetArgument(t, 0);
          {
            ATerm y_44 = ATgetArgument(t, 1);
          }
          {
            ATerm z_44 = ATgetArgument(t, 2);
          }
          {
            ATerm a_45 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_25;
    }
  return(t);
}
ATerm z_12 (ATerm h_79, ATerm g_79, ATerm t)
{
  t = h_79;
  t = map_1_0(g_13, t);
  return(t);
}
ATerm rename_4_0 (ATerm i_139 (ATerm (ATerm), ATerm), ATerm j_139 (ATerm), ATerm k_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_27, (ATerm) ATempty);
  {
    ATerm h_30 (ATerm t)
    {
      ATerm m_13 (ATerm t)
      {
        ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
        z_29 = t;
        if(match_cons(t, sym__2))
          {
            a_30 = ATgetArgument(t, 0);
            b_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm b_45 = t;
          int c_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_13 (ATerm t)
              {
                ATerm f_30 = NULL;
                f_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_30, b_30);
                t = lookup_0_0(t);
                return(t);
              }
              t = a_30;
              t = i_139(p_13, t);
              ;
              LocalPopChoice(c_45);
            }
          else
            {
              t = b_45;
              {
                ATerm t_6 = NULL,v_6 = NULL,w_6 = NULL;
                t = z_29;
                t = o_13(j_139, l_139, a_30, b_30, t);
                if(match_cons(t, sym__3))
                  {
                    t_6 = ATgetArgument(t, 0);
                    v_6 = ATgetArgument(t, 1);
                    w_6 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = n_13(h_30, k_139, t_6, v_6, w_6, t);
              }
            }
        }
        return(t);
      }
      t = env_alltd_1_0(m_13, t);
      return(t);
    }
    t = h_30(t);
  }
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm d_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = d_45;
      {
        ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            i_32 = ATgetArgument(t, 0);
            j_32 = ATgetArgument(t, 1);
            k_32 = ATgetArgument(t, 2);
            l_32 = ATgetArgument(t, 3);
            t = k_32;
            t = map_1_0(b_14, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                i_32 = ATgetArgument(t, 0);
                j_32 = ATgetArgument(t, 1);
                k_32 = ATgetArgument(t, 2);
                l_32 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = k_32;
            t = map_1_0(c_14, t);
          }
      }
    }
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm y_32 = NULL;
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_32 = ATgetArgument(t, 0);
          {
            ATerm l_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_45);
      t = y_32;
    }
  else
    {
      t = j_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_32;
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm o_33 = NULL;
  ATerm m_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_33 = ATgetArgument(t, 0);
          {
            ATerm r_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_45);
      t = o_33;
    }
  else
    {
      t = m_45;
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
ATerm d_14 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,y_33 = NULL,z_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
      t = r_33;
      t = z_12(s_33, t_33, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_33 = ATgetArgument(t, 0);
          t_33 = ATgetArgument(t, 1);
          y_33 = ATgetArgument(t, 2);
          t = t_33;
          t = map_1_0(e_14, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              s_33 = ATgetArgument(t, 0);
              t_33 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, s_33);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  s_33 = ATgetArgument(t, 0);
                  t_33 = ATgetArgument(t, 1);
                  y_33 = ATgetArgument(t, 2);
                  z_33 = ATgetArgument(t, 3);
                  t = t_33;
                  t = map_1_0(f_14, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_33 = ATgetArgument(t, 0);
                      t_33 = ATgetArgument(t, 1);
                      y_33 = ATgetArgument(t, 2);
                      z_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_33;
                  t = map_1_0(h_14, t);
                }
            }
        }
    }
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm l_34 = NULL;
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_34 = ATgetArgument(t, 0);
          {
            ATerm u_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_45);
      t = l_34;
    }
  else
    {
      t = s_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_34;
    }
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm c_35 = NULL;
  ATerm v_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_35 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_45);
      t = c_35;
    }
  else
    {
      t = v_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_35;
    }
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm c_37 = NULL;
  ATerm a_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_37 = ATgetArgument(t, 0);
          {
            ATerm d_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_46);
      t = c_37;
    }
  else
    {
      t = a_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_37;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, s_13, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, d_14, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm b_13 (ATerm k_86, ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  t = k_86;
  {
    ATerm i_14 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm e_46 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) e_46) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm i_46 = ATgetArgument(t, 1);
            if(((ATgetType(i_46) == AT_LIST) && !(ATisEmpty(i_46))))
              {
                ATerm j_46 = ATgetFirst((ATermList) i_46);
                if(match_cons(j_46, sym_Var_1))
                  {
                    ATerm l_46 = ATgetArgument(j_46, 0);
                    if(match_cons(l_46, sym_ListVar_1))
                      {
                        if(((g_37 != NULL) && (g_37 != ATgetArgument(l_46, 0))))
                          _fail(ATgetArgument(l_46, 0));
                        else
                          g_37 = ATgetArgument(l_46, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm k_46 = (ATerm) ATgetNext((ATermList) i_46);
                  if(((ATgetType(k_46) == AT_LIST) && !(ATisEmpty(k_46))))
                    {
                      ATerm m_46 = ATgetFirst((ATermList) k_46);
                      if(match_cons(m_46, sym_Op_2))
                        {
                          ATerm o_46 = ATgetArgument(m_46, 0);
                          if((ATgetSymbol((ATermAppl) o_46) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm p_46 = ATgetArgument(m_46, 1);
                            if(((ATgetType(p_46) != AT_LIST) || !(ATisEmpty(p_46))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm n_46 = (ATerm) ATgetNext((ATermList) k_46);
                        if(((ATgetType(n_46) != AT_LIST) || !(ATisEmpty(n_46))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_37));
      return(t);
    }
    t = oncetd_1_0(i_14, t);
    h_37 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, h_37);
  }
  return(t);
}
ATerm c_13 (ATerm h_86, ATerm t)
{
  ATerm i_37 = NULL,n_37 = NULL;
  t = h_86;
  {
    ATerm k_14 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm r_46 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) r_46) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm s_46 = ATgetArgument(t, 1);
            if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
              {
                ATerm t_46 = ATgetFirst((ATermList) s_46);
                if(match_cons(t_46, sym_Var_1))
                  {
                    ATerm v_46 = ATgetArgument(t_46, 0);
                    if(match_cons(v_46, sym_ListVar_1))
                      {
                        if(((i_37 != NULL) && (i_37 != ATgetArgument(v_46, 0))))
                          _fail(ATgetArgument(v_46, 0));
                        else
                          i_37 = ATgetArgument(v_46, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm u_46 = (ATerm) ATgetNext((ATermList) s_46);
                  if(((ATgetType(u_46) == AT_LIST) && !(ATisEmpty(u_46))))
                    {
                      ATerm w_46 = ATgetFirst((ATermList) u_46);
                      if(match_cons(w_46, sym_Op_2))
                        {
                          ATerm y_46 = ATgetArgument(w_46, 0);
                          if((ATgetSymbol((ATermAppl) y_46) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm z_46 = ATgetArgument(w_46, 1);
                            if(((ATgetType(z_46) != AT_LIST) || !(ATisEmpty(z_46))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm x_46 = (ATerm) ATgetNext((ATermList) u_46);
                        if(((ATgetType(x_46) != AT_LIST) || !(ATisEmpty(x_46))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_37));
      return(t);
    }
    t = oncetd_1_0(k_14, t);
    n_37 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, n_37);
  }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm l_14 (ATerm t)
        {
          ATerm c_47 = t;
          int d_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_0, t);
              ;
              LocalPopChoice(d_47);
            }
          else
            {
              t = c_47;
            }
          return(t);
        }
        t = Cons_2_0(_id, l_14, t);
      }
      ;
      LocalPopChoice(b_47);
    }
  else
    {
      t = a_47;
      {
        ATerm q_14 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, q_14, t);
      }
    }
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm e_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_47), term_n_47));
  return(t);
}
ATerm u_14 (ATerm t)
{
  ATerm o_47 = t;
  int p_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_39 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_39, term_n_47);
      ;
      LocalPopChoice(p_47);
    }
  else
    {
      t = o_47;
    }
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm u_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_39, term_n_47);
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm q_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_39 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, w_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_47), term_n_47));
      ;
      LocalPopChoice(r_47);
    }
  else
    {
      t = q_47;
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm c_41 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_41, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_47), term_n_47));
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_41 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, e_41, term_n_47);
      ;
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, g_38, h_38);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          g_38 = ATgetArgument(t, 0);
          t = g_38;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_37 = ATgetFirst((ATermList) t);
              w_37 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_37, (ATerm) ATmakeAppl(sym_LChoices_1, w_37));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_47;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              g_38 = ATgetArgument(t, 0);
              t = g_38;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_37 = ATgetFirst((ATermList) t);
                  w_37 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_37, (ATerm) ATmakeAppl(sym_Choices_1, w_37));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_u_47;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  g_38 = ATgetArgument(t, 0);
                  t = g_38;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_37 = ATgetFirst((ATermList) t);
                      w_37 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_37, (ATerm) ATmakeAppl(sym_Seqs_1, w_37));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_40;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_38 = ATgetArgument(t, 0);
                      h_38 = ATgetArgument(t, 1);
                      e_38 = ATgetArgument(t, 2);
                      d_38 = ATgetArgument(t, 3);
                      {
                        ATerm c_39 = NULL,d_39 = NULL;
                        t = h_38;
                        t = map1_1_0(r_14, t);
                        c_39 = t;
                        t = e_38;
                        t = map1_1_0(u_14, t);
                        d_39 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, g_38, c_39, d_39, d_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          g_38 = ATgetArgument(t, 0);
                          h_38 = ATgetArgument(t, 1);
                          e_38 = ATgetArgument(t, 2);
                          d_38 = ATgetArgument(t, 3);
                          {
                            ATerm v_47 = t;
                            int y_47 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_39 = NULL,t_39 = NULL;
                                t = e_38;
                                t = map1_1_0(y_14, t);
                                s_39 = t;
                                t = h_38;
                                t = map_1_0(z_14, t);
                                t_39 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_38, t_39, s_39, d_38);
                                ;
                                LocalPopChoice(y_47);
                              }
                            else
                              {
                                t = v_47;
                                {
                                  ATerm z_40 = NULL,a_41 = NULL;
                                  t = h_38;
                                  t = map1_1_0(b_15, t);
                                  z_40 = t;
                                  t = e_38;
                                  t = map_1_0(f_15, t);
                                  a_41 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_38, z_40, a_41, d_38);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              g_38 = ATgetArgument(t, 0);
                              h_38 = ATgetArgument(t, 1);
                              e_38 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, h_38, (ATerm) ATmakeAppl(sym_Op_2, term_v_38, (ATerm) ATinsert(ATinsert(ATempty, e_38), g_38)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  g_38 = ATgetArgument(t, 0);
                                  h_38 = ATgetArgument(t, 1);
                                  e_38 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, e_38)), g_38), (ATerm) ATmakeAppl(sym_Build_1, h_38)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      g_38 = ATgetArgument(t, 0);
                                      h_38 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_38, (ATerm) ATmakeAppl(sym_Match_1, h_38));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          g_38 = ATgetArgument(t, 0);
                                          h_38 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_38), h_38);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              g_38 = ATgetArgument(t, 0);
                                              h_38 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_38), g_38);
                                        }
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
  ATerm w_41 (ATerm t)
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_113(t);
        t = w_41(t);
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = c_48;
      }
    return(t);
  }
  t = w_41(t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm e_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(g_48);
    }
  else
    {
      t = e_48;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm h_48 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_15, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_48;
    }
  return(t);
}
ATerm Con_3_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,g_4 = NULL,h_4 = NULL;
  p_42 = t;
  if(match_cons(t, sym_Con_3))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
      l_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_42);
  i_42 = t;
  t = j_42;
  t = u_100(t);
  m_42 = t;
  t = k_42;
  t = v_100(t);
  n_42 = t;
  t = l_42;
  t = w_100(t);
  o_42 = t;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, m_42, n_42, o_42);
  g_4 = t;
  t = SSLsetAnnotations(g_4, i_42);
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(j_48);
    }
  else
    {
      t = i_48;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm k_48 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(t_15, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_48;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm y_42 = NULL,b_43 = NULL,c_43 = NULL,e_43 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      y_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_42;
  if(match_cons(t, sym_StratRule_3))
    {
      b_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
      e_43 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_43), (ATerm) ATmakeAppl(sym_Where_1, e_43)), b_43));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          b_43 = ATgetArgument(t, 0);
          c_43 = ATgetArgument(t, 1);
          e_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_43;
      t = pureterm_0_0(t);
      t = c_43;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, c_43)), (ATerm) ATmakeAppl(sym_Where_1, e_43)), (ATerm) ATmakeAppl(sym_Match_1, b_43)));
    }
  return(t);
}
ATerm d_13 (ATerm f_84, ATerm g_84, ATerm h_84, ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t = new_0_0(t);
  p_43 = t;
  t = f_84;
  {
    ATerm u_15 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_48 = ATgetArgument(t, 0);
          if(match_cons(l_48, sym_Var_1))
            {
              if(((r_43 != NULL) && (r_43 != ATgetArgument(l_48, 0))))
                _fail(ATgetArgument(l_48, 0));
              else
                r_43 = ATgetArgument(l_48, 0);
            }
          else
            _fail(t);
          if(((q_43 != NULL) && (q_43 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_43 = ATgetArgument(t, 1);
          {
            ATerm m_48 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_43));
      return(t);
    }
    t = oncetd_1_0(u_15, t);
    s_43 = t;
    t = g_84;
    {
      ATerm v_15 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm n_48 = ATgetArgument(t, 0);
            if(match_cons(n_48, sym_Var_1))
              {
                if(((r_43 != NULL) && (r_43 != ATgetArgument(n_48, 0))))
                  _fail(ATgetArgument(n_48, 0));
                else
                  r_43 = ATgetArgument(n_48, 0);
              }
            else
              _fail(t);
            if(((t_43 != NULL) && (t_43 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              t_43 = ATgetArgument(t, 1);
            {
              ATerm o_48 = ATgetArgument(t, 2);
              if(match_cons(o_48, sym_CallT_3))
                {
                  if(((u_43 != NULL) && (u_43 != ATgetArgument(o_48, 0))))
                    _fail(ATgetArgument(o_48, 0));
                  else
                    u_43 = ATgetArgument(o_48, 0);
                  {
                    ATerm p_48 = ATgetArgument(o_48, 1);
                    if(((ATgetType(p_48) != AT_LIST) || !(ATisEmpty(p_48))))
                      _fail(t);
                  }
                  {
                    ATerm q_48 = ATgetArgument(o_48, 2);
                    if(((ATgetType(q_48) != AT_LIST) || !(ATisEmpty(q_48))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
        return(t);
      }
      t = oncetd_1_0(v_15, t);
      v_43 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_43), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_43, v_43, (ATerm) ATmakeAppl(sym_Seq_2, h_84, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(u_43), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_43), not_null(t_43), term_k_40))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_43)), (ATerm) ATmakeAppl(sym_Var_1, p_43))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_48 = t;
      int u_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
          e_44 = t;
          if(match_cons(t, sym_SRule_1))
            {
              f_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_44;
          if(match_cons(t, sym_Rule_3))
            {
              g_44 = ATgetArgument(t, 0);
              h_44 = ATgetArgument(t, 1);
              i_44 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = e_44;
          t = d_13(g_44, h_44, i_44, t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(u_48);
        }
      else
        {
          t = t_48;
          {
            ATerm v_48 = t;
            int w_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(w_48);
              }
            else
              {
                t = v_48;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(s_48);
    }
  else
    {
      t = r_48;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  t = c_114(t);
  {
    ATerm w_15 (ATerm t)
    {
      t = topdown_1_0(c_114, t);
      return(t);
    }
    t = SRTS_all(w_15, t);
  }
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm w_45 = NULL;
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_45 = ATgetArgument(t, 0);
          {
            ATerm z_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_48);
      t = w_45;
    }
  else
    {
      t = x_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_45;
    }
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm z_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_45);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm a_49 = t;
  int b_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_49);
    }
  else
    {
      t = a_49;
      {
        ATerm b_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_46 = ATgetArgument(t, 0);
            t = b_46;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_46 = ATgetArgument(t, 0);
                f_46 = ATgetArgument(t, 1);
                g_46 = ATgetArgument(t, 2);
                h_46 = ATgetArgument(t, 3);
                t = g_46;
                t = map_1_0(a_16, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_46 = ATgetArgument(t, 0);
                    f_46 = ATgetArgument(t, 1);
                    g_46 = ATgetArgument(t, 2);
                    h_46 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_46;
                t = map_1_0(b_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_16 (ATerm t)
{
  ATerm q_46 = NULL;
  ATerm c_49 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_46 = ATgetArgument(t, 0);
          {
            ATerm e_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_49);
      t = q_46;
    }
  else
    {
      t = c_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_46;
    }
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm i_47 = NULL;
  ATerm f_49 = t;
  int g_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_47 = ATgetArgument(t, 0);
          {
            ATerm h_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_49);
      t = i_47;
    }
  else
    {
      t = f_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_47;
    }
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm x_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_47);
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm i_49 = t;
  int j_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_49);
    }
  else
    {
      t = i_49;
      {
        ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,f_48 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_47 = ATgetArgument(t, 0);
            t = z_47;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_47 = ATgetArgument(t, 0);
                a_48 = ATgetArgument(t, 1);
                b_48 = ATgetArgument(t, 2);
                f_48 = ATgetArgument(t, 3);
                t = b_48;
                t = map_1_0(e_16, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_47 = ATgetArgument(t, 0);
                    a_48 = ATgetArgument(t, 1);
                    b_48 = ATgetArgument(t, 2);
                    f_48 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_48;
                t = map_1_0(f_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm s_49 = NULL;
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_49 = ATgetArgument(t, 0);
          {
            ATerm m_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_49);
      t = s_49;
    }
  else
    {
      t = k_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_49;
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm d_50 = NULL;
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_50 = ATgetArgument(t, 0);
          {
            ATerm p_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_49);
      t = d_50;
    }
  else
    {
      t = n_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_50;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm e_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
      i_45 = ATgetArgument(t, 2);
      e_45 = ATgetArgument(t, 3);
      {
        ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
        t = i_45;
        t = map_1_0(x_15, t);
        n_45 = t;
        t = e_45;
        t = free_vars_3_0(y_15, z_15, tboundin_3_0, t);
        o_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_45, n_45);
        t = diff_0_0(t);
        p_45 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_45, h_45, i_45, (ATerm) ATmakeAppl(sym_Scope_2, p_45, e_45));
      }
    }
  else
    {
      ATerm w_47 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          g_45 = ATgetArgument(t, 0);
          h_45 = ATgetArgument(t, 1);
          i_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_45;
      t = free_vars_3_0(c_16, d_16, tboundin_3_0, t);
      w_47 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, g_45, h_45, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, w_47, i_45));
    }
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm p_51 = NULL;
  ATerm q_49 = t;
  int r_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_51 = ATgetArgument(t, 0);
          {
            ATerm t_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_49);
      t = p_51;
    }
  else
    {
      t = q_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_51;
    }
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm w_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_51);
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_51 = ATgetArgument(t, 0);
            t = y_51;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_51 = ATgetArgument(t, 0);
                z_51 = ATgetArgument(t, 1);
                a_52 = ATgetArgument(t, 2);
                b_52 = ATgetArgument(t, 3);
                t = a_52;
                t = map_1_0(j_16, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_51 = ATgetArgument(t, 0);
                    z_51 = ATgetArgument(t, 1);
                    a_52 = ATgetArgument(t, 2);
                    b_52 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_52;
                t = map_1_0(k_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm o_52 = NULL;
  ATerm w_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_52 = ATgetArgument(t, 0);
          {
            ATerm y_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_49);
      t = o_52;
    }
  else
    {
      t = w_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_52;
    }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm b_53 = NULL;
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_53 = ATgetArgument(t, 0);
          {
            ATerm b_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_50);
      t = b_53;
    }
  else
    {
      t = z_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_53;
    }
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm k_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_53);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm c_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_50);
    }
  else
    {
      t = c_50;
      {
        ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_53 = ATgetArgument(t, 0);
            t = m_53;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_53 = ATgetArgument(t, 0);
                n_53 = ATgetArgument(t, 1);
                o_53 = ATgetArgument(t, 2);
                p_53 = ATgetArgument(t, 3);
                t = o_53;
                t = map_1_0(p_16, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_53 = ATgetArgument(t, 0);
                    n_53 = ATgetArgument(t, 1);
                    o_53 = ATgetArgument(t, 2);
                    p_53 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_53;
                t = map_1_0(q_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm d_54 = NULL;
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_54 = ATgetArgument(t, 0);
          {
            ATerm h_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_50);
      t = d_54;
    }
  else
    {
      t = f_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_54;
    }
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm m_54 = NULL;
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_54 = ATgetArgument(t, 0);
          {
            ATerm k_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_50);
      t = m_54;
    }
  else
    {
      t = i_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_54;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm u_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      w_50 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
      y_50 = ATgetArgument(t, 2);
      u_50 = ATgetArgument(t, 3);
      {
        ATerm f_51 = NULL,h_51 = NULL,l_51 = NULL;
        t = y_50;
        t = map_1_0(g_16, t);
        f_51 = t;
        t = u_50;
        t = free_vars_3_0(h_16, i_16, tboundin_3_0, t);
        h_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_51, f_51);
        t = diff_0_0(t);
        l_51 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, w_50, x_50, y_50, (ATerm) ATmakeAppl(sym_Scope_2, l_51, (ATerm) ATmakeAppl(sym_SRule_1, u_50)));
      }
    }
  else
    {
      ATerm j_53 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          w_50 = ATgetArgument(t, 0);
          x_50 = ATgetArgument(t, 1);
          y_50 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_50;
      t = free_vars_3_0(l_16, o_16, tboundin_3_0, t);
      j_53 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_50, x_50, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, j_53, (ATerm) ATmakeAppl(sym_SRule_1, y_50)));
    }
  return(t);
}
ATerm c_55 (ATerm t_54, ATerm t)
{
  ATerm o_7 = NULL;
  t = term_l_50;
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_50, t_54);
  t = v_14(o_7, t_54, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm m_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_50) != ATmakeSymbol("r_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_38;
  return(t);
}
ATerm f_55 (ATerm v_54, ATerm t)
{
  ATerm r_7 = NULL;
  t = term_l_50;
  r_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_50, v_54);
  t = v_14(r_7, v_54, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_50) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_38;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm z_54 = NULL,b_55 = NULL;
  z_54 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_50 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_55;
  if(match_int(t, 0))
    {
      ATerm p_50 = t;
      int q_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_55(z_54, t);
          ;
          LocalPopChoice(q_50);
        }
      else
        {
          t = p_50;
          t = f_55(z_54, t);
        }
    }
  else
    {
      t = c_55(z_54, t);
    }
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm m_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(m_9, s_9, t);
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm g_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_9 = ATgetFirst((ATermList) t);
      u_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_9, u_9);
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_50 = ATgetArgument(t, 0);
      if(match_cons(s_50, sym__2))
        {
          v_9 = ATgetArgument(s_50, 0);
          w_9 = ATgetArgument(s_50, 1);
        }
      else
        _fail(t);
      {
        ATerm t_50 = ATgetArgument(t, 1);
        if(match_cons(t_50, sym__2))
          {
            x_9 = ATgetArgument(t_50, 0);
            y_9 = ATgetArgument(t_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_9), v_9), (ATerm) ATinsert(CheckATermList(y_9), w_9));
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm a_10 = NULL;
  t = new_0_0(t);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, a_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_47), term_n_47)), a_10);
  return(t);
}
ATerm v_17 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_10), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  y_56 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_57;
  if(match_cons(t, sym_FunType_2))
    {
      b_57 = ATgetArgument(t, 0);
      x_56 = ATgetArgument(t, 1);
      {
        ATerm h_8 = NULL,q_8 = NULL,u_8 = NULL,y_8 = NULL,j_9 = NULL,k_9 = NULL;
        t = b_57;
        t = foldr_3_0(r_16, a_17, c_17, t);
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_56, h_8);
        {
          ATerm v_50 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_50;
            }
          t = (ATerm) ATmakeAppl(sym__2, z_56, h_8);
          j_9 = t;
          t = term_a_51;
          k_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_56, h_8), term_a_51);
          t = w_14(f_17, j_9, k_9, t);
          t = b_57;
          t = genzip_4_0(g_17, j_17, k_17, t_17, t);
          if(match_cons(t, sym__2))
            {
              q_8 = ATgetArgument(t, 0);
              u_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_8;
          t = map_1_0(v_17, t);
          y_8 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, z_56, q_8, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, z_56, y_8));
        }
      }
    }
  else
    {
      ATerm l_10 = NULL,m_10 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm b_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_56, term_r_50);
      {
        ATerm c_51 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_51;
          }
        t = (ATerm) ATmakeAppl(sym__2, z_56, term_r_50);
        l_10 = t;
        t = term_e_51;
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_56, term_r_50), term_e_51);
        t = w_14(w_17, l_10, m_10, t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_56, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, z_56, (ATerm) ATempty));
      }
    }
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm c_18 (ATerm t)
{
  t = filter_1_0(d_18, t);
  t = concat_0_0(t);
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm o_57 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      o_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_57;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm g_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RDtoSD_0_0(t);
      ;
      LocalPopChoice(i_51);
    }
  else
    {
      t = g_51;
      t = DeclareVariables_0_0(t);
    }
  t = topdown_1_0(h_18, t);
  return(t);
}
ATerm h_18 (ATerm t)
{
  ATerm j_51 = t;
  int k_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_57 = NULL,s_57 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          r_57 = ATgetArgument(t, 0);
          s_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_CallT_3, r_57, s_57, (ATerm) ATempty);
      ;
      LocalPopChoice(k_51);
    }
  else
    {
      t = j_51;
    }
  return(t);
}
ATerm h_13 (ATerm g_76, ATerm h_76, ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  t = g_76;
  t = scope_2_0(x_17, c_18, t);
  j_57 = t;
  t = (ATerm) ATinsert(CheckATermList(h_76), (ATerm) ATmakeAppl(sym_RDefT_4, term_m_51, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_r_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_51), term_q_51))), (ATerm) ATmakeAppl(sym_VarDec_2, term_n_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_51), term_q_51))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_x_51, term_g_52, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_52), term_j_52)))));
  t = map_1_0(g_18, t);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
  t = conc_0_0(t);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, l_57)), (ATerm) ATmakeAppl(sym_Signature_1, g_76)));
  return(t);
}
ATerm m_18 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  if(match_cons(t, sym__2))
    {
      j_58 = ATgetArgument(t, 0);
      k_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(j_58, k_58, t);
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,p_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      b_58 = ATgetArgument(t, 0);
      c_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_52;
  p_10 = t;
  t = term_p_52;
  q_10 = t;
  t = term_q_52;
  t = v_14(q_10, p_10, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm r_52 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_52) != ATmakeSymbol("c_2", 0, ATtrue)))
        _fail(t);
      d_58 = ATgetArgument(t, 1);
      e_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_58;
  t = foldr_3_0(m_18, n_18, p_18, t);
  g_58 = t;
  t = SSL_int_to_string(g_58);
  f_58 = t;
  t = term_p_38;
  h_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_52), f_58), term_w_52), b_58), term_v_52), term_u_52), e_58), term_t_52), d_58), term_s_52);
  i_58 = t;
  t = SSL_printnl(h_58, i_58);
  t = (ATerm) ATmakeAppl(sym_Op_2, b_58, c_58);
  return(t);
}
ATerm i_13 (ATerm m_57, ATerm n_57, ATerm t)
{
  ATerm y_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_57, n_57);
      ;
      LocalPopChoice(z_52);
    }
  else
    {
      t = y_52;
      t = SSL_subtr(m_57, n_57);
    }
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm l_58 = NULL,x_58 = NULL;
  if(match_cons(t, sym__2))
    {
      l_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_58, x_58, (ATerm) ATempty);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm y_58 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_53 = ATgetArgument(t, 0);
      if(((ATgetType(a_53) != AT_INT) || (ATgetInt((ATermInt) a_53) != 0)))
        _fail(t);
      {
        ATerm c_53 = ATgetArgument(t, 1);
      }
      y_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_58;
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm z_58 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  if(match_cons(t, sym__3))
    {
      z_58 = ATgetArgument(t, 0);
      b_59 = ATgetArgument(t, 1);
      c_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_58, term_s_38);
  t = geq_0_0(t);
  t = term_s_38;
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_58, term_s_38);
  t = i_13(z_58, e_59, t);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_59, b_59, (ATerm) ATinsert(CheckATermList(c_59), b_59));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(r_18, t_18, w_18, t);
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      m_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(l_59, m_59, t);
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = term_d_53;
  return(t);
}
ATerm j_13 (ATerm k_83, ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL;
  f_59 = t;
  t = k_83;
  t = foldr_3_0(x_18, y_18, a_19, t);
  g_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_59, term_f_53);
  t = copy_0_0(t);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, h_59, term_f_53));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm g_53 = t;
    int h_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_59 = NULL,u_10 = NULL,y_10 = NULL;
        t = (ATerm) ATempty;
        u_10 = t;
        t = term_d_53;
        y_10 = t;
        t = term_i_53;
        t = v_14(y_10, u_10, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_53 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_53) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            n_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_59;
        ;
        LocalPopChoice(h_53);
      }
    else
      {
        t = g_53;
        t = (ATerm) ATempty;
      }
    i_59 = t;
    t = (ATerm) ATempty;
    j_59 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_53, (ATerm) ATinsert(CheckATermList(i_59), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, h_59, term_f_53))));
    k_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_53, (ATerm) ATinsert(CheckATermList(i_59), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, h_59, term_f_53)))));
    t = w_14(d_19, j_59, k_59, t);
    t = f_59;
  }
  return(t);
}
ATerm e_19 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm f_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(f_12, i_12, t);
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm o_19 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm p_19 (ATerm t)
{
  ATerm a_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(a_13, e_13, t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  n_60 = t;
  if(match_cons(t, sym_Op_2))
    {
      o_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL,o_12 = NULL,p_12 = NULL;
        t = p_60;
        t = foldr_3_0(e_19, f_19, h_19, t);
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, o_60, (ATerm) ATmakeAppl(sym_Keys_1, d_12));
        o_12 = t;
        t = term_t_53;
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_53, (ATerm) ATmakeAppl(sym_Op_2, o_60, (ATerm) ATmakeAppl(sym_Keys_1, d_12)));
        t = v_14(p_12, o_12, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm u_53 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_53) != ATmakeSymbol("w_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, o_60, (ATerm) ATempty);
        ;
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
        {
          ATerm y_12 = NULL,q_13 = NULL,r_13 = NULL;
          t = p_60;
          t = foldr_3_0(o_19, p_19, u_19, t);
          y_12 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, o_60, (ATerm) ATmakeAppl(sym_Keys_1, y_12));
          q_13 = t;
          t = term_t_53;
          r_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_53, (ATerm) ATmakeAppl(sym_Op_2, o_60, (ATerm) ATmakeAppl(sym_Keys_1, y_12)));
          t = v_14(r_13, q_13, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm v_53 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_53) != ATmakeSymbol("t_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, o_60, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm s_60 (ATerm t)
  {
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 (ATerm t)
        {
          ATerm y_53 = t;
          int z_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_60(t);
              ;
              LocalPopChoice(z_53);
            }
          else
            {
              t = y_53;
            }
          return(t);
        }
        t = o_116(t);
        t = SRTS_all(w_19, t);
        ;
        LocalPopChoice(x_53);
      }
    else
      {
        t = w_53;
        t = SRTS_some(s_60, t);
      }
    return(t);
  }
  t = s_60(t);
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = term_p_52;
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_p_52;
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm a_54 = t;
  if((PushChoice() == 0))
    {
      ATerm b_54 = t;
      int c_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = CheckCons_0_0(t);
          ;
          LocalPopChoice(c_54);
        }
      else
        {
          t = b_54;
          {
            ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
            a_61 = t;
            if(match_cons(t, sym_Op_2))
              {
                b_61 = ATgetArgument(t, 0);
                c_61 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_61;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            t = a_61;
            t = j_13(c_61, t);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_54;
    }
  t = CheckConsError_0_0(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL;
  ATerm a_20 (ATerm t)
  {
    ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
    x_60 = t;
    t = x_142(t);
    if(((w_60 != NULL) && (w_60 != t)))
      _fail(t);
    else
      w_60 = t;
    t = y_142(t);
    if(((v_60 != NULL) && (v_60 != t)))
      _fail(t);
    else
      v_60 = t;
    t = term_n_52;
    y_60 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_3, term_e_54, not_null(v_60), not_null(w_60));
    z_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_52, (ATerm) ATmakeAppl(sym_Defined_3, term_e_54, not_null(v_60), not_null(w_60)));
    t = w_14(e_20, y_60, z_60, t);
    t = x_60;
    t = manytd_1_0(h_20, t);
    return(t);
  }
  t = scope_2_0(y_19, a_20, t);
  return(t);
}
ATerm j_20 (ATerm t)
{
  t = term_f_54;
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL;
  if(match_cons(t, sym__2))
    {
      r_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(r_61, s_61, t);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  if(match_cons(t, sym__2))
    {
      t_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(t_61, u_61, t);
  return(t);
}
ATerm r_20 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm t_20 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm u_20 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL;
  if(match_cons(t, sym__2))
    {
      c_62 = ATgetArgument(t, 0);
      d_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(c_62, d_62, t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm z_20 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  if(match_cons(t, sym__2))
    {
      i_62 = ATgetArgument(t, 0);
      j_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(i_62, j_62, t);
  return(t);
}
ATerm c_21 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_61 = ATgetArgument(t, 0);
      h_61 = ATgetArgument(t, 1);
      i_61 = ATgetArgument(t, 2);
      j_61 = ATgetArgument(t, 3);
      t = j_61;
      {
        ATerm i_20 (ATerm t)
        {
          ATerm p_61 = NULL,q_61 = NULL;
          t = h_61;
          t = foldr_3_0(k_20, l_20, m_20, t);
          p_61 = t;
          t = i_61;
          t = foldr_3_0(n_20, o_20, r_20, t);
          q_61 = t;
          t = (ATerm) ATmakeAppl(sym__3, g_61, p_61, q_61);
          return(t);
        }
        t = check_constructors_p__2_0(i_20, j_20, t);
      }
    }
  else
    {
      if(match_cons(t, sym_RDefT_4))
        {
          g_61 = ATgetArgument(t, 0);
          h_61 = ATgetArgument(t, 1);
          i_61 = ATgetArgument(t, 2);
          j_61 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_61;
      {
        ATerm s_20 (ATerm t)
        {
          ATerm a_62 = NULL,b_62 = NULL;
          t = h_61;
          t = foldr_3_0(u_20, v_20, y_20, t);
          a_62 = t;
          t = i_61;
          t = foldr_3_0(z_20, b_21, c_21, t);
          b_62 = t;
          t = (ATerm) ATmakeAppl(sym__3, g_61, a_62, b_62);
          return(t);
        }
        t = check_constructors_p__2_0(s_20, t_20, t);
      }
    }
  return(t);
}
ATerm d_21 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  if(match_cons(t, sym__2))
    {
      z_62 = ATgetArgument(t, 0);
      a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(z_62, a_63, t);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm i_21 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm m_62 = NULL,o_62 = NULL,p_62 = NULL,s_62 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      o_62 = ATgetArgument(t, 0);
      p_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_62;
  if(match_cons(t, sym_FunType_2))
    {
      s_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
      {
        ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
        t = s_62;
        t = foldr_3_0(d_21, e_21, f_21, t);
        w_62 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, o_62, (ATerm) ATmakeAppl(sym_Keys_1, w_62));
        x_62 = t;
        t = term_i_54;
        y_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, o_62, (ATerm) ATmakeAppl(sym_Keys_1, w_62)), term_i_54);
        t = w_14(h_21, x_62, y_62, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_62, (ATerm) ATmakeAppl(sym_FunType_2, s_62, m_62));
      }
    }
  else
    {
      ATerm f_63 = NULL,g_63 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          s_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, o_62, term_j_54);
      f_63 = t;
      t = term_l_54;
      g_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, o_62, term_j_54), term_l_54);
      t = w_14(i_21, f_63, g_63, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_62, (ATerm) ATmakeAppl(sym_ConstType_1, s_62));
    }
  return(t);
}
ATerm k_13 (ATerm t_82, ATerm v_82, ATerm t)
{
  ATerm i_63 = NULL,k_63 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(t_82), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_53), term_f_53))), term_o_54);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = v_82;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_63 = NULL,z_13 = NULL,a_14 = NULL;
        t = (ATerm) ATempty;
        z_13 = t;
        t = term_d_53;
        a_14 = t;
        t = term_i_53;
        t = v_14(a_14, z_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_54 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_54) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
            l_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_63;
        ;
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        t = (ATerm) ATempty;
      }
    i_63 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_63, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(t_82), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_f_53), term_f_53), term_f_53))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_v_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_53), term_f_53))), term_o_54));
    t = conc_0_0(t);
    k_63 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, v_82)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, k_63)))));
  }
  return(t);
}
ATerm n_21 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_54 = ATgetArgument(t, 0);
      if(((ATgetType(s_54) != AT_LIST) || !(ATisEmpty(s_54))))
        _fail(t);
      {
        ATerm u_54 = ATgetArgument(t, 1);
        if(((ATgetType(u_54) != AT_LIST) || !(ATisEmpty(u_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_54 = ATgetArgument(t, 0);
      if(((ATgetType(y_54) == AT_LIST) && !(ATisEmpty(y_54))))
        {
          d_64 = ATgetFirst((ATermList) y_54);
          e_64 = (ATerm) ATgetNext((ATermList) y_54);
        }
      else
        _fail(t);
      {
        ATerm a_55 = ATgetArgument(t, 1);
        if(((ATgetType(a_55) == AT_LIST) && !(ATisEmpty(a_55))))
          {
            f_64 = ATgetFirst((ATermList) a_55);
            g_64 = (ATerm) ATgetNext((ATermList) a_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_64, f_64), (ATerm) ATmakeAppl(sym__2, e_64, g_64));
  return(t);
}
ATerm p_21 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL;
  if(match_cons(t, sym__2))
    {
      h_64 = ATgetArgument(t, 0);
      i_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_64), h_64);
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm q_64 = NULL,s_64 = NULL,t_64 = NULL;
  if(match_cons(t, sym__2))
    {
      q_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_64;
  {
    ATerm d_55 = t;
    int e_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_55);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_64);
      }
    else
      {
        t = d_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_55 = ATgetArgument(t, 0);
            s_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_64, s_64);
      }
  }
  return(t);
}
ATerm t_21 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_55 = ATgetArgument(t, 0);
      if(((ATgetType(i_55) != AT_LIST) || !(ATisEmpty(i_55))))
        _fail(t);
      {
        ATerm j_55 = ATgetArgument(t, 1);
        if(((ATgetType(j_55) != AT_LIST) || !(ATisEmpty(j_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_21 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_55 = ATgetArgument(t, 0);
      if(((ATgetType(k_55) == AT_LIST) && !(ATisEmpty(k_55))))
        {
          m_65 = ATgetFirst((ATermList) k_55);
          n_65 = (ATerm) ATgetNext((ATermList) k_55);
        }
      else
        _fail(t);
      {
        ATerm l_55 = ATgetArgument(t, 1);
        if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
          {
            o_65 = ATgetFirst((ATermList) l_55);
            p_65 = (ATerm) ATgetNext((ATermList) l_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_65, o_65), (ATerm) ATmakeAppl(sym__2, n_65, p_65));
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  if(match_cons(t, sym__2))
    {
      q_65 = ATgetArgument(t, 0);
      r_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_65), q_65);
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm t_65 = NULL,v_65 = NULL,x_65 = NULL;
  if(match_cons(t, sym__2))
    {
      t_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_65;
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_55);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_65);
      }
    else
      {
        t = m_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_55 = ATgetArgument(t, 0);
            v_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_65, v_65);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm i_142 (ATerm), ATerm t)
{
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(i_142, _id, t);
      ;
      LocalPopChoice(r_55);
    }
  else
    {
      t = q_55;
      {
        ATerm s_55 = t;
        int t_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 (ATerm t)
            {
              ATerm b_64 = NULL,c_64 = NULL;
              b_64 = t;
              t = i_142(t);
              c_64 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
              t = genzip_4_0(n_21, o_21, p_21, q_21, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, l_21, _id, t);
            ;
            LocalPopChoice(t_55);
          }
        else
          {
            t = s_55;
            {
              ATerm r_21 (ATerm t)
              {
                ATerm z_64 = NULL,a_65 = NULL;
                z_64 = t;
                t = i_142(t);
                a_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_64, a_65);
                t = genzip_4_0(t_21, u_21, v_21, w_21, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, r_21, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm k_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_66);
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm u_55 = t;
  int v_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_55);
    }
  else
    {
      t = u_55;
      {
        ATerm w_55 = t;
        int x_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(x_55);
          }
        else
          {
            t = w_55;
            {
              ATerm m_66 = NULL,n_66 = NULL,s_66 = NULL,v_66 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_66 = ATgetArgument(t, 0);
                  n_66 = ATgetArgument(t, 1);
                  s_66 = ATgetArgument(t, 2);
                  v_66 = ATgetArgument(t, 3);
                  t = s_66;
                  t = map_1_0(z_21, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_66 = ATgetArgument(t, 0);
                      n_66 = ATgetArgument(t, 1);
                      s_66 = ATgetArgument(t, 2);
                      v_66 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_66;
                  t = map_1_0(a_22, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm c_67 = NULL;
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_67 = ATgetArgument(t, 0);
          {
            ATerm a_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_55);
      t = c_67;
    }
  else
    {
      t = y_55;
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
ATerm a_22 (ATerm t)
{
  ATerm u_67 = NULL;
  ATerm b_56 = t;
  int c_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_67 = ATgetArgument(t, 0);
          {
            ATerm d_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_56);
      t = u_67;
    }
  else
    {
      t = b_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_67;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm j_66 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      j_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_66;
  t = free_vars_3_0(x_21, y_21, tboundin_3_0, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,m_70 = NULL,n_70 = NULL,q_70 = NULL;
  e_70 = t;
  if(match_cons(t, sym__2))
    {
      f_70 = ATgetArgument(t, 0);
      m_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_70 = ATgetFirst((ATermList) t);
      q_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_70;
  if(match_cons(t, sym__2))
    {
      c_70 = ATgetArgument(t, 0);
      d_70 = ATgetArgument(t, 1);
      {
        ATerm e_56 = t;
        int f_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_70;
            if((f_70 != t))
              {
                _fail(t);
              }
            t = d_70;
            ;
            LocalPopChoice(f_56);
          }
        else
          {
            t = e_56;
            t = (ATerm) ATmakeAppl(sym__2, f_70, q_70);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_70, q_70);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm n_13 (ATerm t_139 (ATerm), ATerm u_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_72, ATerm n_72, ATerm m_72, ATerm t)
{
  t = o_72;
  {
    ATerm c_22 (ATerm t)
    {
      ATerm c_68 = NULL;
      c_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_68, m_72);
      t = t_139(t);
      return(t);
    }
    ATerm f_22 (ATerm t)
    {
      ATerm g_68 = NULL;
      g_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_68, n_72);
      t = t_139(t);
      return(t);
    }
    t = u_139(c_22, f_22, _id, t);
  }
  return(t);
}
ATerm g_22 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_56 = ATgetArgument(t, 0);
      if(((ATgetType(g_56) != AT_LIST) || !(ATisEmpty(g_56))))
        _fail(t);
      {
        ATerm h_56 = ATgetArgument(t, 1);
        if(((ATgetType(h_56) != AT_LIST) || !(ATisEmpty(h_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm b_69 = NULL,i_69 = NULL,l_69 = NULL,m_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_56 = ATgetArgument(t, 0);
      if(((ATgetType(i_56) == AT_LIST) && !(ATisEmpty(i_56))))
        {
          b_69 = ATgetFirst((ATermList) i_56);
          i_69 = (ATerm) ATgetNext((ATermList) i_56);
        }
      else
        _fail(t);
      {
        ATerm j_56 = ATgetArgument(t, 1);
        if(((ATgetType(j_56) == AT_LIST) && !(ATisEmpty(j_56))))
          {
            l_69 = ATgetFirst((ATermList) j_56);
            m_69 = (ATerm) ATgetNext((ATermList) j_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_69, l_69), (ATerm) ATmakeAppl(sym__2, i_69, m_69));
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL;
  if(match_cons(t, sym__2))
    {
      n_69 = ATgetArgument(t, 0);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_69), n_69);
  return(t);
}
ATerm o_13 (ATerm n_139 (ATerm), ATerm o_139 (ATerm (ATerm), ATerm), ATerm g_72, ATerm j_72, ATerm t)
{
  ATerm m_68 = NULL,q_68 = NULL,t_68 = NULL,w_68 = NULL,x_68 = NULL;
  t = g_72;
  t = n_139(t);
  m_68 = t;
  t = map_1_0(new_0_0, t);
  q_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_68, q_68);
  t = genzip_4_0(g_22, h_22, i_22, _id, t);
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_68, j_72);
  t = conc_0_0(t);
  w_68 = t;
  t = g_72;
  {
    ATerm o_22 (ATerm t)
    {
      t = q_68;
      return(t);
    }
    t = o_139(o_22, t);
    x_68 = t;
    t = (ATerm) ATmakeAppl(sym__3, x_68, j_72, w_68);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm l_72 (ATerm t)
  {
    ATerm k_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_118(t);
        ;
        LocalPopChoice(l_56);
      }
    else
      {
        t = k_56;
        {
          ATerm u_71 = NULL,a_72 = NULL,b_72 = NULL;
          ATerm r_22 (ATerm t)
          {
            ATerm j_14 = NULL;
            j_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_14, not_null(b_72));
            t = l_72(t);
            return(t);
          }
          if(((u_71 != NULL) && (u_71 != t)))
            _fail(t);
          else
            u_71 = t;
          if(match_cons(t, sym__2))
            {
              if(((a_72 != NULL) && (a_72 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_72 = ATgetArgument(t, 0);
              if(((b_72 != NULL) && (b_72 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                b_72 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(a_72);
          t = SRTS_all(r_22, t);
        }
      }
    return(t);
  }
  t = l_72(t);
  return(t);
}
ATerm s_22 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_56 = ATgetArgument(t, 0);
      if(((ATgetType(m_56) != AT_LIST) || !(ATisEmpty(m_56))))
        _fail(t);
      {
        ATerm n_56 = ATgetArgument(t, 1);
        if(((ATgetType(n_56) != AT_LIST) || !(ATisEmpty(n_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_22 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_56 = ATgetArgument(t, 0);
      if(((ATgetType(o_56) == AT_LIST) && !(ATisEmpty(o_56))))
        {
          c_73 = ATgetFirst((ATermList) o_56);
          d_73 = (ATerm) ATgetNext((ATermList) o_56);
        }
      else
        _fail(t);
      {
        ATerm p_56 = ATgetArgument(t, 1);
        if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
          {
            e_73 = ATgetFirst((ATermList) p_56);
            f_73 = (ATerm) ATgetNext((ATermList) p_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_73, e_73), (ATerm) ATmakeAppl(sym__2, d_73, f_73));
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL;
  if(match_cons(t, sym__2))
    {
      g_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_73), g_73);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm t_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  t_72 = t;
  {
    ATerm q_56 = t;
    int r_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_56 = ATgetArgument(t, 0);
            ATerm t_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(r_56);
        t = t_72;
      }
    else
      {
        t = q_56;
        {
          ATerm b_73 = NULL;
          if(match_cons(t, sym__3))
            {
              v_72 = ATgetArgument(t, 0);
              w_72 = ATgetArgument(t, 1);
              x_72 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_72, w_72);
          t = genzip_4_0(s_22, u_22, v_22, _id, t);
          b_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_73, x_72);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm (ATerm), ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_138 (ATerm (ATerm), ATerm), ATerm z_138 (ATerm), ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_73 = ATgetArgument(t, 0);
      l_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_73, (ATerm) ATempty);
  {
    ATerm j_74 (ATerm t)
    {
      ATerm y_22 (ATerm t)
      {
        ATerm l_74 (ATerm n_73, ATerm t)
        {
          ATerm p_73 = NULL,t_14 = NULL;
          t = SSL_explode_term(n_73);
          if(match_cons(t, sym__2))
            {
              ATerm u_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm v_56 = ATgetArgument(t, 1);
                if(((ATgetType(v_56) == AT_LIST) && !(ATisEmpty(v_56))))
                  {
                    p_73 = ATgetFirst((ATermList) v_56);
                    {
                      ATerm w_56 = (ATerm) ATgetNext((ATermList) v_56);
                    }
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = p_73;
          t = u_138(t);
          t_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_14, m_73);
          t = lookup_0_0(t);
          t = z_138(t);
          return(t);
        }
        ATerm v_74 (ATerm q_73, ATerm r_73, ATerm s_73, ATerm t)
        {
          ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
          t = s_73;
          t = o_13(w_138, y_138, q_73, r_73, t);
          if(match_cons(t, sym__3))
            {
              t_73 = ATgetArgument(t, 0);
              u_73 = ATgetArgument(t, 1);
              v_73 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = n_13(j_74, x_138, t_73, u_73, v_73, t);
          return(t);
        }
        ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
        y_73 = t;
        if(match_cons(t, sym__2))
          {
            z_73 = ATgetArgument(t, 0);
            a_74 = ATgetArgument(t, 1);
            {
              ATerm c_57 = t;
              int d_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_23 (ATerm t)
                  {
                    ATerm i_74 = NULL;
                    i_74 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_74, a_74);
                    t = lookup_0_0(t);
                    return(t);
                  }
                  t = z_73;
                  t = v_138(a_23, t);
                  ;
                  LocalPopChoice(d_57);
                }
              else
                {
                  t = c_57;
                  {
                    ATerm e_57 = t;
                    int f_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_74(y_73, t);
                        ;
                        LocalPopChoice(f_57);
                      }
                    else
                      {
                        t = e_57;
                        t = v_74(z_73, a_74, y_73, t);
                      }
                  }
                }
            }
          }
        else
          {
            t = l_74(y_73, t);
          }
        return(t);
      }
      t = env_alltd_1_0(y_22, t);
      return(t);
    }
    t = j_74(t);
  }
  return(t);
}
ATerm f_23 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_57 = ATgetArgument(t, 0);
      if(((ATgetType(i_57) != AT_LIST) || !(ATisEmpty(i_57))))
        _fail(t);
      {
        ATerm p_57 = ATgetArgument(t, 1);
        if(((ATgetType(p_57) != AT_LIST) || !(ATisEmpty(p_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_23 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,z_77 = NULL,h_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_57 = ATgetArgument(t, 0);
      if(((ATgetType(q_57) == AT_LIST) && !(ATisEmpty(q_57))))
        {
          w_77 = ATgetFirst((ATermList) q_57);
          x_77 = (ATerm) ATgetNext((ATermList) q_57);
        }
      else
        _fail(t);
      {
        ATerm t_57 = ATgetArgument(t, 1);
        if(((ATgetType(t_57) == AT_LIST) && !(ATisEmpty(t_57))))
          {
            z_77 = ATgetFirst((ATermList) t_57);
            h_78 = (ATerm) ATgetNext((ATermList) t_57);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_77, z_77), (ATerm) ATmakeAppl(sym__2, x_77, h_78));
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm i_78 = NULL,k_78 = NULL;
  if(match_cons(t, sym__2))
    {
      i_78 = ATgetArgument(t, 0);
      k_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_78), i_78);
  return(t);
}
ATerm j_23 (ATerm t)
{
  ATerm l_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_78;
  return(t);
}
ATerm o_23 (ATerm t)
{
  ATerm u_57 = t;
  int v_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_57);
    }
  else
    {
      t = u_57;
      {
        ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_78 = ATgetArgument(t, 0);
            t = n_78;
            t = free_vars_3_0(x_23, y_23, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_78 = ATgetArgument(t, 0);
                o_78 = ATgetArgument(t, 1);
                p_78 = ATgetArgument(t, 2);
                q_78 = ATgetArgument(t, 3);
                t = p_78;
                t = map_1_0(b_24, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_78 = ATgetArgument(t, 0);
                    o_78 = ATgetArgument(t, 1);
                    p_78 = ATgetArgument(t, 2);
                    q_78 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_78;
                t = map_1_0(c_24, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_23 (ATerm t)
{
  ATerm s_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_78);
  return(t);
}
ATerm y_23 (ATerm t)
{
  ATerm w_57 = t;
  int x_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_57);
    }
  else
    {
      t = w_57;
      {
        ATerm y_57 = t;
        int z_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(z_57);
          }
        else
          {
            t = y_57;
            {
              ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_78 = ATgetArgument(t, 0);
                  v_78 = ATgetArgument(t, 1);
                  w_78 = ATgetArgument(t, 2);
                  x_78 = ATgetArgument(t, 3);
                  t = w_78;
                  t = map_1_0(z_23, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_78 = ATgetArgument(t, 0);
                      v_78 = ATgetArgument(t, 1);
                      w_78 = ATgetArgument(t, 2);
                      x_78 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_78;
                  t = map_1_0(a_24, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_23 (ATerm t)
{
  ATerm i_79 = NULL;
  ATerm a_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_79 = ATgetArgument(t, 0);
          {
            ATerm n_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_58);
      t = i_79;
    }
  else
    {
      t = a_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_79;
    }
  return(t);
}
ATerm a_24 (ATerm t)
{
  ATerm s_79 = NULL;
  ATerm o_58 = t;
  int p_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_79 = ATgetArgument(t, 0);
          {
            ATerm q_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_58);
      t = s_79;
    }
  else
    {
      t = o_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_79;
    }
  return(t);
}
ATerm b_24 (ATerm t)
{
  ATerm b_80 = NULL;
  ATerm r_58 = t;
  int t_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_80 = ATgetArgument(t, 0);
          {
            ATerm v_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_58);
      t = b_80;
    }
  else
    {
      t = r_58;
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
ATerm c_24 (ATerm t)
{
  ATerm l_80 = NULL;
  ATerm w_58 = t;
  int a_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_80 = ATgetArgument(t, 0);
          {
            ATerm o_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_59);
      t = l_80;
    }
  else
    {
      t = w_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_80;
    }
  return(t);
}
ATerm t_13 (ATerm o_141 (ATerm), ATerm e_77, ATerm f_77, ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL;
  t = o_141(t);
  {
    ATerm c_23 (ATerm t)
    {
      ATerm f_76 = NULL,c_77 = NULL,d_77 = NULL;
      f_76 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((e_77 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          c_77 = ATgetArgument(t, 1);
          d_77 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_77, f_77);
      t = genzip_4_0(f_23, g_23, h_23, _id, t);
      if(((d_76 != NULL) && (d_76 != t)))
        _fail(t);
      else
        d_76 = t;
      t = d_77;
      if(((e_76 != NULL) && (e_76 != t)))
        _fail(t);
      else
        e_76 = t;
      t = f_76;
      return(t);
    }
    t = fetch_1_0(c_23, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_76), not_null(e_76));
    t = substitute_6_0(j_23, Var_1_0, o_23, tboundin_3_0, tpaste_1_0, _id, t);
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm n_81 = NULL,c_82 = NULL;
  ATerm p_59 = t;
  int q_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm r_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(q_59);
      t = term_k_40;
    }
  else
    {
      t = p_59;
      if(match_cons(t, sym_Real_1))
        {
          c_82 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, c_82));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              c_82 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, c_82));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  c_82 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, c_82));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      c_82 = ATgetArgument(t, 0);
                      n_81 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_59, (ATerm)ATinsert(ATinsert(ATempty, n_81), c_82), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          c_82 = ATgetArgument(t, 0);
                          n_81 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_82), n_81, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              c_82 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_82), (ATerm)ATempty, (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm e_24 (ATerm t)
{
  t = map_1_0(trm_to_cong_0_0, t);
  return(t);
}
ATerm trm_to_cong_0_0 (ATerm t)
{
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Op_2_0(_id, e_24, t);
      ;
      LocalPopChoice(u_59);
    }
  else
    {
      t = t_59;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm g_24 (ATerm t)
{
  ATerm o_83 = NULL;
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_83, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_47), term_n_47));
  return(t);
}
ATerm l_13 (ATerm k_77, ATerm m_77, ATerm l_77, ATerm t)
{
  ATerm l_83 = NULL,n_83 = NULL;
  t = m_77;
  t = map_1_0(g_24, t);
  l_83 = t;
  t = l_77;
  t = trm_to_cong_0_0(t);
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, k_77, l_83, n_83);
  return(t);
}
ATerm m_24 (ATerm t)
{
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      s_84 = ATgetArgument(t, 0);
      t_84 = ATgetArgument(t, 1);
      u_84 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_13(s_84, t_84, u_84, t);
  return(t);
}
ATerm u_13 (ATerm i_76, ATerm k_76, ATerm j_76, ATerm t)
{
  ATerm q_83 = NULL,z_83 = NULL,e_84 = NULL,p_84 = NULL;
  t = k_76;
  {
    ATerm v_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_59 = t;
        if((PushChoice() == 0))
          {
            t = k_76;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_59;
          }
        t = k_76;
        {
          ATerm j_24 (ATerm t)
          {
            ATerm k_24 (ATerm t)
            {
              ATerm q_84 = NULL,r_84 = NULL;
              ATerm l_24 (ATerm t)
              {
                t = k_76;
                return(t);
              }
              if(match_cons(t, sym_Op_2))
                {
                  if(((q_84 != NULL) && (q_84 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_84 = ATgetArgument(t, 0);
                  if(((r_84 != NULL) && (r_84 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    r_84 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_13(l_24, not_null(q_84), not_null(r_84), t);
              return(t);
            }
            t = repeat_1_0(k_24, t);
            return(t);
          }
          t = topdown_1_0(j_24, t);
        }
        ;
        LocalPopChoice(w_59);
      }
    else
      {
        t = v_59;
      }
    q_83 = t;
    t = k_76;
    t = map_1_0(m_24, t);
    z_83 = t;
    t = j_76;
    {
      ATerm y_59 = t;
      int z_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_60 = t;
          if((PushChoice() == 0))
            {
              t = q_83;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_60;
            }
          t = j_76;
          {
            ATerm n_24 (ATerm t)
            {
              ATerm b_60 = t;
              int c_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_15 = NULL,e_15 = NULL;
                  ATerm s_24 (ATerm t)
                  {
                    t = q_83;
                    return(t);
                  }
                  if(match_cons(t, sym_Op_2))
                    {
                      if(((c_15 != NULL) && (c_15 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_15 = ATgetArgument(t, 0);
                      if(((e_15 != NULL) && (e_15 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        e_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_13(s_24, not_null(c_15), not_null(e_15), t);
                  ;
                  LocalPopChoice(c_60);
                }
              else
                {
                  t = b_60;
                }
              return(t);
            }
            t = topdown_1_0(n_24, t);
          }
          ;
          LocalPopChoice(z_59);
        }
      else
        {
          t = y_59;
        }
      e_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_83, e_84);
      t = conc_0_0(t);
      p_84 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, p_84)), (ATerm) ATmakeAppl(sym_Signature_1, i_76)));
    }
  }
  return(t);
}
ATerm u_24 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm v_24 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
  d_85 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_85);
  e_85 = t;
  t = term_f_60;
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, d_85), term_f_60);
  t = w_14(w_24, e_85, f_85, t);
  t = d_85;
  return(t);
}
ATerm w_24 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm v_13 (ATerm z_81, ATerm a_82, ATerm b_82, ATerm t)
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
  x_84 = t;
  t = (ATerm) ATempty;
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_60, z_81);
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_60, z_81));
  t = w_14(u_24, y_84, z_84, t);
  t = a_82;
  t = map_1_0(v_24, t);
  t = b_82;
  t = use_vars_0_0(t);
  t = x_84;
  return(t);
}
ATerm d_25 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm w_93 = NULL;
  ATerm m_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_93 = ATgetArgument(t, 0);
          {
            ATerm r_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_60);
      t = w_93;
    }
  else
    {
      t = m_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_93;
    }
  return(t);
}
ATerm f_25 (ATerm t)
{
  ATerm g_94 = NULL,j_94 = NULL,m_94 = NULL;
  g_94 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_94);
  j_94 = t;
  t = term_f_60;
  m_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_94), term_f_60);
  t = w_14(g_25, j_94, m_94, t);
  t = g_94;
  return(t);
}
ATerm g_25 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm h_25 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm i_25 (ATerm t)
{
  ATerm d_95 = NULL;
  ATerm t_60 = t;
  int u_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_95 = ATgetArgument(t, 0);
          {
            ATerm d_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_60);
      t = d_95;
    }
  else
    {
      t = t_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_95;
    }
  return(t);
}
ATerm p_25 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  g_95 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_95);
  h_95 = t;
  t = term_f_60;
  i_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_95), term_f_60);
  t = w_14(q_25, h_95, i_95, t);
  t = g_95;
  return(t);
}
ATerm q_25 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm r_25 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm o_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,l_87 = NULL,t_87 = NULL,u_87 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      h_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
      j_87 = ATgetArgument(t, 2);
      o_86 = ATgetArgument(t, 3);
      t = o_86;
      if(match_cons(t, sym_StratRule_3))
        {
          u_86 = ATgetArgument(t, 0);
          v_86 = ATgetArgument(t, 1);
          w_86 = ATgetArgument(t, 2);
          {
            ATerm q_90 = NULL,r_90 = NULL;
            t = (ATerm) ATempty;
            q_90 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_61, h_87);
            r_90 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_61, h_87));
            t = w_14(d_25, q_90, r_90, t);
            t = j_87;
            t = map_1_0(e_25, t);
            t = map_1_0(f_25, t);
            t = u_86;
            t = unbound_vars_0_0(t);
            t = v_86;
            t = unbound_vars_0_0(t);
            t = w_86;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, h_87, i_87, j_87, (ATerm) ATmakeAppl(sym_StratRule_3, u_86, v_86, w_86));
          }
        }
      else
        {
          ATerm v_94 = NULL,w_94 = NULL;
          if(match_cons(t, sym_Rule_3))
            {
              u_86 = ATgetArgument(t, 0);
              v_86 = ATgetArgument(t, 1);
              w_86 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          v_94 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_61, h_87);
          w_94 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_61, h_87));
          t = w_14(h_25, v_94, w_94, t);
          t = j_87;
          t = map_1_0(i_25, t);
          t = map_1_0(p_25, t);
          t = u_86;
          t = bind_vars_0_0(t);
          t = w_86;
          t = unbound_vars_0_0(t);
          t = v_86;
          t = use_vars_0_0(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, h_87, i_87, j_87, (ATerm) ATmakeAppl(sym_Rule_3, u_86, v_86, w_86));
        }
    }
  else
    {
      ATerm u_95 = NULL,v_95 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          h_87 = ATgetArgument(t, 0);
          i_87 = ATgetArgument(t, 1);
          j_87 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_87;
      if(match_cons(t, sym_Rule_3))
        {
          l_87 = ATgetArgument(t, 0);
          t_87 = ATgetArgument(t, 1);
          u_87 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      u_95 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_61, h_87);
      v_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_61, h_87));
      t = w_14(r_25, u_95, v_95, t);
      t = l_87;
      t = bind_vars_0_0(t);
      t = u_87;
      t = unbound_vars_0_0(t);
      t = t_87;
      t = use_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, h_87, i_87, (ATerm) ATmakeAppl(sym_Rule_3, l_87, t_87, u_87));
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,f_96 = NULL,i_96 = NULL,i_4 = NULL,j_4 = NULL;
  i_96 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      x_95 = ATgetArgument(t, 0);
      y_95 = ATgetArgument(t, 1);
      z_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_96);
  w_95 = t;
  t = x_95;
  t = y_103(t);
  a_96 = t;
  t = y_95;
  t = z_103(t);
  b_96 = t;
  t = z_95;
  t = a_104(t);
  f_96 = t;
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_96, b_96, f_96);
  i_4 = t;
  t = SSLsetAnnotations(i_4, w_95);
  return(t);
}
ATerm s_25 (ATerm t)
{
  ATerm l_61 = t;
  int m_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
      o_97 = t;
      if(match_cons(t, sym__2))
        {
          p_97 = ATgetArgument(t, 0);
          q_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_97;
      {
        ATerm n_61 = t;
        int o_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_97 = ATgetFirst((ATermList) t);
                {
                  ATerm v_61 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_61);
            t = r_97;
            {
              ATerm w_61 = t;
              int x_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm y_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_61);
                  t = p_97;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm z_61 = t;
                      int e_62 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_97;
                          ;
                          LocalPopChoice(e_62);
                        }
                      else
                        {
                          t = z_61;
                          t = u_97(p_97, o_97, t);
                        }
                    }
                  else
                    {
                      t = u_97(p_97, o_97, t);
                    }
                }
              else
                {
                  t = w_61;
                  t = p_97;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = o_97;
                }
            }
          }
        else
          {
            t = n_61;
            t = p_97;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = o_97;
          }
      }
      ;
      LocalPopChoice(m_61);
    }
  else
    {
      t = l_61;
    }
  return(t);
}
ATerm u_97 (ATerm f_97, ATerm g_97, ATerm t)
{
  t = g_97;
  {
    ATerm f_62 = t;
    int g_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_15 = NULL;
        t = term_k_60;
        r_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_60, f_97);
        t = p_15(r_15, f_97, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_62 = ATgetFirst((ATermList) t);
            if(match_cons(h_62, sym_Defined_1))
              {
                ATerm l_62 = ATgetArgument(h_62, 0);
              }
            else
              _fail(t);
            {
              ATerm k_62 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = g_97;
        ;
        LocalPopChoice(g_62);
      }
    else
      {
        t = f_62;
        t = (ATerm) ATmakeAppl(sym__2, f_97, (ATerm) ATinsert(ATempty, term_n_62));
      }
  }
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL;
  t = map_1_0(s_25, t);
  b_97 = t;
  t = term_k_60;
  c_97 = t;
  t = SSL_table_destroy(c_97);
  t = term_k_60;
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_60, b_97);
  t = w_13(d_97, b_97, t);
  t = b_97;
  return(t);
}
ATerm w_13 (ATerm y_70, ATerm x_70, ATerm t)
{
  t = x_70;
  {
    ATerm t_25 (ATerm t)
    {
      ATerm w_97 = NULL,x_97 = NULL;
      if(match_cons(t, sym__2))
        {
          w_97 = ATgetArgument(t, 0);
          x_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(y_70, w_97, x_97);
      t = (ATerm) ATmakeAppl(sym__3, y_70, w_97, x_97);
      return(t);
    }
    t = map_1_0(t_25, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_97 = NULL;
  y_97 = t;
  t = SSL_table_keys(y_97);
  {
    ATerm u_25 (ATerm t)
    {
      ATerm z_97 = NULL,a_98 = NULL;
      z_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_97, z_97);
      t = p_15(y_97, z_97, t);
      a_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_97, a_98);
      return(t);
    }
    t = map_1_0(u_25, t);
  }
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_k_60;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL;
  b_98 = t;
  t = save_Bound_0_0(t);
  c_98 = t;
  t = b_98;
  t = s_142(t);
  d_98 = t;
  t = save_Bound_0_0(t);
  e_98 = t;
  t = term_k_60;
  g_98 = t;
  t = SSL_table_destroy(g_98);
  t = term_k_60;
  h_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_60, c_98);
  t = w_13(h_98, c_98, t);
  t = d_98;
  t = t_142(t);
  f_98 = t;
  t = e_98;
  t = isect_Bound_0_0(t);
  t = f_98;
  return(t);
}
ATerm LChoice_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,p_98 = NULL,k_4 = NULL,n_4 = NULL;
  p_98 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_98 = ATgetArgument(t, 0);
      k_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_98);
  i_98 = t;
  t = j_98;
  t = u_103(t);
  l_98 = t;
  t = k_98;
  t = v_103(t);
  m_98 = t;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, l_98, m_98);
  k_4 = t;
  t = SSLsetAnnotations(k_4, i_98);
  return(t);
}
ATerm Choice_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm v_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,o_4 = NULL,w_4 = NULL;
  b_99 = t;
  if(match_cons(t, sym_Choice_2))
    {
      x_98 = ATgetArgument(t, 0);
      y_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_99);
  v_98 = t;
  t = x_98;
  t = s_102(t);
  z_98 = t;
  t = y_98;
  t = t_102(t);
  a_99 = t;
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, z_98, a_99);
  o_4 = t;
  t = SSLsetAnnotations(o_4, v_98);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm p_100 = NULL;
  p_100 = t;
  {
    ATerm q_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_17 = NULL,h_17 = NULL,i_17 = NULL;
        t = (ATerm) ATempty;
        h_17 = t;
        t = term_d_60;
        i_17 = t;
        t = term_t_62;
        t = v_14(i_17, h_17, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_62 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_62) != ATmakeSymbol("j_1", 0, ATtrue)))
              _fail(t);
            b_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_100), term_u_52), b_17), term_v_62);
        ;
        LocalPopChoice(r_62);
      }
    else
      {
        t = q_62;
        {
          ATerm b_63 = t;
          int c_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_17 = NULL,a_18 = NULL,b_18 = NULL;
              t = (ATerm) ATempty;
              a_18 = t;
              t = term_d_60;
              b_18 = t;
              t = term_t_62;
              t = v_14(b_18, a_18, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_63 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_63) != ATmakeSymbol("g_1", 0, ATtrue)))
                    _fail(t);
                  u_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_100), term_u_52), u_17), term_e_63);
              ;
              LocalPopChoice(c_63);
            }
          else
            {
              t = b_63;
              {
                ATerm h_63 = t;
                int j_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_18 = NULL,u_18 = NULL,v_18 = NULL;
                    t = (ATerm) ATempty;
                    u_18 = t;
                    t = term_d_60;
                    v_18 = t;
                    t = term_t_62;
                    t = v_14(v_18, u_18, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm m_63 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) m_63) != ATmakeSymbol("d_1", 0, ATtrue)))
                          _fail(t);
                        o_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_100), term_u_52), o_18), term_e_63);
                    ;
                    LocalPopChoice(j_63);
                  }
                else
                  {
                    t = h_63;
                    {
                      ATerm n_63 = t;
                      int o_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL;
                          t = (ATerm) ATempty;
                          b_19 = t;
                          t = term_d_60;
                          c_19 = t;
                          t = term_t_62;
                          t = v_14(c_19, b_19, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm p_63 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) p_63) != ATmakeSymbol("a_1", 0, ATtrue)))
                                _fail(t);
                              z_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_100), term_u_52), z_18), term_e_63);
                          ;
                          LocalPopChoice(o_63);
                        }
                      else
                        {
                          t = n_63;
                          {
                            ATerm s_63 = t;
                            int t_63 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_19 = NULL,m_19 = NULL,n_19 = NULL;
                                t = (ATerm) ATempty;
                                m_19 = t;
                                t = term_d_60;
                                n_19 = t;
                                t = term_t_62;
                                t = v_14(n_19, m_19, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm x_63 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) x_63) != ATmakeSymbol("x_0", 0, ATtrue)))
                                      _fail(t);
                                    g_19 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_100), term_u_52), g_19), term_z_63);
                                ;
                                LocalPopChoice(t_63);
                              }
                            else
                              {
                                t = s_63;
                                {
                                  ATerm z_19 = NULL,f_20 = NULL,g_20 = NULL;
                                  t = (ATerm) ATempty;
                                  f_20 = t;
                                  t = term_d_60;
                                  g_20 = t;
                                  t = term_t_62;
                                  t = v_14(g_20, f_20, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm a_64 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) a_64) != ATmakeSymbol("u_0", 0, ATtrue)))
                                        _fail(t);
                                      z_19 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_100), term_u_52), z_19), term_z_63);
                                }
                              }
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
  ATerm b_101 = NULL,d_101 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_64), i_82), term_j_64);
  t = Context_0_0(t);
  b_101 = t;
  t = term_p_38;
  d_101 = t;
  t = SSL_printnl(d_101, b_101);
  t = b_101;
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm h_102 = NULL,p_102 = NULL;
  h_102 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_64 = t;
    int m_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_21 = NULL;
        t = term_k_60;
        m_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_60, h_102);
        t = v_14(m_21, h_102, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm n_64 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_64) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_102);
        ;
        LocalPopChoice(m_64);
      }
    else
      {
        t = l_64;
        {
          ATerm o_64 = t;
          int p_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_21 = NULL;
              t = term_k_60;
              s_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_k_60, h_102);
              t = v_14(s_21, h_102, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(p_64);
            }
          else
            {
              t = o_64;
              {
                ATerm j_22 = NULL;
                t = term_k_60;
                j_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_60, h_102);
                t = v_14(j_22, h_102, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm r_64 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_64) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_102);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm u_64 = t;
  int v_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(v_64);
      {
        ATerm w_64 = t;
        int b_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(b_65);
          }
        else
          {
            t = w_64;
            {
              ATerm w_102 = NULL,x_102 = NULL;
              w_102 = t;
              if(match_cons(t, sym_Var_1))
                {
                  x_102 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_102;
              t = x_13(x_102, t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = u_64;
      {
        ATerm c_65 = t;
        int d_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(d_65);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = c_65;
            {
              ATerm e_65 = t;
              int f_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(f_65);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = e_65;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL,h_103 = NULL,n_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL,w_103 = NULL,x_4 = NULL,j_5 = NULL;
  w_103 = t;
  if(match_cons(t, sym_Rule_3))
    {
      a_103 = ATgetArgument(t, 0);
      h_103 = ATgetArgument(t, 1);
      n_103 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_103);
  z_102 = t;
  t = a_103;
  t = l_101(t);
  r_103 = t;
  t = h_103;
  t = m_101(t);
  s_103 = t;
  t = n_103;
  t = n_101(t);
  t_103 = t;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, r_103, s_103, t_103);
  x_4 = t;
  t = SSLsetAnnotations(x_4, z_102);
  return(t);
}
ATerm RootApp_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL,n_104 = NULL,o_104 = NULL,k_5 = NULL,o_5 = NULL;
  o_104 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      j_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_104);
  i_104 = t;
  t = j_104;
  t = k_100(t);
  n_104 = t;
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, n_104);
  k_5 = t;
  t = SSLsetAnnotations(k_5, i_104);
  return(t);
}
ATerm App_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,w_5 = NULL,f_6 = NULL;
  c_105 = t;
  if(match_cons(t, sym_App_2))
    {
      s_104 = ATgetArgument(t, 0);
      z_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_105);
  r_104 = t;
  t = s_104;
  t = i_100(t);
  a_105 = t;
  t = z_104;
  t = j_100(t);
  b_105 = t;
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, a_105, b_105);
  w_5 = t;
  t = SSLsetAnnotations(w_5, r_104);
  return(t);
}
ATerm y_13 (ATerm i_70, ATerm j_70, ATerm k_70, ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
  f_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_70, j_70);
  t = p_15(i_70, j_70, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_65 = ATgetFirst((ATermList) t);
      g_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_105), k_70);
  h_105 = t;
  t = SSL_table_put(i_70, j_70, h_105);
  t = f_105;
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm h_65 = t;
  int i_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(i_65);
      {
        ATerm i_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            i_105 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = term_k_60;
        l_105 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, i_105);
        m_105 = t;
        t = term_k_65;
        n_105 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_k_60, (ATerm)ATmakeAppl(sym_Var_1, i_105), term_k_65);
        t = y_13(l_105, m_105, n_105, t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_105);
      }
    }
  else
    {
      t = h_65;
      {
        ATerm l_65 = t;
        int s_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(s_65);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = l_65;
            {
              ATerm u_65 = t;
              int w_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(w_65);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = u_65;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL,a_106 = NULL,d_106 = NULL,g_6 = NULL,h_6 = NULL;
  d_106 = t;
  if(match_cons(t, sym_Match_1))
    {
      s_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_106);
  r_105 = t;
  t = s_105;
  t = l_103(t);
  a_106 = t;
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, a_106);
  g_6 = t;
  t = SSLsetAnnotations(g_6, r_105);
  return(t);
}
ATerm Build_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm h_106 = NULL,j_106 = NULL,l_106 = NULL,m_106 = NULL,j_6 = NULL,l_6 = NULL;
  m_106 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_106);
  h_106 = t;
  t = j_106;
  t = m_103(t);
  l_106 = t;
  l_6 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, l_106);
  j_6 = t;
  t = SSLsetAnnotations(j_6, h_106);
  return(t);
}
ATerm x_25 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm z_25 (ATerm t)
{
  t = Scope_2_0(a_26, unbound_vars_0_0, t);
  return(t);
}
ATerm a_26 (ATerm t)
{
  t = map_1_0(b_26, t);
  return(t);
}
ATerm b_26 (ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL,w_106 = NULL;
  q_106 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_106);
  r_106 = t;
  t = term_n_62;
  w_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_106), term_n_62);
  t = w_14(c_26, r_106, w_106, t);
  t = q_106;
  return(t);
}
ATerm c_26 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = Choice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm e_26 (ATerm t)
{
  t = Choice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm k_26 (ATerm t)
{
  t = LChoice_2_0(unbound_vars_0_0, _id, t);
  return(t);
}
ATerm l_26 (ATerm t)
{
  t = LChoice_2_0(_id, unbound_vars_0_0, t);
  return(t);
}
ATerm m_26 (ATerm t)
{
  t = GuardedLChoice_3_0(unbound_vars_0_0, unbound_vars_0_0, _id, t);
  return(t);
}
ATerm p_26 (ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, unbound_vars_0_0, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm y_65 = t;
  int z_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(z_65);
      t = scope_2_0(x_25, z_25, t);
    }
  else
    {
      t = y_65;
      {
        ATerm a_66 = t;
        int b_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(b_66);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = a_66;
            {
              ATerm c_66 = t;
              int d_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(d_66);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = c_66;
                  {
                    ATerm e_66 = t;
                    int f_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(f_66);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = e_66;
                        {
                          ATerm g_66 = t;
                          int h_66 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(h_66);
                              t = abstract_choice_2_0(d_26, e_26, t);
                            }
                          else
                            {
                              t = g_66;
                              {
                                ATerm i_66 = t;
                                int l_66 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(l_66);
                                    t = abstract_choice_2_0(k_26, l_26, t);
                                  }
                                else
                                  {
                                    t = i_66;
                                    {
                                      ATerm o_66 = t;
                                      int p_66 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(p_66);
                                          t = abstract_choice_2_0(m_26, p_26, t);
                                        }
                                      else
                                        {
                                          t = o_66;
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
ATerm r_26 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm s_26 (ATerm t)
{
  ATerm s_107 = NULL;
  ATerm q_66 = t;
  int r_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_107 = ATgetArgument(t, 0);
          {
            ATerm t_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_66);
      t = s_107;
    }
  else
    {
      t = q_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_107;
    }
  return(t);
}
ATerm t_26 (ATerm t)
{
  ATerm v_107 = NULL,z_107 = NULL,a_108 = NULL;
  v_107 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_107);
  z_107 = t;
  t = term_f_60;
  a_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_107), term_f_60);
  t = w_14(u_26, z_107, a_108, t);
  t = v_107;
  return(t);
}
ATerm u_26 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm v_26 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm z_106 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      b_107 = ATgetArgument(t, 0);
      c_107 = ATgetArgument(t, 1);
      d_107 = ATgetArgument(t, 2);
      z_106 = ATgetArgument(t, 3);
      {
        ATerm o_107 = NULL,p_107 = NULL;
        t = (ATerm) ATempty;
        o_107 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_66, b_107);
        p_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_66, b_107));
        t = w_14(r_26, o_107, p_107, t);
        t = d_107;
        t = map_1_0(s_26, t);
        t = map_1_0(t_26, t);
        t = z_106;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_107, c_107, d_107, z_106);
      }
    }
  else
    {
      ATerm f_108 = NULL,k_108 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          b_107 = ATgetArgument(t, 0);
          c_107 = ATgetArgument(t, 1);
          d_107 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      f_108 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_66, b_107);
      k_108 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_66, b_107));
      t = w_14(v_26, f_108, k_108, t);
      t = d_107;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, b_107, c_107, d_107);
    }
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = term_d_60;
  return(t);
}
ATerm x_26 (ATerm t)
{
  t = scope_2_0(y_26, z_26, t);
  return(t);
}
ATerm y_26 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm p_108 = NULL;
  p_108 = t;
  t = free_vars_3_0(a_27, b_27, tboundin_3_0, t);
  t = map_1_0(f_27, t);
  t = p_108;
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
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
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(a_67);
            }
          else
            {
              t = z_66;
              {
                ATerm h_110 = NULL,i_110 = NULL,l_110 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    h_110 = ATgetArgument(t, 0);
                    i_110 = ATgetArgument(t, 1);
                    l_110 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_108;
                t = v_13(h_110, i_110, l_110, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm q_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_108);
  return(t);
}
ATerm b_27 (ATerm t)
{
  ATerm b_67 = t;
  int d_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_67);
    }
  else
    {
      t = b_67;
      {
        ATerm s_108 = NULL,t_108 = NULL,a_109 = NULL,b_109 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_108 = ATgetArgument(t, 0);
            t = s_108;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_108 = ATgetArgument(t, 0);
                t_108 = ATgetArgument(t, 1);
                a_109 = ATgetArgument(t, 2);
                b_109 = ATgetArgument(t, 3);
                t = a_109;
                t = map_1_0(c_27, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_108 = ATgetArgument(t, 0);
                    t_108 = ATgetArgument(t, 1);
                    a_109 = ATgetArgument(t, 2);
                    b_109 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_109;
                t = map_1_0(d_27, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_27 (ATerm t)
{
  ATerm j_109 = NULL;
  ATerm e_67 = t;
  int f_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_109 = ATgetArgument(t, 0);
          {
            ATerm g_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_67);
      t = j_109;
    }
  else
    {
      t = e_67;
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
ATerm d_27 (ATerm t)
{
  ATerm a_110 = NULL;
  ATerm h_67 = t;
  int i_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_110 = ATgetArgument(t, 0);
          {
            ATerm j_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_67);
      t = a_110;
    }
  else
    {
      t = h_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_110;
    }
  return(t);
}
ATerm f_27 (ATerm t)
{
  ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL;
  d_110 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_110);
  e_110 = t;
  t = term_n_62;
  f_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, d_110), term_n_62);
  t = w_14(g_27, e_110, f_110, t);
  t = d_110;
  return(t);
}
ATerm g_27 (ATerm t)
{
  t = term_k_60;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  t = scope_2_0(w_26, x_26, t);
  return(t);
}
ATerm Signature_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL,v_110 = NULL,w_110 = NULL,p_6 = NULL,q_6 = NULL;
  w_110 = t;
  if(match_cons(t, sym_Signature_1))
    {
      u_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_110);
  t_110 = t;
  t = u_110;
  t = s_98(t);
  v_110 = t;
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, v_110);
  p_6 = t;
  t = SSLsetAnnotations(p_6, t_110);
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = Cons_2_0(i_27, j_27, t);
  return(t);
}
ATerm i_27 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm j_27 (ATerm t)
{
  t = Cons_2_0(k_27, l_27, t);
  return(t);
}
ATerm k_27 (ATerm t)
{
  t = Overlays_1_0(n_27, t);
  return(t);
}
ATerm l_27 (ATerm t)
{
  t = Cons_2_0(q_27, r_27, t);
  return(t);
}
ATerm n_27 (ATerm t)
{
  ATerm k_67 = t;
  int l_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_67);
    }
  else
    {
      t = k_67;
      {
        ATerm z_110 = NULL;
        z_110 = t;
        t = filter_1_0(p_27, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_110;
      }
    }
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm m_67 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_67;
    }
  return(t);
}
ATerm q_27 (ATerm t)
{
  t = Strategies_1_0(s_27, t);
  return(t);
}
ATerm r_27 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm s_27 (ATerm t)
{
  ATerm n_67 = t;
  int o_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_67);
    }
  else
    {
      t = n_67;
      {
        ATerm b_111 = NULL;
        b_111 = t;
        t = filter_1_0(t_27, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_111;
      }
    }
  return(t);
}
ATerm t_27 (ATerm t)
{
  ATerm p_67 = t;
  if((PushChoice() == 0))
    {
      t = def_use_def_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_67;
    }
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  t = Specification_1_0(h_27, t);
  return(t);
}
ATerm u_27 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL;
  w_111 = t;
  {
    ATerm q_67 = t;
    int r_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm s_67 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_67);
        t = w_111;
        {
          ATerm t_67 = t;
          if((PushChoice() == 0))
            {
              ATerm w_22 = NULL,x_22 = NULL,i_23 = NULL;
              w_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  x_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_v_67;
              i_23 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_67, w_22);
              t = v_14(i_23, w_22, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm w_67 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_67) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_67;
            }
          t = term_y_67;
        }
      }
    else
      {
        t = q_67;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_y_67;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                x_111 = ATgetArgument(t, 0);
                {
                  ATerm c_112 = NULL;
                  t = x_111;
                  t = free_vars_3_0(v_27, x_27, tboundin_3_0, t);
                  t = map_1_0(a_28, t);
                  c_112 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_67, c_112);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    x_111 = ATgetArgument(t, 0);
                    y_111 = ATgetArgument(t, 1);
                    {
                      ATerm h_114 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, x_111, y_111);
                      t = free_vars_3_0(b_28, c_28, tboundin_3_0, t);
                      t = map_1_0(g_28, t);
                      h_114 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_z_67, h_114);
                    }
                  }
                else
                  {
                    ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm a_68 = ATgetArgument(t, 0);
                        ATerm b_68 = ATgetArgument(t, 1);
                        ATerm d_68 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_p_38;
                    q_23 = t;
                    t = (ATerm) ATinsert(ATempty, term_e_68);
                    r_23 = t;
                    t = SSL_printnl(q_23, r_23);
                    t = term_s_38;
                    s_23 = t;
                    t = SSL_exit(s_23);
                    t = (ATerm) ATinsert(ATempty, term_e_68);
                  }
              }
          }
      }
  }
  return(t);
}
ATerm v_27 (ATerm t)
{
  ATerm d_112 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_112);
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm f_68 = t;
  int h_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_68);
    }
  else
    {
      t = f_68;
      {
        ATerm h_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_112 = ATgetArgument(t, 0);
            t = h_112;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_112 = ATgetArgument(t, 0);
                k_112 = ATgetArgument(t, 1);
                l_112 = ATgetArgument(t, 2);
                m_112 = ATgetArgument(t, 3);
                t = l_112;
                t = map_1_0(y_27, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_112 = ATgetArgument(t, 0);
                    k_112 = ATgetArgument(t, 1);
                    l_112 = ATgetArgument(t, 2);
                    m_112 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_112;
                t = map_1_0(z_27, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_27 (ATerm t)
{
  ATerm c_113 = NULL;
  ATerm i_68 = t;
  int j_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_113 = ATgetArgument(t, 0);
          {
            ATerm k_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_68);
      t = c_113;
    }
  else
    {
      t = i_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_113;
    }
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm n_113 = NULL;
  ATerm l_68 = t;
  int n_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_113 = ATgetArgument(t, 0);
          {
            ATerm o_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_68);
      t = n_113;
    }
  else
    {
      t = l_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_113;
    }
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm e_114 = NULL;
  e_114 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_114);
  return(t);
}
ATerm b_28 (ATerm t)
{
  ATerm i_114 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_114);
  return(t);
}
ATerm c_28 (ATerm t)
{
  ATerm p_68 = t;
  int r_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_68);
    }
  else
    {
      t = p_68;
      {
        ATerm k_114 = NULL,l_114 = NULL,p_114 = NULL,s_114 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_114 = ATgetArgument(t, 0);
            t = k_114;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_114 = ATgetArgument(t, 0);
                l_114 = ATgetArgument(t, 1);
                p_114 = ATgetArgument(t, 2);
                s_114 = ATgetArgument(t, 3);
                t = p_114;
                t = map_1_0(e_28, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_114 = ATgetArgument(t, 0);
                    l_114 = ATgetArgument(t, 1);
                    p_114 = ATgetArgument(t, 2);
                    s_114 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_114;
                t = map_1_0(f_28, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_28 (ATerm t)
{
  ATerm a_115 = NULL;
  ATerm s_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_115 = ATgetArgument(t, 0);
          {
            ATerm v_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_68);
      t = a_115;
    }
  else
    {
      t = s_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_115;
    }
  return(t);
}
ATerm f_28 (ATerm t)
{
  ATerm l_115 = NULL;
  ATerm y_68 = t;
  int z_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_115 = ATgetArgument(t, 0);
          {
            ATerm a_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_68);
      t = l_115;
    }
  else
    {
      t = y_68;
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
ATerm g_28 (ATerm t)
{
  ATerm o_115 = NULL;
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_115);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(u_27, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm h_28 (ATerm t)
{
  ATerm w_117 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_117);
  return(t);
}
ATerm i_28 (ATerm t)
{
  ATerm c_69 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_69);
    }
  else
    {
      t = c_69;
      {
        ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_117 = ATgetArgument(t, 0);
            t = y_117;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_117 = ATgetArgument(t, 0);
                z_117 = ATgetArgument(t, 1);
                a_118 = ATgetArgument(t, 2);
                b_118 = ATgetArgument(t, 3);
                t = a_118;
                t = map_1_0(j_28, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_117 = ATgetArgument(t, 0);
                    z_117 = ATgetArgument(t, 1);
                    a_118 = ATgetArgument(t, 2);
                    b_118 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_118;
                t = map_1_0(k_28, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_28 (ATerm t)
{
  ATerm j_118 = NULL;
  ATerm e_69 = t;
  int f_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_118 = ATgetArgument(t, 0);
          {
            ATerm g_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_69);
      t = j_118;
    }
  else
    {
      t = e_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_118;
    }
  return(t);
}
ATerm k_28 (ATerm t)
{
  ATerm u_118 = NULL;
  ATerm h_69 = t;
  int j_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_118 = ATgetArgument(t, 0);
          {
            ATerm k_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_69);
      t = u_118;
    }
  else
    {
      t = h_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_118;
    }
  return(t);
}
ATerm l_28 (ATerm t)
{
  ATerm x_118 = NULL;
  x_118 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_118);
  return(t);
}
ATerm m_28 (ATerm t)
{
  ATerm y_118 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_118);
  return(t);
}
ATerm n_28 (ATerm t)
{
  ATerm p_69 = t;
  int q_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_69);
    }
  else
    {
      t = p_69;
      {
        ATerm a_119 = NULL,b_119 = NULL,c_119 = NULL,d_119 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_119 = ATgetArgument(t, 0);
            t = a_119;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_119 = ATgetArgument(t, 0);
                b_119 = ATgetArgument(t, 1);
                c_119 = ATgetArgument(t, 2);
                d_119 = ATgetArgument(t, 3);
                t = c_119;
                t = map_1_0(o_28, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_119 = ATgetArgument(t, 0);
                    b_119 = ATgetArgument(t, 1);
                    c_119 = ATgetArgument(t, 2);
                    d_119 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_119;
                t = map_1_0(p_28, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_28 (ATerm t)
{
  ATerm l_119 = NULL;
  ATerm r_69 = t;
  int s_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_119 = ATgetArgument(t, 0);
          {
            ATerm t_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_69);
      t = l_119;
    }
  else
    {
      t = r_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_119;
    }
  return(t);
}
ATerm p_28 (ATerm t)
{
  ATerm y_119 = NULL;
  ATerm x_69 = t;
  int y_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_119 = ATgetArgument(t, 0);
          {
            ATerm z_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_69);
      t = y_119;
    }
  else
    {
      t = x_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_119;
    }
  return(t);
}
ATerm q_28 (ATerm t)
{
  ATerm h_120 = NULL,v_23 = NULL,w_23 = NULL;
  h_120 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_120);
  v_23 = t;
  t = term_v_67;
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_67, (ATerm) ATmakeAppl(sym_Var_1, h_120));
  t = v_14(w_23, v_23, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_70 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_70) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_120);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_121 (ATerm z_116, ATerm a_117, ATerm b_117, ATerm c_117, ATerm d_117, ATerm e_117, ATerm f_117, ATerm t)
  {
    ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, d_117, term_p_70);
    {
      ATerm r_70 = t;
      if((PushChoice() == 0))
        {
          ATerm u_117 = NULL;
          if(match_cons(t, sym__2))
            {
              u_117 = ATgetArgument(t, 0);
              if((u_117 != ATgetArgument(t, 1)))
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
          t = r_70;
        }
      t = new_0_0(t);
      m_117 = t;
      t = c_117;
      t = dummify_0_0(t);
      n_117 = t;
      {
        ATerm s_70 = t;
        int t_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((c_117 != t))
              {
                _fail(t);
              }
            t = (ATerm) ATmakeAppl(sym_Var_1, m_117);
            ;
            LocalPopChoice(t_70);
          }
        else
          {
            t = s_70;
          }
        o_117 = t;
        t = n_117;
        t = free_vars_3_0(h_28, i_28, tboundin_3_0, t);
        t = map_1_0(l_28, t);
        p_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_117, e_117);
        t = free_vars_3_0(m_28, n_28, tboundin_3_0, t);
        t = filter_1_0(q_28, t);
        q_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_117, p_117);
        t = diff_0_0(t);
        r_117 = t;
        t = new_0_0(t);
        s_117 = t;
        t = z_116;
        t = n_0(t);
        t_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_117, (ATerm) ATmakeAppl(sym_Op_2, term_u_70, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_v_70, (ATerm) ATinsert(CheckATermList(r_117), (ATerm) ATmakeAppl(sym_Str_1, s_117)))), n_117)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_116, a_117, b_117, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_117), c_117), d_117, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_70, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_116)))), o_117), (ATerm) ATmakeAppl(sym_Op_2, term_v_70, (ATerm) ATinsert(CheckATermList(r_117), (ATerm) ATmakeAppl(sym_Str_1, s_117)))), e_117))));
      }
    }
    return(t);
  }
  ATerm i_120 = NULL,l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL,a_121 = NULL,b_121 = NULL;
  m_120 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      n_120 = ATgetArgument(t, 0);
      o_120 = ATgetArgument(t, 1);
      p_120 = ATgetArgument(t, 2);
      q_120 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = q_120;
  if(match_cons(t, sym_Rule_3))
    {
      r_120 = ATgetArgument(t, 0);
      a_121 = ATgetArgument(t, 1);
      b_121 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_121;
  if(match_cons(t, sym_Op_2))
    {
      i_120 = ATgetArgument(t, 0);
      l_120 = ATgetArgument(t, 1);
      t = l_120;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = i_120;
          if(match_string(t, "Undefined"))
            {
              ATerm a_71 = t;
              int b_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
                  t = m_120;
                  t = new_0_0(t);
                  z_24 = t;
                  t = r_120;
                  t = dummify_0_0(t);
                  a_25 = t;
                  {
                    ATerm c_71 = t;
                    int d_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if((r_120 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, z_24);
                        ;
                        LocalPopChoice(d_71);
                      }
                    else
                      {
                        t = c_71;
                      }
                    b_25 = t;
                    t = n_120;
                    t = n_0(t);
                    c_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, c_25, (ATerm) ATmakeAppl(sym_Op_2, term_u_70, (ATerm) ATinsert(ATinsert(ATempty, term_p_70), a_25)))), (ATerm) ATmakeAppl(sym_RDefT_4, n_120, o_120, p_120, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_24), r_120), term_p_70, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_70, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, n_120)))), b_25), term_p_70), (ATerm) ATmakeAppl(sym_Seq_2, b_121, term_u_47)))));
                  }
                  ;
                  LocalPopChoice(b_71);
                }
              else
                {
                  t = a_71;
                  t = f_121(n_120, o_120, p_120, r_120, a_121, b_121, m_120, t);
                }
            }
          else
            {
              t = f_121(n_120, o_120, p_120, r_120, a_121, b_121, m_120, t);
            }
        }
      else
        {
          t = i_120;
          t = f_121(n_120, o_120, p_120, r_120, a_121, b_121, m_120, t);
        }
    }
  else
    {
      t = f_121(n_120, o_120, p_120, r_120, a_121, b_121, m_120, t);
    }
  return(t);
}
ATerm r_28 (ATerm t)
{
  t = SplitDynamicRule_1_0(s_28, t);
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm k_121 = NULL;
  k_121 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_71, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_121))));
  return(t);
}
ATerm t_28 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm v_28 (ATerm t)
{
  ATerm l_121 = NULL,o_121 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_121 = ATgetFirst((ATermList) t);
      o_121 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_121, o_121);
  return(t);
}
ATerm w_28 (ATerm t)
{
  ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_71 = ATgetArgument(t, 0);
      if(match_cons(g_71, sym__2))
        {
          p_121 = ATgetArgument(g_71, 0);
          q_121 = ATgetArgument(g_71, 1);
        }
      else
        _fail(t);
      {
        ATerm h_71 = ATgetArgument(t, 1);
        if(match_cons(h_71, sym__2))
          {
            r_121 = ATgetArgument(h_71, 0);
            s_121 = ATgetArgument(h_71, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_121), p_121), (ATerm) ATinsert(CheckATermList(s_121), q_121));
  return(t);
}
ATerm x_28 (ATerm t)
{
  t = SplitDynamicRule_1_0(z_28, t);
  return(t);
}
ATerm z_28 (ATerm t)
{
  ATerm u_121 = NULL;
  u_121 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_71, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_121))));
  return(t);
}
ATerm a_29 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_40;
  return(t);
}
ATerm c_29 (ATerm t)
{
  ATerm v_121 = NULL,b_122 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_121 = ATgetFirst((ATermList) t);
      b_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_121, b_122);
  return(t);
}
ATerm d_29 (ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_71 = ATgetArgument(t, 0);
      if(match_cons(k_71, sym__2))
        {
          c_122 = ATgetArgument(k_71, 0);
          d_122 = ATgetArgument(k_71, 1);
        }
      else
        _fail(t);
      {
        ATerm l_71 = ATgetArgument(t, 1);
        if(match_cons(l_71, sym__2))
          {
            e_122 = ATgetArgument(l_71, 0);
            f_122 = ATgetArgument(l_71, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_122), c_122), (ATerm) ATinsert(CheckATermList(f_122), d_122));
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm i_121 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      i_121 = ATgetArgument(t, 0);
      t = i_121;
      t = map_1_0(r_28, t);
      t = genzip_4_0(t_28, v_28, w_28, _id, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          i_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_121;
      t = map_1_0(x_28, t);
      t = genzip_4_0(a_29, c_29, d_29, _id, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm g_122 (ATerm t)
  {
    ATerm o_71 = t;
    int p_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_115(t);
        ;
        LocalPopChoice(p_71);
      }
    else
      {
        t = o_71;
        t = SRTS_one(g_122, t);
      }
    return(t);
  }
  t = g_122(t);
  return(t);
}
ATerm f_29 (ATerm t)
{
  t = term_v_67;
  return(t);
}
ATerm j_29 (ATerm t)
{
  ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL;
  o_122 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_122);
  p_122 = t;
  t = term_r_71;
  q_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_122), term_r_71);
  t = w_14(k_29, p_122, q_122, t);
  t = o_122;
  return(t);
}
ATerm k_29 (ATerm t)
{
  t = term_v_67;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm h_141 (ATerm), ATerm t)
{
  ATerm r_122 (ATerm t)
  {
    ATerm e_29 (ATerm t)
    {
      ATerm s_71 = t;
      int t_71 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_141(t);
          ;
          LocalPopChoice(t_71);
        }
      else
        {
          t = s_71;
          {
            ATerm j_122 = NULL,k_122 = NULL,n_122 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                j_122 = ATgetArgument(t, 0);
                k_122 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_122, k_122);
            {
              ATerm h_29 (ATerm t)
              {
                t = j_122;
                t = map_1_0(j_29, t);
                t = k_122;
                t = r_122(t);
                if(((n_122 != NULL) && (n_122 != t)))
                  _fail(t);
                else
                  n_122 = t;
                return(t);
              }
              t = scope_2_0(f_29, h_29, t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, j_122, not_null(n_122));
            }
          }
        }
      return(t);
    }
    t = oncetd_1_0(e_29, t);
    return(t);
  }
  t = r_122(t);
  return(t);
}
ATerm l_29 (ATerm t)
{
  t = term_v_67;
  return(t);
}
ATerm o_29 (ATerm t)
{
  ATerm z_122 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_122);
  return(t);
}
ATerm p_29 (ATerm t)
{
  ATerm v_71 = t;
  int w_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_71);
    }
  else
    {
      t = v_71;
      {
        ATerm b_123 = NULL,c_123 = NULL,d_123 = NULL,e_123 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_123 = ATgetArgument(t, 0);
            t = b_123;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_123 = ATgetArgument(t, 0);
                c_123 = ATgetArgument(t, 1);
                d_123 = ATgetArgument(t, 2);
                e_123 = ATgetArgument(t, 3);
                t = d_123;
                t = map_1_0(q_29, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_123 = ATgetArgument(t, 0);
                    c_123 = ATgetArgument(t, 1);
                    d_123 = ATgetArgument(t, 2);
                    e_123 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_123;
                t = map_1_0(r_29, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_29 (ATerm t)
{
  ATerm u_123 = NULL;
  ATerm x_71 = t;
  int y_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_123 = ATgetArgument(t, 0);
          {
            ATerm z_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_71);
      t = u_123;
    }
  else
    {
      t = x_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_123;
    }
  return(t);
}
ATerm r_29 (ATerm t)
{
  ATerm n_124 = NULL;
  ATerm c_72 = t;
  int d_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_124 = ATgetArgument(t, 0);
          {
            ATerm e_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_72);
      t = n_124;
    }
  else
    {
      t = c_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_124;
    }
  return(t);
}
ATerm s_29 (ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL;
  q_124 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_124);
  r_124 = t;
  t = term_r_71;
  s_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_124), term_r_71);
  t = w_14(t_29, r_124, s_124, t);
  t = q_124;
  return(t);
}
ATerm t_29 (ATerm t)
{
  t = term_v_67;
  return(t);
}
ATerm g_14 (ATerm r_74, ATerm q_74, ATerm t)
{
  ATerm w_122 = NULL,x_122 = NULL,y_122 = NULL;
  ATerm n_29 (ATerm t)
  {
    t = r_74;
    t = free_vars_3_0(o_29, p_29, tboundin_3_0, t);
    t = map_1_0(s_29, t);
    t = r_74;
    {
      ATerm u_29 (ATerm t)
      {
        t = split_dynamic_rules_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((x_122 != NULL) && (x_122 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              x_122 = ATgetArgument(t, 0);
            if(((w_122 != NULL) && (w_122 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              w_122 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_122));
        return(t);
      }
      t = split_dynamic_rule_1_0(u_29, t);
      if(((y_122 != NULL) && (y_122 != t)))
        _fail(t);
      else
        y_122 = t;
    }
    return(t);
  }
  t = scope_2_0(l_29, n_29, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_122)), not_null(y_122)), q_74);
  t = conc_0_0(t);
  return(t);
}
ATerm listtd_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  ATerm t_124 (ATerm t)
  {
    t = c_121(t);
    {
      ATerm f_72 = t;
      int h_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(h_72);
        }
      else
        {
          t = f_72;
          t = Cons_2_0(_id, t_124, t);
        }
    }
    return(t);
  }
  t = t_124(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm w_124 = NULL,z_124 = NULL,d_125 = NULL,e_125 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      d_125 = ATgetArgument(t, 0);
      e_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_124 = ATgetFirst((ATermList) t);
      z_124 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_k_72, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, z_124, e_125)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_124))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_125;
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm l_125 = NULL,n_125 = NULL,o_125 = NULL,p_125 = NULL,x_6 = NULL,y_6 = NULL;
  p_125 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      n_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_125);
  l_125 = t;
  t = n_125;
  t = l_102(t);
  o_125 = t;
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, o_125);
  x_6 = t;
  t = SSLsetAnnotations(x_6, l_125);
  return(t);
}
ATerm Scope_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm t)
{
  ATerm s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL,b_126 = NULL,c_126 = NULL,b_7 = NULL,c_7 = NULL;
  c_126 = t;
  if(match_cons(t, sym_Scope_2))
    {
      t_125 = ATgetArgument(t, 0);
      u_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_126);
  s_125 = t;
  t = t_125;
  t = o_103(t);
  v_125 = t;
  t = u_125;
  t = p_103(t);
  b_126 = t;
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_125, b_126);
  b_7 = t;
  t = SSLsetAnnotations(b_7, s_125);
  return(t);
}
ATerm tboundin_3_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t)
{
  ATerm p_72 = t;
  int q_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(l_142, j_142, t);
      ;
      LocalPopChoice(q_72);
    }
  else
    {
      t = p_72;
      {
        ATerm r_72 = t;
        int s_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(l_142, l_142, l_142, j_142, t);
            ;
            LocalPopChoice(s_72);
          }
        else
          {
            t = r_72;
            {
              ATerm u_72 = t;
              int y_72 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(l_142, l_142, l_142, j_142, t);
                  ;
                  LocalPopChoice(y_72);
                }
              else
                {
                  t = u_72;
                  t = DynamicRules_1_0(j_142, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_29 (ATerm t)
{
  ATerm i_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_126);
  return(t);
}
ATerm x_29 (ATerm t)
{
  ATerm z_72 = t;
  int a_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_73);
    }
  else
    {
      t = z_72;
      {
        ATerm l_126 = NULL,m_126 = NULL,n_126 = NULL,o_126 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_126 = ATgetArgument(t, 0);
            t = l_126;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_126 = ATgetArgument(t, 0);
                m_126 = ATgetArgument(t, 1);
                n_126 = ATgetArgument(t, 2);
                o_126 = ATgetArgument(t, 3);
                t = n_126;
                t = map_1_0(y_29, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_126 = ATgetArgument(t, 0);
                    m_126 = ATgetArgument(t, 1);
                    n_126 = ATgetArgument(t, 2);
                    o_126 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_126;
                t = map_1_0(c_30, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_29 (ATerm t)
{
  ATerm w_126 = NULL;
  ATerm i_73 = t;
  int j_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_126 = ATgetArgument(t, 0);
          {
            ATerm k_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_73);
      t = w_126;
    }
  else
    {
      t = i_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_126;
    }
  return(t);
}
ATerm c_30 (ATerm t)
{
  ATerm k_127 = NULL;
  ATerm o_73 = t;
  int w_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_127 = ATgetArgument(t, 0);
          {
            ATerm x_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_73);
      t = k_127;
    }
  else
    {
      t = o_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_127;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_29, x_29, tboundin_3_0, t);
  return(t);
}
ATerm d_30 (ATerm t)
{
  ATerm b_128 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_128);
  return(t);
}
ATerm e_30 (ATerm t)
{
  ATerm b_74 = t;
  int c_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_74);
    }
  else
    {
      t = b_74;
      {
        ATerm d_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_128 = ATgetArgument(t, 0);
            t = d_128;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_128 = ATgetArgument(t, 0);
                g_128 = ATgetArgument(t, 1);
                h_128 = ATgetArgument(t, 2);
                i_128 = ATgetArgument(t, 3);
                t = h_128;
                t = map_1_0(g_30, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_128 = ATgetArgument(t, 0);
                    g_128 = ATgetArgument(t, 1);
                    h_128 = ATgetArgument(t, 2);
                    i_128 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_128;
                t = map_1_0(i_30, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm z_128 = NULL;
  ATerm d_74 = t;
  int e_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_128 = ATgetArgument(t, 0);
          {
            ATerm f_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_74);
      t = z_128;
    }
  else
    {
      t = d_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_128;
    }
  return(t);
}
ATerm i_30 (ATerm t)
{
  ATerm z_129 = NULL;
  ATerm g_74 = t;
  int k_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_129 = ATgetArgument(t, 0);
          {
            ATerm m_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_74);
      t = z_129;
    }
  else
    {
      t = g_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_129;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_127 = NULL,y_127 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_127 = ATgetArgument(t, 0);
      t = y_127;
      if(match_cons(t, sym_Rule_3))
        {
          s_127 = ATgetArgument(t, 0);
          {
            ATerm n_74 = ATgetArgument(t, 1);
          }
          {
            ATerm o_74 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_127;
      t = free_vars_3_0(d_30, e_30, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_127 = ATgetArgument(t, 0);
          {
            ATerm p_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_127;
    }
  return(t);
}
ATerm m_14 (ATerm x_123 (ATerm), ATerm h_47, ATerm g_47, ATerm t)
{
  t = h_47;
  {
    ATerm s_130 (ATerm t)
    {
      ATerm s_74 = t;
      int t_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_47;
          ;
          LocalPopChoice(t_74);
        }
      else
        {
          t = s_74;
          {
            ATerm u_74 = t;
            int w_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_130 = NULL,j_130 = NULL,k_130 = NULL;
                i_130 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_130 = ATgetFirst((ATermList) t);
                    k_130 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_130;
                {
                  ATerm j_30 (ATerm t)
                  {
                    t = g_47;
                    return(t);
                  }
                  t = n_14(x_123, j_30, j_130, k_130, t);
                  t = s_130(t);
                }
                ;
                LocalPopChoice(w_74);
              }
            else
              {
                t = u_74;
                t = Cons_2_0(_id, s_130, t);
              }
          }
        }
      return(t);
    }
    t = s_130(t);
  }
  return(t);
}
ATerm n_14 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm l_47, ATerm k_47, ATerm t)
{
  t = b_124(t);
  {
    ATerm k_30 (ATerm t)
    {
      ATerm w_130 = NULL;
      w_130 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_47, w_130);
      t = a_124(t);
      return(t);
    }
    t = fetch_1_0(k_30, t);
    t = k_47;
  }
  return(t);
}
ATerm o_14 (ATerm s_123 (ATerm), ATerm f_47, ATerm e_47, ATerm t)
{
  t = f_47;
  {
    ATerm j_131 (ATerm t)
    {
      ATerm x_74 = t;
      int y_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_74);
        }
      else
        {
          t = x_74;
          {
            ATerm z_74 = t;
            int a_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL;
                e_131 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_131 = ATgetFirst((ATermList) t);
                    g_131 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_131;
                {
                  ATerm l_30 (ATerm t)
                  {
                    t = e_47;
                    return(t);
                  }
                  t = n_14(s_123, l_30, f_131, g_131, t);
                  t = j_131(t);
                }
                ;
                LocalPopChoice(a_75);
              }
            else
              {
                t = z_74;
                t = Cons_2_0(_id, j_131, t);
              }
          }
        }
      return(t);
    }
    t = j_131(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm t)
{
  ATerm k_131 (ATerm t)
  {
    ATerm b_75 = t;
    int c_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_121(t);
        ;
        LocalPopChoice(c_75);
      }
    else
      {
        t = b_75;
        t = x_121(t);
        t = _2_0(z_121, k_131, t);
        t = y_121(t);
      }
    return(t);
  }
  t = k_131(t);
  return(t);
}
ATerm m_30 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_75 = ATgetArgument(t, 0);
      if(((ATgetType(d_75) != AT_LIST) || !(ATisEmpty(d_75))))
        _fail(t);
      {
        ATerm e_75 = ATgetArgument(t, 1);
        if(((ATgetType(e_75) != AT_LIST) || !(ATisEmpty(e_75))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_30 (ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL,v_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_75 = ATgetArgument(t, 0);
      if(((ATgetType(f_75) == AT_LIST) && !(ATisEmpty(f_75))))
        {
          s_131 = ATgetFirst((ATermList) f_75);
          t_131 = (ATerm) ATgetNext((ATermList) f_75);
        }
      else
        _fail(t);
      {
        ATerm g_75 = ATgetArgument(t, 1);
        if(((ATgetType(g_75) == AT_LIST) && !(ATisEmpty(g_75))))
          {
            u_131 = ATgetFirst((ATermList) g_75);
            v_131 = (ATerm) ATgetNext((ATermList) g_75);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_131, u_131), (ATerm) ATmakeAppl(sym__2, t_131, v_131));
  return(t);
}
ATerm o_30 (ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL;
  if(match_cons(t, sym__2))
    {
      w_131 = ATgetArgument(t, 0);
      x_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_131), w_131);
  return(t);
}
ATerm s_14 (ATerm q_656, ATerm v_656, ATerm h_74, ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL,q_131 = NULL,r_131 = NULL;
  t = SSL_explode_term(v_656);
  if(match_cons(t, sym__2))
    {
      m_131 = ATgetArgument(t, 0);
      n_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_656);
  if(match_cons(t, sym__2))
    {
      if((m_131 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_131, n_131);
  t = genzip_4_0(m_30, n_30, o_30, _id, t);
  r_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_131, h_74);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm t)
{
  ATerm y_131 (ATerm t)
  {
    ATerm h_75 = t;
    int i_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_113(t);
        ;
        LocalPopChoice(i_75);
      }
    else
      {
        t = h_75;
        t = u_113(t);
        t = y_131(t);
      }
    return(t);
  }
  t = y_131(t);
  return(t);
}
ATerm for_3_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  t = w_113(t);
  t = while_not_2_0(x_113, y_113, t);
  return(t);
}
ATerm p_30 (ATerm t)
{
  ATerm e_132 = NULL;
  e_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_132);
  return(t);
}
ATerm s_30 (ATerm t)
{
  t = _2_0(_id, w_30, t);
  return(t);
}
ATerm t_30 (ATerm t)
{
  ATerm j_75 = t;
  int k_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, x_30, t);
      ;
      LocalPopChoice(k_75);
    }
  else
    {
      t = j_75;
      {
        ATerm s_132 = NULL,t_132 = NULL,u_132 = NULL,v_132 = NULL;
        if(match_cons(t, sym__2))
          {
            s_132 = ATgetArgument(t, 0);
            t_132 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_132;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_132 = ATgetFirst((ATermList) t);
            v_132 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_132), u_132), v_132);
      }
    }
  return(t);
}
ATerm w_30 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm x_30 (ATerm t)
{
  ATerm f_132 = NULL,g_132 = NULL,h_132 = NULL,j_132 = NULL,l_132 = NULL;
  f_132 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_132 = ATgetFirst((ATermList) t);
      l_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_132;
  if(match_cons(t, sym__2))
    {
      h_132 = ATgetArgument(t, 0);
      j_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_75 = t;
    int m_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_132;
        if((h_132 != t))
          {
            _fail(t);
          }
        t = l_132;
        ;
        LocalPopChoice(m_75);
      }
    else
      {
        t = l_75;
        t = f_132;
        t = s_14(h_132, j_132, l_132, t);
      }
  }
  return(t);
}
ATerm y_30 (ATerm t)
{
  ATerm e_133 = NULL;
  if(match_cons(t, sym__2))
    {
      e_133 = ATgetArgument(t, 0);
      if((e_133 != ATgetArgument(t, 1)))
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
  ATerm n_75 = t;
  int o_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_30, s_30, t_30, t);
      ;
      LocalPopChoice(o_75);
    }
  else
    {
      t = n_75;
      {
        ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL;
        z_132 = t;
        if(match_cons(t, sym__2))
          {
            a_133 = ATgetArgument(t, 0);
            b_133 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_132;
        t = o_14(y_30, a_133, b_133, t);
      }
    }
  return(t);
}
ATerm a_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_31 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  if(match_cons(t, sym__2))
    {
      f_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(d_31, f_26, g_26, t);
  return(t);
}
ATerm d_31 (ATerm t)
{
  ATerm h_26 = NULL;
  if(match_cons(t, sym__2))
    {
      h_26 = ATgetArgument(t, 0);
      if((h_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_31 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(g_31, n_26, o_26, t);
  return(t);
}
ATerm g_31 (ATerm t)
{
  ATerm q_26 = NULL;
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      if((q_26 != ATgetArgument(t, 1)))
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
  ATerm q_133 (ATerm t)
  {
    ATerm p_75 = t;
    int q_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_140(t);
        ;
        LocalPopChoice(q_75);
      }
    else
      {
        t = p_75;
        {
          ATerm r_75 = t;
          int s_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_133 = NULL,h_133 = NULL,w_25 = NULL,y_25 = NULL;
              f_133 = t;
              t = z_140(t);
              h_133 = t;
              t = f_133;
              {
                ATerm z_30 (ATerm t)
                {
                  ATerm j_133 = NULL;
                  t = q_133(t);
                  j_133 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_133, h_133);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_141(z_30, q_133, a_31, t);
                w_25 = t;
                t = SSL_explode_term(w_25);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_75 = ATgetArgument(t, 0);
                    y_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_25;
                t = foldr_3_0(b_31, c_31, _id, t);
              }
              ;
              LocalPopChoice(s_75);
            }
          else
            {
              t = r_75;
              {
                ATerm i_26 = NULL,j_26 = NULL;
                i_26 = t;
                t = SSL_explode_term(i_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_75 = ATgetArgument(t, 0);
                    j_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_26;
                t = foldr_3_0(e_31, f_31, q_133, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_133(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm d_114 (ATerm), ATerm t)
{
  ATerm i_31 (ATerm t)
  {
    t = bottomup_1_0(d_114, t);
    return(t);
  }
  t = SRTS_all(i_31, t);
  t = d_114(t);
  return(t);
}
ATerm v_14 (ATerm g_70, ATerm h_70, ATerm t)
{
  ATerm r_133 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_70, h_70);
  t = p_15(g_70, h_70, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_133 = ATgetFirst((ATermList) t);
      {
        ATerm v_75 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_133;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm i_134 = NULL,j_134 = NULL;
  i_134 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_75 = t;
    int x_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_27 = NULL;
        t = term_y_75;
        e_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_75, i_134);
        t = v_14(e_27, i_134, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_75 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_75) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, j_134, (ATerm) ATempty);
        ;
        LocalPopChoice(x_75);
      }
    else
      {
        t = w_75;
        {
          ATerm o_27 = NULL;
          t = term_y_75;
          o_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_75, i_134);
          t = v_14(o_27, i_134, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm a_76 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_76) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, j_134, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm u_115 (ATerm), ATerm t)
{
  ATerm m_134 (ATerm t)
  {
    ATerm b_76 = t;
    int c_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        ;
        LocalPopChoice(c_76);
      }
    else
      {
        t = b_76;
        t = SRTS_all(m_134, t);
      }
    return(t);
  }
  t = m_134(t);
  return(t);
}
ATerm w_14 (ATerm r_130 (ATerm), ATerm u_58, ATerm s_58, ATerm t)
{
  ATerm n_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL,s_134 = NULL;
  n_134 = t;
  t = r_130(t);
  o_134 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_134, u_58, s_58);
  t = q_15(o_134, u_58, s_58, t);
  {
    ATerm l_76 = t;
    int m_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_134 = NULL;
        t = term_n_76;
        t_134 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_134, term_n_76);
        t = p_15(o_134, t_134, t);
        ;
        LocalPopChoice(m_76);
      }
    else
      {
        t = l_76;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_134 = ATgetFirst((ATermList) t);
        q_134 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_76;
    r_134 = t;
    t = (ATerm) ATinsert(CheckATermList(q_134), (ATerm) ATinsert(CheckATermList(p_134), u_58));
    s_134 = t;
    t = SSL_table_put(o_134, r_134, s_134);
    t = n_134;
  }
  return(t);
}
ATerm j_31 (ATerm t)
{
  t = term_y_75;
  return(t);
}
ATerm k_31 (ATerm t)
{
  t = term_y_75;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm x_134 = NULL,z_134 = NULL,a_135 = NULL,b_135 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_134 = ATgetArgument(t, 0);
      a_135 = ATgetArgument(t, 1);
      x_134 = ATgetArgument(t, 2);
      {
        ATerm e_135 = NULL,f_135 = NULL;
        t = a_135;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, z_134);
        e_135 = t;
        t = term_p_76;
        f_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_134), term_p_76);
        t = w_14(j_31, e_135, f_135, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_134, (ATerm)ATempty, x_134);
      }
    }
  else
    {
      ATerm i_135 = NULL,j_135 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          z_134 = ATgetArgument(t, 0);
          a_135 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_135;
      if(match_cons(t, sym_ConstType_1))
        {
          b_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, z_134);
      i_135 = t;
      t = term_r_76;
      j_135 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_134), term_r_76);
      t = w_14(k_31, i_135, j_135, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_134, (ATerm) ATmakeAppl(sym_ConstType_1, b_135));
    }
  return(t);
}
ATerm Overlays_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm k_135 = NULL,l_135 = NULL,n_135 = NULL,o_135 = NULL,d_7 = NULL,l_7 = NULL;
  o_135 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      l_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_135);
  k_135 = t;
  t = l_135;
  t = t_98(t);
  n_135 = t;
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym_Overlays_1, n_135);
  d_7 = t;
  t = SSLsetAnnotations(d_7, k_135);
  return(t);
}
ATerm Constructors_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL,p_7 = NULL,q_7 = NULL;
  u_135 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      s_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_135);
  r_135 = t;
  t = s_135;
  t = t_99(t);
  t_135 = t;
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, t_135);
  p_7 = t;
  t = SSLsetAnnotations(p_7, r_135);
  return(t);
}
ATerm x_14 (ATerm a_70, ATerm b_70, ATerm t)
{
  ATerm a_136 = NULL,b_136 = NULL;
  a_136 = t;
  {
    ATerm s_76 = t;
    int t_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
        t = p_15(a_70, b_70, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_76 = ATgetFirst((ATermList) t);
            b_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_76);
        t = SSL_table_put(a_70, b_70, b_136);
        t = (ATerm) ATmakeAppl(sym__3, a_70, b_70, b_136);
      }
    else
      {
        t = s_76;
        t = SSL_table_remove(a_70, b_70);
        t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
      }
    t = a_136;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL,f_136 = NULL,g_136 = NULL;
  c_136 = t;
  t = o_130(t);
  d_136 = t;
  {
    ATerm v_76 = t;
    int w_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_136 = NULL;
        t = term_n_76;
        h_136 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_136, term_n_76);
        t = p_15(d_136, h_136, t);
        ;
        LocalPopChoice(w_76);
      }
    else
      {
        t = v_76;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_136 = ATgetFirst((ATermList) t);
        e_136 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_76;
    g_136 = t;
    t = SSL_table_put(d_136, g_136, e_136);
    t = f_136;
    {
      ATerm m_31 (ATerm t)
      {
        ATerm i_136 = NULL;
        i_136 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_136, i_136);
        t = x_14(d_136, i_136, t);
        return(t);
      }
      t = map_1_0(m_31, t);
      t = c_136;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t)
{
  ATerm x_76 = t;
  int y_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_112(t);
      t = y_112(t);
      ;
      LocalPopChoice(y_76);
    }
  else
    {
      t = x_76;
      t = y_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm l_136 = NULL,q_136 = NULL,r_136 = NULL,s_136 = NULL,t_136 = NULL;
  l_136 = t;
  t = n_130(t);
  q_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_136, term_n_76);
  {
    ATerm z_76 = t;
    int a_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_136 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_77 = ATgetArgument(t, 0);
            ATerm g_77 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_76;
        x_136 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_136, term_n_76);
        t = p_15(q_136, x_136, t);
        ;
        LocalPopChoice(a_77);
      }
    else
      {
        t = z_76;
        t = (ATerm) ATempty;
      }
    r_136 = t;
    t = term_n_76;
    s_136 = t;
    t = (ATerm) ATinsert(CheckATermList(r_136), (ATerm) ATempty);
    t_136 = t;
    t = SSL_table_put(q_136, s_136, t_136);
    t = l_136;
  }
  return(t);
}
ATerm scope_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(p_130, t);
  {
    ATerm n_31 (ATerm t)
    {
      t = end_scope_1_0(p_130, t);
      return(t);
    }
    t = restore_always_2_0(q_130, n_31, t);
  }
  return(t);
}
ATerm o_31 (ATerm t)
{
  t = term_y_75;
  return(t);
}
ATerm p_31 (ATerm t)
{
  t = Specification_1_0(q_31, t);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
ATerm q_31 (ATerm t)
{
  t = map_1_0(r_31, t);
  return(t);
}
ATerm r_31 (ATerm t)
{
  ATerm h_77 = t;
  int i_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_77 = t;
      int n_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Constructors_1_0(s_31, t);
          ;
          LocalPopChoice(n_77);
        }
      else
        {
          t = j_77;
          t = Overlays_1_0(u_31, t);
        }
      ;
      LocalPopChoice(i_77);
    }
  else
    {
      t = h_77;
    }
  return(t);
}
ATerm s_31 (ATerm t)
{
  t = map_1_0(t_31, t);
  return(t);
}
ATerm t_31 (ATerm t)
{
  ATerm o_77 = t;
  int p_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(p_77);
    }
  else
    {
      t = o_77;
    }
  return(t);
}
ATerm u_31 (ATerm t)
{
  t = map_1_0(v_31, t);
  return(t);
}
ATerm v_31 (ATerm t)
{
  ATerm q_77 = t;
  int r_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      ;
      LocalPopChoice(r_77);
    }
  else
    {
      t = q_77;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(o_31, p_31, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_77 = t;
  int t_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_77);
    }
  else
    {
      t = s_77;
      {
        ATerm a_137 = NULL,b_137 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_137 = ATgetFirst((ATermList) t);
            b_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_137;
        {
          ATerm w_31 (ATerm t)
          {
            t = b_137;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_31, t);
        }
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm z_126 (ATerm), ATerm t)
{
  ATerm u_77 = t;
  int v_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_77);
    }
  else
    {
      t = u_77;
      {
        ATerm y_77 = t;
        int a_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_31 (ATerm t)
            {
              t = filter_1_0(z_126, t);
              return(t);
            }
            t = Cons_2_0(z_126, x_31, t);
            ;
            LocalPopChoice(a_78);
          }
        else
          {
            t = y_77;
            {
              ATerm i_137 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_78 = ATgetFirst((ATermList) t);
                  i_137 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_137;
              t = filter_1_0(z_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_120 (ATerm), ATerm t)
{
  ATerm k_137 (ATerm t)
  {
    ATerm c_78 = t;
    int d_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_137, t);
        ;
        LocalPopChoice(d_78);
      }
    else
      {
        t = c_78;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_120(t);
      }
    return(t);
  }
  t = k_137(t);
  return(t);
}
ATerm v_137 (ATerm n_137, ATerm t)
{
  ATerm p_137 = NULL;
  t = SSL_explode_term(n_137);
  if(match_cons(t, sym__2))
    {
      ATerm e_78 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_78) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_137;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_137 = NULL,r_137 = NULL,s_137 = NULL;
  s_137 = t;
  if(match_cons(t, sym__2))
    {
      q_137 = ATgetArgument(t, 0);
      r_137 = ATgetArgument(t, 1);
      {
        ATerm f_78 = t;
        int g_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_31 (ATerm t)
            {
              t = r_137;
              return(t);
            }
            t = q_137;
            t = at_end_1_0(y_31, t);
            ;
            LocalPopChoice(g_78);
          }
        else
          {
            t = f_78;
            t = v_137(s_137, t);
          }
      }
    }
  else
    {
      t = v_137(s_137, t);
    }
  return(t);
}
ATerm a_15 (ATerm m_197, ATerm i_197, ATerm t)
{
  ATerm w_137 = NULL,x_137 = NULL;
  t = SSL_explode_term(m_197);
  if(match_cons(t, sym__2))
    {
      w_137 = ATgetArgument(t, 0);
      {
        ATerm j_78 = ATgetArgument(t, 1);
        if(((ATgetType(j_78) == AT_LIST) && !(ATisEmpty(j_78))))
          {
            x_137 = ATgetFirst((ATermList) j_78);
            {
              ATerm m_78 = (ATerm) ATgetNext((ATermList) j_78);
              if(((ATgetType(m_78) != AT_LIST) || !(ATisEmpty(m_78))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_197;
  {
    ATerm z_31 (ATerm t)
    {
      ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL;
      y_137 = t;
      t = SSL_explode_term(y_137);
      if(match_cons(t, sym__2))
        {
          if((w_137 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm r_78 = ATgetArgument(t, 1);
            if(((ATgetType(r_78) == AT_LIST) && !(ATisEmpty(r_78))))
              {
                z_137 = ATgetFirst((ATermList) r_78);
                {
                  ATerm t_78 = (ATerm) ATgetNext((ATermList) r_78);
                  if(((ATgetType(t_78) != AT_LIST) || !(ATisEmpty(t_78))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_137, x_137);
      t = conc_0_0(t);
      a_138 = t;
      t = (ATerm) ATinsert(ATempty, a_138);
      b_138 = t;
      t = SSL_mkterm(w_137, b_138);
      return(t);
    }
    t = fetch_1_0(z_31, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm t)
{
  ATerm y_78 = t;
  int z_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_125(t);
      ;
      LocalPopChoice(z_78);
    }
  else
    {
      t = y_78;
      {
        ATerm e_138 = NULL,f_138 = NULL,i_138 = NULL,j_138 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_138 = ATgetFirst((ATermList) t);
            f_138 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_138;
        t = a_126(t);
        i_138 = t;
        t = f_138;
        t = foldr_3_0(y_125, z_125, a_126, t);
        j_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_138, j_138);
        t = z_125(t);
      }
    }
  return(t);
}
ATerm a_32 (ATerm t)
{
  t = foldr_3_0(b_32, c_32, d_32, t);
  return(t);
}
ATerm b_32 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_79), term_b_79), term_a_79);
  return(t);
}
ATerm c_32 (ATerm t)
{
  ATerm l_138 = NULL,p_138 = NULL;
  if(match_cons(t, sym__2))
    {
      l_138 = ATgetArgument(t, 0);
      p_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(l_138, p_138, t);
  return(t);
}
ATerm d_32 (ATerm t)
{
  ATerm d_79 = t;
  int e_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_138 = NULL;
      if(match_cons(t, sym_Signature_1))
        {
          r_138 = ATgetArgument(t, 0);
          {
            ATerm t_138 = NULL;
            t = r_138;
            t = filter_1_0(e_32, t);
            t = concat_0_0(t);
            t_138 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, t_138);
          }
        }
      else
        {
          if(match_cons(t, sym_Rules_1))
            {
              r_138 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, r_138);
        }
      ;
      LocalPopChoice(e_79);
    }
  else
    {
      t = d_79;
    }
  return(t);
}
ATerm e_32 (ATerm t)
{
  ATerm b_139 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      b_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_139;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  t = Specification_1_0(a_32, t);
  return(t);
}
ATerm f_32 (ATerm t)
{
  ATerm f_79 = t;
  int j_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(j_79);
    }
  else
    {
      t = f_79;
    }
  return(t);
}
ATerm g_32 (ATerm t)
{
  ATerm k_79 = t;
  int l_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_139 = NULL,x_139 = NULL,y_139 = NULL,a_140 = NULL;
      if(match_cons(t, sym_LRule_1))
        {
          a_140 = ATgetArgument(t, 0);
          {
            ATerm e_140 = NULL;
            t = a_140;
            if(match_cons(t, sym_Rule_3))
              {
                w_139 = ATgetArgument(t, 0);
                x_139 = ATgetArgument(t, 1);
                y_139 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_139;
            t = free_vars_3_0(h_32, m_32, tboundin_3_0, t);
            e_140 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, e_140, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, w_139, x_139, y_139)));
          }
        }
      else
        {
          ATerm n_141 = NULL;
          if(match_cons(t, sym_ScopeDefault_1))
            {
              a_140 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_140;
          t = free_vars_3_0(p_32, q_32, tboundin_3_0, t);
          n_141 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, n_141, a_140);
        }
      ;
      LocalPopChoice(l_79);
    }
  else
    {
      t = k_79;
    }
  return(t);
}
ATerm h_32 (ATerm t)
{
  ATerm f_140 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_140);
  return(t);
}
ATerm m_32 (ATerm t)
{
  ATerm m_79 = t;
  int n_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_79);
    }
  else
    {
      t = m_79;
      {
        ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_140 = ATgetArgument(t, 0);
            t = h_140;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_140 = ATgetArgument(t, 0);
                i_140 = ATgetArgument(t, 1);
                j_140 = ATgetArgument(t, 2);
                k_140 = ATgetArgument(t, 3);
                t = j_140;
                t = map_1_0(n_32, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_140 = ATgetArgument(t, 0);
                    i_140 = ATgetArgument(t, 1);
                    j_140 = ATgetArgument(t, 2);
                    k_140 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_140;
                t = map_1_0(o_32, t);
              }
          }
      }
    }
  return(t);
}
ATerm n_32 (ATerm t)
{
  ATerm s_140 = NULL;
  ATerm o_79 = t;
  int p_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_140 = ATgetArgument(t, 0);
          {
            ATerm q_79 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_79);
      t = s_140;
    }
  else
    {
      t = o_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_140;
    }
  return(t);
}
ATerm o_32 (ATerm t)
{
  ATerm g_141 = NULL;
  ATerm r_79 = t;
  int t_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_141 = ATgetArgument(t, 0);
          {
            ATerm u_79 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_79);
      t = g_141;
    }
  else
    {
      t = r_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_141;
    }
  return(t);
}
ATerm p_32 (ATerm t)
{
  ATerm q_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_141);
  return(t);
}
ATerm q_32 (ATerm t)
{
  ATerm v_79 = t;
  int w_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_79);
    }
  else
    {
      t = v_79;
      {
        ATerm w_141 = NULL,z_141 = NULL,a_142 = NULL,b_142 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_141 = ATgetArgument(t, 0);
            t = w_141;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_141 = ATgetArgument(t, 0);
                z_141 = ATgetArgument(t, 1);
                a_142 = ATgetArgument(t, 2);
                b_142 = ATgetArgument(t, 3);
                t = a_142;
                t = map_1_0(r_32, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_141 = ATgetArgument(t, 0);
                    z_141 = ATgetArgument(t, 1);
                    a_142 = ATgetArgument(t, 2);
                    b_142 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_142;
                t = map_1_0(s_32, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_32 (ATerm t)
{
  ATerm r_142 = NULL;
  ATerm x_79 = t;
  int y_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_142 = ATgetArgument(t, 0);
          {
            ATerm z_79 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_79);
      t = r_142;
    }
  else
    {
      t = x_79;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_142;
    }
  return(t);
}
ATerm s_32 (ATerm t)
{
  ATerm i_143 = NULL;
  ATerm a_80 = t;
  int c_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_143 = ATgetArgument(t, 0);
          {
            ATerm d_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_80);
      t = i_143;
    }
  else
    {
      t = a_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_143;
    }
  return(t);
}
ATerm t_32 (ATerm t)
{
  t = Cons_2_0(_id, u_32, t);
  return(t);
}
ATerm u_32 (ATerm t)
{
  t = Cons_2_0(_id, v_32, t);
  return(t);
}
ATerm v_32 (ATerm t)
{
  t = Cons_2_0(w_32, x_32, t);
  return(t);
}
ATerm w_32 (ATerm t)
{
  t = Strategies_1_0(z_32, t);
  return(t);
}
ATerm x_32 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm z_32 (ATerm t)
{
  t = topdown_1_0(a_33, t);
  t = listtd_1_0(b_33, t);
  return(t);
}
ATerm a_33 (ATerm t)
{
  ATerm e_80 = t;
  int f_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      ;
      LocalPopChoice(f_80);
    }
  else
    {
      t = e_80;
    }
  return(t);
}
ATerm b_33 (ATerm t)
{
  t = repeat_1_0(c_33, t);
  return(t);
}
ATerm c_33 (ATerm t)
{
  ATerm m_143 = NULL,p_143 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_143 = ATgetFirst((ATermList) t);
      p_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_14(m_143, p_143, t);
  return(t);
}
ATerm d_33 (ATerm t)
{
  ATerm g_80 = t;
  int h_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      ;
      LocalPopChoice(h_80);
    }
  else
    {
      t = g_80;
    }
  return(t);
}
ATerm e_33 (ATerm t)
{
  t = fetch_1_0(f_33, t);
  return(t);
}
ATerm f_33 (ATerm t)
{
  ATerm q_143 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      q_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, q_143)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  t = topdown_1_0(f_32, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(g_32, t);
  t = Specification_1_0(t_32, t);
  t = topdown_1_0(d_33, t);
  t = Specification_1_0(e_33, t);
  return(t);
}
ATerm Op_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm r_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL,w_143 = NULL,t_7 = NULL,v_7 = NULL;
  w_143 = t;
  if(match_cons(t, sym_Op_2))
    {
      s_143 = ATgetArgument(t, 0);
      t_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_143);
  r_143 = t;
  t = s_143;
  t = a_100(t);
  u_143 = t;
  t = t_143;
  t = b_100(t);
  v_143 = t;
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, u_143, v_143);
  t_7 = t;
  t = SSLsetAnnotations(t_7, r_143);
  return(t);
}
ATerm OpDecl_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t)
{
  ATerm c_144 = NULL,f_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL,y_7 = NULL,z_7 = NULL;
  k_144 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      f_144 = ATgetArgument(t, 0);
      h_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_144);
  c_144 = t;
  t = f_144;
  t = f_99(t);
  i_144 = t;
  t = h_144;
  t = g_99(t);
  j_144 = t;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, i_144, j_144);
  y_7 = t;
  t = SSLsetAnnotations(y_7, c_144);
  return(t);
}
ATerm SVar_1_0 (ATerm d_103 (ATerm), ATerm t)
{
  ATerm q_144 = NULL,r_144 = NULL,t_144 = NULL,u_144 = NULL,a_8 = NULL,b_8 = NULL;
  u_144 = t;
  if(match_cons(t, sym_SVar_1))
    {
      r_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_144);
  q_144 = t;
  t = r_144;
  t = d_103(t);
  t_144 = t;
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, t_144);
  a_8 = t;
  t = SSLsetAnnotations(a_8, q_144);
  return(t);
}
ATerm Var_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm y_144 = NULL,a_145 = NULL,b_145 = NULL,c_145 = NULL,c_8 = NULL,e_8 = NULL;
  c_145 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_145);
  y_144 = t;
  t = a_145;
  t = u_99(t);
  b_145 = t;
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_145);
  c_8 = t;
  t = SSLsetAnnotations(c_8, y_144);
  return(t);
}
ATerm VarDec_2_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL,m_145 = NULL,n_145 = NULL,o_145 = NULL,f_8 = NULL,g_8 = NULL;
  o_145 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_145 = ATgetArgument(t, 0);
      l_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_145);
  j_145 = t;
  t = k_145;
  t = p_105(t);
  m_145 = t;
  t = l_145;
  t = q_105(t);
  n_145 = t;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_145, n_145);
  f_8 = t;
  t = SSLsetAnnotations(f_8, j_145);
  return(t);
}
ATerm RDef_3_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm r_145 = NULL,y_145 = NULL,z_145 = NULL,a_146 = NULL,b_146 = NULL,c_146 = NULL,d_146 = NULL,e_146 = NULL,i_8 = NULL,j_8 = NULL;
  e_146 = t;
  if(match_cons(t, sym_RDef_3))
    {
      y_145 = ATgetArgument(t, 0);
      z_145 = ATgetArgument(t, 1);
      a_146 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_146);
  r_145 = t;
  t = y_145;
  t = z_101(t);
  b_146 = t;
  t = z_145;
  t = a_102(t);
  c_146 = t;
  t = a_146;
  t = b_102(t);
  d_146 = t;
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, b_146, c_146, d_146);
  i_8 = t;
  t = SSLsetAnnotations(i_8, r_145);
  return(t);
}
ATerm RDefT_4_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t)
{
  ATerm h_146 = NULL,l_146 = NULL,m_146 = NULL,o_146 = NULL,q_146 = NULL,r_146 = NULL,t_146 = NULL,u_146 = NULL,v_146 = NULL,w_146 = NULL,k_8 = NULL,l_8 = NULL;
  w_146 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      l_146 = ATgetArgument(t, 0);
      m_146 = ATgetArgument(t, 1);
      o_146 = ATgetArgument(t, 2);
      q_146 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_146);
  h_146 = t;
  t = l_146;
  t = c_102(t);
  r_146 = t;
  t = m_146;
  t = d_102(t);
  t_146 = t;
  t = o_146;
  t = e_102(t);
  u_146 = t;
  t = q_146;
  t = f_102(t);
  v_146 = t;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, r_146, t_146, u_146, v_146);
  k_8 = t;
  t = SSLsetAnnotations(k_8, h_146);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm d_147 = NULL,e_147 = NULL,f_147 = NULL,g_147 = NULL,m_8 = NULL,n_8 = NULL;
  g_147 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_147);
  d_147 = t;
  t = e_147;
  t = o_105(t);
  f_147 = t;
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_147);
  m_8 = t;
  t = SSLsetAnnotations(m_8, d_147);
  return(t);
}
ATerm g_33 (ATerm t)
{
  ATerm t_148 = NULL,v_148 = NULL;
  t_148 = t;
  t = SSL_explode_string(t_148);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(i_80) != AT_INT) || (ATgetInt((ATermInt) i_80) != 39)))
        _fail(t);
      v_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(v_148);
  return(t);
}
ATerm h_33 (ATerm t)
{
  ATerm w_148 = NULL,x_148 = NULL;
  w_148 = t;
  t = SSL_explode_string(w_148);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(j_80) != AT_INT) || (ATgetInt((ATermInt) j_80) != 39)))
        _fail(t);
      x_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(x_148);
  return(t);
}
ATerm i_33 (ATerm t)
{
  ATerm z_148 = NULL,b_149 = NULL;
  z_148 = t;
  t = SSL_explode_string(z_148);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(k_80) != AT_INT) || (ATgetInt((ATermInt) k_80) != 39)))
        _fail(t);
      b_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(b_149);
  return(t);
}
ATerm j_33 (ATerm t)
{
  ATerm c_149 = NULL,d_149 = NULL;
  c_149 = t;
  t = SSL_explode_string(c_149);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_80) != AT_INT) || (ATgetInt((ATermInt) m_80) != 39)))
        _fail(t);
      d_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(d_149);
  return(t);
}
ATerm k_33 (ATerm t)
{
  ATerm f_149 = NULL,h_149 = NULL;
  f_149 = t;
  t = SSL_explode_string(f_149);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(n_80) != AT_INT) || (ATgetInt((ATermInt) n_80) != 39)))
        _fail(t);
      h_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(h_149);
  return(t);
}
ATerm l_33 (ATerm t)
{
  ATerm i_149 = NULL,j_149 = NULL;
  i_149 = t;
  t = SSL_explode_string(i_149);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(o_80) != AT_INT) || (ATgetInt((ATermInt) o_80) != 39)))
        _fail(t);
      j_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(j_149);
  return(t);
}
ATerm m_33 (ATerm t)
{
  ATerm l_149 = NULL,n_149 = NULL;
  l_149 = t;
  t = SSL_explode_string(l_149);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(p_80) != AT_INT) || (ATgetInt((ATermInt) p_80) != 39)))
        _fail(t);
      n_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(n_149);
  return(t);
}
ATerm n_33 (ATerm t)
{
  ATerm o_149 = NULL,p_149 = NULL;
  o_149 = t;
  t = SSL_explode_string(o_149);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(q_80) != AT_INT) || (ATgetInt((ATermInt) q_80) != 39)))
        _fail(t);
      p_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(p_149);
  return(t);
}
ATerm p_33 (ATerm t)
{
  ATerm r_149 = NULL,t_149 = NULL;
  r_149 = t;
  t = SSL_explode_string(r_149);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(r_80) != AT_INT) || (ATgetInt((ATermInt) r_80) != 39)))
        _fail(t);
      t_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(t_149);
  return(t);
}
ATerm q_33 (ATerm t)
{
  ATerm u_149 = NULL,v_149 = NULL;
  u_149 = t;
  t = SSL_explode_string(u_149);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_80 = ATgetFirst((ATermList) t);
      if(((ATgetType(s_80) != AT_INT) || (ATgetInt((ATermInt) s_80) != 39)))
        _fail(t);
      v_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(v_149);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm t_80 = t;
  int u_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_148 = NULL,p_148 = NULL,q_148 = NULL,r_148 = NULL;
      n_148 = t;
      if(match_cons(t, sym_Real_1))
        {
          p_148 = ATgetArgument(t, 0);
          {
            ATerm w_27 = NULL;
            t = SSL_string_to_real(p_148);
            w_27 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, w_27);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              p_148 = ATgetArgument(t, 0);
              {
                ATerm d_28 = NULL;
                t = SSL_string_to_int(p_148);
                d_28 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, d_28);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  p_148 = ATgetArgument(t, 0);
                  q_148 = ATgetArgument(t, 1);
                  r_148 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSL_is_string(r_148);
              t = (ATerm) ATmakeAppl(sym_Con_3, p_148, q_148, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_148), (ATerm) ATempty));
            }
        }
      ;
      LocalPopChoice(u_80);
    }
  else
    {
      t = t_80;
      {
        ATerm v_80 = t;
        int w_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(g_33, t);
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
                  t = RDefT_4_0(h_33, _id, _id, _id, t);
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
                        t = RDef_3_0(i_33, _id, _id, t);
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
                              t = SDefT_4_0(j_33, _id, _id, _id, t);
                              ;
                              LocalPopChoice(c_81);
                            }
                          else
                            {
                              t = b_81;
                              {
                                ATerm d_81 = t;
                                int e_81 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = SDef_3_0(k_33, _id, _id, t);
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
                                          t = VarDec_2_0(l_33, _id, t);
                                          ;
                                          LocalPopChoice(g_81);
                                        }
                                      else
                                        {
                                          t = f_81;
                                          {
                                            ATerm h_81 = t;
                                            int i_81 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Var_1_0(m_33, t);
                                                ;
                                                LocalPopChoice(i_81);
                                              }
                                            else
                                              {
                                                t = h_81;
                                                {
                                                  ATerm j_81 = t;
                                                  int k_81 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = SVar_1_0(n_33, t);
                                                      ;
                                                      LocalPopChoice(k_81);
                                                    }
                                                  else
                                                    {
                                                      t = j_81;
                                                      {
                                                        ATerm l_81 = t;
                                                        int m_81 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = OpDecl_2_0(p_33, _id, t);
                                                            ;
                                                            LocalPopChoice(m_81);
                                                          }
                                                        else
                                                          {
                                                            t = l_81;
                                                            t = Op_2_0(q_33, _id, t);
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm u_33 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm u_120 (ATerm), ATerm t)
{
  ATerm b_150 (ATerm t)
  {
    ATerm o_81 = t;
    int p_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_33, t);
        t = u_120(t);
        ;
        LocalPopChoice(p_81);
      }
    else
      {
        t = o_81;
        t = Cons_2_0(_id, b_150, t);
      }
    return(t);
  }
  t = b_150(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm h_150 = NULL,j_150 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_150 = ATgetFirst((ATermList) t);
      j_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_150;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm q_81 = t;
      int r_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_150;
          ;
          LocalPopChoice(r_81);
        }
      else
        {
          t = q_81;
          t = j_150;
          t = last_0_0(t);
        }
    }
  else
    {
      t = j_150;
      t = last_0_0(t);
    }
  return(t);
}
ATerm v_33 (ATerm t)
{
  ATerm u_150 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_81 = ATgetFirst((ATermList) t);
      u_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_150;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm x_128 (ATerm), ATerm t)
{
  ATerm r_150 = NULL,s_150 = NULL,t_150 = NULL;
  r_150 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_150 = ATgetFirst((ATermList) t);
      {
        ATerm t_81 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_150;
  t = x_128(t);
  t = r_150;
  t = last_0_0(t);
  t = x_128(t);
  t = r_150;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_81 = ATgetFirst((ATermList) t);
      t_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_150;
  t = at_last_1_0(v_33, t);
  return(t);
}
ATerm x_157 (ATerm y_151, ATerm z_151, ATerm t)
{
  t = y_151;
  {
    ATerm v_81 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_33, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_81;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_v_38, y_151);
  }
  return(t);
}
ATerm b_158 (ATerm d_152, ATerm e_152, ATerm t)
{
  t = d_152;
  {
    ATerm w_81 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_33, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_81;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_x_81, d_152);
  }
  return(t);
}
ATerm c_158 (ATerm g_152, ATerm h_152, ATerm i_152, ATerm t)
{
  ATerm n_152 = NULL;
  t = g_152;
  {
    ATerm y_81 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL;
        t = SSL_explode_string(g_152);
        t = unquote_chars_1_0(a_34, t);
        u_28 = t;
        t = SSL_implode_string(u_28);
        ;
        LocalPopChoice(d_82);
      }
    else
      {
        t = y_81;
      }
    n_152 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, n_152, (ATerm)ATempty, h_152);
  }
  return(t);
}
ATerm d_158 (ATerm p_152, ATerm r_152, ATerm t)
{
  ATerm a_153 = NULL;
  t = p_152;
  {
    ATerm e_82 = t;
    int f_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_28 = NULL;
        t = SSL_explode_string(p_152);
        t = unquote_chars_1_0(b_34, t);
        y_28 = t;
        t = SSL_implode_string(y_28);
        ;
        LocalPopChoice(f_82);
      }
    else
      {
        t = e_82;
      }
    a_153 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, a_153, (ATerm)ATempty, (ATerm) ATempty);
  }
  return(t);
}
ATerm w_33 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm x_33 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_34 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm b_34 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm c_34 (ATerm t)
{
  t = term_y_67;
  return(t);
}
ATerm d_34 (ATerm t)
{
  ATerm y_153 = NULL,c_154 = NULL,b_29 = NULL;
  y_153 = t;
  t = SSL_explode_term(y_153);
  if(match_cons(t, sym__2))
    {
      ATerm g_82 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_82) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_82 = ATgetArgument(t, 1);
        if(((ATgetType(h_82) == AT_LIST) && !(ATisEmpty(h_82))))
          {
            c_154 = ATgetFirst((ATermList) h_82);
            {
              ATerm j_82 = (ATerm) ATgetNext((ATermList) h_82);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(y_153);
  if(match_cons(t, sym__2))
    {
      ATerm k_82 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_82) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_82 = ATgetArgument(t, 1);
        if(((ATgetType(l_82) == AT_LIST) && !(ATisEmpty(l_82))))
          {
            ATerm m_82 = ATgetFirst((ATermList) l_82);
            ATerm n_82 = (ATerm) ATgetNext((ATermList) l_82);
            if(((ATgetType(n_82) == AT_LIST) && !(ATisEmpty(n_82))))
              {
                b_29 = ATgetFirst((ATermList) n_82);
                {
                  ATerm o_82 = (ATerm) ATgetNext((ATermList) n_82);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_82, (ATerm) ATinsert(ATinsert(ATempty, b_29), c_154));
  return(t);
}
ATerm f_34 (ATerm t)
{
  ATerm q_154 = NULL,s_154 = NULL;
  if(match_cons(t, sym__2))
    {
      q_154 = ATgetArgument(t, 0);
      s_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_82, (ATerm) ATinsert(ATinsert(ATempty, s_154), q_154));
  return(t);
}
ATerm g_34 (ATerm t)
{
  t = term_y_67;
  return(t);
}
ATerm h_34 (ATerm t)
{
  ATerm v_154 = NULL,w_154 = NULL;
  if(match_cons(t, sym__2))
    {
      v_154 = ATgetArgument(t, 0);
      w_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_82, (ATerm) ATinsert(ATinsert(ATempty, w_154), v_154));
  return(t);
}
ATerm j_34 (ATerm t)
{
  ATerm k_155 = NULL,l_155 = NULL;
  if(match_cons(t, sym__2))
    {
      k_155 = ATgetArgument(t, 0);
      l_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_82, (ATerm) ATinsert(ATinsert(ATempty, l_155), k_155));
  return(t);
}
ATerm k_34 (ATerm t)
{
  t = term_s_82;
  return(t);
}
ATerm m_34 (ATerm t)
{
  ATerm n_155 = NULL,o_155 = NULL;
  if(match_cons(t, sym__2))
    {
      n_155 = ATgetArgument(t, 0);
      o_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_82, (ATerm) ATinsert(ATinsert(ATempty, o_155), n_155));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm e_153 = NULL,f_153 = NULL,i_153 = NULL,j_153 = NULL,k_153 = NULL,n_153 = NULL,o_153 = NULL,s_153 = NULL;
  n_153 = t;
  if(match_cons(t, sym_Anno_2))
    {
      o_153 = ATgetArgument(t, 0);
      s_153 = ATgetArgument(t, 1);
      {
        ATerm x_153 = NULL;
        t = s_153;
        t = foldr_2_0(c_34, d_34, t);
        x_153 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, o_153, x_153);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          o_153 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, o_153, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              o_153 = ATgetArgument(t, 0);
              {
                ATerm g_29 = NULL;
                t = o_153;
                {
                  ATerm u_82 = t;
                  int w_82 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_x_82;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_y_82;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_z_82;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_a_83;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_b_83;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(w_82);
                    }
                  else
                    {
                      t = u_82;
                      {
                        ATerm i_29 = NULL;
                        t = SSL_explode_string(o_153);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_83 = ATgetFirst((ATermList) t);
                            if(((ATgetType(c_83) != AT_INT) || (ATgetInt((ATermInt) c_83) != 39)))
                              _fail(t);
                            {
                              ATerm d_83 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(d_83) == AT_LIST) && !(ATisEmpty(d_83))))
                                {
                                  i_29 = ATgetFirst((ATermList) d_83);
                                  {
                                    ATerm e_83 = (ATerm) ATgetNext((ATermList) d_83);
                                    if(((ATgetType(e_83) == AT_LIST) && !(ATisEmpty(e_83))))
                                      {
                                        ATerm f_83 = ATgetFirst((ATermList) e_83);
                                        if(((ATgetType(f_83) != AT_INT) || (ATgetInt((ATermInt) f_83) != 39)))
                                          _fail(t);
                                        {
                                          ATerm g_83 = (ATerm) ATgetNext((ATermList) e_83);
                                          if(((ATgetType(g_83) != AT_LIST) || !(ATisEmpty(g_83))))
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
                        t = i_29;
                      }
                    }
                  g_29 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, g_29);
                }
              }
            }
          else
            {
              ATerm h_83 = t;
              int i_83 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      o_153 = ATgetArgument(t, 0);
                      {
                        ATerm j_83 = ATgetArgument(t, 1);
                      }
                      k_153 = ATgetArgument(t, 2);
                      e_153 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_83);
                  t = (ATerm) ATmakeAppl(sym_Con_3, o_153, k_153, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_153), (ATerm) ATempty));
                }
              else
                {
                  t = h_83;
                  {
                    ATerm m_83 = t;
                    int p_83 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            o_153 = ATgetArgument(t, 0);
                            {
                              ATerm r_83 = ATgetArgument(t, 1);
                            }
                            k_153 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_83);
                        t = (ATerm) ATmakeAppl(sym_Con_3, o_153, k_153, term_u_83);
                      }
                    else
                      {
                        t = m_83;
                        if(match_cons(t, sym_Con1_2))
                          {
                            o_153 = ATgetArgument(t, 0);
                            s_153 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, o_153, s_153, term_u_83);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                o_153 = ATgetArgument(t, 0);
                                s_153 = ATgetArgument(t, 1);
                                {
                                  ATerm e_34 (ATerm t)
                                  {
                                    t = s_153;
                                    return(t);
                                  }
                                  t = o_153;
                                  t = foldr_2_0(e_34, f_34, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    o_153 = ATgetArgument(t, 0);
                                    t = o_153;
                                    t = foldr_2_0(g_34, h_34, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        o_153 = ATgetArgument(t, 0);
                                        t = o_153;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            f_153 = ATgetFirst((ATermList) t);
                                            i_153 = (ATerm) ATgetNext((ATermList) t);
                                            t = i_153;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm v_83 = t;
                                                int w_83 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = x_157(o_153, n_153, t);
                                                    ;
                                                    LocalPopChoice(w_83);
                                                  }
                                                else
                                                  {
                                                    t = v_83;
                                                    t = f_153;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_157(o_153, n_153, t);
                                              }
                                          }
                                        else
                                          {
                                            t = x_157(o_153, n_153, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            o_153 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, o_153));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                o_153 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, o_153));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    o_153 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, o_153));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        o_153 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, o_153));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            o_153 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_153), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                o_153 = ATgetArgument(t, 0);
                                                                s_153 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_153), s_153);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    o_153 = ATgetArgument(t, 0);
                                                                    s_153 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm i_34 (ATerm t)
                                                                      {
                                                                        t = s_153;
                                                                        return(t);
                                                                      }
                                                                      t = o_153;
                                                                      t = foldr_2_0(i_34, j_34, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        o_153 = ATgetArgument(t, 0);
                                                                        t = o_153;
                                                                        t = foldr_2_0(k_34, m_34, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            o_153 = ATgetArgument(t, 0);
                                                                            s_153 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_x_81, (ATerm) ATinsert(CheckATermList(s_153), o_153));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                o_153 = ATgetArgument(t, 0);
                                                                                t = o_153;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    f_153 = ATgetFirst((ATermList) t);
                                                                                    i_153 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = i_153;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm x_83 = t;
                                                                                        int y_83 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = b_158(o_153, n_153, t);
                                                                                            ;
                                                                                            LocalPopChoice(y_83);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = x_83;
                                                                                            t = f_153;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_158(o_153, n_153, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_158(o_153, n_153, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_a_84;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        o_153 = ATgetArgument(t, 0);
                                                                                        s_153 = ATgetArgument(t, 1);
                                                                                        t = s_153;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            j_153 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_s_59, (ATerm) ATinsert(ATinsert(ATempty, j_153), o_153));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            o_153 = ATgetArgument(t, 0);
                                                                                            t = o_153;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                o_153 = ATgetArgument(t, 0);
                                                                                                s_153 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, o_153, s_153, term_k_40);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    o_153 = ATgetArgument(t, 0);
                                                                                                    s_153 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, o_153, s_153, term_k_40);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        o_153 = ATgetArgument(t, 0);
                                                                                                        s_153 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, o_153, (ATerm)ATempty, s_153);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            o_153 = ATgetArgument(t, 0);
                                                                                                            s_153 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, s_153, o_153);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                o_153 = ATgetArgument(t, 0);
                                                                                                                s_153 = ATgetArgument(t, 1);
                                                                                                                t = c_158(o_153, s_153, n_153, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    o_153 = ATgetArgument(t, 0);
                                                                                                                    t = d_158(o_153, n_153, t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        o_153 = ATgetArgument(t, 0);
                                                                                                                        s_153 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, o_153, s_153, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            o_153 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, o_153, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                o_153 = ATgetArgument(t, 0);
                                                                                                                                s_153 = ATgetArgument(t, 1);
                                                                                                                                k_153 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_153, s_153, (ATerm)ATempty, k_153);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    o_153 = ATgetArgument(t, 0);
                                                                                                                                    s_153 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_153, (ATerm)ATempty, (ATerm)ATempty, s_153);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        o_153 = ATgetArgument(t, 0);
                                                                                                                                        s_153 = ATgetArgument(t, 1);
                                                                                                                                        k_153 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, o_153, s_153, (ATerm)ATempty, k_153);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            o_153 = ATgetArgument(t, 0);
                                                                                                                                            s_153 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, o_153, (ATerm)ATempty, (ATerm)ATempty, s_153);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                o_153 = ATgetArgument(t, 0);
                                                                                                                                                s_153 = ATgetArgument(t, 1);
                                                                                                                                                k_153 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, o_153, s_153, (ATerm)ATempty, k_153);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    o_153 = ATgetArgument(t, 0);
                                                                                                                                                    s_153 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_153, (ATerm)ATempty, (ATerm)ATempty, s_153);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm b_84 = ATgetArgument(t, 0);
                                                                                                                                                        s_153 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, s_153);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm n_34 (ATerm t)
{
  ATerm a_159 = NULL;
  a_159 = t;
  t = dtime_0_0(t);
  t = debug_1_0(o_34, t);
  t = a_159;
  return(t);
}
ATerm o_34 (ATerm t)
{
  t = term_c_84;
  return(t);
}
ATerm p_34 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm d_84 = t;
    int i_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(i_84);
      }
    else
      {
        t = d_84;
      }
  }
  return(t);
}
ATerm q_34 (ATerm t)
{
  ATerm b_159 = NULL;
  b_159 = t;
  t = dtime_0_0(t);
  t = debug_1_0(r_34, t);
  t = b_159;
  return(t);
}
ATerm r_34 (ATerm t)
{
  t = term_j_84;
  return(t);
}
ATerm s_34 (ATerm t)
{
  ATerm c_159 = NULL;
  c_159 = t;
  t = dtime_0_0(t);
  t = debug_1_0(t_34, t);
  t = c_159;
  return(t);
}
ATerm t_34 (ATerm t)
{
  t = term_k_84;
  return(t);
}
ATerm u_34 (ATerm t)
{
  ATerm d_159 = NULL;
  d_159 = t;
  t = dtime_0_0(t);
  t = debug_1_0(v_34, t);
  t = d_159;
  return(t);
}
ATerm v_34 (ATerm t)
{
  t = term_l_84;
  return(t);
}
ATerm w_34 (ATerm t)
{
  ATerm e_159 = NULL;
  e_159 = t;
  t = dtime_0_0(t);
  t = debug_1_0(x_34, t);
  t = e_159;
  return(t);
}
ATerm x_34 (ATerm t)
{
  t = term_m_84;
  return(t);
}
ATerm y_34 (ATerm t)
{
  ATerm h_159 = NULL;
  h_159 = t;
  t = dtime_0_0(t);
  t = debug_1_0(z_34, t);
  t = h_159;
  return(t);
}
ATerm z_34 (ATerm t)
{
  t = term_n_84;
  return(t);
}
ATerm a_35 (ATerm t)
{
  ATerm i_159 = NULL;
  i_159 = t;
  t = dtime_0_0(t);
  t = debug_1_0(b_35, t);
  t = i_159;
  return(t);
}
ATerm b_35 (ATerm t)
{
  t = term_o_84;
  return(t);
}
ATerm d_35 (ATerm t)
{
  ATerm v_84 = t;
  int w_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_85 = t;
      int b_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_159 = NULL,l_159 = NULL,q_159 = NULL;
          if(match_cons(t, sym_Scope_2))
            {
              k_159 = ATgetArgument(t, 0);
              l_159 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_159;
          t = map_1_0(e_35, t);
          q_159 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, q_159, l_159);
          ;
          LocalPopChoice(b_85);
        }
      else
        {
          t = a_85;
          t = desugarRule_0_0(t);
        }
      ;
      LocalPopChoice(w_84);
    }
  else
    {
      t = v_84;
    }
  t = repeat_1_0(f_35, t);
  return(t);
}
ATerm e_35 (ATerm t)
{
  ATerm c_85 = t;
  int g_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = NULL;
      if(match_cons(t, sym_ListVar_1))
        {
          m_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_29;
      ;
      LocalPopChoice(g_85);
    }
  else
    {
      t = c_85;
    }
  return(t);
}
ATerm f_35 (ATerm t)
{
  ATerm h_85 = t;
  int i_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_85 = t;
      int k_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(k_85);
        }
      else
        {
          t = j_85;
          {
            ATerm u_159 = NULL,v_159 = NULL;
            u_159 = t;
            if(match_cons(t, sym_Match_1))
              {
                v_159 = ATgetArgument(t, 0);
                t = u_159;
                t = c_13(v_159, t);
              }
            else
              {
                if(match_cons(t, sym_Build_1))
                  {
                    v_159 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_159;
                t = b_13(v_159, t);
              }
          }
        }
      ;
      LocalPopChoice(i_85);
    }
  else
    {
      t = h_85;
      {
        ATerm a_160 = NULL,b_160 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            a_160 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_160;
        if(match_cons(t, sym_ListVar_1))
          {
            b_160 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, b_160);
      }
    }
  return(t);
}
ATerm g_35 (ATerm t)
{
  ATerm d_160 = NULL;
  d_160 = t;
  t = dtime_0_0(t);
  t = debug_1_0(h_35, t);
  t = d_160;
  return(t);
}
ATerm h_35 (ATerm t)
{
  t = term_l_85;
  return(t);
}
ATerm i_35 (ATerm t)
{
  ATerm e_160 = NULL;
  e_160 = t;
  t = dtime_0_0(t);
  t = debug_1_0(j_35, t);
  t = e_160;
  return(t);
}
ATerm j_35 (ATerm t)
{
  t = term_m_85;
  return(t);
}
ATerm k_35 (ATerm t)
{
  t = Cons_2_0(_id, l_35, t);
  return(t);
}
ATerm l_35 (ATerm t)
{
  t = Cons_2_0(m_35, n_35, t);
  return(t);
}
ATerm m_35 (ATerm t)
{
  t = Strategies_1_0(o_35, t);
  return(t);
}
ATerm n_35 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_35 (ATerm t)
{
  t = map_1_0(p_35, t);
  return(t);
}
ATerm p_35 (ATerm t)
{
  ATerm n_85 = t;
  int o_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(_id, _id, desugar_0_0, t);
      ;
      LocalPopChoice(o_85);
    }
  else
    {
      t = n_85;
      {
        ATerm p_85 = t;
        int q_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(_id, _id, _id, desugar_0_0, t);
            ;
            LocalPopChoice(q_85);
          }
        else
          {
            t = p_85;
            t = debug_1_0(q_35, t);
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm q_35 (ATerm t)
{
  t = term_r_85;
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm m_158 = NULL,n_158 = NULL,o_158 = NULL,p_158 = NULL,q_158 = NULL,t_158 = NULL,u_158 = NULL,v_158 = NULL;
  t = if_verbose3_1_0(n_34, t);
  t = topdown_1_0(p_34, t);
  t = if_verbose3_1_0(q_34, t);
  t = normalize_spec_0_0(t);
  t = if_verbose3_1_0(s_34, t);
  m_158 = t;
  t = spec_use_def_0_0(t);
  t = m_158;
  t = if_verbose3_1_0(u_34, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm s_85 = ATgetArgument(t, 0);
      if(((ATgetType(s_85) == AT_LIST) && !(ATisEmpty(s_85))))
        {
          ATerm t_85 = ATgetFirst((ATermList) s_85);
          if(match_cons(t_85, sym_Signature_1))
            {
              n_158 = ATgetArgument(t_85, 0);
            }
          else
            _fail(t);
          {
            ATerm u_85 = (ATerm) ATgetNext((ATermList) s_85);
            if(((ATgetType(u_85) == AT_LIST) && !(ATisEmpty(u_85))))
              {
                ATerm v_85 = ATgetFirst((ATermList) u_85);
                if(match_cons(v_85, sym_Overlays_1))
                  {
                    o_158 = ATgetArgument(v_85, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm w_85 = (ATerm) ATgetNext((ATermList) u_85);
                  if(((ATgetType(w_85) == AT_LIST) && !(ATisEmpty(w_85))))
                    {
                      ATerm x_85 = ATgetFirst((ATermList) w_85);
                      if(match_cons(x_85, sym_Strategies_1))
                        {
                          p_158 = ATgetArgument(x_85, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm y_85 = (ATerm) ATgetNext((ATermList) w_85);
                        if(((ATgetType(y_85) != AT_LIST) || !(ATisEmpty(y_85))))
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
  t = u_13(n_158, o_158, p_158, t);
  t = if_verbose3_1_0(w_34, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm z_85 = ATgetArgument(t, 0);
      if(((ATgetType(z_85) == AT_LIST) && !(ATisEmpty(z_85))))
        {
          ATerm a_86 = ATgetFirst((ATermList) z_85);
          if(match_cons(a_86, sym_Signature_1))
            {
              ATerm c_86 = ATgetArgument(a_86, 0);
              if(((ATgetType(c_86) == AT_LIST) && !(ATisEmpty(c_86))))
                {
                  ATerm d_86 = ATgetFirst((ATermList) c_86);
                  if(match_cons(d_86, sym_Constructors_1))
                    {
                      q_158 = ATgetArgument(d_86, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_86 = (ATerm) ATgetNext((ATermList) c_86);
                    if(((ATgetType(e_86) != AT_LIST) || !(ATisEmpty(e_86))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm b_86 = (ATerm) ATgetNext((ATermList) z_85);
            if(((ATgetType(b_86) == AT_LIST) && !(ATisEmpty(b_86))))
              {
                ATerm f_86 = ATgetFirst((ATermList) b_86);
                if(match_cons(f_86, sym_Strategies_1))
                  {
                    t_158 = ATgetArgument(f_86, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_86 = (ATerm) ATgetNext((ATermList) b_86);
                  if(((ATgetType(g_86) != AT_LIST) || !(ATisEmpty(g_86))))
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
  t = k_13(q_158, t_158, t);
  t = if_verbose3_1_0(y_34, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm i_86 = ATgetArgument(t, 0);
      if(((ATgetType(i_86) == AT_LIST) && !(ATisEmpty(i_86))))
        {
          ATerm j_86 = ATgetFirst((ATermList) i_86);
          if(match_cons(j_86, sym_Signature_1))
            {
              u_158 = ATgetArgument(j_86, 0);
            }
          else
            _fail(t);
          {
            ATerm l_86 = (ATerm) ATgetNext((ATermList) i_86);
            if(((ATgetType(l_86) == AT_LIST) && !(ATisEmpty(l_86))))
              {
                ATerm m_86 = ATgetFirst((ATermList) l_86);
                if(match_cons(m_86, sym_Strategies_1))
                  {
                    v_158 = ATgetArgument(m_86, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm n_86 = (ATerm) ATgetNext((ATermList) l_86);
                  if(((ATgetType(n_86) != AT_LIST) || !(ATisEmpty(n_86))))
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
  t = h_13(u_158, v_158, t);
  t = if_verbose3_1_0(a_35, t);
  t = topdown_1_0(d_35, t);
  t = if_verbose3_1_0(g_35, t);
  t = strename_0_0(t);
  t = if_verbose3_1_0(i_35, t);
  t = Specification_1_0(k_35, t);
  return(t);
}
ATerm _2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t)
{
  ATerm f_160 = NULL,g_160 = NULL,j_160 = NULL,k_160 = NULL,l_160 = NULL,m_160 = NULL,o_8 = NULL,p_8 = NULL;
  m_160 = t;
  if(match_cons(t, sym__2))
    {
      g_160 = ATgetArgument(t, 0);
      j_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_160);
  f_160 = t;
  t = g_160;
  t = y_93(t);
  k_160 = t;
  t = j_160;
  t = z_93(t);
  l_160 = t;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_160, l_160);
  o_8 = t;
  t = SSLsetAnnotations(o_8, f_160);
  return(t);
}
ATerm h_15 (ATerm g_60, ATerm h_60, ATerm t)
{
  ATerm q_160 = NULL;
  t = SSL_fputc(g_60, h_60);
  q_160 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_160);
  return(t);
}
ATerm i_15 (ATerm u_63, ATerm v_63, ATerm t)
{
  ATerm r_160 = NULL;
  t = SSL_write_term_to_stream_text(u_63, v_63);
  r_160 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_160);
  return(t);
}
ATerm k_15 (ATerm k_132 (ATerm), ATerm a_501, ATerm y_63, ATerm t)
{
  ATerm s_160 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_501, term_p_86);
  t = open_stream_0_0(t);
  s_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_160, y_63);
  t = k_132(t);
  t = fclose_0_0(t);
  t = y_63;
  return(t);
}
ATerm j_15 (ATerm q_63, ATerm r_63, ATerm t)
{
  ATerm t_160 = NULL;
  t = SSL_write_term_to_stream_baf(q_63, r_63);
  t_160 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_160);
  return(t);
}
ATerm u_35 (ATerm t)
{
  t = fetch_1_0(w_35, t);
  return(t);
}
ATerm v_35 (ATerm t)
{
  ATerm d_161 = NULL,e_161 = NULL;
  if(match_cons(t, sym__2))
    {
      d_161 = ATgetArgument(t, 0);
      e_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(x_35, d_161, e_161, t);
  return(t);
}
ATerm w_35 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_35 (ATerm t)
{
  ATerm g_161 = NULL,h_161 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_86 = ATgetArgument(t, 0);
      if(match_cons(q_86, sym_Stream_1))
        {
          g_161 = ATgetArgument(q_86, 0);
        }
      else
        _fail(t);
      h_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(g_161, h_161, t);
  return(t);
}
ATerm y_35 (ATerm t)
{
  ATerm i_161 = NULL,j_161 = NULL;
  if(match_cons(t, sym__2))
    {
      i_161 = ATgetArgument(t, 0);
      j_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(z_35, i_161, j_161, t);
  return(t);
}
ATerm z_35 (ATerm t)
{
  ATerm l_161 = NULL,o_161 = NULL,p_161 = NULL,q_161 = NULL,r_161 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_86 = ATgetArgument(t, 0);
      if(match_cons(r_86, sym_Stream_1))
        {
          o_161 = ATgetArgument(r_86, 0);
        }
      else
        _fail(t);
      p_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_15(o_161, p_161, t);
  l_161 = t;
  t = term_a_83;
  q_161 = t;
  t = l_161;
  if(match_cons(t, sym_Stream_1))
    {
      r_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_83, l_161);
  t = h_15(q_161, r_161, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_161 = NULL,b_161 = NULL;
  a_161 = t;
  {
    ATerm r_35 (ATerm t)
    {
      ATerm s_86 = t;
      int t_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_35 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_161 != NULL) && (b_161 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_161 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_35, t);
          ;
          LocalPopChoice(t_86);
        }
      else
        {
          t = s_86;
          t = term_x_86;
          if(((b_161 != NULL) && (b_161 != t)))
            _fail(t);
          else
            b_161 = t;
        }
      return(t);
    }
    t = _2_0(r_35, _id, t);
    t = a_161;
    {
      ATerm t_35 (ATerm t)
      {
        ATerm c_161 = NULL;
        c_161 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_161), c_161);
        return(t);
      }
      t = _2_0(_id, t_35, t);
      {
        ATerm y_86 = t;
        int z_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(u_35, v_35, t);
            ;
            LocalPopChoice(z_86);
          }
        else
          {
            t = y_86;
            t = _2_0(_id, y_35, t);
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
  ATerm s_161 = NULL,t_161 = NULL,u_161 = NULL,v_161 = NULL,x_161 = NULL;
  s_161 = t;
  t = dtime_0_0(t);
  t = s_161;
  t = m_135(t);
  t_161 = t;
  t = dtime_0_0(t);
  u_161 = t;
  t = t_161;
  if(match_cons(t, sym__2))
    {
      v_161 = ATgetArgument(t, 0);
      x_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_161), (ATerm) ATmakeAppl(sym_Runtime_1, u_161)), x_161);
  return(t);
}
ATerm z_162 (ATerm i_162, ATerm t)
{
  t = SSL_fclose(i_162);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_162 = NULL,v_162 = NULL;
  v_162 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_162 = ATgetArgument(t, 0);
      {
        ATerm a_87 = t;
        int b_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_162);
            ;
            LocalPopChoice(b_87);
          }
        else
          {
            t = a_87;
            t = z_162(v_162, t);
          }
      }
    }
  else
    {
      t = z_162(v_162, t);
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
  ATerm a_163 = NULL;
  t = SSL_fopen(i_60, j_60);
  a_163 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_163);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_163 = NULL;
  t = SSL_stdin_stream();
  b_163 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_163);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_163 = NULL;
  t = SSL_stdout_stream();
  f_163 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_163);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_163 = NULL;
  t = SSL_stderr_stream();
  h_163 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_163);
  return(t);
}
ATerm a_36 (ATerm t)
{
  ATerm t_163 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      t_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_163;
  return(t);
}
ATerm b_36 (ATerm t)
{
  ATerm w_163 = NULL;
  w_163 = t;
  t = SSL_is_string(w_163);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_87 = ATgetArgument(t, 0);
      ATerm d_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_87 = t;
    int f_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_163 = NULL,w_29 = NULL;
        q_163 = t;
        t = SSL_explode_term(q_163);
        if(match_cons(t, sym__2))
          {
            ATerm g_87 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_87) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_87 = ATgetArgument(t, 1);
              if(((ATgetType(k_87) == AT_LIST) && !(ATisEmpty(k_87))))
                {
                  w_29 = ATgetFirst((ATermList) k_87);
                  {
                    ATerm m_87 = (ATerm) ATgetNext((ATermList) k_87);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_29;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_29;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_29;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_29;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_87);
      }
    else
      {
        t = e_87;
        {
          ATerm n_87 = t;
          int o_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_163 = NULL,s_163 = NULL;
              t = _2_0(a_36, _id, t);
              if(match_cons(t, sym__2))
                {
                  r_163 = ATgetArgument(t, 0);
                  s_163 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_15(r_163, s_163, t);
              ;
              LocalPopChoice(o_87);
            }
          else
            {
              t = n_87;
              {
                ATerm u_163 = NULL,v_163 = NULL;
                t = _2_0(b_36, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_163 = ATgetArgument(t, 0);
                    v_163 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_15(u_163, v_163, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_36 (ATerm t)
{
  t = term_p_87;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_163 = NULL,z_163 = NULL,a_164 = NULL;
  ATerm q_87 = t;
  int r_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_164 = NULL;
      c_164 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_164, term_s_87);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_87);
    }
  else
    {
      t = q_87;
      t = debug_1_0(c_36, t);
      _fail(t);
    }
  y_163 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_15(a_164, t);
  z_163 = t;
  t = y_163;
  t = fclose_0_0(t);
  t = z_163;
  return(t);
}
ATerm fetch_1_0 (ATerm d_120 (ATerm), ATerm t)
{
  ATerm h_164 (ATerm t)
  {
    ATerm v_87 = t;
    int w_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_120, _id, t);
        ;
        LocalPopChoice(w_87);
      }
    else
      {
        t = v_87;
        t = Cons_2_0(_id, h_164, t);
      }
    return(t);
  }
  t = h_164(t);
  return(t);
}
ATerm g_15 (ATerm w_54, ATerm x_54, ATerm t)
{
  t = SSL_strcat(w_54, x_54);
  return(t);
}
ATerm debug_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm i_164 = NULL,l_164 = NULL,m_164 = NULL,n_164 = NULL;
  i_164 = t;
  t = i_132(t);
  l_164 = t;
  t = term_p_38;
  m_164 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_164), l_164);
  n_164 = t;
  t = SSL_printnl(m_164, n_164);
  t = i_164;
  return(t);
}
ATerm d_36 (ATerm t)
{
  ATerm x_87 = t;
  int y_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_87);
    }
  else
    {
      t = x_87;
    }
  return(t);
}
ATerm e_36 (ATerm t)
{
  t = term_z_87;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_88 = t;
  int b_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_164 = NULL;
      w_164 = t;
      t = SSL_is_string(w_164);
      ;
      LocalPopChoice(b_88);
    }
  else
    {
      t = a_88;
      {
        ATerm c_88 = t;
        int d_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_36, t);
            ;
            LocalPopChoice(d_88);
          }
        else
          {
            t = c_88;
            {
              ATerm a_165 = NULL,b_165 = NULL,c_165 = NULL;
              a_165 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_165 = ATgetArgument(t, 0);
                  t = b_165;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_165 = ATgetArgument(t, 0);
                      t = b_165;
                      {
                        ATerm e_88 = t;
                        int f_88 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_88);
                          }
                        else
                          {
                            t = e_88;
                            t = debug_1_0(e_36, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_165 = NULL,h_165 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_165 = ATgetArgument(t, 0);
                          c_165 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_165;
                      t = eval_config_0_0(t);
                      g_165 = t;
                      t = c_165;
                      t = eval_config_0_0(t);
                      h_165 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_165, h_165);
                      t = g_15(g_165, h_165, t);
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
  ATerm k_165 = NULL,l_165 = NULL;
  k_165 = t;
  t = term_g_88;
  l_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_88, k_165);
  t = p_15(l_165, k_165, t);
  {
    ATerm h_88 = t;
    int i_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_165 = NULL,n_165 = NULL;
        t = eval_config_0_0(t);
        m_165 = t;
        t = term_g_88;
        n_165 = t;
        t = SSL_table_put(n_165, k_165, m_165);
        t = m_165;
        ;
        LocalPopChoice(i_88);
      }
    else
      {
        t = h_88;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_133 (ATerm), ATerm t)
{
  ATerm j_88 = t;
  int k_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_165 = NULL,q_165 = NULL;
      o_165 = t;
      t = term_z_41;
      t = get_config_0_0(t);
      q_165 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_165, term_l_88);
      t = geq_0_0(t);
      t = o_165;
      t = v_133(t);
      ;
      LocalPopChoice(k_88);
    }
  else
    {
      t = j_88;
    }
  return(t);
}
ATerm f_36 (ATerm t)
{
  ATerm s_165 = NULL;
  s_165 = t;
  if(match_string(t, "-k"))
    {
      t = s_165;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_165;
    }
  return(t);
}
ATerm g_36 (ATerm t)
{
  ATerm t_165 = NULL,u_165 = NULL,v_165 = NULL;
  t_165 = t;
  t = SSL_string_to_int(t_165);
  u_165 = t;
  t = term_m_88;
  v_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_88, u_165);
  t = s_15(v_165, u_165, t);
  t = t_165;
  return(t);
}
ATerm h_36 (ATerm t)
{
  t = term_n_88;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_36, g_36, h_36, t);
  return(t);
}
ATerm i_36 (ATerm t)
{
  ATerm x_165 = NULL;
  x_165 = t;
  if(match_string(t, "-S"))
    {
      t = x_165;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_165;
    }
  return(t);
}
ATerm j_36 (ATerm t)
{
  ATerm y_165 = NULL,z_165 = NULL;
  t = term_z_41;
  y_165 = t;
  t = term_r_50;
  z_165 = t;
  t = term_o_88;
  t = s_15(y_165, z_165, t);
  t = term_p_88;
  return(t);
}
ATerm k_36 (ATerm t)
{
  t = term_t_88;
  return(t);
}
ATerm l_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_36 (ATerm t)
{
  ATerm a_166 = NULL,b_166 = NULL,c_166 = NULL;
  a_166 = t;
  t = SSL_string_to_int(a_166);
  b_166 = t;
  t = term_z_41;
  c_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_41, b_166);
  t = s_15(c_166, b_166, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_166);
  return(t);
}
ATerm n_36 (ATerm t)
{
  t = term_u_88;
  return(t);
}
ATerm o_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_36 (ATerm t)
{
  ATerm d_166 = NULL,e_166 = NULL;
  t = term_v_88;
  d_166 = t;
  t = term_o_38;
  e_166 = t;
  t = term_w_88;
  t = s_15(d_166, e_166, t);
  t = term_x_88;
  return(t);
}
ATerm q_36 (ATerm t)
{
  t = term_y_88;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_88 = t;
  int a_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_36, j_36, k_36, t);
      ;
      LocalPopChoice(a_89);
    }
  else
    {
      t = z_88;
      {
        ATerm b_89 = t;
        int c_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_36, m_36, n_36, t);
            ;
            LocalPopChoice(c_89);
          }
        else
          {
            t = b_89;
            t = Option_3_0(o_36, p_36, q_36, t);
          }
      }
    }
  return(t);
}
ATerm s_15 (ATerm x_64, ATerm y_64, ATerm t)
{
  ATerm f_166 = NULL;
  t = term_g_88;
  f_166 = t;
  t = SSL_table_put(f_166, x_64, y_64);
  t = (ATerm) ATmakeAppl(sym__3, term_g_88, x_64, y_64);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_166 = NULL,j_166 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_166 = NULL,l_166 = NULL,m_166 = NULL;
      t = term_o_38;
      t = d_0(t);
      k_166 = t;
      t = term_d_89;
      l_166 = t;
      t = term_e_89;
      m_166 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_89, term_e_89, k_166);
      t = q_15(l_166, m_166, k_166, t);
      _fail(t);
    }
  else
    {
      ATerm p_166 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_166 = ATgetFirst((ATermList) t);
          j_166 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_166;
      t = a_0(t);
      t = term_o_38;
      t = b_0(t);
      p_166 = t;
      t = (ATerm) ATinsert(CheckATermList(j_166), p_166);
    }
  return(t);
}
ATerm r_36 (ATerm t)
{
  ATerm r_166 = NULL;
  r_166 = t;
  if(match_string(t, "-o"))
    {
      t = r_166;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_166;
    }
  return(t);
}
ATerm s_36 (ATerm t)
{
  ATerm s_166 = NULL,t_166 = NULL;
  s_166 = t;
  t = term_f_89;
  t_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_89, s_166);
  t = s_15(t_166, s_166, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_166);
  return(t);
}
ATerm t_36 (ATerm t)
{
  t = term_g_89;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_36, s_36, t_36, t);
  return(t);
}
ATerm q_15 (ATerm v_69, ATerm w_69, ATerm u_69, ATerm t)
{
  ATerm v_166 = NULL,w_166 = NULL,x_166 = NULL;
  v_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_69, w_69);
  {
    ATerm h_89 = t;
    int i_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_89 = ATgetArgument(t, 0);
            ATerm k_89 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_69, w_69);
        t = p_15(v_69, w_69, t);
        ;
        LocalPopChoice(i_89);
      }
    else
      {
        t = h_89;
        t = (ATerm) ATempty;
      }
    w_166 = t;
    t = (ATerm) ATinsert(CheckATermList(w_166), u_69);
    x_166 = t;
    t = SSL_table_put(v_69, w_69, x_166);
    t = v_166;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_167 = NULL,f_167 = NULL,g_167 = NULL,h_167 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_167 = NULL,j_167 = NULL,k_167 = NULL;
      t = term_o_38;
      t = m_0(t);
      i_167 = t;
      t = term_d_89;
      j_167 = t;
      t = term_e_89;
      k_167 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_89, term_e_89, i_167);
      t = q_15(j_167, k_167, i_167, t);
      _fail(t);
    }
  else
    {
      ATerm o_167 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_167 = ATgetFirst((ATermList) t);
          f_167 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_167;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_167 = ATgetFirst((ATermList) t);
          h_167 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_167;
      t = i_0(t);
      t = g_167;
      t = k_0(t);
      o_167 = t;
      t = (ATerm) ATinsert(CheckATermList(h_167), o_167);
    }
  return(t);
}
ATerm u_36 (ATerm t)
{
  ATerm q_167 = NULL;
  q_167 = t;
  if(match_string(t, "-i"))
    {
      t = q_167;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_167;
    }
  return(t);
}
ATerm v_36 (ATerm t)
{
  ATerm r_167 = NULL,s_167 = NULL;
  r_167 = t;
  t = term_l_89;
  s_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_89, r_167);
  t = s_15(s_167, r_167, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_167);
  return(t);
}
ATerm w_36 (ATerm t)
{
  t = term_m_89;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_36, v_36, w_36, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_167 = NULL,u_167 = NULL,v_167 = NULL,w_167 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_38;
  t = whoami_0_0(t);
  t_167 = t;
  t = term_p_38;
  u_167 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_89), t_167);
  v_167 = t;
  t = SSL_printnl(u_167, v_167);
  t = term_s_38;
  w_167 = t;
  t = SSL_exit(w_167);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_89;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_15 (ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm p_89 = t;
  int q_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_57, h_57);
      ;
      LocalPopChoice(q_89);
    }
  else
    {
      t = p_89;
      t = SSL_addr(g_57, h_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t)
{
  ATerm r_89 = t;
  int s_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_125(t);
      ;
      LocalPopChoice(s_89);
    }
  else
    {
      t = r_89;
      {
        ATerm z_167 = NULL,a_168 = NULL,d_168 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_167 = ATgetFirst((ATermList) t);
            a_168 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_168;
        t = foldr_2_0(w_125, x_125, t);
        d_168 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_167, d_168);
        t = x_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm x_36 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm y_36 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(u_30, v_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_168 = NULL,q_30 = NULL,r_30 = NULL;
  t = times_0_0(t);
  q_30 = t;
  t = SSL_explode_term(q_30);
  if(match_cons(t, sym__2))
    {
      ATerm t_89 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_30;
  t = foldr_2_0(x_36, y_36, t);
  g_168 = t;
  t = SSL_TicksToSeconds(g_168);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_168 = NULL,s_168 = NULL,t_168 = NULL;
  r_168 = t;
  if(match_cons(t, sym__2))
    {
      s_168 = ATgetArgument(t, 0);
      t_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_89 = t;
    int v_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_168;
        if((s_168 != t))
          {
            _fail(t);
          }
        t = r_168;
        ;
        LocalPopChoice(v_89);
      }
    else
      {
        t = u_89;
        t = (ATerm) ATmakeAppl(sym__2, s_168, t_168);
        {
          ATerm w_89 = t;
          int x_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_168, t_168);
              ;
              LocalPopChoice(x_89);
            }
          else
            {
              t = w_89;
              t = SSL_gtr(s_168, t_168);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_168, t_168);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_133 (ATerm), ATerm t)
{
  ATerm y_89 = t;
  int z_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_168 = NULL,y_168 = NULL;
      w_168 = t;
      t = term_z_41;
      t = get_config_0_0(t);
      y_168 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_168, term_s_38);
      t = geq_0_0(t);
      t = w_168;
      t = u_133(t);
      ;
      LocalPopChoice(z_89);
    }
  else
    {
      t = y_89;
    }
  return(t);
}
ATerm z_36 (ATerm t)
{
  ATerm a_169 = NULL,b_169 = NULL,c_169 = NULL,d_169 = NULL;
  t = run_time_0_0(t);
  a_169 = t;
  t = term_o_38;
  t = whoami_0_0(t);
  b_169 = t;
  t = term_p_38;
  c_169 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_90), a_169), term_a_90), b_169);
  d_169 = t;
  t = SSL_printnl(c_169, d_169);
  t = (ATerm) ATmakeAppl(sym__2, term_p_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_90), a_169), term_a_90), b_169));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_36, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_169 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_50;
  e_169 = t;
  t = SSL_exit(e_169);
  return(t);
}
ATerm a_37 (ATerm t)
{
  ATerm c_90 = t;
  int d_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_90);
    }
  else
    {
      t = c_90;
      {
        ATerm e_90 = t;
        int f_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(f_90);
          }
        else
          {
            t = e_90;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm g_90 = t;
  int h_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_90;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_90);
    }
  else
    {
      t = g_90;
      t = fetch_1_0(a_37, t);
    }
  t = k_136(t);
  return(t);
}
ATerm map_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm f_169 (ATerm t)
  {
    ATerm j_90 = t;
    int k_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_90);
      }
    else
      {
        t = j_90;
        t = Cons_2_0(t_119, f_169, t);
      }
    return(t);
  }
  t = f_169(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_169 = NULL,i_169 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_169 = ATgetFirst((ATermList) t);
      i_169 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_169 = NULL,n_169 = NULL;
        t = i_169;
        t = g_0(t);
        m_169 = t;
        t = h_169;
        t = f_0(t);
        n_169 = t;
        t = i_169;
        {
          ATerm b_37 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(m_169), n_169);
            return(t);
          }
          t = reverse_acc_2_0(f_0, b_37, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_38;
      t = g_0(t);
    }
  return(t);
}
ATerm p_15 (ATerm m_71, ATerm n_71, ATerm t)
{
  t = SSL_table_get(m_71, n_71);
  return(t);
}
ATerm Program_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm o_169 = NULL,p_169 = NULL,q_169 = NULL,r_169 = NULL,r_8 = NULL,s_8 = NULL;
  r_169 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_169);
  o_169 = t;
  t = p_169;
  t = k_111(t);
  q_169 = t;
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_169);
  r_8 = t;
  t = SSLsetAnnotations(r_8, o_169);
  return(t);
}
ATerm d_37 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm e_37 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_37 (ATerm t)
{
  ATerm w_169 = NULL;
  w_169 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_169), term_l_90);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_169 = NULL,v_169 = NULL;
  ATerm m_90 = t;
  int n_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_89;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_90);
    }
  else
    {
      t = m_90;
      t = fetch_1_0(d_37, t);
    }
  t = term_o_90;
  t = echo_0_0(t);
  t = term_d_89;
  u_169 = t;
  t = term_e_89;
  v_169 = t;
  t = term_p_90;
  t = p_15(u_169, v_169, t);
  t = reverse_acc_2_0(_id, e_37, t);
  t = map_1_0(f_37, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  ATerm x_169 = NULL,y_169 = NULL,z_169 = NULL,a_170 = NULL,t_8 = NULL,v_8 = NULL;
  a_170 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      y_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_170);
  x_169 = t;
  t = y_169;
  t = l_111(t);
  z_169 = t;
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_169);
  t_8 = t;
  t = SSLsetAnnotations(t_8, x_169);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_170 = NULL,f_170 = NULL,g_170 = NULL;
  e_170 = t;
  {
    ATerm s_90 = t;
    int t_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_170;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_90 = ATgetFirst((ATermList) t);
                ATerm v_90 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_170;
          }
        ;
        LocalPopChoice(t_90);
      }
    else
      {
        t = s_90;
        t = (ATerm) ATinsert(ATempty, e_170);
      }
    f_170 = t;
    t = term_x_86;
    g_170 = t;
    t = SSL_printnl(g_170, f_170);
    t = e_170;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_89;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_37 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_37 (ATerm t)
{
  ATerm k_170 = NULL,l_170 = NULL;
  t = term_w_90;
  k_170 = t;
  t = term_o_38;
  l_170 = t;
  t = term_x_90;
  t = s_15(k_170, l_170, t);
  return(t);
}
ATerm l_37 (ATerm t)
{
  t = term_y_90;
  return(t);
}
ATerm m_37 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_37 (ATerm t)
{
  ATerm m_170 = NULL,n_170 = NULL,o_170 = NULL,p_170 = NULL;
  t = term_w_90;
  m_170 = t;
  t = term_o_38;
  n_170 = t;
  t = term_x_90;
  t = s_15(m_170, n_170, t);
  t = term_z_90;
  o_170 = t;
  t = term_o_38;
  p_170 = t;
  t = term_a_91;
  t = s_15(o_170, p_170, t);
  t = term_b_91;
  return(t);
}
ATerm p_37 (ATerm t)
{
  t = term_c_91;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_91 = t;
  int e_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_37, k_37, l_37, t);
      ;
      LocalPopChoice(e_91);
    }
  else
    {
      t = d_91;
      t = Option_3_0(m_37, o_37, p_37, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm q_170 = NULL,r_170 = NULL,s_170 = NULL,t_170 = NULL,u_170 = NULL,v_170 = NULL,w_8 = NULL,x_8 = NULL;
  v_170 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_170 = ATgetFirst((ATermList) t);
      s_170 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_170);
  q_170 = t;
  t = r_170;
  t = n_98(t);
  t_170 = t;
  t = s_170;
  t = o_98(t);
  u_170 = t;
  x_8 = t;
  t = (ATerm) ATinsert(CheckATermList(u_170), t_170);
  w_8 = t;
  t = SSLsetAnnotations(w_8, q_170);
  return(t);
}
ATerm q_37 (ATerm t)
{
  ATerm a_171 = NULL,b_171 = NULL;
  a_171 = t;
  t = term_o_89;
  b_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_89, a_171);
  t = s_15(b_171, a_171, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, a_171);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_138 (ATerm), ATerm t)
{
  ATerm z_170 = NULL;
  z_170 = t;
  {
    ATerm f_91 = t;
    int g_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_91;
        t = n_138(t);
        ;
        LocalPopChoice(g_91);
      }
    else
      {
        t = f_91;
      }
    t = z_170;
    {
      ATerm r_37 (ATerm t)
      {
        ATerm i_91 = t;
        int j_91 = stack_ptr;
        if((PushChoice() == 0))
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
                t = n_138(t);
                t = Cons_2_0(_id, r_37, t);
              }
            ;
            LocalPopChoice(j_91);
          }
        else
          {
            t = i_91;
            {
              ATerm d_171 = NULL,e_171 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_171 = ATgetFirst((ATermList) t);
                  e_171 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_171), (ATerm) ATmakeAppl(sym_Undefined_1, d_171));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_37, r_37, t);
    }
  }
  return(t);
}
ATerm t_37 (ATerm t)
{
  ATerm s_171 = NULL;
  s_171 = t;
  if(match_string(t, "--help"))
    {
      t = s_171;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_171;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_171;
        }
    }
  return(t);
}
ATerm u_37 (ATerm t)
{
  ATerm t_171 = NULL,u_171 = NULL;
  t = term_i_90;
  t_171 = t;
  t = term_o_38;
  u_171 = t;
  t = term_m_91;
  t = s_15(t_171, u_171, t);
  t = term_n_91;
  return(t);
}
ATerm x_37 (ATerm t)
{
  t = term_o_91;
  return(t);
}
ATerm y_37 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm l_171 = NULL,m_171 = NULL,n_171 = NULL,o_171 = NULL,p_171 = NULL,q_171 = NULL,r_171 = NULL;
  l_171 = t;
  t = term_d_89;
  o_171 = t;
  t = term_e_89;
  p_171 = t;
  t = (ATerm) ATempty;
  q_171 = t;
  t = SSL_table_put(o_171, p_171, q_171);
  t = l_171;
  {
    ATerm s_37 (ATerm t)
    {
      ATerm p_91 = t;
      int q_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_138(t);
          ;
          LocalPopChoice(q_91);
        }
      else
        {
          t = p_91;
          {
            ATerm r_91 = t;
            int s_91 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_37, u_37, x_37, t);
                ;
                LocalPopChoice(s_91);
              }
            else
              {
                t = r_91;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_37, t);
    {
      ATerm t_91 = t;
      int u_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_172 = NULL;
          b_172 = t;
          {
            ATerm v_91 = t;
            int w_91 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_31 = NULL;
                t = b_172;
                {
                  ATerm x_91 = t;
                  int y_91 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_90;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_91);
                    }
                  else
                    {
                      t = x_91;
                      t = fetch_1_0(y_37, t);
                    }
                  t = b_172;
                  t = default_system_usage_0_0(t);
                  t = term_r_50;
                  h_31 = t;
                  t = SSL_exit(h_31);
                }
                ;
                LocalPopChoice(w_91);
              }
            else
              {
                t = v_91;
                {
                  ATerm l_31 = NULL;
                  t = term_w_90;
                  t = get_config_0_0(t);
                  t = b_172;
                  t = default_system_about_0_0(t);
                  t = term_r_50;
                  l_31 = t;
                  t = SSL_exit(l_31);
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
            ATerm z_91 = t;
            int a_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_172 = NULL,d_172 = NULL,e_172 = NULL;
                ATerm z_37 (ATerm t)
                {
                  ATerm a_38 (ATerm t)
                  {
                    if(((m_171 != NULL) && (m_171 != t)))
                      _fail(t);
                    else
                      m_171 = t;
                    return(t);
                  }
                  t = Undefined_1_0(a_38, t);
                  return(t);
                }
                t = fetch_1_0(z_37, t);
                t = term_p_38;
                c_172 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_171)), term_b_92);
                d_172 = t;
                t = SSL_printnl(c_172, d_172);
                t = (ATerm) ATmakeAppl(sym__2, term_p_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_171)), term_b_92));
                t = default_system_usage_0_0(t);
                t = term_s_38;
                e_172 = t;
                t = SSL_exit(e_172);
                ;
                LocalPopChoice(a_92);
              }
            else
              {
                t = z_91;
              }
          }
        }
      n_171 = t;
      t = term_d_89;
      r_171 = t;
      t = SSL_table_destroy(r_171);
      t = n_171;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm t)
{
  ATerm h_172 = NULL,i_172 = NULL,j_172 = NULL,k_172 = NULL;
  t = parse_options_1_0(m_136, t);
  h_172 = t;
  t = term_c_92;
  i_172 = t;
  t = SSL_table_create(i_172);
  t = term_c_92;
  j_172 = t;
  t = term_d_92;
  k_172 = t;
  t = SSL_table_put(j_172, k_172, h_172);
  t = h_172;
  t = o_136(t);
  {
    ATerm e_92 = t;
    int f_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_136, t);
        ;
        LocalPopChoice(f_92);
      }
    else
      {
        t = e_92;
        {
          ATerm g_92 = t;
          int h_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_136(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_92);
            }
          else
            {
              t = g_92;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_38 (ATerm t)
{
  t = if_verbose2_1_0(l_38, t);
  return(t);
}
ATerm i_38 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_38 (ATerm t)
{
  ATerm l_172 = NULL,m_172 = NULL;
  t = term_i_92;
  l_172 = t;
  t = term_o_38;
  m_172 = t;
  t = term_j_92;
  t = s_15(l_172, m_172, t);
  t = term_k_92;
  return(t);
}
ATerm k_38 (ATerm t)
{
  t = term_l_92;
  return(t);
}
ATerm l_38 (ATerm t)
{
  ATerm n_172 = NULL,o_172 = NULL,p_172 = NULL,q_172 = NULL;
  n_172 = t;
  t = term_o_89;
  t = get_config_0_0(t);
  o_172 = t;
  t = term_p_38;
  p_172 = t;
  t = (ATerm) ATinsert(ATempty, o_172);
  q_172 = t;
  t = SSL_printnl(p_172, q_172);
  t = n_172;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_135 (ATerm), ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm t)
{
  ATerm b_38 (ATerm t)
  {
    ATerm m_92 = t;
    int n_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_135(t);
        ;
        LocalPopChoice(n_92);
      }
    else
      {
        t = m_92;
        {
          ATerm o_92 = t;
          int p_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_92);
            }
          else
            {
              t = o_92;
              {
                ATerm q_92 = t;
                int r_92 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_92);
                  }
                else
                  {
                    t = q_92;
                    {
                      ATerm s_92 = t;
                      int t_92 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_38, j_38, k_38, t);
                          ;
                          LocalPopChoice(t_92);
                        }
                      else
                        {
                          t = s_92;
                          {
                            ATerm u_92 = t;
                            int v_92 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_92);
                              }
                            else
                              {
                                t = u_92;
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
  ATerm f_38 (ATerm t)
  {
    ATerm r_172 = NULL,s_172 = NULL,t_172 = NULL;
    r_172 = t;
    {
      ATerm w_92 = t;
      int x_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_38 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_172 != NULL) && (s_172 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_172 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_38, t);
          ;
          LocalPopChoice(x_92);
        }
      else
        {
          t = w_92;
          t = term_y_92;
          s_172 = t;
        }
      t = not_null(s_172);
      t = ReadFromFile_0_0(t);
      t_172 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_172, t_172);
      t = apply_strategy_1_0(v_135, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_38, x_135, c_38, f_38, t);
  return(t);
}
ATerm n_38 (ATerm t)
{
  t = _2_0(_id, frontend_transformation_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(n_38, _fail, default_usage_0_0, t);
  return(t);
}

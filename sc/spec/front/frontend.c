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
ATerm term_o_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_x_71;
ATerm term_w_71;
ATerm term_v_71;
ATerm term_q_71;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_a_71;
ATerm term_z_70;
ATerm term_q_70;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_g_70;
ATerm term_o_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_e_69;
ATerm term_b_69;
ATerm term_a_69;
ATerm term_z_68;
ATerm term_w_68;
ATerm term_v_68;
ATerm term_s_68;
ATerm term_r_68;
ATerm term_o_68;
ATerm term_n_68;
ATerm term_t_67;
ATerm term_l_67;
ATerm term_j_67;
ATerm term_c_67;
ATerm term_g_66;
ATerm term_f_66;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_v_65;
ATerm term_u_65;
ATerm term_p_65;
ATerm term_o_65;
ATerm term_e_65;
ATerm term_r_64;
ATerm term_q_64;
ATerm term_l_64;
ATerm term_c_64;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_c_63;
ATerm term_b_63;
ATerm term_q_62;
ATerm term_o_62;
ATerm term_n_62;
ATerm term_k_62;
ATerm term_v_61;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_p_58;
ATerm term_n_56;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_l_55;
ATerm term_e_55;
ATerm term_e_50;
ATerm term_z_49;
ATerm term_w_49;
ATerm term_r_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_g_49;
ATerm term_d_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_o_48;
ATerm term_k_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_c_47;
ATerm term_t_46;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_b_44;
ATerm term_r_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_o_42;
ATerm term_z_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_o_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_o_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_z_35;
ATerm term_x_35;
ATerm term_n_35;
ATerm term_c_35;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_o_34;
ATerm term_j_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_u_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_i_25;
ATerm term_f_24;
ATerm term_s_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_22;
void init_constant_terms (void)
{
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_31);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Op_2, term_c_31, (ATerm) ATempty);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Var_1, term_v_32);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Var_1, term_x_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Anno_2, term_w_32, term_y_32);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Var_1, term_a_33);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Var_1, term_c_33);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Anno_2, term_b_33, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_32);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Call_2, term_f_33, (ATerm) ATempty);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_BAM_3, term_g_33, term_w_32, term_b_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_32);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Call_2, term_l_33, (ATerm) ATempty);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_BAM_3, term_m_33, term_y_32, term_d_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Var_1, term_o_34);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("a_2", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("d_2", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Keys_1, term_g_31);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("u_1", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_34);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, term_x_36);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_31);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_44);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("r_1", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_45);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_Op_2, term_e_48, (ATerm) ATempty);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Op_2, term_u_48, (ATerm) ATempty);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_49);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_49);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_49);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_49);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_55);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_55);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_23);
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_63);
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(sym_Call_2, term_v_63, (ATerm) ATempty);
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_62);
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_48);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(sym_Call_2, term_q_64, (ATerm) ATempty);
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(sym_Call_2, term_v_61, (ATerm) ATempty);
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_31);
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(sym__3, term_l_71, term_m_71, term_u_30);
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm u_135 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm desugar_spec_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm j_126 (ATerm), ATerm);
ATerm timing_1_0 (ATerm c_105 (ATerm), ATerm);
ATerm spaste_1_0 (ATerm g_135 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm);
ATerm Let_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm srename_0_0 (ATerm);
ATerm rename_4_0 (ATerm c_132 (ATerm (ATerm), ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_132 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm ListBuild_0_0 (ATerm);
ATerm ListMatch_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm DesugarListMatching_0_0 (ATerm);
ATerm expand_calls_0_0 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm MkCongDefs_0_0 (ATerm);
ATerm congdefs_0_0 (ATerm);
ATerm RulesToSdefs_0_0 (ATerm);
ATerm TupleDeclarations_0_0 (ATerm);
ATerm CheckConsError_0_0 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm CheckTuple_0_0 (ATerm);
ATerm CheckCons_0_0 (ATerm);
ATerm manytd_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm check_constructors_p__2_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm exp_overlays2_1_0 (ATerm h_134 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm Overlay_to_Congdef_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm c_135 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm h_132 (ATerm), ATerm i_132 (ATerm (ATerm), ATerm), ATerm);
ATerm SubsVar_2_0 (ATerm a_132 (ATerm), ATerm b_132 (ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm s_132 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm d_112 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm n_111 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm (ATerm), ATerm), ATerm q_131 (ATerm), ATerm r_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_131 (ATerm (ATerm), ATerm), ATerm t_131 (ATerm), ATerm);
ATerm substitute_5_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm (ATerm), ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_131 (ATerm (ATerm), ATerm), ATerm);
ATerm tsubstitute_0_0 (ATerm);
ATerm ExpOverlay_1_0 (ATerm i_134 (ATerm), ATerm);
ATerm exp_overlays1_1_0 (ATerm g_134 (ATerm), ATerm);
ATerm ExpandOverlays_0_0 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm guardedlchoice_1_0 (ATerm q_135 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm lchoice_1_0 (ATerm p_135 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_Bound_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm m_135 (ATerm), ATerm n_135 (ATerm), ATerm);
ATerm choice_1_0 (ATerm o_135 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Unbound_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm App_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm m_123 (ATerm), ATerm);
ATerm Binding_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm Build_1_0 (ATerm h_96 (ATerm), ATerm);
ATerm VarScope_1_0 (ATerm l_135 (ATerm), ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm DefineBound_0_0 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm DefineUnbound_0_0 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm defs_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm unzip_1_0 (ATerm c_115 (ATerm), ATerm);
ATerm unzip_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm ContextVar_0_0 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm split_under_scope_1_0 (ATerm d_134 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm split_dynamic_rule_1_0 (ATerm b_134 (ATerm), ATerm);
ATerm DeclareContextVars_0_0 (ATerm);
ATerm lift_dynamic_rule_0_0 (ATerm);
ATerm listtd_1_0 (ATerm y_113 (ATerm), ATerm);
ATerm lift_dynamic_rules_0_0 (ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm define_rule_scope_0_0 (ATerm);
ATerm LiftDynamicRules_0_0 (ATerm);
ATerm DefScopeDefault_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm s_116 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm crush_3_0 (ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm);
ATerm diff_1_0 (ATerm o_116 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm);
ATerm zip_1_0 (ATerm x_114 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm);
ATerm for_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm define_lrules_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm n_123 (ATerm), ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm assert_1_0 (ATerm l_123 (ATerm), ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm t_91 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm i_123 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm h_123 (ATerm), ATerm);
ATerm scope_2_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm filter_1_0 (ATerm t_119 (ATerm), ATerm);
ATerm GetConstructors_0_0 (ATerm);
ATerm InsertBSpec_0_0 (ATerm);
ATerm foldr_3_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm Op_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm Var_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm q_113 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm r_121 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm c_122 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_105 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm pre_desugar_0_0 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_113 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_126 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_125 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_128 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_124 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_126 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm e_129 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm f_104 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_104 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_112 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_130 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_131 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_131 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm k_128 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm j_0 = NULL,o_0 = NULL,r_0 = NULL;
  o_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      r_0 = ATgetArgument(t, 0);
      j_0 = ATgetArgument(t, 1);
      {
        ATerm w_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL;
        t = o_0;
        t = new_0_0(t);
        w_0 = t;
        t = new_0_0(t);
        x_0 = t;
        t = new_0_0(t);
        z_0 = t;
        t = new_0_0(t);
        a_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_1), z_0), x_0), w_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, w_0), (ATerm) ATmakeAppl(sym_Var_1, z_0))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, r_0, (ATerm)ATmakeAppl(sym_Var_1, w_0), (ATerm) ATmakeAppl(sym_Var_1, x_0)), (ATerm) ATmakeAppl(sym_BAM_3, j_0, (ATerm)ATmakeAppl(sym_Var_1, z_0), (ATerm) ATmakeAppl(sym_Var_1, a_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_1)), (ATerm) ATmakeAppl(sym_Var_1, x_0))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          r_0 = ATgetArgument(t, 0);
          {
            ATerm d_1 = NULL,g_1 = NULL,i_1 = NULL,l_1 = NULL;
            t = o_0;
            t = new_0_0(t);
            d_1 = t;
            t = r_0;
            {
              ATerm h_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    g_1 = ATgetArgument(t, 0);
                    i_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, d_1);
                return(t);
              }
              t = oncetd_1_0(h_0, t);
              l_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_1)), not_null(g_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_1)), (ATerm) ATmakeAppl(sym_Build_1, l_1))));
            }
          }
        }
      else
        {
          ATerm p_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,v_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              r_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_0;
          t = new_0_0(t);
          p_1 = t;
          t = new_0_0(t);
          q_1 = t;
          t = r_0;
          {
            ATerm t_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  s_1 = ATgetArgument(t, 0);
                  t_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, p_1);
              return(t);
            }
            t = oncetd_1_0(t_0, t);
            v_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_1))))), (ATerm)ATmakeAppl(sym_Var_1, p_1), (ATerm) ATmakeAppl(sym_Op_2, term_n_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_1)), not_null(s_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  y_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
        t = y_1;
        t = new_0_0(t);
        c_2 = t;
        t = z_1;
        {
          ATerm u_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                f_2 = ATgetArgument(t, 0);
                e_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, c_2), f_2);
            return(t);
          }
          t = pat_td_1_0(u_0, t);
          g_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_2))))));
        }
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = p_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL;
              t = y_1;
              t = new_0_0(t);
              i_2 = t;
              t = z_1;
              {
                ATerm c_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      j_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, i_2);
                  return(t);
                }
                t = pat_td_1_0(c_1, t);
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_2)), not_null(j_2))));
              }
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL;
                t = y_1;
                t = new_0_0(t);
                n_2 = t;
                t = z_1;
                {
                  ATerm f_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        o_2 = ATgetArgument(t, 0);
                        p_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_2);
                    return(t);
                  }
                  t = pat_td_1_0(f_1, t);
                  q_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_2)), not_null(o_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Mapp0_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      r_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_2;
  {
    ATerm j_1 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm v_23 = ATgetArgument(t, 0);
          if(match_cons(v_23, sym_Match_1))
            {
              s_2 = ATgetArgument(v_23, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = s_2;
      return(t);
    }
    t = pat_td_1_0(j_1, t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, t_2);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                x_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_2;
            if(match_cons(t, sym_RootApp_1))
              {
                y_2 = ATgetArgument(t, 0);
                t = y_2;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    y_2 = ATgetArgument(t, 0);
                    z_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, y_2, z_2);
              }
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  f_3 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL;
        t = f_3;
        t = new_0_0(t);
        i_3 = t;
        t = g_3;
        {
          ATerm m_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                j_3 = ATgetArgument(t, 0);
                k_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_3);
            return(t);
          }
          t = pat_td_1_0(m_1, t);
          m_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_3)), not_null(j_3))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_3)))), (ATerm) ATmakeAppl(sym_Build_1, m_3)));
        }
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = b_24;
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
              t = f_3;
              t = new_0_0(t);
              p_3 = t;
              t = g_3;
              {
                ATerm o_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      q_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_3);
                  return(t);
                }
                t = pat_td_1_0(o_1, t);
                r_3 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_3)))), (ATerm) ATmakeAppl(sym_Build_1, r_3)));
              }
              ;
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
              {
                ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL,y_3 = NULL;
                t = f_3;
                t = new_0_0(t);
                t_3 = t;
                t = g_3;
                {
                  ATerm w_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        u_3 = ATgetArgument(t, 0);
                        w_3 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_3);
                    return(t);
                  }
                  t = pat_td_1_0(w_1, t);
                  y_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_3), not_null(w_3), (ATerm) ATmakeAppl(sym_Var_1, t_3))), (ATerm) ATmakeAppl(sym_Build_1, y_3)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  e_4 = t;
  if(match_cons(t, sym_As_2))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  z_3 = t;
  t = a_4;
  t = g_93(t);
  c_4 = t;
  t = b_4;
  t = h_93(t);
  d_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, c_4, d_4), z_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,m_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
      l_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_4);
  h_4 = t;
  t = i_4;
  t = f_97(t);
  m_4 = t;
  t = j_4;
  t = g_97(t);
  q_4 = t;
  t = l_4;
  t = h_97(t);
  r_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, m_4, q_4, r_4), h_4);
  return(t);
}
ATerm Explode_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_Explode_2))
    {
      w_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_5);
  v_4 = t;
  t = w_4;
  t = z_92(t);
  y_4 = t;
  t = x_4;
  t = a_93(t);
  z_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, y_4, z_4), v_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm u_135 (ATerm), ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_135(t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm h_2 (ATerm t)
              {
                t = pat_td_1_0(u_135, t);
                return(t);
              }
              t = fetch_1_0(h_2, t);
              return(t);
            }
            t = Op_2_0(_id, b_2, t);
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_2 (ATerm t)
                  {
                    t = pat_td_1_0(u_135, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, k_2, t);
                  ;
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm p_24 = t;
                    int q_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_2 (ATerm t)
                        {
                          t = pat_td_1_0(u_135, t);
                          return(t);
                        }
                        t = Explode_2_0(m_2, _id, t);
                        ;
                        LocalPopChoice(q_24);
                      }
                    else
                      {
                        t = p_24;
                        {
                          ATerm r_24 = t;
                          int s_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_2 (ATerm t)
                              {
                                ATerm w_2 (ATerm t)
                                {
                                  t = pat_td_1_0(u_135, t);
                                  return(t);
                                }
                                t = fetch_1_0(w_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, u_2, t);
                              ;
                              LocalPopChoice(s_24);
                            }
                          else
                            {
                              t = r_24;
                              {
                                ATerm a_3 (ATerm t)
                                {
                                  t = pat_td_1_0(u_135, t);
                                  return(t);
                                }
                                t = As_2_0(_id, a_3, t);
                              }
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL,k_5 = NULL;
        t = f_5;
        {
          ATerm b_3 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm v_24 = ATgetArgument(t, 0);
                if(match_cons(v_24, sym_Build_1))
                  {
                    h_5 = ATgetArgument(v_24, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = h_5;
            return(t);
          }
          t = pat_td_1_0(b_3, t);
          k_5 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, k_5);
        }
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        {
          ATerm m_5 = NULL,n_5 = NULL;
          t = f_5;
          {
            ATerm c_3 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm w_24 = ATgetArgument(t, 0);
                  if(match_cons(w_24, sym_Build_1))
                    {
                      m_5 = ATgetArgument(w_24, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_24 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = m_5;
              return(t);
            }
            t = pat_td_1_0(c_3, t);
            n_5 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, n_5);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 = NULL,w_5 = NULL,x_5 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                u_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_5;
            if(match_cons(t, sym_RootApp_1))
              {
                w_5 = ATgetArgument(t, 0);
                t = w_5;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    w_5 = ATgetArgument(t, 0);
                    x_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_5), w_5);
              }
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm o_6 (ATerm h_6, ATerm t)
  {
    ATerm j_6 = NULL;
    t = h_6;
    {
      ATerm c_25 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_25;
        }
      t = new_0_0(t);
      j_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_6), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_6)))), (ATerm) ATmakeAppl(sym_Var_1, j_6)));
    }
    return(t);
  }
  ATerm k_6 = NULL,l_6 = NULL;
  k_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_6 = ATgetArgument(t, 0);
      {
        ATerm d_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_6(k_6, t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = d_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_25, (ATerm) ATmakeAppl(sym_Var_1, l_6)));
          }
      }
    }
  else
    {
      t = o_6(k_6, t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,q_7 = NULL,r_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
      n_7 = ATgetArgument(t, 2);
      {
        ATerm v_2 = NULL,d_3 = NULL,e_3 = NULL;
        t = n_7;
        {
          ATerm h_3 (ATerm t)
          {
            ATerm j_25 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_25;
              }
            return(t);
          }
          t = fetch_1_0(h_3, t);
          t = n_7;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm l_3 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, l_3, t);
            if(match_cons(t, sym__2))
              {
                v_2 = ATgetArgument(t, 0);
                {
                  ATerm k_25 = ATgetArgument(t, 1);
                  if(match_cons(k_25, sym__2))
                    {
                      d_3 = ATgetArgument(k_25, 0);
                      e_3 = ATgetArgument(k_25, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, v_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_3), (ATerm) ATmakeAppl(sym_PrimT_3, q_7, r_7, e_3)));
          }
        }
      }
    }
  else
    {
      ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          q_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_7;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm l_25 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_25;
            }
          return(t);
        }
        t = fetch_1_0(n_3, t);
        t = r_7;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm o_3 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, o_3, t);
          if(match_cons(t, sym__2))
            {
              n_4 = ATgetArgument(t, 0);
              {
                ATerm m_25 = ATgetArgument(t, 1);
                if(match_cons(m_25, sym__2))
                  {
                    o_4 = ATgetArgument(m_25, 0);
                    p_4 = ATgetArgument(m_25, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, n_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_4), (ATerm) ATmakeAppl(sym_PrimT_3, q_7, (ATerm)ATempty, p_4)));
        }
      }
    }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            {
              ATerm p_25 = t;
              int q_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(q_25);
                }
              else
                {
                  t = p_25;
                  {
                    ATerm r_25 = t;
                    int s_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(s_25);
                      }
                    else
                      {
                        t = r_25;
                        {
                          ATerm t_25 = t;
                          int u_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(u_25);
                            }
                          else
                            {
                              t = t_25;
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
      t = repeat_1_0(v_3, t);
    }
    return(t);
  }
  t = topdown_1_0(s_3, t);
  return(t);
}
ATerm desugar_spec_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SDef_3_0(_id, _id, desugar_0_0, t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm x_25 = t;
          int z_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SDefT_4_0(_id, _id, _id, desugar_0_0, t);
              ;
              LocalPopChoice(z_25);
            }
          else
            {
              t = x_25;
              {
                ATerm f_4 (ATerm t)
                {
                  t = term_b_26;
                  return(t);
                }
                t = debug_1_0(f_4, t);
                _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = map_1_0(x_3, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL,a_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_8);
  u_7 = t;
  t = v_7;
  t = r_91(t);
  y_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, y_7), u_7);
  return(t);
}
ATerm Specification_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,g_8 = NULL,j_8 = NULL,l_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_8);
  e_8 = t;
  t = g_8;
  t = w_91(t);
  j_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, j_8), e_8);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm j_126 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm x_8 = NULL,b_9 = NULL;
    x_8 = t;
    t = term_c_26;
    t = get_config_0_0(t);
    b_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_9, term_f_26);
    t = geq_0_0(t);
    t = x_8;
    t = j_126(t);
    return(t);
  }
  t = try_1_0(g_4, t);
  return(t);
}
ATerm timing_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm e_9 = NULL;
    e_9 = t;
    t = dtime_0_0(t);
    t = debug_1_0(c_105, t);
    t = e_9;
    return(t);
  }
  t = if_verbose3_1_0(k_4, t);
  return(t);
}
ATerm spaste_1_0 (ATerm g_135 (ATerm), ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_4 (ATerm t)
      {
        t = split_2_0(_id, g_135, t);
        {
          ATerm u_4 (ATerm t)
          {
            ATerm r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,y_9 = NULL;
            if(match_cons(t, sym__2))
              {
                r_9 = ATgetArgument(t, 0);
                y_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_9;
            {
              ATerm i_26 = t;
              int k_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm l_26 = ATgetArgument(t, 0);
                      t_9 = ATgetArgument(t, 1);
                      u_9 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_26);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, y_9, t_9, u_9);
                }
              else
                {
                  t = i_26;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm m_26 = ATgetArgument(t, 0);
                      t_9 = ATgetArgument(t, 1);
                      u_9 = ATgetArgument(t, 2);
                      v_9 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_9, t_9, u_9, v_9);
                }
            }
            return(t);
          }
          t = zip_1_0(u_4, t);
        }
        return(t);
      }
      t = Let_2_0(t_4, _id, t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_5 (ATerm t)
            {
              t = split_2_0(_id, g_135, t);
              {
                ATerm c_5 (ATerm t)
                {
                  ATerm k_10 = NULL,m_10 = NULL,n_10 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      k_10 = ATgetArgument(t, 0);
                      n_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = k_10;
                  {
                    ATerm p_26 = t;
                    int s_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm t_26 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_26);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_10);
                      }
                    else
                      {
                        t = p_26;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm u_26 = ATgetArgument(t, 0);
                            m_10 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_10, m_10);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(c_5, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, b_5, _id, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            {
              ATerm v_26 = t;
              int x_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_5 (ATerm t)
                  {
                    t = split_2_0(_id, g_135, t);
                    {
                      ATerm e_5 (ATerm t)
                      {
                        ATerm a_11 = NULL,s_11 = NULL,u_11 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            a_11 = ATgetArgument(t, 0);
                            u_11 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = a_11;
                        {
                          ATerm y_26 = t;
                          int z_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm a_27 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_26);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_11);
                            }
                          else
                            {
                              t = y_26;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm b_27 = ATgetArgument(t, 0);
                                  s_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, u_11, s_11);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(e_5, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, d_5, _id, _id, t);
                  ;
                  LocalPopChoice(x_26);
                }
              else
                {
                  t = v_26;
                  {
                    ATerm d_27 = t;
                    int e_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_5 (ATerm t)
                        {
                          t = split_2_0(_id, g_135, t);
                          {
                            ATerm i_5 (ATerm t)
                            {
                              ATerm o_12 = NULL,v_12 = NULL,f_13 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  o_12 = ATgetArgument(t, 0);
                                  f_13 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = o_12;
                              {
                                ATerm f_27 = t;
                                int g_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm h_27 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(g_27);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_13);
                                  }
                                else
                                  {
                                    t = f_27;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm i_27 = ATgetArgument(t, 0);
                                        v_12 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, f_13, v_12);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(i_5, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, g_5, _id, _id, t);
                        ;
                        LocalPopChoice(e_27);
                      }
                    else
                      {
                        t = d_27;
                        {
                          ATerm j_5 (ATerm t)
                          {
                            ATerm p_13 = NULL;
                            t = g_135(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                p_13 = ATgetFirst((ATermList) t);
                                {
                                  ATerm j_27 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = p_13;
                            return(t);
                          }
                          t = Rec_2_0(j_5, _id, t);
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
ATerm Rec_2_0 (ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,s_13 = NULL,a_14 = NULL,c_14 = NULL,i_14 = NULL,k_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Rec_2))
    {
      s_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_14);
  q_13 = t;
  t = s_13;
  t = w_96(t);
  c_14 = t;
  t = a_14;
  t = x_96(t);
  i_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, c_14, i_14), q_13);
  return(t);
}
ATerm Let_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_15);
  c_15 = t;
  t = d_15;
  t = z_95(t);
  i_15 = t;
  t = h_15;
  t = a_96(t);
  j_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, i_15, j_15), c_15);
  return(t);
}
ATerm sboundin_3_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(h_135, h_135, t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(j_135, j_135, h_135, t);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            {
              ATerm p_27 = t;
              int r_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(j_135, j_135, j_135, h_135, t);
                  ;
                  LocalPopChoice(r_27);
                }
              else
                {
                  t = p_27;
                  t = Rec_2_0(j_135, h_135, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
      {
        ATerm u_27 = ATgetArgument(t, 2);
      }
      {
        ATerm v_27 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = r_15;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
      {
        ATerm x_27 = ATgetArgument(t, 2);
      }
      {
        ATerm y_27 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = s_15;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
      {
        ATerm a_28 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_15;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      y_15 = ATgetArgument(t, 0);
      {
        ATerm e_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_15;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm c_16 = NULL;
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              c_16 = ATgetArgument(t, 0);
              {
                ATerm h_28 = ATgetArgument(t, 1);
              }
              {
                ATerm i_28 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(g_28);
          t = c_16;
        }
      else
        {
          t = f_28;
          if(match_cons(t, sym_SDefT_4))
            {
              c_16 = ATgetArgument(t, 0);
              {
                ATerm j_28 = ATgetArgument(t, 1);
              }
              {
                ATerm k_28 = ATgetArgument(t, 2);
              }
              {
                ATerm l_28 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = c_16;
        }
      return(t);
    }
    t = map_1_0(l_5, t);
  }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              {
                ATerm q_28 = t;
                int r_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_17 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        n_17 = ATgetArgument(t, 0);
                        {
                          ATerm s_28 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, n_17);
                    ;
                    LocalPopChoice(r_28);
                  }
                else
                  {
                    t = q_28;
                    {
                      ATerm t_28 = t;
                      int u_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(u_28);
                        }
                      else
                        {
                          t = t_28;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4_0(SVar_1_0, o_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm rename_4_0 (ATerm c_132 (ATerm (ATerm), ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_132 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_18, (ATerm) ATempty);
  {
    ATerm x_18 (ATerm t)
    {
      ATerm p_5 (ATerm t)
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(c_132, t);
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            t = RnBinding_2_0(d_132, f_132, t);
            t = DistBinding_2_0(x_18, e_132, t);
          }
        return(t);
      }
      t = env_alltd_1_0(p_5, t);
      return(t);
    }
    t = x_18(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, q_5, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm ListBuild_0_0 (ATerm t)
{
  ATerm y_18 = NULL,a_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_18;
  {
    ATerm r_5 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm b_29 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm c_29 = ATgetArgument(t, 1);
            if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
              {
                ATerm d_29 = ATgetFirst((ATermList) c_29);
                if(match_cons(d_29, sym_Var_1))
                  {
                    ATerm f_29 = ATgetArgument(d_29, 0);
                    if(match_cons(f_29, sym_ListVar_1))
                      {
                        a_19 = ATgetArgument(f_29, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm e_29 = (ATerm) ATgetNext((ATermList) c_29);
                  if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
                    {
                      ATerm g_29 = ATgetFirst((ATermList) e_29);
                      if(match_cons(g_29, sym_Op_2))
                        {
                          ATerm i_29 = ATgetArgument(g_29, 0);
                          if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm j_29 = ATgetArgument(g_29, 1);
                            if(((ATgetType(j_29) != AT_LIST) || !(ATisEmpty(j_29))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm h_29 = (ATerm) ATgetNext((ATermList) e_29);
                        if(((ATgetType(h_29) != AT_LIST) || !(ATisEmpty(h_29))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, a_19);
      return(t);
    }
    t = oncetd_1_0(r_5, t);
    d_19 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, d_19);
  }
  return(t);
}
ATerm ListMatch_0_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      e_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_19;
  {
    ATerm s_5 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm k_29 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm l_29 = ATgetArgument(t, 1);
            if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
              {
                ATerm m_29 = ATgetFirst((ATermList) l_29);
                if(match_cons(m_29, sym_Var_1))
                  {
                    ATerm o_29 = ATgetArgument(m_29, 0);
                    if(match_cons(o_29, sym_ListVar_1))
                      {
                        f_19 = ATgetArgument(o_29, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm n_29 = (ATerm) ATgetNext((ATermList) l_29);
                  if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
                    {
                      ATerm p_29 = ATgetFirst((ATermList) n_29);
                      if(match_cons(p_29, sym_Op_2))
                        {
                          ATerm r_29 = ATgetArgument(p_29, 0);
                          if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm s_29 = ATgetArgument(p_29, 1);
                            if(((ATgetType(s_29) != AT_LIST) || !(ATisEmpty(s_29))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm q_29 = (ATerm) ATgetNext((ATermList) n_29);
                        if(((ATgetType(q_29) != AT_LIST) || !(ATisEmpty(q_29))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, f_19);
      return(t);
    }
    t = oncetd_1_0(s_5, t);
    g_19 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, g_19);
  }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm t_29 = t;
  if((PushChoice() == 0))
    {
      ATerm y_5 (ATerm t)
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(y_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_29;
    }
  return(t);
}
ATerm Con_3_0 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,o_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,x_19 = NULL;
  x_19 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
      r_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_19);
  j_19 = t;
  t = k_19;
  t = p_93(t);
  s_19 = t;
  t = o_19;
  t = q_93(t);
  t_19 = t;
  t = r_19;
  t = r_93(t);
  u_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, s_19, t_19, u_19), j_19);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm w_29 = t;
  if((PushChoice() == 0))
    {
      ATerm b_6 (ATerm t)
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(b_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_29;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL,k_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_20;
  if(match_cons(t, sym_StratRule_3))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
      p_20 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_20), (ATerm) ATmakeAppl(sym_Where_1, p_20)), j_20));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_20 = ATgetArgument(t, 0);
          k_20 = ATgetArgument(t, 1);
          p_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_20;
      t = pureterm_0_0(t);
      t = k_20;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_20)), (ATerm) ATmakeAppl(sym_Where_1, p_20)), (ATerm) ATmakeAppl(sym_Match_1, j_20)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL,e_21 = NULL,j_21 = NULL,u_21 = NULL,x_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm z_29 = ATgetArgument(t, 0);
      if(match_cons(z_29, sym_Rule_3))
        {
          a_21 = ATgetArgument(z_29, 0);
          c_21 = ATgetArgument(z_29, 1);
          e_21 = ATgetArgument(z_29, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  j_21 = t;
  t = a_21;
  {
    ATerm e_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm a_30 = ATgetArgument(t, 0);
          if(match_cons(a_30, sym_Var_1))
            {
              x_21 = ATgetArgument(a_30, 0);
            }
          else
            _fail(t);
          u_21 = ATgetArgument(t, 1);
          {
            ATerm b_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, x_21);
      return(t);
    }
    t = oncetd_1_0(e_6, t);
    a_22 = t;
    t = c_21;
    {
      ATerm f_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm c_30 = ATgetArgument(t, 0);
            if(match_cons(c_30, sym_Var_1))
              {
                x_21 = ATgetArgument(c_30, 0);
              }
            else
              _fail(t);
            b_22 = ATgetArgument(t, 1);
            {
              ATerm d_30 = ATgetArgument(t, 2);
              if(match_cons(d_30, sym_CallT_3))
                {
                  c_22 = ATgetArgument(d_30, 0);
                  {
                    ATerm e_30 = ATgetArgument(d_30, 1);
                    if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
                      _fail(t);
                  }
                  {
                    ATerm f_30 = ATgetArgument(d_30, 2);
                    if(((ATgetType(f_30) != AT_LIST) || !(ATisEmpty(f_30))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_21);
        return(t);
      }
      t = oncetd_1_0(f_6, t);
      e_22 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_21), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, a_22, e_22, (ATerm) ATmakeAppl(sym_Seq_2, e_21, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(c_22), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_21), not_null(b_22), term_i_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_21)), (ATerm) ATmakeAppl(sym_Var_1, j_21))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(g_6, t);
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_22;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm m_6 (ATerm t)
      {
        ATerm w_22 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            w_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_22;
        return(t);
      }
      t = try_1_0(m_6, t);
      return(t);
    }
    t = map_1_0(i_6, t);
    v_22 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, v_22, q_22);
  }
  return(t);
}
ATerm DesugarListMatching_0_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm p_6 (ATerm t)
    {
      ATerm k_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          ;
          LocalPopChoice(l_30);
        }
      else
        {
          t = k_30;
          t = desugarRule_0_0(t);
        }
      return(t);
    }
    t = try_1_0(p_6, t);
    {
      ATerm q_6 (ATerm t)
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_30 = t;
            int p_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0_0(t);
                ;
                LocalPopChoice(p_30);
              }
            else
              {
                t = o_30;
                {
                  ATerm q_30 = t;
                  int r_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0_0(t);
                      ;
                      LocalPopChoice(r_30);
                    }
                  else
                    {
                      t = q_30;
                      t = ListBuild_0_0(t);
                    }
                }
              }
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm g_23 = NULL,l_23 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  g_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_23;
              if(match_cons(t, sym_ListVar_1))
                {
                  l_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
            }
          }
        return(t);
      }
      t = repeat_1_0(q_6, t);
    }
    return(t);
  }
  t = topdown_1_0(n_6, t);
  return(t);
}
ATerm expand_calls_0_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm s_6 (ATerm t)
    {
      ATerm o_23 = NULL,q_23 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          o_23 = ATgetArgument(t, 0);
          q_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_CallT_3, o_23, q_23, (ATerm) ATempty);
      return(t);
    }
    t = try_1_0(s_6, t);
    return(t);
  }
  t = topdown_1_0(r_6, t);
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm a_24 = NULL,c_24 = NULL,e_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      c_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
      k_24 = ATgetArgument(t, 2);
      a_24 = ATgetArgument(t, 3);
      {
        ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
        t = k_24;
        t = declared_vars_0_0(t);
        e_25 = t;
        t = a_24;
        t = tvars_0_0(t);
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_25, e_25);
        t = diff_0_0(t);
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, c_24, e_24, k_24, (ATerm) ATmakeAppl(sym_Scope_2, g_25, a_24));
      }
    }
  else
    {
      ATerm y_25 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          c_24 = ATgetArgument(t, 0);
          e_24 = ATgetArgument(t, 1);
          k_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_24;
      t = tvars_0_0(t);
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_24, e_24, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, y_25, k_24));
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm a_26 = NULL,d_26 = NULL,e_26 = NULL,j_26 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
      j_26 = ATgetArgument(t, 2);
      a_26 = ATgetArgument(t, 3);
      {
        ATerm q_26 = NULL,r_26 = NULL,w_26 = NULL;
        t = j_26;
        t = declared_vars_0_0(t);
        q_26 = t;
        t = a_26;
        t = tvars_0_0(t);
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_26, q_26);
        t = diff_0_0(t);
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_26, e_26, j_26, (ATerm) ATmakeAppl(sym_Scope_2, w_26, (ATerm) ATmakeAppl(sym_SRule_1, a_26)));
      }
    }
  else
    {
      ATerm c_27 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          d_26 = ATgetArgument(t, 0);
          e_26 = ATgetArgument(t, 1);
          j_26 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_26;
      t = tvars_0_0(t);
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_26, e_26, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, c_27, (ATerm) ATmakeAppl(sym_SRule_1, j_26)));
    }
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm c_28 (ATerm k_27, ATerm t)
  {
    t = k_27;
    {
      ATerm t_6 (ATerm t)
      {
        t = term_s_30;
        return(t);
      }
      t = rewrite_1_0(t_6, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm t_30 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_30) != ATmakeSymbol("s_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = term_u_30;
    }
    return(t);
  }
  ATerm d_28 (ATerm q_27, ATerm t)
  {
    t = q_27;
    {
      ATerm u_6 (ATerm t)
      {
        t = term_s_30;
        return(t);
      }
      t = rewrite_1_0(u_6, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm v_30 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) v_30) != ATmakeSymbol("p_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = term_u_30;
    }
    return(t);
  }
  ATerm s_27 = NULL,b_28 = NULL;
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_28;
  if(match_int(t, 0))
    {
      ATerm x_30 = t;
      int y_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_28(s_27, t);
          ;
          LocalPopChoice(y_30);
        }
      else
        {
          t = x_30;
          t = d_28(s_27, t);
        }
    }
  else
    {
      t = c_28(s_27, t);
    }
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  p_31 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_31;
  if(match_cons(t, sym_FunType_2))
    {
      s_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
      {
        ATerm t_5 = NULL,v_5 = NULL,z_5 = NULL,a_6 = NULL;
        t = s_31;
        t = length_0_0(t);
        t_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_31, t_5);
        {
          ATerm z_30 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_30;
            }
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_31, t_5), term_b_31);
          {
            ATerm v_6 (ATerm t)
            {
              t = term_s_30;
              return(t);
            }
            t = assert_1_0(v_6, t);
            t = s_31;
            {
              ATerm w_6 (ATerm t)
              {
                ATerm c_6 = NULL;
                t = new_0_0(t);
                c_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, c_6, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_31), term_e_31)), c_6);
                return(t);
              }
              t = unzip_1_0(w_6, t);
              if(match_cons(t, sym__2))
                {
                  v_5 = ATgetArgument(t, 0);
                  z_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_5;
              {
                ATerm x_6 (ATerm t)
                {
                  ATerm d_6 = NULL;
                  d_6 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_6), (ATerm)ATempty, (ATerm) ATempty);
                  return(t);
                }
                t = map_1_0(x_6, t);
                a_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_31, v_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, q_31, a_6));
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
          ATerm f_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, q_31, term_g_31);
      {
        ATerm h_31 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_31;
          }
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_31, term_g_31), term_j_31);
        {
          ATerm y_6 (ATerm t)
          {
            t = term_s_30;
            return(t);
          }
          t = assert_1_0(y_6, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, q_31, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, q_31, (ATerm) ATempty));
        }
      }
    }
  return(t);
}
ATerm MkCongDefs_0_0 (ATerm t)
{
  ATerm v_31 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      v_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_31;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm congdefs_0_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    t = term_s_30;
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = filter_1_0(MkCongDefs_0_0, t);
    t = concat_0_0(t);
    return(t);
  }
  t = scope_2_0(z_6, a_7, t);
  return(t);
}
ATerm RulesToSdefs_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
        {
          ATerm l_31 = ATgetFirst((ATermList) k_31);
          if(match_cons(l_31, sym_Signature_1))
            {
              w_31 = ATgetArgument(l_31, 0);
            }
          else
            _fail(t);
          {
            ATerm m_31 = (ATerm) ATgetNext((ATermList) k_31);
            if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
              {
                ATerm n_31 = ATgetFirst((ATermList) m_31);
                if(match_cons(n_31, sym_Strategies_1))
                  {
                    x_31 = ATgetArgument(n_31, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm t_31 = (ATerm) ATgetNext((ATermList) m_31);
                  if(((ATgetType(t_31) != AT_LIST) || !(ATisEmpty(t_31))))
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
  t = w_31;
  t = congdefs_0_0(t);
  y_31 = t;
  t = (ATerm) ATinsert(CheckATermList(x_31), (ATerm) ATmakeAppl(sym_RDefT_4, term_u_31, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_u_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_31), term_e_31))), (ATerm) ATmakeAppl(sym_VarDec_2, term_t_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_31), term_e_31))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_z_32, term_e_33, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_r_33), term_h_33)))));
  {
    ATerm b_7 (ATerm t)
    {
      ATerm s_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RDtoSD_0_0(t);
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = s_33;
          t = DeclareVariables_0_0(t);
        }
      t = expand_calls_0_0(t);
      return(t);
    }
    t = map_1_0(b_7, t);
    z_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
    t = conc_0_0(t);
    a_32 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_32)), (ATerm) ATmakeAppl(sym_Signature_1, w_31)));
  }
  return(t);
}
ATerm TupleDeclarations_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = (ATerm) ATempty;
  {
    ATerm c_7 (ATerm t)
    {
      t = term_w_33;
      return(t);
    }
    t = rewrite_1_0(c_7, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm x_33 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("a_2", 0, ATtrue)))
          _fail(t);
        b_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_32;
  }
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_33;
  {
    ATerm d_7 (ATerm t)
    {
      t = term_z_33;
      return(t);
    }
    t = rewrite_1_0(d_7, t);
    if(match_cons(t, sym_Defined_3))
      {
        ATerm c_34 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) c_34) != ATmakeSymbol("d_2", 0, ATtrue)))
          _fail(t);
        e_32 = ATgetArgument(t, 1);
        f_32 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = d_32;
    t = length_0_0(t);
    h_32 = t;
    t = SSL_int_to_string(h_32);
    g_32 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue))), g_32), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), c_32), (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue))), f_32), (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue))), e_32), (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym_Op_2, c_32, d_32);
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm i_32 = NULL,j_32 = NULL;
    if(match_cons(t, sym__2))
      {
        i_32 = ATgetArgument(t, 0);
        j_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_32, j_32, (ATerm) ATempty);
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    ATerm k_32 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm d_34 = ATgetArgument(t, 0);
        if(((ATgetType(d_34) != AT_INT) || (ATgetInt((ATermInt) d_34) != 0)))
          _fail(t);
        {
          ATerm f_34 = ATgetArgument(t, 1);
        }
        k_32 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = k_32;
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
    if(match_cons(t, sym__3))
      {
        l_32 = ATgetArgument(t, 0);
        m_32 = ATgetArgument(t, 1);
        n_32 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, l_32, term_j_34);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, l_32, term_j_34);
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(l_32, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
          t = SSL_subtr(l_32, (ATerm) ATmakeInt(1));
        }
      o_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, o_32, m_32, (ATerm) ATinsert(CheckATermList(n_32), m_32));
    }
    return(t);
  }
  t = for_3_0(e_7, f_7, g_7, t);
  return(t);
}
ATerm CheckTuple_0_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_32;
  t = length_0_0(t);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_32, term_u_34);
  t = copy_0_0(t);
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, r_32, term_u_34));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm w_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = TupleDeclarations_0_0(t);
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = w_34;
        t = (ATerm) ATempty;
      }
    s_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_34, (ATerm) ATinsert(CheckATermList(s_32), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, r_32, term_u_34)))));
    {
      ATerm h_7 (ATerm t)
      {
        t = term_w_33;
        return(t);
      }
      t = assert_1_0(h_7, t);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_23, p_32);
    }
  }
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL;
        t = k_33;
        t = length_0_0(t);
        l_7 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, j_33, (ATerm) ATmakeAppl(sym_Keys_1, l_7));
        {
          ATerm i_7 (ATerm t)
          {
            t = term_c_35;
            return(t);
          }
          t = rewrite_1_0(i_7, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_35) != ATmakeSymbol("x_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, j_33, (ATerm) ATempty);
        }
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        {
          ATerm f_8 = NULL;
          t = k_33;
          t = length_0_0(t);
          f_8 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, j_33, (ATerm) ATmakeAppl(sym_Keys_1, f_8));
          {
            ATerm j_7 (ATerm t)
            {
              t = term_c_35;
              return(t);
            }
            t = rewrite_1_0(j_7, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm e_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("u_1", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Op_2, j_33, (ATerm) ATempty);
          }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm n_33 (ATerm t)
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_109(t);
        {
          ATerm k_7 (ATerm t)
          {
            t = try_1_0(n_33, t);
            return(t);
          }
          t = SRTS_all(k_7, t);
        }
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        t = SRTS_some(n_33, t);
      }
    return(t);
  }
  t = n_33(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  ATerm m_7 (ATerm t)
  {
    t = term_z_33;
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    ATerm q_33 = NULL;
    q_33 = t;
    t = r_135(t);
    p_33 = t;
    t = s_135(t);
    o_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_33, (ATerm) ATmakeAppl(sym_Defined_3, term_n_35, o_33, p_33));
    {
      ATerm s_7 (ATerm t)
      {
        t = term_z_33;
        return(t);
      }
      t = assert_1_0(s_7, t);
      t = q_33;
      {
        ATerm t_7 (ATerm t)
        {
          ATerm o_35 = t;
          if((PushChoice() == 0))
            {
              ATerm p_35 = t;
              int q_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0_0(t);
                  ;
                  LocalPopChoice(q_35);
                }
              else
                {
                  t = p_35;
                  t = CheckTuple_0_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_35;
            }
          t = CheckConsError_0_0(t);
          return(t);
        }
        t = manytd_1_0(t_7, t);
      }
    }
    return(t);
  }
  t = scope_2_0(m_7, p_7, t);
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm t_33 = NULL,v_33 = NULL;
  ATerm r_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm w_35 = ATgetArgument(t, 1);
          }
          v_33 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(t_35);
      t = v_33;
      {
        ATerm w_7 (ATerm t)
        {
          t = t_33;
          return(t);
        }
        ATerm x_7 (ATerm t)
        {
          t = term_x_35;
          return(t);
        }
        t = check_constructors_p__2_0(w_7, x_7, t);
      }
    }
  else
    {
      t = r_35;
      if(match_cons(t, sym_RDef_3))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm y_35 = ATgetArgument(t, 1);
          }
          v_33 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_33;
      {
        ATerm z_7 (ATerm t)
        {
          t = t_33;
          return(t);
        }
        ATerm b_8 (ATerm t)
        {
          t = term_z_35;
          return(t);
        }
        t = check_constructors_p__2_0(z_7, b_8, t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    t = term_g_31;
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    ATerm a_34 = NULL,b_34 = NULL;
    if(match_cons(t, sym__2))
      {
        a_34 = ATgetArgument(t, 0);
        b_34 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm b_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(a_34, b_34);
          ;
          LocalPopChoice(e_36);
        }
      else
        {
          t = b_36;
          t = SSL_addr(a_34, b_34);
        }
    }
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    t = term_j_34;
    return(t);
  }
  t = foldr_3_0(c_8, d_8, h_8, t);
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm e_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_34;
  if(match_cons(t, sym_FunType_2))
    {
      i_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
      {
        ATerm m_34 = NULL;
        t = i_34;
        t = length_0_0(t);
        m_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, g_34, (ATerm) ATmakeAppl(sym_Keys_1, m_34)), term_g_36);
        {
          ATerm i_8 (ATerm t)
          {
            t = term_c_35;
            return(t);
          }
          t = assert_1_0(i_8, t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, g_34, (ATerm) ATmakeAppl(sym_FunType_2, i_34, e_34));
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          i_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, g_34, term_l_36), term_o_36);
      {
        ATerm n_8 (ATerm t)
        {
          t = term_c_35;
          return(t);
        }
        t = assert_1_0(n_8, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, g_34, (ATerm) ATmakeAppl(sym_ConstType_1, i_34));
      }
    }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm p_36 = ATgetArgument(t, 0);
      if(((ATgetType(p_36) == AT_LIST) && !(ATisEmpty(p_36))))
        {
          ATerm q_36 = ATgetFirst((ATermList) p_36);
          if(match_cons(q_36, sym_Signature_1))
            {
              ATerm s_36 = ATgetArgument(q_36, 0);
              if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
                {
                  ATerm t_36 = ATgetFirst((ATermList) s_36);
                  if(match_cons(t_36, sym_Constructors_1))
                    {
                      p_34 = ATgetArgument(t_36, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_36 = (ATerm) ATgetNext((ATermList) s_36);
                    if(((ATgetType(u_36) != AT_LIST) || !(ATisEmpty(u_36))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm r_36 = (ATerm) ATgetNext((ATermList) p_36);
            if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
              {
                ATerm v_36 = ATgetFirst((ATermList) r_36);
                if(match_cons(v_36, sym_Strategies_1))
                  {
                    q_34 = ATgetArgument(v_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm w_36 = (ATerm) ATgetNext((ATermList) r_36);
                  if(((ATgetType(w_36) != AT_LIST) || !(ATisEmpty(w_36))))
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_34), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_34), term_u_34))), term_y_36);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = q_34;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = TupleDeclarations_0_0(t);
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = (ATerm) ATempty;
      }
    r_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_34), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_u_34), term_u_34), term_u_34))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_34), term_u_34))), term_y_36));
    t = conc_0_0(t);
    s_34 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, q_34)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, s_34)))));
  }
  return(t);
}
ATerm exp_overlays2_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    ATerm t_34 = NULL;
    t_34 = t;
    {
      ATerm b_37 = t;
      if((PushChoice() == 0))
        {
          t = h_134(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_37;
        }
      t = t_34;
      {
        ATerm p_8 (ATerm t)
        {
          ATerm q_8 (ATerm t)
          {
            t = ExpOverlay_1_0(h_134, t);
            return(t);
          }
          t = try_1_0(q_8, t);
          return(t);
        }
        t = topdown_1_0(p_8, t);
      }
    }
    return(t);
  }
  t = try_1_0(o_8, t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm v_34 = NULL,x_34 = NULL;
  ATerm c_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm n_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(k_37);
      t = term_i_25;
    }
  else
    {
      t = c_37;
      if(match_cons(t, sym_Real_1))
        {
          x_34 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, x_34));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              x_34 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, x_34));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  x_34 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, x_34));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      x_34 = ATgetArgument(t, 0);
                      v_34 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_37, (ATerm)ATinsert(ATinsert(ATempty, v_34), x_34), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          x_34 = ATgetArgument(t, 0);
                          v_34 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_34), v_34, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              x_34 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_34), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm r_8 (ATerm t)
  {
    ATerm s_8 (ATerm t)
    {
      t = map_1_0(trm_to_cong_0_0, t);
      return(t);
    }
    t = Op_2_0(_id, s_8, t);
    return(t);
  }
  t = try_1_0(r_8, t);
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0_0 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      h_35 = ATgetArgument(t, 0);
      i_35 = ATgetArgument(t, 1);
      j_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_35;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm m_35 = NULL;
      m_35 = t;
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_31), term_e_31));
      return(t);
    }
    t = map_1_0(u_8, t);
    k_35 = t;
    t = j_35;
    t = trm_to_cong_0_0(t);
    l_35 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, h_35, k_35, l_35);
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm c_135 (ATerm), ATerm t)
{
  ATerm p_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(c_135, _id, t);
      ;
      LocalPopChoice(s_37);
    }
  else
    {
      t = p_37;
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_8 (ATerm t)
            {
              t = split_2_0(_id, c_135, t);
              {
                ATerm y_8 (ATerm t)
                {
                  ATerm s_35 = NULL,u_35 = NULL,v_35 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      s_35 = ATgetArgument(t, 0);
                      v_35 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_35;
                  {
                    ATerm v_37 = t;
                    int a_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm b_38 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_38);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_35);
                      }
                    else
                      {
                        t = v_37;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm c_38 = ATgetArgument(t, 0);
                            u_35 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_35, u_35);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(y_8, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, v_8, _id, t);
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
            {
              ATerm z_8 (ATerm t)
              {
                t = split_2_0(_id, c_135, t);
                {
                  ATerm c_9 (ATerm t)
                  {
                    ATerm a_36 = NULL,c_36 = NULL,d_36 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        a_36 = ATgetArgument(t, 0);
                        d_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_36;
                    {
                      ATerm d_38 = t;
                      int e_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm f_38 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(e_38);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_36);
                        }
                      else
                        {
                          t = d_38;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm g_38 = ATgetArgument(t, 0);
                              c_36 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, d_36, c_36);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(c_9, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, z_8, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  if(match_cons(t, sym__3))
    {
      j_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      h_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_36;
  {
    ATerm d_9 (ATerm t)
    {
      ATerm k_36 = NULL;
      k_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_36, h_36);
      t = n_132(t);
      return(t);
    }
    ATerm g_9 (ATerm t)
    {
      ATerm n_36 = NULL;
      n_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_36, i_36);
      t = n_132(t);
      return(t);
    }
    t = o_132(d_9, g_9, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm h_132 (ATerm), ATerm i_132 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_37;
  t = h_132(t);
  f_37 = t;
  t = map_1_0(new_0_0, t);
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_37, g_37);
  t = zip_1_0(_id, t);
  h_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_37, e_37);
  t = conc_0_0(t);
  i_37 = t;
  t = d_37;
  {
    ATerm h_9 (ATerm t)
    {
      t = g_37;
      return(t);
    }
    t = i_132(h_9, t);
    j_37 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_37, e_37, i_37);
  }
  return(t);
}
ATerm SubsVar_2_0 (ATerm a_132 (ATerm), ATerm b_132 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  t = a_132(t);
  l_37 = t;
  t = b_132(t);
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_37, m_37);
  t = lookup_0_0(t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  if(match_cons(t, sym__2))
    {
      w_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_37 = ATgetFirst((ATermList) t);
      z_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_37;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_37;
            if((w_37 != t))
              {
                _fail(t);
              }
            t = r_37;
            ;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            t = (ATerm) ATmakeAppl(sym__2, w_37, z_37);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, w_37, z_37);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm s_132 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_38;
  {
    ATerm j_9 (ATerm t)
    {
      ATerm k_9 (ATerm t)
      {
        t = h_38;
        return(t);
      }
      t = split_2_0(_id, k_9, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = s_132(j_9, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  if(match_cons(t, sym__2))
    {
      k_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_38;
  {
    ATerm m_9 (ATerm t)
    {
      ATerm l_38 = NULL;
      l_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_38, j_38);
      t = d_112(t);
      return(t);
    }
    t = SRTS_all(m_9, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm m_38 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_111(t);
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = all_dist_1_0(m_38, t);
      }
    return(t);
  }
  t = m_38(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  t_38 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_38 = ATgetArgument(t, 0);
            ATerm y_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(s_38);
        t = t_38;
      }
    else
      {
        t = r_38;
        {
          ATerm a_39 = NULL;
          if(match_cons(t, sym__3))
            {
              u_38 = ATgetArgument(t, 0);
              v_38 = ATgetArgument(t, 1);
              w_38 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_38, v_38);
          t = zip_1_0(_id, t);
          a_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_39, w_38);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm (ATerm), ATerm), ATerm q_131 (ATerm), ATerm r_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_131 (ATerm (ATerm), ATerm), ATerm t_131 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_39, (ATerm) ATempty);
  {
    ATerm d_39 (ATerm t)
    {
      ATerm o_9 (ATerm t)
      {
        ATerm z_38 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(p_131, t);
            ;
            LocalPopChoice(h_39);
          }
        else
          {
            t = z_38;
            {
              ATerm i_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_8 = NULL,m_8 = NULL;
                  k_8 = t;
                  t = SSL_explode_term(k_8);
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_40 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) a_40) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm b_40 = ATgetArgument(t, 1);
                        if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
                          {
                            m_8 = ATgetFirst((ATermList) b_40);
                            {
                              ATerm g_40 = (ATerm) ATgetNext((ATermList) b_40);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = m_8;
                  {
                    ATerm p_9 (ATerm t)
                    {
                      t = c_39;
                      return(t);
                    }
                    t = SubsVar_2_0(o_131, p_9, t);
                    t = t_131(t);
                  }
                  ;
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = i_39;
                  t = RnBinding_2_0(q_131, s_131, t);
                  t = DistBinding_2_0(d_39, r_131, t);
                }
            }
          }
        return(t);
      }
      t = env_alltd_1_0(o_9, t);
      return(t);
    }
    t = d_39(t);
  }
  return(t);
}
ATerm substitute_5_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm (ATerm), ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_131 (ATerm (ATerm), ATerm), ATerm t)
{
  t = substitute_6_0(v_131, w_131, x_131, y_131, z_131, _id, t);
  return(t);
}
ATerm tsubstitute_0_0 (ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm e_39 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        e_39 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_39;
    return(t);
  }
  ATerm s_9 (ATerm t)
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(o_40);
      }
    else
      {
        t = n_40;
        {
          ATerm p_40 = t;
          int q_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(q_40);
            }
          else
            {
              t = p_40;
              {
                ATerm r_40 = t;
                int s_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(s_40);
                  }
                else
                  {
                    t = r_40;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = substitute_5_0(q_9, Var_1_0, s_9, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm ExpOverlay_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,j_39 = NULL,k_39 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_134(t);
  {
    ATerm w_9 (ATerm t)
    {
      ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
      l_39 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((f_39 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          m_39 = ATgetArgument(t, 1);
          n_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, m_39, g_39);
      t = zip_1_0(_id, t);
      j_39 = t;
      t = n_39;
      k_39 = t;
      t = l_39;
      return(t);
    }
    t = fetch_1_0(w_9, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), not_null(k_39));
    t = tsubstitute_0_0(t);
  }
  return(t);
}
ATerm exp_overlays1_1_0 (ATerm g_134 (ATerm), ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    ATerm o_39 = NULL;
    o_39 = t;
    {
      ATerm t_40 = t;
      if((PushChoice() == 0))
        {
          t = g_134(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_40;
        }
      t = o_39;
      {
        ATerm z_9 (ATerm t)
        {
          ATerm a_10 (ATerm t)
          {
            t = ExpOverlay_1_0(g_134, t);
            return(t);
          }
          t = repeat_1_0(a_10, t);
          return(t);
        }
        t = topdown_1_0(z_9, t);
      }
    }
    return(t);
  }
  t = try_1_0(x_9, t);
  return(t);
}
ATerm ExpandOverlays_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm u_40 = ATgetArgument(t, 0);
      if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
        {
          ATerm v_40 = ATgetFirst((ATermList) u_40);
          if(match_cons(v_40, sym_Signature_1))
            {
              p_39 = ATgetArgument(v_40, 0);
            }
          else
            _fail(t);
          {
            ATerm w_40 = (ATerm) ATgetNext((ATermList) u_40);
            if(((ATgetType(w_40) == AT_LIST) && !(ATisEmpty(w_40))))
              {
                ATerm x_40 = ATgetFirst((ATermList) w_40);
                if(match_cons(x_40, sym_Overlays_1))
                  {
                    q_39 = ATgetArgument(x_40, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm y_40 = (ATerm) ATgetNext((ATermList) w_40);
                  if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
                    {
                      ATerm z_40 = ATgetFirst((ATermList) y_40);
                      if(match_cons(z_40, sym_Strategies_1))
                        {
                          r_39 = ATgetArgument(z_40, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm a_41 = (ATerm) ATgetNext((ATermList) y_40);
                        if(((ATgetType(a_41) != AT_LIST) || !(ATisEmpty(a_41))))
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
  t = q_39;
  {
    ATerm b_10 (ATerm t)
    {
      t = q_39;
      return(t);
    }
    t = exp_overlays1_1_0(b_10, t);
    s_39 = t;
    t = q_39;
    t = map_1_0(Overlay_to_Congdef_0_0, t);
    t_39 = t;
    t = r_39;
    {
      ATerm c_10 (ATerm t)
      {
        t = s_39;
        return(t);
      }
      t = exp_overlays2_1_0(c_10, t);
      u_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_39, u_39);
      t = conc_0_0(t);
      v_39 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, v_39)), (ATerm) ATmakeAppl(sym_Signature_1, p_39)));
    }
  }
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
      y_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_41, w_39));
  {
    ATerm d_10 (ATerm t)
    {
      t = term_c_41;
      return(t);
    }
    t = assert_1_0(d_10, t);
    t = x_39;
    t = DefineBound_0_0(t);
    t = y_39;
    t = use_vars_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Overlay_3, w_39, x_39, y_39);
  }
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
      j_40 = ATgetArgument(t, 2);
      c_40 = ATgetArgument(t, 3);
      t = c_40;
      if(match_cons(t, sym_StratRule_3))
        {
          d_40 = ATgetArgument(t, 0);
          e_40 = ATgetArgument(t, 1);
          f_40 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_41, h_40));
          {
            ATerm e_10 (ATerm t)
            {
              t = term_c_41;
              return(t);
            }
            t = assert_1_0(e_10, t);
            t = j_40;
            t = declared_vars_0_0(t);
            t = DefineBound_0_0(t);
            t = d_40;
            t = unbound_vars_0_0(t);
            t = e_40;
            t = unbound_vars_0_0(t);
            t = f_40;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, h_40, i_40, j_40, (ATerm) ATmakeAppl(sym_StratRule_3, d_40, e_40, f_40));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              d_40 = ATgetArgument(t, 0);
              e_40 = ATgetArgument(t, 1);
              f_40 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_41, h_40));
          {
            ATerm f_10 (ATerm t)
            {
              t = term_c_41;
              return(t);
            }
            t = assert_1_0(f_10, t);
            t = j_40;
            t = declared_vars_0_0(t);
            t = DefineBound_0_0(t);
            t = d_40;
            t = bind_vars_0_0(t);
            t = f_40;
            t = unbound_vars_0_0(t);
            t = e_40;
            t = use_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, h_40, i_40, j_40, (ATerm) ATmakeAppl(sym_Rule_3, d_40, e_40, f_40));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          h_40 = ATgetArgument(t, 0);
          i_40 = ATgetArgument(t, 1);
          j_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_40;
      if(match_cons(t, sym_Rule_3))
        {
          k_40 = ATgetArgument(t, 0);
          l_40 = ATgetArgument(t, 1);
          m_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_41, h_40));
      {
        ATerm g_10 (ATerm t)
        {
          t = term_c_41;
          return(t);
        }
        t = assert_1_0(g_10, t);
        t = k_40;
        t = bind_vars_0_0(t);
        t = m_40;
        t = unbound_vars_0_0(t);
        t = l_40;
        t = use_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_RDef_3, h_40, i_40, (ATerm) ATmakeAppl(sym_Rule_3, k_40, l_40, m_40));
      }
    }
  return(t);
}
ATerm guardedlchoice_1_0 (ATerm q_135 (ATerm), ATerm t)
{
  ATerm h_10 (ATerm t)
  {
    t = GuardedLChoice_3_0(q_135, q_135, _id, t);
    return(t);
  }
  ATerm i_10 (ATerm t)
  {
    t = GuardedLChoice_3_0(_id, _id, q_135, t);
    return(t);
  }
  t = abstract_choice_2_0(h_10, i_10, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  l_41 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
      h_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  e_41 = t;
  t = f_41;
  t = t_96(t);
  i_41 = t;
  t = g_41;
  t = u_96(t);
  j_41 = t;
  t = h_41;
  t = v_96(t);
  k_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, i_41, j_41, k_41), e_41);
  return(t);
}
ATerm lchoice_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm j_10 (ATerm t)
  {
    t = LChoice_2_0(p_135, _id, t);
    return(t);
  }
  ATerm l_10 (ATerm t)
  {
    t = LChoice_2_0(_id, p_135, t);
    return(t);
  }
  t = abstract_choice_2_0(j_10, l_10, t);
  return(t);
}
ATerm LChoice_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  t_41 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      p_41 = ATgetArgument(t, 0);
      q_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_41);
  o_41 = t;
  t = p_41;
  t = p_96(t);
  r_41 = t;
  t = q_41;
  t = q_96(t);
  s_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, r_41, s_41), o_41);
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    ATerm p_10 (ATerm t)
    {
      ATerm q_42 (ATerm e_42, ATerm f_42, ATerm t)
      {
        t = f_42;
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), e_42);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_41 = ATgetFirst((ATermList) t);
                  if(match_cons(w_41, sym_Defined_1))
                    {
                      ATerm y_41 = ATgetArgument(w_41, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_41 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = f_42;
              ;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              t = (ATerm) ATmakeAppl(sym__2, e_42, (ATerm) ATinsert(ATempty, term_z_41));
            }
        }
        return(t);
      }
      ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
      k_42 = t;
      if(match_cons(t, sym__2))
        {
          l_42 = ATgetArgument(t, 0);
          m_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_42;
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_42 = ATgetFirst((ATermList) t);
                {
                  ATerm c_42 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_42);
            t = n_42;
            {
              ATerm d_42 = t;
              int g_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm h_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_42);
                  t = l_42;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm i_42 = t;
                      int j_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = k_42;
                          ;
                          LocalPopChoice(j_42);
                        }
                      else
                        {
                          t = i_42;
                          t = q_42(l_42, k_42, t);
                        }
                    }
                  else
                    {
                      t = q_42(l_42, k_42, t);
                    }
                }
              else
                {
                  t = d_42;
                  t = l_42;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = k_42;
                }
            }
          }
        else
          {
            t = a_42;
            t = l_42;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = k_42;
          }
      }
      return(t);
    }
    t = try_1_0(p_10, t);
    return(t);
  }
  t = map_1_0(o_10, t);
  t = restore_Bound_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  if(match_cons(t, sym__2))
    {
      t_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_42;
  {
    ATerm q_10 (ATerm t)
    {
      ATerm u_42 = NULL,v_42 = NULL;
      if(match_cons(t, sym__2))
        {
          u_42 = ATgetArgument(t, 0);
          v_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(t_42, u_42, v_42);
      t = (ATerm) ATmakeAppl(sym__3, t_42, u_42, v_42);
      return(t);
    }
    t = map_1_0(q_10, t);
  }
  return(t);
}
ATerm restore_Bound_0_0 (ATerm t)
{
  ATerm w_42 = NULL;
  w_42 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_o_42, w_42);
  t = table_putlist_0_0(t);
  t = w_42;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  t = SSL_table_keys(x_42);
  {
    ATerm r_10 (ATerm t)
    {
      ATerm y_42 = NULL,z_42 = NULL;
      y_42 = t;
      t = SSL_table_get(x_42, y_42);
      z_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_42, z_42);
      return(t);
    }
    t = map_1_0(r_10, t);
  }
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_o_42;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm m_135 (ATerm), ATerm n_135 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  a_43 = t;
  t = save_Bound_0_0(t);
  b_43 = t;
  t = a_43;
  t = m_135(t);
  c_43 = t;
  t = save_Bound_0_0(t);
  d_43 = t;
  t = b_43;
  t = restore_Bound_0_0(t);
  t = c_43;
  t = n_135(t);
  e_43 = t;
  t = d_43;
  t = isect_Bound_0_0(t);
  t = e_43;
  return(t);
}
ATerm choice_1_0 (ATerm o_135 (ATerm), ATerm t)
{
  ATerm s_10 (ATerm t)
  {
    t = Choice_2_0(o_135, _id, t);
    return(t);
  }
  ATerm t_10 (ATerm t)
  {
    t = Choice_2_0(_id, o_135, t);
    return(t);
  }
  t = abstract_choice_2_0(s_10, t_10, t);
  return(t);
}
ATerm Choice_2_0 (ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  k_43 = t;
  if(match_cons(t, sym_Choice_2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  f_43 = t;
  t = g_43;
  t = n_95(t);
  i_43 = t;
  t = h_43;
  t = o_95(t);
  j_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, i_43, j_43), f_43);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  {
    ATerm p_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm u_10 (ATerm t)
          {
            t = term_c_41;
            return(t);
          }
          t = rewrite_1_0(u_10, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm l_43 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_43) != ATmakeSymbol("k_1", 0, ATtrue)))
                _fail(t);
              t_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_44), term_n_43), t_8), term_m_43);
        }
        ;
        LocalPopChoice(r_42);
      }
    else
      {
        t = p_42;
        {
          ATerm o_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm v_10 (ATerm t)
                {
                  t = term_c_41;
                  return(t);
                }
                t = rewrite_1_0(v_10, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm q_43 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_43) != ATmakeSymbol("h_1", 0, ATtrue)))
                      _fail(t);
                    w_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_44), term_n_43), w_8), term_r_43);
              }
              ;
              LocalPopChoice(p_43);
            }
          else
            {
              t = o_43;
              {
                ATerm s_43 = t;
                int t_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_9 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm w_10 (ATerm t)
                      {
                        t = term_c_41;
                        return(t);
                      }
                      t = rewrite_1_0(w_10, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm u_43 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) u_43) != ATmakeSymbol("e_1", 0, ATtrue)))
                            _fail(t);
                          a_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_44), term_n_43), a_9), term_r_43);
                    }
                    ;
                    LocalPopChoice(t_43);
                  }
                else
                  {
                    t = s_43;
                    {
                      ATerm v_43 = t;
                      int w_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_9 = NULL;
                          t = (ATerm) ATempty;
                          {
                            ATerm x_10 (ATerm t)
                            {
                              t = term_c_41;
                              return(t);
                            }
                            t = rewrite_1_0(x_10, t);
                            if(match_cons(t, sym_Defined_2))
                              {
                                ATerm x_43 = ATgetArgument(t, 0);
                                if((ATgetSymbol((ATermAppl) x_43) != ATmakeSymbol("b_1", 0, ATtrue)))
                                  _fail(t);
                                f_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_44), term_n_43), f_9), term_r_43);
                          }
                          ;
                          LocalPopChoice(w_43);
                        }
                      else
                        {
                          t = v_43;
                          {
                            ATerm y_43 = t;
                            int z_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_9 = NULL;
                                t = (ATerm) ATempty;
                                {
                                  ATerm y_10 (ATerm t)
                                  {
                                    t = term_c_41;
                                    return(t);
                                  }
                                  t = rewrite_1_0(y_10, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm a_44 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) a_44) != ATmakeSymbol("y_0", 0, ATtrue)))
                                        _fail(t);
                                      i_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_44), term_n_43), i_9), term_b_44);
                                }
                                ;
                                LocalPopChoice(z_43);
                              }
                            else
                              {
                                t = y_43;
                                {
                                  ATerm l_9 = NULL;
                                  t = (ATerm) ATempty;
                                  {
                                    ATerm z_10 (ATerm t)
                                    {
                                      t = term_c_41;
                                      return(t);
                                    }
                                    t = rewrite_1_0(z_10, t);
                                    if(match_cons(t, sym_Defined_2))
                                      {
                                        ATerm c_44 = ATgetArgument(t, 0);
                                        if((ATgetSymbol((ATermAppl) c_44) != ATmakeSymbol("v_0", 0, ATtrue)))
                                          _fail(t);
                                        l_9 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_44), term_n_43), l_9), term_b_44);
                                  }
                                }
                              }
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
ATerm Unbound_0_0 (ATerm t)
{
  ATerm j_45 = NULL,n_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_44), j_45), term_d_44);
  t = Context_0_0(t);
  n_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), n_9);
  t = n_9;
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  y_45 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_45;
        {
          ATerm b_11 (ATerm t)
          {
            t = term_o_42;
            return(t);
          }
          t = rewrite_1_0(b_11, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm h_44 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_44) != ATmakeSymbol("r_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Var_1, z_45);
        }
        ;
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        {
          ATerm i_44 = t;
          int j_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_45;
              {
                ATerm c_11 (ATerm t)
                {
                  t = term_o_42;
                  return(t);
                }
                t = rewrite_1_0(c_11, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
              ;
              LocalPopChoice(j_44);
            }
          else
            {
              t = i_44;
              t = y_45;
              {
                ATerm d_11 (ATerm t)
                {
                  t = term_o_42;
                  return(t);
                }
                t = rewrite_1_0(d_11, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm k_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_44) != ATmakeSymbol("n_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_45);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(m_44);
      {
        ATerm n_44 = t;
        int o_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(o_44);
          }
        else
          {
            t = n_44;
            t = Unbound_0_0(t);
            _fail(t);
          }
      }
    }
  else
    {
      t = l_44;
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(q_44);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = p_44;
            {
              ATerm r_44 = t;
              int t_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(t_44);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = r_44;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  k_46 = t;
  if(match_cons(t, sym_Rule_3))
    {
      e_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
      g_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_46);
  d_46 = t;
  t = e_46;
  t = g_94(t);
  h_46 = t;
  t = f_46;
  t = h_94(t);
  i_46 = t;
  t = g_46;
  t = i_94(t);
  j_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, h_46, i_46, j_46), d_46);
  return(t);
}
ATerm RootApp_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      q_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_46);
  p_46 = t;
  t = q_46;
  t = f_93(t);
  r_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, r_46), p_46);
  return(t);
}
ATerm App_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
  a_47 = t;
  if(match_cons(t, sym_App_2))
    {
      w_46 = ATgetArgument(t, 0);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_47);
  v_46 = t;
  t = w_46;
  t = d_93(t);
  y_46 = t;
  t = x_46;
  t = e_93(t);
  z_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, y_46, z_46), v_46);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  if(match_cons(t, sym__3))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
      f_47 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(d_47, e_47);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_44 = ATgetFirst((ATermList) t);
      g_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(d_47, e_47, (ATerm) ATinsert(CheckATermList(g_47), f_47));
  t = (ATerm) ATmakeAppl(sym__3, d_47, e_47, f_47);
  return(t);
}
ATerm override_key_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
  if(match_cons(t, sym__2))
    {
      h_47 = ATgetArgument(t, 0);
      i_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_123(t);
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_47, h_47, i_47);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_47, i_47);
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm k_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_47), term_w_44);
  {
    ATerm e_11 (ATerm t)
    {
      t = term_o_42;
      return(t);
    }
    t = override_key_1_0(e_11, t);
    t = (ATerm) ATmakeAppl(sym_Var_1, k_47);
  }
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(y_44);
      t = Binding_0_0(t);
    }
  else
    {
      t = x_44;
      {
        ATerm z_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(a_45);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = z_44;
            {
              ATerm b_45 = t;
              int c_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(c_45);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = b_45;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  o_47 = t;
  if(match_cons(t, sym_Match_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_47);
  l_47 = t;
  t = m_47;
  t = g_96(t);
  n_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, n_47), l_47);
  return(t);
}
ATerm Build_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  u_47 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_47);
  r_47 = t;
  t = s_47;
  t = h_96(t);
  t_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, t_47), r_47);
  return(t);
}
ATerm VarScope_1_0 (ATerm l_135 (ATerm), ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    t = term_o_42;
    return(t);
  }
  ATerm h_11 (ATerm t)
  {
    t = Scope_2_0(DefineUnbound_0_0, l_135, t);
    return(t);
  }
  t = scope_2_0(g_11, h_11, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(e_45);
      t = VarScope_1_0(unbound_vars_0_0, t);
    }
  else
    {
      t = d_45;
      {
        ATerm f_45 = t;
        int g_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(g_45);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = f_45;
            {
              ATerm h_45 = t;
              int i_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(i_45);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = h_45;
                  {
                    ATerm k_45 = t;
                    int l_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(l_45);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = k_45;
                        {
                          ATerm m_45 = t;
                          int n_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(n_45);
                              t = choice_1_0(unbound_vars_0_0, t);
                            }
                          else
                            {
                              t = m_45;
                              {
                                ATerm o_45 = t;
                                int p_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(p_45);
                                    t = lchoice_1_0(unbound_vars_0_0, t);
                                  }
                                else
                                  {
                                    t = o_45;
                                    {
                                      ATerm q_45 = t;
                                      int r_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(r_45);
                                          t = guardedlchoice_1_0(unbound_vars_0_0, t);
                                        }
                                      else
                                        {
                                          t = q_45;
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
ATerm DefineBound_0_0 (ATerm t)
{
  ATerm i_11 (ATerm t)
  {
    ATerm x_47 = NULL;
    x_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_47), term_t_45);
    {
      ATerm j_11 (ATerm t)
      {
        t = term_o_42;
        return(t);
      }
      t = assert_1_0(j_11, t);
      t = x_47;
    }
    return(t);
  }
  t = map_1_0(i_11, t);
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm z_47 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
      d_48 = ATgetArgument(t, 2);
      z_47 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_45, b_48));
      {
        ATerm k_11 (ATerm t)
        {
          t = term_c_41;
          return(t);
        }
        t = assert_1_0(k_11, t);
        t = d_48;
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = z_47;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_48, c_48, d_48, z_47);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_48 = ATgetArgument(t, 0);
          c_48 = ATgetArgument(t, 1);
          d_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_45, b_48));
      {
        ATerm l_11 (ATerm t)
        {
          t = term_c_41;
          return(t);
        }
        t = assert_1_0(l_11, t);
        t = d_48;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDef_3, b_48, c_48, d_48);
      }
    }
  return(t);
}
ATerm DefineUnbound_0_0 (ATerm t)
{
  ATerm m_11 (ATerm t)
  {
    ATerm l_48 = NULL;
    l_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, l_48), term_z_41);
    {
      ATerm n_11 (ATerm t)
      {
        t = term_o_42;
        return(t);
      }
      t = assert_1_0(n_11, t);
      t = l_48;
    }
    return(t);
  }
  t = map_1_0(m_11, t);
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm o_11 (ATerm t)
  {
    t = term_c_41;
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    ATerm r_11 (ATerm t)
    {
      t = term_o_42;
      return(t);
    }
    ATerm t_11 (ATerm t)
    {
      ATerm m_48 = NULL;
      m_48 = t;
      t = tvars_0_0(t);
      t = DefineUnbound_0_0(t);
      t = m_48;
      {
        ATerm w_45 = t;
        int x_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = sdef_ud_0_0(t);
            ;
            LocalPopChoice(x_45);
          }
        else
          {
            t = w_45;
            {
              ATerm a_46 = t;
              int b_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = rdef_ud_0_0(t);
                  ;
                  LocalPopChoice(b_46);
                }
              else
                {
                  t = a_46;
                  t = overlay_ud_0_0(t);
                }
            }
          }
      }
      return(t);
    }
    t = scope_2_0(r_11, t_11, t);
    return(t);
  }
  t = scope_2_0(o_11, q_11, t);
  return(t);
}
ATerm defs_use_def_0_0 (ATerm t)
{
  ATerm c_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_46);
    }
  else
    {
      t = c_46;
      {
        ATerm n_48 = NULL;
        n_48 = t;
        {
          ATerm w_11 (ATerm t)
          {
            ATerm m_46 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_46;
              }
            return(t);
          }
          t = filter_1_0(w_11, t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_48;
        }
      }
    }
  return(t);
}
ATerm Signature_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  s_48 = t;
  if(match_cons(t, sym_Signature_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_48);
  p_48 = t;
  t = q_48;
  t = s_91(t);
  r_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, r_48), p_48);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm x_11 (ATerm t)
  {
    ATerm y_11 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm z_11 (ATerm t)
    {
      ATerm b_12 (ATerm t)
      {
        t = Overlays_1_0(defs_use_def_0_0, t);
        return(t);
      }
      ATerm c_12 (ATerm t)
      {
        ATerm d_12 (ATerm t)
        {
          t = Strategies_1_0(defs_use_def_0_0, t);
          return(t);
        }
        ATerm e_12 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(d_12, e_12, t);
        return(t);
      }
      t = Cons_2_0(b_12, c_12, t);
      return(t);
    }
    t = Cons_2_0(y_11, z_11, t);
    return(t);
  }
  t = Specification_1_0(x_11, t);
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm f_12 (ATerm t)
        {
          ATerm g_12 (ATerm t)
          {
            t = map1_1_0(q_0, t);
            return(t);
          }
          t = try_1_0(g_12, t);
          return(t);
        }
        t = Cons_2_0(_id, f_12, t);
      }
      ;
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm h_12 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, h_12, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,e_49 = NULL,f_49 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, e_49, f_49);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          e_49 = ATgetArgument(t, 0);
          t = e_49;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_48 = ATgetFirst((ATermList) t);
              a_49 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, z_48, (ATerm) ATmakeAppl(sym_LChoices_1, a_49));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_t_46;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              e_49 = ATgetArgument(t, 0);
              t = e_49;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_48 = ATgetFirst((ATermList) t);
                  a_49 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, z_48, (ATerm) ATmakeAppl(sym_Choices_1, a_49));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_t_46;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  e_49 = ATgetArgument(t, 0);
                  t = e_49;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_48 = ATgetFirst((ATermList) t);
                      a_49 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_48, (ATerm) ATmakeAppl(sym_Seqs_1, a_49));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_49 = ATgetArgument(t, 0);
                      f_49 = ATgetArgument(t, 1);
                      c_49 = ATgetArgument(t, 2);
                      b_49 = ATgetArgument(t, 3);
                      {
                        ATerm s_49 = NULL,t_49 = NULL;
                        t = f_49;
                        {
                          ATerm i_12 (ATerm t)
                          {
                            ATerm u_49 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                u_49 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, u_49, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_31), term_e_31));
                            return(t);
                          }
                          t = map1_1_0(i_12, t);
                          s_49 = t;
                          t = c_49;
                          {
                            ATerm j_12 (ATerm t)
                            {
                              ATerm k_12 (ATerm t)
                              {
                                ATerm v_49 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    v_49 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, v_49, term_e_31);
                                return(t);
                              }
                              t = try_1_0(k_12, t);
                              return(t);
                            }
                            t = map1_1_0(j_12, t);
                            t_49 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, e_49, s_49, t_49, b_49);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          e_49 = ATgetArgument(t, 0);
                          f_49 = ATgetArgument(t, 1);
                          c_49 = ATgetArgument(t, 2);
                          b_49 = ATgetArgument(t, 3);
                          {
                            ATerm u_46 = t;
                            int b_47 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_50 = NULL,b_50 = NULL;
                                t = c_49;
                                {
                                  ATerm l_12 (ATerm t)
                                  {
                                    ATerm c_50 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        c_50 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, c_50, term_e_31);
                                    return(t);
                                  }
                                  t = map1_1_0(l_12, t);
                                  a_50 = t;
                                  t = f_49;
                                  {
                                    ATerm m_12 (ATerm t)
                                    {
                                      ATerm q_12 (ATerm t)
                                      {
                                        ATerm d_50 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            d_50 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_50, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_31), term_e_31));
                                        return(t);
                                      }
                                      t = try_1_0(q_12, t);
                                      return(t);
                                    }
                                    t = map_1_0(m_12, t);
                                    b_50 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, e_49, b_50, a_50, b_49);
                                  }
                                }
                                ;
                                LocalPopChoice(b_47);
                              }
                            else
                              {
                                t = u_46;
                                {
                                  ATerm i_50 = NULL,j_50 = NULL;
                                  t = f_49;
                                  {
                                    ATerm r_12 (ATerm t)
                                    {
                                      ATerm k_50 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          k_50 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_50, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_31), term_e_31));
                                      return(t);
                                    }
                                    t = map1_1_0(r_12, t);
                                    i_50 = t;
                                    t = c_49;
                                    {
                                      ATerm s_12 (ATerm t)
                                      {
                                        ATerm w_12 (ATerm t)
                                        {
                                          ATerm l_50 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              l_50 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, l_50, term_e_31);
                                          return(t);
                                        }
                                        t = try_1_0(w_12, t);
                                        return(t);
                                      }
                                      t = map_1_0(s_12, t);
                                      j_50 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, e_49, i_50, j_50, b_49);
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
                              e_49 = ATgetArgument(t, 0);
                              f_49 = ATgetArgument(t, 1);
                              c_49 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, f_49, (ATerm) ATmakeAppl(sym_Op_2, term_n_23, (ATerm) ATinsert(ATinsert(ATempty, c_49), e_49)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  e_49 = ATgetArgument(t, 0);
                                  f_49 = ATgetArgument(t, 1);
                                  c_49 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, c_49)), e_49), (ATerm) ATmakeAppl(sym_Build_1, f_49)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      e_49 = ATgetArgument(t, 0);
                                      f_49 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, (ATerm) ATmakeAppl(sym_Match_1, f_49));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          e_49 = ATgetArgument(t, 0);
                                          f_49 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_49), f_49);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              e_49 = ATgetArgument(t, 0);
                                              f_49 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_49), e_49);
                                        }
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
ATerm unzip_1_0 (ATerm c_115 (ATerm), ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_c_47;
    return(t);
  }
  ATerm a_13 (ATerm t)
  {
    ATerm y_50 = NULL,z_50 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_50 = ATgetFirst((ATermList) t);
        z_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, y_50, z_50);
    return(t);
  }
  ATerm b_13 (ATerm t)
  {
    ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_47 = ATgetArgument(t, 0);
        if(match_cons(p_47, sym__2))
          {
            a_51 = ATgetArgument(p_47, 0);
            c_51 = ATgetArgument(p_47, 1);
          }
        else
          _fail(t);
        {
          ATerm q_47 = ATgetArgument(t, 1);
          if(match_cons(q_47, sym__2))
            {
              b_51 = ATgetArgument(q_47, 0);
              d_51 = ATgetArgument(q_47, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_51), a_51), (ATerm) ATinsert(CheckATermList(d_51), c_51));
    return(t);
  }
  t = genzip_4_0(x_12, a_13, b_13, c_115, t);
  return(t);
}
ATerm unzip_0_0 (ATerm t)
{
  t = unzip_1_0(_id, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm h_51 = NULL;
  h_51 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), h_51);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = h_51;
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm e_13 (ATerm t)
  {
    ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
    l_51 = t;
    {
      ATerm v_47 = t;
      int w_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Var_1))
            {
              ATerm y_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(w_47);
          t = l_51;
          {
            ATerm a_48 = t;
            if((PushChoice() == 0))
              {
                t = ContextVar_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_48;
              }
            t = term_f_48;
          }
        }
      else
        {
          t = v_47;
          if(match_cons(t, sym_Wld_0))
            {
              t = term_f_48;
            }
          else
            {
              if(match_cons(t, sym_RootApp_1))
                {
                  m_51 = ATgetArgument(t, 0);
                  {
                    ATerm s_51 = NULL;
                    t = m_51;
                    t = tvars_0_0(t);
                    {
                      ATerm g_13 (ATerm t)
                      {
                        ATerm t_51 = NULL;
                        t_51 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, t_51);
                        return(t);
                      }
                      t = map_1_0(g_13, t);
                      s_51 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_g_48, s_51);
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_App_2))
                    {
                      m_51 = ATgetArgument(t, 0);
                      n_51 = ATgetArgument(t, 1);
                      {
                        ATerm w_51 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, m_51, n_51);
                        t = tvars_0_0(t);
                        {
                          ATerm j_13 (ATerm t)
                          {
                            ATerm x_51 = NULL;
                            x_51 = t;
                            t = (ATerm) ATmakeAppl(sym_Var_1, x_51);
                            return(t);
                          }
                          t = map_1_0(j_13, t);
                          w_51 = t;
                          t = (ATerm) ATmakeAppl(sym_Op_2, term_g_48, w_51);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Con_3))
                        {
                          ATerm h_48 = ATgetArgument(t, 0);
                          ATerm i_48 = ATgetArgument(t, 1);
                          ATerm j_48 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATinsert(ATempty, term_k_48);
                      t = fatal_error_0_0(t);
                    }
                }
            }
        }
    }
    return(t);
  }
  t = alltd_1_0(e_13, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  e_51 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_51;
  {
    ATerm k_13 (ATerm t)
    {
      t = term_o_48;
      return(t);
    }
    t = rewrite_1_0(k_13, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm t_48 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) t_48) != ATmakeSymbol("m_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Var_1, f_51);
  }
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_53 (ATerm g_52, ATerm h_52, ATerm i_52, ATerm j_52, ATerm k_52, ATerm l_52, ATerm m_52, ATerm t)
  {
    ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, k_52, term_v_48);
    {
      ATerm w_48 = t;
      if((PushChoice() == 0))
        {
          ATerm b_53 = NULL;
          if(match_cons(t, sym__2))
            {
              b_53 = ATgetArgument(t, 0);
              if((b_53 != ATgetArgument(t, 1)))
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
          t = w_48;
        }
      t = new_0_0(t);
      t_52 = t;
      t = j_52;
      t = dummify_0_0(t);
      u_52 = t;
      {
        ATerm l_13 (ATerm t)
        {
          if((j_52 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, t_52);
          return(t);
        }
        t = try_1_0(l_13, t);
        v_52 = t;
        t = u_52;
        t = tvars_0_0(t);
        {
          ATerm m_13 (ATerm t)
          {
            ATerm c_53 = NULL;
            c_53 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, c_53);
            return(t);
          }
          t = map_1_0(m_13, t);
          w_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
          t = tvars_0_0(t);
          {
            ATerm n_13 (ATerm t)
            {
              ATerm d_53 = NULL;
              d_53 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, d_53);
              t = ContextVar_0_0(t);
              return(t);
            }
            t = filter_1_0(n_13, t);
            x_52 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_52, w_52);
            t = diff_0_0(t);
            y_52 = t;
            t = new_0_0(t);
            z_52 = t;
            t = g_52;
            t = n_0(t);
            a_53 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, a_53, (ATerm) ATmakeAppl(sym_Op_2, term_x_48, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_48, (ATerm) ATinsert(CheckATermList(y_52), (ATerm) ATmakeAppl(sym_Str_1, z_52)))), u_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_52, h_52, i_52, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_52), j_52), k_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_52)))), v_52), (ATerm) ATmakeAppl(sym_Op_2, term_y_48, (ATerm) ATinsert(CheckATermList(y_52), (ATerm) ATmakeAppl(sym_Str_1, z_52)))), l_52))));
          }
        }
      }
    }
    return(t);
  }
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  g_53 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      h_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
      j_53 = ATgetArgument(t, 2);
      k_53 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_53;
  if(match_cons(t, sym_Rule_3))
    {
      l_53 = ATgetArgument(t, 0);
      m_53 = ATgetArgument(t, 1);
      n_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_53;
  if(match_cons(t, sym_Op_2))
    {
      e_53 = ATgetArgument(t, 0);
      f_53 = ATgetArgument(t, 1);
      t = f_53;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_53;
          if(match_string(t, "Undefined"))
            {
              ATerm h_49 = t;
              int i_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
                  t = g_53;
                  t = new_0_0(t);
                  t_53 = t;
                  t = l_53;
                  t = dummify_0_0(t);
                  u_53 = t;
                  {
                    ATerm t_13 (ATerm t)
                    {
                      if((l_53 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_53);
                      return(t);
                    }
                    t = try_1_0(t_13, t);
                    v_53 = t;
                    t = h_53;
                    t = n_0(t);
                    w_53 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, w_53, (ATerm) ATmakeAppl(sym_Op_2, term_x_48, (ATerm) ATinsert(ATinsert(ATempty, term_v_48), u_53)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_53, i_53, j_53, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_53), l_53), term_v_48, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_53)))), v_53), term_v_48), (ATerm) ATmakeAppl(sym_Seq_2, n_53, term_t_46)))));
                  }
                  ;
                  LocalPopChoice(i_49);
                }
              else
                {
                  t = h_49;
                  t = x_53(h_53, i_53, j_53, l_53, m_53, n_53, g_53, t);
                }
            }
          else
            {
              t = x_53(h_53, i_53, j_53, l_53, m_53, n_53, g_53, t);
            }
        }
      else
        {
          t = e_53;
          t = x_53(h_53, i_53, j_53, l_53, m_53, n_53, g_53, t);
        }
    }
  else
    {
      t = x_53(h_53, i_53, j_53, l_53, m_53, n_53, g_53, t);
    }
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm a_54 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      a_54 = ATgetArgument(t, 0);
      t = a_54;
      {
        ATerm u_13 (ATerm t)
        {
          ATerm x_13 (ATerm t)
          {
            ATerm c_54 = NULL;
            c_54 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_k_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_54))));
            return(t);
          }
          t = SplitDynamicRule_1_0(x_13, t);
          return(t);
        }
        t = map_1_0(u_13, t);
        t = unzip_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          a_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_54;
      {
        ATerm y_13 (ATerm t)
        {
          ATerm d_14 (ATerm t)
          {
            ATerm e_54 = NULL;
            e_54 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_m_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_54))));
            return(t);
          }
          t = SplitDynamicRule_1_0(d_14, t);
          return(t);
        }
        t = map_1_0(y_13, t);
        t = unzip_0_0(t);
      }
    }
  return(t);
}
ATerm split_under_scope_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      f_54 = ATgetArgument(t, 0);
      g_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_14 (ATerm t)
    {
      t = term_o_48;
      return(t);
    }
    ATerm h_14 (ATerm t)
    {
      t = f_54;
      t = DeclareContextVars_0_0(t);
      t = g_54;
      t = d_134(t);
      h_54 = t;
      return(t);
    }
    t = scope_2_0(e_14, h_14, t);
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_54, not_null(h_54));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm i_54 (ATerm t)
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_108(t);
        ;
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        t = SRTS_one(i_54, t);
      }
    return(t);
  }
  t = i_54(t);
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  ATerm j_54 (ATerm t)
  {
    ATerm j_14 (ATerm t)
    {
      ATerm p_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_134(t);
          ;
          LocalPopChoice(q_49);
        }
      else
        {
          t = p_49;
          t = split_under_scope_1_0(j_54, t);
        }
      return(t);
    }
    t = oncetd_1_0(j_14, t);
    return(t);
  }
  t = j_54(t);
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm m_14 (ATerm t)
  {
    ATerm k_54 = NULL;
    k_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_54), term_w_49);
    {
      ATerm o_14 (ATerm t)
      {
        t = term_o_48;
        return(t);
      }
      t = assert_1_0(o_14, t);
      t = k_54;
    }
    return(t);
  }
  t = map_1_0(m_14, t);
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_54 = ATgetFirst((ATermList) t);
      m_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm p_14 (ATerm t)
    {
      t = term_o_48;
      return(t);
    }
    ATerm q_14 (ATerm t)
    {
      t = l_54;
      t = tvars_0_0(t);
      t = DeclareContextVars_0_0(t);
      t = l_54;
      {
        ATerm s_14 (ATerm t)
        {
          t = split_dynamic_rules_0_0(t);
          if(match_cons(t, sym__2))
            {
              o_54 = ATgetArgument(t, 0);
              n_54 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, o_54);
          return(t);
        }
        t = split_dynamic_rule_1_0(s_14, t);
        p_54 = t;
      }
      return(t);
    }
    t = scope_2_0(p_14, q_14, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_54)), not_null(p_54)), m_54);
    t = conc_0_0(t);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm y_113 (ATerm), ATerm t)
{
  ATerm q_54 (ATerm t)
  {
    t = y_113(t);
    {
      ATerm x_49 = t;
      int y_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_49);
        }
      else
        {
          t = x_49;
          t = Cons_2_0(_id, q_54, t);
        }
    }
    return(t);
  }
  t = q_54(t);
  return(t);
}
ATerm lift_dynamic_rules_0_0 (ATerm t)
{
  ATerm t_14 (ATerm t)
  {
    t = repeat_1_0(lift_dynamic_rule_0_0, t);
    return(t);
  }
  t = listtd_1_0(t_14, t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,w_54 = NULL,m_55 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      w_54 = ATgetArgument(t, 0);
      m_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_54 = ATgetFirst((ATermList) t);
      u_54 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_e_50, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, u_54, m_55)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_54))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_55;
    }
  return(t);
}
ATerm define_rule_scope_0_0 (ATerm t)
{
  ATerm u_14 (ATerm t)
  {
    t = try_1_0(DefDynamicRuleScope_0_0, t);
    return(t);
  }
  t = topdown_1_0(u_14, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm w_14 (ATerm t)
  {
    ATerm x_14 (ATerm t)
    {
      ATerm y_14 (ATerm t)
      {
        ATerm a_15 (ATerm t)
        {
          ATerm f_15 (ATerm t)
          {
            t = define_rule_scope_0_0(t);
            t = lift_dynamic_rules_0_0(t);
            return(t);
          }
          t = Strategies_1_0(f_15, t);
          return(t);
        }
        ATerm b_15 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(a_15, b_15, t);
        return(t);
      }
      t = Cons_2_0(_id, y_14, t);
      return(t);
    }
    t = Cons_2_0(_id, x_14, t);
    return(t);
  }
  t = Specification_1_0(w_14, t);
  return(t);
}
ATerm DefScopeDefault_0_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym_ScopeDefault_1))
    {
      r_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_55;
  t = tvars_0_0(t);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_55, r_55);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_55);
  t_55 = t;
  t = u_55;
  t = g_95(t);
  v_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, v_55), t_55);
  return(t);
}
ATerm Scope_2_0 (ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL;
  e_56 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_56 = ATgetArgument(t, 0);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_56);
  z_55 = t;
  t = a_56;
  t = j_96(t);
  c_56 = t;
  t = b_56;
  t = k_96(t);
  d_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, c_56, d_56), z_55);
  return(t);
}
ATerm tboundin_3_0 (ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm t)
{
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(f_135, d_135, t);
      ;
      LocalPopChoice(g_50);
    }
  else
    {
      t = f_50;
      {
        ATerm h_50 = t;
        int m_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(f_135, f_135, f_135, d_135, t);
            ;
            LocalPopChoice(m_50);
          }
        else
          {
            t = h_50;
            {
              ATerm n_50 = t;
              int o_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(f_135, f_135, f_135, d_135, t);
                  ;
                  LocalPopChoice(o_50);
                }
              else
                {
                  t = n_50;
                  t = DynamicRules_1_0(d_135, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm h_56 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm p_50 = ATgetArgument(t, 0);
      ATerm q_50 = ATgetArgument(t, 1);
      h_56 = ATgetArgument(t, 2);
      {
        ATerm r_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = h_56;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm g_15 (ATerm t)
  {
    ATerm l_56 = NULL;
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            l_56 = ATgetArgument(t, 0);
            {
              ATerm u_50 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_50);
        t = l_56;
      }
    else
      {
        t = s_50;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            l_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_56;
      }
    return(t);
  }
  t = map_1_0(g_15, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm o_56 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm v_50 = ATgetArgument(t, 0);
      ATerm w_50 = ATgetArgument(t, 1);
      o_56 = ATgetArgument(t, 2);
      {
        ATerm x_50 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = o_56;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm p_56 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      p_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_56;
  t = tvars_0_0(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_56 = NULL,w_56 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_56 = ATgetArgument(t, 0);
      t = w_56;
      if(match_cons(t, sym_Rule_3))
        {
          s_56 = ATgetArgument(t, 0);
          {
            ATerm g_51 = ATgetArgument(t, 1);
          }
          {
            ATerm i_51 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_56;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          w_56 = ATgetArgument(t, 0);
          {
            ATerm j_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_56;
    }
  return(t);
}
ATerm union_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  if(match_cons(t, sym__2))
    {
      d_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_57;
  {
    ATerm e_57 (ATerm t)
    {
      ATerm k_51 = t;
      int o_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_57;
          ;
          LocalPopChoice(o_51);
        }
      else
        {
          t = k_51;
          {
            ATerm p_51 = t;
            int q_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_15 (ATerm t)
                {
                  t = c_57;
                  return(t);
                }
                t = HdMember_p__2_0(s_116, l_15, t);
                t = e_57(t);
                ;
                LocalPopChoice(q_51);
              }
            else
              {
                t = p_51;
                t = Cons_2_0(_id, e_57, t);
              }
          }
        }
      return(t);
    }
    t = e_57(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm m_15 (ATerm t)
  {
    ATerm f_57 = NULL;
    if(match_cons(t, sym__2))
      {
        f_57 = ATgetArgument(t, 0);
        if((f_57 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(m_15, t);
  return(t);
}
ATerm crush_3_0 (ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL;
  g_57 = t;
  t = SSL_explode_term(g_57);
  if(match_cons(t, sym__2))
    {
      ATerm r_51 = ATgetArgument(t, 0);
      h_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_57;
  t = foldr_3_0(l_122, m_122, n_122, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_57 = ATgetFirst((ATermList) t);
      j_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_116(t);
  {
    ATerm n_15 (ATerm t)
    {
      ATerm k_57 = NULL;
      k_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_57, k_57);
      t = w_116(t);
      return(t);
    }
    t = fetch_1_0(n_15, t);
    t = j_57;
  }
  return(t);
}
ATerm diff_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  if(match_cons(t, sym__2))
    {
      m_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_57;
  {
    ATerm n_57 (ATerm t)
    {
      ATerm u_51 = t;
      int v_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(v_51);
        }
      else
        {
          t = u_51;
          {
            ATerm y_51 = t;
            int z_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_15 (ATerm t)
                {
                  t = l_57;
                  return(t);
                }
                t = HdMember_p__2_0(o_116, o_15, t);
                t = n_57(t);
                ;
                LocalPopChoice(z_51);
              }
            else
              {
                t = y_51;
                t = Cons_2_0(_id, n_57, t);
              }
          }
        }
      return(t);
    }
    t = n_57(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t)
{
  ATerm o_57 (ATerm t)
  {
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_114(t);
        ;
        LocalPopChoice(b_52);
      }
    else
      {
        t = a_52;
        t = t_114(t);
        t = _2_0(v_114, o_57, t);
        t = u_114(t);
      }
    return(t);
  }
  t = o_57(t);
  return(t);
}
ATerm zip_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm p_15 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm c_52 = ATgetArgument(t, 0);
        if(((ATgetType(c_52) != AT_LIST) || !(ATisEmpty(c_52))))
          _fail(t);
        {
          ATerm d_52 = ATgetArgument(t, 1);
          if(((ATgetType(d_52) != AT_LIST) || !(ATisEmpty(d_52))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm q_15 (ATerm t)
  {
    ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_52 = ATgetArgument(t, 0);
        if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
          {
            p_57 = ATgetFirst((ATermList) e_52);
            r_57 = (ATerm) ATgetNext((ATermList) e_52);
          }
        else
          _fail(t);
        {
          ATerm f_52 = ATgetArgument(t, 1);
          if(((ATgetType(f_52) == AT_LIST) && !(ATisEmpty(f_52))))
            {
              q_57 = ATgetFirst((ATermList) f_52);
              s_57 = (ATerm) ATgetNext((ATermList) f_52);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_57, q_57), (ATerm) ATmakeAppl(sym__2, r_57, s_57));
    return(t);
  }
  ATerm t_15 (ATerm t)
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
  t = genzip_4_0(p_15, q_15, t_15, x_114, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_52 = ATgetFirst((ATermList) t);
      if(match_cons(n_52, sym__2))
        {
          v_57 = ATgetArgument(n_52, 0);
          w_57 = ATgetArgument(n_52, 1);
        }
      else
        _fail(t);
      x_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_57);
  if(match_cons(t, sym__2))
    {
      y_57 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_57);
  if(match_cons(t, sym__2))
    {
      if((y_57 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_58, z_57);
  t = zip_1_0(_id, t);
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_58, x_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  ATerm c_58 (ATerm t)
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_106(t);
        ;
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        t = p_106(t);
        t = c_58(t);
      }
    return(t);
  }
  t = c_58(t);
  return(t);
}
ATerm for_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  t = r_106(t);
  t = while_not_2_0(s_106, t_106, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_15 (ATerm t)
      {
        ATerm h_58 = NULL;
        h_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_58);
        return(t);
      }
      ATerm w_15 (ATerm t)
      {
        ATerm z_15 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, z_15, t);
        return(t);
      }
      ATerm x_15 (ATerm t)
      {
        ATerm s_52 = t;
        int o_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_16 (ATerm t)
            {
              ATerm p_53 = t;
              int q_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_58 = ATgetFirst((ATermList) t);
                      m_58 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = j_58;
                  if(match_cons(t, sym__2))
                    {
                      k_58 = ATgetArgument(t, 0);
                      l_58 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_58;
                  if((k_58 != t))
                    {
                      _fail(t);
                    }
                  t = m_58;
                  ;
                  LocalPopChoice(q_53);
                }
              else
                {
                  t = p_53;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, b_16, t);
            ;
            LocalPopChoice(o_53);
          }
        else
          {
            t = s_52;
            {
              ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
              if(match_cons(t, sym__2))
                {
                  q_58 = ATgetArgument(t, 0);
                  r_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_58 = ATgetFirst((ATermList) t);
                  t_58 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_58), s_58), t_58);
            }
          }
        return(t);
      }
      t = for_3_0(u_15, w_15, x_15, t);
      ;
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
      {
        ATerm d_16 (ATerm t)
        {
          ATerm x_58 = NULL;
          if(match_cons(t, sym__2))
            {
              x_58 = ATgetArgument(t, 0);
              if((x_58 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(d_16, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm u_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_59 (ATerm t)
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_133(t);
        ;
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
        {
          ATerm y_53 = t;
          int z_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_58 = NULL,a_59 = NULL;
              y_58 = t;
              t = t_133(t);
              a_59 = t;
              t = y_58;
              {
                ATerm e_16 (ATerm t)
                {
                  ATerm h_16 (ATerm t)
                  {
                    t = a_59;
                    return(t);
                  }
                  t = split_2_0(b_59, h_16, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm g_16 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = u_133(e_16, b_59, g_16, t);
                {
                  ATerm i_16 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(i_16, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(z_53);
            }
          else
            {
              t = y_53;
              {
                ATerm j_16 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(j_16, union_0_0, b_59, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_59(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm k_16 (ATerm t)
  {
    ATerm c_59 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        c_59 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, c_59);
    return(t);
  }
  ATerm l_16 (ATerm t)
  {
    ATerm b_54 = t;
    int d_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(d_54);
      }
    else
      {
        t = b_54;
        {
          ATerm r_54 = t;
          int s_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(s_54);
            }
          else
            {
              t = r_54;
              {
                ATerm v_54 = t;
                int x_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(x_54);
                  }
                else
                  {
                    t = v_54;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(k_16, l_16, tboundin_3_0, t);
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm y_54 = ATgetArgument(t, 0);
      if(match_cons(y_54, sym_Rule_3))
        {
          d_59 = ATgetArgument(y_54, 0);
          e_59 = ATgetArgument(y_54, 1);
          f_59 = ATgetArgument(y_54, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = d_59;
  t = tvars_0_0(t);
  g_59 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_59, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_59, e_59, f_59)));
  return(t);
}
ATerm bottomup_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm m_16 (ATerm t)
  {
    t = bottomup_1_0(y_106, t);
    return(t);
  }
  t = SRTS_all(m_16, t);
  t = y_106(t);
  return(t);
}
ATerm define_lrules_0_0 (ATerm t)
{
  ATerm n_16 (ATerm t)
  {
    ATerm o_16 (ATerm t)
    {
      ATerm z_54 = t;
      int a_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(a_55);
        }
      else
        {
          t = z_54;
          t = DefScopeDefault_0_0(t);
        }
      return(t);
    }
    t = try_1_0(o_16, t);
    return(t);
  }
  t = bottomup_1_0(n_16, t);
  return(t);
}
ATerm rewrite_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,f_11 = NULL;
  k_59 = t;
  t = term_u_30;
  t = n_123(t);
  l_59 = t;
  t = SSL_table_get(l_59, k_59);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_11 = ATgetFirst((ATermList) t);
      {
        ATerm b_55 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_11;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  x_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_59;
        {
          ATerm p_16 (ATerm t)
          {
            t = term_e_55;
            return(t);
          }
          t = rewrite_1_0(p_16, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_55) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, y_59, (ATerm) ATempty);
        }
        ;
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = x_59;
        {
          ATerm q_16 (ATerm t)
          {
            t = term_e_55;
            return(t);
          }
          t = rewrite_1_0(q_16, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm g_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_55) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, y_59, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm b_60 (ATerm t)
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_108(t);
        ;
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        t = SRTS_all(b_60, t);
      }
    return(t);
  }
  t = b_60(t);
  return(t);
}
ATerm assert_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
  if(match_cons(t, sym__2))
    {
      c_60 = ATgetArgument(t, 0);
      d_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_123(t);
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_60, c_60, d_60);
  t = table_push_0_0(t);
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(e_60, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_60 = ATgetFirst((ATermList) t);
        g_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(e_60, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(g_60), (ATerm) ATinsert(CheckATermList(f_60), c_60)));
    t = (ATerm) ATmakeAppl(sym__2, c_60, d_60);
  }
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm k_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      o_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
      k_60 = ATgetArgument(t, 2);
      t = p_60;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_60), term_n_55);
      {
        ATerm r_16 (ATerm t)
        {
          t = term_e_55;
          return(t);
        }
        t = assert_1_0(r_16, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, o_60, (ATerm)ATempty, k_60);
      }
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          o_60 = ATgetArgument(t, 0);
          p_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_60;
      if(match_cons(t, sym_ConstType_1))
        {
          q_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_60), term_p_55);
      {
        ATerm s_16 (ATerm t)
        {
          t = term_e_55;
          return(t);
        }
        t = assert_1_0(s_16, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_60, (ATerm) ATmakeAppl(sym_ConstType_1, q_60));
      }
    }
  return(t);
}
ATerm Overlays_1_0 (ATerm t_91 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  y_60 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_60);
  v_60 = t;
  t = w_60;
  t = t_91(t);
  x_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, x_60), v_60);
  return(t);
}
ATerm Constructors_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  e_61 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      c_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_61);
  b_61 = t;
  t = c_61;
  t = o_92(t);
  d_61 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, d_61), b_61);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
  if(match_cons(t, sym__2))
    {
      j_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_55 = t;
    int x_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_55 = ATgetArgument(t, 0);
            ATerm f_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_61, k_61);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_56 = ATgetFirst((ATermList) t);
            p_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_11;
        ;
        LocalPopChoice(x_55);
      }
    else
      {
        t = q_55;
        t = (ATerm) ATempty;
      }
    l_61 = t;
    t = SSL_table_put(j_61, k_61, l_61);
    t = (ATerm) ATmakeAppl(sym__2, j_61, k_61);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,a_62 = NULL,b_62 = NULL;
  t_61 = t;
  t = i_123(t);
  u_61 = t;
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_61, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_62 = ATgetFirst((ATermList) t);
        a_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_61, (ATerm)ATmakeAppl(sym_Scopes_0), a_62);
    t = b_62;
    {
      ATerm t_16 (ATerm t)
      {
        ATerm c_62 = NULL;
        c_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_61, c_62);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(t_16, t);
      t = t_61;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  ATerm k_56 = t;
  int m_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_105(t);
      t = t_105(t);
      ;
      LocalPopChoice(m_56);
    }
  else
    {
      t = k_56;
      t = t_105(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
  f_62 = t;
  t = h_123(t);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_62, term_n_56);
  {
    ATerm q_56 = t;
    int r_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_56 = ATgetArgument(t, 0);
            ATerm u_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_62, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_56);
      }
    else
      {
        t = q_56;
        t = (ATerm) ATempty;
      }
    h_62 = t;
    t = SSL_table_put(g_62, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_62), (ATerm) ATempty));
    t = f_62;
  }
  return(t);
}
ATerm scope_2_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm t)
{
  t = begin_scope_1_0(j_123, t);
  {
    ATerm u_16 (ATerm t)
    {
      t = end_scope_1_0(j_123, t);
      return(t);
    }
    t = restore_always_2_0(k_123, u_16, t);
  }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  ATerm v_16 (ATerm t)
  {
    t = term_e_55;
    return(t);
  }
  ATerm w_16 (ATerm t)
  {
    ATerm x_16 (ATerm t)
    {
      ATerm y_16 (ATerm t)
      {
        ATerm z_16 (ATerm t)
        {
          ATerm v_56 = t;
          int x_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_17 (ATerm t)
              {
                ATerm b_17 (ATerm t)
                {
                  t = try_1_0(DeclareVarToConst_0_0, t);
                  return(t);
                }
                t = map_1_0(b_17, t);
                return(t);
              }
              t = Constructors_1_0(a_17, t);
              ;
              LocalPopChoice(x_56);
            }
          else
            {
              t = v_56;
              {
                ATerm c_17 (ATerm t)
                {
                  ATerm d_17 (ATerm t)
                  {
                    t = try_1_0(DeclareVarToConst_0_0, t);
                    return(t);
                  }
                  t = map_1_0(d_17, t);
                  return(t);
                }
                t = Overlays_1_0(c_17, t);
              }
            }
          return(t);
        }
        t = try_1_0(z_16, t);
        return(t);
      }
      t = map_1_0(y_16, t);
      return(t);
    }
    t = Specification_1_0(x_16, t);
    t = alltd_1_0(VarToConst_0_0, t);
    return(t);
  }
  t = scope_2_0(v_16, w_16, t);
  return(t);
}
ATerm filter_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm y_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_56);
    }
  else
    {
      t = y_56;
      {
        ATerm a_57 = t;
        int b_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17 (ATerm t)
            {
              t = filter_1_0(t_119, t);
              return(t);
            }
            t = Cons_2_0(t_119, e_17, t);
            ;
            LocalPopChoice(b_57);
          }
        else
          {
            t = a_57;
            {
              ATerm p_62 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_58 = ATgetFirst((ATermList) t);
                  p_62 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_62;
              t = filter_1_0(t_119, t);
            }
          }
      }
    }
  return(t);
}
ATerm GetConstructors_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  if(match_cons(t, sym_Signature_1))
    {
      r_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_62;
  {
    ATerm f_17 (ATerm t)
    {
      ATerm t_62 = NULL;
      if(match_cons(t, sym_Constructors_1))
        {
          t_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_62;
      return(t);
    }
    t = filter_1_0(f_17, t);
    t = concat_0_0(t);
    s_62 = t;
    t = (ATerm) ATmakeAppl(sym_Constructors_1, s_62);
  }
  return(t);
}
ATerm InsertBSpec_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
  if(match_cons(t, sym__2))
    {
      u_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_62);
  if(match_cons(t, sym__2))
    {
      w_62 = ATgetArgument(t, 0);
      {
        ATerm e_58 = ATgetArgument(t, 1);
        if(((ATgetType(e_58) == AT_LIST) && !(ATisEmpty(e_58))))
          {
            x_62 = ATgetFirst((ATermList) e_58);
            {
              ATerm f_58 = (ATerm) ATgetNext((ATermList) e_58);
              if(((ATgetType(f_58) != AT_LIST) || !(ATisEmpty(f_58))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_62;
  {
    ATerm g_17 (ATerm t)
    {
      ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
      y_62 = t;
      t = SSL_explode_term(y_62);
      if(match_cons(t, sym__2))
        {
          if((w_62 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm g_58 = ATgetArgument(t, 1);
            if(((ATgetType(g_58) == AT_LIST) && !(ATisEmpty(g_58))))
              {
                z_62 = ATgetFirst((ATermList) g_58);
                {
                  ATerm i_58 = (ATerm) ATgetNext((ATermList) g_58);
                  if(((ATgetType(i_58) != AT_LIST) || !(ATisEmpty(i_58))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_62, x_62);
      t = conc_0_0(t);
      a_63 = t;
      t = SSL_mkterm(w_62, (ATerm) ATinsert(ATempty, a_63));
      return(t);
    }
    t = fetch_1_0(g_17, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm t)
{
  ATerm n_58 = t;
  int o_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_118(t);
      ;
      LocalPopChoice(o_58);
    }
  else
    {
      t = n_58;
      {
        ATerm d_63 = NULL,k_63 = NULL,n_63 = NULL,o_63 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_63 = ATgetFirst((ATermList) t);
            k_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_63;
        t = u_118(t);
        n_63 = t;
        t = k_63;
        t = foldr_3_0(s_118, t_118, u_118, t);
        o_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_63, o_63);
        t = t_118(t);
      }
    }
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm h_17 (ATerm t)
  {
    ATerm i_17 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_58), term_u_58), term_p_58);
      return(t);
    }
    ATerm j_17 (ATerm t)
    {
      ATerm k_17 (ATerm t)
      {
        ATerm w_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetConstructors_0_0(t);
            ;
            LocalPopChoice(z_58);
          }
        else
          {
            t = w_58;
            {
              ATerm r_63 = NULL;
              if(match_cons(t, sym_Rules_1))
                {
                  r_63 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Strategies_1, r_63);
            }
          }
        return(t);
      }
      t = try_1_0(k_17, t);
      return(t);
    }
    t = foldr_3_0(i_17, InsertBSpec_0_0, j_17, t);
    return(t);
  }
  t = Specification_1_0(h_17, t);
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  {
    ATerm l_17 (ATerm t)
    {
      t = try_1_0(HL_0_0, t);
      return(t);
    }
    t = topdown_1_0(l_17, t);
    t = vars_to_consts_0_0(t);
    t = define_lrules_0_0(t);
    t = LiftDynamicRules_0_0(t);
    {
      ATerm m_17 (ATerm t)
      {
        t = try_1_0(HL_0_0, t);
        return(t);
      }
      t = topdown_1_0(m_17, t);
      {
        ATerm o_17 (ATerm t)
        {
          ATerm p_17 (ATerm t)
          {
            ATerm t_63 = NULL;
            if(match_cons(t, sym_Constructors_1))
              {
                t_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, t_63)));
            return(t);
          }
          t = fetch_1_0(p_17, t);
          return(t);
        }
        t = Specification_1_0(o_17, t);
      }
    }
  }
  return(t);
}
ATerm Op_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  b_64 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_63 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_64);
  w_63 = t;
  t = x_63;
  t = v_92(t);
  z_63 = t;
  t = y_63;
  t = w_92(t);
  a_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, z_63, a_64), w_63);
  return(t);
}
ATerm OpDecl_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
  j_64 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_64);
  e_64 = t;
  t = f_64;
  t = f_92(t);
  h_64 = t;
  t = g_64;
  t = g_92(t);
  i_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, h_64, i_64), e_64);
  return(t);
}
ATerm SVar_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  p_64 = t;
  if(match_cons(t, sym_SVar_1))
    {
      n_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_64);
  m_64 = t;
  t = n_64;
  t = y_95(t);
  o_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, o_64), m_64);
  return(t);
}
ATerm Var_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  v_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_64);
  s_64 = t;
  t = t_64;
  t = p_92(t);
  u_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, u_64), s_64);
  return(t);
}
ATerm VarDec_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL;
  d_65 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_64 = ATgetArgument(t, 0);
      a_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_65);
  y_64 = t;
  t = z_64;
  t = k_98(t);
  b_65 = t;
  t = a_65;
  t = l_98(t);
  c_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, b_65, c_65), y_64);
  return(t);
}
ATerm SDef_3_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL;
  n_65 = t;
  if(match_cons(t, sym_SDef_3))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
      j_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_65);
  g_65 = t;
  t = h_65;
  t = o_98(t);
  k_65 = t;
  t = i_65;
  t = p_98(t);
  l_65 = t;
  t = j_65;
  t = q_98(t);
  m_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, k_65, l_65, m_65), g_65);
  return(t);
}
ATerm SDefT_4_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  e_66 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_65 = ATgetArgument(t, 0);
      s_65 = ATgetArgument(t, 1);
      t_65 = ATgetArgument(t, 2);
      z_65 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_66);
  q_65 = t;
  t = r_65;
  t = r_98(t);
  a_66 = t;
  t = s_65;
  t = s_98(t);
  b_66 = t;
  t = t_65;
  t = t_98(t);
  c_66 = t;
  t = z_65;
  t = u_98(t);
  d_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, a_66, b_66, c_66, d_66), q_65);
  return(t);
}
ATerm RDef_3_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,k_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,a_67 = NULL;
  a_67 = t;
  if(match_cons(t, sym_RDef_3))
    {
      i_66 = ATgetArgument(t, 0);
      k_66 = ATgetArgument(t, 1);
      q_66 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_67);
  h_66 = t;
  t = i_66;
  t = u_94(t);
  r_66 = t;
  t = k_66;
  t = v_94(t);
  s_66 = t;
  t = q_66;
  t = w_94(t);
  t_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, r_66, s_66, t_66), h_66);
  return(t);
}
ATerm RDefT_4_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
  s_67 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      e_67 = ATgetArgument(t, 0);
      f_67 = ATgetArgument(t, 1);
      g_67 = ATgetArgument(t, 2);
      h_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_67);
  d_67 = t;
  t = e_67;
  t = x_94(t);
  i_67 = t;
  t = f_67;
  t = y_94(t);
  p_67 = t;
  t = g_67;
  t = z_94(t);
  q_67 = t;
  t = h_67;
  t = a_95(t);
  r_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, i_67, p_67, q_67, r_67), d_67);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  y_67 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_67);
  v_67 = t;
  t = w_67;
  t = j_98(t);
  x_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, x_67), v_67);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm h_59 = t;
  int i_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL;
      p_69 = t;
      if(match_cons(t, sym_Real_1))
        {
          q_69 = ATgetArgument(t, 0);
          {
            ATerm v_11 = NULL;
            t = SSL_string_to_real(q_69);
            v_11 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, v_11);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              q_69 = ATgetArgument(t, 0);
              {
                ATerm a_12 = NULL;
                t = SSL_string_to_int(q_69);
                a_12 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, a_12);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  q_69 = ATgetArgument(t, 0);
                  r_69 = ATgetArgument(t, 1);
                  s_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSL_is_string(s_69);
              t = (ATerm) ATmakeAppl(sym_Con_3, q_69, r_69, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_69), (ATerm) ATempty));
            }
        }
      ;
      LocalPopChoice(i_59);
    }
  else
    {
      t = h_59;
      {
        ATerm j_59 = t;
        int m_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_17 (ATerm t)
            {
              ATerm n_12 = NULL,p_12 = NULL;
              n_12 = t;
              t = SSL_explode_string(n_12);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_59 = ATgetFirst((ATermList) t);
                  if(((ATgetType(n_59) != AT_INT) || (ATgetInt((ATermInt) n_59) != 39)))
                    _fail(t);
                  p_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSL_implode_string(p_12);
              return(t);
            }
            t = DefaultVarDec_1_0(q_17, t);
            ;
            LocalPopChoice(m_59);
          }
        else
          {
            t = j_59;
            {
              ATerm o_59 = t;
              int p_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_17 (ATerm t)
                  {
                    ATerm t_12 = NULL,u_12 = NULL;
                    t_12 = t;
                    t = SSL_explode_string(t_12);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm q_59 = ATgetFirst((ATermList) t);
                        if(((ATgetType(q_59) != AT_INT) || (ATgetInt((ATermInt) q_59) != 39)))
                          _fail(t);
                        u_12 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(u_12);
                    return(t);
                  }
                  t = RDefT_4_0(r_17, _id, _id, _id, t);
                  ;
                  LocalPopChoice(p_59);
                }
              else
                {
                  t = o_59;
                  {
                    ATerm r_59 = t;
                    int s_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_17 (ATerm t)
                        {
                          ATerm y_12 = NULL,z_12 = NULL;
                          y_12 = t;
                          t = SSL_explode_string(y_12);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm t_59 = ATgetFirst((ATermList) t);
                              if(((ATgetType(t_59) != AT_INT) || (ATgetInt((ATermInt) t_59) != 39)))
                                _fail(t);
                              z_12 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = SSL_implode_string(z_12);
                          return(t);
                        }
                        t = RDef_3_0(s_17, _id, _id, t);
                        ;
                        LocalPopChoice(s_59);
                      }
                    else
                      {
                        t = r_59;
                        {
                          ATerm u_59 = t;
                          int v_59 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_17 (ATerm t)
                              {
                                ATerm c_13 = NULL,d_13 = NULL;
                                c_13 = t;
                                t = SSL_explode_string(c_13);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm w_59 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(w_59) != AT_INT) || (ATgetInt((ATermInt) w_59) != 39)))
                                      _fail(t);
                                    d_13 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(d_13);
                                return(t);
                              }
                              t = SDefT_4_0(t_17, _id, _id, _id, t);
                              ;
                              LocalPopChoice(v_59);
                            }
                          else
                            {
                              t = u_59;
                              {
                                ATerm z_59 = t;
                                int a_60 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_17 (ATerm t)
                                    {
                                      ATerm h_13 = NULL,i_13 = NULL;
                                      h_13 = t;
                                      t = SSL_explode_string(h_13);
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          ATerm h_60 = ATgetFirst((ATermList) t);
                                          if(((ATgetType(h_60) != AT_INT) || (ATgetInt((ATermInt) h_60) != 39)))
                                            _fail(t);
                                          i_13 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = SSL_implode_string(i_13);
                                      return(t);
                                    }
                                    t = SDef_3_0(u_17, _id, _id, t);
                                    ;
                                    LocalPopChoice(a_60);
                                  }
                                else
                                  {
                                    t = z_59;
                                    {
                                      ATerm i_60 = t;
                                      int j_60 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_17 (ATerm t)
                                          {
                                            ATerm o_13 = NULL,r_13 = NULL;
                                            o_13 = t;
                                            t = SSL_explode_string(o_13);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm l_60 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(l_60) != AT_INT) || (ATgetInt((ATermInt) l_60) != 39)))
                                                  _fail(t);
                                                r_13 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(r_13);
                                            return(t);
                                          }
                                          t = VarDec_2_0(v_17, _id, t);
                                          ;
                                          LocalPopChoice(j_60);
                                        }
                                      else
                                        {
                                          t = i_60;
                                          {
                                            ATerm m_60 = t;
                                            int n_60 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_17 (ATerm t)
                                                {
                                                  ATerm v_13 = NULL,w_13 = NULL;
                                                  v_13 = t;
                                                  t = SSL_explode_string(v_13);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm r_60 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(r_60) != AT_INT) || (ATgetInt((ATermInt) r_60) != 39)))
                                                        _fail(t);
                                                      w_13 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(w_13);
                                                  return(t);
                                                }
                                                t = Var_1_0(w_17, t);
                                                ;
                                                LocalPopChoice(n_60);
                                              }
                                            else
                                              {
                                                t = m_60;
                                                {
                                                  ATerm s_60 = t;
                                                  int t_60 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_17 (ATerm t)
                                                      {
                                                        ATerm z_13 = NULL,b_14 = NULL;
                                                        z_13 = t;
                                                        t = SSL_explode_string(z_13);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm u_60 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(u_60) != AT_INT) || (ATgetInt((ATermInt) u_60) != 39)))
                                                              _fail(t);
                                                            b_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(b_14);
                                                        return(t);
                                                      }
                                                      t = SVar_1_0(x_17, t);
                                                      ;
                                                      LocalPopChoice(t_60);
                                                    }
                                                  else
                                                    {
                                                      t = s_60;
                                                      {
                                                        ATerm z_60 = t;
                                                        int a_61 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm y_17 (ATerm t)
                                                            {
                                                              ATerm f_14 = NULL,g_14 = NULL;
                                                              f_14 = t;
                                                              t = SSL_explode_string(f_14);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm f_61 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(f_61) != AT_INT) || (ATgetInt((ATermInt) f_61) != 39)))
                                                                    _fail(t);
                                                                  g_14 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(g_14);
                                                              return(t);
                                                            }
                                                            t = OpDecl_2_0(y_17, _id, t);
                                                            ;
                                                            LocalPopChoice(a_61);
                                                          }
                                                        else
                                                          {
                                                            t = z_60;
                                                            {
                                                              ATerm z_17 (ATerm t)
                                                              {
                                                                ATerm l_14 = NULL,n_14 = NULL;
                                                                l_14 = t;
                                                                t = SSL_explode_string(l_14);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm g_61 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(g_61) != AT_INT) || (ATgetInt((ATermInt) g_61) != 39)))
                                                                      _fail(t);
                                                                    n_14 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(n_14);
                                                                return(t);
                                                              }
                                                              t = Op_2_0(z_17, _id, t);
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm at_last_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm w_69 (ATerm t)
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, a_18, t);
        t = q_113(t);
        ;
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        t = Cons_2_0(_id, w_69, t);
      }
    return(t);
  }
  t = w_69(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm b_18 (ATerm t)
  {
    ATerm x_69 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm m_61 = ATgetFirst((ATermList) t);
        x_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = x_69;
    return(t);
  }
  t = at_last_1_0(b_18, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_70 = ATgetFirst((ATermList) t);
      c_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_70;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm n_61 = t;
      int o_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_70;
          ;
          LocalPopChoice(o_61);
        }
      else
        {
          t = n_61;
          t = c_70;
          t = last_0_0(t);
        }
    }
  else
    {
      t = c_70;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm r_121 (ATerm), ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
  h_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_70 = ATgetFirst((ATermList) t);
      {
        ATerm p_61 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_70;
  t = r_121(t);
  t = h_70;
  t = last_0_0(t);
  t = r_121(t);
  t = h_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_61 = ATgetFirst((ATermList) t);
      j_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_70;
  t = init_0_0(t);
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm c_18 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  t = unquote_chars_1_0(c_18, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL;
  k_70 = t;
  t = SSL_explode_string(k_70);
  t = c_122(t);
  l_70 = t;
  t = SSL_implode_string(l_70);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm c_90 (ATerm v_74, ATerm w_74, ATerm t)
  {
    t = v_74;
    {
      ATerm r_61 = t;
      if((PushChoice() == 0))
        {
          ATerm d_18 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, d_18, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_61;
        }
      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_23, v_74);
    }
    return(t);
  }
  ATerm d_90 (ATerm a_75, ATerm b_75, ATerm t)
  {
    t = a_75;
    {
      ATerm s_61 = t;
      if((PushChoice() == 0))
        {
          ATerm e_18 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, e_18, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_61;
        }
      t = (ATerm) ATmakeAppl(sym_Call_2, term_v_61, a_75);
    }
    return(t);
  }
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,p_75 = NULL,r_75 = NULL,s_75 = NULL;
  p_75 = t;
  if(match_cons(t, sym_Anno_2))
    {
      r_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
      {
        ATerm x_75 = NULL;
        t = s_75;
        {
          ATerm f_18 (ATerm t)
          {
            t = term_f_48;
            return(t);
          }
          ATerm g_18 (ATerm t)
          {
            ATerm z_75 = NULL,r_14 = NULL,v_14 = NULL;
            z_75 = t;
            t = SSL_explode_term(z_75);
            if(match_cons(t, sym__2))
              {
                ATerm w_61 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_61) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm x_61 = ATgetArgument(t, 1);
                  if(((ATgetType(x_61) == AT_LIST) && !(ATisEmpty(x_61))))
                    {
                      r_14 = ATgetFirst((ATermList) x_61);
                      {
                        ATerm y_61 = (ATerm) ATgetNext((ATermList) x_61);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(z_75);
            if(match_cons(t, sym__2))
              {
                ATerm z_61 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_61) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_62 = ATgetArgument(t, 1);
                  if(((ATgetType(d_62) == AT_LIST) && !(ATisEmpty(d_62))))
                    {
                      ATerm e_62 = ATgetFirst((ATermList) d_62);
                      ATerm i_62 = (ATerm) ATgetNext((ATermList) d_62);
                      if(((ATgetType(i_62) == AT_LIST) && !(ATisEmpty(i_62))))
                        {
                          v_14 = ATgetFirst((ATermList) i_62);
                          {
                            ATerm j_62 = (ATerm) ATgetNext((ATermList) i_62);
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
            t = (ATerm) ATmakeAppl(sym_Op_2, term_k_62, (ATerm) ATinsert(ATinsert(ATempty, v_14), r_14));
            return(t);
          }
          t = foldr_2_0(f_18, g_18, t);
          x_75 = t;
          t = (ATerm) ATmakeAppl(sym_Anno_2, r_75, x_75);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          r_75 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, r_75, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              r_75 = ATgetArgument(t, 0);
              {
                ATerm z_14 = NULL;
                t = r_75;
                {
                  ATerm l_62 = t;
                  int m_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_n_62;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_o_62;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_q_62;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_b_63;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_c_63;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(m_62);
                    }
                  else
                    {
                      t = l_62;
                      {
                        ATerm e_15 = NULL;
                        t = SSL_explode_string(r_75);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_63 = ATgetFirst((ATermList) t);
                            if(((ATgetType(e_63) != AT_INT) || (ATgetInt((ATermInt) e_63) != 39)))
                              _fail(t);
                            {
                              ATerm f_63 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(f_63) == AT_LIST) && !(ATisEmpty(f_63))))
                                {
                                  e_15 = ATgetFirst((ATermList) f_63);
                                  {
                                    ATerm g_63 = (ATerm) ATgetNext((ATermList) f_63);
                                    if(((ATgetType(g_63) == AT_LIST) && !(ATisEmpty(g_63))))
                                      {
                                        ATerm h_63 = ATgetFirst((ATermList) g_63);
                                        if(((ATgetType(h_63) != AT_INT) || (ATgetInt((ATermInt) h_63) != 39)))
                                          _fail(t);
                                        {
                                          ATerm i_63 = (ATerm) ATgetNext((ATermList) g_63);
                                          if(((ATgetType(i_63) != AT_LIST) || !(ATisEmpty(i_63))))
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
                        t = e_15;
                      }
                    }
                  z_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, z_14);
                }
              }
            }
          else
            {
              ATerm j_63 = t;
              int l_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      r_75 = ATgetArgument(t, 0);
                      {
                        ATerm m_63 = ATgetArgument(t, 1);
                      }
                      h_75 = ATgetArgument(t, 2);
                      d_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_63);
                  t = (ATerm) ATmakeAppl(sym_Con_3, r_75, h_75, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_75), (ATerm) ATempty));
                }
              else
                {
                  t = j_63;
                  {
                    ATerm p_63 = t;
                    int q_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            r_75 = ATgetArgument(t, 0);
                            {
                              ATerm s_63 = ATgetArgument(t, 1);
                            }
                            h_75 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_63);
                        t = (ATerm) ATmakeAppl(sym_Con_3, r_75, h_75, term_c_64);
                      }
                    else
                      {
                        t = p_63;
                        if(match_cons(t, sym_Con1_2))
                          {
                            r_75 = ATgetArgument(t, 0);
                            s_75 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, r_75, s_75, term_c_64);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                r_75 = ATgetArgument(t, 0);
                                s_75 = ATgetArgument(t, 1);
                                t = r_75;
                                {
                                  ATerm h_18 (ATerm t)
                                  {
                                    t = s_75;
                                    return(t);
                                  }
                                  ATerm i_18 (ATerm t)
                                  {
                                    ATerm s_76 = NULL,t_76 = NULL;
                                    if(match_cons(t, sym__2))
                                      {
                                        s_76 = ATgetArgument(t, 0);
                                        t_76 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_k_62, (ATerm) ATinsert(ATinsert(ATempty, t_76), s_76));
                                    return(t);
                                  }
                                  t = foldr_2_0(h_18, i_18, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    r_75 = ATgetArgument(t, 0);
                                    t = r_75;
                                    {
                                      ATerm j_18 (ATerm t)
                                      {
                                        t = term_f_48;
                                        return(t);
                                      }
                                      ATerm k_18 (ATerm t)
                                      {
                                        ATerm v_76 = NULL,w_76 = NULL;
                                        if(match_cons(t, sym__2))
                                          {
                                            v_76 = ATgetArgument(t, 0);
                                            w_76 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_k_62, (ATerm) ATinsert(ATinsert(ATempty, w_76), v_76));
                                        return(t);
                                      }
                                      t = foldr_2_0(j_18, k_18, t);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        r_75 = ATgetArgument(t, 0);
                                        t = r_75;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            e_75 = ATgetFirst((ATermList) t);
                                            f_75 = (ATerm) ATgetNext((ATermList) t);
                                            t = f_75;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm d_64 = t;
                                                int k_64 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = c_90(r_75, p_75, t);
                                                    ;
                                                    LocalPopChoice(k_64);
                                                  }
                                                else
                                                  {
                                                    t = d_64;
                                                    t = e_75;
                                                  }
                                              }
                                            else
                                              {
                                                t = c_90(r_75, p_75, t);
                                              }
                                          }
                                        else
                                          {
                                            t = c_90(r_75, p_75, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            r_75 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, r_75));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                r_75 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, r_75));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    r_75 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, r_75));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        r_75 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, r_75));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            r_75 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_75), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                r_75 = ATgetArgument(t, 0);
                                                                s_75 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_75), s_75);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    r_75 = ATgetArgument(t, 0);
                                                                    s_75 = ATgetArgument(t, 1);
                                                                    t = r_75;
                                                                    {
                                                                      ATerm l_18 (ATerm t)
                                                                      {
                                                                        t = s_75;
                                                                        return(t);
                                                                      }
                                                                      ATerm m_18 (ATerm t)
                                                                      {
                                                                        ATerm i_79 = NULL,n_79 = NULL;
                                                                        if(match_cons(t, sym__2))
                                                                          {
                                                                            i_79 = ATgetArgument(t, 0);
                                                                            n_79 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_l_64, (ATerm) ATinsert(ATinsert(ATempty, n_79), i_79));
                                                                        return(t);
                                                                      }
                                                                      t = foldr_2_0(l_18, m_18, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        r_75 = ATgetArgument(t, 0);
                                                                        t = r_75;
                                                                        {
                                                                          ATerm n_18 (ATerm t)
                                                                          {
                                                                            t = term_r_64;
                                                                            return(t);
                                                                          }
                                                                          ATerm o_18 (ATerm t)
                                                                          {
                                                                            ATerm v_79 = NULL,z_79 = NULL;
                                                                            if(match_cons(t, sym__2))
                                                                              {
                                                                                v_79 = ATgetArgument(t, 0);
                                                                                z_79 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_l_64, (ATerm) ATinsert(ATinsert(ATempty, z_79), v_79));
                                                                            return(t);
                                                                          }
                                                                          t = foldr_2_0(n_18, o_18, t);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            r_75 = ATgetArgument(t, 0);
                                                                            s_75 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_v_61, (ATerm) ATinsert(CheckATermList(s_75), r_75));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                r_75 = ATgetArgument(t, 0);
                                                                                t = r_75;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    e_75 = ATgetFirst((ATermList) t);
                                                                                    f_75 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = f_75;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm w_64 = t;
                                                                                        int x_64 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = d_90(r_75, p_75, t);
                                                                                            ;
                                                                                            LocalPopChoice(x_64);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = w_64;
                                                                                            t = e_75;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = d_90(r_75, p_75, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_90(r_75, p_75, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_e_65;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        r_75 = ATgetArgument(t, 0);
                                                                                        s_75 = ATgetArgument(t, 1);
                                                                                        t = s_75;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            g_75 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_37, (ATerm) ATinsert(ATinsert(ATempty, g_75), r_75));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            r_75 = ATgetArgument(t, 0);
                                                                                            t = r_75;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                r_75 = ATgetArgument(t, 0);
                                                                                                s_75 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, r_75, s_75, term_i_25);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    r_75 = ATgetArgument(t, 0);
                                                                                                    s_75 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, r_75, s_75, term_i_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        r_75 = ATgetArgument(t, 0);
                                                                                                        s_75 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, r_75, (ATerm)ATempty, s_75);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            r_75 = ATgetArgument(t, 0);
                                                                                                            s_75 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, s_75, r_75);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                r_75 = ATgetArgument(t, 0);
                                                                                                                s_75 = ATgetArgument(t, 1);
                                                                                                                {
                                                                                                                  ATerm k_81 = NULL;
                                                                                                                  t = r_75;
                                                                                                                  t = try_1_0(un_double_quote_0_0, t);
                                                                                                                  k_81 = t;
                                                                                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_81, (ATerm)ATempty, s_75);
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    r_75 = ATgetArgument(t, 0);
                                                                                                                    {
                                                                                                                      ATerm m_81 = NULL;
                                                                                                                      t = r_75;
                                                                                                                      t = try_1_0(un_double_quote_0_0, t);
                                                                                                                      m_81 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_PrimT_3, m_81, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                    }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        r_75 = ATgetArgument(t, 0);
                                                                                                                        s_75 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, r_75, s_75, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            r_75 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, r_75, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                r_75 = ATgetArgument(t, 0);
                                                                                                                                s_75 = ATgetArgument(t, 1);
                                                                                                                                h_75 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_75, s_75, (ATerm)ATempty, h_75);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    r_75 = ATgetArgument(t, 0);
                                                                                                                                    s_75 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, r_75, (ATerm)ATempty, (ATerm)ATempty, s_75);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        r_75 = ATgetArgument(t, 0);
                                                                                                                                        s_75 = ATgetArgument(t, 1);
                                                                                                                                        h_75 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_75, s_75, (ATerm)ATempty, h_75);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            r_75 = ATgetArgument(t, 0);
                                                                                                                                            s_75 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_75, (ATerm)ATempty, (ATerm)ATempty, s_75);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                r_75 = ATgetArgument(t, 0);
                                                                                                                                                s_75 = ATgetArgument(t, 1);
                                                                                                                                                h_75 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, r_75, s_75, (ATerm)ATempty, h_75);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    r_75 = ATgetArgument(t, 0);
                                                                                                                                                    s_75 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, r_75, (ATerm)ATempty, (ATerm)ATempty, s_75);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm f_65 = ATgetArgument(t, 0);
                                                                                                                                                        s_75 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, s_75);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm g_90 (ATerm t)
  {
    ATerm p_18 (ATerm t)
    {
      t = z_105(t);
      t = g_90(t);
      return(t);
    }
    t = try_1_0(p_18, t);
    return(t);
  }
  t = g_90(t);
  return(t);
}
ATerm topdown_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  t = x_106(t);
  {
    ATerm q_18 (ATerm t)
    {
      t = topdown_1_0(x_106, t);
      return(t);
    }
    t = SRTS_all(q_18, t);
  }
  return(t);
}
ATerm pre_desugar_0_0 (ATerm t)
{
  ATerm r_18 (ATerm t)
  {
    t = repeat_1_0(Desugar_0_0, t);
    t = try_1_0(DesugarOnce_0_0, t);
    return(t);
  }
  t = topdown_1_0(r_18, t);
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm h_90 = NULL;
  ATerm t_18 (ATerm t)
  {
    t = term_o_65;
    return(t);
  }
  t = timing_1_0(t_18, t);
  t = pre_desugar_0_0(t);
  {
    ATerm u_18 (ATerm t)
    {
      t = term_p_65;
      return(t);
    }
    t = timing_1_0(u_18, t);
    t = normalize_spec_0_0(t);
    {
      ATerm w_18 (ATerm t)
      {
        t = term_u_65;
        return(t);
      }
      t = timing_1_0(w_18, t);
      h_90 = t;
      t = spec_use_def_0_0(t);
      t = h_90;
      {
        ATerm z_18 (ATerm t)
        {
          t = term_v_65;
          return(t);
        }
        t = timing_1_0(z_18, t);
        t = ExpandOverlays_0_0(t);
        {
          ATerm b_19 (ATerm t)
          {
            t = term_w_65;
            return(t);
          }
          t = timing_1_0(b_19, t);
          t = CheckConstructors_0_0(t);
          {
            ATerm c_19 (ATerm t)
            {
              t = term_x_65;
              return(t);
            }
            t = timing_1_0(c_19, t);
            t = RulesToSdefs_0_0(t);
            {
              ATerm h_19 (ATerm t)
              {
                t = term_y_65;
                return(t);
              }
              t = timing_1_0(h_19, t);
              t = DesugarListMatching_0_0(t);
              {
                ATerm i_19 (ATerm t)
                {
                  t = term_f_66;
                  return(t);
                }
                t = timing_1_0(i_19, t);
                t = strename_0_0(t);
                {
                  ATerm l_19 (ATerm t)
                  {
                    t = term_g_66;
                    return(t);
                  }
                  t = timing_1_0(l_19, t);
                  {
                    ATerm m_19 (ATerm t)
                    {
                      ATerm n_19 (ATerm t)
                      {
                        ATerm p_19 (ATerm t)
                        {
                          t = Strategies_1_0(desugar_spec_0_0, t);
                          return(t);
                        }
                        ATerm q_19 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        t = Cons_2_0(p_19, q_19, t);
                        return(t);
                      }
                      t = Cons_2_0(_id, n_19, t);
                      return(t);
                    }
                    t = Specification_1_0(m_19, t);
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
ATerm _2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL;
  n_90 = t;
  if(match_cons(t, sym__2))
    {
      j_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_90);
  i_90 = t;
  t = j_90;
  t = e_90(t);
  l_90 = t;
  t = k_90;
  t = f_90(t);
  m_90 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_90, m_90), i_90);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL;
  q_90 = t;
  t = term_u_30;
  t = whoami_0_0(t);
  r_90 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), r_90), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = q_90;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_66 = t;
  int l_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_66);
    }
  else
    {
      t = j_66;
      {
        ATerm u_90 = NULL,v_90 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_90 = ATgetFirst((ATermList) t);
            v_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_90;
        {
          ATerm v_19 (ATerm t)
          {
            t = v_90;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_19, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL;
  z_90 = t;
  t = SSL_explode_term(z_90);
  if(match_cons(t, sym__2))
    {
      ATerm m_66 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_66) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_91;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_113 (ATerm), ATerm t)
{
  ATerm b_91 (ATerm t)
  {
    ATerm n_66 = t;
    int o_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_91, t);
        ;
        LocalPopChoice(o_66);
      }
    else
      {
        t = n_66;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_113(t);
      }
    return(t);
  }
  t = b_91(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL;
  if(match_cons(t, sym__2))
    {
      d_91 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_91;
  {
    ATerm w_19 (ATerm t)
    {
      t = c_91;
      return(t);
    }
    t = at_end_1_0(w_19, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_66 = t;
  int u_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(u_66);
    }
  else
    {
      t = p_66;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_91 = NULL;
  ATerm y_19 (ATerm t)
  {
    ATerm f_91 = NULL;
    f_91 = t;
    t = SSL_explode_string(f_91);
    return(t);
  }
  ATerm z_19 (ATerm t)
  {
    ATerm g_91 = NULL;
    g_91 = t;
    t = SSL_explode_string(g_91);
    return(t);
  }
  t = _2_0(y_19, z_19, t);
  t = conc_0_0(t);
  e_91 = t;
  t = SSL_implode_string(e_91);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_66 = t;
  int w_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_91 = NULL;
      m_91 = t;
      t = SSL_is_string(m_91);
      ;
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
            ATerm a_20 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(a_20, t);
            ;
            LocalPopChoice(y_66);
          }
        else
          {
            t = x_66;
            {
              ATerm v_91 = NULL,x_91 = NULL,y_91 = NULL;
              v_91 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_91 = ATgetArgument(t, 0);
                  t = x_91;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_91 = ATgetArgument(t, 0);
                      t = x_91;
                      {
                        ATerm z_66 = t;
                        int b_67 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_67);
                          }
                        else
                          {
                            t = z_66;
                            {
                              ATerm b_20 (ATerm t)
                              {
                                t = term_c_67;
                                return(t);
                              }
                              t = debug_1_0(b_20, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_92 = NULL,d_92 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_91 = ATgetArgument(t, 0);
                          y_91 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_91;
                      t = eval_config_0_0(t);
                      c_92 = t;
                      t = y_91;
                      t = eval_config_0_0(t);
                      d_92 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_92, d_92);
                      t = conc_strings_0_0(t);
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
  ATerm i_92 = NULL;
  i_92 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_92);
  {
    ATerm c_20 (ATerm t)
    {
      ATerm j_92 = NULL;
      t = eval_config_0_0(t);
      j_92 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), i_92, j_92);
      t = j_92;
      return(t);
    }
    t = try_1_0(c_20, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_126 (ATerm), ATerm t)
{
  ATerm d_20 (ATerm t)
  {
    ATerm k_92 = NULL,l_92 = NULL;
    k_92 = t;
    t = term_c_26;
    t = get_config_0_0(t);
    l_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_92, term_j_67);
    t = geq_0_0(t);
    t = k_92;
    t = i_126(t);
    return(t);
  }
  t = try_1_0(d_20, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm e_20 (ATerm t)
  {
    ATerm m_92 = NULL,n_92 = NULL,q_92 = NULL,r_92 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_67 = ATgetArgument(t, 0);
        if(match_cons(k_67, sym_Stream_1))
          {
            m_92 = ATgetArgument(k_67, 0);
          }
        else
          _fail(t);
        n_92 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(m_92, n_92);
    q_92 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), q_92);
    r_92 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_92);
    return(t);
  }
  t = WriteToFile_1_0(e_20, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm e_125 (ATerm), ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL;
  if(match_cons(t, sym__2))
    {
      s_92 = ATgetArgument(t, 0);
      t_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_92, term_l_67);
  t = open_stream_0_0(t);
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_92, t_92);
  t = e_125(t);
  t = fclose_0_0(t);
  t = t_92;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm f_20 (ATerm t)
  {
    ATerm x_92 = NULL,y_92 = NULL,b_93 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_67 = ATgetArgument(t, 0);
        if(match_cons(m_67, sym_Stream_1))
          {
            x_92 = ATgetArgument(m_67, 0);
          }
        else
          _fail(t);
        y_92 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(x_92, y_92);
    b_93 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, b_93);
    return(t);
  }
  t = WriteToFile_1_0(f_20, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_93 = NULL,i_93 = NULL;
  c_93 = t;
  {
    ATerm g_20 (ATerm t)
    {
      ATerm n_67 = t;
      int o_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_20 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                i_93 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(i_20, t);
          ;
          LocalPopChoice(o_67);
        }
      else
        {
          t = n_67;
          t = term_t_67;
          i_93 = t;
        }
      return(t);
    }
    t = _2_0(g_20, _id, t);
    t = c_93;
    {
      ATerm l_20 (ATerm t)
      {
        ATerm m_20 (ATerm t)
        {
          t = not_null(i_93);
          return(t);
        }
        t = split_2_0(m_20, _id, t);
        return(t);
      }
      t = _2_0(_id, l_20, t);
      {
        ATerm u_67 = t;
        int z_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 (ATerm t)
            {
              ATerm o_20 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(o_20, t);
              return(t);
            }
            t = _2_0(n_20, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(z_67);
          }
        else
          {
            t = u_67;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm g_128 (ATerm), ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL;
  j_93 = t;
  t = dtime_0_0(t);
  t = j_93;
  t = g_128(t);
  k_93 = t;
  t = dtime_0_0(t);
  l_93 = t;
  t = k_93;
  if(match_cons(t, sym__2))
    {
      m_93 = ATgetArgument(t, 0);
      n_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_93), (ATerm) ATmakeAppl(sym_Runtime_1, l_93)), n_93);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_94 (ATerm y_93, ATerm t)
  {
    t = SSL_fclose(y_93);
    return(t);
  }
  ATerm b_94 = NULL,c_94 = NULL;
  c_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_94 = ATgetArgument(t, 0);
      {
        ATerm a_68 = t;
        int b_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_94);
            ;
            LocalPopChoice(b_68);
          }
        else
          {
            t = a_68;
            t = e_94(c_94, t);
          }
      }
    }
  else
    {
      t = e_94(c_94, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_124 (ATerm), ATerm t)
{
  ATerm f_94 = NULL,j_94 = NULL;
  f_94 = t;
  t = q_124(t);
  j_94 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_94), j_94));
  t = f_94;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_94 = NULL;
  t = SSL_stdin_stream();
  k_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_94);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_94 = NULL;
  t = SSL_stdout_stream();
  l_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_94);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_94 = NULL;
  t = SSL_stderr_stream();
  m_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_94);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm o_94 = NULL;
  o_94 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_94;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_94;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_94;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_68 = ATgetArgument(t, 0);
      ATerm d_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_68 = t;
    int f_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_16 = NULL,f_16 = NULL;
        a_16 = t;
        t = SSL_explode_term(a_16);
        if(match_cons(t, sym__2))
          {
            ATerm g_68 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_68) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_68 = ATgetArgument(t, 1);
              if(((ATgetType(h_68) == AT_LIST) && !(ATisEmpty(h_68))))
                {
                  f_16 = ATgetFirst((ATermList) h_68);
                  {
                    ATerm i_68 = (ATerm) ATgetNext((ATermList) h_68);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_16;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(f_68);
      }
    else
      {
        t = e_68;
        {
          ATerm j_68 = t;
          int k_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
              ATerm q_20 (ATerm t)
              {
                ATerm b_95 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_95;
                return(t);
              }
              t = _2_0(q_20, _id, t);
              if(match_cons(t, sym__2))
                {
                  r_94 = ATgetArgument(t, 0);
                  s_94 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(r_94, s_94);
              t_94 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_94);
              ;
              LocalPopChoice(k_68);
            }
          else
            {
              t = j_68;
              {
                ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
                ATerm r_20 (ATerm t)
                {
                  ATerm f_95 = NULL;
                  f_95 = t;
                  t = SSL_is_string(f_95);
                  return(t);
                }
                t = _2_0(r_20, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_95 = ATgetArgument(t, 0);
                    d_95 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_95, d_95);
                e_95 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_95);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL;
  ATerm l_68 = t;
  int m_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_95 = NULL;
      k_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_95, term_n_68);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_68);
    }
  else
    {
      t = l_68;
      {
        ATerm s_20 (ATerm t)
        {
          t = term_o_68;
          return(t);
        }
        t = debug_1_0(s_20, t);
        _fail(t);
      }
    }
  h_95 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_95);
  i_95 = t;
  t = h_95;
  t = fclose_0_0(t);
  t = i_95;
  return(t);
}
ATerm split_2_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm m_95 = NULL,p_95 = NULL,q_95 = NULL;
  m_95 = t;
  t = f_120(t);
  p_95 = t;
  t = m_95;
  t = g_120(t);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_95, q_95);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL;
  r_95 = t;
  {
    ATerm p_68 = t;
    int q_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              s_95 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(t_20, t);
        ;
        LocalPopChoice(q_68);
      }
    else
      {
        t = p_68;
        t = term_r_68;
        s_95 = t;
      }
    t = r_95;
    {
      ATerm u_20 (ATerm t)
      {
        t = not_null(s_95);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, u_20, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm v_20 (ATerm t)
  {
    ATerm u_95 = NULL;
    u_95 = t;
    if(match_string(t, "-k"))
      {
        t = u_95;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = u_95;
      }
    return(t);
  }
  ATerm w_20 (ATerm t)
  {
    ATerm v_95 = NULL,w_95 = NULL;
    v_95 = t;
    t = SSL_string_to_int(v_95);
    w_95 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), w_95);
    t = v_95;
    return(t);
  }
  ATerm x_20 (ATerm t)
  {
    t = term_s_68;
    return(t);
  }
  t = ArgOption_3_0(v_20, w_20, x_20, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_20 (ATerm t)
      {
        ATerm b_96 = NULL;
        b_96 = t;
        if(match_string(t, "-S"))
          {
            t = b_96;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = b_96;
          }
        return(t);
      }
      ATerm z_20 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_v_68;
        return(t);
      }
      ATerm b_21 (ATerm t)
      {
        t = term_w_68;
        return(t);
      }
      t = Option_3_0(y_20, z_20, b_21, t);
      ;
      LocalPopChoice(u_68);
    }
  else
    {
      t = t_68;
      {
        ATerm x_68 = t;
        int y_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm f_21 (ATerm t)
            {
              ATerm c_96 = NULL,d_96 = NULL;
              c_96 = t;
              t = SSL_string_to_int(c_96);
              d_96 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_96);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, c_96);
              return(t);
            }
            ATerm g_21 (ATerm t)
            {
              t = term_z_68;
              return(t);
            }
            t = ArgOption_3_0(d_21, f_21, g_21, t);
            ;
            LocalPopChoice(y_68);
          }
        else
          {
            t = x_68;
            {
              ATerm h_21 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm i_21 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_a_69;
                return(t);
              }
              ATerm k_21 (ATerm t)
              {
                t = term_b_69;
                return(t);
              }
              t = Option_3_0(h_21, i_21, k_21, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_69 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_69);
    }
  else
    {
      t = c_69;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm l_21 (ATerm t)
  {
    ATerm f_96 = NULL;
    f_96 = t;
    if(match_string(t, "-o"))
      {
        t = f_96;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = f_96;
      }
    return(t);
  }
  ATerm m_21 (ATerm t)
  {
    ATerm i_96 = NULL;
    i_96 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_96);
    t = (ATerm) ATmakeAppl(sym_Output_1, i_96);
    return(t);
  }
  ATerm n_21 (ATerm t)
  {
    t = term_e_69;
    return(t);
  }
  t = ArgOption_3_0(l_21, m_21, n_21, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_69 = t;
  int g_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_69);
    }
  else
    {
      t = f_69;
      {
        ATerm o_21 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_21 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_h_69;
          return(t);
        }
        ATerm q_21 (ATerm t)
        {
          t = term_i_69;
          return(t);
        }
        t = Option_3_0(o_21, p_21, q_21, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL,r_96 = NULL,s_96 = NULL,y_96 = NULL;
  n_96 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_96;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm c_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_96 = ATgetFirst((ATermList) t);
          r_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_96;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_96 = ATgetFirst((ATermList) t);
          y_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_96;
      t = i_0(t);
      t = s_96;
      t = k_0(t);
      c_97 = t;
      t = (ATerm) ATinsert(CheckATermList(y_96), c_97);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm r_21 (ATerm t)
  {
    ATerm e_97 = NULL;
    e_97 = t;
    if(match_string(t, "-i"))
      {
        t = e_97;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_97;
      }
    return(t);
  }
  ATerm s_21 (ATerm t)
  {
    ATerm i_97 = NULL;
    i_97 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), i_97);
    t = (ATerm) ATmakeAppl(sym_Input_1, i_97);
    return(t);
  }
  ATerm t_21 (ATerm t)
  {
    t = term_j_69;
    return(t);
  }
  t = ArgOption_3_0(r_21, s_21, t_21, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm k_69 = t;
  int l_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_69);
    }
  else
    {
      t = k_69;
      {
        ATerm m_69 = t;
        int n_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(n_69);
          }
        else
          {
            t = m_69;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_97 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_30;
  t = whoami_0_0(t);
  j_97 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), j_97));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_69;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  ATerm t_69 = t;
  int u_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_118(t);
      ;
      LocalPopChoice(u_69);
    }
  else
    {
      t = t_69;
      {
        ATerm m_97 = NULL,n_97 = NULL,q_97 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_97 = ATgetFirst((ATermList) t);
            n_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_97;
        t = foldr_2_0(q_118, r_118, t);
        q_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_97, q_97);
        t = r_118(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL;
  r_97 = t;
  t = SSL_explode_term(r_97);
  if(match_cons(t, sym__2))
    {
      ATerm v_69 = ATgetArgument(t, 0);
      s_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_97;
  t = foldr_2_0(j_122, k_122, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_97 = NULL;
  t = times_0_0(t);
  {
    ATerm v_21 (ATerm t)
    {
      t = term_g_31;
      return(t);
    }
    ATerm w_21 (ATerm t)
    {
      ATerm u_97 = NULL,v_97 = NULL;
      if(match_cons(t, sym__2))
        {
          u_97 = ATgetArgument(t, 0);
          v_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_69 = t;
        int z_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(u_97, v_97);
            ;
            LocalPopChoice(z_69);
          }
        else
          {
            t = y_69;
            t = SSL_addr(u_97, v_97);
          }
      }
      return(t);
    }
    t = crush_2_0(v_21, w_21, t);
    t_97 = t;
    t = SSL_TicksToSeconds(t_97);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL,g_98 = NULL;
  e_98 = t;
  if(match_cons(t, sym__2))
    {
      f_98 = ATgetArgument(t, 0);
      g_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_70 = t;
    int d_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_98;
        if((f_98 != t))
          {
            _fail(t);
          }
        t = e_98;
        ;
        LocalPopChoice(d_70);
      }
    else
      {
        t = a_70;
        t = e_98;
        {
          ATerm e_70 = t;
          int f_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_98, g_98);
              ;
              LocalPopChoice(f_70);
            }
          else
            {
              t = e_70;
              t = SSL_gtr(f_98, g_98);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_98, g_98);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm y_21 (ATerm t)
  {
    ATerm m_98 = NULL,n_98 = NULL;
    m_98 = t;
    t = term_c_26;
    t = get_config_0_0(t);
    n_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_98, term_j_34);
    t = geq_0_0(t);
    t = m_98;
    t = h_126(t);
    return(t);
  }
  t = try_1_0(y_21, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm z_21 (ATerm t)
  {
    ATerm w_98 = NULL,x_98 = NULL;
    t = run_time_0_0(t);
    w_98 = t;
    t = term_u_30;
    t = whoami_0_0(t);
    x_98 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_98), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_98));
    t = (ATerm) ATmakeAppl(sym__2, term_g_70, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_70), w_98), term_m_70), x_98));
    return(t);
  }
  t = if_verbose1_1_0(z_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm e_129 (ATerm), ATerm t)
{
  ATerm o_70 = t;
  int p_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_70;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_70);
    }
  else
    {
      t = o_70;
      {
        ATerm d_22 (ATerm t)
        {
          ATerm r_70 = t;
          int s_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(s_70);
            }
          else
            {
              t = r_70;
              {
                ATerm t_70 = t;
                int u_70 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(u_70);
                  }
                else
                  {
                    t = t_70;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(d_22, t);
      }
    }
  t = e_129(t);
  return(t);
}
ATerm map_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm z_98 (ATerm t)
  {
    ATerm v_70 = t;
    int w_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_70);
      }
    else
      {
        t = v_70;
        t = Cons_2_0(o_112, z_98, t);
      }
    return(t);
  }
  t = z_98(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_99 = ATgetFirst((ATermList) t);
      c_99 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_99 = NULL,h_99 = NULL;
        t = c_99;
        t = g_0(t);
        g_99 = t;
        t = b_99;
        t = e_0(t);
        h_99 = t;
        t = c_99;
        {
          ATerm f_22 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_99), h_99);
            return(t);
          }
          t = reverse_acc_2_0(e_0, f_22, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_30;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm g_22 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, g_22, t);
  return(t);
}
ATerm Program_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
  l_99 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_99);
  i_99 = t;
  t = j_99;
  t = f_104(t);
  k_99 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_99), i_99);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_70 = t;
  int y_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_69;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_70);
    }
  else
    {
      t = x_70;
      {
        ATerm h_22 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(h_22, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_z_70;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm i_22 (ATerm t)
    {
      ATerm o_99 = NULL;
      o_99 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, o_99), term_a_71);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(i_22, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL;
  s_99 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_99);
  p_99 = t;
  t = q_99;
  t = g_104(t);
  r_99 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_99), p_99);
  return(t);
}
ATerm fetch_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm v_99 (ATerm t)
  {
    ATerm b_71 = t;
    int c_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_112, _id, t);
        ;
        LocalPopChoice(c_71);
      }
    else
      {
        t = b_71;
        t = Cons_2_0(_id, v_99, t);
      }
    return(t);
  }
  t = v_99(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  t = fetch_1_0(e_130, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL;
  x_99 = t;
  {
    ATerm d_71 = t;
    int e_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_99;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_71 = ATgetFirst((ATermList) t);
                ATerm g_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_99;
          }
        ;
        LocalPopChoice(e_71);
      }
    else
      {
        t = d_71;
        t = (ATerm) ATinsert(ATempty, x_99);
      }
    y_99 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_99);
    t = x_99;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_69;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm h_71 = t;
  int i_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_105(t);
      ;
      LocalPopChoice(i_71);
    }
  else
    {
      t = h_71;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_71 = t;
  int k_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_22 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_n_71;
        return(t);
      }
      ATerm m_22 (ATerm t)
      {
        t = term_o_71;
        return(t);
      }
      t = Option_3_0(j_22, k_22, m_22, t);
      ;
      LocalPopChoice(k_71);
    }
  else
    {
      t = j_71;
      {
        ATerm n_22 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm o_22 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_71;
          return(t);
        }
        ATerm r_22 (ATerm t)
        {
          t = term_q_71;
          return(t);
        }
        t = Option_3_0(n_22, o_22, r_22, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL;
  if(match_cons(t, sym__3))
    {
      e_100 = ATgetArgument(t, 0);
      f_100 = ATgetArgument(t, 1);
      g_100 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_100, f_100);
  {
    ATerm r_71 = t;
    int s_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_71 = ATgetArgument(t, 0);
            ATerm u_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_100, f_100);
        ;
        LocalPopChoice(s_71);
      }
    else
      {
        t = r_71;
        t = (ATerm) ATempty;
      }
    h_100 = t;
    t = SSL_table_put(e_100, f_100, (ATerm) ATinsert(CheckATermList(h_100), g_100));
    t = (ATerm) ATmakeAppl(sym__3, e_100, f_100, g_100);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm m_100 = NULL;
  t = term_u_30;
  t = j_131(t);
  m_100 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_71, term_w_71, m_100);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
  o_100 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_100;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm t_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_100 = ATgetFirst((ATermList) t);
          q_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_100;
      t = a_0(t);
      t = term_u_30;
      t = c_0(t);
      t_100 = t;
      t = (ATerm) ATinsert(CheckATermList(q_100), t_100);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm s_22 (ATerm t)
  {
    ATerm v_100 = NULL;
    v_100 = t;
    if(match_string(t, "--help"))
      {
        t = v_100;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = v_100;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = v_100;
          }
      }
    return(t);
  }
  ATerm t_22 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_x_71;
    return(t);
  }
  ATerm u_22 (ATerm t)
  {
    t = term_y_71;
    return(t);
  }
  t = Option_3_0(s_22, t_22, u_22, t);
  return(t);
}
ATerm Cons_2_0 (ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL;
  b_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_100 = ATgetFirst((ATermList) t);
      y_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_101);
  w_100 = t;
  t = x_100;
  t = n_91(t);
  z_100 = t;
  t = y_100;
  t = o_91(t);
  a_101 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_101), z_100), w_100);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_131 (ATerm), ATerm t)
{
  ATerm h_101 = NULL;
  h_101 = t;
  {
    ATerm x_22 (ATerm t)
    {
      t = term_z_71;
      t = h_131(t);
      return(t);
    }
    t = try_1_0(x_22, t);
    t = h_101;
    {
      ATerm y_22 (ATerm t)
      {
        ATerm i_101 = NULL;
        i_101 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_101);
        t = (ATerm) ATmakeAppl(sym_Program_1, i_101);
        return(t);
      }
      ATerm z_22 (ATerm t)
      {
        ATerm a_72 = t;
        int b_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_72 = t;
            int d_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_72);
              }
            else
              {
                t = c_72;
                t = h_131(t);
                t = Cons_2_0(_id, z_22, t);
              }
            ;
            LocalPopChoice(b_72);
          }
        else
          {
            t = a_72;
            {
              ATerm k_101 = NULL,l_101 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_101 = ATgetFirst((ATermList) t);
                  l_101 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_101), (ATerm) ATmakeAppl(sym_Undefined_1, k_101));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_22, z_22, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
  r_101 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = r_101;
  {
    ATerm a_23 (ATerm t)
    {
      ATerm e_72 = t;
      int f_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_131(t);
          ;
          LocalPopChoice(f_72);
        }
      else
        {
          t = e_72;
          {
            ATerm g_72 = t;
            int h_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_72);
              }
            else
              {
                t = g_72;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_23, t);
    {
      ATerm b_23 (ATerm t)
      {
        ATerm i_72 = t;
        int j_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_101 = NULL;
            y_101 = t;
            {
              ATerm k_72 = t;
              int l_72 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_101;
                  {
                    ATerm m_72 = t;
                    int n_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_70;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(n_72);
                      }
                    else
                      {
                        t = m_72;
                        {
                          ATerm c_23 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(c_23, t);
                        }
                      }
                    t = y_101;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(l_72);
                }
              else
                {
                  t = k_72;
                  t = term_m_71;
                  t = get_config_0_0(t);
                  t = y_101;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_72);
          }
        else
          {
            t = i_72;
            {
              ATerm d_23 (ATerm t)
              {
                ATerm e_23 (ATerm t)
                {
                  s_101 = t;
                  return(t);
                }
                t = Undefined_1_0(e_23, t);
                return(t);
              }
              t = option_defined_1_0(d_23, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_101)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_g_70, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_101)), term_o_72));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(b_23, t);
      t_101 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_101;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t)
{
  ATerm v_18 = NULL;
  t = parse_options_1_0(g_129, t);
  v_18 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_18);
  t = v_18;
  t = i_129(t);
  {
    ATerm p_72 = t;
    int q_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_129, t);
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
              t = j_129(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_72);
            }
          else
            {
              t = r_72;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t)
{
  ATerm f_23 (ATerm t)
  {
    ATerm t_72 = t;
    int u_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_128(t);
        ;
        LocalPopChoice(u_72);
      }
    else
      {
        t = t_72;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm h_23 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(v_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_23, x_128, y_128, h_23, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm t)
{
  ATerm i_23 (ATerm t)
  {
    ATerm j_23 (ATerm t)
    {
      ATerm b_102 = NULL,c_102 = NULL;
      b_102 = t;
      t = term_o_69;
      t = get_config_0_0(t);
      c_102 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_102));
      t = b_102;
      return(t);
    }
    t = if_verbose2_1_0(j_23, t);
    return(t);
  }
  t = iowrap_4_0(p_128, q_128, r_128, i_23, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm n_128 (ATerm), ATerm o_128 (ATerm), ATerm t)
{
  t = iowrap_3_0(n_128, o_128, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm k_128 (ATerm), ATerm t)
{
  ATerm k_23 (ATerm t)
  {
    t = _2_0(_id, k_128, t);
    return(t);
  }
  t = iowrap_2_0(k_23, _fail, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  t = iowrap_1_0(frontend_transformation_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = frontend_0_0(t);
  return(t);
}

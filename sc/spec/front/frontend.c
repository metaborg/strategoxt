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
ATerm term_a_72;
ATerm term_l_71;
ATerm term_j_71;
ATerm term_g_71;
ATerm term_f_71;
ATerm term_e_71;
ATerm term_z_70;
ATerm term_o_70;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_d_70;
ATerm term_c_70;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_x_68;
ATerm term_u_68;
ATerm term_t_68;
ATerm term_k_68;
ATerm term_u_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_i_67;
ATerm term_f_67;
ATerm term_z_66;
ATerm term_y_66;
ATerm term_x_66;
ATerm term_u_66;
ATerm term_t_66;
ATerm term_k_66;
ATerm term_j_66;
ATerm term_g_66;
ATerm term_f_66;
ATerm term_s_64;
ATerm term_g_64;
ATerm term_e_64;
ATerm term_d_64;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_c_63;
ATerm term_b_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_v_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_k_62;
ATerm term_h_62;
ATerm term_g_62;
ATerm term_f_62;
ATerm term_a_62;
ATerm term_z_61;
ATerm term_y_61;
ATerm term_k_61;
ATerm term_c_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_q_60;
ATerm term_b_59;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_z_53;
ATerm term_h_53;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_p_52;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_e_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_g_46;
ATerm term_d_46;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_d_42;
ATerm term_p_41;
ATerm term_r_40;
ATerm term_d_40;
ATerm term_q_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_d_39;
ATerm term_q_38;
ATerm term_o_36;
ATerm term_z_35;
ATerm term_v_35;
ATerm term_h_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_k_34;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_k_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_c_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_c_29;
ATerm term_l_28;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_r_22;
ATerm term_p_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
void init_constant_terms (void)
{
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Op_2, term_o_29, (ATerm) ATempty);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_p_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Var_1, term_d_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Var_1, term_g_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Anno_2, term_e_31, term_i_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Var_1, term_n_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Var_1, term_p_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Anno_2, term_o_31, term_t_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_30);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Call_2, term_v_31, (ATerm) ATempty);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_BAM_3, term_x_31, term_e_31, term_o_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Call_2, term_z_31, (ATerm) ATempty);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_BAM_3, term_a_32, term_i_31, term_t_31);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Var_1, term_v_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Keys_1, term_c_30);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_35);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_ConstType_1, term_w_32);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, term_v_35);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_30);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_43);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Op_2, term_n_46, (ATerm) ATempty);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Op_2, term_x_46, (ATerm) ATempty);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_47);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_47);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_47);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_47);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_52);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_21);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_61);
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(sym_Call_2, term_z_61, (ATerm) ATempty);
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_60);
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_46);
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(sym_Call_2, term_g_62, (ATerm) ATempty);
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(sym_Call_2, term_b_59, (ATerm) ATempty);
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("  pre-desugar: ", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_30);
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_68));
  term_t_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(sym__3, term_c_70, term_d_70, term_c_29);
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm t_136 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm desugar_spec_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm i_127 (ATerm), ATerm);
ATerm timing_1_0 (ATerm f_106 (ATerm), ATerm);
ATerm spaste_1_0 (ATerm f_136 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm);
ATerm Let_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm g_136 (ATerm), ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm srename_0_0 (ATerm);
ATerm rename_4_0 (ATerm b_133 (ATerm (ATerm), ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_133 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm ListBuild_0_0 (ATerm);
ATerm ListMatch_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm Con_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm);
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
ATerm manytd_1_0 (ATerm m_110 (ATerm), ATerm);
ATerm check_constructors_p__2_0 (ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm);
ATerm check_constructors_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm GenerateCheckRule_0_0 (ATerm);
ATerm CheckConstructors_0_0 (ATerm);
ATerm exp_overlays2_1_0 (ATerm g_135 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm Overlay_to_Congdef_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm b_136 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm (ATerm), ATerm), ATerm);
ATerm SubsVar_2_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm r_133 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm g_113 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm q_112 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm (ATerm), ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_132 (ATerm (ATerm), ATerm), ATerm s_132 (ATerm), ATerm);
ATerm substitute_5_0 (ATerm u_132 (ATerm), ATerm v_132 (ATerm (ATerm), ATerm), ATerm w_132 (ATerm), ATerm x_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_132 (ATerm (ATerm), ATerm), ATerm);
ATerm tsubstitute_0_0 (ATerm);
ATerm ExpOverlay_1_0 (ATerm h_135 (ATerm), ATerm);
ATerm exp_overlays1_1_0 (ATerm f_135 (ATerm), ATerm);
ATerm ExpandOverlays_0_0 (ATerm);
ATerm overlay_ud_0_0 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm guardedlchoice_1_0 (ATerm p_136 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm);
ATerm lchoice_1_0 (ATerm o_136 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm isect_Bound_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_Bound_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Bound_0_0 (ATerm);
ATerm abstract_choice_2_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm);
ATerm choice_1_0 (ATerm n_136 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm);
ATerm Context_0_0 (ATerm);
ATerm Unbound_0_0 (ATerm);
ATerm Bound_0_0 (ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm Rule_3_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm);
ATerm RootApp_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm App_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm l_124 (ATerm), ATerm);
ATerm Binding_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm Match_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm Build_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm VarScope_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm DefineBound_0_0 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm DefineUnbound_0_0 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm defs_use_def_0_0 (ATerm);
ATerm Signature_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm unzip_1_0 (ATerm e_116 (ATerm), ATerm);
ATerm unzip_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm dummify_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm ContextVar_0_0 (ATerm);
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm split_dynamic_rules_0_0 (ATerm);
ATerm split_under_scope_1_0 (ATerm c_135 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm split_dynamic_rule_1_0 (ATerm a_135 (ATerm), ATerm);
ATerm DeclareContextVars_0_0 (ATerm);
ATerm lift_dynamic_rule_0_0 (ATerm);
ATerm listtd_1_0 (ATerm a_115 (ATerm), ATerm);
ATerm lift_dynamic_rules_0_0 (ATerm);
ATerm DefDynamicRuleScope_0_0 (ATerm);
ATerm define_rule_scope_0_0 (ATerm);
ATerm LiftDynamicRules_0_0 (ATerm);
ATerm DefScopeDefault_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm u_117 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm crush_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm);
ATerm diff_1_0 (ATerm q_117 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm);
ATerm zip_1_0 (ATerm z_115 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm);
ATerm for_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm define_lrules_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm m_124 (ATerm), ATerm);
ATerm VarToConst_0_0 (ATerm);
ATerm alltd_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm assert_1_0 (ATerm k_124 (ATerm), ATerm);
ATerm DeclareVarToConst_0_0 (ATerm);
ATerm Overlays_1_0 (ATerm e_92 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm h_124 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm g_124 (ATerm), ATerm);
ATerm scope_2_0 (ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm);
ATerm vars_to_consts_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_120 (ATerm), ATerm);
ATerm GetConstructors_0_0 (ATerm);
ATerm InsertBSpec_0_0 (ATerm);
ATerm foldr_3_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm);
ATerm CombineSections_0_0 (ATerm);
ATerm normalize_spec_0_0 (ATerm);
ATerm Op_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm Var_1_0 (ATerm a_93 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm s_114 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm t_122 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm e_123 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm pre_desugar_0_0 (ATerm);
ATerm frontend_transformation_0_0 (ATerm);
ATerm _2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_114 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_127 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm d_126 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_129 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm p_125 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm);
ATerm crush_2_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_127 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm d_130 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm q_104 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm r_104 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_114 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm d_131 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm i_132 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_132 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm f_132 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm u_129 (ATerm), ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm j_129 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      e_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
      {
        ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL;
        t = d_4;
        t = new_0_0(t);
        h_4 = t;
        t = new_0_0(t);
        i_4 = t;
        t = new_0_0(t);
        j_4 = t;
        t = new_0_0(t);
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_4), j_4), i_4), h_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, h_4), (ATerm) ATmakeAppl(sym_Var_1, j_4))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, e_4, (ATerm)ATmakeAppl(sym_Var_1, h_4), (ATerm) ATmakeAppl(sym_Var_1, i_4)), (ATerm) ATmakeAppl(sym_BAM_3, c_4, (ATerm)ATmakeAppl(sym_Var_1, j_4), (ATerm) ATmakeAppl(sym_Var_1, l_4)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_4)), (ATerm) ATmakeAppl(sym_Var_1, i_4))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_4 = ATgetArgument(t, 0);
          {
            ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
            t = d_4;
            t = new_0_0(t);
            q_4 = t;
            t = e_4;
            {
              ATerm h_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    r_4 = ATgetArgument(t, 0);
                    s_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_4);
                return(t);
              }
              t = oncetd_1_0(h_0, t);
              t_4 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_4)), not_null(r_4))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_4)), (ATerm) ATmakeAppl(sym_Build_1, t_4))));
            }
          }
        }
      else
        {
          ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              e_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_4;
          t = new_0_0(t);
          v_4 = t;
          t = new_0_0(t);
          w_4 = t;
          t = e_4;
          {
            ATerm j_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  x_4 = ATgetArgument(t, 0);
                  y_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, v_4);
              return(t);
            }
            t = oncetd_1_0(j_0, t);
            z_4 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_4), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_4)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_4))))), (ATerm)ATmakeAppl(sym_Var_1, v_4), (ATerm) ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_4)), not_null(x_4)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
        t = b_5;
        t = new_0_0(t);
        e_5 = t;
        t = c_5;
        {
          ATerm p_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                g_5 = ATgetArgument(t, 0);
                f_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_5), g_5);
            return(t);
          }
          t = pat_td_1_0(p_0, t);
          h_5 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_5), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_5))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_5))))));
        }
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        {
          ATerm g_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
              t = b_5;
              t = new_0_0(t);
              l_5 = t;
              t = c_5;
              {
                ATerm s_0 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      m_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_5);
                  return(t);
                }
                t = pat_td_1_0(s_0, t);
                n_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_5)), not_null(m_5))));
              }
              ;
              LocalPopChoice(h_21);
            }
          else
            {
              t = g_21;
              {
                ATerm r_5 = NULL,s_5 = NULL,u_5 = NULL,w_5 = NULL;
                t = b_5;
                t = new_0_0(t);
                r_5 = t;
                t = c_5;
                {
                  ATerm t_0 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        s_5 = ATgetArgument(t, 0);
                        u_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_5);
                    return(t);
                  }
                  t = pat_td_1_0(t_0, t);
                  w_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_5)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_5)), not_null(s_5)))));
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
  ATerm x_5 = NULL,y_5 = NULL,b_6 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      x_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5;
  {
    ATerm v_0 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm i_21 = ATgetArgument(t, 0);
          if(match_cons(i_21, sym_Match_1))
            {
              y_5 = ATgetArgument(i_21, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = y_5;
      return(t);
    }
    t = pat_td_1_0(v_0, t);
    b_6 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, b_6);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                h_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_6;
            if(match_cons(t, sym_RootApp_1))
              {
                i_6 = ATgetArgument(t, 0);
                t = i_6;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    i_6 = ATgetArgument(t, 0);
                    j_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, i_6, j_6);
              }
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  p_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
        t = p_6;
        t = new_0_0(t);
        s_6 = t;
        t = q_6;
        {
          ATerm w_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                t_6 = ATgetArgument(t, 0);
                u_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, s_6);
            return(t);
          }
          t = pat_td_1_0(w_0, t);
          v_6 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_6)), not_null(t_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_6)))), (ATerm) ATmakeAppl(sym_Build_1, v_6)));
        }
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
              t = p_6;
              t = new_0_0(t);
              z_6 = t;
              t = q_6;
              {
                ATerm c_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      a_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_6);
                  return(t);
                }
                t = pat_td_1_0(c_1, t);
                b_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_6)))), (ATerm) ATmakeAppl(sym_Build_1, b_7)));
              }
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
                t = p_6;
                t = new_0_0(t);
                d_7 = t;
                t = q_6;
                {
                  ATerm e_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        e_7 = ATgetArgument(t, 0);
                        f_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_7);
                    return(t);
                  }
                  t = pat_td_1_0(e_1, t);
                  g_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_7), not_null(f_7), (ATerm) ATmakeAppl(sym_Var_1, d_7))), (ATerm) ATmakeAppl(sym_Build_1, g_7)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_As_2))
    {
      i_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_7);
  h_7 = t;
  t = i_7;
  t = r_93(t);
  k_7 = t;
  t = j_7;
  t = s_93(t);
  m_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, k_7, m_7), h_7);
  return(t);
}
ATerm PrimT_3_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,y_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
      v_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_8);
  s_7 = t;
  t = t_7;
  t = q_97(t);
  y_7 = t;
  t = u_7;
  t = r_97(t);
  a_8 = t;
  t = v_7;
  t = s_97(t);
  b_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, y_7, a_8, b_8), s_7);
  return(t);
}
ATerm Explode_2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm t)
{
  ATerm l_8 = NULL,r_8 = NULL,s_8 = NULL,x_8 = NULL,b_9 = NULL,e_9 = NULL;
  e_9 = t;
  if(match_cons(t, sym_Explode_2))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_9);
  l_8 = t;
  t = r_8;
  t = k_93(t);
  x_8 = t;
  t = s_8;
  t = l_93(t);
  b_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, x_8, b_9), l_8);
  return(t);
}
ATerm pat_td_1_0 (ATerm t_136 (ATerm), ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_136(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              ATerm h_1 (ATerm t)
              {
                t = pat_td_1_0(t_136, t);
                return(t);
              }
              t = fetch_1_0(h_1, t);
              return(t);
            }
            t = Op_2_0(_id, f_1, t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm x_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_1 (ATerm t)
                  {
                    t = pat_td_1_0(t_136, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, i_1, t);
                  ;
                  LocalPopChoice(y_21);
                }
              else
                {
                  t = x_21;
                  {
                    ATerm z_21 = t;
                    int b_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_1 (ATerm t)
                        {
                          t = pat_td_1_0(t_136, t);
                          return(t);
                        }
                        t = Explode_2_0(o_1, _id, t);
                        ;
                        LocalPopChoice(b_22);
                      }
                    else
                      {
                        t = z_21;
                        {
                          ATerm c_22 = t;
                          int d_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_1 (ATerm t)
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  t = pat_td_1_0(t_136, t);
                                  return(t);
                                }
                                t = fetch_1_0(r_1, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, p_1, t);
                              ;
                              LocalPopChoice(d_22);
                            }
                          else
                            {
                              t = c_22;
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = pat_td_1_0(t_136, t);
                                  return(t);
                                }
                                t = As_2_0(_id, s_1, t);
                              }
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
  ATerm m_9 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      m_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL,p_9 = NULL;
        t = m_9;
        {
          ATerm u_1 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm g_22 = ATgetArgument(t, 0);
                if(match_cons(g_22, sym_Build_1))
                  {
                    o_9 = ATgetArgument(g_22, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = o_9;
            return(t);
          }
          t = pat_td_1_0(u_1, t);
          p_9 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, p_9);
        }
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm s_9 = NULL,t_9 = NULL;
          t = m_9;
          {
            ATerm v_1 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm h_22 = ATgetArgument(t, 0);
                  if(match_cons(h_22, sym_Build_1))
                    {
                      s_9 = ATgetArgument(h_22, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_22 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = s_9;
              return(t);
            }
            t = pat_td_1_0(v_1, t);
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, t_9);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                a_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_10;
            if(match_cons(t, sym_RootApp_1))
              {
                b_10 = ATgetArgument(t, 0);
                t = b_10;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    b_10 = ATgetArgument(t, 0);
                    c_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_10), b_10);
              }
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm s_10 (ATerm k_10, ATerm t)
  {
    ATerm m_10 = NULL;
    t = k_10;
    {
      ATerm n_22 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_22;
        }
      t = new_0_0(t);
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, m_10), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_10), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_10)))), (ATerm) ATmakeAppl(sym_Var_1, m_10)));
    }
    return(t);
  }
  ATerm n_10 = NULL,o_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_10 = ATgetArgument(t, 0);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_10(n_10, t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_22, (ATerm) ATmakeAppl(sym_Var_1, o_10)));
          }
      }
    }
  else
    {
      t = s_10(n_10, t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      i_15 = ATgetArgument(t, 2);
      {
        ATerm y_0 = NULL,z_0 = NULL,b_1 = NULL;
        t = i_15;
        {
          ATerm x_1 (ATerm t)
          {
            ATerm s_22 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_22;
              }
            return(t);
          }
          t = fetch_1_0(x_1, t);
          t = i_15;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm g_2 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, g_2, t);
            if(match_cons(t, sym__2))
              {
                y_0 = ATgetArgument(t, 0);
                {
                  ATerm t_22 = ATgetArgument(t, 1);
                  if(match_cons(t_22, sym__2))
                    {
                      z_0 = ATgetArgument(t_22, 0);
                      b_1 = ATgetArgument(t_22, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, y_0, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_0), (ATerm) ATmakeAppl(sym_PrimT_3, k_15, m_15, b_1)));
          }
        }
      }
    }
  else
    {
      ATerm k_1 = NULL,l_1 = NULL,n_1 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          k_15 = ATgetArgument(t, 0);
          m_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_15;
      {
        ATerm h_2 (ATerm t)
        {
          ATerm u_22 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_22;
            }
          return(t);
        }
        t = fetch_1_0(h_2, t);
        t = m_15;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm i_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, i_2, t);
          if(match_cons(t, sym__2))
            {
              k_1 = ATgetArgument(t, 0);
              {
                ATerm v_22 = ATgetArgument(t, 1);
                if(match_cons(v_22, sym__2))
                  {
                    l_1 = ATgetArgument(v_22, 0);
                    n_1 = ATgetArgument(v_22, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, k_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_1), (ATerm) ATmakeAppl(sym_PrimT_3, k_15, (ATerm)ATempty, n_1)));
        }
      }
    }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm a_23 = t;
              int b_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                  {
                    ATerm c_23 = t;
                    int d_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(d_23);
                      }
                    else
                      {
                        t = c_23;
                        {
                          ATerm e_23 = t;
                          int f_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(f_23);
                            }
                          else
                            {
                              t = e_23;
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
      t = repeat_1_0(k_2, t);
    }
    return(t);
  }
  t = topdown_1_0(j_2, t);
  return(t);
}
ATerm desugar_spec_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SDef_3_0(_id, _id, desugar_0_0, t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SDefT_4_0(_id, _id, _id, desugar_0_0, t);
              ;
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              {
                ATerm m_2 (ATerm t)
                {
                  t = term_k_23;
                  return(t);
                }
                t = debug_1_0(m_2, t);
                _fail(t);
              }
            }
        }
      }
    return(t);
  }
  t = map_1_0(l_2, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,v_15 = NULL,w_15 = NULL,b_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  s_15 = t;
  t = v_15;
  t = c_92(t);
  w_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, w_15), s_15);
  return(t);
}
ATerm Specification_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,k_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_17);
  g_17 = t;
  t = h_17;
  t = h_92(t);
  i_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, i_17), g_17);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm i_127 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm y_18 = NULL,d_19 = NULL;
    y_18 = t;
    t = term_l_23;
    t = get_config_0_0(t);
    d_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_19, term_m_23);
    t = geq_0_0(t);
    t = y_18;
    t = i_127(t);
    return(t);
  }
  t = try_1_0(n_2, t);
  return(t);
}
ATerm timing_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm e_19 = NULL;
    e_19 = t;
    t = dtime_0_0(t);
    t = debug_1_0(f_106, t);
    t = e_19;
    return(t);
  }
  t = if_verbose3_1_0(p_2, t);
  return(t);
}
ATerm spaste_1_0 (ATerm f_136 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        t = split_2_0(_id, f_136, t);
        {
          ATerm r_2 (ATerm t)
          {
            ATerm y_19 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,j_20 = NULL;
            if(match_cons(t, sym__2))
              {
                y_19 = ATgetArgument(t, 0);
                j_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_19;
            {
              ATerm q_23 = t;
              int r_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm s_23 = ATgetArgument(t, 0);
                      e_20 = ATgetArgument(t, 1);
                      f_20 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_23);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, j_20, e_20, f_20);
                }
              else
                {
                  t = q_23;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm t_23 = ATgetArgument(t, 0);
                      e_20 = ATgetArgument(t, 1);
                      f_20 = ATgetArgument(t, 2);
                      g_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_20, e_20, f_20, g_20);
                }
            }
            return(t);
          }
          t = zip_1_0(r_2, t);
        }
        return(t);
      }
      t = Let_2_0(q_2, _id, t);
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = n_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              t = split_2_0(_id, f_136, t);
              {
                ATerm t_2 (ATerm t)
                {
                  ATerm c_21 = NULL,u_21 = NULL,a_22 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      c_21 = ATgetArgument(t, 0);
                      a_22 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_21;
                  {
                    ATerm w_23 = t;
                    int x_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm y_23 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_23);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_22);
                      }
                    else
                      {
                        t = w_23;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm z_23 = ATgetArgument(t, 0);
                            u_21 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_22, u_21);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(t_2, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, s_2, _id, t);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = split_2_0(_id, f_136, t);
                    {
                      ATerm w_2 (ATerm t)
                      {
                        ATerm q_22 = NULL,w_22 = NULL,x_22 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            q_22 = ATgetArgument(t, 0);
                            x_22 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = q_22;
                        {
                          ATerm e_24 = t;
                          int f_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm g_24 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(f_24);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_22);
                            }
                          else
                            {
                              t = e_24;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm h_24 = ATgetArgument(t, 0);
                                  w_22 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, w_22);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(w_2, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, v_2, _id, _id, t);
                  ;
                  LocalPopChoice(d_24);
                }
              else
                {
                  t = c_24;
                  {
                    ATerm i_24 = t;
                    int j_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_2 (ATerm t)
                        {
                          t = split_2_0(_id, f_136, t);
                          {
                            ATerm a_3 (ATerm t)
                            {
                              ATerm o_23 = NULL,a_24 = NULL,b_24 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  o_23 = ATgetArgument(t, 0);
                                  b_24 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = o_23;
                              {
                                ATerm k_24 = t;
                                int l_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm m_24 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(l_24);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_24);
                                  }
                                else
                                  {
                                    t = k_24;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm n_24 = ATgetArgument(t, 0);
                                        a_24 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, b_24, a_24);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(a_3, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, z_2, _id, _id, t);
                        ;
                        LocalPopChoice(j_24);
                      }
                    else
                      {
                        t = i_24;
                        {
                          ATerm b_3 (ATerm t)
                          {
                            ATerm y_24 = NULL;
                            t = f_136(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                y_24 = ATgetFirst((ATermList) t);
                                {
                                  ATerm o_24 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = y_24;
                            return(t);
                          }
                          t = Rec_2_0(b_3, _id, t);
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
ATerm Rec_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,i_25 = NULL,u_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym_Rec_2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_25);
  a_25 = t;
  t = e_25;
  t = h_97(t);
  g_25 = t;
  t = f_25;
  t = i_97(t);
  i_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, g_25, i_25), a_25);
  return(t);
}
ATerm Let_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,e_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  m_26 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_26);
  c_26 = t;
  t = e_26;
  t = k_96(t);
  k_26 = t;
  t = j_26;
  t = l_96(t);
  l_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, k_26, l_26), c_26);
  return(t);
}
ATerm sboundin_3_0 (ATerm g_136 (ATerm), ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(g_136, g_136, t);
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
            t = SDef_3_0(i_136, i_136, g_136, t);
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm t_24 = t;
              int u_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(i_136, i_136, i_136, g_136, t);
                  ;
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = t_24;
                  t = Rec_2_0(i_136, g_136, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm x_26 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm v_24 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
      {
        ATerm w_24 = ATgetArgument(t, 2);
      }
      {
        ATerm x_24 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = x_26;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm y_26 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
      {
        ATerm b_25 = ATgetArgument(t, 2);
      }
      {
        ATerm c_25 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = y_26;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      {
        ATerm h_25 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = b_27;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm h_27 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      h_27 = ATgetArgument(t, 0);
      {
        ATerm j_25 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_27;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm j_27 = NULL;
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              j_27 = ATgetArgument(t, 0);
              {
                ATerm m_25 = ATgetArgument(t, 1);
              }
              {
                ATerm n_25 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(l_25);
          t = j_27;
        }
      else
        {
          t = k_25;
          if(match_cons(t, sym_SDefT_4))
            {
              j_27 = ATgetArgument(t, 0);
              {
                ATerm o_25 = ATgetArgument(t, 1);
              }
              {
                ATerm p_25 = ATgetArgument(t, 2);
              }
              {
                ATerm q_25 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = j_27;
        }
      return(t);
    }
    t = map_1_0(c_3, t);
  }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm t_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = t_25;
              {
                ATerm w_25 = t;
                int x_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_28 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        d_28 = ATgetArgument(t, 0);
                        {
                          ATerm y_25 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, d_28);
                    ;
                    LocalPopChoice(x_25);
                  }
                else
                  {
                    t = w_25;
                    {
                      ATerm z_25 = t;
                      int a_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(a_26);
                        }
                      else
                        {
                          t = z_25;
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
  t = rename_4_0(SVar_1_0, e_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm rename_4_0 (ATerm b_133 (ATerm (ATerm), ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_133 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_28, (ATerm) ATempty);
  {
    ATerm m_28 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        ATerm b_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(b_133, t);
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = b_26;
            t = RnBinding_2_0(c_133, e_133, t);
            t = DistBinding_2_0(m_28, d_133, t);
          }
        return(t);
      }
      t = env_alltd_1_0(f_3, t);
      return(t);
    }
    t = m_28(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(i_26);
            }
          else
            {
              t = h_26;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, h_3, tboundin_3_0, tpaste_1_0, t);
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
  ATerm n_28 = NULL,o_28 = NULL,q_28 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_28;
  {
    ATerm i_3 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm n_26 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) n_26) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm o_26 = ATgetArgument(t, 1);
            if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
              {
                ATerm p_26 = ATgetFirst((ATermList) o_26);
                if(match_cons(p_26, sym_Var_1))
                  {
                    ATerm r_26 = ATgetArgument(p_26, 0);
                    if(match_cons(r_26, sym_ListVar_1))
                      {
                        o_28 = ATgetArgument(r_26, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm q_26 = (ATerm) ATgetNext((ATermList) o_26);
                  if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
                    {
                      ATerm s_26 = ATgetFirst((ATermList) q_26);
                      if(match_cons(s_26, sym_Op_2))
                        {
                          ATerm u_26 = ATgetArgument(s_26, 0);
                          if((ATgetSymbol((ATermAppl) u_26) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm v_26 = ATgetArgument(s_26, 1);
                            if(((ATgetType(v_26) != AT_LIST) || !(ATisEmpty(v_26))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm t_26 = (ATerm) ATgetNext((ATermList) q_26);
                        if(((ATgetType(t_26) != AT_LIST) || !(ATisEmpty(t_26))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, o_28);
      return(t);
    }
    t = oncetd_1_0(i_3, t);
    q_28 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, q_28);
  }
  return(t);
}
ATerm ListMatch_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      r_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_28;
  {
    ATerm k_3 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm w_26 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) w_26) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm z_26 = ATgetArgument(t, 1);
            if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
              {
                ATerm a_27 = ATgetFirst((ATermList) z_26);
                if(match_cons(a_27, sym_Var_1))
                  {
                    ATerm d_27 = ATgetArgument(a_27, 0);
                    if(match_cons(d_27, sym_ListVar_1))
                      {
                        s_28 = ATgetArgument(d_27, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm c_27 = (ATerm) ATgetNext((ATermList) z_26);
                  if(((ATgetType(c_27) == AT_LIST) && !(ATisEmpty(c_27))))
                    {
                      ATerm e_27 = ATgetFirst((ATermList) c_27);
                      if(match_cons(e_27, sym_Op_2))
                        {
                          ATerm g_27 = ATgetArgument(e_27, 0);
                          if((ATgetSymbol((ATermAppl) g_27) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm i_27 = ATgetArgument(e_27, 1);
                            if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm f_27 = (ATerm) ATgetNext((ATermList) c_27);
                        if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, s_28);
      return(t);
    }
    t = oncetd_1_0(k_3, t);
    t_28 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, t_28);
  }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm k_27 = t;
  if((PushChoice() == 0))
    {
      ATerm l_3 (ATerm t)
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_27;
    }
  return(t);
}
ATerm Con_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
      x_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  u_28 = t;
  t = v_28;
  t = a_94(t);
  y_28 = t;
  t = w_28;
  t = b_94(t);
  z_28 = t;
  t = x_28;
  t = c_94(t);
  a_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, y_28, z_28, a_29), u_28);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm n_27 = t;
  if((PushChoice() == 0))
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(n_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_29;
  if(match_cons(t, sym_StratRule_3))
    {
      j_29 = ATgetArgument(t, 0);
      k_29 = ATgetArgument(t, 1);
      l_29 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_29), (ATerm) ATmakeAppl(sym_Where_1, l_29)), j_29));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_29 = ATgetArgument(t, 0);
          k_29 = ATgetArgument(t, 1);
          l_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_29;
      t = pureterm_0_0(t);
      t = k_29;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_29)), (ATerm) ATmakeAppl(sym_Where_1, l_29)), (ATerm) ATmakeAppl(sym_Match_1, j_29)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      if(match_cons(q_27, sym_Rule_3))
        {
          s_29 = ATgetArgument(q_27, 0);
          t_29 = ATgetArgument(q_27, 1);
          u_29 = ATgetArgument(q_27, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  v_29 = t;
  t = s_29;
  {
    ATerm o_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_27 = ATgetArgument(t, 0);
          if(match_cons(r_27, sym_Var_1))
            {
              x_29 = ATgetArgument(r_27, 0);
            }
          else
            _fail(t);
          w_29 = ATgetArgument(t, 1);
          {
            ATerm s_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, x_29);
      return(t);
    }
    t = oncetd_1_0(o_3, t);
    y_29 = t;
    t = t_29;
    {
      ATerm q_3 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm t_27 = ATgetArgument(t, 0);
            if(match_cons(t_27, sym_Var_1))
              {
                x_29 = ATgetArgument(t_27, 0);
              }
            else
              _fail(t);
            z_29 = ATgetArgument(t, 1);
            {
              ATerm u_27 = ATgetArgument(t, 2);
              if(match_cons(u_27, sym_CallT_3))
                {
                  a_30 = ATgetArgument(u_27, 0);
                  {
                    ATerm v_27 = ATgetArgument(u_27, 1);
                    if(((ATgetType(v_27) != AT_LIST) || !(ATisEmpty(v_27))))
                      _fail(t);
                  }
                  {
                    ATerm w_27 = ATgetArgument(u_27, 2);
                    if(((ATgetType(w_27) != AT_LIST) || !(ATisEmpty(w_27))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, v_29);
        return(t);
      }
      t = oncetd_1_0(q_3, t);
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_29), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, y_29, b_30, (ATerm) ATmakeAppl(sym_Seq_2, u_29, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(a_30), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_29), not_null(z_29), term_r_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_29)), (ATerm) ATmakeAppl(sym_Var_1, v_29))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        {
          ATerm z_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(a_28);
            }
          else
            {
              t = z_27;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(r_3, t);
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_30;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        ATerm g_30 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            g_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_30;
        return(t);
      }
      t = try_1_0(v_3, t);
      return(t);
    }
    t = map_1_0(t_3, t);
    f_30 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_30, e_30);
  }
  return(t);
}
ATerm DesugarListMatching_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          ;
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          t = desugarRule_0_0(t);
        }
      return(t);
    }
    t = try_1_0(x_3, t);
    {
      ATerm y_3 (ATerm t)
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_28 = t;
            int h_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0_0(t);
                ;
                LocalPopChoice(h_28);
              }
            else
              {
                t = g_28;
                {
                  ATerm j_28 = t;
                  int k_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0_0(t);
                      ;
                      LocalPopChoice(k_28);
                    }
                  else
                    {
                      t = j_28;
                      t = ListBuild_0_0(t);
                    }
                }
              }
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            {
              ATerm k_30 = NULL,l_30 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  k_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_30;
              if(match_cons(t, sym_ListVar_1))
                {
                  l_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, l_30);
            }
          }
        return(t);
      }
      t = repeat_1_0(y_3, t);
    }
    return(t);
  }
  t = topdown_1_0(w_3, t);
  return(t);
}
ATerm expand_calls_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm n_30 = NULL,o_30 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          n_30 = ATgetArgument(t, 0);
          o_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_CallT_3, n_30, o_30, (ATerm) ATempty);
      return(t);
    }
    t = try_1_0(a_4, t);
    return(t);
  }
  t = topdown_1_0(z_3, t);
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm q_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
      q_30 = ATgetArgument(t, 3);
      {
        ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
        t = u_30;
        t = declared_vars_0_0(t);
        z_30 = t;
        t = q_30;
        t = tvars_0_0(t);
        a_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_31, z_30);
        t = diff_0_0(t);
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, s_30, t_30, u_30, (ATerm) ATmakeAppl(sym_Scope_2, b_31, q_30));
      }
    }
  else
    {
      ATerm f_31 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          s_30 = ATgetArgument(t, 0);
          t_30 = ATgetArgument(t, 1);
          u_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_30;
      t = tvars_0_0(t);
      f_31 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_30, t_30, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, f_31, u_30));
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm h_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      j_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
      l_31 = ATgetArgument(t, 2);
      h_31 = ATgetArgument(t, 3);
      {
        ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
        t = l_31;
        t = declared_vars_0_0(t);
        q_31 = t;
        t = h_31;
        t = tvars_0_0(t);
        r_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_31, q_31);
        t = diff_0_0(t);
        s_31 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, j_31, k_31, l_31, (ATerm) ATmakeAppl(sym_Scope_2, s_31, (ATerm) ATmakeAppl(sym_SRule_1, h_31)));
      }
    }
  else
    {
      ATerm w_31 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          j_31 = ATgetArgument(t, 0);
          k_31 = ATgetArgument(t, 1);
          l_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_31;
      t = tvars_0_0(t);
      w_31 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, j_31, k_31, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, w_31, (ATerm) ATmakeAppl(sym_SRule_1, l_31)));
    }
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm i_32 (ATerm b_32, ATerm t)
  {
    t = b_32;
    {
      ATerm b_4 (ATerm t)
      {
        t = term_l_28;
        return(t);
      }
      t = rewrite_1_0(b_4, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm p_28 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_28) != ATmakeSymbol("r_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = term_c_29;
    }
    return(t);
  }
  ATerm j_32 (ATerm d_32, ATerm t)
  {
    t = d_32;
    {
      ATerm f_4 (ATerm t)
      {
        t = term_l_28;
        return(t);
      }
      t = rewrite_1_0(f_4, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm d_29 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("o_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = term_c_29;
    }
    return(t);
  }
  ATerm f_32 = NULL,h_32 = NULL;
  f_32 = t;
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      h_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_32;
  if(match_int(t, 0))
    {
      ATerm f_29 = t;
      int g_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_32(f_32, t);
          ;
          LocalPopChoice(g_29);
        }
      else
        {
          t = f_29;
          t = j_32(f_32, t);
        }
    }
  else
    {
      t = i_32(f_32, t);
    }
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_33;
  if(match_cons(t, sym_FunType_2))
    {
      i_33 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
      {
        ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL;
        t = i_33;
        t = length_0_0(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_33, y_1);
        {
          ATerm h_29 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_29;
            }
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_33, y_1), term_n_29);
          {
            ATerm g_4 (ATerm t)
            {
              t = term_l_28;
              return(t);
            }
            t = assert_1_0(g_4, t);
            t = i_33;
            {
              ATerm k_4 (ATerm t)
              {
                ATerm e_2 = NULL;
                t = new_0_0(t);
                e_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, e_2, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_29), term_q_29)), e_2);
                return(t);
              }
              t = unzip_1_0(k_4, t);
              if(match_cons(t, sym__2))
                {
                  a_2 = ATgetArgument(t, 0);
                  b_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_2;
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm f_2 = NULL;
                  f_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_2), (ATerm)ATempty, (ATerm) ATempty);
                  return(t);
                }
                t = map_1_0(m_4, t);
                d_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_33, a_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, g_33, d_2));
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
          ATerm r_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, g_33, term_c_30);
      {
        ATerm h_30 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_30;
          }
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_33, term_c_30), term_j_30);
        {
          ATerm n_4 (ATerm t)
          {
            t = term_l_28;
            return(t);
          }
          t = assert_1_0(n_4, t);
          t = (ATerm) ATmakeAppl(sym_SDefT_4, g_33, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, g_33, (ATerm) ATempty));
        }
      }
    }
  return(t);
}
ATerm MkCongDefs_0_0 (ATerm t)
{
  ATerm l_33 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      l_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_33;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm congdefs_0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    t = term_l_28;
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = filter_1_0(MkCongDefs_0_0, t);
    t = concat_0_0(t);
    return(t);
  }
  t = scope_2_0(o_4, p_4, t);
  return(t);
}
ATerm RulesToSdefs_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      if(((ATgetType(m_30) == AT_LIST) && !(ATisEmpty(m_30))))
        {
          ATerm p_30 = ATgetFirst((ATermList) m_30);
          if(match_cons(p_30, sym_Signature_1))
            {
              m_33 = ATgetArgument(p_30, 0);
            }
          else
            _fail(t);
          {
            ATerm r_30 = (ATerm) ATgetNext((ATermList) m_30);
            if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
              {
                ATerm v_30 = ATgetFirst((ATermList) r_30);
                if(match_cons(v_30, sym_Strategies_1))
                  {
                    n_33 = ATgetArgument(v_30, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm w_30 = (ATerm) ATgetNext((ATermList) r_30);
                  if(((ATgetType(w_30) != AT_LIST) || !(ATisEmpty(w_30))))
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
  t = m_33;
  t = congdefs_0_0(t);
  o_33 = t;
  t = (ATerm) ATinsert(CheckATermList(n_33), (ATerm) ATmakeAppl(sym_RDefT_4, term_x_30, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_c_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_29), term_q_29))), (ATerm) ATmakeAppl(sym_VarDec_2, term_y_30, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_29), term_q_29))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_m_31, term_u_31, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_c_32), term_y_31)))));
  {
    ATerm u_4 (ATerm t)
    {
      ATerm e_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RDtoSD_0_0(t);
          ;
          LocalPopChoice(g_32);
        }
      else
        {
          t = e_32;
          t = DeclareVariables_0_0(t);
        }
      t = expand_calls_0_0(t);
      return(t);
    }
    t = map_1_0(u_4, t);
    p_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
    t = conc_0_0(t);
    q_33 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, q_33)), (ATerm) ATmakeAppl(sym_Signature_1, m_33)));
  }
  return(t);
}
ATerm TupleDeclarations_0_0 (ATerm t)
{
  ATerm r_33 = NULL;
  t = (ATerm) ATempty;
  {
    ATerm a_5 (ATerm t)
    {
      t = term_k_32;
      return(t);
    }
    t = rewrite_1_0(a_5, t);
    if(match_cons(t, sym_Defined_2))
      {
        ATerm l_32 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) l_32) != ATmakeSymbol("z_1", 0, ATtrue)))
          _fail(t);
        r_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_33;
  }
  return(t);
}
ATerm CheckConsError_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_32;
  {
    ATerm d_5 (ATerm t)
    {
      t = term_n_32;
      return(t);
    }
    t = rewrite_1_0(d_5, t);
    if(match_cons(t, sym_Defined_3))
      {
        ATerm o_32 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) o_32) != ATmakeSymbol("c_2", 0, ATtrue)))
          _fail(t);
        u_33 = ATgetArgument(t, 1);
        v_33 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = t_33;
    t = length_0_0(t);
    x_33 = t;
    t = SSL_int_to_string(x_33);
    w_33 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue))), w_33), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), s_33), (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue))), v_33), (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue))), u_33), (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym_Op_2, s_33, t_33);
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm y_33 = NULL,z_33 = NULL;
    if(match_cons(t, sym__2))
      {
        y_33 = ATgetArgument(t, 0);
        z_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_33, z_33, (ATerm) ATempty);
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    ATerm a_34 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm p_32 = ATgetArgument(t, 0);
        if(((ATgetType(p_32) != AT_INT) || (ATgetInt((ATermInt) p_32) != 0)))
          _fail(t);
        {
          ATerm q_32 = ATgetArgument(t, 1);
        }
        a_34 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = a_34;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
    if(match_cons(t, sym__3))
      {
        b_34 = ATgetArgument(t, 0);
        c_34 = ATgetArgument(t, 1);
        d_34 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, b_34, term_r_32);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, b_34, term_r_32);
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_34, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(t_32);
        }
      else
        {
          t = s_32;
          t = SSL_subtr(b_34, (ATerm) ATmakeInt(1));
        }
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, e_34, c_34, (ATerm) ATinsert(CheckATermList(d_34), c_34));
    }
    return(t);
  }
  t = for_3_0(i_5, j_5, k_5, t);
  return(t);
}
ATerm CheckTuple_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_34;
  t = length_0_0(t);
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_34, term_w_32);
  t = copy_0_0(t);
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, h_34, term_w_32));
  t = GenerateCheckRule_0_0(t);
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = TupleDeclarations_0_0(t);
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATempty;
      }
    i_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_32, (ATerm) ATinsert(CheckATermList(i_34), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, h_34, term_w_32)))));
    {
      ATerm o_5 (ATerm t)
      {
        t = term_k_32;
        return(t);
      }
      t = assert_1_0(o_5, t);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_b_21, f_34);
    }
  }
  return(t);
}
ATerm CheckCons_0_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  if(match_cons(t, sym_Op_2))
    {
      z_34 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 = NULL;
        t = a_35;
        t = length_0_0(t);
        o_2 = t;
        t = (ATerm) ATmakeAppl(sym_Op_2, z_34, (ATerm) ATmakeAppl(sym_Keys_1, o_2));
        {
          ATerm p_5 (ATerm t)
          {
            t = term_c_33;
            return(t);
          }
          t = rewrite_1_0(p_5, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_33) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, z_34, (ATerm) ATempty);
        }
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm u_2 = NULL;
          t = a_35;
          t = length_0_0(t);
          u_2 = t;
          t = (ATerm) ATmakeAppl(sym_Op_2, z_34, (ATerm) ATmakeAppl(sym_Keys_1, u_2));
          {
            ATerm q_5 (ATerm t)
            {
              t = term_c_33;
              return(t);
            }
            t = rewrite_1_0(q_5, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm j_33 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_33) != ATmakeSymbol("t_1", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Op_2, z_34, (ATerm) ATempty);
          }
        }
      }
  }
  return(t);
}
ATerm manytd_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm d_35 (ATerm t)
  {
    ATerm k_33 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110(t);
        {
          ATerm t_5 (ATerm t)
          {
            t = try_1_0(d_35, t);
            return(t);
          }
          t = SRTS_all(t_5, t);
        }
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = k_33;
        t = SRTS_some(d_35, t);
      }
    return(t);
  }
  t = d_35(t);
  return(t);
}
ATerm check_constructors_p__2_0 (ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  ATerm v_5 (ATerm t)
  {
    t = term_n_32;
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm g_35 = NULL;
    g_35 = t;
    t = q_136(t);
    f_35 = t;
    t = r_136(t);
    e_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_32, (ATerm) ATmakeAppl(sym_Defined_3, term_k_34, e_35, f_35));
    {
      ATerm c_6 (ATerm t)
      {
        t = term_n_32;
        return(t);
      }
      t = assert_1_0(c_6, t);
      t = g_35;
      {
        ATerm d_6 (ATerm t)
        {
          ATerm l_34 = t;
          if((PushChoice() == 0))
            {
              ATerm m_34 = t;
              int n_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0_0(t);
                  ;
                  LocalPopChoice(n_34);
                }
              else
                {
                  t = m_34;
                  t = CheckTuple_0_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_34;
            }
          t = CheckConsError_0_0(t);
          return(t);
        }
        t = manytd_1_0(d_6, t);
      }
    }
    return(t);
  }
  t = scope_2_0(v_5, a_6, t);
  return(t);
}
ATerm check_constructors_0_0 (ATerm t)
{
  ATerm j_35 = NULL,l_35 = NULL;
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_35 = ATgetArgument(t, 0);
          {
            ATerm q_34 = ATgetArgument(t, 1);
          }
          l_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(p_34);
      t = l_35;
      {
        ATerm e_6 (ATerm t)
        {
          t = j_35;
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = term_r_34;
          return(t);
        }
        t = check_constructors_p__2_0(e_6, f_6, t);
      }
    }
  else
    {
      t = o_34;
      if(match_cons(t, sym_RDef_3))
        {
          j_35 = ATgetArgument(t, 0);
          {
            ATerm s_34 = ATgetArgument(t, 1);
          }
          l_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_35;
      {
        ATerm g_6 (ATerm t)
        {
          t = j_35;
          return(t);
        }
        ATerm k_6 (ATerm t)
        {
          t = term_t_34;
          return(t);
        }
        t = check_constructors_p__2_0(g_6, k_6, t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    t = term_c_30;
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    ATerm q_35 = NULL,r_35 = NULL;
    if(match_cons(t, sym__2))
      {
        q_35 = ATgetArgument(t, 0);
        r_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm u_34 = t;
      int v_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(q_35, r_35);
          ;
          LocalPopChoice(v_34);
        }
      else
        {
          t = u_34;
          t = SSL_addr(q_35, r_35);
        }
    }
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = term_r_32;
    return(t);
  }
  t = foldr_3_0(l_6, m_6, n_6, t);
  return(t);
}
ATerm GenerateCheckRule_0_0 (ATerm t)
{
  ATerm u_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_35;
  if(match_cons(t, sym_FunType_2))
    {
      y_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
      {
        ATerm c_36 = NULL;
        t = y_35;
        t = length_0_0(t);
        c_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, w_35, (ATerm) ATmakeAppl(sym_Keys_1, c_36)), term_x_34);
        {
          ATerm o_6 (ATerm t)
          {
            t = term_c_33;
            return(t);
          }
          t = assert_1_0(o_6, t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_35, (ATerm) ATmakeAppl(sym_FunType_2, y_35, u_35));
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ConstType_1))
        {
          y_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, w_35, term_b_35), term_h_35);
      {
        ATerm r_6 (ATerm t)
        {
          t = term_c_33;
          return(t);
        }
        t = assert_1_0(r_6, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_35, (ATerm) ATmakeAppl(sym_ConstType_1, y_35));
      }
    }
  return(t);
}
ATerm CheckConstructors_0_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
        {
          ATerm k_35 = ATgetFirst((ATermList) i_35);
          if(match_cons(k_35, sym_Signature_1))
            {
              ATerm n_35 = ATgetArgument(k_35, 0);
              if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
                {
                  ATerm o_35 = ATgetFirst((ATermList) n_35);
                  if(match_cons(o_35, sym_Constructors_1))
                    {
                      f_36 = ATgetArgument(o_35, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_35 = (ATerm) ATgetNext((ATermList) n_35);
                    if(((ATgetType(p_35) != AT_LIST) || !(ATisEmpty(p_35))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm m_35 = (ATerm) ATgetNext((ATermList) i_35);
            if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
              {
                ATerm s_35 = ATgetFirst((ATermList) m_35);
                if(match_cons(s_35, sym_Strategies_1))
                  {
                    g_36 = ATgetArgument(s_35, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm t_35 = (ATerm) ATgetNext((ATermList) m_35);
                  if(((ATgetType(t_35) != AT_LIST) || !(ATisEmpty(t_35))))
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_36), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_32), term_w_32))), term_z_35);
  t = map_1_0(GenerateCheckRule_0_0, t);
  t = g_36;
  t = filter_1_0(check_constructors_0_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = TupleDeclarations_0_0(t);
        ;
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATempty;
      }
    h_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_36), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_w_32), term_w_32), term_w_32))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_21, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_32), term_w_32))), term_z_35));
    t = conc_0_0(t);
    i_36 = t;
    t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, g_36)), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, i_36)))));
  }
  return(t);
}
ATerm exp_overlays2_1_0 (ATerm g_135 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm j_36 = NULL;
    j_36 = t;
    {
      ATerm d_36 = t;
      if((PushChoice() == 0))
        {
          t = g_135(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_36;
        }
      t = j_36;
      {
        ATerm x_6 (ATerm t)
        {
          ATerm y_6 (ATerm t)
          {
            t = ExpOverlay_1_0(g_135, t);
            return(t);
          }
          t = try_1_0(y_6, t);
          return(t);
        }
        t = topdown_1_0(x_6, t);
      }
    }
    return(t);
  }
  t = try_1_0(w_6, t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm l_36 = NULL,n_36 = NULL;
  ATerm e_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm m_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(k_36);
      t = term_r_22;
    }
  else
    {
      t = e_36;
      if(match_cons(t, sym_Real_1))
        {
          n_36 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, n_36));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              n_36 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, n_36));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  n_36 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, n_36));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      n_36 = ATgetArgument(t, 0);
                      l_36 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_36, (ATerm)ATinsert(ATinsert(ATempty, l_36), n_36), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          n_36 = ATgetArgument(t, 0);
                          l_36 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_36), l_36, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              n_36 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_36), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm c_7 (ATerm t)
  {
    ATerm o_7 (ATerm t)
    {
      t = map_1_0(trm_to_cong_0_0, t);
      return(t);
    }
    t = Op_2_0(_id, o_7, t);
    return(t);
  }
  t = try_1_0(c_7, t);
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      x_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
      z_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_36;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm e_37 = NULL;
      e_37 = t;
      t = (ATerm) ATmakeAppl(sym_VarDec_2, e_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_29), term_q_29));
      return(t);
    }
    t = map_1_0(p_7, t);
    a_37 = t;
    t = z_36;
    t = trm_to_cong_0_0(t);
    b_37 = t;
    t = (ATerm) ATmakeAppl(sym_SDef_3, x_36, a_37, b_37);
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(b_136, _id, t);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 (ATerm t)
            {
              t = split_2_0(_id, b_136, t);
              {
                ATerm r_7 (ATerm t)
                {
                  ATerm z_37 = NULL,b_38 = NULL,c_38 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      z_37 = ATgetArgument(t, 0);
                      c_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_37;
                  {
                    ATerm t_36 = t;
                    int u_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm v_36 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_36);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_38);
                      }
                    else
                      {
                        t = t_36;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm w_36 = ATgetArgument(t, 0);
                            b_38 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_38, b_38);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(r_7, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, q_7, _id, t);
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            {
              ATerm w_7 (ATerm t)
              {
                t = split_2_0(_id, b_136, t);
                {
                  ATerm x_7 (ATerm t)
                  {
                    ATerm h_38 = NULL,j_38 = NULL,n_38 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        h_38 = ATgetArgument(t, 0);
                        n_38 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_38;
                    {
                      ATerm c_37 = t;
                      int d_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm f_37 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(d_37);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_38);
                        }
                      else
                        {
                          t = c_37;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm g_37 = ATgetArgument(t, 0);
                              j_38 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, n_38, j_38);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(x_7, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, w_7, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  if(match_cons(t, sym__3))
    {
      t_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
      r_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_38;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm u_38 = NULL;
      u_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_38, r_38);
      t = m_133(t);
      return(t);
    }
    ATerm e_8 (ATerm t)
    {
      ATerm v_38 = NULL;
      v_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_38, s_38);
      t = m_133(t);
      return(t);
    }
    t = n_133(d_8, e_8, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  if(match_cons(t, sym__2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_38;
  t = g_133(t);
  y_38 = t;
  t = map_1_0(new_0_0, t);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_38, z_38);
  t = zip_1_0(_id, t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_39, x_38);
  t = conc_0_0(t);
  b_39 = t;
  t = w_38;
  {
    ATerm f_8 (ATerm t)
    {
      t = z_38;
      return(t);
    }
    t = h_133(f_8, t);
    c_39 = t;
    t = (ATerm) ATmakeAppl(sym__3, c_39, x_38, b_39);
  }
  return(t);
}
ATerm SubsVar_2_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,k_39 = NULL;
  t = z_132(t);
  e_39 = t;
  t = a_133(t);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_39, k_39);
  t = lookup_0_0(t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  if(match_cons(t, sym__2))
    {
      r_39 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_39 = ATgetFirst((ATermList) t);
      u_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_39;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_39;
            if((r_39 != t))
              {
                _fail(t);
              }
            t = p_39;
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = (ATerm) ATmakeAppl(sym__2, r_39, u_39);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_39, u_39);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm r_133 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_40;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm h_8 (ATerm t)
      {
        t = e_40;
        return(t);
      }
      t = split_2_0(_id, h_8, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = r_133(g_8, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm g_113 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_40;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm i_40 = NULL;
      i_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_40, g_40);
      t = g_113(t);
      return(t);
    }
    t = SRTS_all(j_8, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm q_112 (ATerm), ATerm t)
{
  ATerm j_40 (ATerm t)
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_112(t);
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = all_dist_1_0(j_40, t);
      }
    return(t);
  }
  t = j_40(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  l_40 = t;
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_37 = ATgetArgument(t, 0);
            ATerm o_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(m_37);
        t = l_40;
      }
    else
      {
        t = l_37;
        {
          ATerm s_40 = NULL;
          if(match_cons(t, sym__3))
            {
              m_40 = ATgetArgument(t, 0);
              n_40 = ATgetArgument(t, 1);
              o_40 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_40, n_40);
          t = zip_1_0(_id, t);
          s_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_40, o_40);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm (ATerm), ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_132 (ATerm (ATerm), ATerm), ATerm s_132 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_40, (ATerm) ATempty);
  {
    ATerm v_40 (ATerm t)
    {
      ATerm k_8 (ATerm t)
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(o_132, t);
            ;
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            {
              ATerm r_37 = t;
              int s_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_2 = NULL,y_2 = NULL;
                  x_2 = t;
                  t = SSL_explode_term(x_2);
                  if(match_cons(t, sym__2))
                    {
                      ATerm t_37 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) t_37) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm u_37 = ATgetArgument(t, 1);
                        if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
                          {
                            y_2 = ATgetFirst((ATermList) u_37);
                            {
                              ATerm v_37 = (ATerm) ATgetNext((ATermList) u_37);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = y_2;
                  {
                    ATerm m_8 (ATerm t)
                    {
                      t = u_40;
                      return(t);
                    }
                    t = SubsVar_2_0(n_132, m_8, t);
                    t = s_132(t);
                  }
                  ;
                  LocalPopChoice(s_37);
                }
              else
                {
                  t = r_37;
                  t = RnBinding_2_0(p_132, r_132, t);
                  t = DistBinding_2_0(v_40, q_132, t);
                }
            }
          }
        return(t);
      }
      t = env_alltd_1_0(k_8, t);
      return(t);
    }
    t = v_40(t);
  }
  return(t);
}
ATerm substitute_5_0 (ATerm u_132 (ATerm), ATerm v_132 (ATerm (ATerm), ATerm), ATerm w_132 (ATerm), ATerm x_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_132 (ATerm (ATerm), ATerm), ATerm t)
{
  t = substitute_6_0(u_132, v_132, w_132, x_132, y_132, _id, t);
  return(t);
}
ATerm tsubstitute_0_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm w_40 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        w_40 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = w_40;
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm y_37 = t;
          int a_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(a_38);
            }
          else
            {
              t = y_37;
              {
                ATerm d_38 = t;
                int e_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(e_38);
                  }
                else
                  {
                    t = d_38;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = substitute_5_0(n_8, Var_1_0, o_8, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm ExpOverlay_1_0 (ATerm h_135 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      x_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_135(t);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
      b_41 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((x_40 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          c_41 = ATgetArgument(t, 1);
          d_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_41, y_40);
      t = zip_1_0(_id, t);
      z_40 = t;
      t = d_41;
      a_41 = t;
      t = b_41;
      return(t);
    }
    t = fetch_1_0(p_8, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_40), not_null(a_41));
    t = tsubstitute_0_0(t);
  }
  return(t);
}
ATerm exp_overlays1_1_0 (ATerm f_135 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm e_41 = NULL;
    e_41 = t;
    {
      ATerm f_38 = t;
      if((PushChoice() == 0))
        {
          t = f_135(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_38;
        }
      t = e_41;
      {
        ATerm t_8 (ATerm t)
        {
          ATerm u_8 (ATerm t)
          {
            t = ExpOverlay_1_0(f_135, t);
            return(t);
          }
          t = repeat_1_0(u_8, t);
          return(t);
        }
        t = topdown_1_0(t_8, t);
      }
    }
    return(t);
  }
  t = try_1_0(q_8, t);
  return(t);
}
ATerm ExpandOverlays_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(((ATgetType(g_38) == AT_LIST) && !(ATisEmpty(g_38))))
        {
          ATerm i_38 = ATgetFirst((ATermList) g_38);
          if(match_cons(i_38, sym_Signature_1))
            {
              f_41 = ATgetArgument(i_38, 0);
            }
          else
            _fail(t);
          {
            ATerm k_38 = (ATerm) ATgetNext((ATermList) g_38);
            if(((ATgetType(k_38) == AT_LIST) && !(ATisEmpty(k_38))))
              {
                ATerm l_38 = ATgetFirst((ATermList) k_38);
                if(match_cons(l_38, sym_Overlays_1))
                  {
                    g_41 = ATgetArgument(l_38, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm m_38 = (ATerm) ATgetNext((ATermList) k_38);
                  if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
                    {
                      ATerm o_38 = ATgetFirst((ATermList) m_38);
                      if(match_cons(o_38, sym_Strategies_1))
                        {
                          h_41 = ATgetArgument(o_38, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm p_38 = (ATerm) ATgetNext((ATermList) m_38);
                        if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
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
  t = g_41;
  {
    ATerm v_8 (ATerm t)
    {
      t = g_41;
      return(t);
    }
    t = exp_overlays1_1_0(v_8, t);
    i_41 = t;
    t = g_41;
    t = map_1_0(Overlay_to_Congdef_0_0, t);
    j_41 = t;
    t = h_41;
    {
      ATerm z_8 (ATerm t)
      {
        t = i_41;
        return(t);
      }
      t = exp_overlays2_1_0(z_8, t);
      k_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
      t = conc_0_0(t);
      l_41 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, l_41)), (ATerm) ATmakeAppl(sym_Signature_1, f_41)));
    }
  }
  return(t);
}
ATerm overlay_ud_0_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      m_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
      o_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_38, m_41));
  {
    ATerm a_9 (ATerm t)
    {
      t = term_d_39;
      return(t);
    }
    t = assert_1_0(a_9, t);
    t = n_41;
    t = DefineBound_0_0(t);
    t = o_41;
    t = use_vars_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Overlay_3, m_41, n_41, o_41);
  }
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
      z_41 = ATgetArgument(t, 2);
      s_41 = ATgetArgument(t, 3);
      t = s_41;
      if(match_cons(t, sym_StratRule_3))
        {
          t_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
          v_41 = ATgetArgument(t, 2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_39, x_41));
          {
            ATerm f_9 (ATerm t)
            {
              t = term_d_39;
              return(t);
            }
            t = assert_1_0(f_9, t);
            t = z_41;
            t = declared_vars_0_0(t);
            t = DefineBound_0_0(t);
            t = t_41;
            t = unbound_vars_0_0(t);
            t = u_41;
            t = unbound_vars_0_0(t);
            t = v_41;
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, x_41, y_41, z_41, (ATerm) ATmakeAppl(sym_StratRule_3, t_41, u_41, v_41));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              t_41 = ATgetArgument(t, 0);
              u_41 = ATgetArgument(t, 1);
              v_41 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_39, x_41));
          {
            ATerm g_9 (ATerm t)
            {
              t = term_d_39;
              return(t);
            }
            t = assert_1_0(g_9, t);
            t = z_41;
            t = declared_vars_0_0(t);
            t = DefineBound_0_0(t);
            t = t_41;
            t = bind_vars_0_0(t);
            t = v_41;
            t = unbound_vars_0_0(t);
            t = u_41;
            t = use_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, x_41, y_41, z_41, (ATerm) ATmakeAppl(sym_Rule_3, t_41, u_41, v_41));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          x_41 = ATgetArgument(t, 0);
          y_41 = ATgetArgument(t, 1);
          z_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_41;
      if(match_cons(t, sym_Rule_3))
        {
          a_42 = ATgetArgument(t, 0);
          b_42 = ATgetArgument(t, 1);
          c_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_39, x_41));
      {
        ATerm h_9 (ATerm t)
        {
          t = term_d_39;
          return(t);
        }
        t = assert_1_0(h_9, t);
        t = a_42;
        t = bind_vars_0_0(t);
        t = c_42;
        t = unbound_vars_0_0(t);
        t = b_42;
        t = use_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_RDef_3, x_41, y_41, (ATerm) ATmakeAppl(sym_Rule_3, a_42, b_42, c_42));
      }
    }
  return(t);
}
ATerm guardedlchoice_1_0 (ATerm p_136 (ATerm), ATerm t)
{
  ATerm i_9 (ATerm t)
  {
    t = GuardedLChoice_3_0(p_136, p_136, _id, t);
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    t = GuardedLChoice_3_0(_id, _id, p_136, t);
    return(t);
  }
  t = abstract_choice_2_0(i_9, j_9, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  b_43 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
      x_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_43);
  u_42 = t;
  t = v_42;
  t = e_97(t);
  y_42 = t;
  t = w_42;
  t = f_97(t);
  z_42 = t;
  t = x_42;
  t = g_97(t);
  a_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, y_42, z_42, a_43), u_42);
  return(t);
}
ATerm lchoice_1_0 (ATerm o_136 (ATerm), ATerm t)
{
  ATerm l_9 (ATerm t)
  {
    t = LChoice_2_0(o_136, _id, t);
    return(t);
  }
  ATerm n_9 (ATerm t)
  {
    t = LChoice_2_0(_id, o_136, t);
    return(t);
  }
  t = abstract_choice_2_0(l_9, n_9, t);
  return(t);
}
ATerm LChoice_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  k_43 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  f_43 = t;
  t = g_43;
  t = a_97(t);
  i_43 = t;
  t = h_43;
  t = b_97(t);
  j_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, i_43, j_43), f_43);
  return(t);
}
ATerm isect_Bound_0_0 (ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    ATerm u_9 (ATerm t)
    {
      ATerm i_44 (ATerm w_43, ATerm x_43, ATerm t)
      {
        t = x_43;
        {
          ATerm i_39 = t;
          int j_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)), w_43);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_39 = ATgetFirst((ATermList) t);
                  if(match_cons(l_39, sym_Defined_1))
                    {
                      ATerm n_39 = ATgetArgument(l_39, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_39 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = x_43;
              ;
              LocalPopChoice(j_39);
            }
          else
            {
              t = i_39;
              t = (ATerm) ATmakeAppl(sym__2, w_43, (ATerm) ATinsert(ATempty, term_q_39));
            }
        }
        return(t);
      }
      ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
      c_44 = t;
      if(match_cons(t, sym__2))
        {
          d_44 = ATgetArgument(t, 0);
          e_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_44;
      {
        ATerm v_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_44 = ATgetFirst((ATermList) t);
                {
                  ATerm x_39 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_39);
            t = f_44;
            {
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm a_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_39);
                  t = d_44;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm b_40 = t;
                      int c_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_44;
                          ;
                          LocalPopChoice(c_40);
                        }
                      else
                        {
                          t = b_40;
                          t = i_44(d_44, c_44, t);
                        }
                    }
                  else
                    {
                      t = i_44(d_44, c_44, t);
                    }
                }
              else
                {
                  t = y_39;
                  t = d_44;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = c_44;
                }
            }
          }
        else
          {
            t = v_39;
            t = d_44;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = c_44;
          }
      }
      return(t);
    }
    t = try_1_0(u_9, t);
    return(t);
  }
  t = map_1_0(r_9, t);
  t = restore_Bound_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm o_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      o_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_44;
  {
    ATerm v_9 (ATerm t)
    {
      ATerm t_44 = NULL,u_44 = NULL;
      if(match_cons(t, sym__2))
        {
          t_44 = ATgetArgument(t, 0);
          u_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(s_44, t_44, u_44);
      t = (ATerm) ATmakeAppl(sym__3, s_44, t_44, u_44);
      return(t);
    }
    t = map_1_0(v_9, t);
  }
  return(t);
}
ATerm restore_Bound_0_0 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, v_44);
  t = table_putlist_0_0(t);
  t = v_44;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_44 = NULL;
  w_44 = t;
  t = SSL_table_keys(w_44);
  {
    ATerm y_9 (ATerm t)
    {
      ATerm x_44 = NULL,y_44 = NULL;
      x_44 = t;
      t = SSL_table_get(w_44, x_44);
      y_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_44, y_44);
      return(t);
    }
    t = map_1_0(y_9, t);
  }
  return(t);
}
ATerm save_Bound_0_0 (ATerm t)
{
  t = term_d_40;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL;
  z_44 = t;
  t = save_Bound_0_0(t);
  a_45 = t;
  t = z_44;
  t = l_136(t);
  b_45 = t;
  t = save_Bound_0_0(t);
  c_45 = t;
  t = a_45;
  t = restore_Bound_0_0(t);
  t = b_45;
  t = m_136(t);
  d_45 = t;
  t = c_45;
  t = isect_Bound_0_0(t);
  t = d_45;
  return(t);
}
ATerm choice_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    t = Choice_2_0(n_136, _id, t);
    return(t);
  }
  ATerm d_10 (ATerm t)
  {
    t = Choice_2_0(_id, n_136, t);
    return(t);
  }
  t = abstract_choice_2_0(z_9, d_10, t);
  return(t);
}
ATerm Choice_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  j_45 = t;
  if(match_cons(t, sym_Choice_2))
    {
      f_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_45);
  e_45 = t;
  t = f_45;
  t = y_95(t);
  h_45 = t;
  t = g_45;
  t = z_95(t);
  i_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, h_45, i_45), e_45);
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm v_46 = NULL;
  v_46 = t;
  {
    ATerm k_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm e_10 (ATerm t)
          {
            t = term_d_39;
            return(t);
          }
          t = rewrite_1_0(e_10, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_40 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_40) != ATmakeSymbol("j_1", 0, ATtrue)))
                _fail(t);
              d_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_46), term_p_41), d_3), term_r_40);
        }
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = k_40;
        {
          ATerm q_41 = t;
          int r_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_3 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm f_10 (ATerm t)
                {
                  t = term_d_39;
                  return(t);
                }
                t = rewrite_1_0(f_10, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_41) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    g_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_46), term_p_41), g_3), term_d_42);
              }
              ;
              LocalPopChoice(r_41);
            }
          else
            {
              t = q_41;
              {
                ATerm e_42 = t;
                int f_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_3 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm g_10 (ATerm t)
                      {
                        t = term_d_39;
                        return(t);
                      }
                      t = rewrite_1_0(g_10, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm g_42 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) g_42) != ATmakeSymbol("d_1", 0, ATtrue)))
                            _fail(t);
                          j_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_46), term_p_41), j_3), term_d_42);
                    }
                    ;
                    LocalPopChoice(f_42);
                  }
                else
                  {
                    t = e_42;
                    {
                      ATerm h_42 = t;
                      int i_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_3 = NULL;
                          t = (ATerm) ATempty;
                          {
                            ATerm j_10 (ATerm t)
                            {
                              t = term_d_39;
                              return(t);
                            }
                            t = rewrite_1_0(j_10, t);
                            if(match_cons(t, sym_Defined_2))
                              {
                                ATerm j_42 = ATgetArgument(t, 0);
                                if((ATgetSymbol((ATermAppl) j_42) != ATmakeSymbol("a_1", 0, ATtrue)))
                                  _fail(t);
                                m_3 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_46), term_p_41), m_3), term_d_42);
                          }
                          ;
                          LocalPopChoice(i_42);
                        }
                      else
                        {
                          t = h_42;
                          {
                            ATerm k_42 = t;
                            int l_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_3 = NULL;
                                t = (ATerm) ATempty;
                                {
                                  ATerm l_10 (ATerm t)
                                  {
                                    t = term_d_39;
                                    return(t);
                                  }
                                  t = rewrite_1_0(l_10, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm m_42 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) m_42) != ATmakeSymbol("x_0", 0, ATtrue)))
                                        _fail(t);
                                      p_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_46), term_p_41), p_3), term_n_42);
                                }
                                ;
                                LocalPopChoice(l_42);
                              }
                            else
                              {
                                t = k_42;
                                {
                                  ATerm s_3 = NULL;
                                  t = (ATerm) ATempty;
                                  {
                                    ATerm p_10 (ATerm t)
                                    {
                                      t = term_d_39;
                                      return(t);
                                    }
                                    t = rewrite_1_0(p_10, t);
                                    if(match_cons(t, sym_Defined_2))
                                      {
                                        ATerm o_42 = ATgetArgument(t, 0);
                                        if((ATgetSymbol((ATermAppl) o_42) != ATmakeSymbol("u_0", 0, ATtrue)))
                                          _fail(t);
                                        s_3 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_46), term_p_41), s_3), term_n_42);
                                  }
                                }
                              }
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
  ATerm d_47 = NULL,u_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_42), d_47), term_p_42);
  t = Context_0_0(t);
  u_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), u_3);
  t = u_3;
  return(t);
}
ATerm Bound_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t_47 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_47;
        {
          ATerm q_10 (ATerm t)
          {
            t = term_d_40;
            return(t);
          }
          t = rewrite_1_0(q_10, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_42) != ATmakeSymbol("q_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Var_1, u_47);
        }
        ;
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        {
          ATerm c_43 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_47;
              {
                ATerm u_10 (ATerm t)
                {
                  t = term_d_40;
                  return(t);
                }
                t = rewrite_1_0(u_10, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
              ;
              LocalPopChoice(d_43);
            }
          else
            {
              t = c_43;
              t = t_47;
              {
                ATerm v_10 (ATerm t)
                {
                  t = term_d_40;
                  return(t);
                }
                t = rewrite_1_0(v_10, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm e_43 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_43) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, u_47);
              }
            }
        }
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm l_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(m_43);
      {
        ATerm n_43 = t;
        int o_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0_0(t);
            ;
            LocalPopChoice(o_43);
          }
        else
          {
            t = n_43;
            t = Unbound_0_0(t);
            _fail(t);
          }
      }
    }
  else
    {
      t = l_43;
      {
        ATerm p_43 = t;
        int q_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(q_43);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = p_43;
            {
              ATerm r_43 = t;
              int s_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(s_43);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = r_43;
                  t = SRTS_all(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym_Rule_3))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
      b_48 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_48);
  y_47 = t;
  t = z_47;
  t = r_94(t);
  c_48 = t;
  t = a_48;
  t = s_94(t);
  d_48 = t;
  t = b_48;
  t = t_94(t);
  e_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, c_48, d_48, e_48), y_47);
  return(t);
}
ATerm RootApp_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
  m_48 = t;
  if(match_cons(t, sym_RootApp_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_48);
  j_48 = t;
  t = k_48;
  t = q_93(t);
  l_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, l_48), j_48);
  return(t);
}
ATerm App_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  v_48 = t;
  if(match_cons(t, sym_App_2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_48);
  q_48 = t;
  t = r_48;
  t = o_93(t);
  t_48 = t;
  t = s_48;
  t = p_93(t);
  u_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, t_48, u_48), q_48);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
  if(match_cons(t, sym__3))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
      b_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(z_48, a_49);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_43 = ATgetFirst((ATermList) t);
      c_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(z_48, a_49, (ATerm) ATinsert(CheckATermList(c_49), b_49));
  t = (ATerm) ATmakeAppl(sym__3, z_48, a_49, b_49);
  return(t);
}
ATerm override_key_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_124(t);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_49, d_49, e_49);
  t = table_replace_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm g_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_49), term_v_43);
  {
    ATerm y_10 (ATerm t)
    {
      t = term_d_40;
      return(t);
    }
    t = override_key_1_0(y_10, t);
    t = (ATerm) ATmakeAppl(sym_Var_1, g_49);
  }
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      LocalPopChoice(z_43);
      t = Binding_0_0(t);
    }
  else
    {
      t = y_43;
      {
        ATerm a_44 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2_0(_id, _id, t);
            LocalPopChoice(b_44);
            t = App_2_0(unbound_vars_0_0, use_vars_0_0, t);
          }
        else
          {
            t = a_44;
            {
              ATerm g_44 = t;
              int h_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1_0(_id, t);
                  LocalPopChoice(h_44);
                  t = RootApp_1_0(unbound_vars_0_0, t);
                }
              else
                {
                  t = g_44;
                  t = SRTS_all(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
  k_49 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  h_49 = t;
  t = i_49;
  t = r_96(t);
  j_49 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, j_49), h_49);
  return(t);
}
ATerm Build_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
  r_49 = t;
  if(match_cons(t, sym_Build_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_49);
  o_49 = t;
  t = p_49;
  t = s_96(t);
  q_49 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, q_49), o_49);
  return(t);
}
ATerm VarScope_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    t = term_d_40;
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = Scope_2_0(DefineUnbound_0_0, k_136, t);
    return(t);
  }
  t = scope_2_0(z_10, c_11, t);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(_id, _id, t);
      LocalPopChoice(k_44);
      t = VarScope_1_0(unbound_vars_0_0, t);
    }
  else
    {
      t = j_44;
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(_id, t);
            LocalPopChoice(m_44);
            t = Build_1_0(use_vars_0_0, t);
          }
        else
          {
            t = l_44;
            {
              ATerm n_44 = t;
              int p_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1_0(_id, t);
                  LocalPopChoice(p_44);
                  t = Match_1_0(bind_vars_0_0, t);
                }
              else
                {
                  t = n_44;
                  {
                    ATerm q_44 = t;
                    int r_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3_0(_id, _id, _id, t);
                        LocalPopChoice(r_44);
                        t = Rule_3_0(bind_vars_0_0, _id, _id, t);
                        t = Rule_3_0(_id, _id, unbound_vars_0_0, t);
                        t = Rule_3_0(_id, use_vars_0_0, _id, t);
                      }
                    else
                      {
                        t = q_44;
                        {
                          ATerm k_45 = t;
                          int l_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(_id, _id, t);
                              LocalPopChoice(l_45);
                              t = choice_1_0(unbound_vars_0_0, t);
                            }
                          else
                            {
                              t = k_45;
                              {
                                ATerm m_45 = t;
                                int n_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(_id, _id, t);
                                    LocalPopChoice(n_45);
                                    t = lchoice_1_0(unbound_vars_0_0, t);
                                  }
                                else
                                  {
                                    t = m_45;
                                    {
                                      ATerm o_45 = t;
                                      int p_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(_id, _id, _id, t);
                                          LocalPopChoice(p_45);
                                          t = guardedlchoice_1_0(unbound_vars_0_0, t);
                                        }
                                      else
                                        {
                                          t = o_45;
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
  ATerm d_11 (ATerm t)
  {
    ATerm v_49 = NULL;
    v_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_49), term_r_45);
    {
      ATerm g_11 (ATerm t)
      {
        t = term_d_40;
        return(t);
      }
      t = assert_1_0(g_11, t);
      t = v_49;
    }
    return(t);
  }
  t = map_1_0(d_11, t);
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm x_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      z_49 = ATgetArgument(t, 0);
      a_50 = ATgetArgument(t, 1);
      b_50 = ATgetArgument(t, 2);
      x_49 = ATgetArgument(t, 3);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_45, z_49));
      {
        ATerm h_11 (ATerm t)
        {
          t = term_d_39;
          return(t);
        }
        t = assert_1_0(h_11, t);
        t = b_50;
        t = declared_vars_0_0(t);
        t = DefineBound_0_0(t);
        t = x_49;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_49, a_50, b_50, x_49);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_49 = ATgetArgument(t, 0);
          a_50 = ATgetArgument(t, 1);
          b_50 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_45, z_49));
      {
        ATerm k_11 (ATerm t)
        {
          t = term_d_39;
          return(t);
        }
        t = assert_1_0(k_11, t);
        t = b_50;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDef_3, z_49, a_50, b_50);
      }
    }
  return(t);
}
ATerm DefineUnbound_0_0 (ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm j_50 = NULL;
    j_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_50), term_q_39);
    {
      ATerm m_11 (ATerm t)
      {
        t = term_d_40;
        return(t);
      }
      t = assert_1_0(m_11, t);
      t = j_50;
    }
    return(t);
  }
  t = map_1_0(l_11, t);
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm o_11 (ATerm t)
  {
    t = term_d_39;
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    ATerm q_11 (ATerm t)
    {
      t = term_d_40;
      return(t);
    }
    ATerm s_11 (ATerm t)
    {
      ATerm k_50 = NULL;
      k_50 = t;
      t = tvars_0_0(t);
      t = DefineUnbound_0_0(t);
      t = k_50;
      {
        ATerm u_45 = t;
        int v_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = sdef_ud_0_0(t);
            ;
            LocalPopChoice(v_45);
          }
        else
          {
            t = u_45;
            {
              ATerm w_45 = t;
              int x_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = rdef_ud_0_0(t);
                  ;
                  LocalPopChoice(x_45);
                }
              else
                {
                  t = w_45;
                  t = overlay_ud_0_0(t);
                }
            }
          }
      }
      return(t);
    }
    t = scope_2_0(q_11, s_11, t);
    return(t);
  }
  t = scope_2_0(o_11, p_11, t);
  return(t);
}
ATerm defs_use_def_0_0 (ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
      {
        ATerm l_50 = NULL;
        l_50 = t;
        {
          ATerm t_11 (ATerm t)
          {
            ATerm a_46 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_46;
              }
            return(t);
          }
          t = filter_1_0(t_11, t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_50;
        }
      }
    }
  return(t);
}
ATerm Signature_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  q_50 = t;
  if(match_cons(t, sym_Signature_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_50);
  n_50 = t;
  t = o_50;
  t = d_92(t);
  p_50 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, p_50), n_50);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm v_11 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm x_11 (ATerm t)
    {
      ATerm z_11 (ATerm t)
      {
        t = Overlays_1_0(defs_use_def_0_0, t);
        return(t);
      }
      ATerm a_12 (ATerm t)
      {
        ATerm b_12 (ATerm t)
        {
          t = Strategies_1_0(defs_use_def_0_0, t);
          return(t);
        }
        ATerm c_12 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(b_12, c_12, t);
        return(t);
      }
      t = Cons_2_0(z_11, a_12, t);
      return(t);
    }
    t = Cons_2_0(v_11, x_11, t);
    return(t);
  }
  t = Specification_1_0(u_11, t);
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm d_12 (ATerm t)
        {
          ATerm e_12 (ATerm t)
          {
            t = map1_1_0(q_0, t);
            return(t);
          }
          t = try_1_0(e_12, t);
          return(t);
        }
        t = Cons_2_0(_id, d_12, t);
      }
      ;
      LocalPopChoice(c_46);
    }
  else
    {
      t = b_46;
      {
        ATerm f_12 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, f_12, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,d_51 = NULL,e_51 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_51, e_51);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_51 = ATgetArgument(t, 0);
          t = d_51;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_50 = ATgetFirst((ATermList) t);
              z_50 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, y_50, (ATerm) ATmakeAppl(sym_LChoices_1, z_50));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_d_46;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_51 = ATgetArgument(t, 0);
              t = d_51;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_50 = ATgetFirst((ATermList) t);
                  z_50 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, y_50, (ATerm) ATmakeAppl(sym_Choices_1, z_50));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_d_46;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_51 = ATgetArgument(t, 0);
                  t = d_51;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_50 = ATgetFirst((ATermList) t);
                      z_50 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_50, (ATerm) ATmakeAppl(sym_Seqs_1, z_50));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_r_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_51 = ATgetArgument(t, 0);
                      e_51 = ATgetArgument(t, 1);
                      b_51 = ATgetArgument(t, 2);
                      a_51 = ATgetArgument(t, 3);
                      {
                        ATerm r_51 = NULL,s_51 = NULL;
                        t = e_51;
                        {
                          ATerm g_12 (ATerm t)
                          {
                            ATerm t_51 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                t_51 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, t_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_29), term_q_29));
                            return(t);
                          }
                          t = map1_1_0(g_12, t);
                          r_51 = t;
                          t = b_51;
                          {
                            ATerm h_12 (ATerm t)
                            {
                              ATerm i_12 (ATerm t)
                              {
                                ATerm u_51 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    u_51 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, u_51, term_q_29);
                                return(t);
                              }
                              t = try_1_0(i_12, t);
                              return(t);
                            }
                            t = map1_1_0(h_12, t);
                            s_51 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_51, r_51, s_51, a_51);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_51 = ATgetArgument(t, 0);
                          e_51 = ATgetArgument(t, 1);
                          b_51 = ATgetArgument(t, 2);
                          a_51 = ATgetArgument(t, 3);
                          {
                            ATerm e_46 = t;
                            int f_46 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_51 = NULL,a_52 = NULL;
                                t = b_51;
                                {
                                  ATerm j_12 (ATerm t)
                                  {
                                    ATerm b_52 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        b_52 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, b_52, term_q_29);
                                    return(t);
                                  }
                                  t = map1_1_0(j_12, t);
                                  z_51 = t;
                                  t = e_51;
                                  {
                                    ATerm k_12 (ATerm t)
                                    {
                                      ATerm l_12 (ATerm t)
                                      {
                                        ATerm c_52 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            c_52 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_29), term_q_29));
                                        return(t);
                                      }
                                      t = try_1_0(l_12, t);
                                      return(t);
                                    }
                                    t = map_1_0(k_12, t);
                                    a_52 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_51, a_52, z_51, a_51);
                                  }
                                }
                                ;
                                LocalPopChoice(f_46);
                              }
                            else
                              {
                                t = e_46;
                                {
                                  ATerm j_52 = NULL,k_52 = NULL;
                                  t = e_51;
                                  {
                                    ATerm m_12 (ATerm t)
                                    {
                                      ATerm l_52 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          l_52 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_29), term_q_29));
                                      return(t);
                                    }
                                    t = map1_1_0(m_12, t);
                                    j_52 = t;
                                    t = b_51;
                                    {
                                      ATerm o_12 (ATerm t)
                                      {
                                        ATerm q_12 (ATerm t)
                                        {
                                          ATerm m_52 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              m_52 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, m_52, term_q_29);
                                          return(t);
                                        }
                                        t = try_1_0(q_12, t);
                                        return(t);
                                      }
                                      t = map_1_0(o_12, t);
                                      k_52 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_51, j_52, k_52, a_51);
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
                              d_51 = ATgetArgument(t, 0);
                              e_51 = ATgetArgument(t, 1);
                              b_51 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_51, (ATerm) ATmakeAppl(sym_Op_2, term_b_21, (ATerm) ATinsert(ATinsert(ATempty, b_51), d_51)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_51 = ATgetArgument(t, 0);
                                  e_51 = ATgetArgument(t, 1);
                                  b_51 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_51)), d_51), (ATerm) ATmakeAppl(sym_Build_1, e_51)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_51 = ATgetArgument(t, 0);
                                      e_51 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_51, (ATerm) ATmakeAppl(sym_Match_1, e_51));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_51 = ATgetArgument(t, 0);
                                          e_51 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_51), e_51);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_51 = ATgetArgument(t, 0);
                                              e_51 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_51), d_51);
                                        }
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
ATerm unzip_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_g_46;
    return(t);
  }
  ATerm s_12 (ATerm t)
  {
    ATerm z_52 = NULL,a_53 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_52 = ATgetFirst((ATermList) t);
        a_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_52, a_53);
    return(t);
  }
  ATerm t_12 (ATerm t)
  {
    ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_46 = ATgetArgument(t, 0);
        if(match_cons(h_46, sym__2))
          {
            b_53 = ATgetArgument(h_46, 0);
            d_53 = ATgetArgument(h_46, 1);
          }
        else
          _fail(t);
        {
          ATerm i_46 = ATgetArgument(t, 1);
          if(match_cons(i_46, sym__2))
            {
              c_53 = ATgetArgument(i_46, 0);
              e_53 = ATgetArgument(i_46, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_53), b_53), (ATerm) ATinsert(CheckATermList(e_53), d_53));
    return(t);
  }
  t = genzip_4_0(r_12, s_12, t_12, e_116, t);
  return(t);
}
ATerm unzip_0_0 (ATerm t)
{
  t = unzip_1_0(_id, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm i_53 = NULL;
  i_53 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), i_53);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_53;
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm u_12 (ATerm t)
  {
    ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
    m_53 = t;
    {
      ATerm j_46 = t;
      int k_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Var_1))
            {
              ATerm l_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          LocalPopChoice(k_46);
          t = m_53;
          {
            ATerm m_46 = t;
            if((PushChoice() == 0))
              {
                t = ContextVar_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_46;
              }
            t = term_o_46;
          }
        }
      else
        {
          t = j_46;
          if(match_cons(t, sym_Wld_0))
            {
              t = term_o_46;
            }
          else
            {
              if(match_cons(t, sym_RootApp_1))
                {
                  n_53 = ATgetArgument(t, 0);
                  {
                    ATerm r_53 = NULL;
                    t = n_53;
                    t = tvars_0_0(t);
                    {
                      ATerm v_12 (ATerm t)
                      {
                        ATerm s_53 = NULL;
                        s_53 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, s_53);
                        return(t);
                      }
                      t = map_1_0(v_12, t);
                      r_53 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_p_46, r_53);
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_App_2))
                    {
                      n_53 = ATgetArgument(t, 0);
                      o_53 = ATgetArgument(t, 1);
                      {
                        ATerm v_53 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, n_53, o_53);
                        t = tvars_0_0(t);
                        {
                          ATerm w_12 (ATerm t)
                          {
                            ATerm w_53 = NULL;
                            w_53 = t;
                            t = (ATerm) ATmakeAppl(sym_Var_1, w_53);
                            return(t);
                          }
                          t = map_1_0(w_12, t);
                          v_53 = t;
                          t = (ATerm) ATmakeAppl(sym_Op_2, term_p_46, v_53);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Con_3))
                        {
                          ATerm q_46 = ATgetArgument(t, 0);
                          ATerm r_46 = ATgetArgument(t, 1);
                          ATerm s_46 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATinsert(ATempty, term_t_46);
                      t = fatal_error_0_0(t);
                    }
                }
            }
        }
    }
    return(t);
  }
  t = alltd_1_0(u_12, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL;
  f_53 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_53;
  {
    ATerm x_12 (ATerm t)
    {
      t = term_u_46;
      return(t);
    }
    t = rewrite_1_0(x_12, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm w_46 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) w_46) != ATmakeSymbol("l_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Var_1, g_53);
  }
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_56 (ATerm f_54, ATerm g_54, ATerm h_54, ATerm i_54, ATerm j_54, ATerm k_54, ATerm l_54, ATerm t)
  {
    ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, j_54, term_y_46);
    {
      ATerm z_46 = t;
      if((PushChoice() == 0))
        {
          ATerm a_55 = NULL;
          if(match_cons(t, sym__2))
            {
              a_55 = ATgetArgument(t, 0);
              if((a_55 != ATgetArgument(t, 1)))
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
          t = z_46;
        }
      t = new_0_0(t);
      s_54 = t;
      t = i_54;
      t = dummify_0_0(t);
      t_54 = t;
      {
        ATerm y_12 (ATerm t)
        {
          if((i_54 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, s_54);
          return(t);
        }
        t = try_1_0(y_12, t);
        u_54 = t;
        t = t_54;
        t = tvars_0_0(t);
        {
          ATerm z_12 (ATerm t)
          {
            ATerm b_55 = NULL;
            b_55 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, b_55);
            return(t);
          }
          t = map_1_0(z_12, t);
          v_54 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
          t = tvars_0_0(t);
          {
            ATerm a_13 (ATerm t)
            {
              ATerm c_55 = NULL;
              c_55 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, c_55);
              t = ContextVar_0_0(t);
              return(t);
            }
            t = filter_1_0(a_13, t);
            w_54 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_54, v_54);
            t = diff_0_0(t);
            x_54 = t;
            t = new_0_0(t);
            y_54 = t;
            t = f_54;
            t = n_0(t);
            z_54 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_54, (ATerm) ATmakeAppl(sym_Op_2, term_a_47, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_47, (ATerm) ATinsert(CheckATermList(x_54), (ATerm) ATmakeAppl(sym_Str_1, y_54)))), t_54)))), (ATerm) ATmakeAppl(sym_RDefT_4, f_54, g_54, h_54, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_54), i_54), j_54, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_54)))), u_54), (ATerm) ATmakeAppl(sym_Op_2, term_b_47, (ATerm) ATinsert(CheckATermList(x_54), (ATerm) ATmakeAppl(sym_Str_1, y_54)))), k_54))));
          }
        }
      }
    }
    return(t);
  }
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  f_55 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      g_55 = ATgetArgument(t, 0);
      h_55 = ATgetArgument(t, 1);
      x_55 = ATgetArgument(t, 2);
      y_55 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = y_55;
  if(match_cons(t, sym_Rule_3))
    {
      z_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
      b_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_56;
  if(match_cons(t, sym_Op_2))
    {
      d_55 = ATgetArgument(t, 0);
      e_55 = ATgetArgument(t, 1);
      t = e_55;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = d_55;
          if(match_string(t, "Undefined"))
            {
              ATerm f_47 = t;
              int g_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
                  t = f_55;
                  t = new_0_0(t);
                  h_56 = t;
                  t = z_55;
                  t = dummify_0_0(t);
                  i_56 = t;
                  {
                    ATerm b_13 (ATerm t)
                    {
                      if((z_55 != t))
                        {
                          _fail(t);
                        }
                      t = (ATerm) ATmakeAppl(sym_Var_1, h_56);
                      return(t);
                    }
                    t = try_1_0(b_13, t);
                    j_56 = t;
                    t = g_55;
                    t = n_0(t);
                    k_56 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, k_56, (ATerm) ATmakeAppl(sym_Op_2, term_a_47, (ATerm) ATinsert(ATinsert(ATempty, term_y_46), i_56)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_55, h_55, x_55, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, h_56), z_55), term_y_46, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_55)))), j_56), term_y_46), (ATerm) ATmakeAppl(sym_Seq_2, b_56, term_d_46)))));
                  }
                  ;
                  LocalPopChoice(g_47);
                }
              else
                {
                  t = f_47;
                  t = l_56(g_55, h_55, x_55, z_55, a_56, b_56, f_55, t);
                }
            }
          else
            {
              t = l_56(g_55, h_55, x_55, z_55, a_56, b_56, f_55, t);
            }
        }
      else
        {
          t = d_55;
          t = l_56(g_55, h_55, x_55, z_55, a_56, b_56, f_55, t);
        }
    }
  else
    {
      t = l_56(g_55, h_55, x_55, z_55, a_56, b_56, f_55, t);
    }
  return(t);
}
ATerm split_dynamic_rules_0_0 (ATerm t)
{
  ATerm o_56 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      o_56 = ATgetArgument(t, 0);
      t = o_56;
      {
        ATerm c_13 (ATerm t)
        {
          ATerm d_13 (ATerm t)
          {
            ATerm q_56 = NULL;
            q_56 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_i_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_56))));
            return(t);
          }
          t = SplitDynamicRule_1_0(d_13, t);
          return(t);
        }
        t = map_1_0(c_13, t);
        t = unzip_0_0(t);
      }
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          o_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_56;
      {
        ATerm e_13 (ATerm t)
        {
          ATerm f_13 (ATerm t)
          {
            ATerm s_56 = NULL;
            s_56 = t;
            t = (ATerm) ATmakeAppl(sym_Call_2, term_k_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, s_56))));
            return(t);
          }
          t = SplitDynamicRule_1_0(f_13, t);
          return(t);
        }
        t = map_1_0(e_13, t);
        t = unzip_0_0(t);
      }
    }
  return(t);
}
ATerm split_under_scope_1_0 (ATerm c_135 (ATerm), ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      t_56 = ATgetArgument(t, 0);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_13 (ATerm t)
    {
      t = term_u_46;
      return(t);
    }
    ATerm h_13 (ATerm t)
    {
      t = t_56;
      t = DeclareContextVars_0_0(t);
      t = u_56;
      t = c_135(t);
      v_56 = t;
      return(t);
    }
    t = scope_2_0(g_13, h_13, t);
    t = (ATerm) ATmakeAppl(sym_Scope_2, t_56, not_null(v_56));
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm w_56 (ATerm t)
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_109(t);
        ;
        LocalPopChoice(m_47);
      }
    else
      {
        t = l_47;
        t = SRTS_one(w_56, t);
      }
    return(t);
  }
  t = w_56(t);
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm a_135 (ATerm), ATerm t)
{
  ATerm x_56 (ATerm t)
  {
    ATerm i_13 (ATerm t)
    {
      ATerm n_47 = t;
      int o_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_135(t);
          ;
          LocalPopChoice(o_47);
        }
      else
        {
          t = n_47;
          t = split_under_scope_1_0(x_56, t);
        }
      return(t);
    }
    t = oncetd_1_0(i_13, t);
    return(t);
  }
  t = x_56(t);
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm y_56 = NULL;
    y_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_56), term_q_47);
    {
      ATerm k_13 (ATerm t)
      {
        t = term_u_46;
        return(t);
      }
      t = assert_1_0(k_13, t);
      t = y_56;
    }
    return(t);
  }
  t = map_1_0(j_13, t);
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_56 = ATgetFirst((ATermList) t);
      a_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_13 (ATerm t)
    {
      t = term_u_46;
      return(t);
    }
    ATerm m_13 (ATerm t)
    {
      t = z_56;
      t = tvars_0_0(t);
      t = DeclareContextVars_0_0(t);
      t = z_56;
      {
        ATerm n_13 (ATerm t)
        {
          t = split_dynamic_rules_0_0(t);
          if(match_cons(t, sym__2))
            {
              c_57 = ATgetArgument(t, 0);
              b_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, c_57);
          return(t);
        }
        t = split_dynamic_rule_1_0(n_13, t);
        d_57 = t;
      }
      return(t);
    }
    t = scope_2_0(l_13, m_13, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_57)), not_null(d_57)), a_57);
    t = conc_0_0(t);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm a_115 (ATerm), ATerm t)
{
  ATerm e_57 (ATerm t)
  {
    t = a_115(t);
    {
      ATerm r_47 = t;
      int s_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(s_47);
        }
      else
        {
          t = r_47;
          t = Cons_2_0(_id, e_57, t);
        }
    }
    return(t);
  }
  t = e_57(t);
  return(t);
}
ATerm lift_dynamic_rules_0_0 (ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    t = repeat_1_0(lift_dynamic_rule_0_0, t);
    return(t);
  }
  t = listtd_1_0(o_13, t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,m_57 = NULL,n_57 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      m_57 = ATgetArgument(t, 0);
      n_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_57 = ATgetFirst((ATermList) t);
      i_57 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_w_47, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, i_57, n_57)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_57))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_57;
    }
  return(t);
}
ATerm define_rule_scope_0_0 (ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    t = try_1_0(DefDynamicRuleScope_0_0, t);
    return(t);
  }
  t = topdown_1_0(p_13, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm r_13 (ATerm t)
    {
      ATerm s_13 (ATerm t)
      {
        ATerm t_13 (ATerm t)
        {
          ATerm v_13 (ATerm t)
          {
            t = define_rule_scope_0_0(t);
            t = lift_dynamic_rules_0_0(t);
            return(t);
          }
          t = Strategies_1_0(v_13, t);
          return(t);
        }
        ATerm u_13 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(t_13, u_13, t);
        return(t);
      }
      t = Cons_2_0(_id, s_13, t);
      return(t);
    }
    t = Cons_2_0(_id, r_13, t);
    return(t);
  }
  t = Specification_1_0(q_13, t);
  return(t);
}
ATerm DefScopeDefault_0_0 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym_ScopeDefault_1))
    {
      s_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_57;
  t = tvars_0_0(t);
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_57, s_57);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  x_57 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_57);
  u_57 = t;
  t = v_57;
  t = r_95(t);
  w_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, w_57), u_57);
  return(t);
}
ATerm Scope_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  g_58 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_58);
  b_58 = t;
  t = c_58;
  t = u_96(t);
  e_58 = t;
  t = d_58;
  t = v_96(t);
  f_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, e_58, f_58), b_58);
  return(t);
}
ATerm tboundin_3_0 (ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm t)
{
  ATerm x_47 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(e_136, c_136, t);
      ;
      LocalPopChoice(g_48);
    }
  else
    {
      t = x_47;
      {
        ATerm h_48 = t;
        int i_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(e_136, e_136, e_136, c_136, t);
            ;
            LocalPopChoice(i_48);
          }
        else
          {
            t = h_48;
            {
              ATerm n_48 = t;
              int o_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(e_136, e_136, e_136, c_136, t);
                  ;
                  LocalPopChoice(o_48);
                }
              else
                {
                  t = n_48;
                  t = DynamicRules_1_0(c_136, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm k_58 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm p_48 = ATgetArgument(t, 0);
      ATerm w_48 = ATgetArgument(t, 1);
      k_58 = ATgetArgument(t, 2);
      {
        ATerm x_48 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = k_58;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    ATerm o_58 = NULL;
    ATerm y_48 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            o_58 = ATgetArgument(t, 0);
            {
              ATerm m_49 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_49);
        t = o_58;
      }
    else
      {
        t = y_48;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            o_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_58;
      }
    return(t);
  }
  t = map_1_0(w_13, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm r_58 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm n_49 = ATgetArgument(t, 0);
      ATerm s_49 = ATgetArgument(t, 1);
      r_58 = ATgetArgument(t, 2);
      {
        ATerm t_49 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = r_58;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm s_58 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      s_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_58;
  t = tvars_0_0(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_58 = NULL,z_58 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_58 = ATgetArgument(t, 0);
      t = z_58;
      if(match_cons(t, sym_Rule_3))
        {
          v_58 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
          {
            ATerm w_49 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_58;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_58 = ATgetArgument(t, 0);
          {
            ATerm y_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_58;
    }
  return(t);
}
ATerm union_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL;
  if(match_cons(t, sym__2))
    {
      e_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_59;
  {
    ATerm f_59 (ATerm t)
    {
      ATerm c_50 = t;
      int d_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_59;
          ;
          LocalPopChoice(d_50);
        }
      else
        {
          t = c_50;
          {
            ATerm e_50 = t;
            int f_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_13 (ATerm t)
                {
                  t = d_59;
                  return(t);
                }
                t = HdMember_p__2_0(u_117, x_13, t);
                t = f_59(t);
                ;
                LocalPopChoice(f_50);
              }
            else
              {
                t = e_50;
                t = Cons_2_0(_id, f_59, t);
              }
          }
        }
      return(t);
    }
    t = f_59(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    ATerm g_59 = NULL;
    if(match_cons(t, sym__2))
      {
        g_59 = ATgetArgument(t, 0);
        if((g_59 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(y_13, t);
  return(t);
}
ATerm crush_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  h_59 = t;
  t = SSL_explode_term(h_59);
  if(match_cons(t, sym__2))
    {
      ATerm g_50 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_59;
  t = foldr_3_0(n_123, o_123, p_123, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_59 = ATgetFirst((ATermList) t);
      k_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_117(t);
  {
    ATerm z_13 (ATerm t)
    {
      ATerm l_59 = NULL;
      l_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_59, l_59);
      t = y_117(t);
      return(t);
    }
    t = fetch_1_0(z_13, t);
    t = k_59;
  }
  return(t);
}
ATerm diff_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  if(match_cons(t, sym__2))
    {
      n_59 = ATgetArgument(t, 0);
      m_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_59;
  {
    ATerm o_59 (ATerm t)
    {
      ATerm h_50 = t;
      int i_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_50);
        }
      else
        {
          t = h_50;
          {
            ATerm m_50 = t;
            int r_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_14 (ATerm t)
                {
                  t = m_59;
                  return(t);
                }
                t = HdMember_p__2_0(q_117, a_14, t);
                t = o_59(t);
                ;
                LocalPopChoice(r_50);
              }
            else
              {
                t = m_50;
                t = Cons_2_0(_id, o_59, t);
              }
          }
        }
      return(t);
    }
    t = o_59(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t)
{
  ATerm p_59 (ATerm t)
  {
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_115(t);
        ;
        LocalPopChoice(t_50);
      }
    else
      {
        t = s_50;
        t = v_115(t);
        t = _2_0(x_115, p_59, t);
        t = w_115(t);
      }
    return(t);
  }
  t = p_59(t);
  return(t);
}
ATerm zip_1_0 (ATerm z_115 (ATerm), ATerm t)
{
  ATerm b_14 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm u_50 = ATgetArgument(t, 0);
        if(((ATgetType(u_50) != AT_LIST) || !(ATisEmpty(u_50))))
          _fail(t);
        {
          ATerm v_50 = ATgetArgument(t, 1);
          if(((ATgetType(v_50) != AT_LIST) || !(ATisEmpty(v_50))))
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
    ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm w_50 = ATgetArgument(t, 0);
        if(((ATgetType(w_50) == AT_LIST) && !(ATisEmpty(w_50))))
          {
            q_59 = ATgetFirst((ATermList) w_50);
            s_59 = (ATerm) ATgetNext((ATermList) w_50);
          }
        else
          _fail(t);
        {
          ATerm x_50 = ATgetArgument(t, 1);
          if(((ATgetType(x_50) == AT_LIST) && !(ATisEmpty(x_50))))
            {
              r_59 = ATgetFirst((ATermList) x_50);
              t_59 = (ATerm) ATgetNext((ATermList) x_50);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_59, r_59), (ATerm) ATmakeAppl(sym__2, s_59, t_59));
    return(t);
  }
  ATerm d_14 (ATerm t)
  {
    ATerm u_59 = NULL,v_59 = NULL;
    if(match_cons(t, sym__2))
      {
        u_59 = ATgetArgument(t, 0);
        v_59 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(v_59), u_59);
    return(t);
  }
  t = genzip_4_0(b_14, c_14, d_14, z_115, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_51 = ATgetFirst((ATermList) t);
      if(match_cons(c_51, sym__2))
        {
          w_59 = ATgetArgument(c_51, 0);
          x_59 = ATgetArgument(c_51, 1);
        }
      else
        _fail(t);
      y_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_59);
  if(match_cons(t, sym__2))
    {
      z_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_59);
  if(match_cons(t, sym__2))
    {
      if((z_59 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_60, a_60);
  t = zip_1_0(_id, t);
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_60, y_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t)
{
  ATerm d_60 (ATerm t)
  {
    ATerm f_51 = t;
    int g_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_107(t);
        ;
        LocalPopChoice(g_51);
      }
    else
      {
        t = f_51;
        t = s_107(t);
        t = d_60(t);
      }
    return(t);
  }
  t = d_60(t);
  return(t);
}
ATerm for_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t)
{
  t = u_107(t);
  t = while_not_2_0(v_107, w_107, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm h_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_14 (ATerm t)
      {
        ATerm i_60 = NULL;
        i_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_60);
        return(t);
      }
      ATerm f_14 (ATerm t)
      {
        ATerm h_14 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, h_14, t);
        return(t);
      }
      ATerm g_14 (ATerm t)
      {
        ATerm j_51 = t;
        int k_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_14 (ATerm t)
            {
              ATerm l_51 = t;
              int m_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_60 = ATgetFirst((ATermList) t);
                      n_60 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = k_60;
                  if(match_cons(t, sym__2))
                    {
                      l_60 = ATgetArgument(t, 0);
                      m_60 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_60;
                  if((l_60 != t))
                    {
                      _fail(t);
                    }
                  t = n_60;
                  ;
                  LocalPopChoice(m_51);
                }
              else
                {
                  t = l_51;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, i_14, t);
            ;
            LocalPopChoice(k_51);
          }
        else
          {
            t = j_51;
            {
              ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
              if(match_cons(t, sym__2))
                {
                  r_60 = ATgetArgument(t, 0);
                  s_60 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_60;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_60 = ATgetFirst((ATermList) t);
                  u_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_60), t_60), u_60);
            }
          }
        return(t);
      }
      t = for_3_0(e_14, f_14, g_14, t);
      ;
      LocalPopChoice(i_51);
    }
  else
    {
      t = h_51;
      {
        ATerm j_14 (ATerm t)
        {
          ATerm a_61 = NULL;
          if(match_cons(t, sym__2))
            {
              a_61 = ATgetArgument(t, 0);
              if((a_61 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(j_14, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_61 (ATerm t)
  {
    ATerm n_51 = t;
    int o_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_134(t);
        ;
        LocalPopChoice(o_51);
      }
    else
      {
        t = n_51;
        {
          ATerm p_51 = t;
          int q_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_61 = NULL,d_61 = NULL;
              b_61 = t;
              t = s_134(t);
              d_61 = t;
              t = b_61;
              {
                ATerm k_14 (ATerm t)
                {
                  ATerm m_14 (ATerm t)
                  {
                    t = d_61;
                    return(t);
                  }
                  t = split_2_0(e_61, m_14, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm l_14 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_134(k_14, e_61, l_14, t);
                {
                  ATerm n_14 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(n_14, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(q_51);
            }
          else
            {
              t = p_51;
              {
                ATerm o_14 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(o_14, union_0_0, e_61, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_61(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm p_14 (ATerm t)
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
  ATerm q_14 (ATerm t)
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
        {
          ATerm x_51 = t;
          int y_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(y_51);
            }
          else
            {
              t = x_51;
              {
                ATerm d_52 = t;
                int e_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(e_52);
                  }
                else
                  {
                    t = d_52;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(p_14, q_14, tboundin_3_0, t);
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm f_52 = ATgetArgument(t, 0);
      if(match_cons(f_52, sym_Rule_3))
        {
          g_61 = ATgetArgument(f_52, 0);
          h_61 = ATgetArgument(f_52, 1);
          i_61 = ATgetArgument(f_52, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = g_61;
  t = tvars_0_0(t);
  j_61 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_61, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_61, h_61, i_61)));
  return(t);
}
ATerm bottomup_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm r_14 (ATerm t)
  {
    t = bottomup_1_0(b_108, t);
    return(t);
  }
  t = SRTS_all(r_14, t);
  t = b_108(t);
  return(t);
}
ATerm define_lrules_0_0 (ATerm t)
{
  ATerm s_14 (ATerm t)
  {
    ATerm t_14 (ATerm t)
    {
      ATerm g_52 = t;
      int h_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(h_52);
        }
      else
        {
          t = g_52;
          t = DefScopeDefault_0_0(t);
        }
      return(t);
    }
    t = try_1_0(t_14, t);
    return(t);
  }
  t = bottomup_1_0(s_14, t);
  return(t);
}
ATerm rewrite_1_0 (ATerm m_124 (ATerm), ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,z_5 = NULL;
  n_61 = t;
  t = term_c_29;
  t = m_124(t);
  o_61 = t;
  t = SSL_table_get(o_61, n_61);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_5 = ATgetFirst((ATermList) t);
      {
        ATerm i_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_5;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL;
  c_62 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_52 = t;
    int o_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_62;
        {
          ATerm u_14 (ATerm t)
          {
            t = term_p_52;
            return(t);
          }
          t = rewrite_1_0(u_14, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm q_52 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_52) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, d_62, (ATerm) ATempty);
        }
        ;
        LocalPopChoice(o_52);
      }
    else
      {
        t = n_52;
        t = c_62;
        {
          ATerm v_14 (ATerm t)
          {
            t = term_p_52;
            return(t);
          }
          t = rewrite_1_0(v_14, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm r_52 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_52) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, d_62, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm l_62 (ATerm t)
  {
    ATerm s_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_109(t);
        ;
        LocalPopChoice(t_52);
      }
    else
      {
        t = s_52;
        t = SRTS_all(l_62, t);
      }
    return(t);
  }
  t = l_62(t);
  return(t);
}
ATerm assert_1_0 (ATerm k_124 (ATerm), ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  if(match_cons(t, sym__2))
    {
      m_62 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_124(t);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_62, m_62, n_62);
  t = table_push_0_0(t);
  {
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_62, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_62 = ATgetFirst((ATermList) t);
        q_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_62, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_62), (ATerm) ATinsert(CheckATermList(p_62), m_62)));
    t = (ATerm) ATmakeAppl(sym__2, m_62, n_62);
  }
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm u_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      w_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
      u_62 = ATgetArgument(t, 2);
      t = x_62;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_62), term_x_52);
      {
        ATerm w_14 (ATerm t)
        {
          t = term_p_52;
          return(t);
        }
        t = assert_1_0(w_14, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, w_62, (ATerm)ATempty, u_62);
      }
    }
  else
    {
      if(match_cons(t, sym_OpDecl_2))
        {
          w_62 = ATgetArgument(t, 0);
          x_62 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_62;
      if(match_cons(t, sym_ConstType_1))
        {
          y_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_62), term_h_53);
      {
        ATerm x_14 (ATerm t)
        {
          t = term_p_52;
          return(t);
        }
        t = assert_1_0(x_14, t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_62, (ATerm) ATmakeAppl(sym_ConstType_1, y_62));
      }
    }
  return(t);
}
ATerm Overlays_1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  g_63 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_63);
  d_63 = t;
  t = e_63;
  t = e_92(t);
  f_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, f_63), d_63);
  return(t);
}
ATerm Constructors_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
  n_63 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      l_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_63);
  k_63 = t;
  t = l_63;
  t = z_92(t);
  m_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, m_63), k_63);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL;
  if(match_cons(t, sym__2))
    {
      z_63 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_53 = t;
    int k_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_53 = ATgetArgument(t, 0);
            ATerm p_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_63, a_64);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_53 = ATgetFirst((ATermList) t);
            l_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_7;
        ;
        LocalPopChoice(k_53);
      }
    else
      {
        t = j_53;
        t = (ATerm) ATempty;
      }
    b_64 = t;
    t = SSL_table_put(z_63, a_64, b_64);
    t = (ATerm) ATmakeAppl(sym__2, z_63, a_64);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm h_124 (ATerm), ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  h_64 = t;
  t = h_124(t);
  i_64 = t;
  {
    ATerm t_53 = t;
    int u_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_64, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_53);
      }
    else
      {
        t = t_53;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_64 = ATgetFirst((ATermList) t);
        j_64 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_64, (ATerm)ATmakeAppl(sym_Scopes_0), j_64);
    t = k_64;
    {
      ATerm y_14 (ATerm t)
      {
        ATerm l_64 = NULL;
        l_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_64, l_64);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(y_14, t);
      t = h_64;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  ATerm x_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_106(t);
      t = w_106(t);
      ;
      LocalPopChoice(y_53);
    }
  else
    {
      t = x_53;
      t = w_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_124 (ATerm), ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  t = g_124(t);
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_64, term_z_53);
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_54 = ATgetArgument(t, 0);
            ATerm d_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_64, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        t = (ATerm) ATempty;
      }
    q_64 = t;
    t = SSL_table_put(p_64, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_64), (ATerm) ATempty));
    t = o_64;
  }
  return(t);
}
ATerm scope_2_0 (ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm t)
{
  t = begin_scope_1_0(i_124, t);
  {
    ATerm z_14 (ATerm t)
    {
      t = end_scope_1_0(i_124, t);
      return(t);
    }
    t = restore_always_2_0(j_124, z_14, t);
  }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  ATerm a_15 (ATerm t)
  {
    t = term_p_52;
    return(t);
  }
  ATerm b_15 (ATerm t)
  {
    ATerm c_15 (ATerm t)
    {
      ATerm d_15 (ATerm t)
      {
        ATerm e_15 (ATerm t)
        {
          ATerm e_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_15 (ATerm t)
              {
                ATerm g_15 (ATerm t)
                {
                  t = try_1_0(DeclareVarToConst_0_0, t);
                  return(t);
                }
                t = map_1_0(g_15, t);
                return(t);
              }
              t = Constructors_1_0(f_15, t);
              ;
              LocalPopChoice(m_54);
            }
          else
            {
              t = e_54;
              {
                ATerm h_15 (ATerm t)
                {
                  ATerm l_15 (ATerm t)
                  {
                    t = try_1_0(DeclareVarToConst_0_0, t);
                    return(t);
                  }
                  t = map_1_0(l_15, t);
                  return(t);
                }
                t = Overlays_1_0(h_15, t);
              }
            }
          return(t);
        }
        t = try_1_0(e_15, t);
        return(t);
      }
      t = map_1_0(d_15, t);
      return(t);
    }
    t = Specification_1_0(c_15, t);
    t = alltd_1_0(VarToConst_0_0, t);
    return(t);
  }
  t = scope_2_0(a_15, b_15, t);
  return(t);
}
ATerm filter_1_0 (ATerm v_120 (ATerm), ATerm t)
{
  ATerm n_54 = t;
  int o_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_54);
    }
  else
    {
      t = n_54;
      {
        ATerm p_54 = t;
        int q_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 (ATerm t)
            {
              t = filter_1_0(v_120, t);
              return(t);
            }
            t = Cons_2_0(v_120, n_15, t);
            ;
            LocalPopChoice(q_54);
          }
        else
          {
            t = p_54;
            {
              ATerm y_64 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_54 = ATgetFirst((ATermList) t);
                  y_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_64;
              t = filter_1_0(v_120, t);
            }
          }
      }
    }
  return(t);
}
ATerm GetConstructors_0_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  if(match_cons(t, sym_Signature_1))
    {
      a_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_65;
  {
    ATerm o_15 (ATerm t)
    {
      ATerm c_65 = NULL;
      if(match_cons(t, sym_Constructors_1))
        {
          c_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_65;
      return(t);
    }
    t = filter_1_0(o_15, t);
    t = concat_0_0(t);
    b_65 = t;
    t = (ATerm) ATmakeAppl(sym_Constructors_1, b_65);
  }
  return(t);
}
ATerm InsertBSpec_0_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  if(match_cons(t, sym__2))
    {
      d_65 = ATgetArgument(t, 0);
      e_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_65);
  if(match_cons(t, sym__2))
    {
      f_65 = ATgetArgument(t, 0);
      {
        ATerm i_55 = ATgetArgument(t, 1);
        if(((ATgetType(i_55) == AT_LIST) && !(ATisEmpty(i_55))))
          {
            g_65 = ATgetFirst((ATermList) i_55);
            {
              ATerm j_55 = (ATerm) ATgetNext((ATermList) i_55);
              if(((ATgetType(j_55) != AT_LIST) || !(ATisEmpty(j_55))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_65;
  {
    ATerm q_15 (ATerm t)
    {
      ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
      h_65 = t;
      t = SSL_explode_term(h_65);
      if(match_cons(t, sym__2))
        {
          if((f_65 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          {
            ATerm k_55 = ATgetArgument(t, 1);
            if(((ATgetType(k_55) == AT_LIST) && !(ATisEmpty(k_55))))
              {
                i_65 = ATgetFirst((ATermList) k_55);
                {
                  ATerm l_55 = (ATerm) ATgetNext((ATermList) k_55);
                  if(((ATgetType(l_55) != AT_LIST) || !(ATisEmpty(l_55))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_65, g_65);
      t = conc_0_0(t);
      j_65 = t;
      t = SSL_mkterm(f_65, (ATerm) ATinsert(ATempty, j_65));
      return(t);
    }
    t = fetch_1_0(q_15, t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t)
{
  ATerm m_55 = t;
  int n_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_119(t);
      ;
      LocalPopChoice(n_55);
    }
  else
    {
      t = m_55;
      {
        ATerm m_65 = NULL,n_65 = NULL,q_65 = NULL,r_65 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_65 = ATgetFirst((ATermList) t);
            n_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_65;
        t = w_119(t);
        q_65 = t;
        t = n_65;
        t = foldr_3_0(u_119, v_119, w_119, t);
        r_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_65, r_65);
        t = v_119(t);
      }
    }
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm r_15 (ATerm t)
  {
    ATerm t_15 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_55), term_p_55), term_o_55);
      return(t);
    }
    ATerm u_15 (ATerm t)
    {
      ATerm x_15 (ATerm t)
      {
        ATerm r_55 = t;
        int s_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = GetConstructors_0_0(t);
            ;
            LocalPopChoice(s_55);
          }
        else
          {
            t = r_55;
            {
              ATerm u_65 = NULL;
              if(match_cons(t, sym_Rules_1))
                {
                  u_65 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Strategies_1, u_65);
            }
          }
        return(t);
      }
      t = try_1_0(x_15, t);
      return(t);
    }
    t = foldr_3_0(t_15, InsertBSpec_0_0, u_15, t);
    return(t);
  }
  t = Specification_1_0(r_15, t);
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  t = CombineSections_0_0(t);
  {
    ATerm y_15 (ATerm t)
    {
      t = try_1_0(HL_0_0, t);
      return(t);
    }
    t = topdown_1_0(y_15, t);
    t = vars_to_consts_0_0(t);
    t = define_lrules_0_0(t);
    t = LiftDynamicRules_0_0(t);
    {
      ATerm z_15 (ATerm t)
      {
        t = try_1_0(HL_0_0, t);
        return(t);
      }
      t = topdown_1_0(z_15, t);
      {
        ATerm a_16 (ATerm t)
        {
          ATerm c_16 (ATerm t)
          {
            ATerm w_65 = NULL;
            if(match_cons(t, sym_Constructors_1))
              {
                w_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, w_65)));
            return(t);
          }
          t = fetch_1_0(c_16, t);
          return(t);
        }
        t = Specification_1_0(a_16, t);
      }
    }
  }
  return(t);
}
ATerm Op_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  e_66 = t;
  if(match_cons(t, sym_Op_2))
    {
      a_66 = ATgetArgument(t, 0);
      b_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_66);
  z_65 = t;
  t = a_66;
  t = g_93(t);
  c_66 = t;
  t = b_66;
  t = h_93(t);
  d_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, c_66, d_66), z_65);
  return(t);
}
ATerm OpDecl_2_0 (ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
  s_66 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      o_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_66);
  n_66 = t;
  t = o_66;
  t = q_92(t);
  q_66 = t;
  t = p_66;
  t = r_92(t);
  r_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, q_66, r_66), n_66);
  return(t);
}
ATerm SVar_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,l_67 = NULL;
  l_67 = t;
  if(match_cons(t, sym_SVar_1))
    {
      d_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_67);
  c_67 = t;
  t = d_67;
  t = j_96(t);
  e_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, e_67), c_67);
  return(t);
}
ATerm Var_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
  s_67 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_67);
  p_67 = t;
  t = q_67;
  t = a_93(t);
  r_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, r_67), p_67);
  return(t);
}
ATerm VarDec_2_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
  h_68 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_68);
  c_68 = t;
  t = d_68;
  t = v_98(t);
  f_68 = t;
  t = e_68;
  t = w_98(t);
  g_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, f_68, g_68), c_68);
  return(t);
}
ATerm SDef_3_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
  s_68 = t;
  if(match_cons(t, sym_SDef_3))
    {
      m_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
      o_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_68);
  l_68 = t;
  t = m_68;
  t = z_98(t);
  p_68 = t;
  t = n_68;
  t = a_99(t);
  q_68 = t;
  t = o_68;
  t = b_99(t);
  r_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, p_68, q_68, r_68), l_68);
  return(t);
}
ATerm SDefT_4_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm k_69 = NULL,q_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  a_70 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_69 = ATgetArgument(t, 0);
      t_69 = ATgetArgument(t, 1);
      u_69 = ATgetArgument(t, 2);
      v_69 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_70);
  k_69 = t;
  t = q_69;
  t = c_99(t);
  w_69 = t;
  t = t_69;
  t = d_99(t);
  x_69 = t;
  t = u_69;
  t = e_99(t);
  y_69 = t;
  t = v_69;
  t = f_99(t);
  z_69 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, w_69, x_69, y_69, z_69), k_69);
  return(t);
}
ATerm RDef_3_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  l_70 = t;
  if(match_cons(t, sym_RDef_3))
    {
      f_70 = ATgetArgument(t, 0);
      g_70 = ATgetArgument(t, 1);
      h_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_70);
  e_70 = t;
  t = f_70;
  t = f_95(t);
  i_70 = t;
  t = g_70;
  t = g_95(t);
  j_70 = t;
  t = h_70;
  t = h_95(t);
  k_70 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, i_70, j_70, k_70), e_70);
  return(t);
}
ATerm RDefT_4_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  y_70 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      q_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
      s_70 = ATgetArgument(t, 2);
      t_70 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_70);
  p_70 = t;
  t = q_70;
  t = i_95(t);
  u_70 = t;
  t = r_70;
  t = j_95(t);
  v_70 = t;
  t = s_70;
  t = k_95(t);
  w_70 = t;
  t = t_70;
  t = l_95(t);
  x_70 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, u_70, v_70, w_70, x_70), p_70);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,k_71 = NULL,c_72 = NULL;
  c_72 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_72);
  h_71 = t;
  t = i_71;
  t = u_98(t);
  k_71 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, k_71), h_71);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm t_55 = t;
  int u_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_76 = NULL,f_76 = NULL,h_76 = NULL,i_76 = NULL;
      d_76 = t;
      if(match_cons(t, sym_Real_1))
        {
          f_76 = ATgetArgument(t, 0);
          {
            ATerm z_7 = NULL;
            t = SSL_string_to_real(f_76);
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, z_7);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_76 = ATgetArgument(t, 0);
              {
                ATerm i_8 = NULL;
                t = SSL_string_to_int(f_76);
                i_8 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, i_8);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  f_76 = ATgetArgument(t, 0);
                  h_76 = ATgetArgument(t, 1);
                  i_76 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSL_is_string(i_76);
              t = (ATerm) ATmakeAppl(sym_Con_3, f_76, h_76, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_76), (ATerm) ATempty));
            }
        }
      ;
      LocalPopChoice(u_55);
    }
  else
    {
      t = t_55;
      {
        ATerm v_55 = t;
        int w_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 (ATerm t)
            {
              ATerm w_8 = NULL,y_8 = NULL;
              w_8 = t;
              t = SSL_explode_string(w_8);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_56 = ATgetFirst((ATermList) t);
                  if(((ATgetType(c_56) != AT_INT) || (ATgetInt((ATermInt) c_56) != 39)))
                    _fail(t);
                  y_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = SSL_implode_string(y_8);
              return(t);
            }
            t = DefaultVarDec_1_0(d_16, t);
            ;
            LocalPopChoice(w_55);
          }
        else
          {
            t = v_55;
            {
              ATerm d_56 = t;
              int e_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_16 (ATerm t)
                  {
                    ATerm c_9 = NULL,d_9 = NULL;
                    c_9 = t;
                    t = SSL_explode_string(c_9);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm f_56 = ATgetFirst((ATermList) t);
                        if(((ATgetType(f_56) != AT_INT) || (ATgetInt((ATermInt) f_56) != 39)))
                          _fail(t);
                        d_9 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(d_9);
                    return(t);
                  }
                  t = RDefT_4_0(e_16, _id, _id, _id, t);
                  ;
                  LocalPopChoice(e_56);
                }
              else
                {
                  t = d_56;
                  {
                    ATerm g_56 = t;
                    int m_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_16 (ATerm t)
                        {
                          ATerm k_9 = NULL,q_9 = NULL;
                          k_9 = t;
                          t = SSL_explode_string(k_9);
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm n_56 = ATgetFirst((ATermList) t);
                              if(((ATgetType(n_56) != AT_INT) || (ATgetInt((ATermInt) n_56) != 39)))
                                _fail(t);
                              q_9 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = SSL_implode_string(q_9);
                          return(t);
                        }
                        t = RDef_3_0(f_16, _id, _id, t);
                        ;
                        LocalPopChoice(m_56);
                      }
                    else
                      {
                        t = g_56;
                        {
                          ATerm p_56 = t;
                          int r_56 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_16 (ATerm t)
                              {
                                ATerm w_9 = NULL,x_9 = NULL;
                                w_9 = t;
                                t = SSL_explode_string(w_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm f_57 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(f_57) != AT_INT) || (ATgetInt((ATermInt) f_57) != 39)))
                                      _fail(t);
                                    x_9 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(x_9);
                                return(t);
                              }
                              t = SDefT_4_0(g_16, _id, _id, _id, t);
                              ;
                              LocalPopChoice(r_56);
                            }
                          else
                            {
                              t = p_56;
                              {
                                ATerm g_57 = t;
                                int j_57 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_16 (ATerm t)
                                    {
                                      ATerm h_10 = NULL,i_10 = NULL;
                                      h_10 = t;
                                      t = SSL_explode_string(h_10);
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          ATerm k_57 = ATgetFirst((ATermList) t);
                                          if(((ATgetType(k_57) != AT_INT) || (ATgetInt((ATermInt) k_57) != 39)))
                                            _fail(t);
                                          i_10 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = SSL_implode_string(i_10);
                                      return(t);
                                    }
                                    t = SDef_3_0(h_16, _id, _id, t);
                                    ;
                                    LocalPopChoice(j_57);
                                  }
                                else
                                  {
                                    t = g_57;
                                    {
                                      ATerm l_57 = t;
                                      int o_57 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_16 (ATerm t)
                                          {
                                            ATerm r_10 = NULL,t_10 = NULL;
                                            r_10 = t;
                                            t = SSL_explode_string(r_10);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm p_57 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(p_57) != AT_INT) || (ATgetInt((ATermInt) p_57) != 39)))
                                                  _fail(t);
                                                t_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(t_10);
                                            return(t);
                                          }
                                          t = VarDec_2_0(i_16, _id, t);
                                          ;
                                          LocalPopChoice(o_57);
                                        }
                                      else
                                        {
                                          t = l_57;
                                          {
                                            ATerm q_57 = t;
                                            int r_57 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm j_16 (ATerm t)
                                                {
                                                  ATerm w_10 = NULL,x_10 = NULL;
                                                  w_10 = t;
                                                  t = SSL_explode_string(w_10);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm y_57 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(y_57) != AT_INT) || (ATgetInt((ATermInt) y_57) != 39)))
                                                        _fail(t);
                                                      x_10 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(x_10);
                                                  return(t);
                                                }
                                                t = Var_1_0(j_16, t);
                                                ;
                                                LocalPopChoice(r_57);
                                              }
                                            else
                                              {
                                                t = q_57;
                                                {
                                                  ATerm z_57 = t;
                                                  int a_58 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_16 (ATerm t)
                                                      {
                                                        ATerm a_11 = NULL,b_11 = NULL;
                                                        a_11 = t;
                                                        t = SSL_explode_string(a_11);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm h_58 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(h_58) != AT_INT) || (ATgetInt((ATermInt) h_58) != 39)))
                                                              _fail(t);
                                                            b_11 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(b_11);
                                                        return(t);
                                                      }
                                                      t = SVar_1_0(k_16, t);
                                                      ;
                                                      LocalPopChoice(a_58);
                                                    }
                                                  else
                                                    {
                                                      t = z_57;
                                                      {
                                                        ATerm i_58 = t;
                                                        int j_58 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm l_16 (ATerm t)
                                                            {
                                                              ATerm e_11 = NULL,f_11 = NULL;
                                                              e_11 = t;
                                                              t = SSL_explode_string(e_11);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm l_58 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(l_58) != AT_INT) || (ATgetInt((ATermInt) l_58) != 39)))
                                                                    _fail(t);
                                                                  f_11 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(f_11);
                                                              return(t);
                                                            }
                                                            t = OpDecl_2_0(l_16, _id, t);
                                                            ;
                                                            LocalPopChoice(j_58);
                                                          }
                                                        else
                                                          {
                                                            t = i_58;
                                                            {
                                                              ATerm m_16 (ATerm t)
                                                              {
                                                                ATerm i_11 = NULL,j_11 = NULL;
                                                                i_11 = t;
                                                                t = SSL_explode_string(i_11);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm m_58 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(m_58) != AT_INT) || (ATgetInt((ATermInt) m_58) != 39)))
                                                                      _fail(t);
                                                                    j_11 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(j_11);
                                                                return(t);
                                                              }
                                                              t = Op_2_0(m_16, _id, t);
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm at_last_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm o_76 (ATerm t)
  {
    ATerm n_58 = t;
    int p_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_16 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, n_16, t);
        t = s_114(t);
        ;
        LocalPopChoice(p_58);
      }
    else
      {
        t = n_58;
        t = Cons_2_0(_id, o_76, t);
      }
    return(t);
  }
  t = o_76(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm o_16 (ATerm t)
  {
    ATerm p_76 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm q_58 = ATgetFirst((ATermList) t);
        p_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = p_76;
    return(t);
  }
  t = at_last_1_0(o_16, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_76 = ATgetFirst((ATermList) t);
      w_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_76;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm t_58 = t;
      int u_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_76;
          ;
          LocalPopChoice(u_58);
        }
      else
        {
          t = t_58;
          t = w_76;
          t = last_0_0(t);
        }
    }
  else
    {
      t = w_76;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm t_122 (ATerm), ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
  d_77 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_77 = ATgetFirst((ATermList) t);
      {
        ATerm w_58 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_77;
  t = t_122(t);
  t = d_77;
  t = last_0_0(t);
  t = t_122(t);
  t = d_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_58 = ATgetFirst((ATermList) t);
      f_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_77;
  t = init_0_0(t);
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm p_16 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  t = unquote_chars_1_0(p_16, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  g_77 = t;
  t = SSL_explode_string(g_77);
  t = e_123(t);
  h_77 = t;
  t = SSL_implode_string(h_77);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm b_93 (ATerm q_80, ATerm s_80, ATerm t)
  {
    t = q_80;
    {
      ATerm y_58 = t;
      if((PushChoice() == 0))
        {
          ATerm q_16 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, q_16, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_58;
        }
      t = (ATerm) ATmakeAppl(sym_Op_2, term_b_21, q_80);
    }
    return(t);
  }
  ATerm c_93 (ATerm b_81, ATerm m_81, ATerm t)
  {
    t = b_81;
    {
      ATerm a_59 = t;
      if((PushChoice() == 0))
        {
          ATerm r_16 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(_id, r_16, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_59;
        }
      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_59, b_81);
    }
    return(t);
  }
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
  t_81 = t;
  if(match_cons(t, sym_Anno_2))
    {
      u_81 = ATgetArgument(t, 0);
      v_81 = ATgetArgument(t, 1);
      {
        ATerm y_81 = NULL;
        t = v_81;
        {
          ATerm s_16 (ATerm t)
          {
            t = term_o_46;
            return(t);
          }
          ATerm t_16 (ATerm t)
          {
            ATerm z_81 = NULL,n_11 = NULL,r_11 = NULL;
            z_81 = t;
            t = SSL_explode_term(z_81);
            if(match_cons(t, sym__2))
              {
                ATerm c_59 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_59) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm e_60 = ATgetArgument(t, 1);
                  if(((ATgetType(e_60) == AT_LIST) && !(ATisEmpty(e_60))))
                    {
                      n_11 = ATgetFirst((ATermList) e_60);
                      {
                        ATerm f_60 = (ATerm) ATgetNext((ATermList) e_60);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(z_81);
            if(match_cons(t, sym__2))
              {
                ATerm g_60 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_60) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm h_60 = ATgetArgument(t, 1);
                  if(((ATgetType(h_60) == AT_LIST) && !(ATisEmpty(h_60))))
                    {
                      ATerm j_60 = ATgetFirst((ATermList) h_60);
                      ATerm o_60 = (ATerm) ATgetNext((ATermList) h_60);
                      if(((ATgetType(o_60) == AT_LIST) && !(ATisEmpty(o_60))))
                        {
                          r_11 = ATgetFirst((ATermList) o_60);
                          {
                            ATerm p_60 = (ATerm) ATgetNext((ATermList) o_60);
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
            t = (ATerm) ATmakeAppl(sym_Op_2, term_q_60, (ATerm) ATinsert(ATinsert(ATempty, r_11), n_11));
            return(t);
          }
          t = foldr_2_0(s_16, t_16, t);
          y_81 = t;
          t = (ATerm) ATmakeAppl(sym_Anno_2, u_81, y_81);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          u_81 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, u_81, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              u_81 = ATgetArgument(t, 0);
              {
                ATerm w_11 = NULL;
                t = u_81;
                {
                  ATerm v_60 = t;
                  int w_60 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_x_60;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_y_60;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_z_60;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_c_61;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_k_61;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(w_60);
                    }
                  else
                    {
                      t = v_60;
                      {
                        ATerm y_11 = NULL;
                        t = SSL_explode_string(u_81);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm l_61 = ATgetFirst((ATermList) t);
                            if(((ATgetType(l_61) != AT_INT) || (ATgetInt((ATermInt) l_61) != 39)))
                              _fail(t);
                            {
                              ATerm m_61 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(m_61) == AT_LIST) && !(ATisEmpty(m_61))))
                                {
                                  y_11 = ATgetFirst((ATermList) m_61);
                                  {
                                    ATerm p_61 = (ATerm) ATgetNext((ATermList) m_61);
                                    if(((ATgetType(p_61) == AT_LIST) && !(ATisEmpty(p_61))))
                                      {
                                        ATerm q_61 = ATgetFirst((ATermList) p_61);
                                        if(((ATgetType(q_61) != AT_INT) || (ATgetInt((ATermInt) q_61) != 39)))
                                          _fail(t);
                                        {
                                          ATerm r_61 = (ATerm) ATgetNext((ATermList) p_61);
                                          if(((ATgetType(r_61) != AT_LIST) || !(ATisEmpty(r_61))))
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
                        t = y_11;
                      }
                    }
                  w_11 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, w_11);
                }
              }
            }
          else
            {
              ATerm s_61 = t;
              int t_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      u_81 = ATgetArgument(t, 0);
                      {
                        ATerm u_61 = ATgetArgument(t, 1);
                      }
                      s_81 = ATgetArgument(t, 2);
                      o_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_61);
                  t = (ATerm) ATmakeAppl(sym_Con_3, u_81, s_81, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_81), (ATerm) ATempty));
                }
              else
                {
                  t = s_61;
                  {
                    ATerm v_61 = t;
                    int w_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            u_81 = ATgetArgument(t, 0);
                            {
                              ATerm x_61 = ATgetArgument(t, 1);
                            }
                            s_81 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_61);
                        t = (ATerm) ATmakeAppl(sym_Con_3, u_81, s_81, term_a_62);
                      }
                    else
                      {
                        t = v_61;
                        if(match_cons(t, sym_Con1_2))
                          {
                            u_81 = ATgetArgument(t, 0);
                            v_81 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, u_81, v_81, term_a_62);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                u_81 = ATgetArgument(t, 0);
                                v_81 = ATgetArgument(t, 1);
                                t = u_81;
                                {
                                  ATerm u_16 (ATerm t)
                                  {
                                    t = v_81;
                                    return(t);
                                  }
                                  ATerm v_16 (ATerm t)
                                  {
                                    ATerm e_87 = NULL,f_87 = NULL;
                                    if(match_cons(t, sym__2))
                                      {
                                        e_87 = ATgetArgument(t, 0);
                                        f_87 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_q_60, (ATerm) ATinsert(ATinsert(ATempty, f_87), e_87));
                                    return(t);
                                  }
                                  t = foldr_2_0(u_16, v_16, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    u_81 = ATgetArgument(t, 0);
                                    t = u_81;
                                    {
                                      ATerm w_16 (ATerm t)
                                      {
                                        t = term_o_46;
                                        return(t);
                                      }
                                      ATerm x_16 (ATerm t)
                                      {
                                        ATerm j_87 = NULL,f_90 = NULL;
                                        if(match_cons(t, sym__2))
                                          {
                                            j_87 = ATgetArgument(t, 0);
                                            f_90 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_q_60, (ATerm) ATinsert(ATinsert(ATempty, f_90), j_87));
                                        return(t);
                                      }
                                      t = foldr_2_0(w_16, x_16, t);
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        u_81 = ATgetArgument(t, 0);
                                        t = u_81;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            p_81 = ATgetFirst((ATermList) t);
                                            q_81 = (ATerm) ATgetNext((ATermList) t);
                                            t = q_81;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm b_62 = t;
                                                int e_62 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = b_93(u_81, t_81, t);
                                                    ;
                                                    LocalPopChoice(e_62);
                                                  }
                                                else
                                                  {
                                                    t = b_62;
                                                    t = p_81;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_93(u_81, t_81, t);
                                              }
                                          }
                                        else
                                          {
                                            t = b_93(u_81, t_81, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            u_81 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, u_81));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                u_81 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_81));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    u_81 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_81));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        u_81 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_81));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            u_81 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_81), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                u_81 = ATgetArgument(t, 0);
                                                                v_81 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_81), v_81);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    u_81 = ATgetArgument(t, 0);
                                                                    v_81 = ATgetArgument(t, 1);
                                                                    t = u_81;
                                                                    {
                                                                      ATerm y_16 (ATerm t)
                                                                      {
                                                                        t = v_81;
                                                                        return(t);
                                                                      }
                                                                      ATerm z_16 (ATerm t)
                                                                      {
                                                                        ATerm z_90 = NULL,a_91 = NULL;
                                                                        if(match_cons(t, sym__2))
                                                                          {
                                                                            z_90 = ATgetArgument(t, 0);
                                                                            a_91 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_62, (ATerm) ATinsert(ATinsert(ATempty, a_91), z_90));
                                                                        return(t);
                                                                      }
                                                                      t = foldr_2_0(y_16, z_16, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        u_81 = ATgetArgument(t, 0);
                                                                        t = u_81;
                                                                        {
                                                                          ATerm a_17 (ATerm t)
                                                                          {
                                                                            t = term_h_62;
                                                                            return(t);
                                                                          }
                                                                          ATerm b_17 (ATerm t)
                                                                          {
                                                                            ATerm c_91 = NULL,d_91 = NULL;
                                                                            if(match_cons(t, sym__2))
                                                                              {
                                                                                c_91 = ATgetArgument(t, 0);
                                                                                d_91 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_f_62, (ATerm) ATinsert(ATinsert(ATempty, d_91), c_91));
                                                                            return(t);
                                                                          }
                                                                          t = foldr_2_0(a_17, b_17, t);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            u_81 = ATgetArgument(t, 0);
                                                                            v_81 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_b_59, (ATerm) ATinsert(CheckATermList(v_81), u_81));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                u_81 = ATgetArgument(t, 0);
                                                                                t = u_81;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    p_81 = ATgetFirst((ATermList) t);
                                                                                    q_81 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = q_81;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm i_62 = t;
                                                                                        int j_62 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = c_93(u_81, t_81, t);
                                                                                            ;
                                                                                            LocalPopChoice(j_62);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = i_62;
                                                                                            t = p_81;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_93(u_81, t_81, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_93(u_81, t_81, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_k_62;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        u_81 = ATgetArgument(t, 0);
                                                                                        v_81 = ATgetArgument(t, 1);
                                                                                        t = v_81;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            r_81 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_36, (ATerm) ATinsert(ATinsert(ATempty, r_81), u_81));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            u_81 = ATgetArgument(t, 0);
                                                                                            t = u_81;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                u_81 = ATgetArgument(t, 0);
                                                                                                v_81 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, u_81, v_81, term_r_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    u_81 = ATgetArgument(t, 0);
                                                                                                    v_81 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, u_81, v_81, term_r_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        u_81 = ATgetArgument(t, 0);
                                                                                                        v_81 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, u_81, (ATerm)ATempty, v_81);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            u_81 = ATgetArgument(t, 0);
                                                                                                            v_81 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, v_81, u_81);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                u_81 = ATgetArgument(t, 0);
                                                                                                                v_81 = ATgetArgument(t, 1);
                                                                                                                {
                                                                                                                  ATerm u_91 = NULL;
                                                                                                                  t = u_81;
                                                                                                                  t = try_1_0(un_double_quote_0_0, t);
                                                                                                                  u_91 = t;
                                                                                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_91, (ATerm)ATempty, v_81);
                                                                                                                }
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    u_81 = ATgetArgument(t, 0);
                                                                                                                    {
                                                                                                                      ATerm w_91 = NULL;
                                                                                                                      t = u_81;
                                                                                                                      t = try_1_0(un_double_quote_0_0, t);
                                                                                                                      w_91 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_PrimT_3, w_91, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                    }
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        u_81 = ATgetArgument(t, 0);
                                                                                                                        v_81 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, u_81, v_81, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            u_81 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, u_81, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                u_81 = ATgetArgument(t, 0);
                                                                                                                                v_81 = ATgetArgument(t, 1);
                                                                                                                                s_81 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_81, v_81, (ATerm)ATempty, s_81);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    u_81 = ATgetArgument(t, 0);
                                                                                                                                    v_81 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, u_81, (ATerm)ATempty, (ATerm)ATempty, v_81);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        u_81 = ATgetArgument(t, 0);
                                                                                                                                        v_81 = ATgetArgument(t, 1);
                                                                                                                                        s_81 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_81, v_81, (ATerm)ATempty, s_81);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            u_81 = ATgetArgument(t, 0);
                                                                                                                                            v_81 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_81, (ATerm)ATempty, (ATerm)ATempty, v_81);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                u_81 = ATgetArgument(t, 0);
                                                                                                                                                v_81 = ATgetArgument(t, 1);
                                                                                                                                                s_81 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, u_81, v_81, (ATerm)ATempty, s_81);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    u_81 = ATgetArgument(t, 0);
                                                                                                                                                    v_81 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_81, (ATerm)ATempty, (ATerm)ATempty, v_81);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm r_62 = ATgetArgument(t, 0);
                                                                                                                                                        v_81 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, v_81);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm d_93 (ATerm t)
  {
    ATerm c_17 (ATerm t)
    {
      t = c_107(t);
      t = d_93(t);
      return(t);
    }
    t = try_1_0(c_17, t);
    return(t);
  }
  t = d_93(t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  t = a_108(t);
  {
    ATerm d_17 (ATerm t)
    {
      t = topdown_1_0(a_108, t);
      return(t);
    }
    t = SRTS_all(d_17, t);
  }
  return(t);
}
ATerm pre_desugar_0_0 (ATerm t)
{
  ATerm e_17 (ATerm t)
  {
    t = repeat_1_0(Desugar_0_0, t);
    t = try_1_0(DesugarOnce_0_0, t);
    return(t);
  }
  t = topdown_1_0(e_17, t);
  return(t);
}
ATerm frontend_transformation_0_0 (ATerm t)
{
  ATerm e_93 = NULL;
  ATerm f_17 (ATerm t)
  {
    t = term_s_62;
    return(t);
  }
  t = timing_1_0(f_17, t);
  t = pre_desugar_0_0(t);
  {
    ATerm j_17 (ATerm t)
    {
      t = term_t_62;
      return(t);
    }
    t = timing_1_0(j_17, t);
    t = normalize_spec_0_0(t);
    {
      ATerm l_17 (ATerm t)
      {
        t = term_v_62;
        return(t);
      }
      t = timing_1_0(l_17, t);
      e_93 = t;
      t = spec_use_def_0_0(t);
      t = e_93;
      {
        ATerm m_17 (ATerm t)
        {
          t = term_z_62;
          return(t);
        }
        t = timing_1_0(m_17, t);
        t = ExpandOverlays_0_0(t);
        {
          ATerm n_17 (ATerm t)
          {
            t = term_a_63;
            return(t);
          }
          t = timing_1_0(n_17, t);
          t = CheckConstructors_0_0(t);
          {
            ATerm o_17 (ATerm t)
            {
              t = term_b_63;
              return(t);
            }
            t = timing_1_0(o_17, t);
            t = RulesToSdefs_0_0(t);
            {
              ATerm p_17 (ATerm t)
              {
                t = term_c_63;
                return(t);
              }
              t = timing_1_0(p_17, t);
              t = DesugarListMatching_0_0(t);
              {
                ATerm q_17 (ATerm t)
                {
                  t = term_h_63;
                  return(t);
                }
                t = timing_1_0(q_17, t);
                t = strename_0_0(t);
                {
                  ATerm r_17 (ATerm t)
                  {
                    t = term_i_63;
                    return(t);
                  }
                  t = timing_1_0(r_17, t);
                  {
                    ATerm s_17 (ATerm t)
                    {
                      ATerm t_17 (ATerm t)
                      {
                        ATerm u_17 (ATerm t)
                        {
                          t = Strategies_1_0(desugar_spec_0_0, t);
                          return(t);
                        }
                        ATerm v_17 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          return(t);
                        }
                        t = Cons_2_0(u_17, v_17, t);
                        return(t);
                      }
                      t = Cons_2_0(_id, t_17, t);
                      return(t);
                    }
                    t = Specification_1_0(s_17, t);
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
ATerm _2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm f_93 = NULL,i_93 = NULL,j_93 = NULL,m_93 = NULL,n_93 = NULL,t_93 = NULL;
  t_93 = t;
  if(match_cons(t, sym__2))
    {
      i_93 = ATgetArgument(t, 0);
      j_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_93);
  f_93 = t;
  t = i_93;
  t = p_90(t);
  m_93 = t;
  t = j_93;
  t = q_90(t);
  n_93 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, m_93, n_93), f_93);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL;
  x_93 = t;
  t = term_c_29;
  t = whoami_0_0(t);
  y_93 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_93), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_93;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_63 = t;
  int o_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_63);
    }
  else
    {
      t = j_63;
      {
        ATerm e_94 = NULL,f_94 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_94 = ATgetFirst((ATermList) t);
            f_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_94;
        {
          ATerm w_17 (ATerm t)
          {
            t = f_94;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_17, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  j_94 = t;
  t = SSL_explode_term(j_94);
  if(match_cons(t, sym__2))
    {
      ATerm p_63 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_63) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_94;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  ATerm l_94 (ATerm t)
  {
    ATerm q_63 = t;
    int r_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_94, t);
        ;
        LocalPopChoice(r_63);
      }
    else
      {
        t = q_63;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_114(t);
      }
    return(t);
  }
  t = l_94(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL;
  if(match_cons(t, sym__2))
    {
      n_94 = ATgetArgument(t, 0);
      m_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_94;
  {
    ATerm x_17 (ATerm t)
    {
      t = m_94;
      return(t);
    }
    t = at_end_1_0(x_17, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_63 = t;
  int t_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(t_63);
    }
  else
    {
      t = s_63;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_94 = NULL;
  ATerm y_17 (ATerm t)
  {
    ATerm p_94 = NULL;
    p_94 = t;
    t = SSL_explode_string(p_94);
    return(t);
  }
  ATerm z_17 (ATerm t)
  {
    ATerm q_94 = NULL;
    q_94 = t;
    t = SSL_explode_string(q_94);
    return(t);
  }
  t = _2_0(y_17, z_17, t);
  t = conc_0_0(t);
  o_94 = t;
  t = SSL_implode_string(o_94);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_63 = t;
  int v_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_94 = NULL;
      z_94 = t;
      t = SSL_is_string(z_94);
      ;
      LocalPopChoice(v_63);
    }
  else
    {
      t = u_63;
      {
        ATerm w_63 = t;
        int x_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_18 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(a_18, t);
            ;
            LocalPopChoice(x_63);
          }
        else
          {
            t = w_63;
            {
              ATerm d_95 = NULL,e_95 = NULL,m_95 = NULL;
              d_95 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_95 = ATgetArgument(t, 0);
                  t = e_95;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_95 = ATgetArgument(t, 0);
                      t = e_95;
                      {
                        ATerm y_63 = t;
                        int c_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_64);
                          }
                        else
                          {
                            t = y_63;
                            {
                              ATerm b_18 (ATerm t)
                              {
                                t = term_d_64;
                                return(t);
                              }
                              t = debug_1_0(b_18, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm q_95 = NULL,s_95 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_95 = ATgetArgument(t, 0);
                          m_95 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_95;
                      t = eval_config_0_0(t);
                      q_95 = t;
                      t = m_95;
                      t = eval_config_0_0(t);
                      s_95 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_95, s_95);
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
  ATerm v_95 = NULL;
  v_95 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_95);
  {
    ATerm c_18 (ATerm t)
    {
      ATerm w_95 = NULL;
      t = eval_config_0_0(t);
      w_95 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_95, w_95);
      t = w_95;
      return(t);
    }
    t = try_1_0(c_18, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_127 (ATerm), ATerm t)
{
  ATerm d_18 (ATerm t)
  {
    ATerm x_95 = NULL,a_96 = NULL;
    x_95 = t;
    t = term_l_23;
    t = get_config_0_0(t);
    a_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_96, term_e_64);
    t = geq_0_0(t);
    t = x_95;
    t = h_127(t);
    return(t);
  }
  t = try_1_0(d_18, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm e_18 (ATerm t)
  {
    ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_64 = ATgetArgument(t, 0);
        if(match_cons(f_64, sym_Stream_1))
          {
            b_96 = ATgetArgument(f_64, 0);
          }
        else
          _fail(t);
        c_96 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(b_96, c_96);
    d_96 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), d_96);
    e_96 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, e_96);
    return(t);
  }
  t = WriteToFile_1_0(e_18, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
  if(match_cons(t, sym__2))
    {
      f_96 = ATgetArgument(t, 0);
      g_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_96, term_g_64);
  t = open_stream_0_0(t);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_96, g_96);
  t = d_126(t);
  t = fclose_0_0(t);
  t = g_96;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm i_96 = NULL,m_96 = NULL,n_96 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_64 = ATgetArgument(t, 0);
        if(match_cons(m_64, sym_Stream_1))
          {
            i_96 = ATgetArgument(m_64, 0);
          }
        else
          _fail(t);
        m_96 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(i_96, m_96);
    n_96 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_96);
    return(t);
  }
  t = WriteToFile_1_0(f_18, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  o_96 = t;
  {
    ATerm g_18 (ATerm t)
    {
      ATerm n_64 = t;
      int r_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_18 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                p_96 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(h_18, t);
          ;
          LocalPopChoice(r_64);
        }
      else
        {
          t = n_64;
          t = term_s_64;
          p_96 = t;
        }
      return(t);
    }
    t = _2_0(g_18, _id, t);
    t = o_96;
    {
      ATerm i_18 (ATerm t)
      {
        ATerm j_18 (ATerm t)
        {
          t = not_null(p_96);
          return(t);
        }
        t = split_2_0(j_18, _id, t);
        return(t);
      }
      t = _2_0(_id, i_18, t);
      {
        ATerm t_64 = t;
        int u_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 (ATerm t)
            {
              ATerm l_18 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(l_18, t);
              return(t);
            }
            t = _2_0(k_18, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(u_64);
          }
        else
          {
            t = t_64;
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
ATerm apply_strategy_1_0 (ATerm f_129 (ATerm), ATerm t)
{
  ATerm q_96 = NULL,t_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL;
  q_96 = t;
  t = dtime_0_0(t);
  t = q_96;
  t = f_129(t);
  t_96 = t;
  t = dtime_0_0(t);
  w_96 = t;
  t = t_96;
  if(match_cons(t, sym__2))
    {
      x_96 = ATgetArgument(t, 0);
      y_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_96), (ATerm) ATmakeAppl(sym_Runtime_1, w_96)), y_96);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_97 (ATerm n_97, ATerm t)
  {
    t = SSL_fclose(n_97);
    return(t);
  }
  ATerm t_97 = NULL,u_97 = NULL;
  u_97 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_97 = ATgetArgument(t, 0);
      {
        ATerm v_64 = t;
        int w_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_97);
            ;
            LocalPopChoice(w_64);
          }
        else
          {
            t = v_64;
            t = w_97(u_97, t);
          }
      }
    }
  else
    {
      t = w_97(u_97, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm p_125 (ATerm), ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL;
  x_97 = t;
  t = p_125(t);
  y_97 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_97), y_97));
  t = x_97;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_97 = NULL;
  t = SSL_stdin_stream();
  z_97 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_97);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_98 = NULL;
  t = SSL_stdout_stream();
  a_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_98);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_98 = NULL;
  t = SSL_stderr_stream();
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_98);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm d_98 = NULL;
  d_98 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_98;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_98;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_98;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_64 = ATgetArgument(t, 0);
      ATerm z_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,p_12 = NULL;
        n_12 = t;
        t = SSL_explode_term(n_12);
        if(match_cons(t, sym__2))
          {
            ATerm o_65 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_65) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_65 = ATgetArgument(t, 1);
              if(((ATgetType(p_65) == AT_LIST) && !(ATisEmpty(p_65))))
                {
                  p_12 = ATgetFirst((ATermList) p_65);
                  {
                    ATerm s_65 = (ATerm) ATgetNext((ATermList) p_65);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_12;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(l_65);
      }
    else
      {
        t = k_65;
        {
          ATerm t_65 = t;
          int v_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL;
              ATerm m_18 (ATerm t)
              {
                ATerm j_98 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    j_98 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_98;
                return(t);
              }
              t = _2_0(m_18, _id, t);
              if(match_cons(t, sym__2))
                {
                  g_98 = ATgetArgument(t, 0);
                  h_98 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(g_98, h_98);
              i_98 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_98);
              ;
              LocalPopChoice(v_65);
            }
          else
            {
              t = t_65;
              {
                ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL;
                ATerm n_18 (ATerm t)
                {
                  ATerm n_98 = NULL;
                  n_98 = t;
                  t = SSL_is_string(n_98);
                  return(t);
                }
                t = _2_0(n_18, _id, t);
                if(match_cons(t, sym__2))
                  {
                    k_98 = ATgetArgument(t, 0);
                    l_98 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(k_98, l_98);
                m_98 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, m_98);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
  ATerm x_65 = t;
  int y_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_98 = NULL;
      r_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_98, term_f_66);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_65);
    }
  else
    {
      t = x_65;
      {
        ATerm o_18 (ATerm t)
        {
          t = term_g_66;
          return(t);
        }
        t = debug_1_0(o_18, t);
        _fail(t);
      }
    }
  o_98 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(q_98);
  p_98 = t;
  t = o_98;
  t = fclose_0_0(t);
  t = p_98;
  return(t);
}
ATerm split_2_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm t)
{
  ATerm t_98 = NULL,x_98 = NULL,y_98 = NULL;
  t_98 = t;
  t = h_121(t);
  x_98 = t;
  t = t_98;
  t = i_121(t);
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_98, y_98);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL;
  g_99 = t;
  {
    ATerm h_66 = t;
    int i_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_18 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              h_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(p_18, t);
        ;
        LocalPopChoice(i_66);
      }
    else
      {
        t = h_66;
        t = term_j_66;
        h_99 = t;
      }
    t = g_99;
    {
      ATerm q_18 (ATerm t)
      {
        t = not_null(h_99);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, q_18, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm r_18 (ATerm t)
  {
    ATerm j_99 = NULL;
    j_99 = t;
    if(match_string(t, "-k"))
      {
        t = j_99;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = j_99;
      }
    return(t);
  }
  ATerm s_18 (ATerm t)
  {
    ATerm k_99 = NULL,l_99 = NULL;
    k_99 = t;
    t = SSL_string_to_int(k_99);
    l_99 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), l_99);
    t = k_99;
    return(t);
  }
  ATerm t_18 (ATerm t)
  {
    t = term_k_66;
    return(t);
  }
  t = ArgOption_3_0(r_18, s_18, t_18, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_66 = t;
  int m_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 (ATerm t)
      {
        ATerm n_99 = NULL;
        n_99 = t;
        if(match_string(t, "-S"))
          {
            t = n_99;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = n_99;
          }
        return(t);
      }
      ATerm v_18 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_t_66;
        return(t);
      }
      ATerm w_18 (ATerm t)
      {
        t = term_u_66;
        return(t);
      }
      t = Option_3_0(u_18, v_18, w_18, t);
      ;
      LocalPopChoice(m_66);
    }
  else
    {
      t = l_66;
      {
        ATerm v_66 = t;
        int w_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_18 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_18 (ATerm t)
            {
              ATerm o_99 = NULL,p_99 = NULL;
              o_99 = t;
              t = SSL_string_to_int(o_99);
              p_99 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_99);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, o_99);
              return(t);
            }
            ATerm a_19 (ATerm t)
            {
              t = term_x_66;
              return(t);
            }
            t = ArgOption_3_0(x_18, z_18, a_19, t);
            ;
            LocalPopChoice(w_66);
          }
        else
          {
            t = v_66;
            {
              ATerm b_19 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_19 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_y_66;
                return(t);
              }
              ATerm f_19 (ATerm t)
              {
                t = term_z_66;
                return(t);
              }
              t = Option_3_0(b_19, c_19, f_19, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm a_67 = t;
  int b_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(b_67);
    }
  else
    {
      t = a_67;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm r_99 = NULL;
    r_99 = t;
    if(match_string(t, "-o"))
      {
        t = r_99;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = r_99;
      }
    return(t);
  }
  ATerm h_19 (ATerm t)
  {
    ATerm s_99 = NULL;
    s_99 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_99);
    t = (ATerm) ATmakeAppl(sym_Output_1, s_99);
    return(t);
  }
  ATerm i_19 (ATerm t)
  {
    t = term_f_67;
    return(t);
  }
  t = ArgOption_3_0(g_19, h_19, i_19, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm g_67 = t;
  int h_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(h_67);
    }
  else
    {
      t = g_67;
      {
        ATerm j_19 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_19 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_67;
          return(t);
        }
        ATerm l_19 (ATerm t)
        {
          t = term_j_67;
          return(t);
        }
        t = Option_3_0(j_19, k_19, l_19, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL;
  v_99 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = v_99;
      t = register_usage_1_0(m_0, t);
    }
  else
    {
      ATerm d_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_99 = ATgetFirst((ATermList) t);
          x_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_99 = ATgetFirst((ATermList) t);
          z_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_99;
      t = i_0(t);
      t = y_99;
      t = k_0(t);
      d_100 = t;
      t = (ATerm) ATinsert(CheckATermList(z_99), d_100);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm m_19 (ATerm t)
  {
    ATerm f_100 = NULL;
    f_100 = t;
    if(match_string(t, "-i"))
      {
        t = f_100;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = f_100;
      }
    return(t);
  }
  ATerm n_19 (ATerm t)
  {
    ATerm g_100 = NULL;
    g_100 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_100);
    t = (ATerm) ATmakeAppl(sym_Input_1, g_100);
    return(t);
  }
  ATerm o_19 (ATerm t)
  {
    t = term_k_67;
    return(t);
  }
  t = ArgOption_3_0(m_19, n_19, o_19, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_67 = t;
  int n_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_67);
    }
  else
    {
      t = m_67;
      {
        ATerm o_67 = t;
        int t_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(t_67);
          }
        else
          {
            t = o_67;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_29;
  t = whoami_0_0(t);
  h_100 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_100));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_67;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm t)
{
  ATerm v_67 = t;
  int w_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_119(t);
      ;
      LocalPopChoice(w_67);
    }
  else
    {
      t = v_67;
      {
        ATerm k_100 = NULL,l_100 = NULL,o_100 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_100 = ATgetFirst((ATermList) t);
            l_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_100;
        t = foldr_2_0(s_119, t_119, t);
        o_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_100, o_100);
        t = t_119(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  p_100 = t;
  t = SSL_explode_term(p_100);
  if(match_cons(t, sym__2))
    {
      ATerm x_67 = ATgetArgument(t, 0);
      q_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_100;
  t = foldr_2_0(l_123, m_123, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_100 = NULL;
  t = times_0_0(t);
  {
    ATerm p_19 (ATerm t)
    {
      t = term_c_30;
      return(t);
    }
    ATerm q_19 (ATerm t)
    {
      ATerm s_100 = NULL,t_100 = NULL;
      if(match_cons(t, sym__2))
        {
          s_100 = ATgetArgument(t, 0);
          t_100 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm y_67 = t;
        int z_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(s_100, t_100);
            ;
            LocalPopChoice(z_67);
          }
        else
          {
            t = y_67;
            t = SSL_addr(s_100, t_100);
          }
      }
      return(t);
    }
    t = crush_2_0(p_19, q_19, t);
    r_100 = t;
    t = SSL_TicksToSeconds(r_100);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  c_101 = t;
  if(match_cons(t, sym__2))
    {
      d_101 = ATgetArgument(t, 0);
      e_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_68 = t;
    int b_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_101;
        if((d_101 != t))
          {
            _fail(t);
          }
        t = c_101;
        ;
        LocalPopChoice(b_68);
      }
    else
      {
        t = a_68;
        t = c_101;
        {
          ATerm i_68 = t;
          int j_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_101, e_101);
              ;
              LocalPopChoice(j_68);
            }
          else
            {
              t = i_68;
              t = SSL_gtr(d_101, e_101);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_101, e_101);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm r_19 (ATerm t)
  {
    ATerm h_101 = NULL,i_101 = NULL;
    h_101 = t;
    t = term_l_23;
    t = get_config_0_0(t);
    i_101 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_101, term_r_32);
    t = geq_0_0(t);
    t = h_101;
    t = g_127(t);
    return(t);
  }
  t = try_1_0(r_19, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm s_19 (ATerm t)
  {
    ATerm k_101 = NULL,l_101 = NULL;
    t = run_time_0_0(t);
    k_101 = t;
    t = term_c_29;
    t = whoami_0_0(t);
    l_101 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), k_101), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), l_101));
    t = (ATerm) ATmakeAppl(sym__2, term_k_68, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_68), k_101), term_t_68), l_101));
    return(t);
  }
  t = if_verbose1_1_0(s_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm d_130 (ATerm), ATerm t)
{
  ATerm v_68 = t;
  int w_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_68;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_68);
    }
  else
    {
      t = v_68;
      {
        ATerm t_19 (ATerm t)
        {
          ATerm y_68 = t;
          int z_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_68);
            }
          else
            {
              t = y_68;
              {
                ATerm a_69 = t;
                int b_69 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_69);
                  }
                else
                  {
                    t = a_69;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(t_19, t);
      }
    }
  t = d_130(t);
  return(t);
}
ATerm map_1_0 (ATerm r_113 (ATerm), ATerm t)
{
  ATerm n_101 (ATerm t)
  {
    ATerm c_69 = t;
    int d_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_69);
      }
    else
      {
        t = c_69;
        t = Cons_2_0(r_113, n_101, t);
      }
    return(t);
  }
  t = n_101(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_101 = ATgetFirst((ATermList) t);
      q_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_101 = NULL,v_101 = NULL;
        t = q_101;
        t = g_0(t);
        u_101 = t;
        t = p_101;
        t = f_0(t);
        v_101 = t;
        t = q_101;
        {
          ATerm u_19 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_101), v_101);
            return(t);
          }
          t = reverse_acc_2_0(f_0, u_19, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_29;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm v_19 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, v_19, t);
  return(t);
}
ATerm Program_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL;
  z_101 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_101);
  w_101 = t;
  t = x_101;
  t = q_104(t);
  y_101 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_101), w_101);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_69 = t;
  int f_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_67;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_69);
    }
  else
    {
      t = e_69;
      {
        ATerm w_19 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(w_19, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_g_69;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm x_19 (ATerm t)
    {
      ATerm d_102 = NULL;
      d_102 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_102), term_h_69);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(x_19, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL,h_102 = NULL;
  h_102 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_102);
  e_102 = t;
  t = f_102;
  t = r_104(t);
  g_102 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_102), e_102);
  return(t);
}
ATerm fetch_1_0 (ATerm b_114 (ATerm), ATerm t)
{
  ATerm l_102 (ATerm t)
  {
    ATerm i_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_114, _id, t);
        ;
        LocalPopChoice(j_69);
      }
    else
      {
        t = i_69;
        t = Cons_2_0(_id, l_102, t);
      }
    return(t);
  }
  t = l_102(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm d_131 (ATerm), ATerm t)
{
  t = fetch_1_0(d_131, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL;
  n_102 = t;
  {
    ATerm l_69 = t;
    int m_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_102;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_69 = ATgetFirst((ATermList) t);
                ATerm o_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_102;
          }
        ;
        LocalPopChoice(m_69);
      }
    else
      {
        t = l_69;
        t = (ATerm) ATinsert(ATempty, n_102);
      }
    o_102 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), o_102);
    t = n_102;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_67;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm p_69 = t;
  int r_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_106(t);
      ;
      LocalPopChoice(r_69);
    }
  else
    {
      t = p_69;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_69 = t;
  int b_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm a_20 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_m_70;
        return(t);
      }
      ATerm b_20 (ATerm t)
      {
        t = term_n_70;
        return(t);
      }
      t = Option_3_0(z_19, a_20, b_20, t);
      ;
      LocalPopChoice(b_70);
    }
  else
    {
      t = s_69;
      {
        ATerm c_20 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm d_20 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_70;
          return(t);
        }
        ATerm h_20 (ATerm t)
        {
          t = term_z_70;
          return(t);
        }
        t = Option_3_0(c_20, d_20, h_20, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL;
  if(match_cons(t, sym__3))
    {
      u_102 = ATgetArgument(t, 0);
      v_102 = ATgetArgument(t, 1);
      w_102 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_102, v_102);
  {
    ATerm a_71 = t;
    int b_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_71 = ATgetArgument(t, 0);
            ATerm d_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_102, v_102);
        ;
        LocalPopChoice(b_71);
      }
    else
      {
        t = a_71;
        t = (ATerm) ATempty;
      }
    x_102 = t;
    t = SSL_table_put(u_102, v_102, (ATerm) ATinsert(CheckATermList(x_102), w_102));
    t = (ATerm) ATmakeAppl(sym__3, u_102, v_102, w_102);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm c_103 = NULL;
  t = term_c_29;
  t = i_132(t);
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_71, term_f_71, c_103);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL;
  e_103 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = e_103;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm j_103 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_103 = ATgetFirst((ATermList) t);
          g_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_103;
      t = a_0(t);
      t = term_c_29;
      t = b_0(t);
      j_103 = t;
      t = (ATerm) ATinsert(CheckATermList(g_103), j_103);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_20 (ATerm t)
  {
    ATerm l_103 = NULL;
    l_103 = t;
    if(match_string(t, "--help"))
      {
        t = l_103;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = l_103;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = l_103;
          }
      }
    return(t);
  }
  ATerm k_20 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_g_71;
    return(t);
  }
  ATerm l_20 (ATerm t)
  {
    t = term_j_71;
    return(t);
  }
  t = Option_3_0(i_20, k_20, l_20, t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL;
  r_103 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_103 = ATgetFirst((ATermList) t);
      o_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_103);
  m_103 = t;
  t = n_103;
  t = y_91(t);
  p_103 = t;
  t = o_103;
  t = z_91(t);
  q_103 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(q_103), p_103), m_103);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_132 (ATerm), ATerm t)
{
  ATerm y_103 = NULL;
  y_103 = t;
  {
    ATerm m_20 (ATerm t)
    {
      t = term_l_71;
      t = g_132(t);
      return(t);
    }
    t = try_1_0(m_20, t);
    t = y_103;
    {
      ATerm n_20 (ATerm t)
      {
        ATerm z_103 = NULL;
        z_103 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_103);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_103);
        return(t);
      }
      ATerm o_20 (ATerm t)
      {
        ATerm m_71 = t;
        int n_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_71 = t;
            int p_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_71);
              }
            else
              {
                t = o_71;
                t = g_132(t);
                t = Cons_2_0(_id, o_20, t);
              }
            ;
            LocalPopChoice(n_71);
          }
        else
          {
            t = m_71;
            {
              ATerm b_104 = NULL,c_104 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_104 = ATgetFirst((ATermList) t);
                  c_104 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_104), (ATerm) ATmakeAppl(sym_Undefined_1, b_104));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_20, o_20, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm f_132 (ATerm), ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = i_104;
  {
    ATerm p_20 (ATerm t)
    {
      ATerm q_71 = t;
      int r_71 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_132(t);
          ;
          LocalPopChoice(r_71);
        }
      else
        {
          t = q_71;
          {
            ATerm s_71 = t;
            int t_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(t_71);
              }
            else
              {
                t = s_71;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_20, t);
    {
      ATerm q_20 (ATerm t)
      {
        ATerm u_71 = t;
        int v_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_104 = NULL;
            p_104 = t;
            {
              ATerm w_71 = t;
              int x_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_104;
                  {
                    ATerm y_71 = t;
                    int z_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_x_68;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(z_71);
                      }
                    else
                      {
                        t = y_71;
                        {
                          ATerm r_20 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(r_20, t);
                        }
                      }
                    t = p_104;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(x_71);
                }
              else
                {
                  t = w_71;
                  t = term_d_70;
                  t = get_config_0_0(t);
                  t = p_104;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(v_71);
          }
        else
          {
            t = u_71;
            {
              ATerm s_20 (ATerm t)
              {
                ATerm t_20 (ATerm t)
                {
                  j_104 = t;
                  return(t);
                }
                t = Undefined_1_0(t_20, t);
                return(t);
              }
              t = option_defined_1_0(s_20, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_104)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_k_68, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_104)), term_a_72));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(q_20, t);
      k_104 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = k_104;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm t)
{
  ATerm p_15 = NULL;
  t = parse_options_1_0(f_130, t);
  p_15 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), p_15);
  t = p_15;
  t = h_130(t);
  {
    ATerm b_72 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_130, t);
        ;
        LocalPopChoice(d_72);
      }
    else
      {
        t = b_72;
        {
          ATerm e_72 = t;
          int f_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_130(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_72);
            }
          else
            {
              t = e_72;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm u_129 (ATerm), ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm t)
{
  ATerm u_20 (ATerm t)
  {
    ATerm g_72 = t;
    int h_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_129(t);
        ;
        LocalPopChoice(h_72);
      }
    else
      {
        t = g_72;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm v_20 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(u_129, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_20, w_129, x_129, v_20, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm t)
{
  ATerm w_20 (ATerm t)
  {
    ATerm x_20 (ATerm t)
    {
      ATerm u_104 = NULL,v_104 = NULL;
      u_104 = t;
      t = term_u_67;
      t = get_config_0_0(t);
      v_104 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, v_104));
      t = u_104;
      return(t);
    }
    t = if_verbose2_1_0(x_20, t);
    return(t);
  }
  t = iowrap_4_0(o_129, p_129, q_129, w_20, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm t)
{
  t = iowrap_3_0(m_129, n_129, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm y_20 (ATerm t)
  {
    t = _2_0(_id, j_129, t);
    return(t);
  }
  t = iowrap_2_0(y_20, _fail, t);
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
